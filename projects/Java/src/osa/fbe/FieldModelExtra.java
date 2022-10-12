//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package osa.fbe;

// Fast Binary Encoding Extra field model
public final class FieldModelExtra extends fbe.FieldModel
{
    public final fbe.FieldModelString name;
    public final fbe.FieldModelString detail;
    public final FieldModelSex sex;
    public final FieldModelMyFLags flag;

    public FieldModelExtra(fbe.Buffer buffer, long offset)
    {
        super(buffer, offset);
        name = new fbe.FieldModelString(buffer, 4 + 4);
        detail = new fbe.FieldModelString(buffer, name.fbeOffset() + name.fbeSize());
        sex = new FieldModelSex(buffer, detail.fbeOffset() + detail.fbeSize());
        flag = new FieldModelMyFLags(buffer, sex.fbeOffset() + sex.fbeSize());
    }

    // Get the field size
    @Override
    public long fbeSize() { return 4; }
    // Get the field body size
    public long fbeBody()
    {
        long fbeResult = 4 + 4
            + name.fbeSize()
            + detail.fbeSize()
            + sex.fbeSize()
            + flag.fbeSize()
            ;
        return fbeResult;
    }
    // Get the field extra size
    @Override
    public long fbeExtra()
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return 0;

        int fbeStructOffset = readInt32(fbeOffset());
        if ((fbeStructOffset == 0) || ((_buffer.getOffset() + fbeStructOffset + 4) > _buffer.getSize()))
            return 0;

        _buffer.shift(fbeStructOffset);

        long fbeResult = fbeBody()
            + name.fbeExtra()
            + detail.fbeExtra()
            + sex.fbeExtra()
            + flag.fbeExtra()
            ;

        _buffer.unshift(fbeStructOffset);

        return fbeResult;
    }
    // Get the field type
    public static final long fbeTypeConst = 1;
    public long fbeType() { return fbeTypeConst; }

    // Check if the struct value is valid
    @Override
    public boolean verify() { return verify(true); }
    public boolean verify(boolean fbeVerifyType)
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return true;

        int fbeStructOffset = readInt32(fbeOffset());
        if ((fbeStructOffset == 0) || ((_buffer.getOffset() + fbeStructOffset + 4 + 4) > _buffer.getSize()))
            return false;

        int fbeStructSize = readInt32(fbeStructOffset);
        if (fbeStructSize < (4 + 4))
            return false;

        int fbeStructType = readInt32(fbeStructOffset + 4);
        if (fbeVerifyType && (fbeStructType != fbeType()))
            return false;

        _buffer.shift(fbeStructOffset);
        boolean fbeResult = verifyFields(fbeStructSize);
        _buffer.unshift(fbeStructOffset);
        return fbeResult;
    }

    // Check if the struct fields are valid
    public boolean verifyFields(long fbeStructSize)
    {
        long fbeCurrentSize = 4 + 4;

        if ((fbeCurrentSize + name.fbeSize()) > fbeStructSize)
            return true;
        if (!name.verify())
            return false;
        fbeCurrentSize += name.fbeSize();

        if ((fbeCurrentSize + detail.fbeSize()) > fbeStructSize)
            return true;
        if (!detail.verify())
            return false;
        fbeCurrentSize += detail.fbeSize();

        if ((fbeCurrentSize + sex.fbeSize()) > fbeStructSize)
            return true;
        if (!sex.verify())
            return false;
        fbeCurrentSize += sex.fbeSize();

        if ((fbeCurrentSize + flag.fbeSize()) > fbeStructSize)
            return true;
        if (!flag.verify())
            return false;
        fbeCurrentSize += flag.fbeSize();

        return true;
    }

    // Get the struct value (begin phase)
    public long getBegin()
    {
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return 0;

        int fbeStructOffset = readInt32(fbeOffset());
        assert ((fbeStructOffset > 0) && ((_buffer.getOffset() + fbeStructOffset + 4 + 4) <= _buffer.getSize())) : "Model is broken!";
        if ((fbeStructOffset == 0) || ((_buffer.getOffset() + fbeStructOffset + 4 + 4) > _buffer.getSize()))
            return 0;

        int fbeStructSize = readInt32(fbeStructOffset);
        assert (fbeStructSize >= (4 + 4)) : "Model is broken!";
        if (fbeStructSize < (4 + 4))
            return 0;

        _buffer.shift(fbeStructOffset);
        return fbeStructOffset;
    }

    // Get the struct value (end phase)
    public void getEnd(long fbeBegin)
    {
        _buffer.unshift(fbeBegin);
    }

    // Get the struct value
    public osa.Extra get() { return get(new osa.Extra()); }
    public osa.Extra get(osa.Extra fbeValue)
    {
        long fbeBegin = getBegin();
        if (fbeBegin == 0)
            return fbeValue;

        int fbeStructSize = readInt32(0);
        getFields(fbeValue, fbeStructSize);
        getEnd(fbeBegin);
        return fbeValue;
    }

    // Get the struct fields values
    public void getFields(osa.Extra fbeValue, long fbeStructSize)
    {
        long fbeCurrentSize = 4 + 4;

        if ((fbeCurrentSize + name.fbeSize()) <= fbeStructSize)
            fbeValue.name = name.get();
        else
            fbeValue.name = "";
        fbeCurrentSize += name.fbeSize();

        if ((fbeCurrentSize + detail.fbeSize()) <= fbeStructSize)
            fbeValue.detail = detail.get();
        else
            fbeValue.detail = "";
        fbeCurrentSize += detail.fbeSize();

        if ((fbeCurrentSize + sex.fbeSize()) <= fbeStructSize)
            fbeValue.sex = sex.get();
        else
            fbeValue.sex = new osa.Sex();
        fbeCurrentSize += sex.fbeSize();

        if ((fbeCurrentSize + flag.fbeSize()) <= fbeStructSize)
            fbeValue.flag = flag.get();
        else
            fbeValue.flag = new osa.MyFLags();
        fbeCurrentSize += flag.fbeSize();
    }

    // Set the struct value (begin phase)
    public long setBegin()
    {
        assert ((_buffer.getOffset() + fbeOffset() + fbeSize()) <= _buffer.getSize()) : "Model is broken!";
        if ((_buffer.getOffset() + fbeOffset() + fbeSize()) > _buffer.getSize())
            return 0;

        int fbeStructSize = (int)fbeBody();
        int fbeStructOffset = (int)(_buffer.allocate(fbeStructSize) - _buffer.getOffset());
        assert ((fbeStructOffset > 0) && ((_buffer.getOffset() + fbeStructOffset + fbeStructSize) <= _buffer.getSize())) : "Model is broken!";
        if ((fbeStructOffset <= 0) || ((_buffer.getOffset() + fbeStructOffset + fbeStructSize) > _buffer.getSize()))
            return 0;

        write(fbeOffset(), fbeStructOffset);
        write(fbeStructOffset, fbeStructSize);
        write(fbeStructOffset + 4, (int)fbeType());

        _buffer.shift(fbeStructOffset);
        return fbeStructOffset;
    }

    // Set the struct value (end phase)
    public void setEnd(long fbeBegin)
    {
        _buffer.unshift(fbeBegin);
    }

    // Set the struct value
    public void set(osa.Extra fbeValue)
    {
        long fbeBegin = setBegin();
        if (fbeBegin == 0)
            return;

        setFields(fbeValue);
        setEnd(fbeBegin);
    }

    // Set the struct fields values
    public void setFields(osa.Extra fbeValue)
    {
        name.set(fbeValue.name);
        detail.set(fbeValue.detail);
        sex.set(fbeValue.sex);
        flag.set(fbeValue.flag);
    }
}
