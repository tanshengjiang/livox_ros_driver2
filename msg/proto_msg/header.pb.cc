// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: header.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "header.pb.h"

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
// @@protoc_insertion_point(includes)

namespace CommonMsg {

namespace {

const ::google::protobuf::Descriptor* Header_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Header_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_header_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_header_2eproto() {
  protobuf_AddDesc_header_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "header.proto");
  GOOGLE_CHECK(file != NULL);
  Header_descriptor_ = file->message_type(0);
  static const int Header_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, timestamp_sec_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, frame_id_),
  };
  Header_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Header_descriptor_,
      Header::default_instance_,
      Header_offsets_,
      -1,
      -1,
      -1,
      sizeof(Header),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_header_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Header_descriptor_, &Header::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_header_2eproto() {
  delete Header::default_instance_;
  delete Header_reflection_;
}

void protobuf_AddDesc_header_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_header_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014header.proto\022\tCommonMsg\"1\n\006Header\022\025\n\rt"
    "imestamp_sec\030\001 \001(\001\022\020\n\010frame_id\030\002 \001(\tb\006pr"
    "oto3", 84);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "header.proto", &protobuf_RegisterTypes);
  Header::default_instance_ = new Header();
  Header::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_header_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_header_2eproto {
  StaticDescriptorInitializer_header_2eproto() {
    protobuf_AddDesc_header_2eproto();
  }
} static_descriptor_initializer_header_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Header::kTimestampSecFieldNumber;
const int Header::kFrameIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Header::Header()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:CommonMsg.Header)
}

void Header::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Header::Header(const Header& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CommonMsg.Header)
}

void Header::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  timestamp_sec_ = 0;
  frame_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Header::~Header() {
  // @@protoc_insertion_point(destructor:CommonMsg.Header)
  SharedDtor();
}

void Header::SharedDtor() {
  frame_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Header::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Header::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Header_descriptor_;
}

const Header& Header::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_header_2eproto();
  return *default_instance_;
}

Header* Header::default_instance_ = NULL;

Header* Header::New(::google::protobuf::Arena* arena) const {
  Header* n = new Header;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Header::Clear() {
// @@protoc_insertion_point(message_clear_start:CommonMsg.Header)
  timestamp_sec_ = 0;
  frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Header::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CommonMsg.Header)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double timestamp_sec = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_sec_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_frame_id;
        break;
      }

      // optional string frame_id = 2;
      case 2: {
        if (tag == 18) {
         parse_frame_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_frame_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->frame_id().data(), this->frame_id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "CommonMsg.Header.frame_id"));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CommonMsg.Header)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CommonMsg.Header)
  return false;
#undef DO_
}

void Header::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CommonMsg.Header)
  // optional double timestamp_sec = 1;
  if (this->timestamp_sec() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->timestamp_sec(), output);
  }

  // optional string frame_id = 2;
  if (this->frame_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->frame_id().data(), this->frame_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CommonMsg.Header.frame_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->frame_id(), output);
  }

  // @@protoc_insertion_point(serialize_end:CommonMsg.Header)
}

::google::protobuf::uint8* Header::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:CommonMsg.Header)
  // optional double timestamp_sec = 1;
  if (this->timestamp_sec() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->timestamp_sec(), target);
  }

  // optional string frame_id = 2;
  if (this->frame_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->frame_id().data(), this->frame_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CommonMsg.Header.frame_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->frame_id(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:CommonMsg.Header)
  return target;
}

int Header::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:CommonMsg.Header)
  int total_size = 0;

  // optional double timestamp_sec = 1;
  if (this->timestamp_sec() != 0) {
    total_size += 1 + 8;
  }

  // optional string frame_id = 2;
  if (this->frame_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->frame_id());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Header::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CommonMsg.Header)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Header* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Header>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CommonMsg.Header)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CommonMsg.Header)
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CommonMsg.Header)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.timestamp_sec() != 0) {
    set_timestamp_sec(from.timestamp_sec());
  }
  if (from.frame_id().size() > 0) {

    frame_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_id_);
  }
}

void Header::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CommonMsg.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CommonMsg.Header)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {

  return true;
}

void Header::Swap(Header* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Header::InternalSwap(Header* other) {
  std::swap(timestamp_sec_, other->timestamp_sec_);
  frame_id_.Swap(&other->frame_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Header::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Header_descriptor_;
  metadata.reflection = Header_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Header

// optional double timestamp_sec = 1;
void Header::clear_timestamp_sec() {
  timestamp_sec_ = 0;
}
 double Header::timestamp_sec() const {
  // @@protoc_insertion_point(field_get:CommonMsg.Header.timestamp_sec)
  return timestamp_sec_;
}
 void Header::set_timestamp_sec(double value) {
  
  timestamp_sec_ = value;
  // @@protoc_insertion_point(field_set:CommonMsg.Header.timestamp_sec)
}

// optional string frame_id = 2;
void Header::clear_frame_id() {
  frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Header::frame_id() const {
  // @@protoc_insertion_point(field_get:CommonMsg.Header.frame_id)
  return frame_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Header::set_frame_id(const ::std::string& value) {
  
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CommonMsg.Header.frame_id)
}
 void Header::set_frame_id(const char* value) {
  
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CommonMsg.Header.frame_id)
}
 void Header::set_frame_id(const char* value, size_t size) {
  
  frame_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CommonMsg.Header.frame_id)
}
 ::std::string* Header::mutable_frame_id() {
  
  // @@protoc_insertion_point(field_mutable:CommonMsg.Header.frame_id)
  return frame_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Header::release_frame_id() {
  // @@protoc_insertion_point(field_release:CommonMsg.Header.frame_id)
  
  return frame_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Header::set_allocated_frame_id(::std::string* frame_id) {
  if (frame_id != NULL) {
    
  } else {
    
  }
  frame_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), frame_id);
  // @@protoc_insertion_point(field_set_allocated:CommonMsg.Header.frame_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace CommonMsg

// @@protoc_insertion_point(global_scope)
