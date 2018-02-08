// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_category_list.proto

#ifndef PROTOBUF_message_5fcategory_5flist_2eproto_INCLUDED
#define PROTOBUF_message_5fcategory_5flist_2eproto_INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

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
// @@protoc_insertion_point(includes)

namespace protobuf_message_5fcategory_5flist_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsCMessageCategoryListRequestImpl();
void InitDefaultsCMessageCategoryListRequest();
void InitDefaultsCMessageCategoryUnitImpl();
void InitDefaultsCMessageCategoryUnit();
void InitDefaultsCMessageCategoryListResponseImpl();
void InitDefaultsCMessageCategoryListResponse();
inline void InitDefaults() {
  InitDefaultsCMessageCategoryListRequest();
  InitDefaultsCMessageCategoryUnit();
  InitDefaultsCMessageCategoryListResponse();
}
}  // namespace protobuf_message_5fcategory_5flist_2eproto
namespace d5 {
class CMessageCategoryListRequest;
class CMessageCategoryListRequestDefaultTypeInternal;
extern CMessageCategoryListRequestDefaultTypeInternal _CMessageCategoryListRequest_default_instance_;
class CMessageCategoryListResponse;
class CMessageCategoryListResponseDefaultTypeInternal;
extern CMessageCategoryListResponseDefaultTypeInternal _CMessageCategoryListResponse_default_instance_;
class CMessageCategoryUnit;
class CMessageCategoryUnitDefaultTypeInternal;
extern CMessageCategoryUnitDefaultTypeInternal _CMessageCategoryUnit_default_instance_;
}  // namespace d5
namespace google {
namespace protobuf {
template<> ::d5::CMessageCategoryListRequest* Arena::Create< ::d5::CMessageCategoryListRequest>(Arena*);
template<> ::d5::CMessageCategoryListResponse* Arena::Create< ::d5::CMessageCategoryListResponse>(Arena*);
template<> ::d5::CMessageCategoryUnit* Arena::Create< ::d5::CMessageCategoryUnit>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace d5 {

// ===================================================================

class CMessageCategoryListRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessageCategoryListRequest) */ {
 public:
  CMessageCategoryListRequest();
  virtual ~CMessageCategoryListRequest();

  CMessageCategoryListRequest(const CMessageCategoryListRequest& from);

  inline CMessageCategoryListRequest& operator=(const CMessageCategoryListRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessageCategoryListRequest(CMessageCategoryListRequest&& from) noexcept
    : CMessageCategoryListRequest() {
    *this = ::std::move(from);
  }

  inline CMessageCategoryListRequest& operator=(CMessageCategoryListRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageCategoryListRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessageCategoryListRequest* internal_default_instance() {
    return reinterpret_cast<const CMessageCategoryListRequest*>(
               &_CMessageCategoryListRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CMessageCategoryListRequest* other);
  friend void swap(CMessageCategoryListRequest& a, CMessageCategoryListRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessageCategoryListRequest* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageCategoryListRequest>(NULL);
  }

  CMessageCategoryListRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageCategoryListRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessageCategoryListRequest& from);
  void MergeFrom(const CMessageCategoryListRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(CMessageCategoryListRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string uuid = 2;
  void clear_uuid();
  static const int kUuidFieldNumber = 2;
  const ::std::string& uuid() const;
  void set_uuid(const ::std::string& value);
  #if LANG_CXX11
  void set_uuid(::std::string&& value);
  #endif
  void set_uuid(const char* value);
  void set_uuid(const char* value, size_t size);
  ::std::string* mutable_uuid();
  ::std::string* release_uuid();
  void set_allocated_uuid(::std::string* uuid);

  // int32 type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // bool isCustomCategory = 3;
  void clear_iscustomcategory();
  static const int kIsCustomCategoryFieldNumber = 3;
  bool iscustomcategory() const;
  void set_iscustomcategory(bool value);

  // @@protoc_insertion_point(class_scope:d5.CMessageCategoryListRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::int32 type_;
  bool iscustomcategory_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fcategory_5flist_2eproto::TableStruct;
  friend void ::protobuf_message_5fcategory_5flist_2eproto::InitDefaultsCMessageCategoryListRequestImpl();
};
// -------------------------------------------------------------------

class CMessageCategoryUnit : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessageCategoryUnit) */ {
 public:
  CMessageCategoryUnit();
  virtual ~CMessageCategoryUnit();

  CMessageCategoryUnit(const CMessageCategoryUnit& from);

  inline CMessageCategoryUnit& operator=(const CMessageCategoryUnit& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessageCategoryUnit(CMessageCategoryUnit&& from) noexcept
    : CMessageCategoryUnit() {
    *this = ::std::move(from);
  }

  inline CMessageCategoryUnit& operator=(CMessageCategoryUnit&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageCategoryUnit& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessageCategoryUnit* internal_default_instance() {
    return reinterpret_cast<const CMessageCategoryUnit*>(
               &_CMessageCategoryUnit_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(CMessageCategoryUnit* other);
  friend void swap(CMessageCategoryUnit& a, CMessageCategoryUnit& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessageCategoryUnit* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageCategoryUnit>(NULL);
  }

  CMessageCategoryUnit* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageCategoryUnit>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessageCategoryUnit& from);
  void MergeFrom(const CMessageCategoryUnit& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(CMessageCategoryUnit* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .d5.CMessageCategoryUnit children = 6;
  int children_size() const;
  void clear_children();
  static const int kChildrenFieldNumber = 6;
  ::d5::CMessageCategoryUnit* mutable_children(int index);
  ::google::protobuf::RepeatedPtrField< ::d5::CMessageCategoryUnit >*
      mutable_children();
  const ::d5::CMessageCategoryUnit& children(int index) const;
  ::d5::CMessageCategoryUnit* add_children();
  const ::google::protobuf::RepeatedPtrField< ::d5::CMessageCategoryUnit >&
      children() const;

  // string title = 2;
  void clear_title();
  static const int kTitleFieldNumber = 2;
  const ::std::string& title() const;
  void set_title(const ::std::string& value);
  #if LANG_CXX11
  void set_title(::std::string&& value);
  #endif
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  ::std::string* mutable_title();
  ::std::string* release_title();
  void set_allocated_title(::std::string* title);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // int32 companyId = 3;
  void clear_companyid();
  static const int kCompanyIdFieldNumber = 3;
  ::google::protobuf::int32 companyid() const;
  void set_companyid(::google::protobuf::int32 value);

  // int32 parentId = 4;
  void clear_parentid();
  static const int kParentIdFieldNumber = 4;
  ::google::protobuf::int32 parentid() const;
  void set_parentid(::google::protobuf::int32 value);

  // int32 level = 5;
  void clear_level();
  static const int kLevelFieldNumber = 5;
  ::google::protobuf::int32 level() const;
  void set_level(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:d5.CMessageCategoryUnit)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::d5::CMessageCategoryUnit > children_;
  ::google::protobuf::internal::ArenaStringPtr title_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 companyid_;
  ::google::protobuf::int32 parentid_;
  ::google::protobuf::int32 level_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fcategory_5flist_2eproto::TableStruct;
  friend void ::protobuf_message_5fcategory_5flist_2eproto::InitDefaultsCMessageCategoryUnitImpl();
};
// -------------------------------------------------------------------

class CMessageCategoryListResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessageCategoryListResponse) */ {
 public:
  CMessageCategoryListResponse();
  virtual ~CMessageCategoryListResponse();

  CMessageCategoryListResponse(const CMessageCategoryListResponse& from);

  inline CMessageCategoryListResponse& operator=(const CMessageCategoryListResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessageCategoryListResponse(CMessageCategoryListResponse&& from) noexcept
    : CMessageCategoryListResponse() {
    *this = ::std::move(from);
  }

  inline CMessageCategoryListResponse& operator=(CMessageCategoryListResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageCategoryListResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessageCategoryListResponse* internal_default_instance() {
    return reinterpret_cast<const CMessageCategoryListResponse*>(
               &_CMessageCategoryListResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(CMessageCategoryListResponse* other);
  friend void swap(CMessageCategoryListResponse& a, CMessageCategoryListResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessageCategoryListResponse* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageCategoryListResponse>(NULL);
  }

  CMessageCategoryListResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageCategoryListResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessageCategoryListResponse& from);
  void MergeFrom(const CMessageCategoryListResponse& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(CMessageCategoryListResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .d5.CMessageCategoryUnit root = 4;
  int root_size() const;
  void clear_root();
  static const int kRootFieldNumber = 4;
  ::d5::CMessageCategoryUnit* mutable_root(int index);
  ::google::protobuf::RepeatedPtrField< ::d5::CMessageCategoryUnit >*
      mutable_root();
  const ::d5::CMessageCategoryUnit& root(int index) const;
  ::d5::CMessageCategoryUnit* add_root();
  const ::google::protobuf::RepeatedPtrField< ::d5::CMessageCategoryUnit >&
      root() const;

  // string uuid = 2;
  void clear_uuid();
  static const int kUuidFieldNumber = 2;
  const ::std::string& uuid() const;
  void set_uuid(const ::std::string& value);
  #if LANG_CXX11
  void set_uuid(::std::string&& value);
  #endif
  void set_uuid(const char* value);
  void set_uuid(const char* value, size_t size);
  ::std::string* mutable_uuid();
  ::std::string* release_uuid();
  void set_allocated_uuid(::std::string* uuid);

  // int32 type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // int32 state = 3;
  void clear_state();
  static const int kStateFieldNumber = 3;
  ::google::protobuf::int32 state() const;
  void set_state(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:d5.CMessageCategoryListResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::d5::CMessageCategoryUnit > root_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 state_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fcategory_5flist_2eproto::TableStruct;
  friend void ::protobuf_message_5fcategory_5flist_2eproto::InitDefaultsCMessageCategoryListResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CMessageCategoryListRequest

// int32 type = 1;
inline void CMessageCategoryListRequest::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 CMessageCategoryListRequest::type() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryListRequest.type)
  return type_;
}
inline void CMessageCategoryListRequest::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryListRequest.type)
}

// string uuid = 2;
inline void CMessageCategoryListRequest::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessageCategoryListRequest::uuid() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryListRequest.uuid)
  return uuid_.GetNoArena();
}
inline void CMessageCategoryListRequest::set_uuid(const ::std::string& value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryListRequest.uuid)
}
#if LANG_CXX11
inline void CMessageCategoryListRequest::set_uuid(::std::string&& value) {
  
  uuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessageCategoryListRequest.uuid)
}
#endif
inline void CMessageCategoryListRequest::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessageCategoryListRequest.uuid)
}
inline void CMessageCategoryListRequest::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessageCategoryListRequest.uuid)
}
inline ::std::string* CMessageCategoryListRequest::mutable_uuid() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessageCategoryListRequest.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessageCategoryListRequest::release_uuid() {
  // @@protoc_insertion_point(field_release:d5.CMessageCategoryListRequest.uuid)
  
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessageCategoryListRequest::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessageCategoryListRequest.uuid)
}

// bool isCustomCategory = 3;
inline void CMessageCategoryListRequest::clear_iscustomcategory() {
  iscustomcategory_ = false;
}
inline bool CMessageCategoryListRequest::iscustomcategory() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryListRequest.isCustomCategory)
  return iscustomcategory_;
}
inline void CMessageCategoryListRequest::set_iscustomcategory(bool value) {
  
  iscustomcategory_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryListRequest.isCustomCategory)
}

// -------------------------------------------------------------------

// CMessageCategoryUnit

// int32 id = 1;
inline void CMessageCategoryUnit::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 CMessageCategoryUnit::id() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryUnit.id)
  return id_;
}
inline void CMessageCategoryUnit::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryUnit.id)
}

// string title = 2;
inline void CMessageCategoryUnit::clear_title() {
  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessageCategoryUnit::title() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryUnit.title)
  return title_.GetNoArena();
}
inline void CMessageCategoryUnit::set_title(const ::std::string& value) {
  
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryUnit.title)
}
#if LANG_CXX11
inline void CMessageCategoryUnit::set_title(::std::string&& value) {
  
  title_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessageCategoryUnit.title)
}
#endif
inline void CMessageCategoryUnit::set_title(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessageCategoryUnit.title)
}
inline void CMessageCategoryUnit::set_title(const char* value, size_t size) {
  
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessageCategoryUnit.title)
}
inline ::std::string* CMessageCategoryUnit::mutable_title() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessageCategoryUnit.title)
  return title_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessageCategoryUnit::release_title() {
  // @@protoc_insertion_point(field_release:d5.CMessageCategoryUnit.title)
  
  return title_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessageCategoryUnit::set_allocated_title(::std::string* title) {
  if (title != NULL) {
    
  } else {
    
  }
  title_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessageCategoryUnit.title)
}

// int32 companyId = 3;
inline void CMessageCategoryUnit::clear_companyid() {
  companyid_ = 0;
}
inline ::google::protobuf::int32 CMessageCategoryUnit::companyid() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryUnit.companyId)
  return companyid_;
}
inline void CMessageCategoryUnit::set_companyid(::google::protobuf::int32 value) {
  
  companyid_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryUnit.companyId)
}

// int32 parentId = 4;
inline void CMessageCategoryUnit::clear_parentid() {
  parentid_ = 0;
}
inline ::google::protobuf::int32 CMessageCategoryUnit::parentid() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryUnit.parentId)
  return parentid_;
}
inline void CMessageCategoryUnit::set_parentid(::google::protobuf::int32 value) {
  
  parentid_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryUnit.parentId)
}

// int32 level = 5;
inline void CMessageCategoryUnit::clear_level() {
  level_ = 0;
}
inline ::google::protobuf::int32 CMessageCategoryUnit::level() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryUnit.level)
  return level_;
}
inline void CMessageCategoryUnit::set_level(::google::protobuf::int32 value) {
  
  level_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryUnit.level)
}

// repeated .d5.CMessageCategoryUnit children = 6;
inline int CMessageCategoryUnit::children_size() const {
  return children_.size();
}
inline void CMessageCategoryUnit::clear_children() {
  children_.Clear();
}
inline ::d5::CMessageCategoryUnit* CMessageCategoryUnit::mutable_children(int index) {
  // @@protoc_insertion_point(field_mutable:d5.CMessageCategoryUnit.children)
  return children_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::d5::CMessageCategoryUnit >*
CMessageCategoryUnit::mutable_children() {
  // @@protoc_insertion_point(field_mutable_list:d5.CMessageCategoryUnit.children)
  return &children_;
}
inline const ::d5::CMessageCategoryUnit& CMessageCategoryUnit::children(int index) const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryUnit.children)
  return children_.Get(index);
}
inline ::d5::CMessageCategoryUnit* CMessageCategoryUnit::add_children() {
  // @@protoc_insertion_point(field_add:d5.CMessageCategoryUnit.children)
  return children_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::d5::CMessageCategoryUnit >&
CMessageCategoryUnit::children() const {
  // @@protoc_insertion_point(field_list:d5.CMessageCategoryUnit.children)
  return children_;
}

// -------------------------------------------------------------------

// CMessageCategoryListResponse

// int32 type = 1;
inline void CMessageCategoryListResponse::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 CMessageCategoryListResponse::type() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryListResponse.type)
  return type_;
}
inline void CMessageCategoryListResponse::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryListResponse.type)
}

// string uuid = 2;
inline void CMessageCategoryListResponse::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessageCategoryListResponse::uuid() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryListResponse.uuid)
  return uuid_.GetNoArena();
}
inline void CMessageCategoryListResponse::set_uuid(const ::std::string& value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryListResponse.uuid)
}
#if LANG_CXX11
inline void CMessageCategoryListResponse::set_uuid(::std::string&& value) {
  
  uuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessageCategoryListResponse.uuid)
}
#endif
inline void CMessageCategoryListResponse::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessageCategoryListResponse.uuid)
}
inline void CMessageCategoryListResponse::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessageCategoryListResponse.uuid)
}
inline ::std::string* CMessageCategoryListResponse::mutable_uuid() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessageCategoryListResponse.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessageCategoryListResponse::release_uuid() {
  // @@protoc_insertion_point(field_release:d5.CMessageCategoryListResponse.uuid)
  
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessageCategoryListResponse::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessageCategoryListResponse.uuid)
}

// int32 state = 3;
inline void CMessageCategoryListResponse::clear_state() {
  state_ = 0;
}
inline ::google::protobuf::int32 CMessageCategoryListResponse::state() const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryListResponse.state)
  return state_;
}
inline void CMessageCategoryListResponse::set_state(::google::protobuf::int32 value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageCategoryListResponse.state)
}

// repeated .d5.CMessageCategoryUnit root = 4;
inline int CMessageCategoryListResponse::root_size() const {
  return root_.size();
}
inline void CMessageCategoryListResponse::clear_root() {
  root_.Clear();
}
inline ::d5::CMessageCategoryUnit* CMessageCategoryListResponse::mutable_root(int index) {
  // @@protoc_insertion_point(field_mutable:d5.CMessageCategoryListResponse.root)
  return root_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::d5::CMessageCategoryUnit >*
CMessageCategoryListResponse::mutable_root() {
  // @@protoc_insertion_point(field_mutable_list:d5.CMessageCategoryListResponse.root)
  return &root_;
}
inline const ::d5::CMessageCategoryUnit& CMessageCategoryListResponse::root(int index) const {
  // @@protoc_insertion_point(field_get:d5.CMessageCategoryListResponse.root)
  return root_.Get(index);
}
inline ::d5::CMessageCategoryUnit* CMessageCategoryListResponse::add_root() {
  // @@protoc_insertion_point(field_add:d5.CMessageCategoryListResponse.root)
  return root_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::d5::CMessageCategoryUnit >&
CMessageCategoryListResponse::root() const {
  // @@protoc_insertion_point(field_list:d5.CMessageCategoryListResponse.root)
  return root_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace d5

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_5fcategory_5flist_2eproto_INCLUDED
