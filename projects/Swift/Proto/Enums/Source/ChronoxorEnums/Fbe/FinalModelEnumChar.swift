//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: enums.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

import ChronoxorFbe

// Fast Binary Encoding EnumChar final model
public class FinalModelEnumChar: FinalModel {

    public var _buffer: Buffer
    public var _offset: Int

    // Final size
    public let fbeSize: Int = 1

    public init(buffer: Buffer = Buffer(), offset: Int = 0) {
        _buffer = buffer
        _offset = offset
    }

    // Get the allocation size
    public func fbeAllocationSize(value: EnumChar) -> Int { fbeSize }

    public func verify() -> Int {
        if _buffer.offset + fbeOffset + fbeSize > _buffer.size {
            return Int.max
        }

        return fbeSize
    }

    // Get the value
    public func get(size: inout Size) -> EnumChar {
        if _buffer.offset + fbeOffset + fbeSize > _buffer.size {
            return EnumChar()
        }

        size.value = fbeSize
        return EnumChar(value: readUInt8(offset: fbeOffset))
    }

    // Set the value
    public func set(value: EnumChar) throws -> Int {
        if _buffer.offset + fbeOffset + fbeSize > _buffer.size {
            assertionFailure("Model is broken!")
            return 0
        }

        write(offset: fbeOffset, value: value.raw)
        return fbeSize
    }
}
