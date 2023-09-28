//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants_ptr.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

package variants_ptr

import "fmt"
import "strconv"
import "strings"
import "errors"
import "fbeproj/proto/fbe"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version

// Workaround for Go unused imports issue
var _ = fmt.Print
var _ = strconv.FormatInt

// ExprContainer key
type ExprContainerKey struct {
}

// Convert ExprContainer flags key to string
func (k *ExprContainerKey) String() string {
    var sb strings.Builder
    sb.WriteString("ExprContainerKey(")
    sb.WriteString(")")
    return sb.String()
}

// ExprContainer struct
type ExprContainer struct {
    E Expr `json:"e"`
    Eo *Expr `json:"eo"`
    So *Simple `json:"so"`
}

// Create a new ExprContainer struct
func NewExprContainer() *ExprContainer {
    return &ExprContainer{
        E: NewExpr(),
        Eo: nil,
        So: nil,
    }
}

// Create a new ExprContainer struct from the given field values
func NewExprContainerFromFieldValues(eV Expr, eoV *Expr, soV *Simple) *ExprContainer {
    return &ExprContainer{eV, eoV, soV}
}

// Create a new ExprContainer struct from JSON
func NewExprContainerFromJSON(buffer []byte) (*ExprContainer, error) {
    result := *NewExprContainer()
    err := fbe.Json.Unmarshal(buffer, &result)
    if err != nil {
        return nil, err
    }
    return &result, nil
}

// Struct shallow copy
func (s *ExprContainer) Copy() *ExprContainer {
    var result = *s
    return &result
}

// Struct deep clone
func (s *ExprContainer) Clone() *ExprContainer {
    // Serialize the struct to the FBE stream
    writer := NewExprContainerModel(fbe.NewEmptyBuffer())
    _, _ = writer.Serialize(s)

    // Deserialize the struct from the FBE stream
    reader := NewExprContainerModel(writer.Buffer())
    result, _, _ := reader.Deserialize()
    return result
}

// Get the struct key
func (s *ExprContainer) Key() ExprContainerKey {
    return ExprContainerKey{
    }
}

// Convert struct to optional
func (s *ExprContainer) Optional() *ExprContainer {
    return s
}

// Convert struct to optional
func (s *ExprContainer) Ptr() *ExprContainer {
    return s
}

// Get the FBE type
func (s *ExprContainer) FBEType() int { return 2 }

// Convert struct to string
func (s *ExprContainer) String() string {
    var sb strings.Builder
    sb.WriteString("ExprContainer(")
    sb.WriteString("e=")
    sb.WriteString("*variant Expr*")
    sb.WriteString("eo=")
    sb.WriteString("*variant Expr*")
    sb.WriteString("so=")
    if s.So != nil { 
        sb.WriteString(s.So.String())
    } else {
        sb.WriteString("null")
    }
    sb.WriteString(")")
    return sb.String()
}

// Convert struct to JSON
func (s *ExprContainer) JSON() ([]byte, error) {
    return fbe.Json.Marshal(s)
}
