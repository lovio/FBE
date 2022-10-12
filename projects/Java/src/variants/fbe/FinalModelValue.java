//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package variants.fbe;

// Fast Binary Encoding Value final model
public final class FinalModelValue extends fbe.FinalModel
{
    public final FinalModelV v;

    public FinalModelValue(fbe.Buffer buffer, long offset)
    {
        super(buffer, offset);
        v = new FinalModelV(buffer, 0);
    }

    // Get the allocation size
    public long fbeAllocationSize(variants.Value fbeValue)
    {
        long fbeResult = 0
            + v.fbeAllocationSize(fbeValue.v)
            ;
        return fbeResult;
    }

    // Get the final type
    public static final long fbeTypeConst = 2;
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

        v.fbeOffset(fbeCurrentOffset);
        fbeFieldSize = v.verify();
        if (fbeFieldSize == Long.MAX_VALUE)
            return Long.MAX_VALUE;
        fbeCurrentOffset += fbeFieldSize;

        return fbeCurrentOffset;
    }

    // Get the struct value
    public variants.Value get(fbe.Size fbeSize) { return get(fbeSize, new variants.Value()); }
    public variants.Value get(fbe.Size fbeSize, variants.Value fbeValue)
    {
        _buffer.shift(fbeOffset());
        fbeSize.value = getFields(fbeValue);
        _buffer.unshift(fbeOffset());
        return fbeValue;
    }

    // Get the struct fields values
    public long getFields(variants.Value fbeValue)
    {
        long fbeCurrentOffset = 0;
        long fbeCurrentSize = 0;
        var fbeFieldSize = new fbe.Size(0);

        v.fbeOffset(fbeCurrentOffset);
        fbeValue.v = v.get(fbeFieldSize);
        fbeCurrentOffset += fbeFieldSize.value;
        fbeCurrentSize += fbeFieldSize.value;

        return fbeCurrentSize;
    }

    // Set the struct value
    public long set(variants.Value fbeValue)
    {
        _buffer.shift(fbeOffset());
        long fbeSize = setFields(fbeValue);
        _buffer.unshift(fbeOffset());
        return fbeSize;
    }

    // Set the struct fields values
    public long setFields(variants.Value fbeValue)
    {
        long fbeCurrentOffset = 0;
        long fbeCurrentSize = 0;
        var fbeFieldSize = new fbe.Size();

        v.fbeOffset(fbeCurrentOffset);
        fbeFieldSize.value = v.set(fbeValue.v);
        fbeCurrentOffset += fbeFieldSize.value;
        fbeCurrentSize += fbeFieldSize.value;

        return fbeCurrentSize;
    }
}
