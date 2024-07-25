/**
 * Automatically generated by Zserio C++ generator version 1.0.1 using Zserio core 2.14.0.
 * Generator setup: writerCode, pubsubCode, serviceCode, sqlCode, stdAllocator.
 */

#ifndef PMR_BOOL_PARAM_CHOICE_H
#define PMR_BOOL_PARAM_CHOICE_H

#include <zserio/CppRuntimeVersion.h>
#if CPP_EXTENSION_RUNTIME_VERSION_NUMBER != 1000000
    #error Version mismatch between Zserio runtime library and Zserio C++ generator!
    #error Please update your Zserio runtime library to the version 1.0.1.
#endif

#include <zserio/BitStreamReader.h>
#include <zserio/BitStreamWriter.h>
#include <zserio/ArrayTraits.h>
#include <zserio/View.h>
#include <zserio/Variant.h>
#include <zserio/TypeWrappers.h>
#include <zserio/pmr/PolymorphicAllocator.h>

namespace pmr
{

// It may be a good idea to inherit from zserio::Variant directly
// so that all useful function members are inherited too. Choice
// struct doesn't contain other fields anyway. Alternatively we need
// to generate at least the important members from zserio::Variant here
// in order for the user to skip typing .objectChoice which is just
// an implementation detail.
struct BoolParamChoice
{
    using allocator_type = ::zserio::pmr::PropagatingPolymorphicAllocator<>;
    using needs_initialize_offsets = ::std::false_type;

    BoolParamChoice() noexcept;

    explicit BoolParamChoice(const allocator_type& allocator) noexcept;

    ::zserio::Variant<::zserio::Int8, ::zserio::Int16> objectChoice;
};

bool operator==(const BoolParamChoice& lhs, const BoolParamChoice& rhs);
bool operator<(const BoolParamChoice& lhs, const BoolParamChoice& rhs);
bool operator!=(const BoolParamChoice& lhs, const BoolParamChoice& rhs);
bool operator>(const BoolParamChoice& lhs, const BoolParamChoice& rhs);
bool operator<=(const BoolParamChoice& lhs, const BoolParamChoice& rhs);
bool operator>=(const BoolParamChoice& lhs, const BoolParamChoice& rhs);

} // namespace pmr

namespace zserio
{

template <>
class View<::pmr::BoolParamChoice>
{
public:
    View(const ::pmr::BoolParamChoice& data,
        ::zserio::Boolean tag_) noexcept;

    ::zserio::Boolean tag() const;

    size_t index() const;

    ::zserio::Int8 valueA() const;

    ::zserio::Int16 valueB() const;

private:
    const ::pmr::BoolParamChoice& m_data;
    ::zserio::Boolean m_tag_;
};

bool operator==(const View<::pmr::BoolParamChoice>& lhs, const View<::pmr::BoolParamChoice>& rhs);
bool operator<(const View<::pmr::BoolParamChoice>& lhs, const View<::pmr::BoolParamChoice>& rhs);
bool operator!=(const View<::pmr::BoolParamChoice>& lhs, const View<::pmr::BoolParamChoice>& rhs);
bool operator>(const View<::pmr::BoolParamChoice>& lhs, const View<::pmr::BoolParamChoice>& rhs);
bool operator<=(const View<::pmr::BoolParamChoice>& lhs, const View<::pmr::BoolParamChoice>& rhs);
bool operator>=(const View<::pmr::BoolParamChoice>& lhs, const View<::pmr::BoolParamChoice>& rhs);

namespace detail
{

void validate(const View<::pmr::BoolParamChoice>& view);

void write(::zserio::BitStreamWriter& writer, const View<::pmr::BoolParamChoice>& view);

View<::pmr::BoolParamChoice> read(::zserio::BitStreamReader& reader, ::pmr::BoolParamChoice& data, ::zserio::Boolean tag_, const ::pmr::BoolParamChoice::allocator_type& allocator = {});

size_t bitSizeOf(const View<::pmr::BoolParamChoice>& view, size_t bitPosition);

} // namespace detail

} // namespace zserio

namespace std
{

template<>
struct hash<::pmr::BoolParamChoice>
{
    size_t operator()(const ::pmr::BoolParamChoice& data) const;
};

template<>
struct hash<::zserio::View<::pmr::BoolParamChoice>>
{
    size_t operator()(const ::zserio::View<::pmr::BoolParamChoice>& view) const;
};

} // namespace std

#endif // BOOL_PARAM_CHOICE_H