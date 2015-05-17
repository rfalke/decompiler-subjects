// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_120/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA12C0 (ptr Eq_15) ptrFFFA12C0))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_8: (fn void (byte))
	T_8 (in bios_video_set_mode : ptr32)
	T_9 (in signature of bios_video_set_mode : void)
Eq_13: (fn void ((ptr Eq_15), word16))
	T_13 (in msdos_display_string : ptr32)
	T_14 (in signature of msdos_display_string : void)
Eq_15: (segment "Eq_15" (0 (arr word16) a0000) (140 (arr Eq_97) a0140) (280 (arr Eq_98) a0280))
	T_15 (in ds : selector)
	T_17 (in ds : (ptr Eq_15))
	T_47 (in 0xA12C : selector)
	T_93 (in Mem43[ss:fp - 0x0004:word16] : word16)
Eq_21: (segment "Eq_21" (140 (arr byte) a0140))
	T_21 (in es : (ptr Eq_21))
Eq_32: (union "Eq_32" (word16 u0) (Eq_102 u1))
	T_32 (in di_38 : (memptr (ptr Eq_15) Eq_32))
	T_52 (in di_38 + 0x0001 : word16)
	T_60 (in si_70 : (memptr (ptr Eq_15) Eq_32))
	T_61 (in 0x0140 : word16)
	T_78 (in si_70 + 0x0002 : word16)
Eq_35: (union "Eq_35" (uint16 u0) (byte u1))
	T_35 (in Mem43[ds:di_38 + 0x0000:word16] : word16)
	T_46 (in (byte) ax_51 + SLICE(ax_51, byte, 8) + 0xFD >>u 0x02 : word16)
	T_50 (in Mem58[0xA12C:di_38 + 0x0000:byte] : byte)
Eq_64: (fn void (byte, byte))
	T_64 (in bios_video_set_CGA_palette : ptr32)
	T_65 (in signature of bios_video_set_CGA_palette : void)
Eq_86: (segment "Eq_86")
	T_86 (in ss : selector)
Eq_87: (union "Eq_87" ((memptr (ptr Eq_86) Eq_103) u0) (Eq_105 u1))
	T_87 (in fp : ptr16)
Eq_97: (union "Eq_97" (word16 u0) (Eq_106 u1))
	T_97
	T_99
	T_100
Eq_98: (struct "Eq_98" 0001 (0 word16 w0000))
	T_98
Eq_102: (struct "Eq_102" 0001 (0 Eq_35 t0000) (140 word16 w0140))
	T_102
Eq_103: (struct "Eq_103" (FFFFFFFE word16 wFFFFFFFE))
	T_103
Eq_104: (struct "Eq_104" (FFFFFFFC (ptr Eq_15) ptrFFFFFFFC))
	T_104
Eq_105: (union "Eq_105" (ptr16 u0) ((memptr (ptr Eq_86) Eq_104) u1))
	T_105
Eq_106: (struct "Eq_106" 0001 (0 Eq_35 t0000))
	T_106
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in cx_15 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_3: (in cx : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_4: (in 0xFA : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in DPB(cx, 0xFA, 8, 8) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_6: (in di_14 : (memptr (ptr Eq_21) byte))
  Class: Eq_6
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: (memptr T_21 (struct 0001 (0 T_24 t0000)))
T_7: (in 0x0140 : word16)
  Class: Eq_6
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: word16
T_8: (in bios_video_set_mode : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_12 (T_11)))
T_9: (in signature of bios_video_set_mode : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in al : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in 0x13 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_12: (in bios_video_set_mode(0x13) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in msdos_display_string : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_19 (T_17, T_18)))
T_14: (in signature of msdos_display_string : void)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: 
T_15: (in ds : selector)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment))
T_16: (in dx : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in ds : (ptr Eq_15))
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment (140 (arr T_97) a0140) (280 (arr T_98) a0280)))
T_18: (in 0x013B : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_19: (in msdos_display_string(ds, 0x013B) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in al : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in es : (ptr Eq_21))
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (segment (140 (arr T_96) a0140)))
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di_14 + 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in Mem12[es:di_14 + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in di_14 + 0x0001 : word16)
  Class: Eq_6
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx_15 - 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_30: (in cx_15 == 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in ax_51 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di_38 : (memptr (ptr Eq_15) Eq_32))
  Class: Eq_32
  DataType: (memptr (ptr Eq_15) Eq_32)
  OrigDataType: (memptr T_15 (struct 0001 (0 T_35 t0000) (140 T_38 t0140)))
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in di_38 + 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem43[ds:di_38 + 0x0000:word16] : word16)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: word16
T_36: (in 0x0140 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in di_38 + 0x0140 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem43[ds:di_38 + 0x0140:word16] : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem43[ds:di_38 + 0x0000:word16] - Mem43[ds:di_38 + 0x0140:word16] : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_40: (in (byte) ax_51 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in SLICE(ax_51, byte, 8) : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in (byte) ax_51 + SLICE(ax_51, byte, 8) : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in 0xFD : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in (byte) ax_51 + SLICE(ax_51, byte, 8) + 0xFD : byte)
  Class: Eq_44
  DataType: uint8
  OrigDataType: uint8
T_45: (in 0x02 : byte)
  Class: Eq_45
  DataType: uint8
  OrigDataType: uint8
T_46: (in (byte) ax_51 + SLICE(ax_51, byte, 8) + 0xFD >>u 0x02 : word16)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: uint16
T_47: (in 0xA12C : selector)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment (0 (arr T_101) a0000) (140 (arr T_99) a0140)))
T_48: (in 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in di_38 + 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem58[0xA12C:di_38 + 0x0000:byte] : byte)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: byte
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_38 + 0x0001 : word16)
  Class: Eq_32
  DataType: (memptr (ptr Eq_15) Eq_32)
  OrigDataType: word16
T_53: (in cx_47 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in cx_47 - 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_56: (in 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_57: (in cx_47 != 0x0000 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in di_67 : (memptr (ptr Eq_15) word16))
  Class: Eq_58
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: (memptr T_47 (struct 0002 (0 T_76 t0000)))
T_59: (in 0x0000 : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: word16
T_60: (in si_70 : (memptr (ptr Eq_15) Eq_32))
  Class: Eq_32
  DataType: (memptr (ptr Eq_15) Eq_32)
  OrigDataType: (memptr T_17 (struct 0002 (0 T_73 t0000)))
T_61: (in 0x0140 : word16)
  Class: Eq_32
  DataType: (memptr (ptr Eq_15) Eq_32)
  OrigDataType: word16
T_62: (in 0x64 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in DPB(cx_47, 0x64, 8, 8) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_64: (in bios_video_set_CGA_palette : ptr32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (fn T_70 (T_68, T_69)))
T_65: (in signature of bios_video_set_CGA_palette : void)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: 
T_66: (in bh : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in bl : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in bh : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_69: (in bl : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_70: (in bios_video_set_CGA_palette(bh, bl) : void)
  Class: Eq_70
  DataType: void
  OrigDataType: void
T_71: (in 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in si_70 + 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in Mem58[ds:si_70 + 0x0000:word16] : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in di_67 + 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in Mem80[0xA12C:di_67 + 0x0000:word16] : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0002 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in si_70 + 0x0002 : word16)
  Class: Eq_32
  DataType: (memptr (ptr Eq_15) Eq_32)
  OrigDataType: word16
T_79: (in 0x0002 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in di_67 + 0x0002 : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: word16
T_81: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in cx_15 - 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_84: (in cx_15 == 0x0000 : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in 0x0140 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in ss : selector)
  Class: Eq_86
  DataType: (ptr Eq_86)
  OrigDataType: (ptr (segment))
T_87: (in fp : ptr16)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_86 (struct (FFFFFFFC T_93 tFFFFFFFC))) u1)) u0) ((memptr T_86 (struct (FFFFFFFE T_90 tFFFFFFFE))) u1))
T_88: (in 0x0002 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in fp - 0x0002 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in Mem40[ss:fp - 0x0002:word16] : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_91: (in 0x0004 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in fp - 0x0004 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in Mem43[ss:fp - 0x0004:word16] : word16)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: word16
T_94: (in 0xC8 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in DPB(cx_15, 0xC8, 8, 8) : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_96:
  Class: Eq_96
  DataType: byte
  OrigDataType: (struct 0001 (0 T_24 t0000))
T_97:
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: (struct 0001 (0 T_35 t0000))
T_98:
  Class: Eq_98
  DataType: Eq_98
  OrigDataType: (struct 0001 (0 T_38 t0000))
T_99:
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: (struct 0001 (0 T_50 t0000))
T_100:
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: (struct 0002 (0 word16 w0000))
T_101:
  Class: Eq_101
  DataType: word16
  OrigDataType: (struct 0002 (0 T_76 t0000))
T_102:
  Class: Eq_102
  DataType: Eq_102
  OrigDataType: 
T_103:
  Class: Eq_103
  DataType: Eq_103
  OrigDataType: 
T_104:
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: 
T_105:
  Class: Eq_105
  DataType: Eq_105
  OrigDataType: 
T_106:
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: 
*/
typedef Eq_15 Eq_1struct Globals {
	Eq_15 * ptrFFFA12C0;	// FFFA12C0
} Eq_1;

typedef void (Eq_8)(byte);

typedef void (Eq_13)(Eq_15 *, word16);

typedef  Eq_15[]Eq_97[]Eq_98[]struct Eq_15 {
	word16 a0000[];	// 0
	Eq_97 a0140[];	// 140
	Eq_98 a0280[];	// 280
} Eq_15;

typedef  Eq_21[]struct Eq_21 {
	byte a0140[];	// 140
} Eq_21;

typedef union Eq_32 {
	word16 u0;
	Eq_102 u1;
} Eq_32;

typedef union Eq_35 {
	uint16 u0;
	byte u1;
} Eq_35;

typedef void (Eq_64)(byte, byte);

typedef struct Eq_86 {
} Eq_86;

typedef union Eq_87 {
	Eq_103 Eq_86::* u0;
	Eq_105 u1;
} Eq_87;

typedef union Eq_97 {
	word16 u0;
	Eq_106 u1;
} Eq_97;

typedef struct Eq_98 {	// size: 1 1
	word16 w0000;	// 0
} Eq_98;

typedef Eq_35 Eq_102struct Eq_102 {	// size: 1 1
	Eq_35 t0000;	// 0
	word16 w0140;	// 140
} Eq_102;

typedef struct Eq_103 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_103;

typedef Eq_15 Eq_104struct Eq_104 {
	Eq_15 * ptrFFFFFFFC;	// FFFFFFFC
} Eq_104;

typedef union Eq_105 {
	ptr16 u0;
	Eq_104 Eq_86::* u1;
} Eq_105;

typedef Eq_35 Eq_106struct Eq_106 {	// size: 1 1
	Eq_35 t0000;	// 0
} Eq_106;

