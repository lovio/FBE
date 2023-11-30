//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants_ptr.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

#include "variants_ptr_ptr_pmr.h"

namespace variants_ptr_pmr {

auto is_equal(const Expr& lhs, const Expr& rhs) -> bool {
    if (lhs.index() != rhs.index())
        return false;
    switch (lhs.index()) {
        case 0: {
            return std::get<0>(lhs) == std::get<0>(rhs);
        }
        case 1: {
            return std::get<1>(lhs) == std::get<1>(rhs);
        }
        case 2: {
            return std::get<2>(lhs) == std::get<2>(rhs);
        }
        case 3: {
            auto& lhs_value = std::get<3>(lhs);
            auto& rhs_value = std::get<3>(rhs);
            if (lhs_value.size() != rhs_value.size())
                return false;
            for (size_t i = 0; i < lhs_value.size(); i++)
            {
                if (lhs_value[i] != rhs_value[i])
                    return false;
            }
            return true;
        }
        default: 
            return true;
    }
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Expr& value)
{
    stream << "Expr(variant|";
    [[maybe_unused]] bool first = true;
    switch (value.index()) {
        case 0:
            stream<< "{bool}";
            stream << std::get<0>(value);
            break;
        case 1:
            stream<< "{string}";
            stream << std::get<1>(value);
            break;
        case 2:
            stream<< "{int32}";
            stream << std::get<2>(value);
            break;
        case 3:
            stream << "{byte}=[" << std::get<3>(value).size() << "][";
            for ([[maybe_unused]] const auto& it : std::get<3>(value))
            {
                stream << std::string(first ? "" : ",") << (int)it;
                first = false;
            }
            stream << "]";
            break;
        default:
            static_assert("unreachable branch");
    }
    stream << ")";
    return stream;
}

auto is_equal(const V& lhs, const V& rhs) -> bool {
    if (lhs.index() != rhs.index())
        return false;
    switch (lhs.index()) {
        case 0: {
            return std::get<0>(lhs) == std::get<0>(rhs);
        }
        case 1: {
            return std::get<1>(lhs) == std::get<1>(rhs);
        }
        case 2: {
            return std::get<2>(lhs) == std::get<2>(rhs);
        }
        case 3: {
            return std::get<3>(lhs) == std::get<3>(rhs);
        }
        case 4: {
            return *std::get<4>(lhs) == *std::get<4>(rhs);
        }
        case 5: {
            auto& lhs_value = std::get<5>(lhs);
            auto& rhs_value = std::get<5>(rhs);
            if (lhs_value.size() != rhs_value.size())
                return false;
            for (size_t i = 0; i < lhs_value.size(); i++)
            {
                if (lhs_value[i] != rhs_value[i])
                    return false;
            }
            return true;
        }
        case 6: {
            auto& lhs_value = std::get<6>(lhs);
            auto& rhs_value = std::get<6>(rhs);
            if (lhs_value.size() != rhs_value.size())
                return false;
            for (size_t i = 0; i < lhs_value.size(); i++)
            {
                if (lhs_value[i] != rhs_value[i])
                    return false;
            }
            return true;
        }
        case 7: {
            auto& lhs_value = std::get<7>(lhs);
            auto& rhs_value = std::get<7>(rhs);
            if (lhs_value.size() != rhs_value.size())
                return false;
            for (auto & [k, v]: lhs_value)
            {
                auto pos = rhs_value.find(k);
                if (pos == rhs_value.end())
                    return false;
                if (pos->second != v)
                    return false;
            }
            return true;
        }
        case 8: {
            auto& lhs_value = std::get<8>(lhs);
            auto& rhs_value = std::get<8>(rhs);
            if (lhs_value.size() != rhs_value.size())
                return false;
            for (size_t i = 0; i < lhs_value.size(); i++)
            {
                if (lhs_value[i] != rhs_value[i])
                    return false;
            }
            return true;
        }
        case 9: {
            auto& lhs_value = std::get<9>(lhs);
            auto& rhs_value = std::get<9>(rhs);
            if (lhs_value.size() != rhs_value.size())
                return false;
            for (size_t i = 0; i < lhs_value.size(); i++)
            {
                if (lhs_value[i] != rhs_value[i])
                    return false;
            }
            return true;
        }
        case 10: {
            auto& lhs_value = std::get<10>(lhs);
            auto& rhs_value = std::get<10>(rhs);
            if (lhs_value.size() != rhs_value.size())
                return false;
            for (auto & [k, v]: lhs_value)
            {
                auto pos = rhs_value.find(k);
                if (pos == rhs_value.end())
                    return false;
                if (pos->second != v)
                    return false;
            }
            return true;
        }
        case 11: {
            auto& lhs_value = std::get<11>(lhs);
            auto& rhs_value = std::get<11>(rhs);
            if (lhs_value.size() != rhs_value.size())
                return false;
            for (auto & [k, v]: lhs_value)
            {
                auto pos = rhs_value.find(k);
                if (pos == rhs_value.end())
                    return false;
                if (pos->second != v)
                    return false;
            }
            return true;
        }
        case 12: {
            auto& lhs_value = std::get<12>(lhs);
            auto& rhs_value = std::get<12>(rhs);
            if (lhs_value.size() != rhs_value.size())
                return false;
            for (size_t i = 0; i < lhs_value.size(); i++)
            {
                if (*lhs_value[i] != *rhs_value[i])
                    return false;
            }
            return true;
        }
        case 13: {
            return is_equal(std::get<13>(lhs), std::get<13>(rhs));
        }
        default: 
            return true;
    }
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const V& value)
{
    stream << "V(variant|";
    [[maybe_unused]] bool first = true;
    switch (value.index()) {
        case 0:
            stream<< "{int32}";
            stream << std::get<0>(value);
            break;
        case 1:
            stream<< "{string}";
            stream << std::get<1>(value);
            break;
        case 2:
            stream<< "{double}";
            stream << std::get<2>(value);
            break;
        case 3:
            stream<< "{Simple}";
            stream << std::get<3>(value);
            break;
        case 4:
            stream<< "{Simple*}";
            stream << "ptr of other struct: " << (std::get<4>(value) == nullptr ? "nullptr" : "true");
            if (std::get<4>(value) != nullptr)
            {
                stream << "->" << *std::get<4>(value);
            }
            break;
        case 5:
            stream << "{Simple}=[" << std::get<5>(value).size() << "][";
            for ([[maybe_unused]] const auto& it : std::get<5>(value))
            {
                stream << std::string(first ? "" : ",") << it;
                first = false;
            }
            stream << "]";
            break;
        case 6:
            stream << "{int32}=[" << std::get<6>(value).size() << "][";
            for ([[maybe_unused]] const auto& it : std::get<6>(value))
            {
                stream << std::string(first ? "" : ",") << it;
                first = false;
            }
            stream << "]";
            break;
        case 7:
            stream << "{int32->Simple}=[" << std::get<7>(value).size() << "][";
            for ([[maybe_unused]] const auto& it : std::get<7>(value))
            {
                stream << std::string(first ? "" : ",") << it.first;
                stream << "->";
                stream << it.second;
                first = false;
            }
            stream << "]";
            break;
        case 8:
            stream << "{bytes}=[" << std::get<8>(value).size() << "][";
            for ([[maybe_unused]] const auto& it : std::get<8>(value))
            {
                stream << std::string(first ? "" : ",") << "bytes[" << it.size() << "]";
                first = false;
            }
            stream << "]";
            break;
        case 9:
            stream << "{string}=[" << std::get<9>(value).size() << "][";
            for ([[maybe_unused]] const auto& it : std::get<9>(value))
            {
                stream << std::string(first ? "" : ",") << "\"" << it << "\"";
                first = false;
            }
            stream << "]";
            break;
        case 10:
            stream << "{int32->bytes}=[" << std::get<10>(value).size() << "][";
            for ([[maybe_unused]] const auto& it : std::get<10>(value))
            {
                stream << std::string(first ? "" : ",") << it.first;
                stream << "->";
                stream << "bytes[" << it.second.size() << "]";
                first = false;
            }
            stream << "]";
            break;
        case 11:
            stream << "{string->bytes}=[" << std::get<11>(value).size() << "][";
            for ([[maybe_unused]] const auto& it : std::get<11>(value))
            {
                stream << std::string(first ? "" : ",") << "\"" << it.first << "\"";
                stream << "->";
                stream << "bytes[" << it.second.size() << "]";
                first = false;
            }
            stream << "]";
            break;
        case 12:
            stream << "{Simple*}=[" << std::get<12>(value).size() << "][";
            for ([[maybe_unused]] const auto& it : std::get<12>(value))
            {
                stream << std::string(first ? "" : ",") << "ptr of other struct: " << (it == nullptr ? "nullptr" : "true");
                if (it != nullptr)
                {
                    stream << "->" << *it;
                }
                first = false;
            }
            stream << "]";
            break;
        case 13:
            stream<< "{Expr}";
            stream << std::get<13>(value);
            break;
        default:
            static_assert("unreachable branch");
    }
    stream << ")";
    return stream;
}

auto is_equal(const Scalar1& lhs, const Scalar1& rhs) -> bool {
    if (lhs.index() != rhs.index())
        return false;
    switch (lhs.index()) {
        case 0: {
            return std::get<0>(lhs) == std::get<0>(rhs);
        }
        case 1: {
            return std::get<1>(lhs) == std::get<1>(rhs);
        }
        case 2: {
            return std::get<2>(lhs) == std::get<2>(rhs);
        }
        case 3: {
            return std::get<3>(lhs) == std::get<3>(rhs);
        }
        default: 
            return true;
    }
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Scalar1& value)
{
    stream << "Scalar1(variant|";
    [[maybe_unused]] bool first = true;
    switch (value.index()) {
        case 0:
            stream<< "{bool}";
            stream << std::get<0>(value);
            break;
        case 1:
            stream<< "{int32}";
            stream << std::get<1>(value);
            break;
        case 2:
            stream<< "{int64}";
            stream << std::get<2>(value);
            break;
        case 3:
            stream<< "{string}";
            stream << std::get<3>(value);
            break;
        default:
            static_assert("unreachable branch");
    }
    stream << ")";
    return stream;
}

Simple::Simple()
    : name()
{}

Simple::Simple([[maybe_unused]] allocator_type alloc)
    : name(alloc)
{}

Simple::Simple(const stdb::memory::arena_string& arg_name)
    : name(arg_name)
{}

Simple::Simple([[maybe_unused]] Simple&& other) noexcept
    : name(std::move(other.name))
{}

Simple::~Simple()
{
}

bool Simple::operator==([[maybe_unused]] const Simple& other) const noexcept
{
    if (name != other.name)
        return false;
    return true;
}

bool Simple::operator<([[maybe_unused]] const Simple& other) const noexcept
{
    return false;
}

Simple& Simple::operator=(Simple&& other) noexcept
{
    if (this != &other)
    {
        name = std::move(other.name);
    }
    return *this;
}

std::string Simple::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Simple::swap([[maybe_unused]] Simple& other) noexcept
{
    using std::swap;
    swap(name, other.name);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Simple& value)
{
    stream << "Simple(";
    stream << "name="; stream << "\"" << value.name << "\"";
    stream << ")";
    return stream;
}

ExprContainer::ExprContainer()
    : e()
    , eo()
    , so()
{}

ExprContainer::ExprContainer([[maybe_unused]] allocator_type alloc)
    : e()
    , eo(std::nullopt)
    , so(std::nullopt)
{}

ExprContainer::ExprContainer(::variants_ptr_pmr::Expr arg_e, std::optional<::variants_ptr_pmr::Expr> arg_eo, std::optional<::variants_ptr_pmr::Simple> arg_so)
    : e(std::move(arg_e))
    , eo()
    , so()
{
    if (arg_eo.has_value()) {
        eo.emplace(std::move(arg_eo.value()));
        arg_eo.reset();
    }
    if (arg_so.has_value()) {
        so.emplace(std::move(arg_so.value()));
        arg_so.reset();
    }
}

ExprContainer::ExprContainer([[maybe_unused]] ExprContainer&& other) noexcept
    : e(std::move(other.e))
    , eo()
    , so()
{
    if (other.eo.has_value()) {
        eo.emplace(std::move(other.eo.value()));
        other.eo.reset();
    }
    if (other.so.has_value()) {
        so.emplace(std::move(other.so.value()));
        other.so.reset();
    }
}

ExprContainer::~ExprContainer()
{
}

bool ExprContainer::operator==([[maybe_unused]] const ExprContainer& other) const noexcept
{
    // compare variant e
    if (!is_equal(e, other.e))
        return false;
    // compare variant eo
    if ((eo.has_value() && !other.eo.has_value()) || (!eo.has_value() && other.eo.has_value()) || (eo.has_value() && other.eo.has_value() && !is_equal(eo.value(), other.eo.value())))
        return false;
    if (so != other.so)
        return false;
    return true;
}

bool ExprContainer::operator<([[maybe_unused]] const ExprContainer& other) const noexcept
{
    return false;
}

ExprContainer& ExprContainer::operator=(ExprContainer&& other) noexcept
{
    if (this != &other)
    {
        e = std::move(other.e);
        if (other.eo.has_value()) {
            eo.emplace(std::move(other.eo.value()));
            other.eo.reset();
        }
        if (other.so.has_value()) {
            so.emplace(std::move(other.so.value()));
            other.so.reset();
        }
    }
    return *this;
}

std::string ExprContainer::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void ExprContainer::swap([[maybe_unused]] ExprContainer& other) noexcept
{
    using std::swap;
    swap(e, other.e);
    swap(eo, other.eo);
    swap(so, other.so);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const ExprContainer& value)
{
    stream << "ExprContainer(";
    stream << "e="; stream << value.e;
    stream << ",eo="; if (value.eo) stream << *value.eo; else stream << "null";
    stream << ",so="; if (value.so) stream << *value.so; else stream << "null";
    stream << ")";
    return stream;
}

Value::Value()
    : v()
    , vo()
    , vo2()
{}

Value::Value([[maybe_unused]] allocator_type alloc)
    : v()
    , vo(std::nullopt)
    , vo2(std::nullopt)
{}

Value::Value(::variants_ptr_pmr::V arg_v, std::optional<::variants_ptr_pmr::V> arg_vo, std::optional<::variants_ptr_pmr::V> arg_vo2)
    : v(std::move(arg_v))
    , vo()
    , vo2()
{
    if (arg_vo.has_value()) {
        vo.emplace(std::move(arg_vo.value()));
        arg_vo.reset();
    }
    if (arg_vo2.has_value()) {
        vo2.emplace(std::move(arg_vo2.value()));
        arg_vo2.reset();
    }
}

Value::Value([[maybe_unused]] Value&& other) noexcept
    : v(std::move(other.v))
    , vo()
    , vo2()
{
    if (other.vo.has_value()) {
        vo.emplace(std::move(other.vo.value()));
        other.vo.reset();
    }
    if (other.vo2.has_value()) {
        vo2.emplace(std::move(other.vo2.value()));
        other.vo2.reset();
    }
}

Value::~Value()
{
}

bool Value::operator==([[maybe_unused]] const Value& other) const noexcept
{
    // compare variant v
    if (!is_equal(v, other.v))
        return false;
    // compare variant vo
    if ((vo.has_value() && !other.vo.has_value()) || (!vo.has_value() && other.vo.has_value()) || (vo.has_value() && other.vo.has_value() && !is_equal(vo.value(), other.vo.value())))
        return false;
    // compare variant vo2
    if ((vo2.has_value() && !other.vo2.has_value()) || (!vo2.has_value() && other.vo2.has_value()) || (vo2.has_value() && other.vo2.has_value() && !is_equal(vo2.value(), other.vo2.value())))
        return false;
    return true;
}

bool Value::operator<([[maybe_unused]] const Value& other) const noexcept
{
    return false;
}

Value& Value::operator=(Value&& other) noexcept
{
    if (this != &other)
    {
        v = std::move(other.v);
        if (other.vo.has_value()) {
            vo.emplace(std::move(other.vo.value()));
            other.vo.reset();
        }
        if (other.vo2.has_value()) {
            vo2.emplace(std::move(other.vo2.value()));
            other.vo2.reset();
        }
    }
    return *this;
}

std::string Value::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Value::swap([[maybe_unused]] Value& other) noexcept
{
    using std::swap;
    swap(v, other.v);
    swap(vo, other.vo);
    swap(vo2, other.vo2);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Value& value)
{
    stream << "Value(";
    stream << "v="; stream << value.v;
    stream << ",vo="; if (value.vo) stream << *value.vo; else stream << "null";
    stream << ",vo2="; if (value.vo2) stream << *value.vo2; else stream << "null";
    stream << ")";
    return stream;
}

ValueContainer::ValueContainer()
    : vv()
    , vm()
{}

ValueContainer::ValueContainer([[maybe_unused]] allocator_type alloc)
    : vv(alloc)
    , vm(alloc)
{}

ValueContainer::ValueContainer(pmr::vector<::variants_ptr_pmr::V> arg_vv, pmr::unordered_map<int32_t, ::variants_ptr_pmr::V> arg_vm)
    : vv(std::move(arg_vv))
    , vm(std::move(arg_vm))
{}

ValueContainer::ValueContainer([[maybe_unused]] ValueContainer&& other) noexcept
    : vv(std::move(other.vv))
    , vm(std::move(other.vm))
{}

ValueContainer::~ValueContainer()
{
}

bool ValueContainer::operator==([[maybe_unused]] const ValueContainer& other) const noexcept
{
    // compare container vv
    if (vv.size() != other.vv.size())
        return false;
    for (size_t i = 0; i < vv.size(); i++)
    {
        if (!is_equal(vv[i], other.vv[i]))
            return false;
    }
    // compare container vm
    if (vm.size() != other.vm.size())
        return false;
    for (auto & [k, v]: vm)
    {
        if (auto pos = other.vm.find(k); pos == other.vm.end())
            return false;
        if (auto other_v = other.vm.at(k); !is_equal(other_v, v))
            return false;
    }
    return true;
}

bool ValueContainer::operator<([[maybe_unused]] const ValueContainer& other) const noexcept
{
    return false;
}

ValueContainer& ValueContainer::operator=(ValueContainer&& other) noexcept
{
    if (this != &other)
    {
        vv = std::move(other.vv);
        vm = std::move(other.vm);
    }
    return *this;
}

std::string ValueContainer::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void ValueContainer::swap([[maybe_unused]] ValueContainer& other) noexcept
{
    using std::swap;
    swap(vv, other.vv);
    swap(vm, other.vm);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const ValueContainer& value)
{
    stream << "ValueContainer(";
    {
        bool first = true;
        stream << "vv=[" << value.vv.size() << "][";
        for ([[maybe_unused]] const auto& it : value.vv)
        {
            stream << std::string(first ? "" : ",") << it;
            first = false;
        }
        stream << "]";
    }
    {
        bool first = true;
        stream << ",vm=[" << value.vm.size()<< "][{";
        for ([[maybe_unused]] const auto& it : value.vm)
        {
            stream << std::string(first ? "" : ",") << it.first;
            stream << "->";
            stream << it.second;
            first = false;
        }
        stream << "}]";
    }
    stream << ")";
    return stream;
}

Scalar1Container::Scalar1Container()
    : s()
{}

Scalar1Container::Scalar1Container([[maybe_unused]] allocator_type alloc)
    : s(alloc)
{}

Scalar1Container::Scalar1Container(pmr::unordered_map<::variants_ptr_pmr::Scalar1, ::variants_ptr_pmr::Expr> arg_s)
    : s(std::move(arg_s))
{}

Scalar1Container::Scalar1Container([[maybe_unused]] Scalar1Container&& other) noexcept
    : s(std::move(other.s))
{}

Scalar1Container::~Scalar1Container()
{
}

bool Scalar1Container::operator==([[maybe_unused]] const Scalar1Container& other) const noexcept
{
    // compare container s
    if (s.size() != other.s.size())
        return false;
    for (auto & [k, v]: s)
    {
        if (auto pos = other.s.find(k); pos == other.s.end())
            return false;
        if (auto other_v = other.s.at(k); !is_equal(other_v, v))
            return false;
    }
    return true;
}

bool Scalar1Container::operator<([[maybe_unused]] const Scalar1Container& other) const noexcept
{
    return false;
}

Scalar1Container& Scalar1Container::operator=(Scalar1Container&& other) noexcept
{
    if (this != &other)
    {
        s = std::move(other.s);
    }
    return *this;
}

std::string Scalar1Container::string() const
{
    std::stringstream ss; ss << *this; return ss.str();
}

void Scalar1Container::swap([[maybe_unused]] Scalar1Container& other) noexcept
{
    using std::swap;
    swap(s, other.s);
}

std::ostream& operator<<(std::ostream& stream, [[maybe_unused]] const Scalar1Container& value)
{
    stream << "Scalar1Container(";
    {
        bool first = true;
        stream << "s=[" << value.s.size()<< "][{";
        for ([[maybe_unused]] const auto& it : value.s)
        {
            stream << std::string(first ? "" : ",") << it.first;
            stream << "->";
            stream << it.second;
            first = false;
        }
        stream << "}]";
    }
    stream << ")";
    return stream;
}

} // namespace variants_ptr_pmr
