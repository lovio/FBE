//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: cpp_only.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

#include "cpp_only_pmr_models.h"

namespace FBE {

FieldModel<::cpp_only_pmr::LargeNum>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
{}

size_t FieldModel<::cpp_only_pmr::LargeNum>::fbe_body() const noexcept
{
    // variant type's fbe_size not included
    size_t fbe_result = 4;
    return fbe_result;
}

size_t FieldModel<::cpp_only_pmr::LargeNum>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body();

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel<::cpp_only_pmr::LargeNum>::verify() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_variant_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + 4) > _buffer.size()))
        return false;

    uint32_t fbe_variant_type = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset);
    if (fbe_variant_type < 0 || fbe_variant_type >= 5)
        return false;

    _buffer.shift(fbe_variant_offset);
    switch(fbe_variant_type) {
        case 0: {
            FieldModel<int64_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 1: {
            FieldModel<__int128_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 2: {
            FieldModel<__uint128_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 3: {
            FieldModelVector<__int128_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 4: {
            FieldModelMap<__uint128_t, __int128_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
    }

    _buffer.unshift(fbe_variant_offset);
    return true;
}

void FieldModel<::cpp_only_pmr::LargeNum>::get(::cpp_only_pmr::LargeNum& fbe_value) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    uint32_t fbe_variant_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    assert(((fbe_variant_offset > 0) && ((_buffer.offset() + fbe_variant_offset + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + 4) > _buffer.size()))
        return;
    uint32_t vairant_type_index = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset);
    assert(vairant_type_index >= 0 && vairant_type_index < 5 && "Model is broken!");

    _buffer.shift(fbe_variant_offset);

    switch(vairant_type_index) {
        case 0: {
            FieldModel<int64_t> fbe_model(_buffer, 4);
            fbe_value.emplace<int64_t>();
            auto& value = std::get<0>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 1: {
            FieldModel<__int128_t> fbe_model(_buffer, 4);
            fbe_value.emplace<__int128_t>();
            auto& value = std::get<1>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 2: {
            FieldModel<__uint128_t> fbe_model(_buffer, 4);
            fbe_value.emplace<__uint128_t>();
            auto& value = std::get<2>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 3: {
            FieldModelVector<__int128_t> fbe_model(_buffer, 4);
            fbe_value.emplace<pmr::vector<__int128_t>>();
            auto& value = std::get<3>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 4: {
            FieldModelMap<__uint128_t, __int128_t> fbe_model(_buffer, 4);
            fbe_value.emplace<pmr::unordered_map<__uint128_t, __int128_t>>();
            auto& value = std::get<4>(fbe_value);
            fbe_model.get(value);
            break;
        }
    }

    _buffer.unshift(fbe_variant_offset);
}

size_t FieldModel<::cpp_only_pmr::LargeNum>::set_begin(size_t variant_type_fbe_size, size_t variant_type_index)
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_variant_size = (uint32_t)(fbe_body() + variant_type_fbe_size);
    uint32_t fbe_variant_offset = (uint32_t)(_buffer.allocate(fbe_variant_size) - _buffer.offset());
    assert(((fbe_variant_offset > 0) && ((_buffer.offset() + fbe_variant_offset + fbe_variant_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + fbe_variant_size) > _buffer.size()))
        return 0;

    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset(), fbe_variant_offset);
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset, variant_type_index);

    _buffer.shift(fbe_variant_offset);
    return fbe_variant_offset;
}

void FieldModel<::cpp_only_pmr::LargeNum>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

// Set the variant value
void FieldModel<::cpp_only_pmr::LargeNum>::set(const ::cpp_only_pmr::LargeNum& fbe_value) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    std::visit(
        overloaded
        {
            [this, fbe_variant_index = fbe_value.index()](int64_t v) {
                FieldModel<int64_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](__int128_t v) {
                FieldModel<__int128_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](__uint128_t v) {
                FieldModel<__uint128_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const pmr::vector<__int128_t>& v) {
                FieldModelVector<__int128_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const pmr::unordered_map<__uint128_t, __int128_t>& v) {
                FieldModelMap<__uint128_t, __int128_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
        },
        fbe_value
    );
}


FieldModel<::cpp_only_pmr::Struct128>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , f1(buffer, 4 + 4)
    , f2(buffer, f1.fbe_offset() + f1.fbe_size())
    , f3(buffer, f2.fbe_offset() + f2.fbe_size())
    , f4(buffer, f3.fbe_offset() + f3.fbe_size())
    , f5(buffer, f4.fbe_offset() + f4.fbe_size())
    , f6(buffer, f5.fbe_offset() + f5.fbe_size())
    , f7(buffer, f6.fbe_offset() + f6.fbe_size())
{}

size_t FieldModel<::cpp_only_pmr::Struct128>::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + f1.fbe_size()
        + f2.fbe_size()
        + f3.fbe_size()
        + f4.fbe_size()
        + f5.fbe_size()
        + f6.fbe_size()
        + f7.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel<::cpp_only_pmr::Struct128>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + f1.fbe_extra()
        + f2.fbe_extra()
        + f3.fbe_extra()
        + f4.fbe_extra()
        + f5.fbe_extra()
        + f6.fbe_extra()
        + f7.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel<::cpp_only_pmr::Struct128>::verify(bool fbe_verify_type) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return false;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset);
    if (fbe_struct_size < (4 + 4))
        return false;

    uint32_t fbe_struct_type = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4);
    if (fbe_verify_type && (fbe_struct_type != fbe_type()))
        return false;

    _buffer.shift(fbe_struct_offset);
    bool fbe_result = verify_fields(fbe_struct_size);
    _buffer.unshift(fbe_struct_offset);
    return fbe_result;
}

bool FieldModel<::cpp_only_pmr::Struct128>::verify_fields([[maybe_unused]] size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + f1.fbe_size()) > fbe_struct_size)
        return true;
    if (!f1.verify())
        return false;
    fbe_current_size += f1.fbe_size();

    if ((fbe_current_size + f2.fbe_size()) > fbe_struct_size)
        return true;
    if (!f2.verify())
        return false;
    fbe_current_size += f2.fbe_size();

    if ((fbe_current_size + f3.fbe_size()) > fbe_struct_size)
        return true;
    if (!f3.verify())
        return false;
    fbe_current_size += f3.fbe_size();

    if ((fbe_current_size + f4.fbe_size()) > fbe_struct_size)
        return true;
    if (!f4.verify())
        return false;
    fbe_current_size += f4.fbe_size();

    if ((fbe_current_size + f5.fbe_size()) > fbe_struct_size)
        return true;
    if (!f5.verify())
        return false;
    fbe_current_size += f5.fbe_size();

    if ((fbe_current_size + f6.fbe_size()) > fbe_struct_size)
        return true;
    if (!f6.verify())
        return false;
    fbe_current_size += f6.fbe_size();

    if ((fbe_current_size + f7.fbe_size()) > fbe_struct_size)
        return true;
    if (!f7.verify())
        return false;
    fbe_current_size += f7.fbe_size();

    return true;
}

size_t FieldModel<::cpp_only_pmr::Struct128>::get_begin() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + 4 + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4 + 4) > _buffer.size()))
        return 0;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset);
    assert((fbe_struct_size >= (4 + 4)) && "Model is broken!");
    if (fbe_struct_size < (4 + 4))
        return 0;

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel<::cpp_only_pmr::Struct128>::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::cpp_only_pmr::Struct128>::get(::cpp_only_pmr::Struct128& fbe_value) const noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset());
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel<::cpp_only_pmr::Struct128>::get_fields([[maybe_unused]] ::cpp_only_pmr::Struct128& fbe_value, [[maybe_unused]] size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + f1.fbe_size()) <= fbe_struct_size)
        f1.get(fbe_value.f1);
    else
        fbe_value.f1 = (__int128_t)0;
    fbe_current_size += f1.fbe_size();

    if ((fbe_current_size + f2.fbe_size()) <= fbe_struct_size)
        f2.get(fbe_value.f2);
    else
        fbe_value.f2 = std::nullopt;
    fbe_current_size += f2.fbe_size();

    if ((fbe_current_size + f3.fbe_size()) <= fbe_struct_size)
        f3.get(fbe_value.f3);
    else
        fbe_value.f3 = (__uint128_t)0;
    fbe_current_size += f3.fbe_size();

    if ((fbe_current_size + f4.fbe_size()) <= fbe_struct_size)
        f4.get(fbe_value.f4);
    else
        fbe_value.f4 = std::nullopt;
    fbe_current_size += f4.fbe_size();

    if ((fbe_current_size + f5.fbe_size()) <= fbe_struct_size)
        f5.get(fbe_value.f5);
    else
        fbe_value.f5.clear();
    fbe_current_size += f5.fbe_size();

    if ((fbe_current_size + f6.fbe_size()) <= fbe_struct_size)
        f6.get(fbe_value.f6);
    else
        fbe_value.f6.clear();
    fbe_current_size += f6.fbe_size();

    if ((fbe_current_size + f7.fbe_size()) <= fbe_struct_size)
        f7.get(fbe_value.f7);
    else
        fbe_value.f7 = ::cpp_only_pmr::LargeNum();
    fbe_current_size += f7.fbe_size();
}

size_t FieldModel<::cpp_only_pmr::Struct128>::set_begin()
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_size = (uint32_t)fbe_body();
    uint32_t fbe_struct_offset = (uint32_t)(_buffer.allocate(fbe_struct_size) - _buffer.offset());
    assert(((fbe_struct_offset > 0) && ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) <= _buffer.size())) && "Model is broken!");
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + fbe_struct_size) > _buffer.size()))
        return 0;

    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset(), fbe_struct_offset);
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset, fbe_struct_size);
    unaligned_store<uint32_t>(_buffer.data() + _buffer.offset() + fbe_struct_offset + 4, (uint32_t)fbe_type());

    _buffer.shift(fbe_struct_offset);
    return fbe_struct_offset;
}

void FieldModel<::cpp_only_pmr::Struct128>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::cpp_only_pmr::Struct128>::set(const ::cpp_only_pmr::Struct128& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel<::cpp_only_pmr::Struct128>::set_fields([[maybe_unused]] const ::cpp_only_pmr::Struct128& fbe_value) noexcept
{
    f1.set(fbe_value.f1);
    f2.set(fbe_value.f2);
    f3.set(fbe_value.f3);
    f4.set(fbe_value.f4);
    f5.set(fbe_value.f5);
    f6.set(fbe_value.f6);
    f7.set(fbe_value.f7);
}

namespace cpp_only_pmr {

bool Struct128Model::verify()
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return false;

    uint32_t fbe_full_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4);
    if (fbe_full_size < model.fbe_size())
        return false;

    return model.verify();
}

size_t Struct128Model::create_begin()
{
    size_t fbe_begin = this->buffer().allocate(4 + model.fbe_size());
    return fbe_begin;
}

size_t Struct128Model::create_end(size_t fbe_begin)
{
    size_t fbe_end = this->buffer().size();
    uint32_t fbe_full_size = (uint32_t)(fbe_end - fbe_begin);
    unaligned_store<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4, fbe_full_size);
    return fbe_full_size;
}

size_t Struct128Model::serialize(const ::cpp_only_pmr::Struct128& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t Struct128Model::deserialize(::cpp_only_pmr::Struct128& value) const noexcept
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return 0;

    uint32_t fbe_full_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4);
    assert((fbe_full_size >= model.fbe_size()) && "Model is broken!");
    if (fbe_full_size < model.fbe_size())
        return 0;

    model.get(value);
    return fbe_full_size;
}

} // namespace cpp_only_pmr

} // namespace FBE