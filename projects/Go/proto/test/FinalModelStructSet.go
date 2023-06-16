//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

package test

import "errors"
import "fbeproj/proto/fbe"
import "fbeproj/proto/proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Fast Binary Encoding StructSet final model
type FinalModelStructSet struct {
    buffer *fbe.Buffer  // Final model buffer
    offset int          // Final model buffer offset

    F1 *FinalModelSetByte
    F2 *FinalModelSetEnumSimple
    F3 *FinalModelSetFlagsSimple
    F4 *FinalModelSetStructSimple
}

// Create a new StructSet final model
func NewFinalModelStructSet(buffer *fbe.Buffer, offset int) *FinalModelStructSet {
    fbeResult := FinalModelStructSet{buffer: buffer, offset: offset}
    fbeResult.F1 = NewFinalModelSetByte(buffer, 0)
    fbeResult.F2 = NewFinalModelSetEnumSimple(buffer, 0)
    fbeResult.F3 = NewFinalModelSetFlagsSimple(buffer, 0)
    fbeResult.F4 = NewFinalModelSetStructSimple(buffer, 0)
    return &fbeResult
}

// Get the allocation size
func (fm *FinalModelStructSet) FBEAllocationSize(fbeValue *StructSet) int {
    fbeResult := 0 +
        fm.F1.FBEAllocationSize(fbeValue.F1) +
        fm.F2.FBEAllocationSize(fbeValue.F2) +
        fm.F3.FBEAllocationSize(fbeValue.F3) +
        fm.F4.FBEAllocationSize(fbeValue.F4) +
        0
    return fbeResult
}

// Get the final size
func (fm *FinalModelStructSet) FBESize() int { return 0 }

// Get the final extra size
func (fm *FinalModelStructSet) FBEExtra() int { return 0 }

// Get the final type
func (fm *FinalModelStructSet) FBEType() int { return 132 }

// Get the final offset
func (fm *FinalModelStructSet) FBEOffset() int { return fm.offset }
// Set the final offset
func (fm *FinalModelStructSet) SetFBEOffset(value int) { fm.offset = value }

// Shift the current final offset
func (fm *FinalModelStructSet) FBEShift(size int) { fm.offset += size }
// Unshift the current final offset
func (fm *FinalModelStructSet) FBEUnshift(size int) { fm.offset -= size }

// Check if the struct value is valid
func (fm *FinalModelStructSet) Verify() int {
    fm.buffer.Shift(fm.FBEOffset())
    fbeResult := fm.VerifyFields()
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeResult
}

// Check if the struct fields are valid
func (fm *FinalModelStructSet) VerifyFields() int {
    fbeCurrentOffset := 0
    fbeFieldSize := 0


    fm.F1.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F1.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F2.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F2.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F3.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F3.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.F4.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.F4.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    return fbeCurrentOffset
}

// Get the struct value
func (fm *FinalModelStructSet) Get() (*StructSet, int, error) {
    fbeResult := NewStructSet()
    fbeSize, err := fm.GetValue(fbeResult)
    return fbeResult, fbeSize, err
}

// Get the struct value by the given pointer
func (fm *FinalModelStructSet) GetValue(fbeValue *StructSet) (int, error) {
    fm.buffer.Shift(fm.FBEOffset())
    fbeSize, err := fm.GetFields(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeSize, err
}

// Get the struct fields values
func (fm *FinalModelStructSet) GetFields(fbeValue *StructSet) (int, error) {
    var err error = nil
    fbeCurrentSize := 0
    fbeCurrentOffset := 0
    fbeFieldSize := 0

    fm.F1.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F1, fbeFieldSize, err = fm.F1.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F2.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F2, fbeFieldSize, err = fm.F2.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F3.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F3, fbeFieldSize, err = fm.F3.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F4.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.F4, fbeFieldSize, err = fm.F4.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    return fbeCurrentSize, err
}

// Set the struct value
func (fm *FinalModelStructSet) Set(fbeValue *StructSet) (int, error) {
    fm.buffer.Shift(fm.FBEOffset())
    fbeResult, err := fm.SetFields(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeResult, err
}

// Set the struct fields values
func (fm *FinalModelStructSet) SetFields(fbeValue *StructSet) (int, error) {
    var err error = nil
    fbeCurrentSize := 0
    fbeCurrentOffset := 0
    fbeFieldSize := 0

    fm.F1.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F1.Set(fbeValue.F1); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F2.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F2.Set(fbeValue.F2); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F3.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F3.Set(fbeValue.F3); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.F4.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.F4.Set(fbeValue.F4); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    return fbeCurrentSize, err
}
