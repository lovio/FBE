//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.proto

@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods")
open class Order : Comparable<Any?>
{
    var id: Int
    var symbol: String
    var side: OrderSide
    var type: OrderType
    var price: Double
    var volume: Double

    @Transient open var fbeType: Long = 1

    constructor(id: Int = 0, symbol: String = "", side: OrderSide = OrderSide(), type: OrderType = OrderType(), price: Double = 0.0, volume: Double = 0.0)
    {
        this.id = id
        this.symbol = symbol
        this.side = side
        this.type = type
        this.price = price
        this.volume = volume
    }

    @Suppress("UNUSED_PARAMETER")
    constructor(other: Order)
    {
        this.id = other.id
        this.symbol = other.symbol
        this.side = other.side
        this.type = other.type
        this.price = other.price
        this.volume = other.volume
    }

    open fun clone(): Order
    {
        // Serialize the struct to the FBE stream
        val writer = com.chronoxor.proto.fbe.OrderModel()
        writer.serialize(this)

        // Deserialize the struct from the FBE stream
        val reader = com.chronoxor.proto.fbe.OrderModel()
        reader.attach(writer.buffer)
        return reader.deserialize()
    }

    override fun compareTo(other: Any?): Int
    {
        if (other == null)
            return -1

        if (!Order::class.java.isAssignableFrom(other.javaClass))
            return -1

        @Suppress("UNUSED_VARIABLE")
        val obj = other as Order? ?: return -1

        @Suppress("VARIABLE_WITH_REDUNDANT_INITIALIZER", "CanBeVal", "UnnecessaryVariable")
        var result = 0
        result = id.compareTo(obj.id)
        if (result != 0)
            return result
        return result
    }

    override fun equals(other: Any?): Boolean
    {
        if (other == null)
            return false

        if (!Order::class.java.isAssignableFrom(other.javaClass))
            return false

        @Suppress("UNUSED_VARIABLE")
        val obj = other as Order? ?: return false

        if (id != obj.id)
            return false
        return true
    }

    override fun hashCode(): Int
    {
        @Suppress("CanBeVal", "UnnecessaryVariable")
        var hash = 17
        hash = hash * 31 + id.hashCode()
        return hash
    }

    override fun toString(): String
    {
        val sb = StringBuilder()
        sb.append("Order(")
        sb.append("id="); sb.append(id)
        sb.append(",symbol="); sb.append("\"").append(symbol).append("\"")
        sb.append(",side="); sb.append(side)
        sb.append(",type="); sb.append(type)
        sb.append(",price="); sb.append(price)
        sb.append(",volume="); sb.append(volume)
        sb.append(")")
        return sb.toString()
    }

    open fun toJson(): String = com.chronoxor.proto.fbe.Json.engine.toJson(this)

    companion object
    {
        const val fbeTypeConst: Long = 1
        fun fromJson(json: String): Order = com.chronoxor.proto.fbe.Json.engine.fromJson(json, Order::class.java)
    }
}
