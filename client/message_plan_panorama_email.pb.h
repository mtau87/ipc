// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_plan_panorama_email.proto

#ifndef PROTOBUF_message_5fplan_5fpanorama_5femail_2eproto_INCLUDED
#define PROTOBUF_message_5fplan_5fpanorama_5femail_2eproto_INCLUDED

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

namespace protobuf_message_5fplan_5fpanorama_5femail_2eproto {
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
void InitDefaultsCMessagePlanPanoramaEmailRequestImpl();
void InitDefaultsCMessagePlanPanoramaEmailRequest();
void InitDefaultsCMessagePlanPanoramaEmailResponseImpl();
void InitDefaultsCMessagePlanPanoramaEmailResponse();
inline void InitDefaults() {
  InitDefaultsCMessagePlanPanoramaEmailRequest();
  InitDefaultsCMessagePlanPanoramaEmailResponse();
}
}  // namespace protobuf_message_5fplan_5fpanorama_5femail_2eproto
namespace d5 {
class CMessagePlanPanoramaEmailRequest;
class CMessagePlanPanoramaEmailRequestDefaultTypeInternal;
extern CMessagePlanPanoramaEmailRequestDefaultTypeInternal _CMessagePlanPanoramaEmailRequest_default_instance_;
class CMessagePlanPanoramaEmailResponse;
class CMessagePlanPanoramaEmailResponseDefaultTypeInternal;
extern CMessagePlanPanoramaEmailResponseDefaultTypeInternal _CMessagePlanPanoramaEmailResponse_default_instance_;
}  // namespace d5
namespace google {
namespace protobuf {
template<> ::d5::CMessagePlanPanoramaEmailRequest* Arena::Create< ::d5::CMessagePlanPanoramaEmailRequest>(Arena*);
template<> ::d5::CMessagePlanPanoramaEmailResponse* Arena::Create< ::d5::CMessagePlanPanoramaEmailResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace d5 {

// ===================================================================

class CMessagePlanPanoramaEmailRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessagePlanPanoramaEmailRequest) */ {
 public:
  CMessagePlanPanoramaEmailRequest();
  virtual ~CMessagePlanPanoramaEmailRequest();

  CMessagePlanPanoramaEmailRequest(const CMessagePlanPanoramaEmailRequest& from);

  inline CMessagePlanPanoramaEmailRequest& operator=(const CMessagePlanPanoramaEmailRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessagePlanPanoramaEmailRequest(CMessagePlanPanoramaEmailRequest&& from) noexcept
    : CMessagePlanPanoramaEmailRequest() {
    *this = ::std::move(from);
  }

  inline CMessagePlanPanoramaEmailRequest& operator=(CMessagePlanPanoramaEmailRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessagePlanPanoramaEmailRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessagePlanPanoramaEmailRequest* internal_default_instance() {
    return reinterpret_cast<const CMessagePlanPanoramaEmailRequest*>(
               &_CMessagePlanPanoramaEmailRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CMessagePlanPanoramaEmailRequest* other);
  friend void swap(CMessagePlanPanoramaEmailRequest& a, CMessagePlanPanoramaEmailRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessagePlanPanoramaEmailRequest* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessagePlanPanoramaEmailRequest>(NULL);
  }

  CMessagePlanPanoramaEmailRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessagePlanPanoramaEmailRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessagePlanPanoramaEmailRequest& from);
  void MergeFrom(const CMessagePlanPanoramaEmailRequest& from);
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
  void InternalSwap(CMessagePlanPanoramaEmailRequest* other);
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

  // string url = 3;
  void clear_url();
  static const int kUrlFieldNumber = 3;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  #if LANG_CXX11
  void set_url(::std::string&& value);
  #endif
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // string email = 4;
  void clear_email();
  static const int kEmailFieldNumber = 4;
  const ::std::string& email() const;
  void set_email(const ::std::string& value);
  #if LANG_CXX11
  void set_email(::std::string&& value);
  #endif
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  ::std::string* mutable_email();
  ::std::string* release_email();
  void set_allocated_email(::std::string* email);

  // int32 type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:d5.CMessagePlanPanoramaEmailRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::google::protobuf::internal::ArenaStringPtr email_;
  ::google::protobuf::int32 type_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fplan_5fpanorama_5femail_2eproto::TableStruct;
  friend void ::protobuf_message_5fplan_5fpanorama_5femail_2eproto::InitDefaultsCMessagePlanPanoramaEmailRequestImpl();
};
// -------------------------------------------------------------------

class CMessagePlanPanoramaEmailResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessagePlanPanoramaEmailResponse) */ {
 public:
  CMessagePlanPanoramaEmailResponse();
  virtual ~CMessagePlanPanoramaEmailResponse();

  CMessagePlanPanoramaEmailResponse(const CMessagePlanPanoramaEmailResponse& from);

  inline CMessagePlanPanoramaEmailResponse& operator=(const CMessagePlanPanoramaEmailResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessagePlanPanoramaEmailResponse(CMessagePlanPanoramaEmailResponse&& from) noexcept
    : CMessagePlanPanoramaEmailResponse() {
    *this = ::std::move(from);
  }

  inline CMessagePlanPanoramaEmailResponse& operator=(CMessagePlanPanoramaEmailResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessagePlanPanoramaEmailResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessagePlanPanoramaEmailResponse* internal_default_instance() {
    return reinterpret_cast<const CMessagePlanPanoramaEmailResponse*>(
               &_CMessagePlanPanoramaEmailResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(CMessagePlanPanoramaEmailResponse* other);
  friend void swap(CMessagePlanPanoramaEmailResponse& a, CMessagePlanPanoramaEmailResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessagePlanPanoramaEmailResponse* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessagePlanPanoramaEmailResponse>(NULL);
  }

  CMessagePlanPanoramaEmailResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessagePlanPanoramaEmailResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessagePlanPanoramaEmailResponse& from);
  void MergeFrom(const CMessagePlanPanoramaEmailResponse& from);
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
  void InternalSwap(CMessagePlanPanoramaEmailResponse* other);
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

  // @@protoc_insertion_point(class_scope:d5.CMessagePlanPanoramaEmailResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 state_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fplan_5fpanorama_5femail_2eproto::TableStruct;
  friend void ::protobuf_message_5fplan_5fpanorama_5femail_2eproto::InitDefaultsCMessagePlanPanoramaEmailResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CMessagePlanPanoramaEmailRequest

// int32 type = 1;
inline void CMessagePlanPanoramaEmailRequest::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 CMessagePlanPanoramaEmailRequest::type() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanPanoramaEmailRequest.type)
  return type_;
}
inline void CMessagePlanPanoramaEmailRequest::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessagePlanPanoramaEmailRequest.type)
}

// string uuid = 2;
inline void CMessagePlanPanoramaEmailRequest::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessagePlanPanoramaEmailRequest::uuid() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanPanoramaEmailRequest.uuid)
  return uuid_.GetNoArena();
}
inline void CMessagePlanPanoramaEmailRequest::set_uuid(const ::std::string& value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessagePlanPanoramaEmailRequest.uuid)
}
#if LANG_CXX11
inline void CMessagePlanPanoramaEmailRequest::set_uuid(::std::string&& value) {
  
  uuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessagePlanPanoramaEmailRequest.uuid)
}
#endif
inline void CMessagePlanPanoramaEmailRequest::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessagePlanPanoramaEmailRequest.uuid)
}
inline void CMessagePlanPanoramaEmailRequest::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessagePlanPanoramaEmailRequest.uuid)
}
inline ::std::string* CMessagePlanPanoramaEmailRequest::mutable_uuid() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessagePlanPanoramaEmailRequest.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessagePlanPanoramaEmailRequest::release_uuid() {
  // @@protoc_insertion_point(field_release:d5.CMessagePlanPanoramaEmailRequest.uuid)
  
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessagePlanPanoramaEmailRequest::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessagePlanPanoramaEmailRequest.uuid)
}

// string url = 3;
inline void CMessagePlanPanoramaEmailRequest::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessagePlanPanoramaEmailRequest::url() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanPanoramaEmailRequest.url)
  return url_.GetNoArena();
}
inline void CMessagePlanPanoramaEmailRequest::set_url(const ::std::string& value) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessagePlanPanoramaEmailRequest.url)
}
#if LANG_CXX11
inline void CMessagePlanPanoramaEmailRequest::set_url(::std::string&& value) {
  
  url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessagePlanPanoramaEmailRequest.url)
}
#endif
inline void CMessagePlanPanoramaEmailRequest::set_url(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessagePlanPanoramaEmailRequest.url)
}
inline void CMessagePlanPanoramaEmailRequest::set_url(const char* value, size_t size) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessagePlanPanoramaEmailRequest.url)
}
inline ::std::string* CMessagePlanPanoramaEmailRequest::mutable_url() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessagePlanPanoramaEmailRequest.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessagePlanPanoramaEmailRequest::release_url() {
  // @@protoc_insertion_point(field_release:d5.CMessagePlanPanoramaEmailRequest.url)
  
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessagePlanPanoramaEmailRequest::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    
  } else {
    
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessagePlanPanoramaEmailRequest.url)
}

// string email = 4;
inline void CMessagePlanPanoramaEmailRequest::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessagePlanPanoramaEmailRequest::email() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanPanoramaEmailRequest.email)
  return email_.GetNoArena();
}
inline void CMessagePlanPanoramaEmailRequest::set_email(const ::std::string& value) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessagePlanPanoramaEmailRequest.email)
}
#if LANG_CXX11
inline void CMessagePlanPanoramaEmailRequest::set_email(::std::string&& value) {
  
  email_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessagePlanPanoramaEmailRequest.email)
}
#endif
inline void CMessagePlanPanoramaEmailRequest::set_email(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessagePlanPanoramaEmailRequest.email)
}
inline void CMessagePlanPanoramaEmailRequest::set_email(const char* value, size_t size) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessagePlanPanoramaEmailRequest.email)
}
inline ::std::string* CMessagePlanPanoramaEmailRequest::mutable_email() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessagePlanPanoramaEmailRequest.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessagePlanPanoramaEmailRequest::release_email() {
  // @@protoc_insertion_point(field_release:d5.CMessagePlanPanoramaEmailRequest.email)
  
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessagePlanPanoramaEmailRequest::set_allocated_email(::std::string* email) {
  if (email != NULL) {
    
  } else {
    
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessagePlanPanoramaEmailRequest.email)
}

// -------------------------------------------------------------------

// CMessagePlanPanoramaEmailResponse

// int32 type = 1;
inline void CMessagePlanPanoramaEmailResponse::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 CMessagePlanPanoramaEmailResponse::type() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanPanoramaEmailResponse.type)
  return type_;
}
inline void CMessagePlanPanoramaEmailResponse::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessagePlanPanoramaEmailResponse.type)
}

// string uuid = 2;
inline void CMessagePlanPanoramaEmailResponse::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessagePlanPanoramaEmailResponse::uuid() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanPanoramaEmailResponse.uuid)
  return uuid_.GetNoArena();
}
inline void CMessagePlanPanoramaEmailResponse::set_uuid(const ::std::string& value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessagePlanPanoramaEmailResponse.uuid)
}
#if LANG_CXX11
inline void CMessagePlanPanoramaEmailResponse::set_uuid(::std::string&& value) {
  
  uuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessagePlanPanoramaEmailResponse.uuid)
}
#endif
inline void CMessagePlanPanoramaEmailResponse::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessagePlanPanoramaEmailResponse.uuid)
}
inline void CMessagePlanPanoramaEmailResponse::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessagePlanPanoramaEmailResponse.uuid)
}
inline ::std::string* CMessagePlanPanoramaEmailResponse::mutable_uuid() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessagePlanPanoramaEmailResponse.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessagePlanPanoramaEmailResponse::release_uuid() {
  // @@protoc_insertion_point(field_release:d5.CMessagePlanPanoramaEmailResponse.uuid)
  
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessagePlanPanoramaEmailResponse::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessagePlanPanoramaEmailResponse.uuid)
}

// int32 state = 3;
inline void CMessagePlanPanoramaEmailResponse::clear_state() {
  state_ = 0;
}
inline ::google::protobuf::int32 CMessagePlanPanoramaEmailResponse::state() const {
  // @@protoc_insertion_point(field_get:d5.CMessagePlanPanoramaEmailResponse.state)
  return state_;
}
inline void CMessagePlanPanoramaEmailResponse::set_state(::google::protobuf::int32 value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessagePlanPanoramaEmailResponse.state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace d5

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_5fplan_5fpanorama_5femail_2eproto_INCLUDED