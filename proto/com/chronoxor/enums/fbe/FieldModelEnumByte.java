//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: enums.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package com.chronoxor.enums.fbe;

// Fast Binary Encoding EnumByte field model
public final class FieldModelEnumByte extends com.chronoxor.fbe.FieldModel
{
    public FieldModelEnumByte(com.chronoxor.fbe.Buffer buffer, long offset) { super(buffer, offset); }

    // Get the field size
    @Override
    public long fbeSize() { return 1; }

    // Get the value
    public com.chronoxor.enums.EnumByte get() { return get(new com.chronoxor.enums.EnumByte()); }
    public com.chronoxor.enums.EnumByte get(com.chronoxor.enums.EnumByte defaults)
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return defaults;

        return new com.chronoxor.enums.EnumByte(readByte(fbeOffset()));
    }

    // Set the value
    public void set(com.chronoxor.enums.EnumByte value)
    {
        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return;

        write(fbeOffset(), value.getRaw());
    }
}
