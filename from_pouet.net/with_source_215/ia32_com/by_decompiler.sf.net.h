// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_215/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_74) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_120 (in bios_video_set_mode : ptr32)
Eq_7: (struct "Eq_7" 000C (FFFFFFF6 word16 wFFFFFFF6) (FFFFFFF8 word16 wFFFFFFF8) (FFFFFFFA word16 wFFFFFFFA) (FFFFFFFC word16 wFFFFFFFC) (FFFFFFFE word16 wFFFFFFFE) (0 word16 w0000))
	T_7 (in bp_109 : (memptr (ptr Eq_11) Eq_7))
	T_9 (in bp_109 + 0x000C : word16)
	T_10 (in bp_44 : (memptr (ptr Eq_11) Eq_7))
	T_119 (in 0x01C0 : word16)
Eq_11: (segment "Eq_11" (1B6 (arr Eq_126) a01B6) (1C0 Eq_7 t01C0))
	T_11 (in ss : selector)
Eq_24: (segment "Eq_24" (1BC uint16 w01BC) (1BE uint16 w01BE) (1F0 int32 dw01F0) (1F4 int32 dw01F4) (1F8 int32 dw01F8))
	T_24 (in ds : (ptr Eq_24))
Eq_74: (segment "Eq_74")
	T_74 (in 0xA000 : selector)
Eq_93: (struct "Eq_93" (FFFFF960 byte bFFFFF960))
	T_93 (in (word16) ((word32) ((ebx_62 >> 0x0000000D) *s ds->dw01F8) >> 0x0000000D) + (word16) ((word16) ((word32) (ecx_76 *s ds->dw01F8) >> 0x0000000D) *s 0xFEC0) : word16)
Eq_97: (fn byte (word16))
	T_97 (in __inb : ptr32)
Eq_104: (fn byte (byte))
	T_104 (in __inb : ptr32)
Eq_123: (fn void ())
	T_123 (in msdos_terminate_program20 : ptr32)
	T_124 (in signature of msdos_terminate_program20 : void)
Eq_126: (struct "Eq_126" 000C (0 word16 w0000) (2 word16 w0002) (4 word16 w0004) (6 word16 w0006) (8 word16 w0008))
	T_126
Eq_127: (struct "Eq_127" 000C (2 word16 w0002))
	T_127
Eq_128: (struct "Eq_128" 000C (4 word16 w0004))
	T_128
Eq_129: (struct "Eq_129" 000C (6 word16 w0006))
	T_129
Eq_130: (struct "Eq_130" 000C (8 word16 w0008))
	T_130
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
T_7: (in bp_109 : (memptr (ptr Eq_11) Eq_7))
  Class: Eq_7
  DataType: (memptr (ptr Eq_11) Eq_7)
  OrigDataType: (memptr T_11 (struct (0 T_14 t0000)))
T_8: (in 0x000C : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in bp_109 + 0x000C : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_11) Eq_7)
  OrigDataType: word16
T_10: (in bp_44 : (memptr (ptr Eq_11) Eq_7))
  Class: Eq_7
  DataType: (memptr (ptr Eq_11) Eq_7)
  OrigDataType: (memptr T_11 (struct 000C (FFFFFFF6 T_29 tFFFFFFF6) (FFFFFFF8 T_37 tFFFFFFF8) (FFFFFFFA T_47 tFFFFFFFA) (FFFFFFFC T_55 tFFFFFFFC) (FFFFFFFE T_64 tFFFFFFFE)))
T_11: (in ss : selector)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment (1B6 (arr T_126) a01B6) (1B8 (arr T_127) a01B8) (1BA (arr T_128) a01BA) (1BC (arr T_129) a01BC) (1BE (arr T_130) a01BE)))
T_12: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in bp_109 + 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in Mem43[ss:bp_109 + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in ax_34 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x006D : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in ax_34 + 0x006D : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x7FFF : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in ax_34 + 0x006D & 0x7FFF : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in (ss->*bp_109).w0000 - (ax_34 + 0x006D & 0x7FFF) : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_21: (in 0x0000 : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_22: (in (ss->*bp_109).w0000 - (ax_34 + 0x006D & 0x7FFF) < 0x0000 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in ebx_62 : int32)
  Class: Eq_23
  DataType: int32
  OrigDataType: int32
T_24: (in ds : (ptr Eq_24))
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (segment (1BC T_112 t01BC) (1BE T_110 t01BE) (1F0 T_26 t01F0) (1F4 T_34 t01F4) (1F8 T_77 t01F8)))
T_25: (in 0x01F0 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_24) int32)
  OrigDataType: (memptr T_24 (struct (0 T_26 t0000)))
T_26: (in Mem43[ds:0x01F0:word32] : word32)
  Class: Eq_26
  DataType: int32
  OrigDataType: int32
T_27: (in 0x000A : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in bp_44 - 0x000A : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem43[ss:bp_44 - 0x000A:word16] : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in (int32) (ss->*bp_44).w0000 : int32)
  Class: Eq_30
  DataType: int32
  OrigDataType: int32
T_31: (in ds->dw01F0 *s (int32) (ss->*bp_44).w0000 : int64)
  Class: Eq_31
  DataType: int64
  OrigDataType: int64
T_32: (in (word32) (ds->dw01F0 *s (int32) (ss->*bp_44).w0000) : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in 0x01F4 : word16)
  Class: Eq_33
  DataType: (memptr (ptr Eq_24) int32)
  OrigDataType: (memptr T_24 (struct (0 T_34 t0000)))
T_34: (in Mem43[ds:0x01F4:word32] : word32)
  Class: Eq_34
  DataType: int32
  OrigDataType: int32
T_35: (in 0x0008 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in bp_44 - 0x0008 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem43[ss:bp_44 - 0x0008:word16] : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in (int32) (ss->*bp_44).w0000 : int32)
  Class: Eq_38
  DataType: int32
  OrigDataType: int32
T_39: (in ds->dw01F4 *s (int32) (ss->*bp_44).w0000 : int64)
  Class: Eq_39
  DataType: int64
  OrigDataType: int64
T_40: (in (word32) (ds->dw01F4 *s (int32) (ss->*bp_44).w0000) : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in (word32) (ds->dw01F0 *s (int32) (ss->*bp_44).w0000) + (word32) (ds->dw01F4 *s (int32) (ss->*bp_44).w0000) : word32)
  Class: Eq_23
  DataType: int32
  OrigDataType: word32
T_42: (in ecx_76 : int32)
  Class: Eq_34
  DataType: int32
  OrigDataType: int32
T_43: (in 0x01F0 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_24) int32)
  OrigDataType: (memptr T_24 (struct (0 T_44 t0000)))
T_44: (in Mem43[ds:0x01F0:word32] : word32)
  Class: Eq_26
  DataType: int32
  OrigDataType: int32
T_45: (in 0x0006 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in bp_44 - 0x0006 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem43[ss:bp_44 - 0x0006:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in (int32) (ss->*bp_44).w0000 : int32)
  Class: Eq_48
  DataType: int32
  OrigDataType: int32
T_49: (in ds->dw01F0 *s (int32) (ss->*bp_44).w0000 : int64)
  Class: Eq_49
  DataType: int64
  OrigDataType: int64
T_50: (in (word32) (ds->dw01F0 *s (int32) (ss->*bp_44).w0000) : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in 0x01F4 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_24) int32)
  OrigDataType: (memptr T_24 (struct (0 T_52 t0000)))
T_52: (in Mem43[ds:0x01F4:word32] : word32)
  Class: Eq_34
  DataType: int32
  OrigDataType: int32
T_53: (in 0x0004 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in bp_44 - 0x0004 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in Mem43[ss:bp_44 - 0x0004:word16] : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in (int32) (ss->*bp_44).w0000 : int32)
  Class: Eq_56
  DataType: int32
  OrigDataType: int32
T_57: (in ds->dw01F4 *s (int32) (ss->*bp_44).w0000 : int64)
  Class: Eq_57
  DataType: int64
  OrigDataType: int64
T_58: (in (word32) (ds->dw01F4 *s (int32) (ss->*bp_44).w0000) : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in (word32) (ds->dw01F0 *s (int32) (ss->*bp_44).w0000) + (word32) (ds->dw01F4 *s (int32) (ss->*bp_44).w0000) : word32)
  Class: Eq_59
  DataType: int32
  OrigDataType: int32
T_60: (in 0x0000000D : word32)
  Class: Eq_60
  DataType: uint32
  OrigDataType: uint32
T_61: (in (word32) (ds->dw01F0 *s (int32) (ss->*bp_44).w0000) + (word32) (ds->dw01F4 *s (int32) (ss->*bp_44).w0000) >> 0x0000000D : word32)
  Class: Eq_61
  DataType: int32
  OrigDataType: int32
T_62: (in 0x0002 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in bp_44 - 0x0002 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem43[ss:bp_44 - 0x0002:word16] : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in (int32) (ss->*bp_44).w0000 : int32)
  Class: Eq_65
  DataType: int32
  OrigDataType: int32
T_66: (in ((word32) (ds->dw01F0 *s (int32) (ss->*bp_44).w0000) + (word32) (ds->dw01F4 *s (int32) (ss->*bp_44).w0000) >> 0x0000000D) + (int32) (ss->*bp_44).w0000 : word32)
  Class: Eq_34
  DataType: int32
  OrigDataType: word32
T_67: (in 0x0000000D : word32)
  Class: Eq_67
  DataType: uint32
  OrigDataType: uint32
T_68: (in ebx_62 >> 0x0000000D : word32)
  Class: Eq_26
  DataType: int32
  OrigDataType: int32
T_69: (in 0x01F0 : word16)
  Class: Eq_69
  DataType: (memptr (ptr Eq_24) int32)
  OrigDataType: (memptr T_24 (struct (0 T_70 t0000)))
T_70: (in Mem77[ds:0x01F0:word32] : word32)
  Class: Eq_26
  DataType: int32
  OrigDataType: word32
T_71: (in 0x01F4 : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_24) int32)
  OrigDataType: (memptr T_24 (struct (0 T_72 t0000)))
T_72: (in Mem78[ds:0x01F4:word32] : word32)
  Class: Eq_34
  DataType: int32
  OrigDataType: word32
T_73: (in 0x02 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in 0xA000 : selector)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (segment))
T_75: (in ebx_62 >> 0x0000000D : word32)
  Class: Eq_75
  DataType: int32
  OrigDataType: int32
T_76: (in 0x01F8 : word16)
  Class: Eq_76
  DataType: (memptr (ptr Eq_24) int32)
  OrigDataType: (memptr T_24 (struct (0 T_77 t0000)))
T_77: (in Mem78[ds:0x01F8:word32] : word32)
  Class: Eq_77
  DataType: int32
  OrigDataType: int32
T_78: (in (ebx_62 >> 0x0000000D) *s ds->dw01F8 : int64)
  Class: Eq_78
  DataType: int64
  OrigDataType: int64
T_79: (in (word32) ((ebx_62 >> 0x0000000D) *s ds->dw01F8) : word32)
  Class: Eq_79
  DataType: int32
  OrigDataType: int32
T_80: (in 0x0000000D : word32)
  Class: Eq_80
  DataType: uint32
  OrigDataType: uint32
T_81: (in (word32) ((ebx_62 >> 0x0000000D) *s ds->dw01F8) >> 0x0000000D : word32)
  Class: Eq_81
  DataType: int32
  OrigDataType: int32
T_82: (in (word16) ((word32) ((ebx_62 >> 0x0000000D) *s ds->dw01F8) >> 0x0000000D) : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in 0x01F8 : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_24) int32)
  OrigDataType: (memptr T_24 (struct (0 T_84 t0000)))
T_84: (in Mem78[ds:0x01F8:word32] : word32)
  Class: Eq_77
  DataType: int32
  OrigDataType: int32
T_85: (in ecx_76 *s ds->dw01F8 : int64)
  Class: Eq_85
  DataType: int64
  OrigDataType: int64
T_86: (in (word32) (ecx_76 *s ds->dw01F8) : word32)
  Class: Eq_86
  DataType: int32
  OrigDataType: int32
T_87: (in 0x0000000D : word32)
  Class: Eq_87
  DataType: uint32
  OrigDataType: uint32
T_88: (in (word32) (ecx_76 *s ds->dw01F8) >> 0x0000000D : word32)
  Class: Eq_88
  DataType: int32
  OrigDataType: int32
T_89: (in (word16) ((word32) (ecx_76 *s ds->dw01F8) >> 0x0000000D) : word16)
  Class: Eq_89
  DataType: int16
  OrigDataType: int16
T_90: (in 0xFEC0 : word16)
  Class: Eq_90
  DataType: int16
  OrigDataType: int16
T_91: (in (word16) ((word32) (ecx_76 *s ds->dw01F8) >> 0x0000000D) *s 0xFEC0 : int32)
  Class: Eq_91
  DataType: int32
  OrigDataType: int32
T_92: (in (word16) ((word16) ((word32) (ecx_76 *s ds->dw01F8) >> 0x0000000D) *s 0xFEC0) : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in (word16) ((word32) ((ebx_62 >> 0x0000000D) *s ds->dw01F8) >> 0x0000000D) + (word16) ((word16) ((word32) (ecx_76 *s ds->dw01F8) >> 0x0000000D) *s 0xFEC0) : word16)
  Class: Eq_93
  DataType: (memptr (ptr Eq_74) Eq_93)
  OrigDataType: (memptr T_74 (struct (FFFFF960 T_96 tFFFFF960)))
T_94: (in 0xF960 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in (word16) ((word32) ((ebx_62 >> 0x0000000D) *s ds->dw01F8) >> 0x0000000D) + (word16) ((word16) ((word32) (ecx_76 *s ds->dw01F8) >> 0x0000000D) *s 0xFEC0) + 0xF960 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in Mem97[0xA000:(word16) ((word32) ((ebx_62 >> 0x0000000D) *s ds->dw01F8) >> 0x0000000D) + (word16) ((word16) ((word32) (ecx_76 *s ds->dw01F8) >> 0x0000000D) *s 0xFEC0) + 0xF960:byte] : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_97: (in __inb : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_99 (T_98)))
T_98: (in 0x03DA : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in __inb(0x03DA) : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in 0x08 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in 0x00 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_103: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in __inb : ptr32)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (fn T_106 (T_105)))
T_105: (in 0x60 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in __inb(0x60) : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in 0x01 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_108: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_108
  DataType: bool
  OrigDataType: bool
T_109: (in 0x01BE : word16)
  Class: Eq_109
  DataType: (memptr (ptr Eq_24) uint16)
  OrigDataType: (memptr T_24 (struct (0 T_110 t0000)))
T_110: (in Mem0[ds:0x01BE:word16] : word16)
  Class: Eq_110
  DataType: uint16
  OrigDataType: uint16
T_111: (in 0x01BC : word16)
  Class: Eq_111
  DataType: (memptr (ptr Eq_24) uint16)
  OrigDataType: (memptr T_24 (struct (0 T_112 t0000)))
T_112: (in Mem0[ds:0x01BC:word16] : word16)
  Class: Eq_112
  DataType: uint16
  OrigDataType: uint16
T_113: (in ds->w01BE *u ds->w01BC : uint32)
  Class: Eq_113
  DataType: uint32
  OrigDataType: uint32
T_114: (in (word16) (ds->w01BE *u ds->w01BC) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_115: (in ax_34 + 0x006D : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in ax_34 + 0x006D & 0x7FFF : word16)
  Class: Eq_112
  DataType: uint16
  OrigDataType: word16
T_117: (in 0x01BC : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_24) uint16)
  OrigDataType: (memptr T_24 (struct (0 T_118 t0000)))
T_118: (in Mem43[ds:0x01BC:word16] : word16)
  Class: Eq_112
  DataType: uint16
  OrigDataType: word16
T_119: (in 0x01C0 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_11) Eq_7)
  OrigDataType: word16
T_120: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_122 (T_121)))
T_121: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_122: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_123: (in msdos_terminate_program20 : ptr32)
  Class: Eq_123
  DataType: (ptr Eq_123)
  OrigDataType: (ptr (fn T_125 ()))
T_124: (in signature of msdos_terminate_program20 : void)
  Class: Eq_123
  DataType: (ptr Eq_123)
  OrigDataType: 
T_125: (in msdos_terminate_program20() : void)
  Class: Eq_125
  DataType: void
  OrigDataType: void
T_126:
  Class: Eq_126
  DataType: Eq_126
  OrigDataType: (struct 000C (0 T_29 t0000))
T_127:
  Class: Eq_127
  DataType: Eq_127
  OrigDataType: (struct 000C (0 T_37 t0000))
T_128:
  Class: Eq_128
  DataType: Eq_128
  OrigDataType: (struct 000C (0 T_47 t0000))
T_129:
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: (struct 000C (0 T_55 t0000))
T_130:
  Class: Eq_130
  DataType: Eq_130
  OrigDataType: (struct 000C (0 T_64 t0000))
*/
typedef Eq_74 Eq_1struct Globals {
	Eq_74 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {	// size: 12 C
	word16 wFFFFFFF6;	// FFFFFFF6
	word16 wFFFFFFF8;	// FFFFFFF8
	word16 wFFFFFFFA;	// FFFFFFFA
	word16 wFFFFFFFC;	// FFFFFFFC
	word16 wFFFFFFFE;	// FFFFFFFE
	word16 w0000;	// 0
} Eq_7;

typedef Eq_126 Eq_11[]Eq_7struct Eq_11 {
	Eq_126 a01B6[];	// 1B6
	Eq_7 t01C0;	// 1C0
} Eq_11;

typedef struct Eq_24 {
	uint16 w01BC;	// 1BC
	uint16 w01BE;	// 1BE
	int32 dw01F0;	// 1F0
	int32 dw01F4;	// 1F4
	int32 dw01F8;	// 1F8
} Eq_24;

typedef struct Eq_74 {
} Eq_74;

typedef struct Eq_93 {
	byte bFFFFF960;	// FFFFF960
} Eq_93;

typedef byte (Eq_97)(word16);

typedef byte (Eq_104)(byte);

typedef void (Eq_123)();

typedef struct Eq_126 {	// size: 12 C
	word16 w0000;	// 0
	word16 w0002;	// 2
	word16 w0004;	// 4
	word16 w0006;	// 6
	word16 w0008;	// 8
} Eq_126;

typedef struct Eq_127 {	// size: 12 C
	word16 w0002;	// 2
} Eq_127;

typedef struct Eq_128 {	// size: 12 C
	word16 w0004;	// 4
} Eq_128;

typedef struct Eq_129 {	// size: 12 C
	word16 w0006;	// 6
} Eq_129;

typedef struct Eq_130 {	// size: 12 C
	word16 w0008;	// 8
} Eq_130;

