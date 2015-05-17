// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_171/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_32: (struct "Eq_32" (230 bcu8 b0230))
	T_32 (in di_91 : (memptr (ptr Eq_57) Eq_32))
	T_49 (in ((int16) fn0C00_0165(fn0C00_0165((real64) (dx_ax_70 % 0x0028), rLoc3_82, rLoc2_81), rLoc3_82, rLoc2_81) + 0x0064) *s 0x0140 + (int16) rLoc3_82 : word16)
Eq_33: (fn real64 (real64, real64, real64))
	T_33 (in fn0C00_0165 : ptr32)
	T_34 (in signature of fn0C00_0165 : void)
	T_38 (in fn0C00_0165 : ptr32)
Eq_57: (segment "Eq_57" (180 (arr byte) a0180))
	T_57 (in es : (ptr Eq_57))
Eq_83: (segment "Eq_83" (0 (arr byte) a0000))
	T_83 (in es_115 : (ptr Eq_83))
	T_87 (in SLICE(ds->ptr0000, selector, 16) : selector)
Eq_84: (segment "Eq_84" (0 segptr32 ptr0000) (180 (arr byte) a0180))
	T_84 (in ds : (ptr Eq_84))
Eq_108: (fn real64 (real64))
	T_108 (in cos : ptr32)
Eq_110: (fn real64 (real64))
	T_110 (in sin : ptr32)
Eq_112: (fn real64 (real64))
	T_112 (in cos : ptr32)
Eq_114: (fn real64 (real64))
	T_114 (in sin : ptr32)
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
T_7: (in dx_ax_62 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in 0x0000 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in cx_105 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in SEQ(0x0000, cx_105) : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_11: (in dx_ax_65 : uint32)
  Class: Eq_11
  DataType: uint32
  OrigDataType: uint32
T_12: (in 0x0028 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in dx_ax_62 % 0x0028 : uint16)
  Class: Eq_13
  DataType: uint16
  OrigDataType: uint16
T_14: (in SEQ(dx_ax_62 % 0x0028, cx_105) : word32)
  Class: Eq_11
  DataType: uint32
  OrigDataType: word32
T_15: (in dx_ax_70 : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x0028 : word16)
  Class: Eq_17
  DataType: uint16
  OrigDataType: uint16
T_18: (in dx_ax_65 /u 0x0028 : uint16)
  Class: Eq_18
  DataType: uint16
  OrigDataType: uint16
T_19: (in SEQ(0x0000, dx_ax_65 /u 0x0028) : word32)
  Class: Eq_15
  DataType: word32
  OrigDataType: word32
T_20: (in dx_ax_72 : uint32)
  Class: Eq_20
  DataType: uint32
  OrigDataType: uint32
T_21: (in 0x0028 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in dx_ax_70 % 0x0028 : uint16)
  Class: Eq_22
  DataType: uint16
  OrigDataType: uint16
T_23: (in dx_ax_65 /u 0x0028 : uint16)
  Class: Eq_23
  DataType: uint16
  OrigDataType: uint16
T_24: (in SEQ(dx_ax_70 % 0x0028, dx_ax_65 /u 0x0028) : word32)
  Class: Eq_20
  DataType: uint32
  OrigDataType: word32
T_25: (in rLoc2_81 : real64)
  Class: Eq_25
  DataType: real64
  OrigDataType: real64
T_26: (in dx_ax_62 % 0x0028 : uint16)
  Class: Eq_26
  DataType: uint16
  OrigDataType: uint16
T_27: (in (real64) (dx_ax_62 % 0x0028) : real64)
  Class: Eq_25
  DataType: real64
  OrigDataType: real64
T_28: (in rLoc3_82 : real64)
  Class: Eq_28
  DataType: real64
  OrigDataType: real64
T_29: (in 0x0028 : word16)
  Class: Eq_29
  DataType: uint16
  OrigDataType: uint16
T_30: (in dx_ax_72 /u 0x0028 : uint16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in (real64) (dx_ax_72 /u 0x0028) : real64)
  Class: Eq_28
  DataType: real64
  OrigDataType: real64
T_32: (in di_91 : (memptr (ptr Eq_57) Eq_32))
  Class: Eq_32
  DataType: (memptr (ptr Eq_57) Eq_32)
  OrigDataType: (memptr T_57 (struct (230 T_50 t0230)))
T_33: (in fn0C00_0165 : ptr32)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (fn T_42 (T_41, T_28, T_25)))
T_34: (in signature of fn0C00_0165 : void)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: 
T_35: (in rArg0 : real64)
  Class: Eq_35
  DataType: real64
  OrigDataType: real64
T_36: (in rArg1 : real64)
  Class: Eq_28
  DataType: real64
  OrigDataType: real64
T_37: (in rArg2 : real64)
  Class: Eq_25
  DataType: real64
  OrigDataType: real64
T_38: (in fn0C00_0165 : ptr32)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (fn T_41 (T_40, T_28, T_25)))
T_39: (in dx_ax_70 % 0x0028 : uint16)
  Class: Eq_39
  DataType: uint16
  OrigDataType: uint16
T_40: (in (real64) (dx_ax_70 % 0x0028) : real64)
  Class: Eq_35
  DataType: real64
  OrigDataType: real64
T_41: (in fn0C00_0165((real64) (dx_ax_70 % 0x0028), rLoc3_82, rLoc2_81) : real64)
  Class: Eq_35
  DataType: real64
  OrigDataType: real64
T_42: (in fn0C00_0165(fn0C00_0165((real64) (dx_ax_70 % 0x0028), rLoc3_82, rLoc2_81), rLoc3_82, rLoc2_81) : real64)
  Class: Eq_35
  DataType: real64
  OrigDataType: real64
T_43: (in (int16) fn0C00_0165(fn0C00_0165((real64) (dx_ax_70 % 0x0028), rLoc3_82, rLoc2_81), rLoc3_82, rLoc2_81) : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_44: (in 0x0064 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in (int16) fn0C00_0165(fn0C00_0165((real64) (dx_ax_70 % 0x0028), rLoc3_82, rLoc2_81), rLoc3_82, rLoc2_81) + 0x0064 : word16)
  Class: Eq_45
  DataType: int16
  OrigDataType: int16
T_46: (in 0x0140 : word16)
  Class: Eq_46
  DataType: int16
  OrigDataType: int16
T_47: (in ((int16) fn0C00_0165(fn0C00_0165((real64) (dx_ax_70 % 0x0028), rLoc3_82, rLoc2_81), rLoc3_82, rLoc2_81) + 0x0064) *s 0x0140 : int16)
  Class: Eq_47
  DataType: int16
  OrigDataType: int16
T_48: (in (int16) rLoc3_82 : int16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_49: (in ((int16) fn0C00_0165(fn0C00_0165((real64) (dx_ax_70 % 0x0028), rLoc3_82, rLoc2_81), rLoc3_82, rLoc2_81) + 0x0064) *s 0x0140 + (int16) rLoc3_82 : word16)
  Class: Eq_32
  DataType: (memptr (ptr Eq_57) Eq_32)
  OrigDataType: word16
T_50: (in al_97 : bcu8)
  Class: Eq_50
  DataType: bcu8
  OrigDataType: bcu8
T_51: (in dx_ax_72 /u 0x0028 : uint16)
  Class: Eq_51
  DataType: uint16
  OrigDataType: uint16
T_52: (in 0x80 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in DPB(dx_ax_72 /u 0x0028, 0x80, 0, 8) : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in (int16) rLoc2_81 : int16)
  Class: Eq_54
  DataType: int16
  OrigDataType: int16
T_55: (in DPB(dx_ax_72 /u 0x0028, 0x80, 0, 8) + (int16) rLoc2_81 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in (byte) (DPB(dx_ax_72 /u 0x0028, 0x80, 0, 8) + (int16) rLoc2_81) : byte)
  Class: Eq_50
  DataType: bcu8
  OrigDataType: byte
T_57: (in es : (ptr Eq_57))
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: (ptr (segment (180 (arr T_116) a0180)))
T_58: (in 0x0230 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in di_91 + 0x0230 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem0[es:di_91 + 0x0230:byte] : byte)
  Class: Eq_50
  DataType: bcu8
  OrigDataType: bcu8
T_61: (in al_97 <=u (es->*di_91).b0230 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in 0x00 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in di_42 : (memptr (ptr Eq_57) byte))
  Class: Eq_63
  DataType: (memptr (ptr Eq_57) byte)
  OrigDataType: (memptr T_57 (struct 0001 (0 T_66 t0000)))
T_64: (in 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in di_42 + 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in Mem52[es:di_42 + 0x0000:byte] : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_67: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in di_42 + 0x0001 : word16)
  Class: Eq_63
  DataType: (memptr (ptr Eq_57) byte)
  OrigDataType: word16
T_69: (in 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in cx_105 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_72: (in cx_105 == 0x0000 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in cx_105 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_76: (in cx_105 != 0x0000 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in di_91 + 0x0230 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in Mem136[es:di_91 + 0x0230:byte] : byte)
  Class: Eq_50
  DataType: bcu8
  OrigDataType: byte
T_79: (in si_110 : (memptr (ptr Eq_84) byte))
  Class: Eq_79
  DataType: (memptr (ptr Eq_84) byte)
  OrigDataType: (memptr T_84 (struct 0001 (0 T_93 t0000)))
T_80: (in 0x0180 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_84) byte)
  OrigDataType: word16
T_81: (in di_111 : (memptr (ptr Eq_83) byte))
  Class: Eq_81
  DataType: (memptr (ptr Eq_83) byte)
  OrigDataType: (memptr T_83 (struct 0001 (0 T_96 t0000)))
T_82: (in 0x0000 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_83) byte)
  OrigDataType: word16
T_83: (in es_115 : (ptr Eq_83))
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (segment (0 (arr T_118) a0000)))
T_84: (in ds : (ptr Eq_84))
  Class: Eq_84
  DataType: (ptr Eq_84)
  OrigDataType: (ptr (segment (0 T_86 t0000) (180 (arr T_117) a0180)))
T_85: (in 0x0000 : word16)
  Class: Eq_85
  DataType: (memptr (ptr Eq_84) segptr32)
  OrigDataType: (memptr T_84 (struct (0 T_86 t0000)))
T_86: (in Mem0[ds:0x0000:segptr32] : segptr32)
  Class: Eq_86
  DataType: segptr32
  OrigDataType: segptr32
T_87: (in SLICE(ds->ptr0000, selector, 16) : selector)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (segment))
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in cx_105 - 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in cx : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_91: (in 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in si_110 + 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in Mem0[ds:si_110 + 0x0000:byte] : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in di_111 + 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in Mem126[es_115:di_111 + 0x0000:byte] : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_97: (in 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in si_110 + 0x0001 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_84) byte)
  OrigDataType: word16
T_99: (in 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in di_111 + 0x0001 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_83) byte)
  OrigDataType: word16
T_101: (in 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in cx - 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_103: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_104: (in cx == 0x0000 : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in 0xFA : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in DPB(cx, 0xFA, 8, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_107: (in 0x0180 : word16)
  Class: Eq_63
  DataType: (memptr (ptr Eq_57) byte)
  OrigDataType: word16
T_108: (in cos : ptr32)
  Class: Eq_108
  DataType: (ptr Eq_108)
  OrigDataType: (ptr (fn T_109 (T_37)))
T_109: (in cos(rArg2) : real64)
  Class: Eq_109
  DataType: real64
  OrigDataType: real64
T_110: (in sin : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_111 (T_37)))
T_111: (in sin(rArg2) : real64)
  Class: Eq_111
  DataType: real64
  OrigDataType: real64
T_112: (in cos : ptr32)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (fn T_113 (T_37)))
T_113: (in cos(rArg2) : real64)
  Class: Eq_113
  DataType: real64
  OrigDataType: real64
T_114: (in sin : ptr32)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: (ptr (fn T_115 (T_37)))
T_115: (in sin(rArg2) : real64)
  Class: Eq_115
  DataType: real64
  OrigDataType: real64
T_116:
  Class: Eq_116
  DataType: byte
  OrigDataType: (struct 0001 (0 T_66 t0000))
T_117:
  Class: Eq_117
  DataType: byte
  OrigDataType: (struct 0001 (0 T_93 t0000))
T_118:
  Class: Eq_118
  DataType: byte
  OrigDataType: (struct 0001 (0 T_96 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_32 {
	bcu8 b0230;	// 230
} Eq_32;

typedef real64 (Eq_33)(real64, real64, real64);

typedef  Eq_57[]struct Eq_57 {
	byte a0180[];	// 180
} Eq_57;

typedef  Eq_83[]struct Eq_83 {
	byte a0000[];	// 0
} Eq_83;

typedef  Eq_84[]struct Eq_84 {
	segptr32 ptr0000;	// 0
	byte a0180[];	// 180
} Eq_84;

typedef real64 (Eq_108)(real64);

typedef real64 (Eq_110)(real64);

typedef real64 (Eq_112)(real64);

typedef real64 (Eq_114)(real64);

