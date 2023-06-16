//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

package variants

import "errors"
import "fbeproj/proto/fbe"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version

// Fast Binary Encoding variants proxy
type Proxy struct {
    *fbe.Receiver

}

// Create a new variants proxy with an empty buffer
func NewProxy() *Proxy {
    return NewProxyWithBuffer(fbe.NewEmptyBuffer())
}

// Create a new variants proxy with the given buffer
func NewProxyWithBuffer(buffer *fbe.Buffer) *Proxy {
    proxy := &Proxy{
        fbe.NewReceiver(buffer, false),
    }
    proxy.SetupHandlerOnReceive(proxy)
    return proxy
}

// Setup handlers
func (p *Proxy) SetupHandlers(handlers interface{}) {
    p.Receiver.SetupHandlers(handlers)
}


// Receive message handler
func (p *Proxy) OnReceive(fbeType int, buffer []byte) (bool, error) {
    switch fbeType {
    default:
        _ = fbeType
        break
    }

    return false, nil
}
