//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.protoex

@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods")
class OrderType : Comparable<OrderType>
{
    companion object
    {
        val market = OrderType(OrderTypeEnum.market)
        val limit = OrderType(OrderTypeEnum.limit)
        val stop = OrderType(OrderTypeEnum.stop)
        val stoplimit = OrderType(OrderTypeEnum.stoplimit)
    }

    var value: OrderTypeEnum? = OrderTypeEnum.values()[0]
        private set

    val raw: Byte
        get() = value!!.raw

    constructor()
    constructor(value: Byte) { setEnum(value) }
    constructor(value: OrderTypeEnum) { setEnum(value) }
    constructor(value: OrderType) { setEnum(value) }

    fun setDefault() { setEnum(0.toByte()) }

    fun setEnum(value: Byte) { this.value = OrderTypeEnum.mapValue(value) }
    fun setEnum(value: OrderTypeEnum) { this.value = value }
    fun setEnum(value: OrderType) { this.value = value.value }

    override fun compareTo(other: OrderType): Int
    {
        if (value == null)
            return -1
        if (other.value == null)
            return 1
        return (value!!.raw - other.value!!.raw).toInt()
    }

    override fun equals(other: Any?): Boolean
    {
        if (other == null)
            return false

        if (!OrderType::class.java.isAssignableFrom(other.javaClass))
            return false

        val enm = other as OrderType? ?: return false

        if (enm.value == null)
            return false
        if (value!!.raw != enm.value!!.raw)
            return false
        return true
    }

    override fun hashCode(): Int
    {
        var hash = 17
        hash = hash * 31 + if (value != null) value!!.hashCode() else 0
        return hash
    }

    override fun toString(): String
    {
        return if (value != null) value!!.toString() else "<unknown>"
    }
}
