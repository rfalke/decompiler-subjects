// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_064/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_25) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_8: (fn void (byte))
	T_8 (in bios_video_set_mode : ptr32)
	T_9 (in signature of bios_video_set_mode : void)
Eq_14: (segment "Eq_14" (13B (arr byte) a013B))
	T_14 (in es : (ptr Eq_14))
Eq_25: (segment "Eq_25" (0 (arr word16) a0000) (13B (arr Eq_96) a013B) (27B (arr Eq_97) a027B))
	T_25 (in ds : (ptr Eq_25))
	T_41 (in 0xA000 : selector)
	T_92 (in Mem46[ss:fp - 0x0004:word16] : word16)
Eq_26: (union "Eq_26" (word16 u0) (Eq_101 u1))
	T_26 (in di_40 : (memptr (ptr Eq_25) Eq_26))
	T_46 (in di_40 + 0x0001 : word16)
	T_54 (in si_73 : (memptr (ptr Eq_25) Eq_26))
	T_55 (in 0x013B : word16)
	T_77 (in si_73 + 0x0002 : word16)
Eq_29: (union "Eq_29" (uint16 u0) (byte u1))
	T_29 (in Mem46[ds:di_40 + 0x0000:word16] : word16)
	T_40 (in (byte) ax_54 + bh + SLICE(ax_54, byte, 8) >>u 0x02 : word16)
	T_44 (in Mem61[0xA000:di_40 + 0x0000:byte] : byte)
Eq_35: (union "Eq_35" (uint16 u0) (byte u1))
	T_35 (in bh : Eq_35)
	T_69 (in dh >>u 0x04 : word16)
Eq_61: (fn void (Eq_63, byte))
	T_61 (in bios_video_set_CGA_palette : ptr32)
	T_62 (in signature of bios_video_set_CGA_palette : void)
Eq_63: (union "Eq_63" (uint16 u0) (byte u1))
	T_63 (in bh : byte)
	T_66 (in dh >>u 0x04 : word16)
Eq_85: (segment "Eq_85")
	T_85 (in ss : selector)
Eq_86: (union "Eq_86" ((memptr (ptr Eq_85) Eq_102) u0) (Eq_104 u1))
	T_86 (in fp : ptr16)
Eq_96: (union "Eq_96" (word16 u0) (Eq_105 u1))
	T_96
	T_98
	T_99
Eq_97: (struct "Eq_97" 0001 (0 word16 w0000))
	T_97
Eq_101: (struct "Eq_101" 0001 (0 Eq_29 t0000) (140 word16 w0140))
	T_101
Eq_102: (struct "Eq_102" (FFFFFFFE word16 wFFFFFFFE))
	T_102
Eq_103: (struct "Eq_103" (FFFFFFFC (ptr Eq_25) ptrFFFFFFFC))
	T_103
Eq_104: (union "Eq_104" (ptr16 u0) ((memptr (ptr Eq_85) Eq_103) u1))
	T_104
Eq_105: (struct "Eq_105" 0001 (0 Eq_29 t0000))
	T_105
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
T_6: (in di_14 : (memptr (ptr Eq_14) byte))
  Class: Eq_6
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct 0001 (0 T_17 t0000)))
T_7: (in 0x013B : word16)
  Class: Eq_6
  DataType: (memptr (ptr Eq_14) byte)
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
T_13: (in al : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in es : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment (13B (arr T_95) a013B)))
T_15: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in di_14 + 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in Mem12[es:di_14 + 0x0000:byte] : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di_14 + 0x0001 : word16)
  Class: Eq_6
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in cx_15 - 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_23: (in cx_15 == 0x0000 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in ax_54 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in ds : (ptr Eq_25))
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (segment (13B (arr T_96) a013B) (27B (arr T_97) a027B)))
T_26: (in di_40 : (memptr (ptr Eq_25) Eq_26))
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) Eq_26)
  OrigDataType: (memptr T_25 (struct 0001 (0 T_29 t0000) (140 T_32 t0140)))
T_27: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di_40 + 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem46[ds:di_40 + 0x0000:word16] : word16)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: word16
T_30: (in 0x0140 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_40 + 0x0140 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in Mem46[ds:di_40 + 0x0140:word16] : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem46[ds:di_40 + 0x0000:word16] + Mem46[ds:di_40 + 0x0140:word16] : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_34: (in (byte) ax_54 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in bh : Eq_35)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: (union (uint16 u0) (byte u1))
T_36: (in (byte) ax_54 + bh : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in SLICE(ax_54, byte, 8) : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in (byte) ax_54 + bh + SLICE(ax_54, byte, 8) : byte)
  Class: Eq_38
  DataType: uint8
  OrigDataType: uint8
T_39: (in 0x02 : byte)
  Class: Eq_39
  DataType: uint8
  OrigDataType: uint8
T_40: (in (byte) ax_54 + bh + SLICE(ax_54, byte, 8) >>u 0x02 : word16)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: uint16
T_41: (in 0xA000 : selector)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (segment (0 (arr T_100) a0000) (13B (arr T_98) a013B)))
T_42: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di_40 + 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem61[0xA000:di_40 + 0x0000:byte] : byte)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: byte
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di_40 + 0x0001 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) Eq_26)
  OrigDataType: word16
T_47: (in cx_50 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in cx_50 - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_51: (in cx_50 != 0x0000 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in di_70 : (memptr (ptr Eq_25) word16))
  Class: Eq_52
  DataType: (memptr (ptr Eq_25) word16)
  OrigDataType: (memptr T_41 (struct 0002 (0 T_75 t0000)))
T_53: (in 0x0000 : word16)
  Class: Eq_52
  DataType: (memptr (ptr Eq_25) word16)
  OrigDataType: word16
T_54: (in si_73 : (memptr (ptr Eq_25) Eq_26))
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) Eq_26)
  OrigDataType: (memptr T_25 (struct 0002 (0 T_72 t0000)))
T_55: (in 0x013B : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) Eq_26)
  OrigDataType: word16
T_56: (in 0x78 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in DPB(cx_50, 0x78, 8, 8) : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_58: (in dh : uint8)
  Class: Eq_58
  DataType: uint8
  OrigDataType: uint8
T_59: (in 0x01 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in dh + 0x01 : byte)
  Class: Eq_58
  DataType: uint8
  OrigDataType: byte
T_61: (in bios_video_set_CGA_palette : ptr32)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (fn T_68 (T_66, T_67)))
T_62: (in signature of bios_video_set_CGA_palette : void)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: 
T_63: (in bh : byte)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: byte
T_64: (in bl : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in 0x04 : byte)
  Class: Eq_65
  DataType: uint8
  OrigDataType: uint8
T_66: (in dh >>u 0x04 : word16)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: uint16
T_67: (in bl : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_68: (in bios_video_set_CGA_palette(dh >>u 0x04, bl) : void)
  Class: Eq_68
  DataType: void
  OrigDataType: void
T_69: (in dh >>u 0x04 : word16)
  Class: Eq_35
  DataType: Eq_35
  OrigDataType: uint16
T_70: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in si_73 + 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in Mem61[ds:si_73 + 0x0000:word16] : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in di_70 + 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem83[0xA000:di_70 + 0x0000:word16] : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_76: (in 0x0002 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in si_73 + 0x0002 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_25) Eq_26)
  OrigDataType: word16
T_78: (in 0x0002 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in di_70 + 0x0002 : word16)
  Class: Eq_52
  DataType: (memptr (ptr Eq_25) word16)
  OrigDataType: word16
T_80: (in 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in cx_15 - 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_82: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_83: (in cx_15 == 0x0000 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in 0x013B : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in ss : selector)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (segment))
T_86: (in fp : ptr16)
  Class: Eq_86
  DataType: Eq_86
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_85 (struct (FFFFFFFC T_92 tFFFFFFFC))) u1)) u0) ((memptr T_85 (struct (FFFFFFFE T_89 tFFFFFFFE))) u1))
T_87: (in 0x0002 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in fp - 0x0002 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem42[ss:fp - 0x0002:word16] : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0004 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in fp - 0x0004 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem46[ss:fp - 0x0004:word16] : word16)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: word16
T_93: (in 0xFA : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in DPB(cx_15, 0xFA, 8, 8) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_95:
  Class: Eq_95
  DataType: byte
  OrigDataType: (struct 0001 (0 T_17 t0000))
T_96:
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: (struct 0001 (0 T_29 t0000))
T_97:
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: (struct 0001 (0 T_32 t0000))
T_98:
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: (struct 0001 (0 T_44 t0000))
T_99:
  Class: Eq_96
  DataType: Eq_96
  OrigDataType: (struct 0002 (0 word16 w0000))
T_100:
  Class: Eq_100
  DataType: word16
  OrigDataType: (struct 0002 (0 T_75 t0000))
T_101:
  Class: Eq_101
  DataType: Eq_101
  OrigDataType: 
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
*/
typedef Eq_25 Eq_1struct Globals {
	Eq_25 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_8)(byte);

typedef  Eq_14[]struct Eq_14 {
	byte a013B[];	// 13B
} Eq_14;

typedef  Eq_25[]Eq_96[]Eq_97[]struct Eq_25 {
	word16 a0000[];	// 0
	Eq_96 a013B[];	// 13B
	Eq_97 a027B[];	// 27B
} Eq_25;

typedef union Eq_26 {
	word16 u0;
	Eq_101 u1;
} Eq_26;

typedef union Eq_29 {
	uint16 u0;
	byte u1;
} Eq_29;

typedef union Eq_35 {
	uint16 u0;
	byte u1;
} Eq_35;

typedef void (Eq_61)(Eq_63, byte);

typedef union Eq_63 {
	uint16 u0;
	byte u1;
} Eq_63;

typedef struct Eq_85 {
} Eq_85;

typedef union Eq_86 {
	Eq_102 Eq_85::* u0;
	Eq_104 u1;
} Eq_86;

typedef union Eq_96 {
	word16 u0;
	Eq_105 u1;
} Eq_96;

typedef struct Eq_97 {	// size: 1 1
	word16 w0000;	// 0
} Eq_97;

typedef Eq_29 Eq_101struct Eq_101 {	// size: 1 1
	Eq_29 t0000;	// 0
	word16 w0140;	// 140
} Eq_101;

typedef struct Eq_102 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_102;

typedef Eq_25 Eq_103struct Eq_103 {
	Eq_25 * ptrFFFFFFFC;	// FFFFFFFC
} Eq_103;

typedef union Eq_104 {
	ptr16 u0;
	Eq_103 Eq_85::* u1;
} Eq_104;

typedef Eq_29 Eq_105struct Eq_105 {	// size: 1 1
	Eq_29 t0000;	// 0
} Eq_105;

