// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_http_plan_group.proto

#ifndef PROTOBUF_message_5fhttp_5fplan_5fgroup_2eproto_INCLUDED
#define PROTOBUF_message_5fhttp_5fplan_5fgroup_2eproto_INCLUDED

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

namespace protobuf_message_5fhttp_5fplan_5fgroup_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsCMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnitImpl();
void InitDefaultsCMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit();
void InitDefaultsCMessageHttpGetPlanGroupResponseImpl();
void InitDefaultsCMessageHttpGetPlanGroupResponse();
void InitDefaultsCMessageHttpAddPlanGroupResponseImpl();
void InitDefaultsCMessageHttpAddPlanGroupResponse();
void InitDefaultsCMessageHttpUpdatePlanGroupRequestImpl();
void InitDefaultsCMessageHttpUpdatePlanGroupRequest();
inline void InitDefaults() {
  InitDefaultsCMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit();
  InitDefaultsCMessageHttpGetPlanGroupResponse();
  InitDefaultsCMessageHttpAddPlanGroupResponse();
  InitDefaultsCMessageHttpUpdatePlanGroupRequest();
}
}  // namespace protobuf_message_5fhttp_5fplan_5fgroup_2eproto
namespace d5 {
class CMessageHttpAddPlanGroupResponse;
class CMessageHttpAddPlanGroupResponseDefaultTypeInternal;
extern CMessageHttpAddPlanGroupResponseDefaultTypeInternal _CMessageHttpAddPlanGroupResponse_default_instance_;
class CMessageHttpGetPlanGroupResponse;
class CMessageHttpGetPlanGroupResponseDefaultTypeInternal;
extern CMessageHttpGetPlanGroupResponseDefaultTypeInternal _CMessageHttpGetPlanGroupResponse_default_instance_;
class CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit;
class CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnitDefaultTypeInternal;
extern CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnitDefaultTypeInternal _CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit_default_instance_;
class CMessageHttpUpdatePlanGroupRequest;
class CMessageHttpUpdatePlanGroupRequestDefaultTypeInternal;
extern CMessageHttpUpdatePlanGroupRequestDefaultTypeInternal _CMessageHttpUpdatePlanGroupRequest_default_instance_;
}  // namespace d5
namespace google {
namespace protobuf {
template<> ::d5::CMessageHttpAddPlanGroupResponse* Arena::Create< ::d5::CMessageHttpAddPlanGroupResponse>(Arena*);
template<> ::d5::CMessageHttpGetPlanGroupResponse* Arena::Create< ::d5::CMessageHttpGetPlanGroupResponse>(Arena*);
template<> ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit* Arena::Create< ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit>(Arena*);
template<> ::d5::CMessageHttpUpdatePlanGroupRequest* Arena::Create< ::d5::CMessageHttpUpdatePlanGroupRequest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace d5 {

// ===================================================================

class CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit) */ {
 public:
  CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit();
  virtual ~CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit();

  CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit(const CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& from);

  inline CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& operator=(const CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit(CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit&& from) noexcept
    : CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit() {
    *this = ::std::move(from);
  }

  inline CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& operator=(CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit* internal_default_instance() {
    return reinterpret_cast<const CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit*>(
               &_CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit* other);
  friend void swap(CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& a, CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit>(NULL);
  }

  CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& from);
  void MergeFrom(const CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& from);
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
  void InternalSwap(CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit* other);
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

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

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

  // @@protoc_insertion_point(class_scope:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 companyid_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fhttp_5fplan_5fgroup_2eproto::TableStruct;
  friend void ::protobuf_message_5fhttp_5fplan_5fgroup_2eproto::InitDefaultsCMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnitImpl();
};
// -------------------------------------------------------------------

class CMessageHttpGetPlanGroupResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessageHttpGetPlanGroupResponse) */ {
 public:
  CMessageHttpGetPlanGroupResponse();
  virtual ~CMessageHttpGetPlanGroupResponse();

  CMessageHttpGetPlanGroupResponse(const CMessageHttpGetPlanGroupResponse& from);

  inline CMessageHttpGetPlanGroupResponse& operator=(const CMessageHttpGetPlanGroupResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessageHttpGetPlanGroupResponse(CMessageHttpGetPlanGroupResponse&& from) noexcept
    : CMessageHttpGetPlanGroupResponse() {
    *this = ::std::move(from);
  }

  inline CMessageHttpGetPlanGroupResponse& operator=(CMessageHttpGetPlanGroupResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageHttpGetPlanGroupResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessageHttpGetPlanGroupResponse* internal_default_instance() {
    return reinterpret_cast<const CMessageHttpGetPlanGroupResponse*>(
               &_CMessageHttpGetPlanGroupResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(CMessageHttpGetPlanGroupResponse* other);
  friend void swap(CMessageHttpGetPlanGroupResponse& a, CMessageHttpGetPlanGroupResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessageHttpGetPlanGroupResponse* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageHttpGetPlanGroupResponse>(NULL);
  }

  CMessageHttpGetPlanGroupResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageHttpGetPlanGroupResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessageHttpGetPlanGroupResponse& from);
  void MergeFrom(const CMessageHttpGetPlanGroupResponse& from);
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
  void InternalSwap(CMessageHttpGetPlanGroupResponse* other);
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

  typedef CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit CMessageHttpGetPlanGroupUnit;

  // accessors -------------------------------------------------------

  // repeated .d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit list = 1;
  int list_size() const;
  void clear_list();
  static const int kListFieldNumber = 1;
  ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit* mutable_list(int index);
  ::google::protobuf::RepeatedPtrField< ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit >*
      mutable_list();
  const ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& list(int index) const;
  ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit* add_list();
  const ::google::protobuf::RepeatedPtrField< ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit >&
      list() const;

  // @@protoc_insertion_point(class_scope:d5.CMessageHttpGetPlanGroupResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit > list_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fhttp_5fplan_5fgroup_2eproto::TableStruct;
  friend void ::protobuf_message_5fhttp_5fplan_5fgroup_2eproto::InitDefaultsCMessageHttpGetPlanGroupResponseImpl();
};
// -------------------------------------------------------------------

class CMessageHttpAddPlanGroupResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessageHttpAddPlanGroupResponse) */ {
 public:
  CMessageHttpAddPlanGroupResponse();
  virtual ~CMessageHttpAddPlanGroupResponse();

  CMessageHttpAddPlanGroupResponse(const CMessageHttpAddPlanGroupResponse& from);

  inline CMessageHttpAddPlanGroupResponse& operator=(const CMessageHttpAddPlanGroupResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessageHttpAddPlanGroupResponse(CMessageHttpAddPlanGroupResponse&& from) noexcept
    : CMessageHttpAddPlanGroupResponse() {
    *this = ::std::move(from);
  }

  inline CMessageHttpAddPlanGroupResponse& operator=(CMessageHttpAddPlanGroupResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageHttpAddPlanGroupResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessageHttpAddPlanGroupResponse* internal_default_instance() {
    return reinterpret_cast<const CMessageHttpAddPlanGroupResponse*>(
               &_CMessageHttpAddPlanGroupResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(CMessageHttpAddPlanGroupResponse* other);
  friend void swap(CMessageHttpAddPlanGroupResponse& a, CMessageHttpAddPlanGroupResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessageHttpAddPlanGroupResponse* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageHttpAddPlanGroupResponse>(NULL);
  }

  CMessageHttpAddPlanGroupResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageHttpAddPlanGroupResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessageHttpAddPlanGroupResponse& from);
  void MergeFrom(const CMessageHttpAddPlanGroupResponse& from);
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
  void InternalSwap(CMessageHttpAddPlanGroupResponse* other);
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

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

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

  // @@protoc_insertion_point(class_scope:d5.CMessageHttpAddPlanGroupResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 companyid_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fhttp_5fplan_5fgroup_2eproto::TableStruct;
  friend void ::protobuf_message_5fhttp_5fplan_5fgroup_2eproto::InitDefaultsCMessageHttpAddPlanGroupResponseImpl();
};
// -------------------------------------------------------------------

class CMessageHttpUpdatePlanGroupRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessageHttpUpdatePlanGroupRequest) */ {
 public:
  CMessageHttpUpdatePlanGroupRequest();
  virtual ~CMessageHttpUpdatePlanGroupRequest();

  CMessageHttpUpdatePlanGroupRequest(const CMessageHttpUpdatePlanGroupRequest& from);

  inline CMessageHttpUpdatePlanGroupRequest& operator=(const CMessageHttpUpdatePlanGroupRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessageHttpUpdatePlanGroupRequest(CMessageHttpUpdatePlanGroupRequest&& from) noexcept
    : CMessageHttpUpdatePlanGroupRequest() {
    *this = ::std::move(from);
  }

  inline CMessageHttpUpdatePlanGroupRequest& operator=(CMessageHttpUpdatePlanGroupRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageHttpUpdatePlanGroupRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessageHttpUpdatePlanGroupRequest* internal_default_instance() {
    return reinterpret_cast<const CMessageHttpUpdatePlanGroupRequest*>(
               &_CMessageHttpUpdatePlanGroupRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(CMessageHttpUpdatePlanGroupRequest* other);
  friend void swap(CMessageHttpUpdatePlanGroupRequest& a, CMessageHttpUpdatePlanGroupRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessageHttpUpdatePlanGroupRequest* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageHttpUpdatePlanGroupRequest>(NULL);
  }

  CMessageHttpUpdatePlanGroupRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageHttpUpdatePlanGroupRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessageHttpUpdatePlanGroupRequest& from);
  void MergeFrom(const CMessageHttpUpdatePlanGroupRequest& from);
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
  void InternalSwap(CMessageHttpUpdatePlanGroupRequest* other);
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

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:d5.CMessageHttpUpdatePlanGroupRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fhttp_5fplan_5fgroup_2eproto::TableStruct;
  friend void ::protobuf_message_5fhttp_5fplan_5fgroup_2eproto::InitDefaultsCMessageHttpUpdatePlanGroupRequestImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit

// int32 id = 1;
inline void CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::id() const {
  // @@protoc_insertion_point(field_get:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.id)
  return id_;
}
inline void CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.id)
}

// string name = 2;
inline void CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::name() const {
  // @@protoc_insertion_point(field_get:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.name)
  return name_.GetNoArena();
}
inline void CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.name)
}
#if LANG_CXX11
inline void CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.name)
}
#endif
inline void CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.name)
}
inline void CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.name)
}
inline ::std::string* CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::release_name() {
  // @@protoc_insertion_point(field_release:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.name)
}

// int32 companyId = 3;
inline void CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::clear_companyid() {
  companyid_ = 0;
}
inline ::google::protobuf::int32 CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::companyid() const {
  // @@protoc_insertion_point(field_get:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.companyId)
  return companyid_;
}
inline void CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit::set_companyid(::google::protobuf::int32 value) {
  
  companyid_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit.companyId)
}

// -------------------------------------------------------------------

// CMessageHttpGetPlanGroupResponse

// repeated .d5.CMessageHttpGetPlanGroupResponse.CMessageHttpGetPlanGroupUnit list = 1;
inline int CMessageHttpGetPlanGroupResponse::list_size() const {
  return list_.size();
}
inline void CMessageHttpGetPlanGroupResponse::clear_list() {
  list_.Clear();
}
inline ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit* CMessageHttpGetPlanGroupResponse::mutable_list(int index) {
  // @@protoc_insertion_point(field_mutable:d5.CMessageHttpGetPlanGroupResponse.list)
  return list_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit >*
CMessageHttpGetPlanGroupResponse::mutable_list() {
  // @@protoc_insertion_point(field_mutable_list:d5.CMessageHttpGetPlanGroupResponse.list)
  return &list_;
}
inline const ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit& CMessageHttpGetPlanGroupResponse::list(int index) const {
  // @@protoc_insertion_point(field_get:d5.CMessageHttpGetPlanGroupResponse.list)
  return list_.Get(index);
}
inline ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit* CMessageHttpGetPlanGroupResponse::add_list() {
  // @@protoc_insertion_point(field_add:d5.CMessageHttpGetPlanGroupResponse.list)
  return list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::d5::CMessageHttpGetPlanGroupResponse_CMessageHttpGetPlanGroupUnit >&
CMessageHttpGetPlanGroupResponse::list() const {
  // @@protoc_insertion_point(field_list:d5.CMessageHttpGetPlanGroupResponse.list)
  return list_;
}

// -------------------------------------------------------------------

// CMessageHttpAddPlanGroupResponse

// int32 id = 1;
inline void CMessageHttpAddPlanGroupResponse::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 CMessageHttpAddPlanGroupResponse::id() const {
  // @@protoc_insertion_point(field_get:d5.CMessageHttpAddPlanGroupResponse.id)
  return id_;
}
inline void CMessageHttpAddPlanGroupResponse::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageHttpAddPlanGroupResponse.id)
}

// string name = 2;
inline void CMessageHttpAddPlanGroupResponse::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessageHttpAddPlanGroupResponse::name() const {
  // @@protoc_insertion_point(field_get:d5.CMessageHttpAddPlanGroupResponse.name)
  return name_.GetNoArena();
}
inline void CMessageHttpAddPlanGroupResponse::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessageHttpAddPlanGroupResponse.name)
}
#if LANG_CXX11
inline void CMessageHttpAddPlanGroupResponse::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessageHttpAddPlanGroupResponse.name)
}
#endif
inline void CMessageHttpAddPlanGroupResponse::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessageHttpAddPlanGroupResponse.name)
}
inline void CMessageHttpAddPlanGroupResponse::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessageHttpAddPlanGroupResponse.name)
}
inline ::std::string* CMessageHttpAddPlanGroupResponse::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessageHttpAddPlanGroupResponse.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessageHttpAddPlanGroupResponse::release_name() {
  // @@protoc_insertion_point(field_release:d5.CMessageHttpAddPlanGroupResponse.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessageHttpAddPlanGroupResponse::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessageHttpAddPlanGroupResponse.name)
}

// int32 companyId = 3;
inline void CMessageHttpAddPlanGroupResponse::clear_companyid() {
  companyid_ = 0;
}
inline ::google::protobuf::int32 CMessageHttpAddPlanGroupResponse::companyid() const {
  // @@protoc_insertion_point(field_get:d5.CMessageHttpAddPlanGroupResponse.companyId)
  return companyid_;
}
inline void CMessageHttpAddPlanGroupResponse::set_companyid(::google::protobuf::int32 value) {
  
  companyid_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageHttpAddPlanGroupResponse.companyId)
}

// -------------------------------------------------------------------

// CMessageHttpUpdatePlanGroupRequest

// int32 id = 1;
inline void CMessageHttpUpdatePlanGroupRequest::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 CMessageHttpUpdatePlanGroupRequest::id() const {
  // @@protoc_insertion_point(field_get:d5.CMessageHttpUpdatePlanGroupRequest.id)
  return id_;
}
inline void CMessageHttpUpdatePlanGroupRequest::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageHttpUpdatePlanGroupRequest.id)
}

// string name = 2;
inline void CMessageHttpUpdatePlanGroupRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessageHttpUpdatePlanGroupRequest::name() const {
  // @@protoc_insertion_point(field_get:d5.CMessageHttpUpdatePlanGroupRequest.name)
  return name_.GetNoArena();
}
inline void CMessageHttpUpdatePlanGroupRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessageHttpUpdatePlanGroupRequest.name)
}
#if LANG_CXX11
inline void CMessageHttpUpdatePlanGroupRequest::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessageHttpUpdatePlanGroupRequest.name)
}
#endif
inline void CMessageHttpUpdatePlanGroupRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessageHttpUpdatePlanGroupRequest.name)
}
inline void CMessageHttpUpdatePlanGroupRequest::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessageHttpUpdatePlanGroupRequest.name)
}
inline ::std::string* CMessageHttpUpdatePlanGroupRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessageHttpUpdatePlanGroupRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessageHttpUpdatePlanGroupRequest::release_name() {
  // @@protoc_insertion_point(field_release:d5.CMessageHttpUpdatePlanGroupRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessageHttpUpdatePlanGroupRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessageHttpUpdatePlanGroupRequest.name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace d5

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_5fhttp_5fplan_5fgroup_2eproto_INCLUDED