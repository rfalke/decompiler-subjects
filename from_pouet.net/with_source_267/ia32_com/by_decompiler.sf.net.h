// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_267/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA3FC0 (ptr Eq_72) ptrFFFA3FC0))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_117 (in bios_video_set_mode : ptr32)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_21: (fn word16 (word16, byte))
	T_21 (in __ror : ptr32)
Eq_26: (fn void (word16, byte))
	T_26 (in __outb : ptr32)
Eq_32: (fn void (word16, byte))
	T_32 (in __outb : ptr32)
Eq_36: (fn word16 (word16, byte))
	T_36 (in __ror : ptr32)
Eq_51: (segment "Eq_51" (1A5 word16 w01A5) (1A7 Eq_54 t01A7) (1A9 word16 w01A9) (1AB word16 w01AB) (1AC byte b01AC))
	T_51 (in ds : (ptr Eq_51))
	T_122 (in ds : selector)
Eq_54: (union "Eq_54" (byte u0) (word16 u1))
	T_54 (in 0x00 : byte)
	T_56 (in Mem58[ds:0x01A7:byte] : byte)
	T_95 (in Mem58[ds:0x01A7:byte] : byte)
	T_97 (in Mem58[ds:0x01A7:byte] + 0x01 : byte)
	T_98 (in Mem67[ds:0x01A7:byte] : byte)
	T_102 (in Mem67[ds:0x01A7:word16] : word16)
Eq_65: (fn word16 (word16, byte))
	T_65 (in __ror : ptr32)
Eq_72: (segment "Eq_72" (7D00 byte b7D00))
	T_72 (in 0xA3FC : selector)
Eq_111: (fn byte ((ptr byte)))
	T_111 (in bios_kbd_check_keystroke : ptr32)
	T_112 (in signature of bios_kbd_check_keystroke : void)
Eq_120: (fn void ((ptr Eq_51), word16))
	T_120 (in msdos_display_string : ptr32)
	T_121 (in signature of msdos_display_string : void)
Eq_132: (fn byte (word16))
	T_132 (in __inb : ptr32)
Eq_139: (fn byte (word16))
	T_139 (in __inb : ptr32)
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
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in al_11 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in ax_12 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in dx_114 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x03C9 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18, T_11)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __outb(0x03C9, al_11) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in ax_22 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __ror : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_13, T_22)))
T_22: (in 0x08 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in __ror(ax_12, 0x08) : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_24: (in al_23 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in (byte) ax_22 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_26: (in __outb : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_28 (T_27, T_24)))
T_27: (in 0x03C9 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in __outb(0x03C9, al_23) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in al_25 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in SLICE(ax_22, byte, 8) : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in al_23 | SLICE(ax_22, byte, 8) : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_32: (in __outb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_34 (T_33, T_29)))
T_33: (in 0x03C9 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in __outb(0x03C9, al_25) : void)
  Class: Eq_34
  DataType: void
  OrigDataType: void
T_35: (in ax_28 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in __ror : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_39 (T_37, T_38)))
T_37: (in DPB(ax_22, al_25, 0, 8) : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x08 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in __ror(DPB(ax_22, al_25, 0, 8), 0x08) : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_40: (in ax_31 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in (byte) ax_28 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0x01 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in (byte) ax_28 + 0x01 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in DPB(ax_28, (byte) ax_28 + 0x01, 0, 8) : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0002 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in ax_31 + 0x0002 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_47: (in ax_31 + 0x0002 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in (byte) (ax_31 + 0x0002) : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0002 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_50: (in ax_31 != 0x0002 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in ds : (ptr Eq_51))
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (segment (1A5 T_15 t01A5) (1A7 T_54 t01A7) (1A9 T_67 t01A9) (1AB T_127 t01AB) (1AC T_63 t01AC)))
T_52: (in 0x01A5 : word16)
  Class: Eq_52
  DataType: (memptr (ptr Eq_51) word16)
  OrigDataType: (memptr T_51 (struct (0 T_53 t0000)))
T_53: (in Mem50[ds:0x01A5:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_54: (in 0x00 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in 0x01A7 : word16)
  Class: Eq_55
  DataType: (memptr (ptr Eq_51) Eq_54)
  OrigDataType: (memptr T_51 (struct (0 T_56 t0000)))
T_56: (in Mem58[ds:0x01A7:byte] : byte)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: byte
T_57: (in si_102 : (memptr (ptr Eq_72) byte))
  Class: Eq_57
  DataType: (memptr (ptr Eq_72) byte)
  OrigDataType: (memptr T_72 (struct 0001 (0 T_75 t0000)))
T_58: (in 0x7D00 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_72) byte)
  OrigDataType: word16
T_59: (in cl_103 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in 0x00 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_61: (in dl_78 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in 0x01AC : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_51) byte)
  OrigDataType: (memptr T_51 (struct (0 T_63 t0000)))
T_63: (in Mem75[ds:0x01AC:byte] : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in dl_78 - ds->b01AC : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in __ror : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_69 (T_67, T_68)))
T_66: (in 0x01A9 : word16)
  Class: Eq_66
  DataType: (memptr (ptr Eq_51) word16)
  OrigDataType: (memptr T_51 (struct (0 T_67 t0000)))
T_67: (in Mem75[ds:0x01A9:word16] : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in 0x08 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in __ror(ds->w01A9, 0x08) : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in (byte) __ror(ds->w01A9, 0x08) : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in dl_78 - ds->b01AC ^ (byte) __ror(ds->w01A9, 0x08) : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in 0xA3FC : selector)
  Class: Eq_72
  DataType: (ptr Eq_72)
  OrigDataType: (ptr (segment))
T_73: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in si_102 + 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem91[0xA3FC:si_102 + 0x0000:byte] : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_76: (in 0x01A9 : word16)
  Class: Eq_76
  DataType: (memptr (ptr Eq_51) word16)
  OrigDataType: (memptr T_51 (struct (0 T_67 t0000)))
T_77: (in Mem91[ds:0x01A9:word16] : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_78: (in dx_76 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in ds->w01A9 - dx_76 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_80: (in Mem96[ds:0x01A9:word16] : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_81: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in dx_76 + 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in si_102 + 0x0001 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_72) byte)
  OrigDataType: word16
T_85: (in (byte) dx_76 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_86: (in 0x0140 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_87: (in dx_76 != 0x0140 : bool)
  Class: Eq_87
  DataType: bool
  OrigDataType: bool
T_88: (in 0x0280 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in si_102 - 0x0280 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_72) byte)
  OrigDataType: word16
T_90: (in 0x01 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in cl_103 + 0x01 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_92: (in 0x64 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_93: (in cl_103 != 0x64 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in 0x01A7 : word16)
  Class: Eq_94
  DataType: (memptr (ptr Eq_51) Eq_54)
  OrigDataType: (memptr T_51 (struct (0 T_54 t0000)))
T_95: (in Mem58[ds:0x01A7:byte] : byte)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: byte
T_96: (in 0x01 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in Mem58[ds:0x01A7:byte] + 0x01 : byte)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: byte
T_98: (in Mem67[ds:0x01A7:byte] : byte)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: byte
T_99: (in 0x01A5 : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_51) word16)
  OrigDataType: (memptr T_51 (struct (0 T_15 t0000)))
T_100: (in Mem67[ds:0x01A5:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_101: (in 0x01A7 : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_51) Eq_54)
  OrigDataType: (memptr T_51 (struct (0 T_102 t0000)))
T_102: (in Mem67[ds:0x01A7:word16] : word16)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: word16
T_103: (in ds->w01A5 - ds->t01A7 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_104: (in Mem70[ds:0x01A5:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_105: (in 0x0078 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_106: (in 0x01A9 : word16)
  Class: Eq_106
  DataType: (memptr (ptr Eq_51) word16)
  OrigDataType: (memptr T_51 (struct (0 T_107 t0000)))
T_107: (in Mem75[ds:0x01A9:word16] : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_108: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_109: (in 0x00 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_110: (in al_109 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_111
  DataType: (ptr Eq_111)
  OrigDataType: (ptr (fn T_115 (T_114)))
T_112: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_111
  DataType: (ptr Eq_111)
  OrigDataType: 
T_113: (in alOut : ptr16)
  Class: Eq_113
  DataType: (ptr byte)
  OrigDataType: ptr16
T_114: (in out al_109 : ptr16)
  Class: Eq_113
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_115: (in bios_kbd_check_keystroke(out al_109) : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in cl_103 != 0x64 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_119 (T_118)))
T_118: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_119: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_120: (in msdos_display_string : ptr32)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: (ptr (fn T_125 (T_51, T_124)))
T_121: (in signature of msdos_display_string : void)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: 
T_122: (in ds : selector)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (segment))
T_123: (in dx : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in 0x01AD : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_125: (in msdos_display_string(ds, 0x01AD) : void)
  Class: Eq_125
  DataType: void
  OrigDataType: void
T_126: (in 0x01AB : word16)
  Class: Eq_126
  DataType: (memptr (ptr Eq_51) word16)
  OrigDataType: (memptr T_51 (struct (0 T_127 t0000)))
T_127: (in Mem96[ds:0x01AB:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in 0x0200 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in ds->w01AB + 0x0200 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_130: (in Mem112[ds:0x01AB:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_131: (in 0x03DA : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_132: (in __inb : ptr32)
  Class: Eq_132
  DataType: (ptr Eq_132)
  OrigDataType: (ptr (fn T_134 (T_133)))
T_133: (in 0x03DA : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in __inb(0x03DA) : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in 0x08 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in 0x00 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_138: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in __inb : ptr32)
  Class: Eq_139
  DataType: (ptr Eq_139)
  OrigDataType: (ptr (fn T_141 (T_140)))
T_140: (in 0x03DA : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in __inb(0x03DA) : byte)
  Class: Eq_141
  DataType: byte
  OrigDataType: byte
T_142: (in 0x08 : byte)
  Class: Eq_142
  DataType: byte
  OrigDataType: byte
T_143: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in 0x00 : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_145: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_145
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_72 Eq_1struct Globals {
	Eq_72 * ptrFFFA3FC0;	// FFFA3FC0
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_17)(word16, byte);

typedef word16 (Eq_21)(word16, byte);

typedef void (Eq_26)(word16, byte);

typedef void (Eq_32)(word16, byte);

typedef word16 (Eq_36)(word16, byte);

typedef Eq_54 Eq_51struct Eq_51 {
	word16 w01A5;	// 1A5
	Eq_54 t01A7;	// 1A7
	word16 w01A9;	// 1A9
	word16 w01AB;	// 1AB
	byte b01AC;	// 1AC
} Eq_51;

typedef union Eq_54 {
	byte u0;
	word16 u1;
} Eq_54;

typedef word16 (Eq_65)(word16, byte);

typedef struct Eq_72 {
	byte b7D00;	// 7D00
} Eq_72;

typedef byte (Eq_111)(byte *);

typedef void (Eq_120)(Eq_51 *, word16);

typedef byte (Eq_132)(word16);

typedef byte (Eq_139)(word16);

