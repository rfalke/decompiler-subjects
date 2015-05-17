// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_115/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_7) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7" (0 byte b0000))
	T_7 (in ax_6 : (ptr Eq_7))
	T_10 (in DPB(ax, 0x20, 8, 8) : word16)
	T_14 (in ax_22 : (ptr Eq_7))
	T_35 (in 0xA000 : selector)
	T_42 (in DPB(ax_52, al_75, 0, 8) : word16)
Eq_11: (fn void (word16, (ptr Eq_7)))
	T_11 (in __outw : ptr32)
Eq_24: (union "Eq_24" (int16 u0) (uint16 u1))
	T_24 (in ax_36 : Eq_24)
	T_59 (in SEQ(dx_34, ax_22) /u (cx_32 + 0x0001) : uint16)
Eq_31: (struct "Eq_31" 0001 (0 byte b0000) (60 byte b0060))
	T_31 (in di : (memptr (ptr Eq_7) Eq_31))
	T_44 (in di + 0x0001 : word16)
Eq_57: (union "Eq_57" (int32 u0) (uint32 u1))
	T_57 (in SEQ(dx_34, ax_22) : int32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in 0x13 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(0x13) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in ax_6 : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x20 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x20, 8, 8) : word16)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: word16
T_11: (in __outw : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_7)))
T_12: (in 0x03D4 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outw(0x03D4, ax_6) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in ax_22 : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: word16
T_15: (in bx_62 : (memptr (ptr Eq_7) byte))
  Class: Eq_15
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_19 t0000)))
T_16: (in dh_57 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in bx_62 + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem64[ax_6:bx_62 + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_20: (in bh : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in bh - 0x01 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_23: (in dx_58 : cups16)
  Class: Eq_23
  DataType: cups16
  OrigDataType: cups16
T_24: (in ax_36 : Eq_24)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: int16
T_25: (in dx_58 + ax_36 : word16)
  Class: Eq_23
  DataType: cups16
  OrigDataType: word16
T_26: (in DPB(bx_62, bh, 8, 8) : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_27: (in SLICE(dx_58, byte, 8) : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_28: (in ax_52 : cups16)
  Class: Eq_23
  DataType: cups16
  OrigDataType: cups16
T_29: (in dx_58 <u ax_52 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in al_75 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in di : (memptr (ptr Eq_7) Eq_31))
  Class: Eq_31
  DataType: (memptr (ptr Eq_7) Eq_31)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_38 t0000) (60 T_34 t0060)))
T_32: (in 0x0060 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di + 0x0060 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem64[ax_6:di + 0x0060:byte] : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_35: (in 0xA000 : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_36: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in di + 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem78[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_39: (in bx : (memptr (ptr Eq_7) byte))
  Class: Eq_15
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in bx + 0x0001 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_42: (in DPB(ax_52, al_75, 0, 8) : word16)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in di + 0x0001 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_7) Eq_31)
  OrigDataType: word16
T_45: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_46: (in (byte) bx : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in bl : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_48: (in 0x0000 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_49: (in bx != &Eq_7::b0000 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in cx_32 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in (word16) bh : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_52: (in dx_34 : uint16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: word16
T_53: (in (int32) ax_22 : int32)
  Class: Eq_53
  DataType: int32
  OrigDataType: int32
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in cx_32 + 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in (int32) ax_22 % (cx_32 + 0x0001) : uint16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: uint16
T_57: (in SEQ(dx_34, ax_22) : int32)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: (union (int32 u0) (uint32 u1))
T_58: (in cx_32 + 0x0001 : word16)
  Class: Eq_58
  DataType: uint16
  OrigDataType: uint16
T_59: (in SEQ(dx_34, ax_22) /u (cx_32 + 0x0001) : uint16)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: uint16
T_60: (in ax_48 : int16)
  Class: Eq_60
  DataType: int16
  OrigDataType: word16
T_61: (in cx_32 + 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in DPB(cx_32 + 0x0001, bl, 8, 8) : word16)
  Class: Eq_62
  DataType: int16
  OrigDataType: int16
T_63: (in ax_36 *s DPB(cx_32 + 0x0001, bl, 8, 8) : int32)
  Class: Eq_63
  DataType: int32
  OrigDataType: int32
T_64: (in SLICE(ax_36 *s DPB(cx_32 + 0x0001, bl, 8, 8), byte, 16) : byte)
  Class: Eq_64
  DataType: int8
  OrigDataType: int8
T_65: (in si : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in ax_36 + si : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in (byte) (ax_36 + si) : byte)
  Class: Eq_67
  DataType: int8
  OrigDataType: int8
T_68: (in SLICE(ax_36 *s DPB(cx_32 + 0x0001, bl, 8, 8), byte, 16) *s (byte) (ax_36 + si) : int16)
  Class: Eq_60
  DataType: int16
  OrigDataType: int16
T_69: (in SLICE(ax_48, byte, 8) : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in 0x1C : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in SLICE(ax_48, byte, 8) & 0x1C : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in DPB(ax_48, SLICE(ax_48, byte, 8) & 0x1C, 8, 8) : word16)
  Class: Eq_23
  DataType: cups16
  OrigDataType: word16
T_73: (in 0x10 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_74: (in 0x10 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in DPB(dx_34, 0x10, 8, 8) : word16)
  Class: Eq_23
  DataType: cups16
  OrigDataType: word16
T_76: (in 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in si + 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
*/
typedef Eq_7 Eq_1struct Globals {
	Eq_7 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
	byte b0000;	// 0
} Eq_7;

typedef void (Eq_11)(word16, Eq_7 *);

typedef union Eq_24 {
	int16 u0;
	uint16 u1;
} Eq_24;

typedef struct Eq_31 {	// size: 1 1
	byte b0000;	// 0
	byte b0060;	// 60
} Eq_31;

typedef union Eq_57 {
	int32 u0;
	uint32 u1;
} Eq_57;

