// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_plan_delete.proto

#include "message_plan_delete.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace d5 {
class CMessagePlanDeleteRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CMessagePlanDeleteRequest>
      _instance;
} _CMessagePlanDeleteRequest_default_instance_;
class CMessagePlanDeleteResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CMessagePlanDeleteResponse>
      _instance;
} _CMessagePlanDeleteResponse_default_instance_;
}  // namespace d5
namespace protobuf_message_5fplan_5fdelete_2eproto {
void InitDefaultsCMessagePlanDeleteRequestImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::d5::_CMessagePlanDeleteRequest_default_instance_;
    new (ptr) ::d5::CMessagePlanDeleteRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::d5::CMessagePlanDeleteRequest::InitAsDefaultInstance();
}

void InitDefaultsCMessagePlanDeleteRequest() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsCMessagePlanDeleteRequestImpl);
}

void InitDefaultsCMessagePlanDeleteResponseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::d5::_CMessagePlanDeleteResponse_default_instance_;
    new (ptr) ::d5::CMessagePlanDeleteResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::d5::CMessagePlanDeleteResponse::InitAsDefaultInstance();
}

void InitDefaultsCMessagePlanDeleteResponse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsCMessagePlanDeleteResponseImpl);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::d5::CMessagePlanDeleteRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::d5::CMessagePlanDeleteRequest, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::d5::CMessagePlanDeleteRequest, uuid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::d5::CMessagePlanDeleteRequest, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::d5::CMessagePlanDeleteRequest, updatetime_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::d5::CMessagePlanDeleteResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::d5::CMessagePlanDeleteResponse, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::d5::CMessagePlanDeleteResponse, uuid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::d5::CMessagePlanDeleteResponse, state_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::d5::CMessagePlanDeleteRequest)},
  { 9, -1, sizeof(::d5::CMessagePlanDeleteResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::d5::_CMessagePlanDeleteRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::d5::_CMessagePlanDeleteResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "message_plan_delete.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\031message_plan_delete.proto\022\002d5\"W\n\031CMess"
      "agePlanDeleteRequest\022\014\n\004type\030\001 \001(\005\022\014\n\004uu"
      "id\030\002 \001(\t\022\n\n\002id\030\003 \001(\t\022\022\n\nupdateTime\030\004 \001(\003"
      "\"G\n\032CMessagePlanDeleteResponse\022\014\n\004type\030\001"
      " \001(\005\022\014\n\004uuid\030\002 \001(\t\022\r\n\005state\030\003 \001(\005b\006proto"
      "3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 201);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message_plan_delete.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_message_5fplan_5fdelete_2eproto
namespace d5 {

// ===================================================================

void CMessagePlanDeleteRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CMessagePlanDeleteRequest::kTypeFieldNumber;
const int CMessagePlanDeleteRequest::kUuidFieldNumber;
const int CMessagePlanDeleteRequest::kIdFieldNumber;
const int CMessagePlanDeleteRequest::kUpdateTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CMessagePlanDeleteRequest::CMessagePlanDeleteRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_message_5fplan_5fdelete_2eproto::InitDefaultsCMessagePlanDeleteRequest();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:d5.CMessagePlanDeleteRequest)
}
CMessagePlanDeleteRequest::CMessagePlanDeleteRequest(const CMessagePlanDeleteRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  uuid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.uuid().size() > 0) {
    uuid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uuid_);
  }
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  ::memcpy(&updatetime_, &from.updatetime_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&updatetime_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:d5.CMessagePlanDeleteRequest)
}

void CMessagePlanDeleteRequest::SharedCtor() {
  uuid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&updatetime_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&updatetime_)) + sizeof(type_));
  _cached_size_ = 0;
}

CMessagePlanDeleteRequest::~CMessagePlanDeleteRequest() {
  // @@protoc_insertion_point(destructor:d5.CMessagePlanDeleteRequest)
  SharedDtor();
}

void CMessagePlanDeleteRequest::SharedDtor() {
  uuid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CMessagePlanDeleteRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMessagePlanDeleteRequest::descriptor() {
  ::protobuf_message_5fplan_5fdelete_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_message_5fplan_5fdelete_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CMessagePlanDeleteRequest& CMessagePlanDeleteRequest::default_instance() {
  ::protobuf_message_5fplan_5fdelete_2eproto::InitDefaultsCMessagePlanDeleteRequest();
  return *internal_default_instance();
}


void CMessagePlanDeleteRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:d5.CMessagePlanDeleteRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&updatetime_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&updatetime_)) + sizeof(type_));
  _internal_metadata_.Clear();
}

bool CMessagePlanDeleteRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:d5.CMessagePlanDeleteRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string uuid = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uuid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->uuid().data(), static_cast<int>(this->uuid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "d5.CMessagePlanDeleteRequest.uuid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), static_cast<int>(this->id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "d5.CMessagePlanDeleteRequest.id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 updateTime = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &updatetime_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:d5.CMessagePlanDeleteRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:d5.CMessagePlanDeleteRequest)
  return false;
#undef DO_
}

void CMessagePlanDeleteRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:d5.CMessagePlanDeleteRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }

  // string uuid = 2;
  if (this->uuid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uuid().data(), static_cast<int>(this->uuid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "d5.CMessagePlanDeleteRequest.uuid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->uuid(), output);
  }

  // string id = 3;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "d5.CMessagePlanDeleteRequest.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->id(), output);
  }

  // int64 updateTime = 4;
  if (this->updatetime() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->updatetime(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:d5.CMessagePlanDeleteRequest)
}

::google::protobuf::uint8* CMessagePlanDeleteRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:d5.CMessagePlanDeleteRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }

  // string uuid = 2;
  if (this->uuid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uuid().data(), static_cast<int>(this->uuid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "d5.CMessagePlanDeleteRequest.uuid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->uuid(), target);
  }

  // string id = 3;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "d5.CMessagePlanDeleteRequest.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->id(), target);
  }

  // int64 updateTime = 4;
  if (this->updatetime() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->updatetime(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:d5.CMessagePlanDeleteRequest)
  return target;
}

size_t CMessagePlanDeleteRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:d5.CMessagePlanDeleteRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string uuid = 2;
  if (this->uuid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uuid());
  }

  // string id = 3;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // int64 updateTime = 4;
  if (this->updatetime() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->updatetime());
  }

  // int32 type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CMessagePlanDeleteRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:d5.CMessagePlanDeleteRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const CMessagePlanDeleteRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CMessagePlanDeleteRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:d5.CMessagePlanDeleteRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:d5.CMessagePlanDeleteRequest)
    MergeFrom(*source);
  }
}

void CMessagePlanDeleteRequest::MergeFrom(const CMessagePlanDeleteRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:d5.CMessagePlanDeleteRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.uuid().size() > 0) {

    uuid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uuid_);
  }
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.updatetime() != 0) {
    set_updatetime(from.updatetime());
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void CMessagePlanDeleteRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:d5.CMessagePlanDeleteRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CMessagePlanDeleteRequest::CopyFrom(const CMessagePlanDeleteRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:d5.CMessagePlanDeleteRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CMessagePlanDeleteRequest::IsInitialized() const {
  return true;
}

void CMessagePlanDeleteRequest::Swap(CMessagePlanDeleteRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CMessagePlanDeleteRequest::InternalSwap(CMessagePlanDeleteRequest* other) {
  using std::swap;
  uuid_.Swap(&other->uuid_);
  id_.Swap(&other->id_);
  swap(updatetime_, other->updatetime_);
  swap(type_, other->type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CMessagePlanDeleteRequest::GetMetadata() const {
  protobuf_message_5fplan_5fdelete_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_message_5fplan_5fdelete_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void CMessagePlanDeleteResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CMessagePlanDeleteResponse::kTypeFieldNumber;
const int CMessagePlanDeleteResponse::kUuidFieldNumber;
const int CMessagePlanDeleteResponse::kStateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CMessagePlanDeleteResponse::CMessagePlanDeleteResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_message_5fplan_5fdelete_2eproto::InitDefaultsCMessagePlanDeleteResponse();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:d5.CMessagePlanDeleteResponse)
}
CMessagePlanDeleteResponse::CMessagePlanDeleteResponse(const CMessagePlanDeleteResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  uuid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.uuid().size() > 0) {
    uuid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uuid_);
  }
  ::memcpy(&type_, &from.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&state_) -
    reinterpret_cast<char*>(&type_)) + sizeof(state_));
  // @@protoc_insertion_point(copy_constructor:d5.CMessagePlanDeleteResponse)
}

void CMessagePlanDeleteResponse::SharedCtor() {
  uuid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&state_) -
      reinterpret_cast<char*>(&type_)) + sizeof(state_));
  _cached_size_ = 0;
}

CMessagePlanDeleteResponse::~CMessagePlanDeleteResponse() {
  // @@protoc_insertion_point(destructor:d5.CMessagePlanDeleteResponse)
  SharedDtor();
}

void CMessagePlanDeleteResponse::SharedDtor() {
  uuid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CMessagePlanDeleteResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CMessagePlanDeleteResponse::descriptor() {
  ::protobuf_message_5fplan_5fdelete_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_message_5fplan_5fdelete_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CMessagePlanDeleteResponse& CMessagePlanDeleteResponse::default_instance() {
  ::protobuf_message_5fplan_5fdelete_2eproto::InitDefaultsCMessagePlanDeleteResponse();
  return *internal_default_instance();
}


void CMessagePlanDeleteResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:d5.CMessagePlanDeleteResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&state_) -
      reinterpret_cast<char*>(&type_)) + sizeof(state_));
  _internal_metadata_.Clear();
}

bool CMessagePlanDeleteResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:d5.CMessagePlanDeleteResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string uuid = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uuid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->uuid().data(), static_cast<int>(this->uuid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "d5.CMessagePlanDeleteResponse.uuid"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 state = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &state_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:d5.CMessagePlanDeleteResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:d5.CMessagePlanDeleteResponse)
  return false;
#undef DO_
}

void CMessagePlanDeleteResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:d5.CMessagePlanDeleteResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }

  // string uuid = 2;
  if (this->uuid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uuid().data(), static_cast<int>(this->uuid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "d5.CMessagePlanDeleteResponse.uuid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->uuid(), output);
  }

  // int32 state = 3;
  if (this->state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->state(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:d5.CMessagePlanDeleteResponse)
}

::google::protobuf::uint8* CMessagePlanDeleteResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:d5.CMessagePlanDeleteResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }

  // string uuid = 2;
  if (this->uuid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uuid().data(), static_cast<int>(this->uuid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "d5.CMessagePlanDeleteResponse.uuid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->uuid(), target);
  }

  // int32 state = 3;
  if (this->state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->state(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:d5.CMessagePlanDeleteResponse)
  return target;
}

size_t CMessagePlanDeleteResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:d5.CMessagePlanDeleteResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string uuid = 2;
  if (this->uuid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uuid());
  }

  // int32 type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type());
  }

  // int32 state = 3;
  if (this->state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->state());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CMessagePlanDeleteResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:d5.CMessagePlanDeleteResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const CMessagePlanDeleteResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CMessagePlanDeleteResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:d5.CMessagePlanDeleteResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:d5.CMessagePlanDeleteResponse)
    MergeFrom(*source);
  }
}

void CMessagePlanDeleteResponse::MergeFrom(const CMessagePlanDeleteResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:d5.CMessagePlanDeleteResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.uuid().size() > 0) {

    uuid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uuid_);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.state() != 0) {
    set_state(from.state());
  }
}

void CMessagePlanDeleteResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:d5.CMessagePlanDeleteResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CMessagePlanDeleteResponse::CopyFrom(const CMessagePlanDeleteResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:d5.CMessagePlanDeleteResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CMessagePlanDeleteResponse::IsInitialized() const {
  return true;
}

void CMessagePlanDeleteResponse::Swap(CMessagePlanDeleteResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CMessagePlanDeleteResponse::InternalSwap(CMessagePlanDeleteResponse* other) {
  using std::swap;
  uuid_.Swap(&other->uuid_);
  swap(type_, other->type_);
  swap(state_, other->state_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CMessagePlanDeleteResponse::GetMetadata() const {
  protobuf_message_5fplan_5fdelete_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_message_5fplan_5fdelete_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace d5
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::d5::CMessagePlanDeleteRequest* Arena::Create< ::d5::CMessagePlanDeleteRequest >(Arena* arena) {
  return Arena::CreateInternal< ::d5::CMessagePlanDeleteRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::d5::CMessagePlanDeleteResponse* Arena::Create< ::d5::CMessagePlanDeleteResponse >(Arena* arena) {
  return Arena::CreateInternal< ::d5::CMessagePlanDeleteResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
