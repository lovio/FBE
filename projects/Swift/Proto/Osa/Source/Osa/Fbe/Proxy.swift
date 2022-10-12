//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: osa.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

import Foundation
import Fbe

// Fast Binary Encoding Osa proxy
open class Proxy: Fbe.ReceiverProtocol {
    // Proxy models accessors

    public var buffer: Buffer = Buffer()
    public var final: Bool = false

    public init() {
        build(final: false)
    }

    public init(buffer: Fbe.Buffer) {
        build(with: buffer, final: false)
    }

    open func onReceive(type: Int, buffer: Data, offset: Int, size: Int) -> Bool {
        guard let listener = self as? ProxyListener else { return false }
        return onReceiveListener(listener: listener, type: type, buffer: buffer, offset: offset, size: size)
    }

    open func onReceiveListener(listener: ProxyListener, type: Int, buffer: Data, offset: Int, size: Int) -> Bool {

        return false
    }
}
