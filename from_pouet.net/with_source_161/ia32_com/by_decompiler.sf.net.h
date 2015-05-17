// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_161/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_41) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void ((ptr Eq_9), word16))
	T_7 (in msdos_display_string : ptr32)
	T_8 (in signature of msdos_display_string : void)
Eq_9: (segment "Eq_9")
	T_9 (in ds : selector)
	T_11 (in ds : (ptr Eq_9))
Eq_14: (fn void (word16, byte))
	T_14 (in __outb : ptr32)
Eq_37: (struct "Eq_37" (FFFFBBE4 byte bFFFFBBE4))
	T_37 (in di_68 : (memptr (ptr Eq_41) Eq_37))
	T_40 (in ax_40 *s 0xFEC0 + cx : word16)
Eq_41: (segment "Eq_41")
	T_41 (in 0xA000 : selector)
Eq_64: (segment "Eq_64" (46C int16 w046C))
	T_64 (in fs : (ptr Eq_64))
Eq_80: (fn byte (byte))
	T_80 (in __inb : ptr32)
Eq_85: (fn void (word16, byte))
	T_85 (in __outb : ptr32)
Eq_89: (fn void (word16, byte))
	T_89 (in __outb : ptr32)
Eq_93: (fn void (word16, byte))
	T_93 (in __outb : ptr32)
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
T_7: (in msdos_display_string : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_13 (T_11, T_12)))
T_8: (in signature of msdos_display_string : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in ds : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_10: (in dx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in ds : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_12: (in 0x0172 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in msdos_display_string(ds, 0x0172) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in __outb : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_17 (T_15, T_16)))
T_15: (in 0x0331 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x3F : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in __outb(0x0331, 0x3F) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in ax_13 : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_19: (in 0x0000 : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_20: (in ax_94 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in ax_40 : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_22: (in 0x0080 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in ax_40 + 0x0080 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_24: (in cx_95 : int16)
  Class: Eq_24
  DataType: int16
  OrigDataType: int16
T_25: (in cx : int16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_26: (in cx + ax_94 : word16)
  Class: Eq_24
  DataType: int16
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: uint16
  OrigDataType: uint16
T_28: (in cx_95 >> 0x0001 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_29: (in cx_95 >> 0x0001 : word16)
  Class: Eq_29
  DataType: int16
  OrigDataType: int16
T_30: (in ax_94 - (cx_95 >> 0x0001) : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_31: (in cx_88 : int16)
  Class: Eq_31
  DataType: int16
  OrigDataType: int16
T_32: (in cx - ax_40 : word16)
  Class: Eq_31
  DataType: int16
  OrigDataType: word16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: uint16
  OrigDataType: uint16
T_34: (in cx_88 >> 0x0001 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_35: (in cx_88 >> 0x0001 : word16)
  Class: Eq_35
  DataType: int16
  OrigDataType: int16
T_36: (in ax_40 + (cx_88 >> 0x0001) : word16)
  Class: Eq_18
  DataType: int16
  OrigDataType: word16
T_37: (in di_68 : (memptr (ptr Eq_41) Eq_37))
  Class: Eq_37
  DataType: (memptr (ptr Eq_41) Eq_37)
  OrigDataType: (memptr T_41 (struct (FFFFBBE4 T_44 tFFFFBBE4)))
T_38: (in 0xFEC0 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: int16
T_39: (in ax_40 *s 0xFEC0 : int16)
  Class: Eq_39
  DataType: int16
  OrigDataType: int16
T_40: (in ax_40 *s 0xFEC0 + cx : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_41) Eq_37)
  OrigDataType: word16
T_41: (in 0xA000 : selector)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (segment))
T_42: (in 0xBBE4 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di_68 + 0xBBE4 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem0[0xA000:di_68 + 0xBBE4:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x01 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in (0xA000->*di_68).bFFFFBBE4 + 0x01 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_47: (in di_68 + 0xBBE4 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem71[0xA000:di_68 + 0xBBE4:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_49: (in di_68 + 0xBBE4 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem71[0xA000:di_68 + 0xBBE4:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_51: (in 0x0F : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in (0xA000->*di_68).bFFFFBBE4 & 0x0F : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_53: (in di_68 + 0xBBE4 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem73[0xA000:di_68 + 0xBBE4:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_55: (in di_68 + 0xBBE4 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem73[0xA000:di_68 + 0xBBE4:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_57: (in 0x10 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in (0xA000->*di_68).bFFFFBBE4 + 0x10 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_59: (in di_68 + 0xBBE4 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem76[0xA000:di_68 + 0xBBE4:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_61: (in bp_46 : int16)
  Class: Eq_61
  DataType: int16
  OrigDataType: word16
T_62: (in 0x0003 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in bp_46 + 0x0003 : word16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_64: (in fs : (ptr Eq_64))
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (segment (46C T_61 t046C)))
T_65: (in 0x046C : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_64) int16)
  OrigDataType: (memptr T_64 (struct (0 T_66 t0000)))
T_66: (in Mem76[fs:0x046C:word16] : word16)
  Class: Eq_61
  DataType: int16
  OrigDataType: int16
T_67: (in bp_46 + 0x0003 > fs->w046C : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in bx_56 : int16)
  Class: Eq_68
  DataType: int16
  OrigDataType: word16
T_69: (in bx : int16)
  Class: Eq_69
  DataType: int16
  OrigDataType: int16
T_70: (in 0x660D : word16)
  Class: Eq_70
  DataType: int16
  OrigDataType: int16
T_71: (in bx *s 0x660D : int16)
  Class: Eq_68
  DataType: int16
  OrigDataType: int16
T_72: (in 0xF35F : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in bx_56 + 0xF35F : word16)
  Class: Eq_69
  DataType: int16
  OrigDataType: word16
T_74: (in bx_56 + 0xF35F : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in SLICE(bx_56 + 0xF35F, byte, 8) : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in 0x80 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in SLICE(bx_56 + 0xF35F, byte, 8) & 0x80 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in 0x00 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_79: (in (SLICE(bx_56 + 0xF35F, byte, 8) & 0x80) == 0x00 : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
T_80: (in __inb : ptr32)
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: (ptr (fn T_82 (T_81)))
T_81: (in 0x60 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in __inb(0x60) : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in 0x01 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_84: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in __outb : ptr32)
  Class: Eq_85
  DataType: (ptr Eq_85)
  OrigDataType: (ptr (fn T_88 (T_86, T_87)))
T_86: (in 0x0330 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in 0x99 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in __outb(0x0330, 0x99) : void)
  Class: Eq_88
  DataType: void
  OrigDataType: void
T_89: (in __outb : ptr32)
  Class: Eq_89
  DataType: (ptr Eq_89)
  OrigDataType: (ptr (fn T_92 (T_90, T_91)))
T_90: (in 0x0330 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in 0x28 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in __outb(0x0330, 0x28) : void)
  Class: Eq_92
  DataType: void
  OrigDataType: void
T_93: (in __outb : ptr32)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: (ptr (fn T_96 (T_94, T_95)))
T_94: (in 0x0330 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in 0x7F : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in __outb(0x0330, 0x7F) : void)
  Class: Eq_96
  DataType: void
  OrigDataType: void
T_97: (in 0x046C : word16)
  Class: Eq_97
  DataType: (memptr (ptr Eq_64) int16)
  OrigDataType: (memptr T_64 (struct (0 T_98 t0000)))
T_98: (in Mem0[fs:0x046C:word16] : word16)
  Class: Eq_61
  DataType: int16
  OrigDataType: word16
*/
typedef Eq_41 Eq_1struct Globals {
	Eq_41 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(Eq_9 *, word16);

typedef struct Eq_9 {
} Eq_9;

typedef void (Eq_14)(word16, byte);

typedef struct Eq_37 {
	byte bFFFFBBE4;	// FFFFBBE4
} Eq_37;

typedef struct Eq_41 {
} Eq_41;

typedef struct Eq_64 {
	int16 w046C;	// 46C
} Eq_64;

typedef byte (Eq_80)(byte);

typedef void (Eq_85)(word16, byte);

typedef void (Eq_89)(word16, byte);

typedef void (Eq_93)(word16, byte);

