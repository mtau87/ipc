// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_keepalive.proto

#ifndef PROTOBUF_message_5fkeepalive_2eproto_INCLUDED
#define PROTOBUF_message_5fkeepalive_2eproto_INCLUDED

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

namespace protobuf_message_5fkeepalive_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsCMessageKeeyAliveImpl();
void InitDefaultsCMessageKeeyAlive();
inline void InitDefaults() {
  InitDefaultsCMessageKeeyAlive();
}
}  // namespace protobuf_message_5fkeepalive_2eproto
namespace d5 {
class CMessageKeeyAlive;
class CMessageKeeyAliveDefaultTypeInternal;
extern CMessageKeeyAliveDefaultTypeInternal _CMessageKeeyAlive_default_instance_;
}  // namespace d5
namespace google {
namespace protobuf {
template<> ::d5::CMessageKeeyAlive* Arena::Create< ::d5::CMessageKeeyAlive>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace d5 {

// ===================================================================

class CMessageKeeyAlive : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:d5.CMessageKeeyAlive) */ {
 public:
  CMessageKeeyAlive();
  virtual ~CMessageKeeyAlive();

  CMessageKeeyAlive(const CMessageKeeyAlive& from);

  inline CMessageKeeyAlive& operator=(const CMessageKeeyAlive& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CMessageKeeyAlive(CMessageKeeyAlive&& from) noexcept
    : CMessageKeeyAlive() {
    *this = ::std::move(from);
  }

  inline CMessageKeeyAlive& operator=(CMessageKeeyAlive&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const CMessageKeeyAlive& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CMessageKeeyAlive* internal_default_instance() {
    return reinterpret_cast<const CMessageKeeyAlive*>(
               &_CMessageKeeyAlive_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(CMessageKeeyAlive* other);
  friend void swap(CMessageKeeyAlive& a, CMessageKeeyAlive& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CMessageKeeyAlive* New() const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageKeeyAlive>(NULL);
  }

  CMessageKeeyAlive* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL {
    return ::google::protobuf::Arena::Create<CMessageKeeyAlive>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const CMessageKeeyAlive& from);
  void MergeFrom(const CMessageKeeyAlive& from);
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
  void InternalSwap(CMessageKeeyAlive* other);
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

  // @@protoc_insertion_point(class_scope:d5.CMessageKeeyAlive)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr uuid_;
  ::google::protobuf::int32 type_;
  mutable int _cached_size_;
  friend struct ::protobuf_message_5fkeepalive_2eproto::TableStruct;
  friend void ::protobuf_message_5fkeepalive_2eproto::InitDefaultsCMessageKeeyAliveImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CMessageKeeyAlive

// int32 type = 1;
inline void CMessageKeeyAlive::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 CMessageKeeyAlive::type() const {
  // @@protoc_insertion_point(field_get:d5.CMessageKeeyAlive.type)
  return type_;
}
inline void CMessageKeeyAlive::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:d5.CMessageKeeyAlive.type)
}

// string uuid = 2;
inline void CMessageKeeyAlive::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CMessageKeeyAlive::uuid() const {
  // @@protoc_insertion_point(field_get:d5.CMessageKeeyAlive.uuid)
  return uuid_.GetNoArena();
}
inline void CMessageKeeyAlive::set_uuid(const ::std::string& value) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:d5.CMessageKeeyAlive.uuid)
}
#if LANG_CXX11
inline void CMessageKeeyAlive::set_uuid(::std::string&& value) {
  
  uuid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:d5.CMessageKeeyAlive.uuid)
}
#endif
inline void CMessageKeeyAlive::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:d5.CMessageKeeyAlive.uuid)
}
inline void CMessageKeeyAlive::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:d5.CMessageKeeyAlive.uuid)
}
inline ::std::string* CMessageKeeyAlive::mutable_uuid() {
  
  // @@protoc_insertion_point(field_mutable:d5.CMessageKeeyAlive.uuid)
  return uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CMessageKeeyAlive::release_uuid() {
  // @@protoc_insertion_point(field_release:d5.CMessageKeeyAlive.uuid)
  
  return uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CMessageKeeyAlive::set_allocated_uuid(::std::string* uuid) {
  if (uuid != NULL) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:d5.CMessageKeeyAlive.uuid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace d5

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_5fkeepalive_2eproto_INCLUDED
