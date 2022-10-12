//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: enums.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package com.chronoxor.enums;

public final class EnumWChar implements Comparable<EnumWChar>
{
    public static final EnumWChar ENUM_VALUE_0 = new EnumWChar(EnumWCharEnum.ENUM_VALUE_0);
    public static final EnumWChar ENUM_VALUE_1 = new EnumWChar(EnumWCharEnum.ENUM_VALUE_1);
    public static final EnumWChar ENUM_VALUE_2 = new EnumWChar(EnumWCharEnum.ENUM_VALUE_2);
    public static final EnumWChar ENUM_VALUE_3 = new EnumWChar(EnumWCharEnum.ENUM_VALUE_3);
    public static final EnumWChar ENUM_VALUE_4 = new EnumWChar(EnumWCharEnum.ENUM_VALUE_4);
    public static final EnumWChar ENUM_VALUE_5 = new EnumWChar(EnumWCharEnum.ENUM_VALUE_5);

    private EnumWCharEnum value = EnumWCharEnum.values()[0];

    public EnumWChar() {}
    public EnumWChar(int value) { setEnum(value); }
    public EnumWChar(EnumWCharEnum value) { setEnum(value); }
    public EnumWChar(EnumWChar value) { setEnum(value); }

    public EnumWCharEnum getEnum() { return value; }
    public int getRaw() { return value.getRaw(); }

    public void setDefault() { setEnum((int)0); }

    public void setEnum(int value) { this.value = EnumWCharEnum.mapValue(value); }
    public void setEnum(EnumWCharEnum value) { this.value = value; }
    public void setEnum(EnumWChar value) { this.value = value.value; }

    @Override
    public int compareTo(EnumWChar other)
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

        if (!EnumWChar.class.isAssignableFrom(other.getClass()))
            return false;

        final EnumWChar enm = (EnumWChar)other;

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
