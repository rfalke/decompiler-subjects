// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_375/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_8: (fn void (byte, byte))
	T_8 (in msdos_multiplex : ptr32)
	T_9 (in signature of msdos_multiplex : void)
Eq_21: (segment "Eq_21" (1574 (arr byte) a1574))
	T_21 (in es : (ptr Eq_21))
Eq_31: (fn void (byte))
	T_31 (in __syscall : ptr32)
Eq_36: (fn void ((ptr Eq_38), word16))
	T_36 (in msdos_display_string : ptr32)
	T_37 (in signature of msdos_display_string : void)
	T_69 (in msdos_display_string : ptr32)
Eq_38: (segment "Eq_38" (FFFFDC07 byte bFFFFDC07) (1589 byte b1589) (158B word16 w158B) (1BF9 (arr byte 2049) a1BF9) (DC07 byte bDC07))
	T_38 (in ds : selector)
	T_40 (in ds : (ptr Eq_38))
	T_59 (in ds : (ptr Eq_38))
Eq_56: (fn byte (word16, (ptr Eq_38)))
	T_56 (in fn0C00_0181 : ptr32)
	T_57 (in signature of fn0C00_0181 : void)
	T_65 (in fn0C00_0181 : ptr32)
Eq_73: (fn byte ((ptr byte)))
	T_73 (in bios_kbd_get_keystroke : ptr32)
	T_74 (in signature of bios_kbd_get_keystroke : void)
Eq_80: (fn bool (byte, byte, (ptr byte), (ptr byte)))
	T_80 (in __aaa : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in di_14 : (memptr (ptr Eq_21) byte))
  Class: Eq_2
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: (memptr T_21 (struct 0001 (0 T_24 t0000)))
T_3: (in 0x1574 : word16)
  Class: Eq_2
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: word16
T_4: (in cx_15 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in cx : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in 0xD6 : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_7: (in DPB(cx, 0xD6, 8, 8) : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_8: (in msdos_multiplex : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_14 (T_12, T_13)))
T_9: (in signature of msdos_multiplex : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in ah : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in al : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x16 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_13: (in 0x87 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_14: (in msdos_multiplex(0x16, 0x87) : void)
  Class: Eq_14
  DataType: void
  OrigDataType: void
T_15: (in bx : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x1688 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in bx & 0x1688 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_19: (in (bx & 0x1688) != 0x0000 : bool)
  Class: Eq_19
  DataType: bool
  OrigDataType: bool
T_20: (in al : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in es : (ptr Eq_21))
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (segment (1574 (arr T_86) a1574)))
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
  Class: Eq_2
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx_15 - 0x0001 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_30: (in cx_15 == 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in __syscall : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_33 (T_32)))
T_32: (in 0x10 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in __syscall(0x10) : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in bx_67 : (memptr (ptr Eq_38) byte))
  Class: Eq_34
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: (memptr T_40 (struct 0001 (0 T_49 t0000)))
T_35: (in 0x1BF9 : word16)
  Class: Eq_34
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_36: (in msdos_display_string : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_42 (T_40, T_41)))
T_37: (in signature of msdos_display_string : void)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: 
T_38: (in ds : selector)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (segment))
T_39: (in dx : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in ds : (ptr Eq_38))
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (segment (158B word16 w158B) (1BF9 (arr T_87 2049) a1BF9)))
T_41: (in 0x0119 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_42: (in msdos_display_string(ds, 0x0119) : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_43: (in bp : (memptr (ptr Eq_21) byte))
  Class: Eq_43
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: (memptr T_21 (struct 0001 (0 T_46 t0000)))
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in bp + 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem0[es:bp + 0x0000:byte] : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in bx_67 + 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem73[ds:bx_67 + 0x0000:byte] : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in bp + 0x0001 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: word16
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in bx_67 + 0x0001 : word16)
  Class: Eq_34
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_54: (in 0xDC07 : word16)
  Class: Eq_34
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_55: (in bx_67 != &Eq_38::bFFFFDC07 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in fn0C00_0181 : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_61 (T_60, T_40)))
T_57: (in signature of fn0C00_0181 : void)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: 
T_58: (in dx : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_59: (in ds : (ptr Eq_38))
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (segment (1589 T_85 t1589)))
T_60: (in 0x019C : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_61: (in fn0C00_0181(0x019C, ds) : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in 0x0230 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in 0x158B : word16)
  Class: Eq_63
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_40 (struct (0 T_64 t0000)))
T_64: (in Mem87[ds:0x158B:word16] : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_65: (in fn0C00_0181 : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_67 (T_66, T_40)))
T_66: (in 0x01D4 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_67: (in fn0C00_0181(0x01D4, ds) : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_68: (in al : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in msdos_display_string : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_70 (T_59, T_58)))
T_70: (in msdos_display_string(ds, dx) : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_71: (in al_7 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in ah_8 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_73
  DataType: (ptr Eq_73)
  OrigDataType: (ptr (fn T_77 (T_76)))
T_74: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_73
  DataType: (ptr Eq_73)
  OrigDataType: 
T_75: (in alOut : ptr16)
  Class: Eq_75
  DataType: (ptr byte)
  OrigDataType: ptr16
T_76: (in out al_7 : ptr16)
  Class: Eq_75
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_77: (in bios_kbd_get_keystroke(out al_7) : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_78: (in al_10 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in ah_11 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in __aaa : ptr32)
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: (ptr (fn T_83 (T_71, T_72, T_81, T_82)))
T_81: (in &al_10 : ptr16)
  Class: Eq_81
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_82: (in &ah_11 : ptr16)
  Class: Eq_82
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_83: (in __aaa(al_7, ah_8, &al_10, &ah_11) : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in 0x1589 : word16)
  Class: Eq_84
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: (memptr T_59 (struct (0 T_85 t0000)))
T_85: (in Mem13[ds:0x1589:byte] : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_86:
  Class: Eq_86
  DataType: byte
  OrigDataType: (struct 0001 (0 T_24 t0000))
T_87:
  Class: Eq_87
  DataType: byte
  OrigDataType: (struct 0001 (0 T_49 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_8)(byte, byte);

typedef  Eq_21[]struct Eq_21 {
	byte a1574[];	// 1574
} Eq_21;

typedef void (Eq_31)(byte);

typedef void (Eq_36)(Eq_38 *, word16);

typedef  Eq_38[2049]struct Eq_38 {
	byte bFFFFDC07;	// FFFFDC07
	byte b1589;	// 1589
	word16 w158B;	// 158B
	byte a1BF9[2049];	// 1BF9
	byte bDC07;	// DC07
} Eq_38;

typedef byte (Eq_56)(word16, Eq_38 *);

typedef byte (Eq_73)(byte *);

typedef bool (Eq_80)(byte, byte, byte *, byte *);

