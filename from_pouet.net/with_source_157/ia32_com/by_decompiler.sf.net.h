// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_157/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void ((ptr Eq_4), word16))
	T_2 (in msdos_display_string : ptr32)
	T_3 (in signature of msdos_display_string : void)
Eq_4: (segment "Eq_4" (180 byte b0180))
	T_4 (in ds : selector)
	T_6 (in ds : (ptr Eq_4))
Eq_21: (struct "Eq_21" (180 byte b0180) (181 byte b0181))
	T_21 (in di_19 : (memptr (ptr Eq_4) Eq_21))
	T_23 (in di_17 + 0x0001 : word16)
Eq_48: (struct "Eq_48" (180 byte b0180) (181 byte b0181))
	T_48 (in di_36 : (memptr (ptr Eq_4) Eq_48))
	T_50 (in di_17 + 0x0001 : word16)
Eq_72: (fn void (word16, byte))
	T_72 (in __outb : ptr32)
Eq_78: (fn void (byte))
	T_78 (in bios_video_set_mode : ptr32)
	T_79 (in signature of bios_video_set_mode : void)
Eq_83: (fn void (byte))
	T_83 (in msdos_terminate : ptr32)
	T_84 (in signature of msdos_terminate : void)
Eq_88: (fn void (word16, byte))
	T_88 (in __outb : ptr32)
Eq_104: (fn byte ((ptr byte)))
	T_104 (in bios_kbd_check_keystroke : ptr32)
	T_105 (in signature of bios_kbd_check_keystroke : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in msdos_display_string : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_8 (T_6, T_7)))
T_3: (in signature of msdos_display_string : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in ds : selector)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (segment))
T_5: (in dx : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in ds : (ptr Eq_4))
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (segment))
T_7: (in 0x0172 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_8: (in msdos_display_string(ds, 0x0172) : void)
  Class: Eq_8
  DataType: void
  OrigDataType: void
T_9: (in di_17 : (memptr (ptr Eq_4) byte))
  Class: Eq_9
  DataType: (memptr (ptr Eq_4) byte)
  OrigDataType: (memptr T_6 (struct 0001 (0 T_17 t0000)))
T_10: (in 0x0180 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_4) byte)
  OrigDataType: word16
T_11: (in bl_14 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x3C : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in dl_10 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x00 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in cx_12 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x000A : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_17: (in 0x00 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di_17 + 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in Mem18[ds:di_17 + 0x0000:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_21: (in di_19 : (memptr (ptr Eq_4) Eq_21))
  Class: Eq_21
  DataType: (memptr (ptr Eq_4) Eq_21)
  OrigDataType: (memptr T_6 (struct (180 T_26 t0180) (181 T_29 t0181)))
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di_17 + 0x0001 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_4) Eq_21)
  OrigDataType: word16
T_24: (in 0x0180 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in di_19 + 0x0180 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in Mem20[ds:di_19 + 0x0180:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_27: (in 0x0181 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di_19 + 0x0181 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem22[ds:di_19 + 0x0181:byte] : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_30: (in 0x0002 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_19 + 0x0002 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0180 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_19 + 0x0002 + 0x0180 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_4) byte)
  OrigDataType: word16
T_34: (in 0x06 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in bl_14 - 0x06 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_36: (in 0x06 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in dl_10 + 0x06 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx_12 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_41: (in cx_12 != 0x0000 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in cx_29 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in 0x000A : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_44: (in 0x00 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_45: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di_17 + 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem35[ds:di_17 + 0x0000:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_48: (in di_36 : (memptr (ptr Eq_4) Eq_48))
  Class: Eq_48
  DataType: (memptr (ptr Eq_4) Eq_48)
  OrigDataType: (memptr T_6 (struct (180 T_53 t0180) (181 T_56 t0181)))
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in di_17 + 0x0001 : word16)
  Class: Eq_48
  DataType: (memptr (ptr Eq_4) Eq_48)
  OrigDataType: word16
T_51: (in 0x0180 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_36 + 0x0180 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem37[ds:di_36 + 0x0180:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_54: (in 0x0181 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in di_36 + 0x0181 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem39[ds:di_36 + 0x0181:byte] : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_57: (in 0x0002 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in di_36 + 0x0002 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_4) byte)
  OrigDataType: word16
T_59: (in 0x06 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in dl_10 - 0x06 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_61: (in 0x06 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in bl_14 + 0x06 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_63: (in 0x0001 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in cx_29 - 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_66: (in cx_29 != 0x0000 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in di_46 : int16)
  Class: Eq_67
  DataType: int16
  OrigDataType: int16
T_68: (in 0x0000 : word16)
  Class: Eq_67
  DataType: int16
  OrigDataType: word16
T_69: (in Z_48 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in cond(0x0000) : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_72: (in __outb : ptr32)
  Class: Eq_72
  DataType: (ptr Eq_72)
  OrigDataType: (ptr (fn T_75 (T_73, T_74)))
T_73: (in 0x03C8 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in 0x07 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in __outb(0x03C8, 0x07) : void)
  Class: Eq_75
  DataType: void
  OrigDataType: void
T_76: (in cx_70 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0003 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_78: (in bios_video_set_mode : ptr32)
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: (ptr (fn T_82 (T_81)))
T_79: (in signature of bios_video_set_mode : void)
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: 
T_80: (in al : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in al_62 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_82: (in bios_video_set_mode(al_62) : void)
  Class: Eq_82
  DataType: void
  OrigDataType: void
T_83: (in msdos_terminate : ptr32)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (fn T_87 (T_86)))
T_84: (in signature of msdos_terminate : void)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: 
T_85: (in al : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in 0x00 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_87: (in msdos_terminate(0x00) : void)
  Class: Eq_87
  DataType: void
  OrigDataType: void
T_88: (in __outb : ptr32)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (fn T_93 (T_89, T_92)))
T_89: (in 0x03C9 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0180 : word16)
  Class: Eq_90
  DataType: (memptr (ptr Eq_4) byte)
  OrigDataType: (memptr T_6 (struct 0001 (0 T_92 t0000)))
T_91: (in di_46 + 0x0180 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem39[ds:di_46 + 0x0180:byte] : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in __outb(0x03C9, ds->b0180) : void)
  Class: Eq_93
  DataType: void
  OrigDataType: void
T_94: (in 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in di_46 + 0x0001 : word16)
  Class: Eq_67
  DataType: int16
  OrigDataType: word16
T_96: (in 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in cx_70 - 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0000 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_99: (in cx_70 != 0x0000 : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
T_100: (in 0x003C : word16)
  Class: Eq_67
  DataType: int16
  OrigDataType: int16
T_101: (in di_46 - 0x003C : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in cond(di_46 - 0x003C) : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_103: (in di_46 < 0x003C : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: (ptr (fn T_108 (T_107)))
T_105: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_104
  DataType: (ptr Eq_104)
  OrigDataType: 
T_106: (in alOut : ptr16)
  Class: Eq_106
  DataType: (ptr byte)
  OrigDataType: ptr16
T_107: (in out al_62 : ptr16)
  Class: Eq_106
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_108: (in bios_kbd_check_keystroke(out al_62) : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in 0x0000 : word16)
  Class: Eq_67
  DataType: int16
  OrigDataType: word16
T_110: (in 0x0000 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in cond(0x0000) : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(Eq_4 *, word16);

typedef struct Eq_4 {
	byte b0180;	// 180
} Eq_4;

typedef struct Eq_21 {
	byte b0180;	// 180
	byte b0181;	// 181
} Eq_21;

typedef struct Eq_48 {
	byte b0180;	// 180
	byte b0181;	// 181
} Eq_48;

typedef void (Eq_72)(word16, byte);

typedef void (Eq_78)(byte);

typedef void (Eq_83)(byte);

typedef void (Eq_88)(word16, byte);

typedef byte (Eq_104)(byte *);

