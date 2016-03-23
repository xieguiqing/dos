// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dlfslet.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dlfslet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace dos {

namespace {

const ::google::protobuf::Descriptor* WriteLayerRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WriteLayerRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* WriteLayerResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WriteLayerResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_dlfslet_2eproto() {
  protobuf_AddDesc_dlfslet_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dlfslet.proto");
  GOOGLE_CHECK(file != NULL);
  WriteLayerRequest_descriptor_ = file->message_type(0);
  static const int WriteLayerRequest_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerRequest, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerRequest, seq_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerRequest, data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerRequest, offset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerRequest, size_),
  };
  WriteLayerRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WriteLayerRequest_descriptor_,
      WriteLayerRequest::default_instance_,
      WriteLayerRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WriteLayerRequest));
  WriteLayerResponse_descriptor_ = file->message_type(1);
  static const int WriteLayerResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerResponse, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerResponse, size_),
  };
  WriteLayerResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WriteLayerResponse_descriptor_,
      WriteLayerResponse::default_instance_,
      WriteLayerResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WriteLayerResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WriteLayerResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dlfslet_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WriteLayerRequest_descriptor_, &WriteLayerRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WriteLayerResponse_descriptor_, &WriteLayerResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dlfslet_2eproto() {
  delete WriteLayerRequest::default_instance_;
  delete WriteLayerRequest_reflection_;
  delete WriteLayerResponse::default_instance_;
  delete WriteLayerResponse_reflection_;
}

void protobuf_AddDesc_dlfslet_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::dos::protobuf_AddDesc_dos_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rdlfslet.proto\022\003dos\032\tdos.proto\"[\n\021Write"
    "LayerRequest\022\n\n\002id\030\001 \001(\t\022\016\n\006seq_id\030\002 \001(\r"
    "\022\014\n\004data\030\003 \001(\014\022\016\n\006offset\030\004 \001(\004\022\014\n\004size\030\005"
    " \001(\004\"B\n\022WriteLayerResponse\022\036\n\006status\030\001 \001"
    "(\0162\016.dos.RpcStatus\022\014\n\004size\030\002 \001(\0042H\n\007Dlfs"
    "Let\022=\n\nWriteLayer\022\026.dos.WriteLayerReques"
    "t\032\027.dos.WriteLayerResponse", 266);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dlfslet.proto", &protobuf_RegisterTypes);
  WriteLayerRequest::default_instance_ = new WriteLayerRequest();
  WriteLayerResponse::default_instance_ = new WriteLayerResponse();
  WriteLayerRequest::default_instance_->InitAsDefaultInstance();
  WriteLayerResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dlfslet_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dlfslet_2eproto {
  StaticDescriptorInitializer_dlfslet_2eproto() {
    protobuf_AddDesc_dlfslet_2eproto();
  }
} static_descriptor_initializer_dlfslet_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int WriteLayerRequest::kIdFieldNumber;
const int WriteLayerRequest::kSeqIdFieldNumber;
const int WriteLayerRequest::kDataFieldNumber;
const int WriteLayerRequest::kOffsetFieldNumber;
const int WriteLayerRequest::kSizeFieldNumber;
#endif  // !_MSC_VER

WriteLayerRequest::WriteLayerRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dos.WriteLayerRequest)
}

void WriteLayerRequest::InitAsDefaultInstance() {
}

WriteLayerRequest::WriteLayerRequest(const WriteLayerRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dos.WriteLayerRequest)
}

void WriteLayerRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  seq_id_ = 0u;
  data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  offset_ = GOOGLE_ULONGLONG(0);
  size_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WriteLayerRequest::~WriteLayerRequest() {
  // @@protoc_insertion_point(destructor:dos.WriteLayerRequest)
  SharedDtor();
}

void WriteLayerRequest::SharedDtor() {
  if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete id_;
  }
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete data_;
  }
  if (this != default_instance_) {
  }
}

void WriteLayerRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WriteLayerRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WriteLayerRequest_descriptor_;
}

const WriteLayerRequest& WriteLayerRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dlfslet_2eproto();
  return *default_instance_;
}

WriteLayerRequest* WriteLayerRequest::default_instance_ = NULL;

WriteLayerRequest* WriteLayerRequest::New() const {
  return new WriteLayerRequest;
}

void WriteLayerRequest::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<WriteLayerRequest*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(offset_, seq_id_);
    if (has_id()) {
      if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        id_->clear();
      }
    }
    if (has_data()) {
      if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        data_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WriteLayerRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dos.WriteLayerRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "id");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_seq_id;
        break;
      }

      // optional uint32 seq_id = 2;
      case 2: {
        if (tag == 16) {
         parse_seq_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &seq_id_)));
          set_has_seq_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_data;
        break;
      }

      // optional bytes data = 3;
      case 3: {
        if (tag == 26) {
         parse_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_data()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_offset;
        break;
      }

      // optional uint64 offset = 4;
      case 4: {
        if (tag == 32) {
         parse_offset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &offset_)));
          set_has_offset();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_size;
        break;
      }

      // optional uint64 size = 5;
      case 5: {
        if (tag == 40) {
         parse_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &size_)));
          set_has_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dos.WriteLayerRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dos.WriteLayerRequest)
  return false;
#undef DO_
}

void WriteLayerRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dos.WriteLayerRequest)
  // optional string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  // optional uint32 seq_id = 2;
  if (has_seq_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->seq_id(), output);
  }

  // optional bytes data = 3;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->data(), output);
  }

  // optional uint64 offset = 4;
  if (has_offset()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->offset(), output);
  }

  // optional uint64 size = 5;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->size(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:dos.WriteLayerRequest)
}

::google::protobuf::uint8* WriteLayerRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:dos.WriteLayerRequest)
  // optional string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  // optional uint32 seq_id = 2;
  if (has_seq_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->seq_id(), target);
  }

  // optional bytes data = 3;
  if (has_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->data(), target);
  }

  // optional uint64 offset = 4;
  if (has_offset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->offset(), target);
  }

  // optional uint64 size = 5;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->size(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dos.WriteLayerRequest)
  return target;
}

int WriteLayerRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }

    // optional uint32 seq_id = 2;
    if (has_seq_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->seq_id());
    }

    // optional bytes data = 3;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->data());
    }

    // optional uint64 offset = 4;
    if (has_offset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->offset());
    }

    // optional uint64 size = 5;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->size());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WriteLayerRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WriteLayerRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WriteLayerRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WriteLayerRequest::MergeFrom(const WriteLayerRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_seq_id()) {
      set_seq_id(from.seq_id());
    }
    if (from.has_data()) {
      set_data(from.data());
    }
    if (from.has_offset()) {
      set_offset(from.offset());
    }
    if (from.has_size()) {
      set_size(from.size());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WriteLayerRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WriteLayerRequest::CopyFrom(const WriteLayerRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WriteLayerRequest::IsInitialized() const {

  return true;
}

void WriteLayerRequest::Swap(WriteLayerRequest* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(seq_id_, other->seq_id_);
    std::swap(data_, other->data_);
    std::swap(offset_, other->offset_);
    std::swap(size_, other->size_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WriteLayerRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WriteLayerRequest_descriptor_;
  metadata.reflection = WriteLayerRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int WriteLayerResponse::kStatusFieldNumber;
const int WriteLayerResponse::kSizeFieldNumber;
#endif  // !_MSC_VER

WriteLayerResponse::WriteLayerResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dos.WriteLayerResponse)
}

void WriteLayerResponse::InitAsDefaultInstance() {
}

WriteLayerResponse::WriteLayerResponse(const WriteLayerResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dos.WriteLayerResponse)
}

void WriteLayerResponse::SharedCtor() {
  _cached_size_ = 0;
  status_ = 0;
  size_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WriteLayerResponse::~WriteLayerResponse() {
  // @@protoc_insertion_point(destructor:dos.WriteLayerResponse)
  SharedDtor();
}

void WriteLayerResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void WriteLayerResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WriteLayerResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WriteLayerResponse_descriptor_;
}

const WriteLayerResponse& WriteLayerResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dlfslet_2eproto();
  return *default_instance_;
}

WriteLayerResponse* WriteLayerResponse::default_instance_ = NULL;

WriteLayerResponse* WriteLayerResponse::New() const {
  return new WriteLayerResponse;
}

void WriteLayerResponse::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<WriteLayerResponse*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(size_, status_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WriteLayerResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:dos.WriteLayerResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .dos.RpcStatus status = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::dos::RpcStatus_IsValid(value)) {
            set_status(static_cast< ::dos::RpcStatus >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_size;
        break;
      }

      // optional uint64 size = 2;
      case 2: {
        if (tag == 16) {
         parse_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &size_)));
          set_has_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dos.WriteLayerResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dos.WriteLayerResponse)
  return false;
#undef DO_
}

void WriteLayerResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dos.WriteLayerResponse)
  // optional .dos.RpcStatus status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->status(), output);
  }

  // optional uint64 size = 2;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->size(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:dos.WriteLayerResponse)
}

::google::protobuf::uint8* WriteLayerResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:dos.WriteLayerResponse)
  // optional .dos.RpcStatus status = 1;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->status(), target);
  }

  // optional uint64 size = 2;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->size(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:dos.WriteLayerResponse)
  return target;
}

int WriteLayerResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .dos.RpcStatus status = 1;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
    }

    // optional uint64 size = 2;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->size());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WriteLayerResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WriteLayerResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WriteLayerResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WriteLayerResponse::MergeFrom(const WriteLayerResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_size()) {
      set_size(from.size());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WriteLayerResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WriteLayerResponse::CopyFrom(const WriteLayerResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WriteLayerResponse::IsInitialized() const {

  return true;
}

void WriteLayerResponse::Swap(WriteLayerResponse* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    std::swap(size_, other->size_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WriteLayerResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WriteLayerResponse_descriptor_;
  metadata.reflection = WriteLayerResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace dos

// @@protoc_insertion_point(global_scope)
