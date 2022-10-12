//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: test.fbe
// FBE version: 1.10.0.0
//------------------------------------------------------------------------------

import Foundation
import ChronoxorFbe
import ChronoxorProto

public protocol StructSimpleBase {
    var id: Int32 { get set }
    var f1: Bool { get set }
    var f2: Bool { get set }
    var f3: UInt8 { get set }
    var f4: UInt8 { get set }
    var f5: Character { get set }
    var f6: Character { get set }
    var f7: Character { get set }
    var f8: Character { get set }
    var f9: Int8 { get set }
    var f10: Int8 { get set }
    var f11: UInt8 { get set }
    var f12: UInt8 { get set }
    var f13: Int16 { get set }
    var f14: Int16 { get set }
    var f15: UInt16 { get set }
    var f16: UInt16 { get set }
    var f17: Int32 { get set }
    var f18: Int32 { get set }
    var f19: UInt32 { get set }
    var f20: UInt32 { get set }
    var f21: Int64 { get set }
    var f22: Int64 { get set }
    var f23: UInt64 { get set }
    var f24: UInt64 { get set }
    var f25: Float { get set }
    var f26: Float { get set }
    var f27: Double { get set }
    var f28: Double { get set }
    var f29: Decimal { get set }
    var f30: Decimal { get set }
    var f31: String { get set }
    var f32: String { get set }
    var f33: Date { get set }
    var f34: Date { get set }
    var f35: Date { get set }
    var f36: UUID { get set }
    var f37: UUID { get set }
    var f38: UUID { get set }
    var f39: ChronoxorProto.OrderSide { get set }
    var f40: ChronoxorProto.OrderType { get set }
    var f41: ChronoxorProto.Order { get set }
    var f42: ChronoxorProto.Balance { get set }
    var f43: ChronoxorProto.State { get set }
    var f44: ChronoxorProto.Account { get set }
}

public protocol StructSimpleInheritance {
    var parent: StructSimple { get set }
}

extension StructSimpleInheritance {
    public var id: Int32 {
        get { return parent.id }
        set { parent.id = newValue }
    }
    public var f1: Bool {
        get { return parent.f1 }
        set { parent.f1 = newValue }
    }
    public var f2: Bool {
        get { return parent.f2 }
        set { parent.f2 = newValue }
    }
    public var f3: UInt8 {
        get { return parent.f3 }
        set { parent.f3 = newValue }
    }
    public var f4: UInt8 {
        get { return parent.f4 }
        set { parent.f4 = newValue }
    }
    public var f5: Character {
        get { return parent.f5 }
        set { parent.f5 = newValue }
    }
    public var f6: Character {
        get { return parent.f6 }
        set { parent.f6 = newValue }
    }
    public var f7: Character {
        get { return parent.f7 }
        set { parent.f7 = newValue }
    }
    public var f8: Character {
        get { return parent.f8 }
        set { parent.f8 = newValue }
    }
    public var f9: Int8 {
        get { return parent.f9 }
        set { parent.f9 = newValue }
    }
    public var f10: Int8 {
        get { return parent.f10 }
        set { parent.f10 = newValue }
    }
    public var f11: UInt8 {
        get { return parent.f11 }
        set { parent.f11 = newValue }
    }
    public var f12: UInt8 {
        get { return parent.f12 }
        set { parent.f12 = newValue }
    }
    public var f13: Int16 {
        get { return parent.f13 }
        set { parent.f13 = newValue }
    }
    public var f14: Int16 {
        get { return parent.f14 }
        set { parent.f14 = newValue }
    }
    public var f15: UInt16 {
        get { return parent.f15 }
        set { parent.f15 = newValue }
    }
    public var f16: UInt16 {
        get { return parent.f16 }
        set { parent.f16 = newValue }
    }
    public var f17: Int32 {
        get { return parent.f17 }
        set { parent.f17 = newValue }
    }
    public var f18: Int32 {
        get { return parent.f18 }
        set { parent.f18 = newValue }
    }
    public var f19: UInt32 {
        get { return parent.f19 }
        set { parent.f19 = newValue }
    }
    public var f20: UInt32 {
        get { return parent.f20 }
        set { parent.f20 = newValue }
    }
    public var f21: Int64 {
        get { return parent.f21 }
        set { parent.f21 = newValue }
    }
    public var f22: Int64 {
        get { return parent.f22 }
        set { parent.f22 = newValue }
    }
    public var f23: UInt64 {
        get { return parent.f23 }
        set { parent.f23 = newValue }
    }
    public var f24: UInt64 {
        get { return parent.f24 }
        set { parent.f24 = newValue }
    }
    public var f25: Float {
        get { return parent.f25 }
        set { parent.f25 = newValue }
    }
    public var f26: Float {
        get { return parent.f26 }
        set { parent.f26 = newValue }
    }
    public var f27: Double {
        get { return parent.f27 }
        set { parent.f27 = newValue }
    }
    public var f28: Double {
        get { return parent.f28 }
        set { parent.f28 = newValue }
    }
    public var f29: Decimal {
        get { return parent.f29 }
        set { parent.f29 = newValue }
    }
    public var f30: Decimal {
        get { return parent.f30 }
        set { parent.f30 = newValue }
    }
    public var f31: String {
        get { return parent.f31 }
        set { parent.f31 = newValue }
    }
    public var f32: String {
        get { return parent.f32 }
        set { parent.f32 = newValue }
    }
    public var f33: Date {
        get { return parent.f33 }
        set { parent.f33 = newValue }
    }
    public var f34: Date {
        get { return parent.f34 }
        set { parent.f34 = newValue }
    }
    public var f35: Date {
        get { return parent.f35 }
        set { parent.f35 = newValue }
    }
    public var f36: UUID {
        get { return parent.f36 }
        set { parent.f36 = newValue }
    }
    public var f37: UUID {
        get { return parent.f37 }
        set { parent.f37 = newValue }
    }
    public var f38: UUID {
        get { return parent.f38 }
        set { parent.f38 = newValue }
    }
    public var f39: ChronoxorProto.OrderSide {
        get { return parent.f39 }
        set { parent.f39 = newValue }
    }
    public var f40: ChronoxorProto.OrderType {
        get { return parent.f40 }
        set { parent.f40 = newValue }
    }
    public var f41: ChronoxorProto.Order {
        get { return parent.f41 }
        set { parent.f41 = newValue }
    }
    public var f42: ChronoxorProto.Balance {
        get { return parent.f42 }
        set { parent.f42 = newValue }
    }
    public var f43: ChronoxorProto.State {
        get { return parent.f43 }
        set { parent.f43 = newValue }
    }
    public var f44: ChronoxorProto.Account {
        get { return parent.f44 }
        set { parent.f44 = newValue }
    }
}

public struct StructSimple: StructSimpleBase, Comparable, Hashable, Codable {
    public var id: Int32 = 0
    public var f1: Bool = false
    public var f2: Bool = true
    public var f3: UInt8 = 0
    public var f4: UInt8 = 0xFF
    public var f5: Character = "\0"
    public var f6: Character = "!"
    public var f7: Character = Character(UnicodeScalar(0)!)
    public var f8: Character = Character(UnicodeScalar(0x0444)!)
    public var f9: Int8 = 0
    public var f10: Int8 = Int8.max
    public var f11: UInt8 = UInt8.min
    public var f12: UInt8 = UInt8.max
    public var f13: Int16 = 0
    public var f14: Int16 = Int16.max
    public var f15: UInt16 = UInt16.min
    public var f16: UInt16 = UInt16.max
    public var f17: Int32 = 0
    public var f18: Int32 = Int32.max
    public var f19: UInt32 = UInt32.min
    public var f20: UInt32 = UInt32.max
    public var f21: Int64 = 0
    public var f22: Int64 = Int64.max
    public var f23: UInt64 = UInt64.min
    public var f24: UInt64 = UInt64.max
    public var f25: Float = 0.0
    public var f26: Float = 123.456
    public var f27: Double = 0.0
    public var f28: Double = -123.456e+123
    public var f29: Decimal = Decimal.zero
    public var f30: Decimal = Decimal(string: "123456.123456")!
    public var f31: String = ""
    public var f32: String = "Initial string!"
    public var f33: Date = Date(timeIntervalSince1970: 0)
    public var f34: Date = Date(timeIntervalSince1970: 0)
    public var f35: Date = Date()
    public var f36: UUID = ChronoxorFbe.UUIDGenerator.nil()
    public var f37: UUID = ChronoxorFbe.UUIDGenerator.sequential()
    public var f38: UUID = UUID(uuidString: "123e4567-e89b-12d3-a456-426655440000")!
    public var f39: ChronoxorProto.OrderSide = ChronoxorProto.OrderSide()
    public var f40: ChronoxorProto.OrderType = ChronoxorProto.OrderType()
    public var f41: ChronoxorProto.Order = ChronoxorProto.Order()
    public var f42: ChronoxorProto.Balance = ChronoxorProto.Balance()
    public var f43: ChronoxorProto.State = ChronoxorProto.State()
    public var f44: ChronoxorProto.Account = ChronoxorProto.Account()

    public init() { }
    public init(id: Int32, f1: Bool, f2: Bool, f3: UInt8, f4: UInt8, f5: Character, f6: Character, f7: Character, f8: Character, f9: Int8, f10: Int8, f11: UInt8, f12: UInt8, f13: Int16, f14: Int16, f15: UInt16, f16: UInt16, f17: Int32, f18: Int32, f19: UInt32, f20: UInt32, f21: Int64, f22: Int64, f23: UInt64, f24: UInt64, f25: Float, f26: Float, f27: Double, f28: Double, f29: Decimal, f30: Decimal, f31: String, f32: String, f33: Date, f34: Date, f35: Date, f36: UUID, f37: UUID, f38: UUID, f39: ChronoxorProto.OrderSide, f40: ChronoxorProto.OrderType, f41: ChronoxorProto.Order, f42: ChronoxorProto.Balance, f43: ChronoxorProto.State, f44: ChronoxorProto.Account) {

        self.id = id
        self.f1 = f1
        self.f2 = f2
        self.f3 = f3
        self.f4 = f4
        self.f5 = f5
        self.f6 = f6
        self.f7 = f7
        self.f8 = f8
        self.f9 = f9
        self.f10 = f10
        self.f11 = f11
        self.f12 = f12
        self.f13 = f13
        self.f14 = f14
        self.f15 = f15
        self.f16 = f16
        self.f17 = f17
        self.f18 = f18
        self.f19 = f19
        self.f20 = f20
        self.f21 = f21
        self.f22 = f22
        self.f23 = f23
        self.f24 = f24
        self.f25 = f25
        self.f26 = f26
        self.f27 = f27
        self.f28 = f28
        self.f29 = f29
        self.f30 = f30
        self.f31 = f31
        self.f32 = f32
        self.f33 = f33
        self.f34 = f34
        self.f35 = f35
        self.f36 = f36
        self.f37 = f37
        self.f38 = f38
        self.f39 = f39
        self.f40 = f40
        self.f41 = f41
        self.f42 = f42
        self.f43 = f43
        self.f44 = f44
    }

    public init(other: StructSimple) {
        self.id = other.id
        self.f1 = other.f1
        self.f2 = other.f2
        self.f3 = other.f3
        self.f4 = other.f4
        self.f5 = other.f5
        self.f6 = other.f6
        self.f7 = other.f7
        self.f8 = other.f8
        self.f9 = other.f9
        self.f10 = other.f10
        self.f11 = other.f11
        self.f12 = other.f12
        self.f13 = other.f13
        self.f14 = other.f14
        self.f15 = other.f15
        self.f16 = other.f16
        self.f17 = other.f17
        self.f18 = other.f18
        self.f19 = other.f19
        self.f20 = other.f20
        self.f21 = other.f21
        self.f22 = other.f22
        self.f23 = other.f23
        self.f24 = other.f24
        self.f25 = other.f25
        self.f26 = other.f26
        self.f27 = other.f27
        self.f28 = other.f28
        self.f29 = other.f29
        self.f30 = other.f30
        self.f31 = other.f31
        self.f32 = other.f32
        self.f33 = other.f33
        self.f34 = other.f34
        self.f35 = other.f35
        self.f36 = other.f36
        self.f37 = other.f37
        self.f38 = other.f38
        self.f39 = other.f39
        self.f40 = other.f40
        self.f41 = other.f41
        self.f42 = other.f42
        self.f43 = other.f43
        self.f44 = other.f44
    }

    public init(from decoder: Decoder) throws {
        let container = try decoder.container(keyedBy: CodingKeys.self)
        id = try container.decode(Int32.self, forKey: .id)
        f1 = try container.decode(Bool.self, forKey: .f1)
        f2 = try container.decode(Bool.self, forKey: .f2)
        f3 = try container.decode(UInt8.self, forKey: .f3)
        f4 = try container.decode(UInt8.self, forKey: .f4)
        let f5RawValue: UInt8 = try container.decode(UInt8.self, forKey: .f5)
        f5 = Character(UnicodeScalar(f5RawValue))
        let f6RawValue: UInt8 = try container.decode(UInt8.self, forKey: .f6)
        f6 = Character(UnicodeScalar(f6RawValue))
        let f7RawValue: UInt32 = try container.decode(UInt32.self, forKey: .f7)
        f7 = Character(UnicodeScalar(f7RawValue)!)
        let f8RawValue: UInt32 = try container.decode(UInt32.self, forKey: .f8)
        f8 = Character(UnicodeScalar(f8RawValue)!)
        f9 = try container.decode(Int8.self, forKey: .f9)
        f10 = try container.decode(Int8.self, forKey: .f10)
        f11 = try container.decode(UInt8.self, forKey: .f11)
        f12 = try container.decode(UInt8.self, forKey: .f12)
        f13 = try container.decode(Int16.self, forKey: .f13)
        f14 = try container.decode(Int16.self, forKey: .f14)
        f15 = try container.decode(UInt16.self, forKey: .f15)
        f16 = try container.decode(UInt16.self, forKey: .f16)
        f17 = try container.decode(Int32.self, forKey: .f17)
        f18 = try container.decode(Int32.self, forKey: .f18)
        f19 = try container.decode(UInt32.self, forKey: .f19)
        f20 = try container.decode(UInt32.self, forKey: .f20)
        f21 = try container.decode(Int64.self, forKey: .f21)
        f22 = try container.decode(Int64.self, forKey: .f22)
        f23 = try container.decode(UInt64.self, forKey: .f23)
        f24 = try container.decode(UInt64.self, forKey: .f24)
        f25 = try container.decode(Float.self, forKey: .f25)
        f26 = try container.decode(Float.self, forKey: .f26)
        f27 = try container.decode(Double.self, forKey: .f27)
        f28 = try container.decode(Double.self, forKey: .f28)
        f29 = Decimal(string: try container.decode(String.self, forKey: .f29)) ?? .nan
        f30 = Decimal(string: try container.decode(String.self, forKey: .f30)) ?? .nan
        f31 = try container.decode(String.self, forKey: .f31)
        f32 = try container.decode(String.self, forKey: .f32)
        f33 = Date(timeIntervalSince1970: try container.decode(TimeInterval.self, forKey: .f33) / 1_000_000_000)
        f34 = Date(timeIntervalSince1970: try container.decode(TimeInterval.self, forKey: .f34) / 1_000_000_000)
        f35 = Date(timeIntervalSince1970: try container.decode(TimeInterval.self, forKey: .f35) / 1_000_000_000)
        f36 = try container.decode(UUID.self, forKey: .f36)
        f37 = try container.decode(UUID.self, forKey: .f37)
        f38 = try container.decode(UUID.self, forKey: .f38)
        f39 = try container.decode(ChronoxorProto.OrderSide.self, forKey: .f39)
        f40 = try container.decode(ChronoxorProto.OrderType.self, forKey: .f40)
        f41 = try container.decode(ChronoxorProto.Order.self, forKey: .f41)
        f42 = try container.decode(ChronoxorProto.Balance.self, forKey: .f42)
        f43 = try container.decode(ChronoxorProto.State.self, forKey: .f43)
        f44 = try container.decode(ChronoxorProto.Account.self, forKey: .f44)
    }

    public func clone() throws -> StructSimple {
        // Serialize the struct to the FBE stream
        let writer = StructSimpleModel()
        try _ = writer.serialize(value: self)

        // Deserialize the struct from the FBE stream
        let reader = StructSimpleModel()
        reader.attach(buffer: writer.buffer)
        return reader.deserialize()
    }

    public static func < (lhs: StructSimple, rhs: StructSimple) -> Bool {
        if !(lhs.id < rhs.id) { return false }
        return true
    }

    public static func == (lhs: StructSimple, rhs: StructSimple) -> Bool {
        if !(lhs.id == rhs.id) { return false }
        return true
    }

    public func hash(into hasher: inout Hasher) {
        hasher.combine(id)
    }

    public var description: String {
        var sb = String()
        sb.append("StructSimple(")
        sb.append("id="); sb.append(id.description)
        sb.append(",f1="); sb.append(f1 ? "true" : "false")
        sb.append(",f2="); sb.append(f2 ? "true" : "false")
        sb.append(",f3="); sb.append(f3.description)
        sb.append(",f4="); sb.append(f4.description)
        sb.append(",f5="); sb.append("'"); sb.append(f5); sb.append("'")
        sb.append(",f6="); sb.append("'"); sb.append(f6); sb.append("'")
        sb.append(",f7="); sb.append("'"); sb.append(f7); sb.append("'")
        sb.append(",f8="); sb.append("'"); sb.append(f8); sb.append("'")
        sb.append(",f9="); sb.append(f9.description)
        sb.append(",f10="); sb.append(f10.description)
        sb.append(",f11="); sb.append(f11.description)
        sb.append(",f12="); sb.append(f12.description)
        sb.append(",f13="); sb.append(f13.description)
        sb.append(",f14="); sb.append(f14.description)
        sb.append(",f15="); sb.append(f15.description)
        sb.append(",f16="); sb.append(f16.description)
        sb.append(",f17="); sb.append(f17.description)
        sb.append(",f18="); sb.append(f18.description)
        sb.append(",f19="); sb.append(f19.description)
        sb.append(",f20="); sb.append(f20.description)
        sb.append(",f21="); sb.append(f21.description)
        sb.append(",f22="); sb.append(f22.description)
        sb.append(",f23="); sb.append(f23.description)
        sb.append(",f24="); sb.append(f24.description)
        sb.append(",f25="); sb.append(f25.description)
        sb.append(",f26="); sb.append(f26.description)
        sb.append(",f27="); sb.append(f27.description)
        sb.append(",f28="); sb.append(f28.description)
        sb.append(",f29="); sb.append(f29.description)
        sb.append(",f30="); sb.append(f30.description)
        sb.append(",f31="); sb.append("\""); sb.append(f31); sb.append("\"")
        sb.append(",f32="); sb.append("\""); sb.append(f32); sb.append("\"")
        sb.append(",f33="); sb.append("\(floor(f33.timeIntervalSince1970 * 1000) * 1_000_000)")
        sb.append(",f34="); sb.append("\(floor(f34.timeIntervalSince1970 * 1000) * 1_000_000)")
        sb.append(",f35="); sb.append("\(floor(f35.timeIntervalSince1970 * 1000) * 1_000_000)")
        sb.append(",f36="); sb.append("\""); sb.append(f36.uuidString); sb.append("\"")
        sb.append(",f37="); sb.append("\""); sb.append(f37.uuidString); sb.append("\"")
        sb.append(",f38="); sb.append("\""); sb.append(f38.uuidString); sb.append("\"")
        sb.append(",f39="); sb.append(f39.description)
        sb.append(",f40="); sb.append(f40.description)
        sb.append(",f41="); sb.append(f41.description)
        sb.append(",f42="); sb.append(f42.description)
        sb.append(",f43="); sb.append(f43.description)
        sb.append(",f44="); sb.append(f44.description)
        sb.append(")")
        return sb
    }
    private enum CodingKeys: String, CodingKey {
        case id
        case f1
        case f2
        case f3
        case f4
        case f5
        case f6
        case f7
        case f8
        case f9
        case f10
        case f11
        case f12
        case f13
        case f14
        case f15
        case f16
        case f17
        case f18
        case f19
        case f20
        case f21
        case f22
        case f23
        case f24
        case f25
        case f26
        case f27
        case f28
        case f29
        case f30
        case f31
        case f32
        case f33
        case f34
        case f35
        case f36
        case f37
        case f38
        case f39
        case f40
        case f41
        case f42
        case f43
        case f44
    }

    public func encode(to encoder: Encoder) throws {
        var container = encoder.container(keyedBy: CodingKeys.self)
        try container.encode(id, forKey: .id)
        try container.encode(f1, forKey: .f1)
        try container.encode(f2, forKey: .f2)
        try container.encode(f3, forKey: .f3)
        try container.encode(f4, forKey: .f4)
        try container.encode(f5.utf8.map { UInt8($0) }[0], forKey: .f5)
        try container.encode(f6.utf8.map { UInt8($0) }[0], forKey: .f6)
        try container.encode(f7.utf16.map { UInt32($0) }[0], forKey: .f7)
        try container.encode(f8.utf16.map { UInt32($0) }[0], forKey: .f8)
        try container.encode(f9, forKey: .f9)
        try container.encode(f10, forKey: .f10)
        try container.encode(f11, forKey: .f11)
        try container.encode(f12, forKey: .f12)
        try container.encode(f13, forKey: .f13)
        try container.encode(f14, forKey: .f14)
        try container.encode(f15, forKey: .f15)
        try container.encode(f16, forKey: .f16)
        try container.encode(f17, forKey: .f17)
        try container.encode(f18, forKey: .f18)
        try container.encode(f19, forKey: .f19)
        try container.encode(f20, forKey: .f20)
        try container.encode(f21, forKey: .f21)
        try container.encode(f22, forKey: .f22)
        try container.encode(f23, forKey: .f23)
        try container.encode(f24, forKey: .f24)
        try container.encode(f25, forKey: .f25)
        try container.encode(f26, forKey: .f26)
        try container.encode(f27, forKey: .f27)
        try container.encode(f28, forKey: .f28)
        try container.encode(f29.description, forKey: .f29)
        try container.encode(f30.description, forKey: .f30)
        try container.encode(f31, forKey: .f31)
        try container.encode(f32, forKey: .f32)
        try container.encode(floor(f33.timeIntervalSince1970 * 1000) * 1_000_000, forKey: .f33)
        try container.encode(floor(f34.timeIntervalSince1970 * 1000) * 1_000_000, forKey: .f34)
        try container.encode(floor(f35.timeIntervalSince1970 * 1000) * 1_000_000, forKey: .f35)
        try container.encode(f36, forKey: .f36)
        try container.encode(f37, forKey: .f37)
        try container.encode(f38, forKey: .f38)
        try container.encode(f39, forKey: .f39)
        try container.encode(f40, forKey: .f40)
        try container.encode(f41, forKey: .f41)
        try container.encode(f42, forKey: .f42)
        try container.encode(f43, forKey: .f43)
        try container.encode(f44, forKey: .f44)
    }

    public func toJson() throws -> String {
        return String(data: try JSONEncoder().encode(self), encoding: .utf8)!
    }

    public static func fromJson(_ json: String) throws -> StructSimple {
        return try JSONDecoder().decode(StructSimple.self, from: json.data(using: .utf8)!)
    }
}
