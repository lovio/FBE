//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: variants.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

package variants

import "fmt"
import "strconv"
// import "strings"
import "errors"
import "fbeproj/proto/fbe"

// Workaround for Go unused imports issue
var _ = errors.New
var _ = fbe.Version

// Workaround for Go unused imports issue
var _ = fmt.Print
var _ = strconv.FormatInt

// type Expr interface{}
type Expr interface{}
// List of Expr types
// bool
// int32
// string

// Create a new Expr variant
func NewExpr() Expr {
    return true
}

// Create a new Expr variant from the given value
func NewExprFromValue(value Expr) Expr {
    return value
}

// Get the variant index
func GetExprIndex() int {
    return 0
}