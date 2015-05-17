// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_298/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (360 (ptr Eq_20) ptr0360))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte, byte))
	T_2 (in __outb : ptr32)
Eq_6: (fn void (byte, byte))
	T_6 (in __outb : ptr32)
Eq_10: (fn void (byte, byte))
	T_10 (in __outb : ptr32)
Eq_14: (fn void (byte))
	T_14 (in bios_video_set_mode : ptr32)
	T_15 (in signature of bios_video_set_mode : void)
Eq_20: (segment "Eq_20" (10C int32 dw010C))
	T_20 (in 0x0036 : selector)
Eq_26: (struct "Eq_26" (FFFFFFF8 Eq_41 tFFFFFFF8) (FFFFFFFC Eq_72 tFFFFFFFC) (0 int16 w0000))
	T_26 (in bx_8 : (memptr (ptr Eq_38) Eq_26))
	T_29 (in DPB(bx, 0x02, 8, 8) : word16)
Eq_34: (union "Eq_34" (real16 u0) (real64 u1))
	T_34 (in rLoc2_55 : Eq_34)
	T_42 (in (real64) 0x0036->dw010C * (ds->*bx_8).w0000 : word16)
Eq_37: (union "Eq_37" (real16 u0) (real64 u1))
	T_37 (in (real64) 0x0036->dw010C : real64)
Eq_38: (segment "Eq_38")
	T_38 (in ds : (ptr Eq_38))
Eq_41: (union "Eq_41" (real16 u0) (real32 u1))
	T_41 (in Mem0[ds:bx_8 - 0x0008:real32] : real32)
Eq_64: (fn real64 (real64))
	T_64 (in sqrt : ptr32)
Eq_68: (fn Eq_69 (real64))
	T_68 (in sin : ptr32)
Eq_69: (union "Eq_69" (real16 u0) (real64 u1))
	T_69 (in sin(rLoc3_57) : real64)
Eq_72: (union "Eq_72" (real16 u0) (real32 u1))
	T_72 (in Mem58[ds:bx_8 - 0x0004:real32] : real32)
Eq_73: (union "Eq_73" (real16 u0) (real64 u1))
	T_73 (in sin(rLoc3_57) * (ds->*bx_8).w0000 : word16)
Eq_77: (fn real64 (real64))
	T_77 (in cos : ptr32)
Eq_79: (fn real64 (real64))
	T_79 (in sin : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in __outb : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_5 (T_3, T_4)))
T_3: (in 0x43 : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_4: (in 0x36 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in __outb(0x43, 0x36) : void)
  Class: Eq_5
  DataType: void
  OrigDataType: void
T_6: (in __outb : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_9 (T_7, T_8)))
T_7: (in 0x40 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in __outb(0x40, 0x13) : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in __outb : ptr32)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (fn T_13 (T_11, T_12)))
T_11: (in 0x40 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x13 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in __outb(0x40, 0x13) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in bios_video_set_mode : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_18 (T_17)))
T_15: (in signature of bios_video_set_mode : void)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: 
T_16: (in al : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in 0x13 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_18: (in bios_video_set_mode(0x13) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in ecx_16 : up32)
  Class: Eq_19
  DataType: up32
  OrigDataType: up32
T_20: (in 0x0036 : selector)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (segment (10C T_22 t010C)))
T_21: (in 0x010C : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_20) int32)
  OrigDataType: (memptr T_20 (struct (0 T_22 t0000)))
T_22: (in Mem0[0x0036:0x010C:word32] : word32)
  Class: Eq_22
  DataType: int32
  OrigDataType: word32
T_23: (in 0x010C : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_20) int32)
  OrigDataType: (memptr T_20 (struct (0 T_24 t0000)))
T_24: (in Mem0[0x0036:0x010C:word32] : word32)
  Class: Eq_22
  DataType: int32
  OrigDataType: word32
T_25: (in 0x0036->dw010C - 0x0036->dw010C : word32)
  Class: Eq_19
  DataType: up32
  OrigDataType: word32
T_26: (in bx_8 : (memptr (ptr Eq_38) Eq_26))
  Class: Eq_26
  DataType: (memptr (ptr Eq_38) Eq_26)
  OrigDataType: (memptr T_38 (struct (FFFFFFF8 T_41 tFFFFFFF8) (FFFFFFFC T_72 tFFFFFFFC) (0 T_43 t0000)))
T_27: (in bx : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x02 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in DPB(bx, 0x02, 8, 8) : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_38) Eq_26)
  OrigDataType: word16
T_30: (in cx_105 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in (word16) ecx_16 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_32: (in 0x00000000 : word32)
  Class: Eq_19
  DataType: up32
  OrigDataType: up32
T_33: (in ecx_16 <=u 0x00000000 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in rLoc2_55 : Eq_34)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real64
T_35: (in 0x010C : word16)
  Class: Eq_35
  DataType: (memptr (ptr Eq_20) int32)
  OrigDataType: (memptr T_20 (struct (0 T_36 t0000)))
T_36: (in Mem0[0x0036:0x010C:int32] : int32)
  Class: Eq_22
  DataType: int32
  OrigDataType: int32
T_37: (in (real64) 0x0036->dw010C : real64)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: (union (real16 u0) (real64 u1))
T_38: (in ds : (ptr Eq_38))
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (segment))
T_39: (in 0x0008 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in bx_8 - 0x0008 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem0[ds:bx_8 - 0x0008:real32] : real32)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: (union (real16 u0) (real32 u1))
T_42: (in (real64) 0x0036->dw010C * (ds->*bx_8).w0000 : word16)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real16
T_43: (in 0x0064 : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: word16
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in bx_8 + 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem56[ds:bx_8 + 0x0000:word16] : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: word16
T_47: (in rLoc3_57 : real64)
  Class: Eq_47
  DataType: real64
  OrigDataType: real64
T_48: (in 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in bx_8 + 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem56[ds:bx_8 + 0x0000:int16] : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_51: (in (real64) (ds->*bx_8).w0000 : real64)
  Class: Eq_47
  DataType: real64
  OrigDataType: real64
T_52: (in 0x00A0 : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: word16
T_53: (in 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in bx_8 + 0x0000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in Mem58[ds:bx_8 + 0x0000:word16] : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: word16
T_56: (in rLoc4_59 : real64)
  Class: Eq_56
  DataType: real64
  OrigDataType: real64
T_57: (in 0x0000 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in bx_8 + 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in Mem58[ds:bx_8 + 0x0000:int16] : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_60: (in (real64) (ds->*bx_8).w0000 : real64)
  Class: Eq_56
  DataType: real64
  OrigDataType: real64
T_61: (in rLoc5_61 : real64)
  Class: Eq_61
  DataType: real64
  OrigDataType: real64
T_62: (in rLoc4_59 * rLoc4_59 : real64)
  Class: Eq_61
  DataType: real64
  OrigDataType: real64
T_63: (in rLoc3_73 : real64)
  Class: Eq_63
  DataType: real64
  OrigDataType: real64
T_64: (in sqrt : ptr32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (fn T_67 (T_66)))
T_65: (in rLoc5_61 * rLoc5_61 : real64)
  Class: Eq_65
  DataType: real64
  OrigDataType: real64
T_66: (in rLoc5_61 + rLoc5_61 * rLoc5_61 : real64)
  Class: Eq_66
  DataType: real64
  OrigDataType: real64
T_67: (in sqrt(rLoc5_61 + rLoc5_61 * rLoc5_61) : real64)
  Class: Eq_67
  DataType: real64
  OrigDataType: real64
T_68: (in sin : ptr32)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: (ptr (fn T_69 (T_47)))
T_69: (in sin(rLoc3_57) : real64)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: (union (real16 u0) (real64 u1))
T_70: (in 0x0004 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in bx_8 - 0x0004 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in Mem58[ds:bx_8 - 0x0004:real32] : real32)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: (union (real16 u0) (real32 u1))
T_73: (in sin(rLoc3_57) * (ds->*bx_8).w0000 : word16)
  Class: Eq_73
  DataType: Eq_73
  OrigDataType: (union (real16 u0) (real64 u1))
T_74: (in sqrt(rLoc5_61 + rLoc5_61 * rLoc5_61) * (sin(rLoc3_57) * (ds->*bx_8).w0000) : real64)
  Class: Eq_74
  DataType: real64
  OrigDataType: real64
T_75: (in rLoc2_55 + sqrt(rLoc5_61 + rLoc5_61 * rLoc5_61) * (sin(rLoc3_57) * (ds->*bx_8).w0000) : real64)
  Class: Eq_75
  DataType: real64
  OrigDataType: real64
T_76: (in rLoc3_57 * (rLoc2_55 + sqrt(rLoc5_61 + rLoc5_61 * rLoc5_61) * (sin(rLoc3_57) * (ds->*bx_8).w0000)) : real64)
  Class: Eq_63
  DataType: real64
  OrigDataType: real64
T_77: (in cos : ptr32)
  Class: Eq_77
  DataType: (ptr Eq_77)
  OrigDataType: (ptr (fn T_78 (T_63)))
T_78: (in cos(rLoc3_73) : real64)
  Class: Eq_78
  DataType: real64
  OrigDataType: real64
T_79: (in sin : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_80 (T_63)))
T_80: (in sin(rLoc3_73) : real64)
  Class: Eq_80
  DataType: real64
  OrigDataType: real64
T_81: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in cx_105 - 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_84: (in cx_105 != 0x0000 : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_20 Eq_1struct Globals {
	Eq_20 * ptr0360;	// 360
} Eq_1;

typedef void (Eq_2)(byte, byte);

typedef void (Eq_6)(byte, byte);

typedef void (Eq_10)(byte, byte);

typedef void (Eq_14)(byte);

typedef struct Eq_20 {
	int32 dw010C;	// 10C
} Eq_20;

typedef Eq_41 Eq_26Eq_72 Eq_26struct Eq_26 {
	Eq_41 tFFFFFFF8;	// FFFFFFF8
	Eq_72 tFFFFFFFC;	// FFFFFFFC
	int16 w0000;	// 0
} Eq_26;

typedef union Eq_34 {
	real16 u0;
	real64 u1;
} Eq_34;

typedef union Eq_37 {
	real16 u0;
	real64 u1;
} Eq_37;

typedef struct Eq_38 {
} Eq_38;

typedef union Eq_41 {
	real16 u0;
	real32 u1;
} Eq_41;

typedef real64 (Eq_64)(real64);

typedef Eq_69 (Eq_68)(real64);

typedef union Eq_69 {
	real16 u0;
	real64 u1;
} Eq_69;

typedef union Eq_72 {
	real16 u0;
	real32 u1;
} Eq_72;

typedef union Eq_73 {
	real16 u0;
	real64 u1;
} Eq_73;

typedef real64 (Eq_77)(real64);

typedef real64 (Eq_79)(real64);

