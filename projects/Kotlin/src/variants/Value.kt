//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package variants

@Suppress("MemberVisibilityCanBePrivate", "RemoveRedundantCallsOfConversionMethods")
open class Value : Comparable<Any?>
{
    var v: V

    @Transient open var fbeType: Long = 2

    constructor(v: V = V())
    {
        this.v = v
    }

    @Suppress("UNUSED_PARAMETER")
    constructor(other: Value)
    {
        this.v = other.v
    }

    open fun clone(): Value
    {
        // Serialize the struct to the FBE stream
        val writer = variants.fbe.ValueModel()
        writer.serialize(this)

        // Deserialize the struct from the FBE stream
        val reader = variants.fbe.ValueModel()
        reader.attach(writer.buffer)
        return reader.deserialize()
    }

    override fun compareTo(other: Any?): Int
    {
        if (other == null)
            return -1

        if (!Value::class.java.isAssignableFrom(other.javaClass))
            return -1

        @Suppress("UNUSED_VARIABLE")
        val obj = other as Value? ?: return -1

        @Suppress("VARIABLE_WITH_REDUNDANT_INITIALIZER", "CanBeVal", "UnnecessaryVariable")
        var result = 0
        return result
    }

    override fun equals(other: Any?): Boolean
    {
        if (other == null)
            return false

        if (!Value::class.java.isAssignableFrom(other.javaClass))
            return false

        @Suppress("UNUSED_VARIABLE")
        val obj = other as Value? ?: return false

        return true
    }

    override fun hashCode(): Int
    {
        @Suppress("CanBeVal", "UnnecessaryVariable")
        var hash = 17
        return hash
    }

    override fun toString(): String
    {
        val sb = StringBuilder()
        sb.append("Value(")
        sb.append("v="); sb.append(v)
        sb.append(")")
        return sb.toString()
    }

    open fun toJson(): String = variants.fbe.Json.engine.toJson(this)

    companion object
    {
        const val fbeTypeConst: Long = 2
        fun fromJson(json: String): Value = variants.fbe.Json.engine.fromJson(json, Value::class.java)
    }
}
