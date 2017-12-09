// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Scaler.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Scaler.pb.h"

#include <algorithm>

#include <protobuf/stubs/common.h>
#include <protobuf/stubs/port.h>
#include <protobuf/stubs/once.h>
#include <protobuf/io/coded_stream.h>
#include <protobuf/wire_format_lite_inl.h>
#include <protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace CoreML {
namespace Specification {

void protobuf_ShutdownFile_Scaler_2eproto() {
  Scaler_default_instance_.Shutdown();
}

void protobuf_InitDefaults_Scaler_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  Scaler_default_instance_.DefaultConstruct();
  Scaler_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_Scaler_2eproto_once_);
void protobuf_InitDefaults_Scaler_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_Scaler_2eproto_once_,
                 &protobuf_InitDefaults_Scaler_2eproto_impl);
}
void protobuf_AddDesc_Scaler_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_Scaler_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Scaler_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Scaler_2eproto_once_);
void protobuf_AddDesc_Scaler_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Scaler_2eproto_once_,
                 &protobuf_AddDesc_Scaler_2eproto_impl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Scaler_2eproto {
  StaticDescriptorInitializer_Scaler_2eproto() {
    protobuf_AddDesc_Scaler_2eproto();
  }
} static_descriptor_initializer_Scaler_2eproto_;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Scaler::kShiftValueFieldNumber;
const int Scaler::kScaleValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Scaler::Scaler()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_Scaler_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:CoreML.Specification.Scaler)
}

void Scaler::InitAsDefaultInstance() {
}

Scaler::Scaler(const Scaler& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CoreML.Specification.Scaler)
}

void Scaler::SharedCtor() {
  _cached_size_ = 0;
}

Scaler::~Scaler() {
  // @@protoc_insertion_point(destructor:CoreML.Specification.Scaler)
  SharedDtor();
}

void Scaler::SharedDtor() {
}

void Scaler::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Scaler& Scaler::default_instance() {
  protobuf_InitDefaults_Scaler_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Scaler> Scaler_default_instance_;

Scaler* Scaler::New(::google::protobuf::Arena* arena) const {
  Scaler* n = new Scaler;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Scaler::Clear() {
// @@protoc_insertion_point(message_clear_start:CoreML.Specification.Scaler)
  shiftvalue_.Clear();
  scalevalue_.Clear();
}

bool Scaler::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CoreML.Specification.Scaler)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated double shiftValue = 1;
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_shiftvalue())));
        } else if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 10, input, this->mutable_shiftvalue())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_scaleValue;
        break;
      }

      // repeated double scaleValue = 2;
      case 2: {
        if (tag == 18) {
         parse_scaleValue:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_scalevalue())));
        } else if (tag == 17) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 18, input, this->mutable_scalevalue())));
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
  // @@protoc_insertion_point(parse_success:CoreML.Specification.Scaler)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CoreML.Specification.Scaler)
  return false;
#undef DO_
}

void Scaler::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CoreML.Specification.Scaler)
  // repeated double shiftValue = 1;
  if (this->shiftvalue_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_shiftvalue_cached_byte_size_);
  }
  for (int i = 0; i < this->shiftvalue_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteDoubleNoTag(
      this->shiftvalue(i), output);
  }

  // repeated double scaleValue = 2;
  if (this->scalevalue_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_scalevalue_cached_byte_size_);
  }
  for (int i = 0; i < this->scalevalue_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteDoubleNoTag(
      this->scalevalue(i), output);
  }

  // @@protoc_insertion_point(serialize_end:CoreML.Specification.Scaler)
}

size_t Scaler::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CoreML.Specification.Scaler)
  size_t total_size = 0;

  // repeated double shiftValue = 1;
  {
    size_t data_size = 0;
    unsigned int count = this->shiftvalue_size();
    data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _shiftvalue_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated double scaleValue = 2;
  {
    size_t data_size = 0;
    unsigned int count = this->scalevalue_size();
    data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _scalevalue_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Scaler::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Scaler*>(&from));
}

void Scaler::MergeFrom(const Scaler& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CoreML.Specification.Scaler)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Scaler::UnsafeMergeFrom(const Scaler& from) {
  GOOGLE_DCHECK(&from != this);
  shiftvalue_.UnsafeMergeFrom(from.shiftvalue_);
  scalevalue_.UnsafeMergeFrom(from.scalevalue_);
}

void Scaler::CopyFrom(const Scaler& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CoreML.Specification.Scaler)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Scaler::IsInitialized() const {

  return true;
}

void Scaler::Swap(Scaler* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Scaler::InternalSwap(Scaler* other) {
  shiftvalue_.UnsafeArenaSwap(&other->shiftvalue_);
  scalevalue_.UnsafeArenaSwap(&other->scalevalue_);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string Scaler::GetTypeName() const {
  return "CoreML.Specification.Scaler";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Scaler

// repeated double shiftValue = 1;
int Scaler::shiftvalue_size() const {
  return shiftvalue_.size();
}
void Scaler::clear_shiftvalue() {
  shiftvalue_.Clear();
}
double Scaler::shiftvalue(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.Scaler.shiftValue)
  return shiftvalue_.Get(index);
}
void Scaler::set_shiftvalue(int index, double value) {
  shiftvalue_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.Scaler.shiftValue)
}
void Scaler::add_shiftvalue(double value) {
  shiftvalue_.Add(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.Scaler.shiftValue)
}
const ::google::protobuf::RepeatedField< double >&
Scaler::shiftvalue() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.Scaler.shiftValue)
  return shiftvalue_;
}
::google::protobuf::RepeatedField< double >*
Scaler::mutable_shiftvalue() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.Scaler.shiftValue)
  return &shiftvalue_;
}

// repeated double scaleValue = 2;
int Scaler::scalevalue_size() const {
  return scalevalue_.size();
}
void Scaler::clear_scalevalue() {
  scalevalue_.Clear();
}
double Scaler::scalevalue(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.Scaler.scaleValue)
  return scalevalue_.Get(index);
}
void Scaler::set_scalevalue(int index, double value) {
  scalevalue_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.Scaler.scaleValue)
}
void Scaler::add_scalevalue(double value) {
  scalevalue_.Add(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.Scaler.scaleValue)
}
const ::google::protobuf::RepeatedField< double >&
Scaler::scalevalue() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.Scaler.scaleValue)
  return scalevalue_;
}
::google::protobuf::RepeatedField< double >*
Scaler::mutable_scalevalue() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.Scaler.scaleValue)
  return &scalevalue_;
}

inline const Scaler* Scaler::internal_default_instance() {
  return &Scaler_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)