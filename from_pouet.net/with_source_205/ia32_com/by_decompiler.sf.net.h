// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_205/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (union "Eq_13" (int16 u0) (uint16 u1))
	T_13 (in ax_88 : Eq_13)
	T_18 (in SEQ(10000 % di_226, 0x2710) / di_226 : int16)
Eq_67: (segment "Eq_67")
	T_67 (in ss : selector)
Eq_92: (segment "Eq_92" (0 (arr Eq_106) a0000))
	T_92 (in SLICE(ptrLoc06, selector, 16) : selector)
Eq_106: (struct "Eq_106" 0140 (0 byte b0000))
	T_106
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
T_7: (in di_226 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_9: (in di_226 <= 0x0000 : bool)
  Class: Eq_9
  DataType: bool
  OrigDataType: bool
T_10: (in wLoc14 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in wLoc14 + 0x0001 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in ax_88 : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: (union (int16 u0) (uint16 u1))
T_14: (in 10000 : int32)
  Class: Eq_14
  DataType: int32
  OrigDataType: int32
T_15: (in 10000 % di_226 : int16)
  Class: Eq_15
  DataType: int16
  OrigDataType: int16
T_16: (in 0x2710 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in SEQ(10000 % di_226, 0x2710) : int32)
  Class: Eq_17
  DataType: int32
  OrigDataType: int32
T_18: (in SEQ(10000 % di_226, 0x2710) / di_226 : int16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: int16
T_19: (in ax_92 : uint16)
  Class: Eq_19
  DataType: uint16
  OrigDataType: uint16
T_20: (in ax_88 + wLoc14 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in 0x001F : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in ax_88 + wLoc14 & 0x001F : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0xFFF0 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in (ax_88 + wLoc14 & 0x001F) + 0xFFF0 : word16)
  Class: Eq_19
  DataType: uint16
  OrigDataType: word16
T_25: (in si_113 : int16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_26: (in 0xFF60 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: word16
T_27: (in 0x00C7 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_28: (in 0x01E0 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_29: (in si_113 >= 0x01E0 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_226 - 0x0001 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_32: (in 0x00C7 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_33: (in di_226 != 0x00C7 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in ax_124 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in si_113 + 0x0000 : word16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: uint16
T_37: (in ax_88 *u (si_113 + 0x0000) : uint32)
  Class: Eq_37
  DataType: uint32
  OrigDataType: uint32
T_38: (in (word16) (ax_88 *u (si_113 + 0x0000)) : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: int16
T_39: (in 0x0008 : word16)
  Class: Eq_39
  DataType: uint16
  OrigDataType: uint16
T_40: (in (word16) (ax_88 *u (si_113 + 0x0000)) >> 0x0008 : word16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_41: (in 0x001F : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in (word16) (ax_88 *u (si_113 + 0x0000)) >> 0x0008 & 0x001F : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_43: (in dx_137 : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_44: (in ax_92 *u ax_92 : uint32)
  Class: Eq_44
  DataType: uint32
  OrigDataType: uint32
T_45: (in (word16) (ax_92 *u ax_92) : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 0xFFF0 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in ax_124 + 0xFFF0 : word16)
  Class: Eq_47
  DataType: uint16
  OrigDataType: uint16
T_48: (in ax_124 + 0xFFF0 : word16)
  Class: Eq_48
  DataType: uint16
  OrigDataType: uint16
T_49: (in (ax_124 + 0xFFF0) *u (ax_124 + 0xFFF0) : uint32)
  Class: Eq_49
  DataType: uint32
  OrigDataType: uint32
T_50: (in (word16) ((ax_124 + 0xFFF0) *u (ax_124 + 0xFFF0)) : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in (word16) (ax_92 *u ax_92) + (word16) ((ax_124 + 0xFFF0) *u (ax_124 + 0xFFF0)) : word16)
  Class: Eq_43
  DataType: int16
  OrigDataType: word16
T_52: (in ax_141 : ui16)
  Class: Eq_52
  DataType: ui16
  OrigDataType: word16
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: uint16
  OrigDataType: uint16
T_54: (in dx_137 >> 0x0001 : word16)
  Class: Eq_54
  DataType: int16
  OrigDataType: int16
T_55: (in 0x0004 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in dx_137 >> 0x0001 << 0x0004 : word16)
  Class: Eq_52
  DataType: ui16
  OrigDataType: ui16
T_57: (in ax_146 : int16)
  Class: Eq_57
  DataType: int16
  OrigDataType: int16
T_58: (in (int32) ax_141 : int32)
  Class: Eq_58
  DataType: int32
  OrigDataType: int32
T_59: (in (int32) ax_141 % ax_88 : int16)
  Class: Eq_59
  DataType: int16
  OrigDataType: int16
T_60: (in SEQ((int32) ax_141 % ax_88, ax_141) : int32)
  Class: Eq_60
  DataType: int32
  OrigDataType: int32
T_61: (in SEQ((int32) ax_141 % ax_88, ax_141) / ax_88 : int16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_62: (in SEQ((int32) ax_141 % ax_88, ax_141) / ax_88 + di_226 : word16)
  Class: Eq_57
  DataType: int16
  OrigDataType: word16
T_63: (in 0x00 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in DPB(ax_146, 0x00, 8, 8) : word16)
  Class: Eq_57
  DataType: int16
  OrigDataType: int16
T_65: (in DPB(ax_146, 0x00, 8, 8) <= ax_146 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0xC7 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in ss : selector)
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (segment))
T_68: (in fp : ptr16)
  Class: Eq_68
  DataType: ptr16
  OrigDataType: ptr16
T_69: (in 0x0154 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in fp - 0x0154 : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_67) byte)
  OrigDataType: (memptr T_67 (struct (0 T_72 t0000)))
T_71: (in fp - 0x0154 + si_113 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in Mem225[ss:fp - 0x0154 + si_113:byte] : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in si_113 + 0x0001 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: word16
T_75: (in dx_137 >> 0x0001 : word16)
  Class: Eq_75
  DataType: int16
  OrigDataType: int16
T_76: (in 0x0002 : word16)
  Class: Eq_76
  DataType: uint16
  OrigDataType: uint16
T_77: (in ax_88 >> 0x0002 : word16)
  Class: Eq_77
  DataType: int16
  OrigDataType: int16
T_78: (in (dx_137 >> 0x0001) - (ax_88 >> 0x0002) : word16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_79: (in 0x0000 : word16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_80: (in (dx_137 >> 0x0001) - (ax_88 >> 0x0002) >= 0x0000 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in ax_186 : int16)
  Class: Eq_57
  DataType: int16
  OrigDataType: word16
T_82: (in wLoc08_187 : int16)
  Class: Eq_57
  DataType: int16
  OrigDataType: int16
T_83: (in ax_197 : int16)
  Class: Eq_57
  DataType: int16
  OrigDataType: int16
T_84: (in 0x00 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in DPB(ax_186, 0x00, 8, 8) : word16)
  Class: Eq_57
  DataType: int16
  OrigDataType: word16
T_86: (in ax_197 > wLoc08_187 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in ax_205 : int16)
  Class: Eq_57
  DataType: int16
  OrigDataType: word16
T_88: (in bLoc0C : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in DPB(ax_197, bLoc0C, 0, 8) : word16)
  Class: Eq_57
  DataType: int16
  OrigDataType: word16
T_90: (in (byte) ax_205 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in ptrLoc06 : segptr32)
  Class: Eq_91
  DataType: segptr32
  OrigDataType: segptr32
T_92: (in SLICE(ptrLoc06, selector, 16) : selector)
  Class: Eq_92
  DataType: (ptr Eq_92)
  OrigDataType: (ptr (segment (0 (arr T_106) a0000)))
T_93: (in (word16) ptrLoc06 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in (word16) ptrLoc06 + si_113 : ptr16)
  Class: Eq_94
  DataType: ptr16
  OrigDataType: ptr16
T_95: (in SEQ(SLICE(ptrLoc06, selector, 16), (word16) ptrLoc06 + si_113) : ptr32)
  Class: Eq_95
  DataType: ptr32
  OrigDataType: ptr32
T_96: (in 0x0140 : word16)
  Class: Eq_96
  DataType: ui16
  OrigDataType: ui16
T_97: (in wLoc08_187 * 0x0140 : word16)
  Class: Eq_97
  DataType: ui16
  OrigDataType: ui16
T_98: (in SEQ(SLICE(ptrLoc06, selector, 16), (word16) ptrLoc06 + si_113)[wLoc08_187 * 0x0140] : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_99: (in 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in wLoc08_187 + 0x0001 : word16)
  Class: Eq_57
  DataType: int16
  OrigDataType: word16
T_101: (in bLoc0A : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in 0x0154 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in fp - 0x0154 : word16)
  Class: Eq_103
  DataType: (memptr (ptr Eq_67) byte)
  OrigDataType: (memptr T_67 (struct (0 T_105 t0000)))
T_104: (in fp - 0x0154 + si_113 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in Mem202[ss:fp - 0x0154 + si_113:byte] : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_106:
  Class: Eq_106
  DataType: Eq_106
  OrigDataType: (struct 0140 (0 T_98 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_13 {
	int16 u0;
	uint16 u1;
} Eq_13;

typedef struct Eq_67 {
} Eq_67;

typedef Eq_106 Eq_92[]struct Eq_92 {
	Eq_106 a0000[];	// 0
} Eq_92;

typedef struct Eq_106 {	// size: 320 140
	byte b0000;	// 0
} Eq_106;

