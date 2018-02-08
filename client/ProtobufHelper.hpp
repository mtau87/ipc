#pragma once
#include "soci/soci.h"
#include "soci/boost-fusion.h"
#include "soci/soci-sqlite3.h"
#include <boost/fusion/include/define_struct.hpp>
#include <boost/fusion/include/for_each.hpp>
#include "Common.h"
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <sstream>
#include <set>
#include "db1.pb.h"
#include "db2.pb.h"
#include "message_plan_list.pb.h"
#include "message_product_list.pb.h"
#include "message_material_list.pb.h"
#include "message_product.pb.h"
#include "message_plan_save.pb.h"
#include "message_product_save.pb.h"
#include "message_material_save.pb.h"

namespace D5
{
class CProtobufHelper: public CSingleton<CProtobufHelper>
{
public:

    /*
    ** This function is used to load the contents of a database file on disk
    ** into the "main" database of open database connection pInMemory, or
    ** to save the current contents of the database opened by pInMemory into
    ** a database file on disk. pInMemory is probably an in-memory database,
    ** but this function will also work fine if it is not.
    **
    ** Parameter zFilename points to a nul-terminated string containing the
    ** name of the database file on disk to load from or save to. If parameter
    ** isSave is non-zero, then the contents of the file zFilename are
    ** overwritten with the contents of the database opened by pInMemory. If
    ** parameter isSave is zero, then the contents of the database opened by
    ** pInMemory are replaced by data loaded from the file zFilename.
    **
    ** If the operation is successful, SQLITE_OK is returned. Otherwise, if
    ** an error occurs, an SQLite error code is returned.
    */
    int LoadOrSaveDb(sqlite_api::sqlite3 *pInMemory, const char *zFilename, int isSave)
    {
        int rc;                   /* Function return code */
        sqlite_api::sqlite3 *pFile;           /* Database connection opened on zFilename */
        sqlite_api::sqlite3_backup *pBackup;  /* Backup object used to copy data */
        sqlite_api::sqlite3 *pTo;             /* Database to copy to (pFile or pInMemory) */
        sqlite_api::sqlite3 *pFrom;           /* Database to copy from (pFile or pInMemory) */

        /* Open the database file identified by zFilename. Exit early if this fails
        ** for any reason. */
        rc = sqlite_api::sqlite3_open(zFilename, &pFile);
        if( rc==SQLITE_OK )
        {

            /* If this is a 'load' operation (isSave==0), then data is copied
            ** from the database file just opened to database pInMemory.
            ** Otherwise, if this is a 'save' operation (isSave==1), then data
            ** is copied from pInMemory to pFile.  Set the variables pFrom and
            ** pTo accordingly. */
            pFrom = (isSave ? pInMemory : pFile);
            pTo   = (isSave ? pFile     : pInMemory);

            /* Set up the backup procedure to copy from the "main" database of
            ** connection pFile to the main database of connection pInMemory.
            ** If something goes wrong, pBackup will be set to NULL and an error
            ** code and message left in connection pTo.
            **
            ** If the backup object is successfully created, call backup_step()
            ** to copy data from pFile to pInMemory. Then call backup_finish()
            ** to release resources associated with the pBackup object.  If an
            ** error occurred, then an error code and message will be left in
            ** connection pTo. If no error occurred, then the error code belonging
            ** to pTo is set to SQLITE_OK.
            */
            pBackup = sqlite_api::sqlite3_backup_init(pTo, "main", pFrom, "main");
            if( pBackup )
            {
                (void)sqlite_api::sqlite3_backup_step(pBackup, -1);
                (void)sqlite_api::sqlite3_backup_finish(pBackup);
            }
            rc = sqlite_api::sqlite3_errcode(pTo);
        }

        /* Close the database connection opened on database file zFilename
        ** and return the result of this function. */
        (void)sqlite_api::sqlite3_close(pFile);
        return rc;
    }

    void ConverFromHttpMaterialUnitToDbAssetMaterial(const ::d5::CMessageMaterialListUnit& src,  d5::db2::asset_material& des)
    {
        des.set_id(src.id());
        des.set_ue_path(src.uepath());
        des.set_title(src.title());
        des.set_mat_info(src.matinfo());
        des.set_thumbnail_url(src.thumbnailurl());
        des.set_is_del(src.isdel());
        des.set_user_id(src.userid());
        des.set_company_id(src.companyid());
        des.set_create_time(src.createtime());
        des.set_update_time(src.updatetime());
        des.set_category_id(src.categoryid());
        des.set_sync_status(2);
        des.set_pak_url(src.pakurl());
        des.set_dependent_file_list(src.dependentfilelist());
    }

    void ConverFromDbAssetMaterialToHttpMaterialUnit(const d5::db2::asset_material& src,  d5::CMessageHttpMaterialSave& des)
    {
        des.set_id(src.id());
        des.set_uepath(src.ue_path());
        des.set_title(src.title());
        des.set_matinfo(src.mat_info());
        des.set_thumbnailurl(src.thumbnail_url());
        des.set_createtime(src.create_time());
        des.set_updatetime(src.update_time());
        des.set_categoryid(src.category_id());
        des.set_pakurl(src.pak_url());
        des.set_dependentfilelist(src.dependent_file_list());
    }

    void ConverFromHttpPlanUnitToDbPlanDesign(const d5::CMessageHttpPlanUnit& src,  d5::db2::plan_design& des)
    {
        des.set_id(src.id());
        des.set_title(src.title());
        des.set_size(src.size());
        des.set_pak_url(src.pakurl());
        des.set_thumbnail_url(src.thumbnailurl());
        des.set_floor_edit_file_url(src.flooreditfileurl());
        des.set_detail_info(src.detailinfo());
        des.set_design_file_url(src.designfileurl());
        des.set_district_id(src.districtid());
        des.set_property_type_id(src.propertytypeid());
        des.set_room_type_id(src.roomtypeid());
        des.set_template_type_id(src.templatetypeid());
        des.set_is_del(src.isdel());
        des.set_create_time(src.createtime());
        des.set_update_time(src.updatetime());
        des.set_user_id(src.userid());
        des.set_company_id(src.companyid());
        des.set_sync_status(2);
        des.set_floor_edit_error_code(0);
        des.set_floor_ref_url(src.floorrefurl());
        des.set_floor_ref_width(src.floorrefwidth());
        des.set_floor_ref_height(src.floorrefheight());
        des.set_floor_ref_angle(0.0);
        des.set_group_id(src.groupid());
        des.set_condo_id(src.condoid());
        des.set_username(src.username());
        des.set_dependent_file_list(src.dependentfilelist());
        des.set_source(src.source());
        des.set_quotation_info(src.quotationinfo());
        des.set_is_private(src.isprivate());
    }

    void ConverFromProductUnitToDbProduct(const ::d5::CMessageProductUnit& src,  d5::db2::product& des)
    {
        des.set_id(src.id());
        des.set_title(src.title());
        des.set_description(src.description());
        des.set_price(src.price());
        des.set_create_time(src.createtime());
        des.set_update_time(src.updatetime());
        des.set_brand_id(src.brandid());
        des.set_product_type(src.producttype());
        des.set_is_del(src.isdel());
        des.set_user_id(src.userid());
        des.set_company_id(src.companyid());
        des.set_sync_status(2);
        des.set_category_id(src.categoryid());
        des.set_buy_url(src.buyurl());
        des.set_dependent_file_list(src.dependentfilelist());
        des.set_product_code(src.productcode());
    }

    void ConverFromFurnitureUnitToDbAssetFurniture(const ::d5::CMessageProductUnit_CMessageFurnitureUnit& src,  d5::db2::asset_furniture& des)
    {
        des.set_product_id(src.productid());
        des.set_ue_path(src.uepath());
        des.set_pak_url(src.pakurl());
        des.set_length(src.length());
        des.set_depth(src.depth());
        des.set_height(src.height());
        des.set_is_interactive(src.isinteractive());
        des.set_intelligent_type(src.intelligenttype());
        des.set_furniture_style_id(src.furniturestyleid());
        des.set_furniture_main_material_id(src.furnituremainmaterialid());
        des.set_detail_info(src.detailinfo());
    }

    void ConverFromProductBuildingMaterialToDbAssetBuildingMaterial(const ::d5::CMessageProductUnit_CMessageProductBuildingMaterial& src,  d5::db2::asset_building_material& des)
    {
        des.set_product_id(src.productid());
        des.set_is_for_floor(src.isforfloor());
        des.set_is_for_wall(src.isforwall());
        des.set_is_for_ceiling(src.isforceiling());
        des.set_material_id(src.materialid());
        des.set_detail_info(src.detailinfo());
        des.set_length(src.length());
        des.set_width(src.width());
    }

    void ConverFromProductImageUnitToDbProductImage(const ::d5::CMessageProductUnit_CMessageProductImageUnit& src,  d5::db2::product_image& des)
    {
        des.set_id(src.id());
        des.set_display_index(src.displayindex());
        des.set_file_url(src.fileurl());
        des.set_product_id(src.productid());
    }

    void ConverFromProductListToProductDetail(const ::d5::CMessageProductList &src, ::d5::db2::CMessageProductDetailResponse &des)
    {
        for (int i = 0; i < src.rows().size(); ++i)
        {
            const d5::CMessageProductUnit &listInfo = src.rows(i);

            ::d5::db2::CProductDetailUnit* pProductDetailUnit = des.add_list();
            d5::db2::product_detail_virtual &detailInfo = *(pProductDetailUnit->mutable_publicdata());
            detailInfo.set_id(listInfo.id());
            detailInfo.set_title(listInfo.title());
            detailInfo.set_description(listInfo.description());
            detailInfo.set_price(listInfo.price());
            detailInfo.set_create_time(listInfo.createtime());
            detailInfo.set_update_time(listInfo.updatetime());
            detailInfo.set_brand_id(listInfo.brandid());
            detailInfo.set_product_type(listInfo.producttype());
            detailInfo.set_is_del(listInfo.isdel());
            detailInfo.set_user_id(listInfo.userid());
            detailInfo.set_company_id(listInfo.companyid());
            detailInfo.set_sync_status(0);
            detailInfo.set_category_id(listInfo.categoryid());
            detailInfo.set_buy_url(listInfo.buyurl());
            detailInfo.set_dependent_file_list(listInfo.dependentfilelist());
            detailInfo.set_product_code(listInfo.productcode());

            const d5::CMessageProductUnit_CMessageFurnitureUnit &furnitureInfo = listInfo.furniture();
            detailInfo.set_furniture_product_id(furnitureInfo.productid());
            detailInfo.set_furniture_ue_path(furnitureInfo.uepath());
            detailInfo.set_furniture_pak_url(furnitureInfo.pakurl());
            detailInfo.set_furniture_length(furnitureInfo.length());
            detailInfo.set_furniture_depth(furnitureInfo.depth());
            detailInfo.set_furniture_height(furnitureInfo.height());
            detailInfo.set_furniture_is_interactive(furnitureInfo.isinteractive());
            detailInfo.set_furniture_intelligent_type(furnitureInfo.intelligenttype());
            detailInfo.set_furniture_furniture_style_id(furnitureInfo.furniturestyleid());
            detailInfo.set_furniture_furniture_main_material_id(furnitureInfo.furnituremainmaterialid());
            detailInfo.set_furniture_detail_info(furnitureInfo.detailinfo());

            for(int j = 0; j < furnitureInfo.furniturecoloridlist_size(); ++j)
            {
                pProductDetailUnit->add_furniturecoloridlist(furnitureInfo.furniturecoloridlist(j));
            }

            const d5::CMessageProductUnit_CMessageProductBuildingMaterial &buildingMaterialInfo = listInfo.buildingmaterial();
            detailInfo.set_building_material_product_id(buildingMaterialInfo.productid());
            detailInfo.set_building_material_is_for_floor(buildingMaterialInfo.isforfloor());
            detailInfo.set_building_material_is_for_wall(buildingMaterialInfo.isforwall());
            detailInfo.set_building_material_is_for_ceiling(buildingMaterialInfo.isforceiling());
            detailInfo.set_building_material_material_id(buildingMaterialInfo.materialid());
            detailInfo.set_building_material_detail_info(buildingMaterialInfo.detailinfo());
            detailInfo.set_building_material_length(buildingMaterialInfo.length());
            detailInfo.set_building_material_width(buildingMaterialInfo.width());

            for(int j = 0; j < listInfo.productimagelist_size(); ++j)
            {
                ::d5::db2::product_image* pProductImage = pProductDetailUnit->add_imagedata();
                ConverFromProductImageUnitToDbProductImage(listInfo.productimagelist(j), *pProductImage);
            }
            pProductDetailUnit->set_brandname(listInfo.brandtitle());

            if(!detailInfo.dependent_file_list().empty())
            {
                ConvertDenpendentStringToDenpendentList(detailInfo.dependent_file_list(), pProductDetailUnit->mutable_filelist());
            }
        }
        des.set_pagetotal(src.total());
    }

    void ConvertDenpendentStringToDenpendentList(const std::string& strDependent, ::d5::CMessageDependentPakList* pakListTemp)
    {
        if(strDependent.empty() || pakListTemp == NULL)
        {
            return;
        }

        std::vector<std::string> vecFileList;
        boost::split(vecFileList, strDependent, boost::is_any_of(","));
        std::set<std::string> setFileList(vecFileList.begin(), vecFileList.end());
        for(auto it = setFileList.begin(); it != setFileList.end(); it++)
        {
            if(boost::trim_copy(*it).size() <= 0)
            {
                continue;
            }
            pakListTemp->add_filelist(boost::trim_copy(*it));
        }
    }

    void ConvertDenpendentListToDependentString(const ::d5::CMessageDependentPakList& pakListTemp, std::string& strDependent)
    {
        if(pakListTemp.filelist_size() > 0)
        {
            std::set<std::string> setFileList;
            for(int i = 0; i < pakListTemp.filelist_size(); ++i)
            {
                if(pakListTemp.filelist(i).empty())
                {
                    continue;
                }
                setFileList.insert(pakListTemp.filelist(i));
            }

            if(setFileList.size() > 0)
            {
                std::stringstream ss;
                auto itS = setFileList.begin();
                ss << *itS;
                itS++;
                for(; itS != setFileList.end(); itS++)
                {
                    ss << "," << *itS;
                }
                strDependent = ss.str();
            }
        }
    }

    void ConverFromDbPlanDesignToHttpPlanSave(const ::d5::db2::plan_design &src, ::d5::CMessageHttpPlanSave &des)
    {
        des.set_id(src.id());
        des.set_title(src.title());
        des.set_size(src.size());
        des.set_pakurl(src.pak_url());
        des.set_thumbnailurl(src.thumbnail_url());
        des.set_flooreditfileurl(src.floor_edit_file_url());
        des.set_detailinfo(src.detail_info());
        des.set_designfileurl(src.design_file_url());
        des.set_districtid(src.district_id());
        des.set_propertytypeid(src.property_type_id());
        des.set_roomtypeid(src.room_type_id());
        des.set_templatetypeid(src.template_type_id());
        des.set_createtime(src.create_time());
        des.set_updatetime(src.update_time());
        des.set_floorrefurl(src.floor_ref_url());
        des.set_floorrefwidth(src.floor_ref_width());
        des.set_floorrefheight(src.floor_ref_height());
        des.set_groupid(src.group_id());
        des.set_condoid(src.condo_id());
        des.set_dependentfilelist(src.dependent_file_list());
        des.set_source(src.source());
        des.set_quotationinfo(src.quotation_info());
        des.set_isprivate(src.is_private());
    }

    void ConverFromDbFurnitureToHttpProductUnit(const ::d5::db2::product &src1
            , const std::vector<std::shared_ptr<::d5::db2::product_image>> &src2
            , const std::shared_ptr<::d5::db2::product_brand_temp> src3
            , const ::d5::db2::asset_furniture &src4
            , const std::vector<std::shared_ptr<::d5::db2::furniture_color_map>> &src5
            , std::shared_ptr<::d5::CMessageHttpProductUnit> &des)
    {
        des->set_id(src1.id());
        des->set_title(src1.title());
        des->set_description(src1.description());
        des->set_price(src1.price());
        des->set_createtime(src1.create_time());
        des->set_updatetime(src1.update_time());
        des->set_brandid(src1.brand_id());
        des->set_producttype(src1.product_type());
        des->set_categoryid(src1.category_id());
        des->set_buyurl(src1.buy_url());
        des->set_dependentfilelist(src1.dependent_file_list());
        des->set_productcode(src1.product_code());

        for (auto iter = src2.begin(); iter != src2.end(); ++iter)
        {
            ::d5::CMessageHttpProductUnit_CMessageHttpProductImageUnit *productImageUnit = des->mutable_productimagelist()->Add();
            if (*iter)
            {
                productImageUnit->set_id((*iter)->id());
                productImageUnit->set_displayindex((*iter)->display_index());
                productImageUnit->set_fileurl((*iter)->file_url());
                productImageUnit->set_productid((*iter)->product_id());
            }
        }

        if (src3.get())
            des->set_brand(src3->brand());

        des->mutable_furniture()->set_productid(src4.product_id());
        des->mutable_furniture()->set_uepath(src4.ue_path());
        des->mutable_furniture()->set_pakurl(src4.pak_url());
        des->mutable_furniture()->set_length(src4.length());
        des->mutable_furniture()->set_depth(src4.depth());
        des->mutable_furniture()->set_height(src4.height());
        des->mutable_furniture()->set_isinteractive(src4.is_interactive());
        des->mutable_furniture()->set_intelligenttype(src4.intelligent_type());
        des->mutable_furniture()->set_furniturestyleid(src4.furniture_style_id());
        des->mutable_furniture()->set_furnituremainmaterialid(src4.furniture_main_material_id());
        des->mutable_furniture()->set_detailinfo(src4.detail_info());

        for (auto iter = src5.begin(); iter != src5.end(); ++iter)
        {
            des->mutable_furniture()->add_furniturecoloridlist((*iter)->color_id());
        }
    }

    void ConverFromDbBuildingMaterialToHttpProductUnit(const ::d5::db2::product &src1
            , const std::vector<std::shared_ptr<::d5::db2::product_image>> &src2
            , const std::shared_ptr<::d5::db2::product_brand_temp> src3
            , const ::d5::db2::asset_building_material &src4
            , std::shared_ptr<::d5::CMessageHttpProductUnit> &des)
    {
        des->set_id(src1.id());
        des->set_title(src1.title());
        des->set_description(src1.description());
        des->set_price(src1.price());
        des->set_createtime(src1.create_time());
        des->set_updatetime(src1.update_time());
        des->set_brandid(src1.brand_id());
        des->set_producttype(src1.product_type());
        des->set_categoryid(src1.category_id());
        des->set_buyurl(src1.buy_url());
        des->set_dependentfilelist(src1.dependent_file_list());
        des->set_productcode(src1.product_code());

        for (auto iter = src2.begin(); iter != src2.end(); ++iter)
        {
            ::d5::CMessageHttpProductUnit_CMessageHttpProductImageUnit *productImageUnit = des->mutable_productimagelist()->Add();
            if (*iter)
            {
                productImageUnit->set_id((*iter)->id());
                productImageUnit->set_displayindex((*iter)->display_index());
                productImageUnit->set_fileurl((*iter)->file_url());
                productImageUnit->set_productid((*iter)->product_id());
            }
        }

        if (src3.get())
            des->set_brand(src3->brand());

        des->mutable_buildingmaterial()->set_productid(src4.product_id());
        des->mutable_buildingmaterial()->set_isforfloor(src4.is_for_floor());
        des->mutable_buildingmaterial()->set_isforwall(src4.is_for_wall());
        des->mutable_buildingmaterial()->set_isforceiling(src4.is_for_ceiling());
        des->mutable_buildingmaterial()->set_materialid(src4.material_id());
        des->mutable_buildingmaterial()->set_detailinfo(src4.detail_info());
        des->mutable_buildingmaterial()->set_length(src4.length());
        des->mutable_buildingmaterial()->set_width(src4.width());
    }


    bool ConvertRow(std::stringstream& ss, const soci::row& row, const std::string& name)
    {
        soci::column_properties pro = row.get_properties(name);

        switch(pro.get_data_type())
        {
        case soci::data_type::dt_string:
        {
            std::string val = (std::string)row.get<std::string>(name, "");
            ss << val;
            break;
        }

        case soci::data_type::dt_date:
        {
            std::string val = (std::string)row.get<std::string>(name, "");
            ss << val;
            break;
        }

        case soci::data_type::dt_double:
        {
            double val = (double)row.get<double>(name, 0.0);
            ss << val;
            break;
        }

        case soci::data_type::dt_integer:
        {
            int val = (int)row.get<int>(name, 0);
            ss << val;
            break;
        }

        case soci::data_type::dt_long_long:
        {
            long long val = (long long)row.get<long long>(name, 0);
            ss << val;
            break;
        }

        case soci::data_type::dt_unsigned_long_long:
        {
            unsigned long long val = (unsigned long long)row.get<unsigned long long>(name, 0);
            ss << val;
            break;
        }

        default:
        {
            std::cerr << "not support db type " << pro.get_data_type() << std::endl;
            return false;
        }
        }

        return true;
    }

    void ReflectionFill(::google::protobuf::Message* message, const ::google::protobuf::FieldDescriptor* descriptor, const ::google::protobuf::Reflection* reflection, const soci::row& row)
    {

        assert(descriptor != NULL);

        //current not support for repeated label
        if(descriptor->label() == ::google::protobuf::FieldDescriptor::LABEL_REPEATED)
        {
            return;
        }

        using namespace ::google::protobuf;

        const char* name = descriptor->name().c_str();

        try
        {
            switch(descriptor->type())
            {
            case FieldDescriptor::TYPE_FIXED64:
            case FieldDescriptor::TYPE_INT64:
            {
                std::stringstream ss;

                if(ConvertRow(ss, row, name))
                {
                    long long res = 0;
                    ss >> res;
                    reflection->SetInt64(message, descriptor, res);
                }

                break;
            }

            case FieldDescriptor::TYPE_UINT64:
            {
                std::stringstream ss;

                if(ConvertRow(ss, row, name))
                {
                    unsigned long long res = 0;
                    ss >> res;
                    reflection->SetInt64(message, descriptor, res);
                }

                break;
            }

            case FieldDescriptor::TYPE_FIXED32:
            case FieldDescriptor::TYPE_INT32:
            {
                std::stringstream ss;

                if(ConvertRow(ss, row, name))
                {
                    int res = 0;
                    ss >> res;
                    reflection->SetInt32(message, descriptor, res);
                }

                break;
            }

            case FieldDescriptor::TYPE_UINT32:
            {
                std::stringstream ss;

                if(ConvertRow(ss, row, name))
                {
                    unsigned int res = 0;
                    ss >> res;
                    reflection->SetInt32(message, descriptor, res);
                }

                break;
            }

            case FieldDescriptor::TYPE_STRING:
            {
                std::stringstream ss;

                if(ConvertRow(ss, row, name))
                {
                    std::string res = ss.str();
                    reflection->SetString(message, descriptor, res);
                }

                break;
            }

            case FieldDescriptor::TYPE_BYTES:
            {
                std::stringstream ss;

                if(ConvertRow(ss, row, name))
                {
                    std::string res = ss.str();
                    reflection->SetString(message, descriptor, res);
                }

                break;
            }

            case FieldDescriptor::TYPE_DOUBLE:
            {
                std::stringstream ss;

                if(ConvertRow(ss, row, name))
                {
                    double res = 0;
                    ss >> res;
                    reflection->SetDouble(message, descriptor, res);
                }

                break;
            }

            case FieldDescriptor::TYPE_FLOAT:
            {
                std::stringstream ss;

                if(ConvertRow(ss, row, name))
                {
                    float res = 0;
                    ss >> res;
                    reflection->SetFloat(message, descriptor, res);
                }

                break;
            }

            case FieldDescriptor::TYPE_BOOL:
            {
                std::stringstream ss;

                if(ConvertRow(ss, row, name))
                {
                    bool res = 0;
                    ss >> res;
                    reflection->SetBool(message, descriptor, res);
                }

                break;
            }

            default:
                std::cerr << "not support type " << descriptor->type() << std::endl;
            }
        }
        catch(soci::soci_error const& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }

    template<class T>
    void Convert(const soci::row& row, std::shared_ptr<T>& data)
    {
        ::google::protobuf::Message* message = CCommonTools::instance()->CreateMessage(T::descriptor()->full_name());
        const ::google::protobuf::Reflection* reflection = message->GetReflection();
        const ::google::protobuf::Descriptor* descriptor = message->GetDescriptor();

        for(int i = 0; i < descriptor->field_count(); ++i)
        {
            ReflectionFill(message, descriptor->field(i), reflection, row);
        }

        data.reset((T*)(message));
    }
};

template<class T>
void operator >> (soci::rowset<soci::row>& rs, std::vector<std::shared_ptr<T> >& vec)
{
    for(auto it = rs.begin(); it != rs.end(); it++)
    {
        std::shared_ptr<T> data;
        CProtobufHelper::instance()->Convert(*it, data);
        vec.push_back(data);
    }
}

template<class T>
void operator >> (soci::rowset<soci::row>& rs, ::google::protobuf::RepeatedPtrField<T >* vec)
{
    for(auto it = rs.begin(); it != rs.end(); it++)
    {
        std::shared_ptr<T> data;
        CProtobufHelper::instance()->Convert(*it, data);
        T* item = vec->Add();
        item->CopyFrom(*data);
    }
}
}

namespace soci
{

template<> struct type_conversion<d5::db1::effect_mode>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db1::effect_mode & p)
    {
        p.set_id(v.get<int>("id"));
        p.set_mode_name(v.get<std::string>("mode_name"));
        p.set_mode_data(v.get<std::string>("mode_data"));
    }
    static void to_base(const d5::db1::effect_mode & p, values & v, indicator & ind)
    {
        v.set("id", p.id());
        v.set("mode_name", p.mode_name());
        v.set("mode_data", p.mode_data());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::asset_building_material>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::asset_building_material & p)
    {
        p.set_product_id(v.get<std::string>("product_id"));
        p.set_is_for_floor(v.get<int>("is_for_floor"));
        p.set_is_for_wall(v.get<int>("is_for_wall"));
        p.set_is_for_ceiling(v.get<int>("is_for_ceiling"));
        p.set_material_id(v.get<std::string>("material_id"));
        p.set_detail_info(v.get<std::string>("detail_info"));
        p.set_length(v.get<int>("length"));
        p.set_width(v.get<int>("width"));
    }
    static void to_base(const d5::db2::asset_building_material & p, values & v, indicator & ind)
    {
        v.set("product_id", p.product_id());
        v.set("is_for_floor", p.is_for_floor());
        v.set("is_for_wall", p.is_for_wall());
        v.set("is_for_ceiling", p.is_for_ceiling());
        v.set("material_id", p.material_id());
        v.set("detail_info", p.detail_info());
        v.set("length", p.length());
        v.set("width", p.width());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::files_map>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::files_map & p)
    {
        p.set_file(v.get<std::string>("file"));
        p.set_md5(v.get<std::string>("md5"));
        p.set_update_time(v.get<long long>("update_time"));
        p.set_length(v.get<long long>("length"));
        p.set_type(v.get<std::string>("type"));
    }
    static void to_base(const d5::db2::files_map & p, values & v, indicator & ind)
    {
        v.set("file", p.file());
        v.set("md5", p.md5());
        v.set("update_time", p.update_time());
        v.set("length", p.length());
        v.set("type", p.type());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::asset_furniture>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::asset_furniture & p)
    {
        p.set_product_id(v.get<std::string>("product_id"));
        p.set_ue_path(v.get<std::string>("ue_path"));
        p.set_pak_url(v.get<std::string>("pak_url"));
        p.set_length(v.get<double>("length"));
        p.set_depth(v.get<double>("depth"));
        p.set_height(v.get<double>("height"));
        p.set_is_interactive(v.get<int>("is_interactive"));
        p.set_intelligent_type(v.get<int>("intelligent_type"));
        p.set_furniture_style_id(v.get<int>("furniture_style_id"));
        p.set_furniture_main_material_id(v.get<int>("furniture_main_material_id"));
        p.set_detail_info(v.get<std::string>("detail_info"));
    }
    static void to_base(const d5::db2::asset_furniture & p, values & v, indicator & ind)
    {
        v.set("product_id", p.product_id());
        v.set("ue_path", p.ue_path());
        v.set("pak_url", p.pak_url());
        v.set("length", p.length());
        v.set("depth", p.depth());
        v.set("height", p.height());
        v.set("is_interactive", p.is_interactive());
        v.set("intelligent_type", p.intelligent_type());
        v.set("furniture_style_id", p.furniture_style_id());
        v.set("furniture_main_material_id", p.furniture_main_material_id());
        v.set("detail_info", p.detail_info());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::asset_furniture_style>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::asset_furniture_style & p)
    {
        p.set_id(v.get<std::string>("id"));
        p.set_title(v.get<std::string>("title"));
        p.set_thumbnail_url(v.get<std::string>("thumbnail_url"));
        p.set_display_index(v.get<int>("display_index"));
        p.set_product_id(v.get<std::string>("product_id"));
        p.set_create_time(v.get<long long>("create_time"));
        p.set_update_time(v.get<long long>("update_time"));
        p.set_sync_status(v.get<int>("sync_status"));
    }
    static void to_base(const d5::db2::asset_furniture_style & p, values & v, indicator & ind)
    {
        v.set("id", p.id());
        v.set("title", p.title());
        v.set("thumbnail_url", p.thumbnail_url());
        v.set("display_index", p.display_index());
        v.set("product_id", p.product_id());
        v.set("create_time", p.create_time());
        v.set("update_time", p.update_time());
        v.set("sync_status", p.sync_status());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::asset_furniture_style_material_map>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::asset_furniture_style_material_map & p)
    {
        p.set_id(v.get<std::string>("id"));
        p.set_material_id(v.get<std::string>("material_id"));
        p.set_style_id(v.get<std::string>("style_id"));
        p.set_material_index(v.get<int>("material_index"));
        p.set_element_name(v.get<std::string>("element_name"));
    }
    static void to_base(const d5::db2::asset_furniture_style_material_map & p, values & v, indicator & ind)
    {
        v.set("id", p.id());
        v.set("material_id", p.material_id());
        v.set("style_id", p.style_id());
        v.set("material_index", p.material_index());
        v.set("element_name", p.element_name());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::asset_material>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::asset_material & p)
    {
        p.set_id(v.get<std::string>("id"));
        p.set_title(v.get<std::string>("title"));
        p.set_ue_path(v.get<std::string>("ue_path"));
        p.set_mat_info(v.get<std::string>("mat_info"));
        p.set_thumbnail_url(v.get<std::string>("thumbnail_url"));
        p.set_is_del(v.get<int>("is_del"));
        p.set_is_private(v.get<int>("is_private"));
        p.set_user_id(v.get<int>("user_id"));
        p.set_company_id(v.get<int>("company_id"));
        p.set_create_time(v.get<long long>("create_time"));
        p.set_update_time(v.get<long long>("update_time"));
        p.set_category_id(v.get<int>("category_id"));
        p.set_metallic(v.get<int>("metallic"));
        p.set_roughness(v.get<int>("roughness"));
        p.set_emissive_color(v.get<int>("emissive_color"));
        p.set_type(v.get<int>("type"));
        p.set_is_repeat(v.get<int>("is_repeat"));
        p.set_is_submit(v.get<int>("is_submit"));
        p.set_source(v.get<int>("source"));
        p.set_sync_status(v.get<int>("sync_status"));
        p.set_pak_url(v.get<std::string>("pak_url"));
        p.set_dependent_file_list(v.get<std::string>("dependent_file_list"));
    }
    static void to_base(const d5::db2::asset_material & p, values & v, indicator & ind)
    {
        v.set("id", p.id());
        v.set("title", p.title());
        v.set("ue_path", p.ue_path());
        v.set("mat_info", p.mat_info());
        v.set("thumbnail_url", p.thumbnail_url());
        v.set("is_del", p.is_del());
        v.set("is_private", p.is_private());
        v.set("user_id", p.user_id());
        v.set("company_id", p.company_id());
        v.set("create_time", p.create_time());
        v.set("update_time", p.update_time());
        v.set("category_id", p.category_id());
        v.set("metallic", p.metallic());
        v.set("roughness", p.roughness());
        v.set("emissive_color", p.emissive_color());
        v.set("type", p.type());
        v.set("is_repeat", p.is_repeat());
        v.set("is_submit", p.is_submit());
        v.set("source", p.source());
        v.set("sync_status", p.sync_status());
        v.set("pak_url", p.pak_url());
        v.set("dependent_file_list", p.dependent_file_list());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::asset_material_category>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::asset_material_category & p)
    {
        p.set_id(v.get<int>("id"));
        p.set_title(v.get<std::string>("title"));
        p.set_parent_id(v.get<int>("parent_id"));
        p.set_level(v.get<int>("level"));
    }
    static void to_base(const d5::db2::asset_material_category & p, values & v, indicator & ind)
    {
        v.set("id", p.id());
        v.set("title", p.title());
        v.set("parent_id", p.parent_id());
        v.set("level", p.level());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::furniture_color_map>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::furniture_color_map & p)
    {
        p.set_color_id(v.get<int>("color_id"));
        p.set_product_id(v.get<std::string>("product_id"));
    }
    static void to_base(const d5::db2::furniture_color_map & p, values & v, indicator & ind)
    {
        v.set("color_id", p.color_id());
        v.set("product_id", p.product_id());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::GA>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::GA & p)
    {
        p.set_cid(v.get<int>("cid"));
    }
    static void to_base(const d5::db2::GA & p, values & v, indicator & ind)
    {
        v.set("cid", p.cid());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::plan_desgin_template_statu>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::plan_desgin_template_statu & p)
    {
        p.set_id(v.get<std::string>("id"));
        p.set_updatetime(v.get<long long>("updatetime"));
        p.set_depend_files(v.get<std::string>("depend_files"));
    }
    static void to_base(const d5::db2::plan_desgin_template_statu & p, values & v, indicator & ind)
    {
        v.set("id", p.id());
        v.set("updatetime", p.updatetime());
        v.set("depend_files", p.depend_files());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::plan_design>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::plan_design & p)
    {
        p.set_id(v.get<std::string>("id"));
        p.set_title(v.get<std::string>("title"));
        p.set_size(v.get<double>("size"));
        p.set_pak_url(v.get<std::string>("pak_url"));
        p.set_thumbnail_url(v.get<std::string>("thumbnail_url"));
        p.set_floor_edit_file_url(v.get<std::string>("floor_edit_file_url"));
        p.set_detail_info(v.get<std::string>("detail_info"));
        p.set_design_file_url(v.get<std::string>("design_file_url"));
        p.set_district_id(v.get<int>("district_id"));
        p.set_property_type_id(v.get<int>("property_type_id"));
        p.set_room_type_id(v.get<int>("room_type_id"));
        p.set_template_type_id(v.get<int>("template_type_id"));
        p.set_cook_stage(v.get<int>("cook_stage"));
        p.set_is_del(v.get<int>("is_del"));
        p.set_create_time(v.get<long long>("create_time"));
        p.set_update_time(v.get<long long>("update_time"));
        p.set_user_id(v.get<int>("user_id"));
        p.set_company_id(v.get<int>("company_id"));
        p.set_sync_status(v.get<int>("sync_status"));
        p.set_floor_edit_error_code(v.get<int>("floor_edit_error_code"));
        p.set_cook_id(v.get<std::string>("cook_id"));
        p.set_floor_ref_url(v.get<std::string>("floor_ref_url"));
        p.set_floor_ref_width(v.get<double>("floor_ref_width"));
        p.set_floor_ref_height(v.get<double>("floor_ref_height"));
        p.set_floor_ref_angle(v.get<double>("floor_ref_angle"));
        p.set_group_id(v.get<int>("group_id"));
        p.set_condo_id(v.get<int>("condo_id"));
        p.set_username(v.get<std::string>("username"));
        p.set_dependent_file_list(v.get<std::string>("dependent_file_list"));
        p.set_source(v.get<int>("source"));
        p.set_quotation_info(v.get<std::string>("quotation_info"));
        p.set_is_private(v.get<int>("is_private"));
    }
    static void to_base(const d5::db2::plan_design & p, values & v, indicator & ind)
    {
        v.set("id", p.id());
        v.set("title", p.title());
        v.set("size", p.size());
        v.set("pak_url", p.pak_url());
        v.set("thumbnail_url", p.thumbnail_url());
        v.set("floor_edit_file_url", p.floor_edit_file_url());
        v.set("detail_info", p.detail_info());
        v.set("design_file_url", p.design_file_url());
        v.set("district_id", p.district_id());
        v.set("property_type_id", p.property_type_id());
        v.set("room_type_id", p.room_type_id());
        v.set("template_type_id", p.template_type_id());
        v.set("cook_stage", p.cook_stage());
        v.set("is_del", p.is_del());
        v.set("create_time", p.create_time());
        v.set("update_time", p.update_time());
        v.set("user_id", p.user_id());
        v.set("company_id", p.company_id());
        v.set("sync_status", p.sync_status());
        v.set("floor_edit_error_code", p.floor_edit_error_code());
        v.set("cook_id", p.cook_id());
        v.set("floor_ref_url", p.floor_ref_url());
        v.set("floor_ref_width", p.floor_ref_width());
        v.set("floor_ref_height", p.floor_ref_height());
        v.set("floor_ref_angle", p.floor_ref_angle());
        v.set("group_id", p.group_id());
        v.set("condo_id", p.condo_id());
        v.set("username", p.username());
        v.set("dependent_file_list", p.dependent_file_list());
        v.set("source", p.source());
        v.set("quotation_info", p.quotation_info());
        v.set("is_private", p.is_private());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::product>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::product & p)
    {
        p.set_id(v.get<std::string>("id"));
        p.set_title(v.get<std::string>("title"));
        p.set_description(v.get<std::string>("description"));
        p.set_price(v.get<double>("price"));
        p.set_create_time(v.get<long long>("create_time"));
        p.set_update_time(v.get<long long>("update_time"));
        p.set_brand_id(v.get<int>("brand_id"));
        p.set_source(v.get<int>("source"));
        p.set_product_type(v.get<int>("product_type"));
        p.set_is_published(v.get<int>("is_published"));
        p.set_is_private(v.get<int>("is_private"));
        p.set_is_del(v.get<int>("is_del"));
        p.set_user_id(v.get<int>("user_id"));
        p.set_company_id(v.get<int>("company_id"));
        p.set_folder_name(v.get<std::string>("folder_name"));
        p.set_sync_status(v.get<int>("sync_status"));
        p.set_category_id(v.get<int>("category_id"));
        p.set_buy_url(v.get<std::string>("buy_url"));
        p.set_dependent_file_list(v.get<std::string>("dependent_file_list"));
        p.set_product_code(v.get<std::string>("product_code"));
    }
    static void to_base(const d5::db2::product & p, values & v, indicator & ind)
    {
        v.set("id", p.id());
        v.set("title", p.title());
        v.set("description", p.description());
        v.set("price", p.price());
        v.set("create_time", p.create_time());
        v.set("update_time", p.update_time());
        v.set("brand_id", p.brand_id());
        v.set("source", p.source());
        v.set("product_type", p.product_type());
        v.set("is_published", p.is_published());
        v.set("is_private", p.is_private());
        v.set("is_del", p.is_del());
        v.set("user_id", p.user_id());
        v.set("company_id", p.company_id());
        v.set("folder_name", p.folder_name());
        v.set("sync_status", p.sync_status());
        v.set("category_id", p.category_id());
        v.set("buy_url", p.buy_url());
        v.set("dependent_file_list", p.dependent_file_list());
        v.set("product_code", p.product_code());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::product_brand_temp>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::product_brand_temp & p)
    {
        p.set_product_id(v.get<std::string>("product_id"));
        p.set_brand(v.get<std::string>("brand"));
    }
    static void to_base(const d5::db2::product_brand_temp & p, values & v, indicator & ind)
    {
        v.set("product_id", p.product_id());
        v.set("brand", p.brand());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::product_category_map>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::product_category_map & p)
    {
        p.set_id(v.get<int>("id"));
        p.set_category_id(v.get<int>("category_id"));
        p.set_product_id(v.get<std::string>("product_id"));
    }
    static void to_base(const d5::db2::product_category_map & p, values & v, indicator & ind)
    {
        v.set("id", p.id());
        v.set("category_id", p.category_id());
        v.set("product_id", p.product_id());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::product_image>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::product_image & p)
    {
        p.set_id(v.get<std::string>("id"));
        p.set_display_index(v.get<int>("display_index"));
        p.set_file_url(v.get<std::string>("file_url"));
        p.set_product_id(v.get<std::string>("product_id"));
    }
    static void to_base(const d5::db2::product_image & p, values & v, indicator & ind)
    {
        v.set("id", p.id());
        v.set("display_index", p.display_index());
        v.set("file_url", p.file_url());
        v.set("product_id", p.product_id());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::setting_remember>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::setting_remember & p)
    {
        p.set_user_id(v.get<int>("user_id"));
        p.set_layout_page_tip(v.get<int>("layout_page_tip"));
        p.set_layout_do_not_show_again(v.get<int>("layout_do_not_show_again"));
        p.set_vr_capture_do_not_show_again(v.get<int>("vr_capture_do_not_show_again"));
        p.set_sync_data_timestamp(v.get<long long>("sync_data_timestamp"));
        p.set_scalability(v.get<std::string>("scalability"));
        p.set_magic_confirm_do_not_show_again(v.get<int>("magic_confirm_do_not_show_again"));
        p.set_decoration_page_tip(v.get<int>("decoration_page_tip"));
    }
    static void to_base(const d5::db2::setting_remember & p, values & v, indicator & ind)
    {
        v.set("user_id", p.user_id());
        v.set("layout_page_tip", p.layout_page_tip());
        v.set("layout_do_not_show_again", p.layout_do_not_show_again());
        v.set("vr_capture_do_not_show_again", p.vr_capture_do_not_show_again());
        v.set("sync_data_timestamp", p.sync_data_timestamp());
        v.set("scalability", p.scalability());
        v.set("magic_confirm_do_not_show_again", p.magic_confirm_do_not_show_again());
        v.set("decoration_page_tip", p.decoration_page_tip());
        ind = i_ok;
    }
};

template<> struct type_conversion<d5::db2::user_login>
{
    typedef values base_type;
    static void from_base(values const & v, indicator /* ind */, d5::db2::user_login & p)
    {
        p.set_name(v.get<std::string>("name"));
        p.set_password(v.get<std::string>("password"));
        p.set_laststatus(v.get<int>("lastStatus"));
    }
    static void to_base(const d5::db2::user_login & p, values & v, indicator & ind)
    {
        v.set("name", p.name());
        v.set("password", p.password());
        v.set("lastStatus", p.laststatus());
        ind = i_ok;
    }
};

}
