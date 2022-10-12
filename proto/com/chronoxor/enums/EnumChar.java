//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: enums.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package com.chronoxor.enums;

public final class EnumChar implements Comparable<EnumChar>
{
    public static final EnumChar ENUM_VALUE_0 = new EnumChar(EnumCharEnum.ENUM_VALUE_0);
    public static final EnumChar ENUM_VALUE_1 = new EnumChar(EnumCharEnum.ENUM_VALUE_1);
    public static final EnumChar ENUM_VALUE_2 = new EnumChar(EnumCharEnum.ENUM_VALUE_2);
    public static final EnumChar ENUM_VALUE_3 = new EnumChar(EnumCharEnum.ENUM_VALUE_3);
    public static final EnumChar ENUM_VALUE_4 = new EnumChar(EnumCharEnum.ENUM_VALUE_4);
    public static final EnumChar ENUM_VALUE_5 = new EnumChar(EnumCharEnum.ENUM_VALUE_5);

    private EnumCharEnum value = EnumCharEnum.values()[0];

    public EnumChar() {}
    public EnumChar(byte value) { setEnum(value); }
    public EnumChar(EnumCharEnum value) { setEnum(value); }
    public EnumChar(EnumChar value) { setEnum(value); }

    public EnumCharEnum getEnum() { return value; }
    public byte getRaw() { return value.getRaw(); }

    public void setDefault() { setEnum((byte)0); }

    public void setEnum(byte value) { this.value = EnumCharEnum.mapValue(value); }
    public void setEnum(EnumCharEnum value) { this.value = value; }
    public void setEnum(EnumChar value) { this.value = value.value; }

    @Override
    public int compareTo(EnumChar other)
    {
        if (value == null)
            return -1;
        if (other.value == null)
            return 1;
        return (int)(value.getRaw() - other.value.getRaw());
    }

    @Override
    public boolean equals(Object other)
    {
        if (other == null)
            return false;

        if (!EnumChar.class.isAssignableFrom(other.getClass()))
            return false;

        final EnumChar enm = (EnumChar)other;

        if ((value == null) || (enm.value == null))
            return false;
        if (value.getRaw() != enm.value.getRaw())
            return false;
        return true;
    }

    @Override
    public int hashCode()
    {
        int hash = 17;
        hash = hash * 31 + ((value != null) ? value.hashCode() : 0);
        return hash;
    }

    @Override
    public String toString() { return (value != null) ? value.toString() : "<unknown>"; }
}
