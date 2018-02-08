#-------------------------------------------------
#
# Project created by QtCreator 2017-05-12T10:32:51
#
#-------------------------------------------------

QT       -= core gui

TARGET = D5ServiceAPI
TEMPLATE = lib
CONFIG += staticlib

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
win32 {
    ## Windows common build here
    !contains(QMAKE_TARGET.arch, x86_64) {
        ## Windows x86 (32bit) specific build here
        } else {
        ## Windows x64 (64bit) specific build here

            CONFIG(debug, debug|release) {
            message("x86_64 api debug build")
                QMAKE_POST_LINK = copy /y debug\D5ServiceAPI.lib ..\..\..\..\ThirdParty\client\lib\x64\debug\D5ServiceAPI.lib
            } else {
            message("x86_64 api release build")
                QMAKE_POST_LINK = copy /y release\D5ServiceAPI.lib ..\..\..\..\ThirdParty\client\lib\x64\release\D5ServiceAPI.lib
            }
    }
}

INCLUDEPATH += $$PWD/../../Boost
INCLUDEPATH += $$PWD/../../client
INCLUDEPATH += $$PWD/../../Glog
INCLUDEPATH += $$PWD/../../gtest
INCLUDEPATH += $$PWD/../../sqlite
INCLUDEPATH += $$PWD/../../sqlite/sqlite
INCLUDEPATH += $$PWD/../../soci
INCLUDEPATH += $$PWD/../../protobuf

PROTO_SRCS = $$PWD/../message_terminate.pb.cc \
    $$PWD/../message_download.pb.cc \
    $$PWD/../message_login.pb.cc \
    $$PWD/../message_upload.pb.cc \
    $$PWD/../message_keepalive.pb.cc \
    $$PWD/../message_cook_status.pb.cc \
    $$PWD/../message_http_cook_status.pb.cc \
    $$PWD/../message_http_category_list.pb.cc \
    $$PWD/../message_category_list.pb.cc \
    $$PWD/../message_launch.pb.cc \
    $$PWD/../db2.pb.cc \
    $$PWD/../db1.pb.cc \
    $$PWD/../message_plan_list.pb.cc \
    $$PWD/../message_http_error.pb.cc \
    $$PWD/../message_task.pb.cc \
    $$PWD/../message_http_plan_list.pb.cc \
    $$PWD/../message_sync.pb.cc \
    $$PWD/../message_http_plan_group.pb.cc \
    $$PWD/../message_plan_group.pb.cc \
    $$PWD/../message_product_list.pb.cc \
    $$PWD/../message_http_update_list.pb.cc \
    $$PWD/../message_material_list.pb.cc \
    $$PWD/../message_plan_save.pb.cc \
    $$PWD/../message_plan_delete.pb.cc \
    $$PWD/../message_product_save.pb.cc \
    $$PWD/../message_product_delete.pb.cc \
    $$PWD/../message_material_delete.pb.cc \
    $$PWD/../message_material_save.pb.cc \
    $$PWD/../message_product_style_save.pb.cc \
    $$PWD/../message_plan_panorama_email.pb.cc \
    $$PWD/../message_keepalive.pb.cc \
    $$PWD/../message_feed_back.pb.cc \
    $$PWD/../message_channel_list.pb.cc \
    $$PWD/../message_plan_design.pb.cc \
    $$PWD/../message_product.pb.cc \
    $$PWD/../message_user_login.pb.cc \
    $$PWD/../message_setting_remember.pb.cc \
    $$PWD/../message_product_brand_temp.pb.cc \
    $$PWD/../message_plan_design_template.pb.cc \
    $$PWD/../message_furniture_color_map.pb.cc \
    $$PWD/../message_detail_info.pb.cc \
    $$PWD/../message_product_image.pb.cc \
    $$PWD/../message_asset_material.pb.cc \
    $$PWD/../message_common.pb.cc \
    $$PWD/../message_http_login.pb.cc \
    $$PWD/../message_feedback_suggestion.pb.cc \
    $$PWD/../message_widget.pb.cc

PROTO_HEADERS = $$PWD/../message_terminate.pb.h \
    $$PWD/../message_download.pb.h \
    $$PWD/../message_login.pb.h \
    $$PWD/../message_upload.pb.h \
    $$PWD/../message_keepalive.pb.h \
    $$PWD/../message_cook_status.pb.h \
    $$PWD/../message_http_cook_status.pb.h \
    $$PWD/../message_http_category_list.pb.h \
    $$PWD/../message_category_list.pb.h \
    $$PWD/../message_launch.pb.h \
    $$PWD/../db2.pb.h \
    $$PWD/../db1.pb.h \
    $$PWD/../message_plan_list.pb.h \
    $$PWD/../message_http_error.pb.h \
    $$PWD/../message_task.pb.h \
    $$PWD/../message_http_plan_list.pb.h \
    $$PWD/../message_sync.pb.h \
    $$PWD/../message_http_plan_group.pb.h \
    $$PWD/../message_plan_group.pb.h \
    $$PWD/../message_product_list.pb.h \
    $$PWD/../message_http_update_list.pb.h \
    $$PWD/../message_material_list.pb.h \
    $$PWD/../message_material_list.pb.h \
    $$PWD/../message_plan_save.pb.h \
    $$PWD/../message_plan_delete.pb.h \
    $$PWD/../message_product_save.pb.h \
    $$PWD/../message_product_delete.pb.h \
    $$PWD/../message_material_delete.pb.h \
    $$PWD/../message_material_save.pb.h \
    $$PWD/../message_product_style_save.pb.h \
    $$PWD/../message_plan_panorama_email.pb.h \
    $$PWD/../message_keepalive.pb.h \
    $$PWD/../message_feed_back.pb.h \
    $$PWD/../message_channel_list.pb.h \
    $$PWD/../message_plan_design.pb.h \
    $$PWD/../message_product.pb.h \
    $$PWD/../message_user_login.pb.h \
    $$PWD/../message_setting_remember.pb.h \
    $$PWD/../message_product_brand_temp.pb.h \
    $$PWD/../message_plan_design_template.pb.h \
    $$PWD/../message_furniture_color_map.pb.h \
    $$PWD/../message_detail_info.pb.h \
    $$PWD/../message_product_image.pb.h \
    $$PWD/../message_asset_material.pb.h \
    $$PWD/../message_common.pb.h \
    $$PWD/../message_http_login.pb.h \
    $$PWD/../message_feedback_suggestion.pb.h \
    $$PWD/../message_widget.pb.h

SOURCES += $$PROTO_SRCS

HEADERS += $$PROTO_HEADERS \
    $$PWD/../Common.h \
    $$PWD/../D5Asio.hpp \
    $$PWD/../D5Client.hpp \
    $$PWD/../D5Immerse.hpp \
    $$PWD/../D5IPC.hpp \
    $$PWD/../D5LogSink.h \
    $$PWD/../D5MainLoop.hpp \
    $$PWD/../D5MainLoopSender.hpp \
    $$PWD/../D5Message.hpp \
    $$PWD/../D5MessageImp.hpp \
    $$PWD/../D5Messager.hpp \
    $$PWD/../D5MessageTest.hpp \
    $$PWD/../D5Service.hpp \
    $$PWD/../ProtobufHelper.hpp \
    $$PWD/../immerse_worker.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DISTFILES += \
    $$PWD/../protobuf/message_download.proto \
    $$PWD/../protobuf/message_login.proto \
    $$PWD/../protobuf/message_terminate.proto \
    $$PWD/../protobuf/message_upload.proto \
    $$PWD/../protobuf/protobuf_generator.bat \
    $$PWD/../protobuf/message_keepalive.proto \
    $$PWD/../protobuf/message_cook_status.proto \
    $$PWD/../protobuf/message_http_cook_status.proto \
    $$PWD/../protobuf/message_http_category_list.proto \
    $$PWD/../protobuf/message_category_list.proto \
    $$PWD/../protobuf/message_launch.proto \
    $$PWD/../protobuf/db2.proto \
    $$PWD/../protobuf/db1.proto \
    $$PWD/../protobuf/message_plan_list.proto \
    $$PWD/../protobuf/message_http_error.proto \
    $$PWD/../protobuf/message_task.proto \
    $$PWD/../protobuf/message_http_plan_list.proto \
    $$PWD/../protobuf/message_product_list.proto \
    $$PWD/../protobuf/message_sync.proto \
    $$PWD/../protobuf/message_http_plan_group.proto \
    $$PWD/../protobuf/message_plan_group.proto \
    $$PWD/../protobuf/message_material_list.proto \
    $$PWD/../protobuf/message_plan_save.proto \
    $$PWD/../protobuf/message_http_update_list.proto \
    $$PWD/../protobuf/message_material_list.proto \
    $$PWD/../protobuf/message_plan_delete.proto \
    $$PWD/../protobuf/message_product_save.proto \
    $$PWD/../protobuf/message_product_delete.proto \
    $$PWD/../protobuf/message_material_delete.proto \
    $$PWD/../protobuf/message_material_save.proto \
    $$PWD/../protobuf/message_product_style_save.proto \
    $$PWD/../protobuf/message_plan_panorama_email.proto \
    $$PWD/../protobuf/message_feed_back.proto \
    $$PWD/../protobuf/message_feed_back.proto \
    $$PWD/../protobuf/message_channel_list.proto \
    $$PWD/../protobuf/message_plan_design.proto \
    $$PWD/../protobuf/message_product.proto \
    $$PWD/../protobuf/message_setting_remember.proto \
    $$PWD/../protobuf/message_user_login.proto \
    $$PWD/../protobuf/message_furniture_color_map.proto \
    $$PWD/../protobuf/message_plan_design_template.proto \
    $$PWD/../protobuf/message_product_brand_temp.proto \
    $$PWD/../protobuf/message_detail_info.proto \
    $$PWD/../protobuf/message_product_image.proto \
    $$PWD/../protobuf/message_asset_material.proto \
    $$PWD/../protobuf/message_common.proto \
    $$PWD/../protobuf/message_http_login.proto \
    $$PWD/../protobuf/message_feedback_suggestion.proto \
    $$PWD/../protobuf/message_widget.proto
