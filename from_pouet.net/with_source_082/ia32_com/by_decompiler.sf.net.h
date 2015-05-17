// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_082/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (segment "Eq_11")
	T_11 (in ds_10 : (ptr Eq_11))
	T_12 (in ds : (ptr Eq_11))
	T_17 (in SLICE((ds->*bx).t0000, selector, 16) : selector)
Eq_13: (struct "Eq_13" 0001 (0 Eq_16 t0000) (280 byte b0280))
	T_13 (in bx : (memptr (ptr Eq_11) Eq_13))
	T_56 (in bx + 0x0001 : word16)
Eq_16: (union "Eq_16" (byte u0) (segptr32 u1))
	T_16 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
	T_48 (in al_63 : Eq_16)
	T_51 (in __inb(0x40) : byte)
	T_54 (in Mem72[ds_10:bx + 0x0000:byte] : byte)
	T_64 (in Mem72[ds_10:bx + 0x0000:byte] : byte)
	T_75 (in (byte) (wArg00 - 0x0001 + dx_80 >>u 0x0002) : byte)
Eq_38: (fn void (word16, bcu8))
	T_38 (in __outb : ptr32)
Eq_41: (fn word32 (word32, byte))
	T_41 (in __ror : ptr32)
Eq_49: (fn Eq_16 (byte))
	T_49 (in __inb : ptr32)
Eq_67: (union "Eq_67" (int8 u0) (bcu8 u1))
	T_67 (in bh_74 : Eq_67)
	T_68 (in SLICE(bx, byte, 8) : byte)
	T_76 (in 0xFD : byte)
Eq_79: (fn bool (byte, (ptr byte)))
	T_79 (in __das : ptr32)
Eq_80: (fn byte (byte))
	T_80 (in __inb : ptr32)
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
T_7: (in eax_102 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in eax : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(eax, 0x13, 0, 8) : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_11: (in ds_10 : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment))
T_12: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment))
T_13: (in bx : (memptr (ptr Eq_11) Eq_13))
  Class: Eq_13
  DataType: (memptr (ptr Eq_11) Eq_13)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_16 t0000) (280 T_59 t0280)))
T_14: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in bx + 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: segptr32
T_17: (in SLICE((ds->*bx).t0000, selector, 16) : selector)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment))
T_18: (in cx_16 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in cx : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x03 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in DPB(cx, 0x03, 8, 8) : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_22: (in cl : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0x03 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in cl & 0x03 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in 0x00 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_26: (in (cl & 0x03) == 0x00 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in 0x3F : byte)
  Class: Eq_27
  DataType: bcu8
  OrigDataType: byte
T_28: (in al_29 : bcu8)
  Class: Eq_27
  DataType: bcu8
  OrigDataType: bcu8
T_29: (in ah_31 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in 0x01 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in ah_31 + 0x01 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in DPB(eax_102, ah_31 + 0x01, 8, 8) : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in cx_16 - 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_35: (in (byte) cx_16 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_36: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_37: (in cx_16 != 0x0000 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in __outb : ptr32)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (fn T_40 (T_39, T_28)))
T_39: (in 0x03C9 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in __outb(0x03C9, al_29) : void)
  Class: Eq_40
  DataType: void
  OrigDataType: void
T_41: (in __ror : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_43 (T_7, T_42)))
T_42: (in 0x08 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in __ror(eax_102, 0x08) : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_44: (in (byte) eax_102 : byte)
  Class: Eq_27
  DataType: bcu8
  OrigDataType: byte
T_45: (in SLICE(eax_102, byte, 8) : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_46: (in 0x3F : byte)
  Class: Eq_27
  DataType: bcu8
  OrigDataType: bcu8
T_47: (in al_29 <u 0x3F : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in al_63 : Eq_16)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: byte
T_49: (in __inb : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_51 (T_50)))
T_50: (in 0x40 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in __inb(0x40) : byte)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: byte
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in bx + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem72[ds_10:bx + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: byte
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in bx + 0x0001 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_11) Eq_13)
  OrigDataType: word16
T_57: (in 0x0280 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in bx + 0x0280 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in Mem72[ds_10:bx + 0x0280:byte] : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in DPB(cx_16, (ds_10->*bx).b0280, 0, 8) : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_61: (in dx_80 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in bx + 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem72[ds_10:bx + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: byte
T_65: (in (word16) (ds_10->*bx).t0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in (word16) (ds_10->*bx).t0000 + cx_16 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_67: (in bh_74 : Eq_67)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: (union (int8 u0) (bcu8 u1))
T_68: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_67
  DataType: Eq_67
  OrigDataType: byte
T_69: (in wArg00 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in wArg00 - 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in wArg00 - 0x0001 + dx_80 : word16)
  Class: Eq_72
  DataType: uint16
  OrigDataType: uint16
T_73: (in 0x0002 : word16)
  Class: Eq_73
  DataType: uint16
  OrigDataType: uint16
T_74: (in wArg00 - 0x0001 + dx_80 >>u 0x0002 : word16)
  Class: Eq_74
  DataType: uint16
  OrigDataType: uint16
T_75: (in (byte) (wArg00 - 0x0001 + dx_80 >>u 0x0002) : byte)
  Class: Eq_16
  DataType: Eq_16
  OrigDataType: byte
T_76: (in 0xFD : byte)
  Class: Eq_67
  DataType: int8
  OrigDataType: (union (int8 u0) (bcu8 u1))
T_77: (in bh_74 <u 0xFD : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in al_96 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in __das : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_84 (T_82, T_83)))
T_80: (in __inb : ptr32)
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: (ptr (fn T_82 (T_81)))
T_81: (in 0x60 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in __inb(0x60) : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in &al_96 : ptr16)
  Class: Eq_83
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_84: (in __das(__inb(0x60), &al_96) : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in bh_74 >= 0xFD : bool)
  Class: Eq_85
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_11 {
} Eq_11;

typedef Eq_16 Eq_13struct Eq_13 {	// size: 1 1
	Eq_16 t0000;	// 0
	byte b0280;	// 280
} Eq_13;

typedef union Eq_16 {
	byte u0;
	segptr32 u1;
} Eq_16;

typedef void (Eq_38)(word16, bcu8);

typedef word32 (Eq_41)(word32, byte);

typedef Eq_16 (Eq_49)(byte);

typedef union Eq_67 {
	int8 u0;
	bcu8 u1;
} Eq_67;

typedef bool (Eq_79)(byte, byte *);

typedef byte (Eq_80)(byte);

