// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fixing.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_fixing_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_fixing_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012002 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_fixing_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_fixing_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_fixing_2eproto;
namespace FlumaionQL {
class Fixing;
class FixingDefaultTypeInternal;
extern FixingDefaultTypeInternal _Fixing_default_instance_;
}  // namespace FlumaionQL
PROTOBUF_NAMESPACE_OPEN
template<> ::FlumaionQL::Fixing* Arena::CreateMaybeMessage<::FlumaionQL::Fixing>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace FlumaionQL {

// ===================================================================

class Fixing PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:FlumaionQL.Fixing) */ {
 public:
  inline Fixing() : Fixing(nullptr) {};
  virtual ~Fixing();

  Fixing(const Fixing& from);
  Fixing(Fixing&& from) noexcept
    : Fixing() {
    *this = ::std::move(from);
  }

  inline Fixing& operator=(const Fixing& from) {
    CopyFrom(from);
    return *this;
  }
  inline Fixing& operator=(Fixing&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Fixing& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Fixing* internal_default_instance() {
    return reinterpret_cast<const Fixing*>(
               &_Fixing_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Fixing& a, Fixing& b) {
    a.Swap(&b);
  }
  inline void Swap(Fixing* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Fixing* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Fixing* New() const final {
    return CreateMaybeMessage<Fixing>(nullptr);
  }

  Fixing* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Fixing>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Fixing& from);
  void MergeFrom(const Fixing& from);
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
  void InternalSwap(Fixing* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "FlumaionQL.Fixing";
  }
  protected:
  explicit Fixing(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_fixing_2eproto);
    return ::descriptor_table_fixing_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFixingDatesFieldNumber = 2,
    kFixingRatesFieldNumber = 3,
    kCurvenameFieldNumber = 1,
  };
  // repeated int64 fixing_dates = 2;
  int fixing_dates_size() const;
  private:
  int _internal_fixing_dates_size() const;
  public:
  void clear_fixing_dates();
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_fixing_dates(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      _internal_fixing_dates() const;
  void _internal_add_fixing_dates(::PROTOBUF_NAMESPACE_ID::int64 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      _internal_mutable_fixing_dates();
  public:
  ::PROTOBUF_NAMESPACE_ID::int64 fixing_dates(int index) const;
  void set_fixing_dates(int index, ::PROTOBUF_NAMESPACE_ID::int64 value);
  void add_fixing_dates(::PROTOBUF_NAMESPACE_ID::int64 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
      fixing_dates() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
      mutable_fixing_dates();

  // repeated float fixing_rates = 3;
  int fixing_rates_size() const;
  private:
  int _internal_fixing_rates_size() const;
  public:
  void clear_fixing_rates();
  private:
  float _internal_fixing_rates(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_fixing_rates() const;
  void _internal_add_fixing_rates(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_fixing_rates();
  public:
  float fixing_rates(int index) const;
  void set_fixing_rates(int index, float value);
  void add_fixing_rates(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      fixing_rates() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_fixing_rates();

  // string curvename = 1;
  void clear_curvename();
  const std::string& curvename() const;
  void set_curvename(const std::string& value);
  void set_curvename(std::string&& value);
  void set_curvename(const char* value);
  void set_curvename(const char* value, size_t size);
  std::string* mutable_curvename();
  std::string* release_curvename();
  void set_allocated_curvename(std::string* curvename);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_curvename();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_curvename(
      std::string* curvename);
  private:
  const std::string& _internal_curvename() const;
  void _internal_set_curvename(const std::string& value);
  std::string* _internal_mutable_curvename();
  public:

  // @@protoc_insertion_point(class_scope:FlumaionQL.Fixing)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 > fixing_dates_;
  mutable std::atomic<int> _fixing_dates_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > fixing_rates_;
  mutable std::atomic<int> _fixing_rates_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr curvename_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_fixing_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Fixing

// string curvename = 1;
inline void Fixing::clear_curvename() {
  curvename_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Fixing::curvename() const {
  // @@protoc_insertion_point(field_get:FlumaionQL.Fixing.curvename)
  return _internal_curvename();
}
inline void Fixing::set_curvename(const std::string& value) {
  _internal_set_curvename(value);
  // @@protoc_insertion_point(field_set:FlumaionQL.Fixing.curvename)
}
inline std::string* Fixing::mutable_curvename() {
  // @@protoc_insertion_point(field_mutable:FlumaionQL.Fixing.curvename)
  return _internal_mutable_curvename();
}
inline const std::string& Fixing::_internal_curvename() const {
  return curvename_.Get();
}
inline void Fixing::_internal_set_curvename(const std::string& value) {
  
  curvename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Fixing::set_curvename(std::string&& value) {
  
  curvename_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:FlumaionQL.Fixing.curvename)
}
inline void Fixing::set_curvename(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  curvename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:FlumaionQL.Fixing.curvename)
}
inline void Fixing::set_curvename(const char* value,
    size_t size) {
  
  curvename_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:FlumaionQL.Fixing.curvename)
}
inline std::string* Fixing::_internal_mutable_curvename() {
  
  return curvename_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Fixing::release_curvename() {
  // @@protoc_insertion_point(field_release:FlumaionQL.Fixing.curvename)
  return curvename_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Fixing::set_allocated_curvename(std::string* curvename) {
  if (curvename != nullptr) {
    
  } else {
    
  }
  curvename_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), curvename,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:FlumaionQL.Fixing.curvename)
}
inline std::string* Fixing::unsafe_arena_release_curvename() {
  // @@protoc_insertion_point(field_unsafe_arena_release:FlumaionQL.Fixing.curvename)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return curvename_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Fixing::unsafe_arena_set_allocated_curvename(
    std::string* curvename) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (curvename != nullptr) {
    
  } else {
    
  }
  curvename_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      curvename, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:FlumaionQL.Fixing.curvename)
}

// repeated int64 fixing_dates = 2;
inline int Fixing::_internal_fixing_dates_size() const {
  return fixing_dates_.size();
}
inline int Fixing::fixing_dates_size() const {
  return _internal_fixing_dates_size();
}
inline void Fixing::clear_fixing_dates() {
  fixing_dates_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Fixing::_internal_fixing_dates(int index) const {
  return fixing_dates_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Fixing::fixing_dates(int index) const {
  // @@protoc_insertion_point(field_get:FlumaionQL.Fixing.fixing_dates)
  return _internal_fixing_dates(index);
}
inline void Fixing::set_fixing_dates(int index, ::PROTOBUF_NAMESPACE_ID::int64 value) {
  fixing_dates_.Set(index, value);
  // @@protoc_insertion_point(field_set:FlumaionQL.Fixing.fixing_dates)
}
inline void Fixing::_internal_add_fixing_dates(::PROTOBUF_NAMESPACE_ID::int64 value) {
  fixing_dates_.Add(value);
}
inline void Fixing::add_fixing_dates(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_add_fixing_dates(value);
  // @@protoc_insertion_point(field_add:FlumaionQL.Fixing.fixing_dates)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
Fixing::_internal_fixing_dates() const {
  return fixing_dates_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >&
Fixing::fixing_dates() const {
  // @@protoc_insertion_point(field_list:FlumaionQL.Fixing.fixing_dates)
  return _internal_fixing_dates();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
Fixing::_internal_mutable_fixing_dates() {
  return &fixing_dates_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int64 >*
Fixing::mutable_fixing_dates() {
  // @@protoc_insertion_point(field_mutable_list:FlumaionQL.Fixing.fixing_dates)
  return _internal_mutable_fixing_dates();
}

// repeated float fixing_rates = 3;
inline int Fixing::_internal_fixing_rates_size() const {
  return fixing_rates_.size();
}
inline int Fixing::fixing_rates_size() const {
  return _internal_fixing_rates_size();
}
inline void Fixing::clear_fixing_rates() {
  fixing_rates_.Clear();
}
inline float Fixing::_internal_fixing_rates(int index) const {
  return fixing_rates_.Get(index);
}
inline float Fixing::fixing_rates(int index) const {
  // @@protoc_insertion_point(field_get:FlumaionQL.Fixing.fixing_rates)
  return _internal_fixing_rates(index);
}
inline void Fixing::set_fixing_rates(int index, float value) {
  fixing_rates_.Set(index, value);
  // @@protoc_insertion_point(field_set:FlumaionQL.Fixing.fixing_rates)
}
inline void Fixing::_internal_add_fixing_rates(float value) {
  fixing_rates_.Add(value);
}
inline void Fixing::add_fixing_rates(float value) {
  _internal_add_fixing_rates(value);
  // @@protoc_insertion_point(field_add:FlumaionQL.Fixing.fixing_rates)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
Fixing::_internal_fixing_rates() const {
  return fixing_rates_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
Fixing::fixing_rates() const {
  // @@protoc_insertion_point(field_list:FlumaionQL.Fixing.fixing_rates)
  return _internal_fixing_rates();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
Fixing::_internal_mutable_fixing_rates() {
  return &fixing_rates_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
Fixing::mutable_fixing_rates() {
  // @@protoc_insertion_point(field_mutable_list:FlumaionQL.Fixing.fixing_rates)
  return _internal_mutable_fixing_rates();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace FlumaionQL

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_fixing_2eproto