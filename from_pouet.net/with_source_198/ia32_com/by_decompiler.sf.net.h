// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_198/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (segment "Eq_8")
	T_8 (in cs : selector)
Eq_15: (fn void (word16, uint8))
	T_15 (in __outb : ptr32)
Eq_18: (union "Eq_18" (uint8 u0) (uint16 u1))
	T_18 (in al_21 : Eq_18)
	T_20 (in cl_16 >>u 0x01 : word16)
Eq_21: (fn void (word16, Eq_18))
	T_21 (in __outb : ptr32)
Eq_24: (fn void (word16, Eq_18))
	T_24 (in __outb : ptr32)
Eq_27: (fn void (word16, uint16))
	T_27 (in __outb : ptr32)
Eq_37: (segment "Eq_37" (100 int16 w0100) (135 word16 w0135))
	T_37 (in ds : (ptr Eq_37))
Eq_44: (union "Eq_44" (real16 u0) (real64 u1))
	T_44 (in rLoc1_34 : Eq_44)
	T_51 (in (real64) ds->w0100 / (real64) ds->w0135 : word16)
Eq_47: (union "Eq_47" (real16 u0) (real64 u1))
	T_47 (in (real64) ds->w0100 : real64)
Eq_50: (union "Eq_50" (real16 u0) (real64 u1))
	T_50 (in (real64) ds->w0135 : real64)
Eq_53: (fn real64 (Eq_44))
	T_53 (in cos : ptr32)
Eq_56: (fn real64 (Eq_44))
	T_56 (in sin : ptr32)
Eq_59: (segment "Eq_59")
	T_59 (in ss : selector)
Eq_60: (union "Eq_60" (ptr16 u0) ((memptr (ptr Eq_59) Eq_85) u1))
	T_60 (in fp : ptr16)
Eq_69: (fn real64 (real64, real64, real64, real64))
	T_69 (in fn0C00_01BE : ptr32)
	T_70 (in signature of fn0C00_01BE : void)
	T_77 (in fn0C00_01BE : ptr32)
	T_80 (in fn0C00_01BE : ptr32)
Eq_85: (struct "Eq_85" (FFFFFFFE word16 wFFFFFFFE))
	T_85
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
T_7: (in cl_16 : uint8)
  Class: Eq_7
  DataType: uint8
  OrigDataType: uint8
T_8: (in cs : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in (byte) cs : byte)
  Class: Eq_7
  DataType: uint8
  OrigDataType: byte
T_10: (in cx_15 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x10 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16, T_7)))
T_16: (in 0x03C8 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in __outb(0x03C8, cl_16) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in al_21 : Eq_18)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: uint8
T_19: (in 0x01 : byte)
  Class: Eq_19
  DataType: uint8
  OrigDataType: uint8
T_20: (in cl_16 >>u 0x01 : word16)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: uint16
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22, T_18)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in __outb(0x03C9, al_21) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_26 (T_25, T_18)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in __outb(0x03C9, al_21) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_31 (T_28, T_30)))
T_28: (in 0x03C9 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x01 : byte)
  Class: Eq_29
  DataType: uint8
  OrigDataType: uint8
T_30: (in al_21 >>u 0x01 : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in __outb(0x03C9, al_21 >>u 0x01) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in cx_15 - 0x0001 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_34: (in (byte) cx_15 : byte)
  Class: Eq_7
  DataType: uint8
  OrigDataType: byte
T_35: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_36: (in cx_15 != 0x0000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in ds : (ptr Eq_37))
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (segment (100 T_39 t0100) (135 T_49 t0135)))
T_38: (in 0x0100 : word16)
  Class: Eq_38
  DataType: (memptr (ptr Eq_37) int16)
  OrigDataType: (memptr T_37 (struct (0 T_39 t0000)))
T_39: (in Mem0[ds:0x0100:word16] : word16)
  Class: Eq_39
  DataType: int16
  OrigDataType: word16
T_40: (in 0x0002 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in ds->w0100 + 0x0002 : word16)
  Class: Eq_39
  DataType: int16
  OrigDataType: word16
T_42: (in 0x0100 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_37) int16)
  OrigDataType: (memptr T_37 (struct (0 T_43 t0000)))
T_43: (in Mem32[ds:0x0100:word16] : word16)
  Class: Eq_39
  DataType: int16
  OrigDataType: word16
T_44: (in rLoc1_34 : Eq_44)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: real64
T_45: (in 0x0100 : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_37) int16)
  OrigDataType: (memptr T_37 (struct (0 T_46 t0000)))
T_46: (in Mem32[ds:0x0100:int16] : int16)
  Class: Eq_39
  DataType: int16
  OrigDataType: int16
T_47: (in (real64) ds->w0100 : real64)
  Class: Eq_47
  DataType: Eq_47
  OrigDataType: (union (real16 u0) (real64 u1))
T_48: (in 0x0135 : word16)
  Class: Eq_48
  DataType: (memptr (ptr Eq_37) word16)
  OrigDataType: (memptr T_37 (struct (0 T_49 t0000)))
T_49: (in Mem32[ds:0x0135:word16] : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in (real64) ds->w0135 : real64)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: (union (real16 u0) (real64 u1))
T_51: (in (real64) ds->w0100 / (real64) ds->w0135 : word16)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: real16
T_52: (in rLoc1_36 : real64)
  Class: Eq_52
  DataType: real64
  OrigDataType: real64
T_53: (in cos : ptr32)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (fn T_54 (T_44)))
T_54: (in cos(rLoc1_34) : real64)
  Class: Eq_52
  DataType: real64
  OrigDataType: real64
T_55: (in rLoc2_37 : real64)
  Class: Eq_52
  DataType: real64
  OrigDataType: real64
T_56: (in sin : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_57 (T_44)))
T_57: (in sin(rLoc1_34) : real64)
  Class: Eq_52
  DataType: real64
  OrigDataType: real64
T_58: (in 0x0140 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in ss : selector)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: (ptr (segment))
T_60: (in fp : ptr16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: (union (ptr16 u0) ((memptr T_59 (struct (FFFFFFFE T_63 tFFFFFFFE))) u1))
T_61: (in 0x0002 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in fp - 0x0002 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in Mem41[ss:fp - 0x0002:word16] : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_64: (in rLoc3_51 : real64)
  Class: Eq_64
  DataType: real64
  OrigDataType: real64
T_65: (in 0x0140 : word16)
  Class: Eq_65
  DataType: int16
  OrigDataType: int16
T_66: (in -0x0140 : word16)
  Class: Eq_66
  DataType: int16
  OrigDataType: int16
T_67: (in (real64) -0x0140 : real64)
  Class: Eq_64
  DataType: real64
  OrigDataType: real64
T_68: (in rLoc4_53 : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_69: (in fn0C00_01BE : ptr32)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (fn T_76 (T_75, T_64, T_55, T_52)))
T_70: (in signature of fn0C00_01BE : void)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: 
T_71: (in rArg0 : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_72: (in rArg1 : real64)
  Class: Eq_64
  DataType: real64
  OrigDataType: real64
T_73: (in rArg2 : real64)
  Class: Eq_52
  DataType: real64
  OrigDataType: real64
T_74: (in rArg3 : real64)
  Class: Eq_52
  DataType: real64
  OrigDataType: real64
T_75: (in 40960 : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_76: (in fn0C00_01BE(40960, rLoc3_51, rLoc2_37, rLoc1_36) : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_77: (in fn0C00_01BE : ptr32)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (fn T_79 (T_78, T_64, T_52, T_55)))
T_78: (in 65336 : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_79: (in fn0C00_01BE(65336, rLoc3_51, rLoc1_36, rLoc2_37) : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_80: (in fn0C00_01BE : ptr32)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (fn T_81 (T_68, T_64, T_52, T_55)))
T_81: (in fn0C00_01BE(rLoc4_53, rLoc3_51, rLoc1_36, rLoc2_37) : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_82: (in rArg1 * rArg2 : real64)
  Class: Eq_82
  DataType: real64
  OrigDataType: real64
T_83: (in rArg0 * rArg3 : real64)
  Class: Eq_83
  DataType: real64
  OrigDataType: real64
T_84: (in rArg1 * rArg2 - rArg0 * rArg3 : real64)
  Class: Eq_84
  DataType: real64
  OrigDataType: real64
T_85:
  Class: Eq_85
  DataType: Eq_85
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_8 {
} Eq_8;

typedef void (Eq_15)(word16, uint8);

typedef union Eq_18 {
	uint8 u0;
	uint16 u1;
} Eq_18;

typedef void (Eq_21)(word16, Eq_18);

typedef void (Eq_24)(word16, Eq_18);

typedef void (Eq_27)(word16, uint16);

typedef struct Eq_37 {
	int16 w0100;	// 100
	word16 w0135;	// 135
} Eq_37;

typedef union Eq_44 {
	real16 u0;
	real64 u1;
} Eq_44;

typedef union Eq_47 {
	real16 u0;
	real64 u1;
} Eq_47;

typedef union Eq_50 {
	real16 u0;
	real64 u1;
} Eq_50;

typedef real64 (Eq_53)(Eq_44);

typedef real64 (Eq_56)(Eq_44);

typedef struct Eq_59 {
} Eq_59;

typedef union Eq_60 {
	ptr16 u0;
	Eq_85 Eq_59::* u1;
} Eq_60;

typedef real64 (Eq_69)(real64, real64, real64, real64);

typedef struct Eq_85 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_85;

