// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_223/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, int8))
	T_7 (in __outb : ptr32)
Eq_19: (fn void (word16, uint8))
	T_19 (in __outb : ptr32)
Eq_22: (fn void (word16, uint8))
	T_22 (in __outb : ptr32)
Eq_25: (fn void (word16, uint8))
	T_25 (in __outb : ptr32)
Eq_35: (segment "Eq_35" (1F2 Eq_48 t01F2) (1F6 Eq_37 t01F6) (1FA real32 r01FA) (202 Eq_42 t0202) (206 Eq_53 t0206) (20A Eq_69 t020A) (20E Eq_83 t020E) (212 word32 dw0212) (216 word32 dw0216))
	T_35 (in ss : selector)
Eq_37: (union "Eq_37" (real16 u0) (real32 u1))
	T_37 (in Mem0[ss:0x01F6:real32] : real32)
Eq_38: (segment "Eq_38" (1EA word16 w01EA) (1F0 word16 w01F0))
	T_38 (in ds : (ptr Eq_38))
Eq_41: (union "Eq_41" (real16 u0) (real64 u1))
	T_41 (in (real64) ds->w01F0 : real64)
Eq_42: (union "Eq_42" (real16 u0) (real32 u1))
	T_42 (in ss->t01F6 / (real64) ds->w01F0 : word16)
	T_44 (in Mem32[ss:0x0202:real32] : real32)
	T_65 (in Mem40[ss:0x0202:real32] : real32)
Eq_48: (union "Eq_48" (real16 u0) (real32 u1))
	T_48 (in Mem32[ss:0x01F2:real32] : real32)
	T_82 (in Mem45[ss:0x01F2:real32] : real32)
Eq_49: (union "Eq_49" (real16 u0) (word16 u1))
	T_49 (in ss->r01FA - ss->t01F2 : word16)
Eq_52: (union "Eq_52" (real16 u0) (real64 u1))
	T_52 (in (real64) ds->w01F0 : real64)
Eq_53: (union "Eq_53" (real16 u0) (real32 u1))
	T_53 (in (ss->r01FA - ss->t01F2) / (real64) ds->w01F0 : word16)
	T_55 (in Mem36[ss:0x0206:real32] : real32)
	T_76 (in Mem45[ss:0x0206:real32] : real32)
Eq_68: (union "Eq_68" (real16 u0) (real64 u1))
	T_68 (in (real64) ds->w01EA : real64)
Eq_69: (union "Eq_69" (real16 u0) (real32 u1))
	T_69 (in ss->t0202 * (real64) ds->w01EA : word16)
	T_71 (in Mem43[ss:0x020A:real32] : real32)
Eq_79: (union "Eq_79" (real16 u0) (real64 u1))
	T_79 (in (real64) ds->w01EA : real64)
Eq_83: (union "Eq_83" (real16 u0) (real32 u1))
	T_83 (in ss->t0206 * (real64) ds->w01EA + ss->t01F2 : word16)
	T_85 (in Mem49[ss:0x020E:real32] : real32)
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C9 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in al_20 : int8)
  Class: Eq_9
  DataType: int8
  OrigDataType: int8
T_10: (in __outb(0x03C9, al_20) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in cx : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0x0001 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in cx - 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_14: (in (byte) cx : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: byte
T_15: (in cl : byte)
  Class: Eq_14
  DataType: uint8
  OrigDataType: uint8
T_16: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_17: (in cx != 0x0000 : bool)
  Class: Eq_17
  DataType: bool
  OrigDataType: bool
T_18: (in 0x3F : byte)
  Class: Eq_9
  DataType: int8
  OrigDataType: byte
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_15)))
T_20: (in 0x03C8 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C8, cl) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_24 (T_23, T_15)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in __outb(0x03C9, cl) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in __outb : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_27 (T_26, T_15)))
T_26: (in 0x03C9 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in __outb(0x03C9, cl) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in 0x01 : byte)
  Class: Eq_28
  DataType: uint8
  OrigDataType: uint8
T_29: (in cl >>u 0x01 : word16)
  Class: Eq_29
  DataType: uint16
  OrigDataType: uint16
T_30: (in 0x03 : byte)
  Class: Eq_30
  DataType: uint8
  OrigDataType: uint8
T_31: (in (cl >>u 0x01) *u 0x03 : uint16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: uint16
T_32: (in (byte) ((cl >>u 0x01) *u 0x03) : byte)
  Class: Eq_9
  DataType: int8
  OrigDataType: byte
T_33: (in 0x3F : byte)
  Class: Eq_9
  DataType: int8
  OrigDataType: int8
T_34: (in al_20 < 0x3F : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in ss : selector)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (segment (1F2 T_48 t01F2) (1F6 T_37 t01F6) (1FA T_46 t01FA) (202 T_42 t0202) (206 T_53 t0206) (20A T_71 t020A) (20E T_85 t020E) (212 T_88 t0212) (216 T_91 t0216)))
T_36: (in 0x01F6 : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_35) Eq_37)
  OrigDataType: (memptr T_35 (struct (0 T_37 t0000)))
T_37: (in Mem0[ss:0x01F6:real32] : real32)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: (union (real16 u0) (real32 u1))
T_38: (in ds : (ptr Eq_38))
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (segment (1EA T_61 t01EA) (1F0 T_40 t01F0)))
T_39: (in 0x01F0 : word16)
  Class: Eq_39
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_40 t0000)))
T_40: (in Mem0[ds:0x01F0:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in (real64) ds->w01F0 : real64)
  Class: Eq_41
  DataType: Eq_41
  OrigDataType: (union (real16 u0) (real64 u1))
T_42: (in ss->t01F6 / (real64) ds->w01F0 : word16)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real16
T_43: (in 0x0202 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_35) Eq_42)
  OrigDataType: (memptr T_35 (struct (0 T_44 t0000)))
T_44: (in Mem32[ss:0x0202:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_45: (in 0x01FA : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_35) real32)
  OrigDataType: (memptr T_35 (struct (0 T_46 t0000)))
T_46: (in Mem32[ss:0x01FA:real32] : real32)
  Class: Eq_46
  DataType: real32
  OrigDataType: real32
T_47: (in 0x01F2 : word16)
  Class: Eq_47
  DataType: (memptr (ptr Eq_35) Eq_48)
  OrigDataType: (memptr T_35 (struct (0 T_48 t0000)))
T_48: (in Mem32[ss:0x01F2:real32] : real32)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: real32
T_49: (in ss->r01FA - ss->t01F2 : word16)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: (union (real16 u0) (word16 u1))
T_50: (in 0x01F0 : word16)
  Class: Eq_50
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_51 t0000)))
T_51: (in Mem32[ds:0x01F0:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_52: (in (real64) ds->w01F0 : real64)
  Class: Eq_52
  DataType: Eq_52
  OrigDataType: (union (real16 u0) (real64 u1))
T_53: (in (ss->r01FA - ss->t01F2) / (real64) ds->w01F0 : word16)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: real16
T_54: (in 0x0206 : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_35) Eq_53)
  OrigDataType: (memptr T_35 (struct (0 T_55 t0000)))
T_55: (in Mem36[ss:0x0206:real32] : real32)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: real32
T_56: (in 0x01F0 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_40 t0000)))
T_57: (in Mem36[ds:0x01F0:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_58: (in 0x0014 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in ds->w01F0 + 0x0014 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_60: (in Mem38[ds:0x01F0:word16] : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_61: (in di : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x01EA : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_63 t0000)))
T_63: (in Mem40[ds:0x01EA:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0202 : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_35) Eq_42)
  OrigDataType: (memptr T_35 (struct (0 T_65 t0000)))
T_65: (in Mem40[ss:0x0202:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: (union (real16 u0) (real32 u1))
T_66: (in 0x01EA : word16)
  Class: Eq_66
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_67 t0000)))
T_67: (in Mem40[ds:0x01EA:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_68: (in (real64) ds->w01EA : real64)
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: (union (real16 u0) (real64 u1))
T_69: (in ss->t0202 * (real64) ds->w01EA : word16)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: real16
T_70: (in 0x020A : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_35) Eq_69)
  OrigDataType: (memptr T_35 (struct (0 T_71 t0000)))
T_71: (in Mem43[ss:0x020A:real32] : real32)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: real32
T_72: (in si : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_73: (in 0x01EA : word16)
  Class: Eq_73
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_74 t0000)))
T_74: (in Mem45[ds:0x01EA:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0206 : word16)
  Class: Eq_75
  DataType: (memptr (ptr Eq_35) Eq_53)
  OrigDataType: (memptr T_35 (struct (0 T_76 t0000)))
T_76: (in Mem45[ss:0x0206:real32] : real32)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: (union (real16 u0) (real32 u1))
T_77: (in 0x01EA : word16)
  Class: Eq_77
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_78 t0000)))
T_78: (in Mem45[ds:0x01EA:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_79: (in (real64) ds->w01EA : real64)
  Class: Eq_79
  DataType: Eq_79
  OrigDataType: (union (real16 u0) (real64 u1))
T_80: (in ss->t0206 * (real64) ds->w01EA : word16)
  Class: Eq_80
  DataType: real16
  OrigDataType: real16
T_81: (in 0x01F2 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_35) Eq_48)
  OrigDataType: (memptr T_35 (struct (0 T_82 t0000)))
T_82: (in Mem45[ss:0x01F2:real32] : real32)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: (union (real16 u0) (real32 u1))
T_83: (in ss->t0206 * (real64) ds->w01EA + ss->t01F2 : word16)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: real16
T_84: (in 0x020E : word16)
  Class: Eq_84
  DataType: (memptr (ptr Eq_35) Eq_83)
  OrigDataType: (memptr T_35 (struct (0 T_85 t0000)))
T_85: (in Mem49[ss:0x020E:real32] : real32)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: real32
T_86: (in 0x00000000 : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_87: (in 0x0212 : word16)
  Class: Eq_87
  DataType: (memptr (ptr Eq_35) word32)
  OrigDataType: (memptr T_35 (struct (0 T_88 t0000)))
T_88: (in Mem50[ss:0x0212:word32] : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_89: (in 0x00000000 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in 0x0216 : word16)
  Class: Eq_90
  DataType: (memptr (ptr Eq_35) word32)
  OrigDataType: (memptr T_35 (struct (0 T_91 t0000)))
T_91: (in Mem51[ss:0x0216:word32] : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, int8);

typedef void (Eq_19)(word16, uint8);

typedef void (Eq_22)(word16, uint8);

typedef void (Eq_25)(word16, uint8);

typedef Eq_48 Eq_35Eq_37 Eq_35Eq_42 Eq_35Eq_53 Eq_35Eq_69 Eq_35Eq_83 Eq_35struct Eq_35 {
	Eq_48 t01F2;	// 1F2
	Eq_37 t01F6;	// 1F6
	real32 r01FA;	// 1FA
	Eq_42 t0202;	// 202
	Eq_53 t0206;	// 206
	Eq_69 t020A;	// 20A
	Eq_83 t020E;	// 20E
	word32 dw0212;	// 212
	word32 dw0216;	// 216
} Eq_35;

typedef union Eq_37 {
	real16 u0;
	real32 u1;
} Eq_37;

typedef struct Eq_38 {
	word16 w01EA;	// 1EA
	word16 w01F0;	// 1F0
} Eq_38;

typedef union Eq_41 {
	real16 u0;
	real64 u1;
} Eq_41;

typedef union Eq_42 {
	real16 u0;
	real32 u1;
} Eq_42;

typedef union Eq_48 {
	real16 u0;
	real32 u1;
} Eq_48;

typedef union Eq_49 {
	real16 u0;
	word16 u1;
} Eq_49;

typedef union Eq_52 {
	real16 u0;
	real64 u1;
} Eq_52;

typedef union Eq_53 {
	real16 u0;
	real32 u1;
} Eq_53;

typedef union Eq_68 {
	real16 u0;
	real64 u1;
} Eq_68;

typedef union Eq_69 {
	real16 u0;
	real32 u1;
} Eq_69;

typedef union Eq_79 {
	real16 u0;
	real64 u1;
} Eq_79;

typedef union Eq_83 {
	real16 u0;
	real32 u1;
} Eq_83;

