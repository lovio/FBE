//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: proto.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

package proto

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

// PremiumAccount key
type PremiumAccountKey struct {
    Id int32
}

// Convert PremiumAccount flags key to string
func (k *PremiumAccountKey) String() string {
    var sb strings.Builder
    sb.WriteString("PremiumAccountKey(")
    sb.WriteString("id=")
    sb.WriteString(strconv.FormatInt(int64(k.Id), 10))
    sb.WriteString(")")
    return sb.String()
}

// PremiumAccount struct
type PremiumAccount struct {
    Id int32 `json:"id"`
    Name string `json:"name"`
    Info string `json:"info"`
    Private_wallet Balance `json:"private_wallet"`
    Private_orders []Order `json:"private_orders"`
    Private_state State `json:"private_state"`
}

// Create a new PremiumAccount struct
func NewPremiumAccount() *PremiumAccount {
    return &PremiumAccount{
        Id: 0,
        Name: "",
        Info: "",
        Private_wallet: *NewBalance(),
        Private_orders: make([]Order, 0),
        Private_state: State_bad,
    }
}

// Create a new PremiumAccount struct from the given field values
func NewPremiumAccountFromFieldValues(idV int32, nameV string, infoV string, private_walletV Balance, private_ordersV []Order, private_stateV State) *PremiumAccount {
    return &PremiumAccount{idV, nameV, infoV, private_walletV, private_ordersV, private_stateV}
}

// Create a new PremiumAccount struct from JSON
func NewPremiumAccountFromJSON(buffer []byte) (*PremiumAccount, error) {
    result := *NewPremiumAccount()
    err := fbe.Json.Unmarshal(buffer, &result)
    if err != nil {
        return nil, err
    }
    return &result, nil
}

// Struct shallow copy
func (s *PremiumAccount) Copy() *PremiumAccount {
    var result = *s
    return &result
}

// Struct deep clone
func (s *PremiumAccount) Clone() *PremiumAccount {
    // Serialize the struct to the FBE stream
    writer := NewPremiumAccountModel(fbe.NewEmptyBuffer())
    _, _ = writer.Serialize(s)

    // Deserialize the struct from the FBE stream
    reader := NewPremiumAccountModel(writer.Buffer())
    result, _, _ := reader.Deserialize()
    return result
}

// Get the struct key
func (s *PremiumAccount) Key() PremiumAccountKey {
    return PremiumAccountKey{
        Id: s.Id,
    }
}

// Convert struct to optional
func (s *PremiumAccount) Optional() *PremiumAccount {
    return s
}

// Convert struct to optional
func (s *PremiumAccount) Ptr() *PremiumAccount {
    return s
}

// Get the FBE type
func (s *PremiumAccount) FBEType() int { return 5 }

// Convert struct to string
func (s *PremiumAccount) String() string {
    var sb strings.Builder
    sb.WriteString("PremiumAccount(")
    sb.WriteString("id=")
    sb.WriteString(strconv.FormatInt(int64(s.Id), 10))
    sb.WriteString(",name=")
    sb.WriteString("\"" + s.Name + "\"")
    sb.WriteString(",info=")
    sb.WriteString("\"" + s.Info + "\"")
    sb.WriteString(",private_wallet=")
    sb.WriteString(s.Private_wallet.String())
    sb.WriteString(",private_orders=")
    if s.Private_orders != nil {
        first := true
        sb.WriteString("[" + strconv.FormatInt(int64(len(s.Private_orders)), 10) + "][")
        for _, v := range s.Private_orders {
            if first { sb.WriteString("") } else { sb.WriteString(",") }
            sb.WriteString(v.String())
            first = false
        }
        sb.WriteString("]")
    } else {
        sb.WriteString(",private_orders=[0][]")
    }
    sb.WriteString(",private_state=")
    sb.WriteString(s.Private_state.String())
    sb.WriteString(")")
    return sb.String()
}

// Convert struct to JSON
func (s *PremiumAccount) JSON() ([]byte, error) {
    return fbe.Json.Marshal(s)
}