//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: enums.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package com.chronoxor.enums.fbe;

// Fast Binary Encoding EnumInt64 field model
public final class FieldModelEnumInt64 extends com.chronoxor.fbe.FieldModel
{
    public FieldModelEnumInt64(com.chronoxor.fbe.Buffer buffer, long offset) { super(buffer, offset); }

    // Get the field size
    @Override
    public long fbeSize() { return 8; }

    // Get the value
    public com.chronoxor.enums.EnumInt64 get() { return get(new com.chronoxor.enums.EnumInt64()); }
    public com.chronoxor.enums.EnumInt64 get(com.chronoxor.enums.EnumInt64 defaults)
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return defaults;

        return new com.chronoxor.enums.EnumInt64(readInt64(fbeOffset()));
    }

    // Set the value
    public void set(com.chronoxor.enums.EnumInt64 value)
    {
        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return;

        write(fbeOffset(), value.getRaw());
    }
}
