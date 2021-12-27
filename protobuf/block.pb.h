// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: block.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_block_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_block_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_block_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_block_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_block_2eproto;
namespace block {
class block;
class blockDefaultTypeInternal;
extern blockDefaultTypeInternal _block_default_instance_;
}  // namespace block
PROTOBUF_NAMESPACE_OPEN
template<> ::block::block* Arena::CreateMaybeMessage<::block::block>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace block {

// ===================================================================

class block PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:block.block) */ {
 public:
  inline block() : block(nullptr) {};
  virtual ~block();

  block(const block& from);
  block(block&& from) noexcept
    : block() {
    *this = ::std::move(from);
  }

  inline block& operator=(const block& from) {
    CopyFrom(from);
    return *this;
  }
  inline block& operator=(block&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const block& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const block* internal_default_instance() {
    return reinterpret_cast<const block*>(
               &_block_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(block& a, block& b) {
    a.Swap(&b);
  }
  inline void Swap(block* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(block* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline block* New() const final {
    return CreateMaybeMessage<block>(nullptr);
  }

  block* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<block>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const block& from);
  void MergeFrom(const block& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(block* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "block.block";
  }
  protected:
  explicit block(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_block_2eproto);
    return ::descriptor_table_block_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFromAddressFieldNumber = 1,
    kToAddressFieldNumber = 2,
    kAmountFieldNumber = 3,
    kFeeFieldNumber = 4,
  };
  // required string fromAddress = 1;
  bool has_fromaddress() const;
  private:
  bool _internal_has_fromaddress() const;
  public:
  void clear_fromaddress();
  const std::string& fromaddress() const;
  void set_fromaddress(const std::string& value);
  void set_fromaddress(std::string&& value);
  void set_fromaddress(const char* value);
  void set_fromaddress(const char* value, size_t size);
  std::string* mutable_fromaddress();
  std::string* release_fromaddress();
  void set_allocated_fromaddress(std::string* fromaddress);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_fromaddress();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_fromaddress(
      std::string* fromaddress);
  private:
  const std::string& _internal_fromaddress() const;
  void _internal_set_fromaddress(const std::string& value);
  std::string* _internal_mutable_fromaddress();
  public:

  // required string toAddress = 2;
  bool has_toaddress() const;
  private:
  bool _internal_has_toaddress() const;
  public:
  void clear_toaddress();
  const std::string& toaddress() const;
  void set_toaddress(const std::string& value);
  void set_toaddress(std::string&& value);
  void set_toaddress(const char* value);
  void set_toaddress(const char* value, size_t size);
  std::string* mutable_toaddress();
  std::string* release_toaddress();
  void set_allocated_toaddress(std::string* toaddress);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_toaddress();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_toaddress(
      std::string* toaddress);
  private:
  const std::string& _internal_toaddress() const;
  void _internal_set_toaddress(const std::string& value);
  std::string* _internal_mutable_toaddress();
  public:

  // required string amount = 3;
  bool has_amount() const;
  private:
  bool _internal_has_amount() const;
  public:
  void clear_amount();
  const std::string& amount() const;
  void set_amount(const std::string& value);
  void set_amount(std::string&& value);
  void set_amount(const char* value);
  void set_amount(const char* value, size_t size);
  std::string* mutable_amount();
  std::string* release_amount();
  void set_allocated_amount(std::string* amount);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_amount();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_amount(
      std::string* amount);
  private:
  const std::string& _internal_amount() const;
  void _internal_set_amount(const std::string& value);
  std::string* _internal_mutable_amount();
  public:

  // required string fee = 4;
  bool has_fee() const;
  private:
  bool _internal_has_fee() const;
  public:
  void clear_fee();
  const std::string& fee() const;
  void set_fee(const std::string& value);
  void set_fee(std::string&& value);
  void set_fee(const char* value);
  void set_fee(const char* value, size_t size);
  std::string* mutable_fee();
  std::string* release_fee();
  void set_allocated_fee(std::string* fee);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_fee();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_fee(
      std::string* fee);
  private:
  const std::string& _internal_fee() const;
  void _internal_set_fee(const std::string& value);
  std::string* _internal_mutable_fee();
  public:

  // @@protoc_insertion_point(class_scope:block.block)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr fromaddress_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr toaddress_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr amount_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr fee_;
  friend struct ::TableStruct_block_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// block

// required string fromAddress = 1;
inline bool block::_internal_has_fromaddress() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool block::has_fromaddress() const {
  return _internal_has_fromaddress();
}
inline void block::clear_fromaddress() {
  fromaddress_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& block::fromaddress() const {
  // @@protoc_insertion_point(field_get:block.block.fromAddress)
  return _internal_fromaddress();
}
inline void block::set_fromaddress(const std::string& value) {
  _internal_set_fromaddress(value);
  // @@protoc_insertion_point(field_set:block.block.fromAddress)
}
inline std::string* block::mutable_fromaddress() {
  // @@protoc_insertion_point(field_mutable:block.block.fromAddress)
  return _internal_mutable_fromaddress();
}
inline const std::string& block::_internal_fromaddress() const {
  return fromaddress_.Get();
}
inline void block::_internal_set_fromaddress(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  fromaddress_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void block::set_fromaddress(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  fromaddress_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:block.block.fromAddress)
}
inline void block::set_fromaddress(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  fromaddress_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:block.block.fromAddress)
}
inline void block::set_fromaddress(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  fromaddress_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:block.block.fromAddress)
}
inline std::string* block::_internal_mutable_fromaddress() {
  _has_bits_[0] |= 0x00000001u;
  return fromaddress_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* block::release_fromaddress() {
  // @@protoc_insertion_point(field_release:block.block.fromAddress)
  if (!_internal_has_fromaddress()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return fromaddress_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void block::set_allocated_fromaddress(std::string* fromaddress) {
  if (fromaddress != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  fromaddress_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), fromaddress,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:block.block.fromAddress)
}
inline std::string* block::unsafe_arena_release_fromaddress() {
  // @@protoc_insertion_point(field_unsafe_arena_release:block.block.fromAddress)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000001u;
  return fromaddress_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void block::unsafe_arena_set_allocated_fromaddress(
    std::string* fromaddress) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (fromaddress != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  fromaddress_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      fromaddress, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:block.block.fromAddress)
}

// required string toAddress = 2;
inline bool block::_internal_has_toaddress() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool block::has_toaddress() const {
  return _internal_has_toaddress();
}
inline void block::clear_toaddress() {
  toaddress_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& block::toaddress() const {
  // @@protoc_insertion_point(field_get:block.block.toAddress)
  return _internal_toaddress();
}
inline void block::set_toaddress(const std::string& value) {
  _internal_set_toaddress(value);
  // @@protoc_insertion_point(field_set:block.block.toAddress)
}
inline std::string* block::mutable_toaddress() {
  // @@protoc_insertion_point(field_mutable:block.block.toAddress)
  return _internal_mutable_toaddress();
}
inline const std::string& block::_internal_toaddress() const {
  return toaddress_.Get();
}
inline void block::_internal_set_toaddress(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  toaddress_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void block::set_toaddress(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  toaddress_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:block.block.toAddress)
}
inline void block::set_toaddress(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  toaddress_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:block.block.toAddress)
}
inline void block::set_toaddress(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000002u;
  toaddress_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:block.block.toAddress)
}
inline std::string* block::_internal_mutable_toaddress() {
  _has_bits_[0] |= 0x00000002u;
  return toaddress_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* block::release_toaddress() {
  // @@protoc_insertion_point(field_release:block.block.toAddress)
  if (!_internal_has_toaddress()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return toaddress_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void block::set_allocated_toaddress(std::string* toaddress) {
  if (toaddress != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  toaddress_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), toaddress,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:block.block.toAddress)
}
inline std::string* block::unsafe_arena_release_toaddress() {
  // @@protoc_insertion_point(field_unsafe_arena_release:block.block.toAddress)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000002u;
  return toaddress_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void block::unsafe_arena_set_allocated_toaddress(
    std::string* toaddress) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (toaddress != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  toaddress_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      toaddress, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:block.block.toAddress)
}

// required string amount = 3;
inline bool block::_internal_has_amount() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool block::has_amount() const {
  return _internal_has_amount();
}
inline void block::clear_amount() {
  amount_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& block::amount() const {
  // @@protoc_insertion_point(field_get:block.block.amount)
  return _internal_amount();
}
inline void block::set_amount(const std::string& value) {
  _internal_set_amount(value);
  // @@protoc_insertion_point(field_set:block.block.amount)
}
inline std::string* block::mutable_amount() {
  // @@protoc_insertion_point(field_mutable:block.block.amount)
  return _internal_mutable_amount();
}
inline const std::string& block::_internal_amount() const {
  return amount_.Get();
}
inline void block::_internal_set_amount(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  amount_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void block::set_amount(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  amount_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:block.block.amount)
}
inline void block::set_amount(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  amount_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:block.block.amount)
}
inline void block::set_amount(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000004u;
  amount_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:block.block.amount)
}
inline std::string* block::_internal_mutable_amount() {
  _has_bits_[0] |= 0x00000004u;
  return amount_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* block::release_amount() {
  // @@protoc_insertion_point(field_release:block.block.amount)
  if (!_internal_has_amount()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return amount_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void block::set_allocated_amount(std::string* amount) {
  if (amount != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  amount_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), amount,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:block.block.amount)
}
inline std::string* block::unsafe_arena_release_amount() {
  // @@protoc_insertion_point(field_unsafe_arena_release:block.block.amount)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000004u;
  return amount_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void block::unsafe_arena_set_allocated_amount(
    std::string* amount) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (amount != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  amount_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      amount, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:block.block.amount)
}

// required string fee = 4;
inline bool block::_internal_has_fee() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool block::has_fee() const {
  return _internal_has_fee();
}
inline void block::clear_fee() {
  fee_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000008u;
}
inline const std::string& block::fee() const {
  // @@protoc_insertion_point(field_get:block.block.fee)
  return _internal_fee();
}
inline void block::set_fee(const std::string& value) {
  _internal_set_fee(value);
  // @@protoc_insertion_point(field_set:block.block.fee)
}
inline std::string* block::mutable_fee() {
  // @@protoc_insertion_point(field_mutable:block.block.fee)
  return _internal_mutable_fee();
}
inline const std::string& block::_internal_fee() const {
  return fee_.Get();
}
inline void block::_internal_set_fee(const std::string& value) {
  _has_bits_[0] |= 0x00000008u;
  fee_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void block::set_fee(std::string&& value) {
  _has_bits_[0] |= 0x00000008u;
  fee_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:block.block.fee)
}
inline void block::set_fee(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000008u;
  fee_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:block.block.fee)
}
inline void block::set_fee(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000008u;
  fee_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:block.block.fee)
}
inline std::string* block::_internal_mutable_fee() {
  _has_bits_[0] |= 0x00000008u;
  return fee_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* block::release_fee() {
  // @@protoc_insertion_point(field_release:block.block.fee)
  if (!_internal_has_fee()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000008u;
  return fee_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void block::set_allocated_fee(std::string* fee) {
  if (fee != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  fee_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), fee,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:block.block.fee)
}
inline std::string* block::unsafe_arena_release_fee() {
  // @@protoc_insertion_point(field_unsafe_arena_release:block.block.fee)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000008u;
  return fee_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void block::unsafe_arena_set_allocated_fee(
    std::string* fee) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (fee != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  fee_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      fee, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:block.block.fee)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace block

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_block_2eproto
