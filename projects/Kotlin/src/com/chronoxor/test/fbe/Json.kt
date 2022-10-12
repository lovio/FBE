//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

@file:Suppress("UnusedImport", "unused")

package com.chronoxor.test.fbe

// Fast Binary Encoding test JSON engine
object Json
{
    // Get the JSON engine
    val engine: com.google.gson.Gson = register(com.google.gson.GsonBuilder()).create()

    @Suppress("MemberVisibilityCanBePrivate")
    fun register(builder: com.google.gson.GsonBuilder): com.google.gson.GsonBuilder
    {
        com.chronoxor.fbe.Json.register(builder)
        com.chronoxor.proto.fbe.Json.register(builder)
        builder.registerTypeAdapter(com.chronoxor.test.EnumSimple::class.java, EnumSimpleJson())
        builder.registerTypeAdapter(com.chronoxor.test.EnumTyped::class.java, EnumTypedJson())
        builder.registerTypeAdapter(com.chronoxor.test.EnumEmpty::class.java, EnumEmptyJson())
        builder.registerTypeAdapter(com.chronoxor.test.FlagsSimple::class.java, FlagsSimpleJson())
        builder.registerTypeAdapter(com.chronoxor.test.FlagsTyped::class.java, FlagsTypedJson())
        builder.registerTypeAdapter(com.chronoxor.test.FlagsEmpty::class.java, FlagsEmptyJson())
        return builder
    }
}
