// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_plan_delete.proto

#ifndef PROTOBUF_message_5fplan_5fdelete_2eproto_INCLUDED
#define PROTOBUF_message_5fplan_5fdelete_2eproto_INCLUDED

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

namespace protobuf_message_5fplan_5fdelete_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsCMessagePlanDeleteRequestImpl();
void InitDefaultsCMessagePlanDeleteRequest();
void InitDefaultsCMessagePlanDeleteResponseImpl();
void InitDefaultsCMessagePlanDeleteResponse();
inline void InitDefaults() {
  InitDefaultsCMessagePlanDeleteRequest();
  InitDefaultsCMessagePlanDeleteResponse();
}
}  // namespace protobuf_message_5fplan_5fdelete_2eproto
namespace d5 {
class CMessagePlanDeleteRequest;
class CMessagePlanDeleteRequestDefaultTypeInternal;
extern CMessagePlanDeleteRequestDefaultTypeInternal _CMessagePlanDeleteRequest_default_instance_;
class CMessagePlanDeleteResponse;
class CMessagePlanDeleteResponseDefaultTypeInternal;
extern CMessagePlanDeleteResponseDefaultTypeInternal _CMessagePlanDeleteResponse_default_instance_;
}  // namespace d5
namespace google {
namespace protobuf {
template<> ::d5::CMessagePlanDeleteRequest* Arena::Create< ::d5::CMessagePlanDeleteRequest>(Arena*);
template<> ::d5::CMessagePlanDeleteResponse* Arena::Create< ::d5::CMessagePlanDeleteResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace d5 {

// ===================================================================

class CMessagePlanDeleteRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessagePlanDeleteRequest) */ {
 public:
  CMessagePlanDeleteRequest();
  virtual ~CMessagePlanDeleteRequest();

  CMessagePlanDeleteRequest(const CMessagePlanDeleteRequest& from);

  inline CMessagePlanDeleteRequest& operator=(const CMessagePlanDeleteRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessagePlanDeleteRequest(CMessagePlanDeleteRequest&& from) noexcept
    : CMessagePlanDeleteRequest() {
    *this = ::std::move(from);
  }

  inline CMessagePlanDeleteRequest& operator=(CMessagePlanDeleteRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessagePlanDeleteRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessagePlanDeleteRequest* internal_default_instance() {
    return reinterpret_cast<const CMessagePlanDeleteRequest*>(
               &_CMessagePlanDeleteRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CMessagePlanDeleteRequest* other);
  friend void swap(CMessagePlanDeleteRequest& a, CMessagePlanDeleteRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessagePlanDeleteRequest* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessagePlanDeleteRequest>(NULL);
  }

  CMessagePlanDeleteRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessagePlanDeleteRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessagePlanDeleteRequest& from);
  void MergeFrom(const CMessagePlanDeleteRequest& from);
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
  void InternalSwap(CMessagePlanDeleteRequest* other);
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

  // string id = 3;
  void clear_id();
  static const int kIdFieldNumber = 3;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // int64 updateTime = 4;
  void clear_updatetime();
  static const int kUpdateTimeFieldNumber = 4;
  ::google::protobuf::int64 updatetime() const;
  void set_updatetime(::google::protobuf::int64 value);

  // int32 type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:d5.CMessagePlanDeleteRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::int64 updatetime_;
  ::google::protobuf::int32 type_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fplan_5fdelete_2eproto::TableStruct;
  friend void ::protobuf_message_5fplan_5fdelete_2eproto::InitDefaultsCMessagePlanDeleteRequestImpl();
};
// -------------------------------------------------------------------

class CMessagePlanDeleteResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessagePlanDeleteResponse) */ {
 public:
  CMessagePlanDeleteResponse();
  virtual ~CMessagePlanDeleteResponse();

  CMessagePlanDeleteResponse(const CMessagePlanDeleteResponse& from);

  inline CMessagePlanDeleteResponse& operator=(const CMessagePlanDeleteResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessagePlanDeleteResponse(CMessagePlanDeleteResponse&& from) noexcept
    : CMessagePlanDeleteResponse() {
    *this = ::std::move(from);
  }

  inline CMessagePlanDeleteResponse& operator=(CMessagePlanDeleteResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessagePlanDeleteResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessagePlanDeleteResponse* internal_default_instance() {
    return reinterpret_cast<const CMessagePlanDeleteResponse*>(
               &_CMessagePlanDeleteResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(CMessagePlanDeleteResponse* other);
  friend void swap(CMessagePlanDeleteResponse& a, CMessagePlanDeleteResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessagePlanDeleteResponse* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessagePlanDeleteResponse>(NULL);
  }

  CMessagePlanDeleteResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessagePlanDeleteResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessagePlanDeleteResponse& from);
  void MergeFrom(const CMessagePlanDeleteResponse& from);
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
  void InternalSwap(CMessagePlanDeleteResponse* other);
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

  // int32 state = 3;
  void clear_state();
  static const int kStateFieldNumber = 3;
  ::google::protobuf::int32 state() const;
  void set_state(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:d5.CMessagePlanDeleteResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 state_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fplan_5fdelete_2eproto::TableStruct;
  friend void ::protobuf_message_5fplan_5fdelete_2eproto::InitDefaultsCMessagePlanDeleteResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CMessagePlanDeleteRequest

// int32 type = 1;
inline void CMessagePlanDeleteRequest::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 CMessagePlanDeleteRequest::type() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanDeleteRequest.type)
  return type_;
}
inline void CMessagePlanDeleteRequest::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessagePlanDeleteRequest.type)
}

// string uuid = 2;
inline void CMessagePlanDeleteRequest::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessagePlanDeleteRequest::uuid() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanDeleteRequest.uuid)
  return uuid_.GetNoArena();
}
inline void CMessagePlanDeleteRequest::set_uuid(const ::std::string& value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessagePlanDeleteRequest.uuid)
}
#if LANG_CXX11
inline void CMessagePlanDeleteRequest::set_uuid(::std::string&& value) {
  
  uuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessagePlanDeleteRequest.uuid)
}
#endif
inline void CMessagePlanDeleteRequest::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessagePlanDeleteRequest.uuid)
}
inline void CMessagePlanDeleteRequest::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessagePlanDeleteRequest.uuid)
}
inline ::std::string* CMessagePlanDeleteRequest::mutable_uuid() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessagePlanDeleteRequest.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessagePlanDeleteRequest::release_uuid() {
  // @@protoc_insertion_point(field_release:d5.CMessagePlanDeleteRequest.uuid)
  
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessagePlanDeleteRequest::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessagePlanDeleteRequest.uuid)
}

// string id = 3;
inline void CMessagePlanDeleteRequest::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessagePlanDeleteRequest::id() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanDeleteRequest.id)
  return id_.GetNoArena();
}
inline void CMessagePlanDeleteRequest::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessagePlanDeleteRequest.id)
}
#if LANG_CXX11
inline void CMessagePlanDeleteRequest::set_id(::std::string&& value) {
  
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessagePlanDeleteRequest.id)
}
#endif
inline void CMessagePlanDeleteRequest::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessagePlanDeleteRequest.id)
}
inline void CMessagePlanDeleteRequest::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessagePlanDeleteRequest.id)
}
inline ::std::string* CMessagePlanDeleteRequest::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessagePlanDeleteRequest.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessagePlanDeleteRequest::release_id() {
  // @@protoc_insertion_point(field_release:d5.CMessagePlanDeleteRequest.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessagePlanDeleteRequest::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessagePlanDeleteRequest.id)
}

// int64 updateTime = 4;
inline void CMessagePlanDeleteRequest::clear_updatetime() {
  updatetime_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 CMessagePlanDeleteRequest::updatetime() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanDeleteRequest.updateTime)
  return updatetime_;
}
inline void CMessagePlanDeleteRequest::set_updatetime(::google::protobuf::int64 value) {
  
  updatetime_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessagePlanDeleteRequest.updateTime)
}

// -------------------------------------------------------------------

// CMessagePlanDeleteResponse

// int32 type = 1;
inline void CMessagePlanDeleteResponse::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 CMessagePlanDeleteResponse::type() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanDeleteResponse.type)
  return type_;
}
inline void CMessagePlanDeleteResponse::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessagePlanDeleteResponse.type)
}

// string uuid = 2;
inline void CMessagePlanDeleteResponse::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessagePlanDeleteResponse::uuid() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanDeleteResponse.uuid)
  return uuid_.GetNoArena();
}
inline void CMessagePlanDeleteResponse::set_uuid(const ::std::string& value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessagePlanDeleteResponse.uuid)
}
#if LANG_CXX11
inline void CMessagePlanDeleteResponse::set_uuid(::std::string&& value) {
  
  uuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessagePlanDeleteResponse.uuid)
}
#endif
inline void CMessagePlanDeleteResponse::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessagePlanDeleteResponse.uuid)
}
inline void CMessagePlanDeleteResponse::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessagePlanDeleteResponse.uuid)
}
inline ::std::string* CMessagePlanDeleteResponse::mutable_uuid() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessagePlanDeleteResponse.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessagePlanDeleteResponse::release_uuid() {
  // @@protoc_insertion_point(field_release:d5.CMessagePlanDeleteResponse.uuid)
  
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessagePlanDeleteResponse::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessagePlanDeleteResponse.uuid)
}

// int32 state = 3;
inline void CMessagePlanDeleteResponse::clear_state() {
  state_ = 0;
}
inline ::google::protobuf::int32 CMessagePlanDeleteResponse::state() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanDeleteResponse.state)
  return state_;
}
inline void CMessagePlanDeleteResponse::set_state(::google::protobuf::int32 value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessagePlanDeleteResponse.state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace d5

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_5fplan_5fdelete_2eproto_INCLUDED