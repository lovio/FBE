//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#pragma once

#ifdef isset
#undef isset
#endif

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe.h"

namespace variants {
using namespace FBE;
} // namespace variants

namespace FBE {
using namespace ::variants;
} // namespace FBE

namespace variants {
// forward declaration
struct Simple;
struct Value;

using Expr = std::variant<bool, int32_t, stdb::memory::string>;
std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Expr& value);

using V = std::variant<stdb::memory::string, int32_t, double, ::variants::Simple, std::vector<::variants::Simple>, std::vector<int32_t>, std::unordered_map<int32_t, ::variants::Simple>, std::vector<FBE::buffer_t>, std::vector<stdb::memory::string>, std::unordered_map<int32_t, FBE::buffer_t>, std::unordered_map<stdb::memory::string, FBE::buffer_t>, ::variants::Expr>;
std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const V& value);

struct Simple
{
    stdb::memory::string name;

    size_t fbe_type() const noexcept { return 1; }

    Simple();
    explicit Simple(const stdb::memory::string& arg_name);
    Simple(const Simple& other) = default;
    Simple(Simple&& other) = default;
    ~Simple() = default;

    Simple& operator=(const Simple& other) = default;
    Simple& operator=(Simple&& other) = default;

    bool operator==(const Simple& other) const noexcept;
    bool operator!=(const Simple& other) const noexcept { return !operator==(other); }
    bool operator<(const Simple& other) const noexcept;
    bool operator<=(const Simple& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Simple& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Simple& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Simple& value);

    void swap(Simple& other) noexcept;
    friend void swap(Simple& value1, Simple& value2) noexcept { value1.swap(value2); }
};

} // namespace variants

#if defined(FMT_VERSION)
template <> struct fmt::formatter<variants::Simple> : formatter<string_view> {};
#endif

template<>
struct std::hash<variants::Simple>
{
    typedef variants::Simple argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace variants {

struct Value
{
    ::variants::V v;

    size_t fbe_type() const noexcept { return 2; }

    Value();
    explicit Value(const ::variants::V& arg_v);
    Value(const Value& other) = default;
    Value(Value&& other) = default;
    ~Value() = default;

    Value& operator=(const Value& other) = default;
    Value& operator=(Value&& other) = default;

    bool operator==(const Value& other) const noexcept;
    bool operator!=(const Value& other) const noexcept { return !operator==(other); }
    bool operator<(const Value& other) const noexcept;
    bool operator<=(const Value& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Value& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Value& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Value& value);

    void swap(Value& other) noexcept;
    friend void swap(Value& value1, Value& value2) noexcept { value1.swap(value2); }
};

} // namespace variants

#if defined(FMT_VERSION)
template <> struct fmt::formatter<variants::Value> : formatter<string_view> {};
#endif

template<>
struct std::hash<variants::Value>
{
    typedef variants::Value argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace variants {

} // namespace variants
