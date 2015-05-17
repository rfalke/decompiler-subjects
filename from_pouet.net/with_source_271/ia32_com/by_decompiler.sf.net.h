// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_271/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (segment)
	T_8 (in cs : selector)
Eq_13: (struct 0001 (0 Eq_67 t0000))
	T_13 (in cx_14 : word16)
	T_14 (in 0x0000 : word16)
	T_42 (in cx_14 - 0x0001 + 0x0080 : word16)
	T_52 (in 0x0000 : word16)
	T_83 (in cx_14 - 0x0001 : word16)
	T_88 (in 0xFF80 : word16)
Eq_17: (fn void (word16, uint8))
	T_17 (in __outb : ptr32)
Eq_20: (fn void (word16, uint8))
	T_20 (in __outb : ptr32)
Eq_23: (fn void (word16, byte))
	T_23 (in __outb : ptr32)
Eq_30: (fn void (word16, byte))
	T_30 (in __outb : ptr32)
Eq_35: (struct 0001 (0 byte b0000))
	T_35 (in di : word16)
	T_50 (in di + 0x0001 : word16)
Eq_45: (union (uint16 u0) (byte u1))
	T_45 (in al_25 : byte)
	T_46 (in 0x00 : byte)
	T_84 (in al_52 >>u 0x01 : word16)
Eq_54: (fn int8 (int8, uint8, bool))
	T_54 (in __rcl : ptr32)
Eq_56: (union (bcu8 u0) (word16 u1))
	T_56 (in al_49 : byte)
	T_63 (in al_25 + (dh_20 >> 0x03) + (dh_20 >> 0x03 <u 0x00) : word16)
	T_69 (in 0x00 : byte)
Eq_60: (union (int16 u0) (bcu8 u1) (cups16 u2))
	T_60 (in dh_20 >> 0x03 : word16)
	T_61 (in 0x00 : byte)
Eq_64: (union (uint8 u0) (word16 u1))
	T_64 (in al_52 : byte)
	T_71 (in al_49 + Mem29[ax_7:cx_14 + 0x0000:byte] + (al_49 <u 0x00) : word16)
Eq_67: (union (uint16 u0) (byte u1))
	T_67 (in Mem29[ax_7:cx_14 + 0x0000:byte] : byte)
	T_73 (in al_52 >>u 0x01 : word16)
	T_76 (in Mem58[ax_7:cx_14 + 0x0000:byte] : byte)
Eq_77: (union (uint16 u0) (byte u1))
	T_77 (in al_52 >>u 0x01 : word16)
	T_81 (in Mem61[ax_7:DPB(cx_14, ~SLICE(cx_14, byte, 8), 8, 8):byte] : byte)
Eq_80: (struct (0 Eq_77 t0000))
	T_80 (in DPB(cx_14, ~SLICE(cx_14, byte, 8), 8, 8) : word16)
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
T_7: (in ax_7 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in cs : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x10 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_13: (in cx_14 : word16)
  Class: Eq_13
  DataType: (memptr word16 Eq_13)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_67 t0000)))
T_14: (in 0x0000 : word16)
  Class: Eq_13
  DataType: (memptr word16 Eq_13)
  OrigDataType: word16
T_15: (in cl_10 : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: uint8
T_16: (in 0x00 : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: byte
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18, T_15)))
T_18: (in 0x03C8 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __outb(0x03C8, cl_10) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_22 (T_21, T_15)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C9, cl_10) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_29 (T_24, T_28)))
T_24: (in 0x03C9 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in cl_10 *u cl_10 : uint16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in 0x0006 : word16)
  Class: Eq_26
  DataType: uint16
  OrigDataType: uint16
T_27: (in cl_10 *u cl_10 >>u 0x0006 : word16)
  Class: Eq_27
  DataType: uint16
  OrigDataType: uint16
T_28: (in (byte) (cl_10 *u cl_10 >>u 0x0006) : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in __outb(0x03C9, (byte) (cl_10 *u cl_10 >>u 0x0006)) : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in __outb : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_33 (T_31, T_32)))
T_31: (in 0x03C9 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 0x00 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in 0x00 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in di : word16)
  Class: Eq_35
  DataType: (memptr word16 Eq_35)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_38 t0000)))
T_36: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in di + 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem29[ax_7:di + 0x0000:byte] : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in cx_14 - 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0080 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in cx_14 - 0x0001 + 0x0080 : word16)
  Class: Eq_13
  DataType: (memptr word16 Eq_13)
  OrigDataType: word16
T_43: (in dh_20 : byte)
  Class: Eq_43
  DataType: int8
  OrigDataType: int8
T_44: (in 0x03 : byte)
  Class: Eq_43
  DataType: int8
  OrigDataType: byte
T_45: (in al_25 : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: (union (uint16 u0) (byte u1))
T_46: (in 0x00 : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_47: (in C_27 : byte)
  Class: Eq_47
  DataType: bool
  OrigDataType: byte
T_48: (in false : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in di + 0x0001 : word16)
  Class: Eq_35
  DataType: (memptr word16 Eq_35)
  OrigDataType: word16
T_51: (in (byte) cx_14 : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: byte
T_52: (in 0x0000 : word16)
  Class: Eq_13
  DataType: (memptr word16 Eq_13)
  OrigDataType: word16
T_53: (in cx_14 != 0x0000 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in __rcl : ptr32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_55 (T_43, T_15, T_47)))
T_55: (in __rcl(dh_20, cl_10, C_27) : byte)
  Class: Eq_43
  DataType: int8
  OrigDataType: byte
T_56: (in al_49 : byte)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: bcu8
T_57: (in 0x03 : byte)
  Class: Eq_57
  DataType: uint8
  OrigDataType: uint8
T_58: (in dh_20 >> 0x03 : word16)
  Class: Eq_58
  DataType: int16
  OrigDataType: int16
T_59: (in al_25 + (dh_20 >> 0x03) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in dh_20 >> 0x03 : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: (union (int16 u0) (cups16 u1))
T_61: (in 0x00 : byte)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: bcu8
T_62: (in dh_20 >> 0x03 <u 0x00 : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in al_25 + (dh_20 >> 0x03) + (dh_20 >> 0x03 <u 0x00) : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_64: (in al_52 : byte)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: uint8
T_65: (in 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in cx_14 + 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in Mem29[ax_7:cx_14 + 0x0000:byte] : byte)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: byte
T_68: (in al_49 + Mem29[ax_7:cx_14 + 0x0000:byte] : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in 0x00 : byte)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: bcu8
T_70: (in al_49 <u 0x00 : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in al_49 + Mem29[ax_7:cx_14 + 0x0000:byte] + (al_49 <u 0x00) : word16)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: word16
T_72: (in 0x01 : byte)
  Class: Eq_72
  DataType: uint8
  OrigDataType: uint8
T_73: (in al_52 >>u 0x01 : word16)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: uint16
T_74: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in cx_14 + 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in Mem58[ax_7:cx_14 + 0x0000:byte] : byte)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: byte
T_77: (in al_52 >>u 0x01 : word16)
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: uint16
T_78: (in SLICE(cx_14, byte, 8) : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in ~SLICE(cx_14, byte, 8) : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in DPB(cx_14, ~SLICE(cx_14, byte, 8), 8, 8) : word16)
  Class: Eq_80
  DataType: (memptr word16 Eq_80)
  OrigDataType: (memptr T_7 (struct (0 T_81 t0000)))
T_81: (in Mem61[ax_7:DPB(cx_14, ~SLICE(cx_14, byte, 8), 8, 8):byte] : byte)
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: byte
T_82: (in 0x0001 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in cx_14 - 0x0001 : word16)
  Class: Eq_13
  DataType: (memptr word16 Eq_13)
  OrigDataType: word16
T_84: (in al_52 >>u 0x01 : word16)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: uint16
T_85: (in al_52 >>u 0x01 : word16)
  Class: Eq_85
  DataType: uint16
  OrigDataType: uint16
T_86: (in cond(al_52 >>u 0x01) : byte)
  Class: Eq_47
  DataType: bool
  OrigDataType: byte
T_87: (in (byte) cx_14 : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: byte
T_88: (in 0xFF80 : word16)
  Class: Eq_13
  DataType: (memptr word16 Eq_13)
  OrigDataType: word16
T_89: (in cx_14 != 0xFF80 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct  {
} Eq_8;

typedef  Eq_13struct  {	// size: 1 1
	 t0000;	// 0
} Eq_13;

typedef void (Eq_17)(word16, uint8);

typedef void (Eq_20)(word16, uint8);

typedef void (Eq_23)(word16, byte);

typedef void (Eq_30)(word16, byte);

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_35;

typedef union  {
	uint16 u0;
	byte u1;
} Eq_45;

typedef int8 (Eq_54)(int8, uint8, bool);

typedef union  {
	bcu8 u0;
	word16 u1;
} Eq_56;

typedef union  {
	int16 u0;
	bcu8 u1;
	cups16 u2;
} Eq_60;

typedef union  {
	uint8 u0;
	word16 u1;
} Eq_64;

typedef union  {
	uint16 u0;
	byte u1;
} Eq_67;

typedef union  {
	uint16 u0;
	byte u1;
} Eq_77;

typedef  Eq_80struct  {
	 t0000;	// 0
} Eq_80;

