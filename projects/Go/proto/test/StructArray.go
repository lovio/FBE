//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

package test

import "fmt"
import "strconv"
import "strings"
import "errors"
import "fbeproj/proto/fbe"
import "fbeproj/proto/proto"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version
var _ = proto.Version

// Workaround for Go unused imports issue
var _ = fmt.Print
var _ = strconv.FormatInt

// StructArray key
type StructArrayKey struct {
}

// Convert StructArray flags key to string
func (k *StructArrayKey) String() string {
    var sb strings.Builder
    sb.WriteString("StructArrayKey(")
    sb.WriteString(")")
    return sb.String()
}

// StructArray struct
type StructArray struct {
    F1 [2]byte `json:"f1"`
    F2 [2]*byte `json:"f2"`
    F3 [2][]byte `json:"f3"`
    F4 [2]*[]byte `json:"f4"`
    F5 [2]EnumSimple `json:"f5"`
    F6 [2]*EnumSimple `json:"f6"`
    F7 [2]FlagsSimple `json:"f7"`
    F8 [2]*FlagsSimple `json:"f8"`
    F9 [2]StructSimple `json:"f9"`
    F10 [2]*StructSimple `json:"f10"`
}

// Create a new StructArray struct
func NewStructArray() *StructArray {
    return &StructArray{
        F1: [2]byte{},
        F2: [2]*byte{},
        F3: [2][]byte{},
        F4: [2]*[]byte{},
        F5: [2]EnumSimple{},
        F6: [2]*EnumSimple{},
        F7: [2]FlagsSimple{},
        F8: [2]*FlagsSimple{},
        F9: [2]StructSimple{},
        F10: [2]*StructSimple{},
    }
}

// Create a new StructArray struct from the given field values
func NewStructArrayFromFieldValues(f1V [2]byte, f2V [2]*byte, f3V [2][]byte, f4V [2]*[]byte, f5V [2]EnumSimple, f6V [2]*EnumSimple, f7V [2]FlagsSimple, f8V [2]*FlagsSimple, f9V [2]StructSimple, f10V [2]*StructSimple) *StructArray {
    return &StructArray{f1V, f2V, f3V, f4V, f5V, f6V, f7V, f8V, f9V, f10V}
}

// Create a new StructArray struct from JSON
func NewStructArrayFromJSON(buffer []byte) (*StructArray, error) {
    result := *NewStructArray()
    err := fbe.Json.Unmarshal(buffer, &result)
    if err != nil {
        return nil, err
    }
    return &result, nil
}

// Struct shallow copy
func (s *StructArray) Copy() *StructArray {
    var result = *s
    return &result
}

// Struct deep clone
func (s *StructArray) Clone() *StructArray {
    // Serialize the struct to the FBE stream
    writer := NewStructArrayFinalModel(fbe.NewEmptyBuffer())
    _, _ = writer.Serialize(s)

    // Deserialize the struct from the FBE stream
    reader := NewStructArrayFinalModel(writer.Buffer())
    result, _, _ := reader.Deserialize()
    return result
}

// Get the struct key
func (s *StructArray) Key() StructArrayKey {
    return StructArrayKey{
    }
}

// Convert struct to optional
func (s *StructArray) Optional() *StructArray {
    return s
}

// Convert struct to optional
func (s *StructArray) Ptr() *StructArray {
    return s
}

// Get the FBE type
func (s *StructArray) FBEType() int { return 125 }

// Convert struct to string
func (s *StructArray) String() string {
    var sb strings.Builder
    sb.WriteString("StructArray(")
    sb.WriteString("f1=")
    if true {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F1)), 10) + "][")
        for _, v := range s.F1 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString(strconv.FormatUint(uint64(v), 10))
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString("f1=[0][]")
    }
    sb.WriteString(",f2=")
    if true {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F2)), 10) + "][")
        for _, v := range s.F2 {
            if v != nil { 
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString(strconv.FormatUint(uint64(*v), 10))
            } else {
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString(",f2=[0][]")
    }
    sb.WriteString(",f3=")
    if true {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F3)), 10) + "][")
        for _, v := range s.F3 {
            if v != nil { 
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString("bytes[" + strconv.FormatInt(int64(len(v)), 10) + "]")
            } else {
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString(",f3=[0][]")
    }
    sb.WriteString(",f4=")
    if true {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F4)), 10) + "][")
        for _, v := range s.F4 {
            if v != nil { 
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString("bytes[" + strconv.FormatInt(int64(len(*v)), 10) + "]")
            } else {
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString(",f4=[0][]")
    }
    sb.WriteString(",f5=")
    if true {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F5)), 10) + "][")
        for _, v := range s.F5 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString(v.String())
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString(",f5=[0][]")
    }
    sb.WriteString(",f6=")
    if true {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F6)), 10) + "][")
        for _, v := range s.F6 {
            if v != nil { 
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString(v.String())
            } else {
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString(",f6=[0][]")
    }
    sb.WriteString(",f7=")
    if true {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F7)), 10) + "][")
        for _, v := range s.F7 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString(v.String())
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString(",f7=[0][]")
    }
    sb.WriteString(",f8=")
    if true {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F8)), 10) + "][")
        for _, v := range s.F8 {
            if v != nil { 
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString(v.String())
            } else {
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString(",f8=[0][]")
    }
    sb.WriteString(",f9=")
    if true {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F9)), 10) + "][")
        for _, v := range s.F9 {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString(v.String())
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString(",f9=[0][]")
    }
    sb.WriteString(",f10=")
    if true {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.F10)), 10) + "][")
        for _, v := range s.F10 {
            if v != nil { 
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString(v.String())
            } else {
                if first { sb.WriteString("") } else { sb.WriteString(",") }
                sb.WriteString("null")
            }
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString(",f10=[0][]")
    }
    sb.WriteString(")")
    return sb.String()
}

// Convert struct to JSON
func (s *StructArray) JSON() ([]byte, error) {
    return fbe.Json.Marshal(s)
}
