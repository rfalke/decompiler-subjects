// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_336/ia32_mz/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (8100 (ptr Eq_10) ptr8100) (8720 (ptr Eq_102) ptr8720))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in __syscall : ptr32)
Eq_6: (segment "Eq_6" (80 byte b0080) (81 (arr byte) a0081))
	T_6 (in es : (ptr Eq_6))
Eq_10: (segment "Eq_10" (200 (arr byte) a0200) (20D uint16 w020D) (20F word16 w020F) (3FF (arr byte) a03FF))
	T_10 (in 0x0810 : selector)
	T_13 (in ds_3 : (ptr Eq_10))
	T_14 (in 0x0810 : word16)
	T_22 (in ds : selector)
	T_73 (in 0x0872 : word16)
	T_93 (in 0x0810 : word16)
Eq_16: (struct "Eq_16" 0001 (0 byte b0000) (1FF byte b01FF))
	T_16 (in bx_40 : (memptr (ptr Eq_10) Eq_16))
	T_17 (in 0x0200 : word16)
	T_50 (in bx_40 + 0x0001 : word16)
Eq_20: (fn void ((ptr Eq_10), word16))
	T_20 (in msdos_display_string : ptr32)
	T_21 (in signature of msdos_display_string : void)
	T_87 (in msdos_display_string : ptr32)
	T_112 (in msdos_display_string : ptr32)
	T_119 (in msdos_display_string : ptr32)
Eq_26: (fn void (byte))
	T_26 (in msdos_terminate : ptr32)
	T_27 (in signature of msdos_terminate : void)
Eq_62: (fn bool (segptr32, byte, (ptr word16)))
	T_62 (in msdos_open_file : ptr32)
	T_63 (in signature of msdos_open_file : void)
Eq_74: (fn bool (uint16, word16, segptr32, (ptr word16)))
	T_74 (in msdos_read_file : ptr32)
	T_75 (in signature of msdos_read_file : void)
Eq_95: (fn bool (uint16))
	T_95 (in msdos_close_file : ptr32)
	T_96 (in signature of msdos_close_file : void)
Eq_102: (segment "Eq_102" (0 byte b0000))
	T_102 (in 0x0872 : selector)
Eq_107: (fn void (byte))
	T_107 (in bios_video_set_mode : ptr32)
	T_108 (in signature of bios_video_set_mode : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in __syscall : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_4 (T_3)))
T_3: (in 0x21 : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_4: (in __syscall(0x21) : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in al_107 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in es : (ptr Eq_6))
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (segment (80 T_8 t0080) (81 (arr T_122) a0081)))
T_7: (in 0x0080 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_6) byte)
  OrigDataType: (memptr T_6 (struct (0 T_8 t0000)))
T_8: (in Mem0[es:0x0080:byte] : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_9: (in 0x0010 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0810 : selector)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (segment (200 (arr T_123) a0200) (20D T_61 t020D) (20F T_9 t020F) (3FF (arr T_124) a03FF)))
T_11: (in 0x020F : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_10) word16)
  OrigDataType: (memptr T_10 (struct (0 T_12 t0000)))
T_12: (in Mem14[0x0810:0x020F:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in ds_3 : (ptr Eq_10))
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (segment))
T_14: (in 0x0810 : word16)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: word16
T_15: (in true : bool)
  Class: Eq_15
  DataType: bool
  OrigDataType: bool
T_16: (in bx_40 : (memptr (ptr Eq_10) Eq_16))
  Class: Eq_16
  DataType: (memptr (ptr Eq_10) Eq_16)
  OrigDataType: (memptr T_10 (struct 0001 (0 T_48 t0000) (1FF T_60 t01FF)))
T_17: (in 0x0200 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_10) Eq_16)
  OrigDataType: word16
T_18: (in di_41 : (memptr (ptr Eq_6) byte))
  Class: Eq_18
  DataType: (memptr (ptr Eq_6) byte)
  OrigDataType: (memptr T_6 (struct 0001 (0 T_34 t0000)))
T_19: (in 0x0080 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_6) byte)
  OrigDataType: word16
T_20: (in msdos_display_string : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_25 (T_10, T_24)))
T_21: (in signature of msdos_display_string : void)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: 
T_22: (in ds : selector)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (segment))
T_23: (in dx : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0080 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_25: (in msdos_display_string(0x0810, 0x0080) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in msdos_terminate : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_29 (T_5)))
T_27: (in signature of msdos_terminate : void)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: 
T_28: (in al : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_29: (in msdos_terminate(al_107) : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_41 + 0x0001 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_6) byte)
  OrigDataType: word16
T_32: (in 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_41 + 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem14[es:di_41 + 0x0000:byte] : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x20 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_36: (in es->*di_41 != 0x20 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in di_46 : (memptr (ptr Eq_6) byte))
  Class: Eq_37
  DataType: (memptr (ptr Eq_6) byte)
  OrigDataType: (memptr T_6 (struct 0001 (0 T_45 t0000)))
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_41 + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_6) byte)
  OrigDataType: word16
T_40: (in cx_48 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_41: (in 0x020F : word16)
  Class: Eq_41
  DataType: (memptr (ptr Eq_10) word16)
  OrigDataType: (memptr T_10 (struct (0 T_42 t0000)))
T_42: (in Mem14[0x0810:0x020F:word16] : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in di_46 + 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in Mem14[es:di_46 + 0x0000:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in bx_40 + 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem53[0x0810:bx_40 + 0x0000:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in bx_40 + 0x0001 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_10) Eq_16)
  OrigDataType: word16
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_46 + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_6) byte)
  OrigDataType: word16
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in cx_48 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_55: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_56: (in cx_48 != 0x0000 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in 0x00 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in 0x01FF : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in bx_40 + 0x01FF : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem60[0x0810:bx_40 + 0x01FF:byte] : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_61: (in ax_101 : uint16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: uint16
T_62: (in msdos_open_file : ptr32)
  Class: Eq_62
  DataType: (ptr Eq_62)
  OrigDataType: (ptr (fn T_70 (T_67, T_68, T_69)))
T_63: (in signature of msdos_open_file : void)
  Class: Eq_62
  DataType: (ptr Eq_62)
  OrigDataType: 
T_64: (in ds_dx : word32)
  Class: Eq_64
  DataType: segptr32
  OrigDataType: word32
T_65: (in al : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in axOut : ptr16)
  Class: Eq_66
  DataType: (ptr word16)
  OrigDataType: ptr16
T_67: (in 0810:0200 : segptr32)
  Class: Eq_64
  DataType: segptr32
  OrigDataType: segptr32
T_68: (in 0x00 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_69: (in out ax_101 : ptr16)
  Class: Eq_66
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_70: (in msdos_open_file(0810:0200, 0x00, out ax_101) : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in 0x020D : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_10) uint16)
  OrigDataType: (memptr T_10 (struct (0 T_72 t0000)))
T_72: (in Mem84[0x0810:0x020D:word16] : word16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: word16
T_73: (in 0x0872 : word16)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: word16
T_74: (in msdos_read_file : ptr32)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (fn T_83 (T_61, T_80, T_81, T_82)))
T_75: (in signature of msdos_read_file : void)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: 
T_76: (in bx : word16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: word16
T_77: (in cx : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in ds_dx : word32)
  Class: Eq_78
  DataType: segptr32
  OrigDataType: word32
T_79: (in axOut : ptr16)
  Class: Eq_79
  DataType: (ptr word16)
  OrigDataType: ptr16
T_80: (in 0xFFFF : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_81: (in 0872:0000 : segptr32)
  Class: Eq_78
  DataType: segptr32
  OrigDataType: segptr32
T_82: (in out ax_101 : ptr16)
  Class: Eq_79
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_83: (in msdos_read_file(ax_101, 0xFFFF, 0872:0000, out ax_101) : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in dx_ax_75 : uint32)
  Class: Eq_84
  DataType: uint32
  OrigDataType: word32
T_85: (in 0x0020 : word16)
  Class: Eq_85
  DataType: uint16
  OrigDataType: uint16
T_86: (in ax_101 *u 0x0020 : uint32)
  Class: Eq_84
  DataType: uint32
  OrigDataType: uint32
T_87: (in msdos_display_string : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_91 (T_13, T_90)))
T_88: (in (word16) dx_ax_75 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in 0x00C0 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in (word16) dx_ax_75 + 0x00C0 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_91: (in msdos_display_string(ds_3, (word16) dx_ax_75 + 0x00C0) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_92: (in (byte) dx_ax_75 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_93: (in 0x0810 : word16)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: word16
T_94: (in 0x3E10 : word16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: word16
T_95: (in msdos_close_file : ptr32)
  Class: Eq_95
  DataType: (ptr Eq_95)
  OrigDataType: (ptr (fn T_100 (T_99)))
T_96: (in signature of msdos_close_file : void)
  Class: Eq_95
  DataType: (ptr Eq_95)
  OrigDataType: 
T_97: (in bx : word16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: word16
T_98: (in 0x020D : word16)
  Class: Eq_98
  DataType: (memptr (ptr Eq_10) uint16)
  OrigDataType: (memptr T_10 (struct (0 T_99 t0000)))
T_99: (in Mem84[0x0810:0x020D:word16] : word16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: word16
T_100: (in msdos_close_file(0x0810->w020D) : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in 0x72 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_102: (in 0x0872 : selector)
  Class: Eq_102
  DataType: (ptr Eq_102)
  OrigDataType: (ptr (segment (0 T_104 t0000)))
T_103: (in 0x0000 : word16)
  Class: Eq_103
  DataType: (memptr (ptr Eq_102) byte)
  OrigDataType: (memptr T_102 (struct (0 T_104 t0000)))
T_104: (in Mem84[0x0872:0x0000:byte] : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in 0xEB : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_106: (in 0x0872->b0000 == 0xEB : bool)
  Class: Eq_106
  DataType: bool
  OrigDataType: bool
T_107: (in bios_video_set_mode : ptr32)
  Class: Eq_107
  DataType: (ptr Eq_107)
  OrigDataType: (ptr (fn T_111 (T_110)))
T_108: (in signature of bios_video_set_mode : void)
  Class: Eq_107
  DataType: (ptr Eq_107)
  OrigDataType: 
T_109: (in al : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in 0x03 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_111: (in bios_video_set_mode(0x03) : void)
  Class: Eq_111
  DataType: void
  OrigDataType: void
T_112: (in msdos_display_string : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_114 (T_10, T_113)))
T_113: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_114: (in msdos_display_string(0x0810, 0x0000) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_115: (in 0x0000 : word16)
  Class: Eq_115
  DataType: (memptr (ptr Eq_102) byte)
  OrigDataType: (memptr T_102 (struct (0 T_116 t0000)))
T_116: (in Mem84[0x0872:0x0000:byte] : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_117: (in 0xE9 : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_118: (in 0x0872->b0000 == 0xE9 : bool)
  Class: Eq_118
  DataType: bool
  OrigDataType: bool
T_119: (in msdos_display_string : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_121 (T_10, T_120)))
T_120: (in 0x00A0 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_121: (in msdos_display_string(0x0810, 0x00A0) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_122:
  Class: Eq_122
  DataType: byte
  OrigDataType: (struct 0001 (0 T_34 t0000))
T_123:
  Class: Eq_123
  DataType: byte
  OrigDataType: (struct 0001 (0 T_48 t0000))
T_124:
  Class: Eq_124
  DataType: byte
  OrigDataType: (struct 0001 (0 T_60 t0000))
*/
typedef Eq_10 Eq_1Eq_102 Eq_1struct Globals {
	Eq_10 * ptr8100;	// 8100
	Eq_102 * ptr8720;	// 8720
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_6[]struct Eq_6 {
	byte b0080;	// 80
	byte a0081[];	// 81
} Eq_6;

typedef  Eq_10[][]struct Eq_10 {
	byte a0200[];	// 200
	uint16 w020D;	// 20D
	word16 w020F;	// 20F
	byte a03FF[];	// 3FF
} Eq_10;

typedef struct Eq_16 {	// size: 1 1
	byte b0000;	// 0
	byte b01FF;	// 1FF
} Eq_16;

typedef void (Eq_20)(Eq_10 *, word16);

typedef void (Eq_26)(byte);

typedef bool (Eq_62)(segptr32, byte, word16 *);

typedef bool (Eq_74)(uint16, word16, segptr32, word16 *);

typedef bool (Eq_95)(uint16);

typedef struct Eq_102 {
	byte b0000;	// 0
} Eq_102;

typedef void (Eq_107)(byte);

