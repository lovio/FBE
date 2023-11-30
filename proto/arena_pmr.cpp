//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: arena.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

#include "arena_pmr.h"

namespace arena_pmr {

Item::Item()
    : optr()
    , alias()
    , expressions()
    , aliases_int()
{}

Item::Item([[maybe_unused]] allocator_type alloc)
    : optr(assign_member<::arena_common_pmr::Optr>(alloc))
    , alias(assign_member<::arena_common_pmr::Alias>(alloc))
    , expressions(alloc)
    , aliases_int(alloc)
{}

Item::Item(const ::arena_common_pmr::Optr& arg_optr, const ::arena_common_pmr::Alias& arg_alias, const pmr::vector<::arena_common_pmr::Expression>& arg_expressions, const pmr::map<int32_t, ::arena_common_pmr::Alias>& arg_aliases_int)
    : optr(arg_optr)
    , alias(arg_alias)
    , expressions(arg_expressions)
    , aliases_int(arg_aliases_int)
{}

bool Item::operator==([[maybe_unused]] const Item& other) const noexcept
{
    return (
        (optr == other.optr)
        && (alias == other.alias)
        && (expressions == other.expressions)
        && (aliases_int == other.aliases_int)
        );
}

bool Item::operator<([[maybe_unused]] const Item& other) const noexcept
{
    return false;
}

std::string Item::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Item::swap([[maybe_unused]] Item& other) noexcept
{
    using std::swap;
    swap(optr, other.optr);
    swap(alias, other.alias);
    swap(expressions, other.expressions);
    swap(aliases_int, other.aliases_int);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Item& value)
{
    stream << "Item(";
    stream << "optr="; stream << value.optr;
    stream << ",alias="; stream << value.alias;
    {
        bool first = true;
        stream << ",expressions=[" << value.expressions.size() << "][";
        for ([[maybe_unused]] const auto& it : value.expressions)
        {
            stream << std::string(first ? "" : ",") << it;
            first = false;
        }
        stream << "]";
    }
    {
        bool first = true;
        stream << ",aliases_int=[" << value.aliases_int.size()<< "]<{";
        for ([[maybe_unused]] const auto& it : value.aliases_int)
        {
            stream << std::string(first ? "" : ",") << it.first;
            stream << "->";
            stream << it.second;
            first = false;
        }
        stream << "}>";
    }
    stream << ")";
    return stream;
}

Item2::Item2()
    : bytes_v()
{}

Item2::Item2([[maybe_unused]] allocator_type alloc)
    : bytes_v(alloc)
{}

Item2::Item2(const FBE::pmr_buffer_t& arg_bytes_v)
    : bytes_v(arg_bytes_v)
{}

bool Item2::operator==([[maybe_unused]] const Item2& other) const noexcept
{
    return (
        (bytes_v == other.bytes_v)
        );
}

bool Item2::operator<([[maybe_unused]] const Item2& other) const noexcept
{
    return false;
}

std::string Item2::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Item2::swap([[maybe_unused]] Item2& other) noexcept
{
    using std::swap;
    swap(bytes_v, other.bytes_v);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Item2& value)
{
    stream << "Item2(";
    stream << "bytes_v="; stream << "bytes[" << value.bytes_v.size() << "]";
    stream << ")";
    return stream;
}

} // namespace arena_pmr
