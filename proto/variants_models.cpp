//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

#include "variants_models.h"

namespace FBE {

FieldModel<::variants::Expr>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
{}

size_t FieldModel<::variants::Expr>::fbe_body() const noexcept
{
    // variant type's fbe_size not included
    size_t fbe_result = 4;
    return fbe_result;
}

size_t FieldModel<::variants::Expr>::fbe_extra() const noexcept
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

bool FieldModel<::variants::Expr>::verify() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_variant_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + 4) > _buffer.size()))
        return false;

    uint32_t fbe_variant_type = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset);
    if (fbe_variant_type < 0 || fbe_variant_type >= 3)
        return false;

    _buffer.shift(fbe_variant_offset);
    switch(fbe_variant_type) {
        case 0: {
            FieldModel<bool> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 1: {
            FieldModel<int32_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 2: {
            FieldModel<stdb::memory::string> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
    }

    _buffer.unshift(fbe_variant_offset);
    return true;
}

void FieldModel<::variants::Expr>::get(::variants::Expr& fbe_value) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    uint32_t fbe_variant_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    assert(((fbe_variant_offset > 0) && ((_buffer.offset() + fbe_variant_offset + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + 4) > _buffer.size()))
        return;
    uint32_t vairant_type_index = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset);
    assert(vairant_type_index >= 0 && vairant_type_index < 3 && "Model is broken!");

    _buffer.shift(fbe_variant_offset);

    switch(vairant_type_index) {
        case 0: {
            FieldModel<bool> fbe_model(_buffer, 4);
            fbe_value.emplace<bool>();
            auto& value = std::get<0>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 1: {
            FieldModel<int32_t> fbe_model(_buffer, 4);
            fbe_value.emplace<int32_t>();
            auto& value = std::get<1>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 2: {
            FieldModel<stdb::memory::string> fbe_model(_buffer, 4);
            fbe_value.emplace<stdb::memory::string>();
            auto& value = std::get<2>(fbe_value);
            fbe_model.get(value);
            break;
        }
    }

    _buffer.unshift(fbe_variant_offset);
}

size_t FieldModel<::variants::Expr>::set_begin(size_t variant_type_fbe_size, size_t variant_type_index)
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

void FieldModel<::variants::Expr>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

// Set the variant value
void FieldModel<::variants::Expr>::set(const ::variants::Expr& fbe_value) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    std::visit(
        overloaded
        {
            [this, fbe_variant_index = fbe_value.index()](bool v) {
                FieldModel<bool> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](int32_t v) {
                FieldModel<int32_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const stdb::memory::string& v) {
                FieldModel<stdb::memory::string> fbe_model(_buffer, 4);
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


FieldModel<::variants::V>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
{}

size_t FieldModel<::variants::V>::fbe_body() const noexcept
{
    // variant type's fbe_size not included
    size_t fbe_result = 4;
    return fbe_result;
}

size_t FieldModel<::variants::V>::fbe_extra() const noexcept
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

bool FieldModel<::variants::V>::verify() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return true;

    uint32_t fbe_variant_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + 4) > _buffer.size()))
        return false;

    uint32_t fbe_variant_type = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset);
    if (fbe_variant_type < 0 || fbe_variant_type >= 12)
        return false;

    _buffer.shift(fbe_variant_offset);
    switch(fbe_variant_type) {
        case 0: {
            FieldModel<stdb::memory::string> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 1: {
            FieldModel<int32_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 2: {
            FieldModel<double> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 3: {
            FieldModel<::variants::Simple> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 4: {
            FieldModelVector<::variants::Simple> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 5: {
            FieldModelVector<int32_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 6: {
            FieldModelMap<int32_t, ::variants::Simple> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 7: {
            FieldModelVector<FBE::buffer_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 8: {
            FieldModelVector<stdb::memory::string> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 9: {
            FieldModelMap<int32_t, FBE::buffer_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 10: {
            FieldModelMap<stdb::memory::string, FBE::buffer_t> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
        case 11: {
            FieldModel<::variants::Expr> fbe_model(_buffer, 4);
            if (!fbe_model.verify())
                return false;
            break;
        }
    }

    _buffer.unshift(fbe_variant_offset);
    return true;
}

void FieldModel<::variants::V>::get(::variants::V& fbe_value) const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    uint32_t fbe_variant_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    assert(((fbe_variant_offset > 0) && ((_buffer.offset() + fbe_variant_offset + 4) <= _buffer.size())) && "Model is broken!");
    if ((fbe_variant_offset == 0) || ((_buffer.offset() + fbe_variant_offset + 4) > _buffer.size()))
        return;
    uint32_t vairant_type_index = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_variant_offset);
    assert(vairant_type_index >= 0 && vairant_type_index < 12 && "Model is broken!");

    _buffer.shift(fbe_variant_offset);

    switch(vairant_type_index) {
        case 0: {
            FieldModel<stdb::memory::string> fbe_model(_buffer, 4);
            fbe_value.emplace<stdb::memory::string>();
            auto& value = std::get<0>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 1: {
            FieldModel<int32_t> fbe_model(_buffer, 4);
            fbe_value.emplace<int32_t>();
            auto& value = std::get<1>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 2: {
            FieldModel<double> fbe_model(_buffer, 4);
            fbe_value.emplace<double>();
            auto& value = std::get<2>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 3: {
            FieldModel<::variants::Simple> fbe_model(_buffer, 4);
            fbe_value.emplace<::variants::Simple>();
            auto& value = std::get<3>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 4: {
            FieldModelVector<::variants::Simple> fbe_model(_buffer, 4);
            fbe_value.emplace<FastVec<::variants::Simple>>();
            auto& value = std::get<4>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 5: {
            FieldModelVector<int32_t> fbe_model(_buffer, 4);
            fbe_value.emplace<FastVec<int32_t>>();
            auto& value = std::get<5>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 6: {
            FieldModelMap<int32_t, ::variants::Simple> fbe_model(_buffer, 4);
            fbe_value.emplace<std::unordered_map<int32_t, ::variants::Simple>>();
            auto& value = std::get<6>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 7: {
            FieldModelVector<FBE::buffer_t> fbe_model(_buffer, 4);
            fbe_value.emplace<FastVec<FBE::buffer_t>>();
            auto& value = std::get<7>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 8: {
            FieldModelVector<stdb::memory::string> fbe_model(_buffer, 4);
            fbe_value.emplace<FastVec<stdb::memory::string>>();
            auto& value = std::get<8>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 9: {
            FieldModelMap<int32_t, FBE::buffer_t> fbe_model(_buffer, 4);
            fbe_value.emplace<std::unordered_map<int32_t, FBE::buffer_t>>();
            auto& value = std::get<9>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 10: {
            FieldModelMap<stdb::memory::string, FBE::buffer_t> fbe_model(_buffer, 4);
            fbe_value.emplace<std::unordered_map<stdb::memory::string, FBE::buffer_t>>();
            auto& value = std::get<10>(fbe_value);
            fbe_model.get(value);
            break;
        }
        case 11: {
            FieldModel<::variants::Expr> fbe_model(_buffer, 4);
            fbe_value.emplace<::variants::Expr>();
            auto& value = std::get<11>(fbe_value);
            fbe_model.get(value);
            break;
        }
    }

    _buffer.unshift(fbe_variant_offset);
}

size_t FieldModel<::variants::V>::set_begin(size_t variant_type_fbe_size, size_t variant_type_index)
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

void FieldModel<::variants::V>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

// Set the variant value
void FieldModel<::variants::V>::set(const ::variants::V& fbe_value) noexcept
{
    assert(((_buffer.offset() + fbe_offset() + fbe_size()) <= _buffer.size()) && "Model is broken!");
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return;

    std::visit(
        overloaded
        {
            [this, fbe_variant_index = fbe_value.index()](const stdb::memory::string& v) {
                FieldModel<stdb::memory::string> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](int32_t v) {
                FieldModel<int32_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](double v) {
                FieldModel<double> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const ::variants::Simple& v) {
                FieldModel<::variants::Simple> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const FastVec<::variants::Simple>& v) {
                FieldModelVector<::variants::Simple> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const FastVec<int32_t>& v) {
                FieldModelVector<int32_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const std::unordered_map<int32_t, ::variants::Simple>& v) {
                FieldModelMap<int32_t, ::variants::Simple> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const FastVec<FBE::buffer_t>& v) {
                FieldModelVector<FBE::buffer_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const FastVec<stdb::memory::string>& v) {
                FieldModelVector<stdb::memory::string> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const std::unordered_map<int32_t, FBE::buffer_t>& v) {
                FieldModelMap<int32_t, FBE::buffer_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const std::unordered_map<stdb::memory::string, FBE::buffer_t>& v) {
                FieldModelMap<stdb::memory::string, FBE::buffer_t> fbe_model(_buffer, 4);
                size_t fbe_begin = set_begin(fbe_model.fbe_size(), fbe_variant_index);
                if (fbe_begin == 0)
                    return;
                fbe_model.set(v);
                set_end(fbe_begin);
            }
            , [this, fbe_variant_index = fbe_value.index()](const ::variants::Expr& v) {
                FieldModel<::variants::Expr> fbe_model(_buffer, 4);
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


FieldModel<::variants::Simple>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , name(buffer, 4 + 4)
{}

size_t FieldModel<::variants::Simple>::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + name.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel<::variants::Simple>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + name.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel<::variants::Simple>::verify(bool fbe_verify_type) const noexcept
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

bool FieldModel<::variants::Simple>::verify_fields([[maybe_unused]] size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + name.fbe_size()) > fbe_struct_size)
        return true;
    if (!name.verify())
        return false;
    fbe_current_size += name.fbe_size();

    return true;
}

size_t FieldModel<::variants::Simple>::get_begin() const noexcept
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

void FieldModel<::variants::Simple>::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::variants::Simple>::get(::variants::Simple& fbe_value) const noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset());
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel<::variants::Simple>::get_fields([[maybe_unused]] ::variants::Simple& fbe_value, [[maybe_unused]] size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + name.fbe_size()) <= fbe_struct_size)
        name.get(fbe_value.name);
    else
        fbe_value.name = "";
    fbe_current_size += name.fbe_size();
}

size_t FieldModel<::variants::Simple>::set_begin()
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

void FieldModel<::variants::Simple>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::variants::Simple>::set(const ::variants::Simple& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel<::variants::Simple>::set_fields([[maybe_unused]] const ::variants::Simple& fbe_value) noexcept
{
    name.set(fbe_value.name);
}

namespace variants {

bool SimpleModel::verify()
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return false;

    uint32_t fbe_full_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4);
    if (fbe_full_size < model.fbe_size())
        return false;

    return model.verify();
}

size_t SimpleModel::create_begin()
{
    size_t fbe_begin = this->buffer().allocate(4 + model.fbe_size());
    return fbe_begin;
}

size_t SimpleModel::create_end(size_t fbe_begin)
{
    size_t fbe_end = this->buffer().size();
    uint32_t fbe_full_size = (uint32_t)(fbe_end - fbe_begin);
    unaligned_store<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4, fbe_full_size);
    return fbe_full_size;
}

size_t SimpleModel::serialize(const ::variants::Simple& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t SimpleModel::deserialize(::variants::Simple& value) const noexcept
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

} // namespace variants

FieldModel<::variants::Value>::FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset)
    , v(buffer, 4 + 4)
{}

size_t FieldModel<::variants::Value>::fbe_body() const noexcept
{
    size_t fbe_result = 4 + 4
        + v.fbe_size()
        ;
    return fbe_result;
}

size_t FieldModel<::variants::Value>::fbe_extra() const noexcept
{
    if ((_buffer.offset() + fbe_offset() + fbe_size()) > _buffer.size())
        return 0;

    uint32_t fbe_struct_offset = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset() + fbe_offset());
    if ((fbe_struct_offset == 0) || ((_buffer.offset() + fbe_struct_offset + 4) > _buffer.size()))
        return 0;

    _buffer.shift(fbe_struct_offset);

    size_t fbe_result = fbe_body()
        + v.fbe_extra()
        ;

    _buffer.unshift(fbe_struct_offset);

    return fbe_result;
}

bool FieldModel<::variants::Value>::verify(bool fbe_verify_type) const noexcept
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

bool FieldModel<::variants::Value>::verify_fields([[maybe_unused]] size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + v.fbe_size()) > fbe_struct_size)
        return true;
    if (!v.verify())
        return false;
    fbe_current_size += v.fbe_size();

    return true;
}

size_t FieldModel<::variants::Value>::get_begin() const noexcept
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

void FieldModel<::variants::Value>::get_end(size_t fbe_begin) const noexcept
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::variants::Value>::get(::variants::Value& fbe_value) const noexcept
{
    size_t fbe_begin = get_begin();
    if (fbe_begin == 0)
        return;

    uint32_t fbe_struct_size = unaligned_load<uint32_t>(_buffer.data() + _buffer.offset());
    get_fields(fbe_value, fbe_struct_size);
    get_end(fbe_begin);
}

void FieldModel<::variants::Value>::get_fields([[maybe_unused]] ::variants::Value& fbe_value, [[maybe_unused]] size_t fbe_struct_size) const noexcept
{
    size_t fbe_current_size = 4 + 4;

    if ((fbe_current_size + v.fbe_size()) <= fbe_struct_size)
        v.get(fbe_value.v);
    else
        fbe_value.v = ::variants::V();
    fbe_current_size += v.fbe_size();
}

size_t FieldModel<::variants::Value>::set_begin()
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

void FieldModel<::variants::Value>::set_end(size_t fbe_begin)
{
    _buffer.unshift(fbe_begin);
}

void FieldModel<::variants::Value>::set(const ::variants::Value& fbe_value) noexcept
{
    size_t fbe_begin = set_begin();
    if (fbe_begin == 0)
        return;

    set_fields(fbe_value);
    set_end(fbe_begin);
}

void FieldModel<::variants::Value>::set_fields([[maybe_unused]] const ::variants::Value& fbe_value) noexcept
{
    v.set(fbe_value.v);
}

namespace variants {

bool ValueModel::verify()
{
    if ((this->buffer().offset() + model.fbe_offset() - 4) > this->buffer().size())
        return false;

    uint32_t fbe_full_size = unaligned_load<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4);
    if (fbe_full_size < model.fbe_size())
        return false;

    return model.verify();
}

size_t ValueModel::create_begin()
{
    size_t fbe_begin = this->buffer().allocate(4 + model.fbe_size());
    return fbe_begin;
}

size_t ValueModel::create_end(size_t fbe_begin)
{
    size_t fbe_end = this->buffer().size();
    uint32_t fbe_full_size = (uint32_t)(fbe_end - fbe_begin);
    unaligned_store<uint32_t>(this->buffer().data() + this->buffer().offset() + model.fbe_offset() - 4, fbe_full_size);
    return fbe_full_size;
}

size_t ValueModel::serialize(const ::variants::Value& value)
{
    size_t fbe_begin = create_begin();
    model.set(value);
    size_t fbe_full_size = create_end(fbe_begin);
    return fbe_full_size;
}

size_t ValueModel::deserialize(::variants::Value& value) const noexcept
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

} // namespace variants

} // namespace FBE
