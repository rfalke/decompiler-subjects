// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_092/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_14) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, word16))
	T_7 (in __outw : ptr32)
Eq_14: (segment "Eq_14" (0 Eq_15 t0000))
	T_14 (in 0xA000 : selector)
Eq_15: (struct "Eq_15" 0001 (FFFFFFA0 int8 bFFFFFFA0))
	T_15 (in bx : (memptr (ptr Eq_14) Eq_15))
	T_20 (in bx + 0x0001 : word16)
	T_25 (in 0x0000 : word16)
Eq_43: (union "Eq_43" (int16 u0) (uint16 u1))
	T_43 (in ax_38 : Eq_43)
	T_50 (in SEQ((int32) ax_30 % (cx_34 + 0x0001), ax_30) /u (cx_34 + 0x0001) : uint16)
Eq_48: (union "Eq_48" (int32 u0) (uint32 u1))
	T_48 (in SEQ((int32) ax_30 % (cx_34 + 0x0001), ax_30) : int32)
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
T_7: (in __outw : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_12 (T_8, T_11)))
T_8: (in 0x03D4 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x20 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in DPB(ax, 0x20, 8, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in __outw(0x03D4, DPB(ax, 0x20, 8, 8)) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in al_55 : int8)
  Class: Eq_13
  DataType: int8
  OrigDataType: int8
T_14: (in 0xA000 : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_15: (in bx : (memptr (ptr Eq_14) Eq_15))
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) Eq_15)
  OrigDataType: (memptr T_14 (struct 0001 (FFFFFFA0 T_18 tFFFFFFA0)))
T_16: (in 0x0060 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in bx - 0x0060 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem63[0xA000:bx - 0x0060:byte] : byte)
  Class: Eq_13
  DataType: int8
  OrigDataType: byte
T_19: (in 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in bx + 0x0001 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) Eq_15)
  OrigDataType: word16
T_21: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in bh : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_23: (in (byte) bx : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in bl : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in 0x0000 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) Eq_15)
  OrigDataType: word16
T_26: (in bx != &Eq_14::t0000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in 0x10 : byte)
  Class: Eq_13
  DataType: int8
  OrigDataType: byte
T_28: (in al_25 : int8)
  Class: Eq_28
  DataType: int8
  OrigDataType: int8
T_29: (in si : uint16)
  Class: Eq_29
  DataType: uint16
  OrigDataType: uint16
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in si >>u 0x0001 : word16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: uint16
T_32: (in (byte) (si >>u 0x0001) : byte)
  Class: Eq_28
  DataType: int8
  OrigDataType: byte
T_33: (in ax_27 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in al_25 *s al_25 : int16)
  Class: Eq_34
  DataType: int16
  OrigDataType: int16
T_35: (in ~(al_25 *s al_25) : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_36: (in ax_30 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in SLICE(ax_27, byte, 8) : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0x8C : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in SLICE(ax_27, byte, 8) - 0x8C : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in DPB(ax_27, SLICE(ax_27, byte, 8) - 0x8C, 8, 8) : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_41: (in cx_34 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in (word16) bh : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_43: (in ax_38 : Eq_43)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: int16
T_44: (in (int32) ax_30 : int32)
  Class: Eq_44
  DataType: int32
  OrigDataType: int32
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in cx_34 + 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in (int32) ax_30 % (cx_34 + 0x0001) : uint16)
  Class: Eq_47
  DataType: uint16
  OrigDataType: uint16
T_48: (in SEQ((int32) ax_30 % (cx_34 + 0x0001), ax_30) : int32)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: (union (int32 u0) (uint32 u1))
T_49: (in cx_34 + 0x0001 : word16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: uint16
T_50: (in SEQ((int32) ax_30 % (cx_34 + 0x0001), ax_30) /u (cx_34 + 0x0001) : uint16)
  Class: Eq_43
  DataType: Eq_43
  OrigDataType: uint16
T_51: (in ax_48 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in ax_38 + si : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_53: (in (byte) ax_48 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in cx_34 + 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in DPB(cx_34 + 0x0001, bl, 8, 8) : word16)
  Class: Eq_55
  DataType: int16
  OrigDataType: int16
T_56: (in ax_38 *s DPB(cx_34 + 0x0001, bl, 8, 8) : int32)
  Class: Eq_56
  DataType: int32
  OrigDataType: int32
T_57: (in SLICE(ax_38 *s DPB(cx_34 + 0x0001, bl, 8, 8), byte, 16) : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in (byte) ax_48 ^ SLICE(ax_38 *s DPB(cx_34 + 0x0001, bl, 8, 8), byte, 16) : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in 0x20 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in ((byte) ax_48 ^ SLICE(ax_38 *s DPB(cx_34 + 0x0001, bl, 8, 8), byte, 16)) & 0x20 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in DPB(ax_48, ((byte) ax_48 ^ SLICE(ax_38 *s DPB(cx_34 + 0x0001, bl, 8, 8), byte, 16)) & 0x20, 0, 8) : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in DPB(ax_48, ((byte) ax_48 ^ SLICE(ax_38 *s DPB(cx_34 + 0x0001, bl, 8, 8), byte, 16)) & 0x20, 0, 8) - 0x0001 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in (byte) (DPB(ax_48, ((byte) ax_48 ^ SLICE(ax_38 *s DPB(cx_34 + 0x0001, bl, 8, 8), byte, 16)) & 0x20, 0, 8) - 0x0001) : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in SLICE(ax_38, byte, 8) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in (byte) (DPB(ax_48, ((byte) ax_48 ^ SLICE(ax_38 *s DPB(cx_34 + 0x0001, bl, 8, 8), byte, 16)) & 0x20, 0, 8) - 0x0001) - SLICE(ax_38, byte, 8) : byte)
  Class: Eq_13
  DataType: int8
  OrigDataType: byte
T_67: (in 0x10 : byte)
  Class: Eq_13
  DataType: int8
  OrigDataType: int8
T_68: (in al_55 >= 0x10 : bool)
  Class: Eq_68
  DataType: bool
  OrigDataType: bool
T_69: (in 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in si + 0x0001 : word16)
  Class: Eq_29
  DataType: uint16
  OrigDataType: word16
*/
typedef Eq_14 Eq_1struct Globals {
	Eq_14 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, word16);

typedef Eq_15 Eq_14struct Eq_14 {
	Eq_15 t0000;	// 0
} Eq_14;

typedef struct Eq_15 {	// size: 1 1
	int8 bFFFFFFA0;	// FFFFFFA0
} Eq_15;

typedef union Eq_43 {
	int16 u0;
	uint16 u1;
} Eq_43;

typedef union Eq_48 {
	int32 u0;
	uint32 u1;
} Eq_48;

