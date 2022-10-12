//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package variants

import "errors"
import "../fbe"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version

// Fast Binary Encoding variants receiver
type Receiver struct {
    *fbe.Receiver

}

// Create a new variants receiver with an empty buffer
func NewReceiver() *Receiver {
    return NewReceiverWithBuffer(fbe.NewEmptyBuffer())
}

// Create a new variants receiver with the given buffer
func NewReceiverWithBuffer(buffer *fbe.Buffer) *Receiver {
    receiver := &Receiver{
        fbe.NewReceiver(buffer, false),
    }
    receiver.SetupHandlerOnReceive(receiver)
    return receiver
}

// Setup handlers
func (r *Receiver) SetupHandlers(handlers interface{}) {
    r.Receiver.SetupHandlers(handlers)
}


// Receive message handler
func (r *Receiver) OnReceive(fbeType int, buffer []byte) (bool, error) {
    switch fbeType {
    default:
        _ = fbeType
        break
    }

    return false, nil
}
