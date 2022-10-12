//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package com.chronoxor.fbe;

// Fast Binary Encoding base field model
public abstract class FieldModel
{
    protected Buffer _buffer;
    protected long _offset;

    // Get the field offset
    public long fbeOffset() { return _offset; }
    // Set the field offset
    public void fbeOffset(long value) { _offset = value; }

    // Get the field size
    public long fbeSize() { return 0; }
    // Get the field extra size
    public long fbeExtra() { return 0; }

    // Shift the current field offset
    public void fbeShift(long size) { _offset += size; }
    // Unshift the current field offset
    public void fbeUnshift(long size) { _offset -= size; }

    // Initialize a new field model
    protected FieldModel(Buffer buffer, long offset)
    {
        _buffer = buffer;
        _offset = offset;
    }

    // Check if the value is valid
    public boolean verify() { return true; }

    // Buffer I/O methods
    protected boolean readBoolean(long offset) { return Buffer.readBoolean(_buffer.getData(), _buffer.getOffset() + offset); }
    protected byte readByte(long offset) { return Buffer.readByte(_buffer.getData(), _buffer.getOffset() + offset); }
    protected char readChar(long offset) { return Buffer.readChar(_buffer.getData(), _buffer.getOffset() + offset); }
    protected char readWChar(long offset) { return Buffer.readWChar(_buffer.getData(), _buffer.getOffset() + offset); }
    protected byte readInt8(long offset) { return Buffer.readInt8(_buffer.getData(), _buffer.getOffset() + offset); }
    protected short readInt16(long offset) { return Buffer.readInt16(_buffer.getData(), _buffer.getOffset() + offset); }
    protected int readInt32(long offset) { return Buffer.readInt32(_buffer.getData(), _buffer.getOffset() + offset); }
    protected long readInt64(long offset) { return Buffer.readInt64(_buffer.getData(), _buffer.getOffset() + offset); }
    protected float readFloat(long offset) { return Buffer.readFloat(_buffer.getData(), _buffer.getOffset() + offset); }
    protected double readDouble(long offset) { return Buffer.readDouble(_buffer.getData(), _buffer.getOffset() + offset); }
    protected byte[] readBytes(long offset, long size) { return Buffer.readBytes(_buffer.getData(), _buffer.getOffset() + offset, size); }
    protected String readString(long offset, long size) { return Buffer.readString(_buffer.getData(), _buffer.getOffset() + offset, size); }
    protected java.util.UUID readUUID(long offset) { return Buffer.readUUID(_buffer.getData(), _buffer.getOffset() + offset); }
    protected void write(long offset, boolean value) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value); }
    protected void write(long offset, byte value) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value); }
    protected void write(long offset, short value) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value); }
    protected void write(long offset, int value) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value); }
    protected void write(long offset, long value) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value); }
    protected void write(long offset, float value) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value); }
    protected void write(long offset, double value) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value); }
    protected void write(long offset, byte[] value) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value); }
    protected void write(long offset, byte[] value, long valueOffset, long valueSize) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value, valueOffset, valueSize); }
    protected void write(long offset, byte value, long valueCount) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value, valueCount); }
    protected void write(long offset, java.util.UUID value) { Buffer.write(_buffer.getData(), _buffer.getOffset() + offset, value); }
}
