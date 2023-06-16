//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

package proto

import "errors"
import "fbeproj/proto/fbe"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version

// Fast Binary Encoding OrderMessage model
type OrderMessageModel struct {
    // Model buffer
    buffer *fbe.Buffer

    // Field model
    model *FieldModelOrderMessage
}

// Create a new OrderMessage model
func NewOrderMessageModel(buffer *fbe.Buffer) *OrderMessageModel {
    return &OrderMessageModel{buffer: buffer, model: NewFieldModelOrderMessage(buffer, 4)}
}

// Get the model buffer
func (m *OrderMessageModel) Buffer() *fbe.Buffer { return m.buffer }
// Get the field model
func (m *OrderMessageModel) Model() *FieldModelOrderMessage { return m.model }

// Get the model size
func (m *OrderMessageModel) FBESize() int { return m.model.FBESize() + m.model.FBEExtra() }
// // Get the model type
func (m *OrderMessageModel) FBEType() int { return m.model.FBEType() }

// Check if the struct value is valid
func (m *OrderMessageModel) Verify() bool {
    if (m.buffer.Offset() + m.model.FBEOffset() - 4) > m.buffer.Size() {
        return false
    }

    fbeFullSize := int(fbe.ReadUInt32(m.buffer.Data(), m.buffer.Offset() + m.model.FBEOffset() - 4))
    if fbeFullSize < m.model.FBESize() {
        return false
    }

    return m.model.Verify()
}

// Create a new model (begin phase)
func (m *OrderMessageModel) CreateBegin() int {
    fbeBegin := m.buffer.Allocate(4 + m.model.FBESize())
    return fbeBegin
}

// Create a new model (end phase)
func (m *OrderMessageModel) CreateEnd(fbeBegin int) int {
    fbeEnd := m.buffer.Size()
    fbeFullSize := fbeEnd - fbeBegin
    fbe.WriteUInt32(m.buffer.Data(), m.buffer.Offset() + m.model.FBEOffset() - 4, uint32(fbeFullSize))
    return fbeFullSize
}

// Serialize the struct value
func (m *OrderMessageModel) Serialize(value *OrderMessage) (int, error) {
    fbeBegin := m.CreateBegin()
    err := m.model.Set(value)
    fbeFullSize := m.CreateEnd(fbeBegin)
    return fbeFullSize, err
}

// Deserialize the struct value
func (m *OrderMessageModel) Deserialize() (*OrderMessage, int, error) {
    value := NewOrderMessage()
    fbeFullSize, err := m.DeserializeValue(value)
    return value, fbeFullSize, err
}

// Deserialize the struct value by the given pointer
func (m *OrderMessageModel) DeserializeValue(value *OrderMessage) (int, error) {
    if (m.buffer.Offset() + m.model.FBEOffset() - 4) > m.buffer.Size() {
        value = NewOrderMessage()
        return 0, nil
    }

    fbeFullSize := int(fbe.ReadUInt32(m.buffer.Data(), m.buffer.Offset() + m.model.FBEOffset() - 4))
    if fbeFullSize < m.model.FBESize() {
        value = NewOrderMessage()
        return 0, errors.New("model is broken")
    }

    err := m.model.GetValue(value)
    return fbeFullSize, err
}

// Move to the next struct value
func (m *OrderMessageModel) Next(prev int) {
    m.model.FBEShift(prev)
}
