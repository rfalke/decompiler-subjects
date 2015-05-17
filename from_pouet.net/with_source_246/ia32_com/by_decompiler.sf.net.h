// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_246/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_29) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn byte (byte, byte, byte, (ptr Eq_7)))
	T_2 (in fn0C00_0196 : ptr32)
	T_3 (in signature of fn0C00_0196 : void)
Eq_7: (segment "Eq_7")
	T_7 (in ds : (ptr Eq_7))
	T_11 (in ds : (ptr Eq_7))
	T_19 (in ds : selector)
Eq_17: (fn void ((ptr Eq_7), word16))
	T_17 (in msdos_display_string : ptr32)
	T_18 (in signature of msdos_display_string : void)
Eq_27: (struct "Eq_27" 0001 (0 Eq_32 t0000))
	T_27 (in di_17 : (memptr (ptr Eq_29) Eq_27))
	T_28 (in 0xA000 : word16)
	T_39 (in di_17 + 0x0001 : word16)
	T_40 (in 0x0000 : word16)
Eq_29: (segment "Eq_29" (FFFFA000 (arr Eq_91 24577) aFFFFA000) (0 Eq_27 t0000) (A000 Eq_27 tA000))
	T_29 (in 0xA000 : selector)
Eq_32: (union "Eq_32" (ui16 u0) (byte u1))
	T_32 (in Mem0[0xA000:di_17 + 0x0000:byte] : byte)
	T_34 (in (0xA000->*di_17).t0000 << 0x01 : word16)
	T_37 (in Mem23[0xA000:di_17 + 0x0000:byte] : byte)
Eq_56: (segment "Eq_56")
	T_56 (in cs : selector)
Eq_63: (fn void ())
	T_63 (in __hlt : ptr32)
Eq_65: (fn void (byte))
	T_65 (in bios_video_set_mode : ptr32)
	T_66 (in signature of bios_video_set_mode : void)
Eq_73: (segment "Eq_73")
	T_73 (in cs : selector)
Eq_91: (struct "Eq_91" 0001 (0 Eq_32 t0000))
	T_91
	T_92
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in fn0C00_0196 : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_12 (T_8, T_9, T_10, T_11)))
T_3: (in signature of fn0C00_0196 : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in ah : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in ch : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_7: (in ds : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_8: (in 0x13 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_9: (in ah : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_10: (in ch : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_11: (in ds : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_12: (in fn0C00_0196(0x13, ah, ch, ds) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in cx_12 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in cx : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x06 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(cx, 0x06, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_17: (in msdos_display_string : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_22 (T_11, T_21)))
T_18: (in signature of msdos_display_string : void)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: 
T_19: (in ds : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_20: (in dx : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in 0x01EF : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_22: (in msdos_display_string(ds, 0x01EF) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in cx_12 - 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_26: (in cx_12 != 0x0000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in di_17 : (memptr (ptr Eq_29) Eq_27))
  Class: Eq_27
  DataType: (memptr (ptr Eq_29) Eq_27)
  OrigDataType: (memptr T_29 (struct 0001 (0 T_32 t0000)))
T_28: (in 0xA000 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_29) Eq_27)
  OrigDataType: word16
T_29: (in 0xA000 : selector)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (segment (FFFFA000 (arr T_91 24577) aFFFFA000)))
T_30: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_17 + 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in Mem0[0xA000:di_17 + 0x0000:byte] : byte)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: byte
T_33: (in 0x01 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in (0xA000->*di_17).t0000 << 0x01 : word16)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: ui16
T_35: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in di_17 + 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem23[0xA000:di_17 + 0x0000:byte] : byte)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: byte
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_17 + 0x0001 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_29) Eq_27)
  OrigDataType: word16
T_40: (in 0x0000 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_29) Eq_27)
  OrigDataType: word16
T_41: (in di_17 != &Eq_29::t0000 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in bx : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in bl : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in 0x01 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in bl + 0x01 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in DPB(bx, bl + 0x01, 0, 8) : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in (byte) DPB(bx, bl + 0x01, 0, 8) : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0xEF : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in (byte) DPB(bx, bl + 0x01, 0, 8) & 0xEF : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in 0x0F : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in (byte) DPB(bx, bl + 0x01, 0, 8) & 0xEF & 0x0F : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x03 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in (byte) DPB(bx, bl + 0x01, 0, 8) & 0xEF & 0x0F & 0x03 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in 0x03 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_55: (in ((byte) DPB(bx, bl + 0x01, 0, 8) & 0xEF & 0x0F & 0x03) != 0x03 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in cs : selector)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (segment))
T_57: (in 0x01B0 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in SEQ(cs, 0x01B0) : ptr32)
  Class: Eq_58
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_59: (in 0x01B0 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in SEQ(cs, 0x01B0) : ptr32)
  Class: Eq_60
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_61: (in 0x01B0 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in SEQ(cs, 0x01B0) : ptr32)
  Class: Eq_62
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_63: (in __hlt : ptr32)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (fn T_64 ()))
T_64: (in __hlt() : void)
  Class: Eq_64
  DataType: void
  OrigDataType: void
T_65: (in bios_video_set_mode : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_68 (T_4)))
T_66: (in signature of bios_video_set_mode : void)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: 
T_67: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_68: (in bios_video_set_mode(al) : void)
  Class: Eq_68
  DataType: void
  OrigDataType: void
T_69: (in ax_5 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in ax : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in 0xF4 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in DPB(ax, 0xF4, 0, 8) : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_73: (in cs : selector)
  Class: Eq_73
  DataType: (ptr Eq_73)
  OrigDataType: (ptr (segment))
T_74: (in bp : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in SEQ(cs, bp) : ptr32)
  Class: Eq_75
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_76: (in 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_77: (in ax_5 != 0x0001 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in cx_23 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in cx : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in 0x07 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in DPB(cx, 0x07, 0, 8) : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_82: (in SEQ(cs, bp) : ptr32)
  Class: Eq_82
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_83: (in SEQ(cs, bp) : ptr32)
  Class: Eq_83
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_84: (in SEQ(cs, bp) : ptr32)
  Class: Eq_84
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_85: (in ch_35 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in cx_23 - 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in SLICE(cx_23 - 0x0001, byte, 8) : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_89: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_90: (in cx_23 != 0x0001 : bool)
  Class: Eq_90
  DataType: bool
  OrigDataType: bool
T_91:
  Class: Eq_91
  DataType: Eq_91
  OrigDataType: (struct 0001 (0 T_32 t0000))
T_92:
  Class: Eq_91
  DataType: Eq_91
  OrigDataType: (struct 0001 (0 T_37 t0000))
*/
typedef Eq_29 Eq_1struct Globals {
	Eq_29 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef byte (Eq_2)(byte, byte, byte, Eq_7 *);

typedef struct Eq_7 {
} Eq_7;

typedef void (Eq_17)(Eq_7 *, word16);

typedef Eq_32 Eq_27struct Eq_27 {	// size: 1 1
	Eq_32 t0000;	// 0
} Eq_27;

typedef Eq_91 Eq_29[24577]Eq_27Eq_27struct Eq_29 {
	Eq_91 aFFFFA000[24577];	// FFFFA000
	Eq_27 t0000;	// 0
	Eq_27 tA000;	// A000
} Eq_29;

typedef union Eq_32 {
	ui16 u0;
	byte u1;
} Eq_32;

typedef struct Eq_56 {
} Eq_56;

typedef void (Eq_63)();

typedef void (Eq_65)(byte);

typedef struct Eq_73 {
} Eq_73;

typedef Eq_32 Eq_91struct Eq_91 {	// size: 1 1
	Eq_32 t0000;	// 0
} Eq_91;

