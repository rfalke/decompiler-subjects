// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_151/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_88) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_136 (in bios_video_set_mode : ptr32)
Eq_19: (segment "Eq_19" (386 (arr byte 903) a0386))
	T_19 (in ds : (ptr Eq_19))
Eq_35: (fn void (word16, byte))
	T_35 (in __outb : ptr32)
Eq_45: (union "Eq_45" (int8 u0) (bcu8 u1))
	T_45 (in cl_39 : Eq_45)
	T_46 (in 0xFF : byte)
	T_49 (in al_146 : Eq_45)
	T_73 (in (byte) cx_37 : byte)
	T_76 (in 0x40 : byte)
	T_78 (in -al_146 : byte)
	T_79 (in 0x00 : byte)
	T_80 (in 0x20 : byte)
Eq_47: (fn void (word16, Eq_45))
	T_47 (in __outb : ptr32)
Eq_51: (fn void (word16, uint16))
	T_51 (in __outb : ptr32)
Eq_53: (union "Eq_53" (uint16 u0) ((memptr (ptr Eq_19) Eq_142) u1))
	T_53 (in (uint16) cl_39 : uint16)
Eq_60: (fn void (word16, uint16))
	T_60 (in __outb : ptr32)
Eq_64: (union "Eq_64" (uint16 u0) ((memptr (ptr Eq_19) Eq_143) u1))
	T_64 (in (uint16) (cl_39 << 0x01) : uint16)
Eq_88: (segment "Eq_88" (0 byte b0000))
	T_88 (in 0xA000 : selector)
Eq_114: (union "Eq_114" (uint16 u0) ((memptr (ptr Eq_19) Eq_144) u1))
	T_114 (in (uint16) ((byte) dx_132 + dh_137) : uint16)
Eq_121: (fn byte ((ptr byte)))
	T_121 (in bios_kbd_check_keystroke : ptr32)
	T_122 (in signature of bios_kbd_check_keystroke : void)
Eq_142: (struct "Eq_142" (386 uint8 b0386))
	T_142
Eq_143: (struct "Eq_143" (386 uint8 b0386))
	T_143
Eq_144: (struct "Eq_144" (386 byte b0386))
	T_144
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
T_7: (in cx_15 : int16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_8: (in 0x798F : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_9: (in di_14 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in si_10 : int16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_12: (in 0x0386 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_13: (in 0xFFD9 : word16)
  Class: Eq_13
  DataType: int16
  OrigDataType: int16
T_14: (in cx_15 *s 0xFFD9 : int32)
  Class: Eq_14
  DataType: int32
  OrigDataType: int32
T_15: (in SLICE(cx_15 *s 0xFFD9, word16, 16) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in di_14 + SLICE(cx_15 *s 0xFFD9, word16, 16) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_17: (in cx_15 + di_14 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_18: (in SLICE(cx_15, byte, 8) : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in ds : (ptr Eq_19))
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (segment (386 (arr T_139 903) a0386)))
T_20: (in 0x0386 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_19) byte)
  OrigDataType: (memptr T_19 (struct 0001 (0 T_22 t0000)))
T_21: (in si_10 + 0x0386 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in Mem23[ds:si_10 + 0x0386:byte] : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_23: (in 0x0386 : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_19) byte)
  OrigDataType: (memptr T_19 (struct 0001 (0 T_25 t0000)))
T_24: (in si_10 + 0x0386 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in Mem23[ds:si_10 + 0x0386:byte] : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_26: (in 0x86 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in ds->a0386[si_10] + 0x86 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_28: (in 0x0386 : word16)
  Class: Eq_28
  DataType: (memptr (ptr Eq_19) byte)
  OrigDataType: (memptr T_19 (struct 0001 (0 T_30 t0000)))
T_29: (in si_10 + 0x0386 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem26[ds:si_10 + 0x0386:byte] : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in si_10 - 0x0001 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_33: (in 0x0000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_34: (in si_10 >= 0x0000 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in __outb : ptr32)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (fn T_38 (T_36, T_37)))
T_36: (in 0x03C8 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in 0x01 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in __outb(0x03C8, 0x01) : void)
  Class: Eq_38
  DataType: void
  OrigDataType: void
T_39: (in dx_136 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in 0x03C9 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_41: (in dh_137 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0x03 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_43: (in cx_37 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x00FF : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_45: (in cl_39 : Eq_45)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: bcu8
T_46: (in 0xFF : byte)
  Class: Eq_45
  DataType: int8
  OrigDataType: byte
T_47: (in __outb : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_50 (T_48, T_49)))
T_48: (in 0x03C9 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in al_146 : Eq_45)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: int8
T_50: (in __outb(0x03C9, al_146) : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in __outb : ptr32)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (fn T_59 (T_52, T_58)))
T_52: (in 0x03C9 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in (uint16) cl_39 : uint16)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: (union (uint16 u0) ((memptr T_19 (struct (386 T_56 t0386))) u1))
T_54: (in 0x0386 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in (uint16) cl_39 + 0x0386 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem26[ds:(uint16) cl_39 + 0x0386:byte] : byte)
  Class: Eq_56
  DataType: uint8
  OrigDataType: uint8
T_57: (in 0x02 : byte)
  Class: Eq_57
  DataType: uint8
  OrigDataType: uint8
T_58: (in Mem26[ds:(uint16) cl_39 + 0x0386:byte] >>u 0x02 : word16)
  Class: Eq_58
  DataType: uint16
  OrigDataType: uint16
T_59: (in __outb(0x03C9, Mem26[ds:(uint16) cl_39 + 0x0386:byte] >>u 0x02) : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_60: (in __outb : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_70 (T_61, T_69)))
T_61: (in 0x03C9 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x01 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in cl_39 << 0x01 : word16)
  Class: Eq_63
  DataType: ui16
  OrigDataType: ui16
T_64: (in (uint16) (cl_39 << 0x01) : uint16)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (union (uint16 u0) ((memptr T_19 (struct (386 T_67 t0386))) u1))
T_65: (in 0x0386 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in (uint16) (cl_39 << 0x01) + 0x0386 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in Mem26[ds:(uint16) (cl_39 << 0x01) + 0x0386:byte] : byte)
  Class: Eq_67
  DataType: uint8
  OrigDataType: uint8
T_68: (in 0x02 : byte)
  Class: Eq_68
  DataType: uint8
  OrigDataType: uint8
T_69: (in Mem26[ds:(uint16) (cl_39 << 0x01) + 0x0386:byte] >>u 0x02 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: uint16
T_70: (in __outb(0x03C9, Mem26[ds:(uint16) (cl_39 << 0x01) + 0x0386:byte] >>u 0x02) : void)
  Class: Eq_70
  DataType: void
  OrigDataType: void
T_71: (in 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in cx_37 - 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_73: (in (byte) cx_37 : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: byte
T_74: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_75: (in cx_37 != 0x0000 : bool)
  Class: Eq_75
  DataType: bool
  OrigDataType: bool
T_76: (in 0x40 : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_77: (in cl_39 <u 0x40 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in -al_146 : byte)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: int8
T_79: (in 0x00 : byte)
  Class: Eq_45
  DataType: int8
  OrigDataType: byte
T_80: (in 0x20 : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_81: (in cl_39 <u 0x20 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in si_102 : (memptr (ptr Eq_19) byte))
  Class: Eq_82
  DataType: (memptr (ptr Eq_19) byte)
  OrigDataType: (memptr T_19 (struct 0001 (0 T_85 t0000)))
T_83: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in si_102 + 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in Mem26[ds:si_102 + 0x0000:byte] : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in ah_108 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in ds->*si_102 + ah_108 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in 0xA000 : selector)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (segment))
T_89: (in di_116 : (memptr (ptr Eq_88) byte))
  Class: Eq_89
  DataType: (memptr (ptr Eq_88) byte)
  OrigDataType: (memptr T_88 (struct 0001 (0 T_92 t0000)))
T_90: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in di_116 + 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem126[0xA000:di_116 + 0x0000:byte] : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_93: (in 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in si_102 + 0x0001 : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_19) byte)
  OrigDataType: word16
T_95: (in 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in di_116 + 0x0001 : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_88) byte)
  OrigDataType: word16
T_97: (in cx_112 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in cx_112 - 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_100: (in 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_101: (in cx_112 != 0x0000 : bool)
  Class: Eq_101
  DataType: bool
  OrigDataType: bool
T_102: (in dl_131 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in 0x01 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in dl_131 - 0x01 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_105: (in dx_132 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in DPB(dx_132, dl_131, 0, 8) : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_107: (in 0x00 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_108: (in dl_131 != 0x00 : bool)
  Class: Eq_108
  DataType: bool
  OrigDataType: bool
T_109: (in 0x04 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in DPB(dx_132, 0x04, 8, 8) : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_19) byte)
  OrigDataType: word16
T_111: (in SLICE(dx_132, byte, 8) : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in (byte) dx_132 : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in (byte) dx_132 + dh_137 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in (uint16) ((byte) dx_132 + dh_137) : uint16)
  Class: Eq_114
  DataType: Eq_114
  OrigDataType: (union (uint16 u0) ((memptr T_19 (struct (386 T_117 t0386))) u1))
T_115: (in 0x0386 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in (uint16) ((byte) dx_132 + dh_137) + 0x0386 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem26[ds:(uint16) ((byte) dx_132 + dh_137) + 0x0386:byte] : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in SLICE(dx_132, byte, 8) + Mem26[ds:(uint16) ((byte) dx_132 + dh_137) + 0x0386:byte] : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_119: (in 0x0140 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_120: (in al_140 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: (ptr (fn T_125 (T_124)))
T_122: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: 
T_123: (in alOut : ptr16)
  Class: Eq_123
  DataType: (ptr byte)
  OrigDataType: ptr16
T_124: (in out al_140 : ptr16)
  Class: Eq_123
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_125: (in bios_kbd_check_keystroke(out al_140) : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in 0x0001 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in dx_132 - 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_128: (in dx_132 - 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in SLICE(dx_132 - 0x0001, byte, 8) : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_130: (in 0x0001 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_131: (in dx_132 == 0x0001 : bool)
  Class: Eq_131
  DataType: bool
  OrigDataType: bool
T_132: (in 0x0000 : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_88) byte)
  OrigDataType: word16
T_133: (in 0xC8 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_134: (in 0xC8 : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in DPB(dx_136, 0xC8, 0, 8) : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_136: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_138 (T_137)))
T_137: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_138: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_139:
  Class: Eq_139
  DataType: byte
  OrigDataType: (struct 0001 (0 T_22 t0000))
T_140:
  Class: Eq_139
  DataType: byte
  OrigDataType: (struct 0001 (0 T_25 t0000))
T_141:
  Class: Eq_139
  DataType: byte
  OrigDataType: (struct 0001 (0 T_30 t0000))
T_142:
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: 
T_143:
  Class: Eq_143
  DataType: Eq_143
  OrigDataType: 
T_144:
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: 
*/
typedef Eq_88 Eq_1struct Globals {
	Eq_88 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_19[903]struct Eq_19 {
	byte a0386[903];	// 386
} Eq_19;

typedef void (Eq_35)(word16, byte);

typedef union Eq_45 {
	int8 u0;
	bcu8 u1;
} Eq_45;

typedef void (Eq_47)(word16, Eq_45);

typedef void (Eq_51)(word16, uint16);

typedef union Eq_53 {
	uint16 u0;
	Eq_142 Eq_19::* u1;
} Eq_53;

typedef void (Eq_60)(word16, uint16);

typedef union Eq_64 {
	uint16 u0;
	Eq_143 Eq_19::* u1;
} Eq_64;

typedef struct Eq_88 {
	byte b0000;	// 0
} Eq_88;

typedef union Eq_114 {
	uint16 u0;
	Eq_144 Eq_19::* u1;
} Eq_114;

typedef byte (Eq_121)(byte *);

typedef struct Eq_142 {
	uint8 b0386;	// 386
} Eq_142;

typedef struct Eq_143 {
	uint8 b0386;	// 386
} Eq_143;

typedef struct Eq_144 {
	byte b0386;	// 386
} Eq_144;

