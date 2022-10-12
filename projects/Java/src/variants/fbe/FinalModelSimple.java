//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package variants.fbe;

// Fast Binary Encoding Simple final model
public final class FinalModelSimple extends fbe.FinalModel
{
    public final fbe.FinalModelString name;

    public FinalModelSimple(fbe.Buffer buffer, long offset)
    {
        super(buffer, offset);
        name = new fbe.FinalModelString(buffer, 0);
    }

    // Get the allocation size
    public long fbeAllocationSize(variants.Simple fbeValue)
    {
        long fbeResult = 0
            + name.fbeAllocationSize(fbeValue.name)
            ;
        return fbeResult;
    }

    // Get the final type
    public static final long fbeTypeConst = 1;
    public long fbeType() { return fbeTypeConst; }

    // Check if the struct value is valid
    @Override
    public long verify()
    {
        _buffer.shift(fbeOffset());
        long fbeResult = verifyFields();
        _buffer.unshift(fbeOffset());
        return fbeResult;
    }

    // Check if the struct fields are valid
    public long verifyFields()
    {
        long fbeCurrentOffset = 0;
        long fbeFieldSize = 0;

        name.fbeOffset(fbeCurrentOffset);
        fbeFieldSize = name.verify();
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE;
        fbeCurrentOffset += fbeFieldSize;

        return fbeCurrentOffset;
    }

    // Get the struct value
    public variants.Simple get(fbe.Size fbeSize) { return get(fbeSize, new variants.Simple()); }
    public variants.Simple get(fbe.Size fbeSize, variants.Simple fbeValue)
    {
        _buffer.shift(fbeOffset());
        fbeSize.value = getFields(fbeValue);
        _buffer.unshift(fbeOffset());
        return fbeValue;
    }

    // Get the struct fields values
    public long getFields(variants.Simple fbeValue)
    {
        long fbeCurrentOffset = 0;
        long fbeCurrentSize = 0;
        var fbeFieldSize = new fbe.Size(0);

        name.fbeOffset(fbeCurrentOffset);
        fbeValue.name = name.get(fbeFieldSize);
        fbeCurrentOffset += fbeFieldSize.value;
        fbeCurrentSize += fbeFieldSize.value;

        return fbeCurrentSize;
    }

    // Set the struct value
    public long set(variants.Simple fbeValue)
    {
        _buffer.shift(fbeOffset());
        long fbeSize = setFields(fbeValue);
        _buffer.unshift(fbeOffset());
        return fbeSize;
    }

    // Set the struct fields values
    public long setFields(variants.Simple fbeValue)
    {
        long fbeCurrentOffset = 0;
        long fbeCurrentSize = 0;
        var fbeFieldSize = new fbe.Size();

        name.fbeOffset(fbeCurrentOffset);
        fbeFieldSize.value = name.set(fbeValue.name);
        fbeCurrentOffset += fbeFieldSize.value;
        fbeCurrentSize += fbeFieldSize.value;

        return fbeCurrentSize;
    }
}
