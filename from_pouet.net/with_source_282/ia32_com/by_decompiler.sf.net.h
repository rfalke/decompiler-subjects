// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_282/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn Eq_13 (Eq_12))
	T_11 (in sin : ptr32)
Eq_12: (union "Eq_12" (real16 u0) (real64 u1))
	T_12 (in rLoc2 : real64)
	T_22 (in sin(rLoc2) * (real64) ds->w01D0 + (real64) ds->w01D0 : word16)
Eq_13: (union "Eq_13" (real16 u0) (real64 u1))
	T_13 (in sin(rLoc2) : real64)
Eq_14: (segment "Eq_14" (1D0 word16 w01D0) (1F6 Eq_71 t01F6) (200 word16 w0200))
	T_14 (in ds : (ptr Eq_14))
Eq_17: (union "Eq_17" (real16 u0) (real64 u1))
	T_17 (in (real64) ds->w01D0 : real64)
Eq_21: (union "Eq_21" (real16 u0) (real64 u1))
	T_21 (in (real64) ds->w01D0 : real64)
Eq_33: (fn void (word16, byte))
	T_33 (in __outb : ptr32)
Eq_39: (fn void (word16, uint8))
	T_39 (in __outb : ptr32)
Eq_43: (fn void (word16, ui8))
	T_43 (in __outb : ptr32)
Eq_46: (fn void (word16, byte))
	T_46 (in __outb : ptr32)
Eq_59: (fn byte (word16))
	T_59 (in __inb : ptr32)
Eq_69: (union "Eq_69" (real64 u0) (word16 u1))
	T_69 (in rLoc2_67 : Eq_69)
	T_72 (in rLoc2 - ds->t01F6 : word16)
Eq_71: (union "Eq_71" (real16 u0) (real32 u1))
	T_71 (in Mem65[ds:0x01F6:real32] : real32)
	T_80 (in Mem65[ds:0x01F6:real32] : real32)
Eq_73: (union "Eq_73" (real16 u0) (real64 u1))
	T_73 (in rLoc2_69 : Eq_73)
	T_75 (in cos(rLoc2_67) : real64)
Eq_74: (fn Eq_73 (Eq_69))
	T_74 (in cos : ptr32)
Eq_76: (fn real64 (Eq_69))
	T_76 (in sin : ptr32)
Eq_78: (union "Eq_78" (real16 u0) (real64 u1))
	T_78 (in rLoc4_72 : Eq_78)
	T_81 (in rLoc2_69 + ds->t01F6 : word16)
Eq_82: (fn real64 (Eq_78))
	T_82 (in cos : ptr32)
Eq_84: (fn real64 (Eq_78))
	T_84 (in sin : ptr32)
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
T_7: (in bx_10 : (memptr (ptr Eq_14) int16))
  Class: Eq_7
  DataType: (memptr (ptr Eq_14) int16)
  OrigDataType: (memptr T_14 (struct (0 T_26 t0000)))
T_8: (in bx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x03 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(bx, 0x03, 8, 8) : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_14) int16)
  OrigDataType: word16
T_11: (in sin : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12)))
T_12: (in rLoc2 : real64)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: (union (real16 u0) (real64 u1))
T_13: (in sin(rLoc2) : real64)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: (union (real16 u0) (real64 u1))
T_14: (in ds : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment (1D0 T_16 t01D0) (1F6 T_71 t01F6) (200 T_68 t0200)))
T_15: (in 0x01D0 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_14 (struct (0 T_16 t0000)))
T_16: (in Mem0[ds:0x01D0:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in (real64) ds->w01D0 : real64)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: (union (real16 u0) (real64 u1))
T_18: (in sin(rLoc2) * (real64) ds->w01D0 : word16)
  Class: Eq_18
  DataType: real16
  OrigDataType: real16
T_19: (in 0x01D0 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_14 (struct (0 T_20 t0000)))
T_20: (in Mem0[ds:0x01D0:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_21: (in (real64) ds->w01D0 : real64)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: (union (real16 u0) (real64 u1))
T_22: (in sin(rLoc2) * (real64) ds->w01D0 + (real64) ds->w01D0 : word16)
  Class: Eq_12
  DataType: Eq_12
  OrigDataType: real16
T_23: (in (int16) rLoc2 : int16)
  Class: Eq_23
  DataType: int16
  OrigDataType: int16
T_24: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in bx_10 + 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in Mem24[ds:bx_10 + 0x0000:int16] : int16)
  Class: Eq_23
  DataType: int16
  OrigDataType: int16
T_27: (in bl : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in 0x01 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in bl + 0x01 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_30: (in DPB(bx_10, bl, 0, 8) : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_14) int16)
  OrigDataType: word16
T_31: (in 0x00 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_32: (in bl != 0x00 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in __outb : ptr32)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (fn T_36 (T_34, T_35)))
T_34: (in 0x03C8 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in 0x00 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in ah_32 : ui8)
  Class: Eq_37
  DataType: ui8
  OrigDataType: ui8
T_38: (in 0x00 : byte)
  Class: Eq_37
  DataType: ui8
  OrigDataType: byte
T_39: (in __outb : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_42 (T_40, T_41)))
T_40: (in 0x03C9 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in al_42 : uint8)
  Class: Eq_41
  DataType: uint8
  OrigDataType: bcu8
T_42: (in __outb(0x03C9, al_42) : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_43: (in __outb : ptr32)
  Class: Eq_43
  DataType: (ptr Eq_43)
  OrigDataType: (ptr (fn T_45 (T_44, T_37)))
T_44: (in 0x03C9 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in __outb(0x03C9, ah_32) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in __outb : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_49 (T_47, T_48)))
T_47: (in 0x03C9 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_49
  DataType: void
  OrigDataType: void
T_50: (in 0x01 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in ah_32 + 0x01 : byte)
  Class: Eq_37
  DataType: ui8
  OrigDataType: byte
T_52: (in 0x00 : byte)
  Class: Eq_37
  DataType: ui8
  OrigDataType: byte
T_53: (in ah_32 != 0x00 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in 0x3F : byte)
  Class: Eq_41
  DataType: uint8
  OrigDataType: byte
T_55: (in 0x02 : byte)
  Class: Eq_55
  DataType: ui8
  OrigDataType: ui8
T_56: (in ah_32 * 0x02 : byte)
  Class: Eq_41
  DataType: uint8
  OrigDataType: ui8
T_57: (in 0x3F : byte)
  Class: Eq_41
  DataType: uint8
  OrigDataType: bcu8
T_58: (in al_42 <=u 0x3F : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in __inb : ptr32)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: (ptr (fn T_61 (T_60)))
T_60: (in 0x03DA : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in __inb(0x03DA) : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in 0x08 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in 0x00 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_65: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0x00C8 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0200 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_14 (struct (0 T_68 t0000)))
T_68: (in Mem65[ds:0x0200:word16] : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_69: (in rLoc2_67 : Eq_69)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: real64
T_70: (in 0x01F6 : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_14) Eq_71)
  OrigDataType: (memptr T_14 (struct (0 T_71 t0000)))
T_71: (in Mem65[ds:0x01F6:real32] : real32)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: real32
T_72: (in rLoc2 - ds->t01F6 : word16)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: word16
T_73: (in rLoc2_69 : Eq_73)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: (union (real16 u0) (real64 u1))
T_74: (in cos : ptr32)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (fn T_75 (T_69)))
T_75: (in cos(rLoc2_67) : real64)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: real64
T_76: (in sin : ptr32)
  Class: Eq_76
  DataType: (ptr Eq_76)
  OrigDataType: (ptr (fn T_77 (T_69)))
T_77: (in sin(rLoc2_67) : real64)
  Class: Eq_77
  DataType: real64
  OrigDataType: real64
T_78: (in rLoc4_72 : Eq_78)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: real64
T_79: (in 0x01F6 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_14) Eq_71)
  OrigDataType: (memptr T_14 (struct (0 T_80 t0000)))
T_80: (in Mem65[ds:0x01F6:real32] : real32)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: (union (real16 u0) (real32 u1))
T_81: (in rLoc2_69 + ds->t01F6 : word16)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: real16
T_82: (in cos : ptr32)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: (ptr (fn T_83 (T_78)))
T_83: (in cos(rLoc4_72) : real64)
  Class: Eq_83
  DataType: real64
  OrigDataType: real64
T_84: (in sin : ptr32)
  Class: Eq_84
  DataType: (ptr Eq_84)
  OrigDataType: (ptr (fn T_85 (T_78)))
T_85: (in sin(rLoc4_72) : real64)
  Class: Eq_85
  DataType: real64
  OrigDataType: real64
T_86: (in false : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_13 (Eq_11)(Eq_12);

typedef union Eq_12 {
	real16 u0;
	real64 u1;
} Eq_12;

typedef union Eq_13 {
	real16 u0;
	real64 u1;
} Eq_13;

typedef Eq_71 Eq_14struct Eq_14 {
	word16 w01D0;	// 1D0
	Eq_71 t01F6;	// 1F6
	word16 w0200;	// 200
} Eq_14;

typedef union Eq_17 {
	real16 u0;
	real64 u1;
} Eq_17;

typedef union Eq_21 {
	real16 u0;
	real64 u1;
} Eq_21;

typedef void (Eq_33)(word16, byte);

typedef void (Eq_39)(word16, uint8);

typedef void (Eq_43)(word16, ui8);

typedef void (Eq_46)(word16, byte);

typedef byte (Eq_59)(word16);

typedef union Eq_69 {
	real64 u0;
	word16 u1;
} Eq_69;

typedef union Eq_71 {
	real16 u0;
	real32 u1;
} Eq_71;

typedef union Eq_73 {
	real16 u0;
	real64 u1;
} Eq_73;

typedef Eq_73 (Eq_74)(Eq_69);

typedef real64 (Eq_76)(Eq_69);

typedef union Eq_78 {
	real16 u0;
	real64 u1;
} Eq_78;

typedef real64 (Eq_82)(Eq_78);

typedef real64 (Eq_84)(Eq_78);

