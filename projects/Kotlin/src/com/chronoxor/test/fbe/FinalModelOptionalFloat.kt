//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.test.fbe

// Fast Binary Encoding optional Float final model
class FinalModelOptionalFloat(buffer: com.chronoxor.fbe.Buffer, offset: Long) : com.chronoxor.fbe.FinalModel(buffer, offset)
{
    // Get the allocation size
    fun fbeAllocationSize(optional: Float?): Long = 1 + (if (optional != null) value.fbeAllocationSize(optional) else 0)

    // Checks if the object contains a value
    fun hasValue(): Boolean
    {
        if ((_buffer.offset + fbeOffset + 1) > _buffer.size)
            return false

        val fbeHasValue = readInt8(fbeOffset).toInt()
        return fbeHasValue != 0
    }

    // Base final model value
    val value = com.chronoxor.fbe.FinalModelFloat(buffer, 0)

    // Check if the optional value is valid
    override fun verify(): Long
    {
        if ((_buffer.offset + fbeOffset + 1) > _buffer.size)
            return Long.MAX_VALUE

        val fbeHasValue = readInt8(fbeOffset).toInt()
        if (fbeHasValue == 0)
            return 1

        _buffer.shift(fbeOffset + 1)
        val fbeResult = value.verify()
        _buffer.unshift(fbeOffset + 1)
        return 1 + fbeResult
    }

    // Get the optional value
    fun get(size: com.chronoxor.fbe.Size): Float?
    {
        assert((_buffer.offset + fbeOffset + 1) <= _buffer.size) { "Model is broken!" }
        if ((_buffer.offset + fbeOffset + 1) > _buffer.size)
        {
            size.value = 0
            return null
        }

        if (!hasValue())
        {
            size.value = 1
            return null
        }

        _buffer.shift(fbeOffset + 1)
        val optional = value.get(size)
        _buffer.unshift(fbeOffset + 1)
        size.value += 1
        return optional
    }

    // Set the optional value
    fun set(optional: Float?): Long
    {
        assert((_buffer.offset + fbeOffset + 1) <= _buffer.size) { "Model is broken!" }
        if ((_buffer.offset + fbeOffset + 1) > _buffer.size)
            return 0

        val fbeHasValue = if (optional != null) 1 else 0
        write(fbeOffset, fbeHasValue.toByte())
        if (fbeHasValue == 0)
            return 1

        _buffer.shift(fbeOffset + 1)
        val size = value.set(optional!!)
        _buffer.unshift(fbeOffset + 1)
        return 1 + size
    }
}
