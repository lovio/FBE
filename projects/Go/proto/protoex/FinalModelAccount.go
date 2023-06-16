//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: protoex.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

package protoex

import "errors"
import "fbeproj/proto/fbe"
import "fbeproj/proto/proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Fast Binary Encoding Account final model
type FinalModelAccount struct {
    buffer *fbe.Buffer  // Final model buffer
    offset int          // Final model buffer offset

    Id *fbe.FinalModelInt32
    Name *fbe.FinalModelString
    State *FinalModelStateEx
    Wallet *FinalModelBalance
    Asset *FinalModelOptionalBalance
    Orders *FinalModelVectorOrder
}

// Create a new Account final model
func NewFinalModelAccount(buffer *fbe.Buffer, offset int) *FinalModelAccount {
    fbeResult := FinalModelAccount{buffer: buffer, offset: offset}
    fbeResult.Id = fbe.NewFinalModelInt32(buffer, 0)
    fbeResult.Name = fbe.NewFinalModelString(buffer, 0)
    fbeResult.State = NewFinalModelStateEx(buffer, 0)
    fbeResult.Wallet = NewFinalModelBalance(buffer, 0)
    fbeResult.Asset = NewFinalModelOptionalBalance(buffer, 0)
    fbeResult.Orders = NewFinalModelVectorOrder(buffer, 0)
    return &fbeResult
}

// Get the allocation size
func (fm *FinalModelAccount) FBEAllocationSize(fbeValue *Account) int {
    fbeResult := 0 +
        fm.Id.FBEAllocationSize(fbeValue.Id) +
        fm.Name.FBEAllocationSize(fbeValue.Name) +
        fm.State.FBEAllocationSize(&fbeValue.State) +
        fm.Wallet.FBEAllocationSize(&fbeValue.Wallet) +
        fm.Asset.FBEAllocationSize(fbeValue.Asset) +
        fm.Orders.FBEAllocationSize(fbeValue.Orders) +
        0
    return fbeResult
}

// Get the final size
func (fm *FinalModelAccount) FBESize() int { return 0 }

// Get the final extra size
func (fm *FinalModelAccount) FBEExtra() int { return 0 }

// Get the final type
func (fm *FinalModelAccount) FBEType() int { return 3 }

// Get the final offset
func (fm *FinalModelAccount) FBEOffset() int { return fm.offset }
// Set the final offset
func (fm *FinalModelAccount) SetFBEOffset(value int) { fm.offset = value }

// Shift the current final offset
func (fm *FinalModelAccount) FBEShift(size int) { fm.offset += size }
// Unshift the current final offset
func (fm *FinalModelAccount) FBEUnshift(size int) { fm.offset -= size }

// Check if the struct value is valid
func (fm *FinalModelAccount) Verify() int {
    fm.buffer.Shift(fm.FBEOffset())
    fbeResult := fm.VerifyFields()
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeResult
}

// Check if the struct fields are valid
func (fm *FinalModelAccount) VerifyFields() int {
    fbeCurrentOffset := 0
    fbeFieldSize := 0


    fm.Id.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.Id.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.Name.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.Name.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.State.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.State.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.Wallet.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.Wallet.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.Asset.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.Asset.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    fm.Orders.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize = fm.Orders.Verify(); fbeFieldSize == fbe.MaxInt {
        return fbe.MaxInt
    }
    fbeCurrentOffset += fbeFieldSize

    return fbeCurrentOffset
}

// Get the struct value
func (fm *FinalModelAccount) Get() (*Account, int, error) {
    fbeResult := NewAccount()
    fbeSize, err := fm.GetValue(fbeResult)
    return fbeResult, fbeSize, err
}

// Get the struct value by the given pointer
func (fm *FinalModelAccount) GetValue(fbeValue *Account) (int, error) {
    fm.buffer.Shift(fm.FBEOffset())
    fbeSize, err := fm.GetFields(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeSize, err
}

// Get the struct fields values
func (fm *FinalModelAccount) GetFields(fbeValue *Account) (int, error) {
    var err error = nil
    fbeCurrentSize := 0
    fbeCurrentOffset := 0
    fbeFieldSize := 0

    fm.Id.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.Id, fbeFieldSize, err = fm.Id.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.Name.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.Name, fbeFieldSize, err = fm.Name.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.State.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.State.GetValue(&fbeValue.State); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.Wallet.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.Wallet.GetValue(&fbeValue.Wallet); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.Asset.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.Asset, fbeFieldSize, err = fm.Asset.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.Orders.SetFBEOffset(fbeCurrentOffset)
    if fbeValue.Orders, fbeFieldSize, err = fm.Orders.Get(); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    return fbeCurrentSize, err
}

// Set the struct value
func (fm *FinalModelAccount) Set(fbeValue *Account) (int, error) {
    fm.buffer.Shift(fm.FBEOffset())
    fbeResult, err := fm.SetFields(fbeValue)
    fm.buffer.Unshift(fm.FBEOffset())
    return fbeResult, err
}

// Set the struct fields values
func (fm *FinalModelAccount) SetFields(fbeValue *Account) (int, error) {
    var err error = nil
    fbeCurrentSize := 0
    fbeCurrentOffset := 0
    fbeFieldSize := 0

    fm.Id.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.Id.Set(fbeValue.Id); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.Name.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.Name.Set(fbeValue.Name); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.State.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.State.Set(&fbeValue.State); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.Wallet.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.Wallet.Set(&fbeValue.Wallet); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.Asset.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.Asset.Set(fbeValue.Asset); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    fm.Orders.SetFBEOffset(fbeCurrentOffset)
    if fbeFieldSize, err = fm.Orders.Set(fbeValue.Orders); err != nil {
        return fbeCurrentSize, err
    }
    fbeCurrentOffset += fbeFieldSize
    fbeCurrentSize += fbeFieldSize

    return fbeCurrentSize, err
}
