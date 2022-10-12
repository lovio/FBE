//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

package fbe

import "errors"

// Fast Binary Encoding WChar final model
type FinalModelWChar struct {
    // Final model buffer
    buffer *Buffer
    // Final model buffer offset
    offset int
}

// Create a new WChar final model
func NewFinalModelWChar(buffer *Buffer, offset int) *FinalModelWChar {
    return &FinalModelWChar{buffer: buffer, offset: offset}
}

// Get the allocation size
func (fm *FinalModelWChar) FBEAllocationSize(value rune) int { return fm.FBESize() }

// Get the final size
func (fm *FinalModelWChar) FBESize() int { return 4 }

// Get the final offset
func (fm *FinalModelWChar) FBEOffset() int { return fm.offset }
// Set the final offset
func (fm *FinalModelWChar) SetFBEOffset(value int) { fm.offset = value }

// Shift the current final offset
func (fm *FinalModelWChar) FBEShift(size int) { fm.offset += size }
// Unshift the current final offset
func (fm *FinalModelWChar) FBEUnshift(size int) { fm.offset -= size }

// Check if the value is valid
func (fm *FinalModelWChar) Verify() int {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return MaxInt
    }

    return fm.FBESize()
}

// Get the value
func (fm *FinalModelWChar) Get() (rune, int, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return '\000', 0, errors.New("model is broken")
    }

    return ReadWChar(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset()), fm.FBESize(), nil
}

// Set the value
func (fm *FinalModelWChar) Set(value rune) (int, error) {
    if (fm.buffer.Offset() + fm.FBEOffset() + fm.FBESize()) > fm.buffer.Size() {
        return 0, errors.New("model is broken")
    }

    WriteWChar(fm.buffer.Data(), fm.buffer.Offset() + fm.FBEOffset(), value)
    return fm.FBESize(), nil
}
