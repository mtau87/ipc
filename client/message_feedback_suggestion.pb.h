// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_feedback_suggestion.proto

#ifndef PROTOBUF_message_5ffeedback_5fsuggestion_2eproto_INCLUDED
#define PROTOBUF_message_5ffeedback_5fsuggestion_2eproto_INCLUDED

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

namespace protobuf_message_5ffeedback_5fsuggestion_2eproto {
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
void InitDefaultsCMessageFeedBackSuggestionRequestImpl();
void InitDefaultsCMessageFeedBackSuggestionRequest();
void InitDefaultsCMessageFeedBackSuggestionResponseImpl();
void InitDefaultsCMessageFeedBackSuggestionResponse();
inline void InitDefaults() {
  InitDefaultsCMessageFeedBackSuggestionRequest();
  InitDefaultsCMessageFeedBackSuggestionResponse();
}
}  // namespace protobuf_message_5ffeedback_5fsuggestion_2eproto
namespace d5 {
class CMessageFeedBackSuggestionRequest;
class CMessageFeedBackSuggestionRequestDefaultTypeInternal;
extern CMessageFeedBackSuggestionRequestDefaultTypeInternal _CMessageFeedBackSuggestionRequest_default_instance_;
class CMessageFeedBackSuggestionResponse;
class CMessageFeedBackSuggestionResponseDefaultTypeInternal;
extern CMessageFeedBackSuggestionResponseDefaultTypeInternal _CMessageFeedBackSuggestionResponse_default_instance_;
}  // namespace d5
namespace google {
namespace protobuf {
template<> ::d5::CMessageFeedBackSuggestionRequest* Arena::Create< ::d5::CMessageFeedBackSuggestionRequest>(Arena*);
template<> ::d5::CMessageFeedBackSuggestionResponse* Arena::Create< ::d5::CMessageFeedBackSuggestionResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace d5 {

// ===================================================================

class CMessageFeedBackSuggestionRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessageFeedBackSuggestionRequest) */ {
 public:
  CMessageFeedBackSuggestionRequest();
  virtual ~CMessageFeedBackSuggestionRequest();

  CMessageFeedBackSuggestionRequest(const CMessageFeedBackSuggestionRequest& from);

  inline CMessageFeedBackSuggestionRequest& operator=(const CMessageFeedBackSuggestionRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessageFeedBackSuggestionRequest(CMessageFeedBackSuggestionRequest&& from) noexcept
    : CMessageFeedBackSuggestionRequest() {
    *this = ::std::move(from);
  }

  inline CMessageFeedBackSuggestionRequest& operator=(CMessageFeedBackSuggestionRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageFeedBackSuggestionRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessageFeedBackSuggestionRequest* internal_default_instance() {
    return reinterpret_cast<const CMessageFeedBackSuggestionRequest*>(
               &_CMessageFeedBackSuggestionRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CMessageFeedBackSuggestionRequest* other);
  friend void swap(CMessageFeedBackSuggestionRequest& a, CMessageFeedBackSuggestionRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessageFeedBackSuggestionRequest* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageFeedBackSuggestionRequest>(NULL);
  }

  CMessageFeedBackSuggestionRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageFeedBackSuggestionRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessageFeedBackSuggestionRequest& from);
  void MergeFrom(const CMessageFeedBackSuggestionRequest& from);
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
  void InternalSwap(CMessageFeedBackSuggestionRequest* other);
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

  // string mesage = 4;
  void clear_mesage();
  static const int kMesageFieldNumber = 4;
  const ::std::string& mesage() const;
  void set_mesage(const ::std::string& value);
  #if LANG_CXX11
  void set_mesage(::std::string&& value);
  #endif
  void set_mesage(const char* value);
  void set_mesage(const char* value, size_t size);
  ::std::string* mutable_mesage();
  ::std::string* release_mesage();
  void set_allocated_mesage(::std::string* mesage);

  // int32 type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // int32 mood = 3;
  void clear_mood();
  static const int kMoodFieldNumber = 3;
  ::google::protobuf::int32 mood() const;
  void set_mood(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:d5.CMessageFeedBackSuggestionRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::internal::ArenaStringPtr mesage_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 mood_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5ffeedback_5fsuggestion_2eproto::TableStruct;
  friend void ::protobuf_message_5ffeedback_5fsuggestion_2eproto::InitDefaultsCMessageFeedBackSuggestionRequestImpl();
};
// -------------------------------------------------------------------

class CMessageFeedBackSuggestionResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessageFeedBackSuggestionResponse) */ {
 public:
  CMessageFeedBackSuggestionResponse();
  virtual ~CMessageFeedBackSuggestionResponse();

  CMessageFeedBackSuggestionResponse(const CMessageFeedBackSuggestionResponse& from);

  inline CMessageFeedBackSuggestionResponse& operator=(const CMessageFeedBackSuggestionResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessageFeedBackSuggestionResponse(CMessageFeedBackSuggestionResponse&& from) noexcept
    : CMessageFeedBackSuggestionResponse() {
    *this = ::std::move(from);
  }

  inline CMessageFeedBackSuggestionResponse& operator=(CMessageFeedBackSuggestionResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageFeedBackSuggestionResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessageFeedBackSuggestionResponse* internal_default_instance() {
    return reinterpret_cast<const CMessageFeedBackSuggestionResponse*>(
               &_CMessageFeedBackSuggestionResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(CMessageFeedBackSuggestionResponse* other);
  friend void swap(CMessageFeedBackSuggestionResponse& a, CMessageFeedBackSuggestionResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessageFeedBackSuggestionResponse* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageFeedBackSuggestionResponse>(NULL);
  }

  CMessageFeedBackSuggestionResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageFeedBackSuggestionResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessageFeedBackSuggestionResponse& from);
  void MergeFrom(const CMessageFeedBackSuggestionResponse& from);
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
  void InternalSwap(CMessageFeedBackSuggestionResponse* other);
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

  // @@protoc_insertion_point(class_scope:d5.CMessageFeedBackSuggestionResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 state_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5ffeedback_5fsuggestion_2eproto::TableStruct;
  friend void ::protobuf_message_5ffeedback_5fsuggestion_2eproto::InitDefaultsCMessageFeedBackSuggestionResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CMessageFeedBackSuggestionRequest

// int32 type = 1;
inline void CMessageFeedBackSuggestionRequest::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 CMessageFeedBackSuggestionRequest::type() const {
  // @@protoc_insertion_point(field_get:d5.CMessageFeedBackSuggestionRequest.type)
  return type_;
}
inline void CMessageFeedBackSuggestionRequest::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageFeedBackSuggestionRequest.type)
}

// string uuid = 2;
inline void CMessageFeedBackSuggestionRequest::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessageFeedBackSuggestionRequest::uuid() const {
  // @@protoc_insertion_point(field_get:d5.CMessageFeedBackSuggestionRequest.uuid)
  return uuid_.GetNoArena();
}
inline void CMessageFeedBackSuggestionRequest::set_uuid(const ::std::string& value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessageFeedBackSuggestionRequest.uuid)
}
#if LANG_CXX11
inline void CMessageFeedBackSuggestionRequest::set_uuid(::std::string&& value) {
  
  uuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessageFeedBackSuggestionRequest.uuid)
}
#endif
inline void CMessageFeedBackSuggestionRequest::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessageFeedBackSuggestionRequest.uuid)
}
inline void CMessageFeedBackSuggestionRequest::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessageFeedBackSuggestionRequest.uuid)
}
inline ::std::string* CMessageFeedBackSuggestionRequest::mutable_uuid() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessageFeedBackSuggestionRequest.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessageFeedBackSuggestionRequest::release_uuid() {
  // @@protoc_insertion_point(field_release:d5.CMessageFeedBackSuggestionRequest.uuid)
  
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessageFeedBackSuggestionRequest::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessageFeedBackSuggestionRequest.uuid)
}

// int32 mood = 3;
inline void CMessageFeedBackSuggestionRequest::clear_mood() {
  mood_ = 0;
}
inline ::google::protobuf::int32 CMessageFeedBackSuggestionRequest::mood() const {
  // @@protoc_insertion_point(field_get:d5.CMessageFeedBackSuggestionRequest.mood)
  return mood_;
}
inline void CMessageFeedBackSuggestionRequest::set_mood(::google::protobuf::int32 value) {
  
  mood_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageFeedBackSuggestionRequest.mood)
}

// string mesage = 4;
inline void CMessageFeedBackSuggestionRequest::clear_mesage() {
  mesage_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessageFeedBackSuggestionRequest::mesage() const {
  // @@protoc_insertion_point(field_get:d5.CMessageFeedBackSuggestionRequest.mesage)
  return mesage_.GetNoArena();
}
inline void CMessageFeedBackSuggestionRequest::set_mesage(const ::std::string& value) {
  
  mesage_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessageFeedBackSuggestionRequest.mesage)
}
#if LANG_CXX11
inline void CMessageFeedBackSuggestionRequest::set_mesage(::std::string&& value) {
  
  mesage_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessageFeedBackSuggestionRequest.mesage)
}
#endif
inline void CMessageFeedBackSuggestionRequest::set_mesage(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  mesage_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessageFeedBackSuggestionRequest.mesage)
}
inline void CMessageFeedBackSuggestionRequest::set_mesage(const char* value, size_t size) {
  
  mesage_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessageFeedBackSuggestionRequest.mesage)
}
inline ::std::string* CMessageFeedBackSuggestionRequest::mutable_mesage() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessageFeedBackSuggestionRequest.mesage)
  return mesage_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessageFeedBackSuggestionRequest::release_mesage() {
  // @@protoc_insertion_point(field_release:d5.CMessageFeedBackSuggestionRequest.mesage)
  
  return mesage_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessageFeedBackSuggestionRequest::set_allocated_mesage(::std::string* mesage) {
  if (mesage != NULL) {
    
  } else {
    
  }
  mesage_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), mesage);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessageFeedBackSuggestionRequest.mesage)
}

// -------------------------------------------------------------------

// CMessageFeedBackSuggestionResponse

// int32 type = 1;
inline void CMessageFeedBackSuggestionResponse::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 CMessageFeedBackSuggestionResponse::type() const {
  // @@protoc_insertion_point(field_get:d5.CMessageFeedBackSuggestionResponse.type)
  return type_;
}
inline void CMessageFeedBackSuggestionResponse::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageFeedBackSuggestionResponse.type)
}

// string uuid = 2;
inline void CMessageFeedBackSuggestionResponse::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessageFeedBackSuggestionResponse::uuid() const {
  // @@protoc_insertion_point(field_get:d5.CMessageFeedBackSuggestionResponse.uuid)
  return uuid_.GetNoArena();
}
inline void CMessageFeedBackSuggestionResponse::set_uuid(const ::std::string& value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessageFeedBackSuggestionResponse.uuid)
}
#if LANG_CXX11
inline void CMessageFeedBackSuggestionResponse::set_uuid(::std::string&& value) {
  
  uuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessageFeedBackSuggestionResponse.uuid)
}
#endif
inline void CMessageFeedBackSuggestionResponse::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessageFeedBackSuggestionResponse.uuid)
}
inline void CMessageFeedBackSuggestionResponse::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessageFeedBackSuggestionResponse.uuid)
}
inline ::std::string* CMessageFeedBackSuggestionResponse::mutable_uuid() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessageFeedBackSuggestionResponse.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessageFeedBackSuggestionResponse::release_uuid() {
  // @@protoc_insertion_point(field_release:d5.CMessageFeedBackSuggestionResponse.uuid)
  
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessageFeedBackSuggestionResponse::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessageFeedBackSuggestionResponse.uuid)
}

// int32 state = 3;
inline void CMessageFeedBackSuggestionResponse::clear_state() {
  state_ = 0;
}
inline ::google::protobuf::int32 CMessageFeedBackSuggestionResponse::state() const {
  // @@protoc_insertion_point(field_get:d5.CMessageFeedBackSuggestionResponse.state)
  return state_;
}
inline void CMessageFeedBackSuggestionResponse::set_state(::google::protobuf::int32 value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageFeedBackSuggestionResponse.state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace d5

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_5ffeedback_5fsuggestion_2eproto_INCLUDED