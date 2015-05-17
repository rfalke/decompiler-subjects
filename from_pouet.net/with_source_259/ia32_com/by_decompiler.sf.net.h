// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_259/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_59) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in __syscall : ptr32)
Eq_12: (segment "Eq_12" (46C int16 w046C))
	T_12 (in fs : (ptr Eq_12))
Eq_20: (fn void (byte))
	T_20 (in msdos_write_console_char : ptr32)
	T_21 (in signature of msdos_write_console_char : void)
Eq_23: (segment "Eq_23" (149 (arr byte) a0149))
	T_23 (in ds : (ptr Eq_23))
Eq_33: (fn byte ((ptr byte)))
	T_33 (in bios_kbd_get_keystroke : ptr32)
	T_34 (in signature of bios_kbd_get_keystroke : void)
Eq_38: (fn void (byte))
	T_38 (in bios_video_set_mode : ptr32)
	T_39 (in signature of bios_video_set_mode : void)
Eq_59: (segment "Eq_59")
	T_59 (in 0xA000 : selector)
Eq_65: (fn byte (byte))
	T_65 (in __inb : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in __syscall : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_4 (T_3)))
T_3: (in 0x10 : byte)
  Class: Eq_3
  DataType: byte
  OrigDataType: byte
T_4: (in __syscall(0x10) : void)
  Class: Eq_4
  DataType: void
  OrigDataType: void
T_5: (in cx_15 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in 0x00B7 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_7: (in si_10 : (memptr (ptr Eq_23) byte))
  Class: Eq_7
  DataType: (memptr (ptr Eq_23) byte)
  OrigDataType: (memptr T_23 (struct 0001 (0 T_26 t0000)))
T_8: (in 0x0149 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_23) byte)
  OrigDataType: word16
T_9: (in ax_25 : int16)
  Class: Eq_9
  DataType: int16
  OrigDataType: word16
T_10: (in 0x0001 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in ax_25 + 0x0001 : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_12: (in fs : (ptr Eq_12))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (46C T_9 t046C)))
T_13: (in 0x046C : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) int16)
  OrigDataType: (memptr T_12 (struct (0 T_14 t0000)))
T_14: (in Mem0[fs:0x046C:word16] : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_15: (in ax_25 + 0x0001 >= fs->w046C : bool)
  Class: Eq_15
  DataType: bool
  OrigDataType: bool
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in cx_15 - 0x0001 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0000 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_19: (in cx_15 != 0x0000 : bool)
  Class: Eq_19
  DataType: bool
  OrigDataType: bool
T_20: (in msdos_write_console_char : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_27 (T_26)))
T_21: (in signature of msdos_write_console_char : void)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: 
T_22: (in dl : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in ds : (ptr Eq_23))
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (segment (149 (arr T_70) a0149)))
T_24: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in si_10 + 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in Mem0[ds:si_10 + 0x0000:byte] : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_27: (in msdos_write_console_char(ds->*si_10) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in si_10 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_23) byte)
  OrigDataType: word16
T_30: (in 0x046C : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_12) int16)
  OrigDataType: (memptr T_12 (struct (0 T_31 t0000)))
T_31: (in Mem0[fs:0x046C:word16] : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: word16
T_32: (in al_37 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (fn T_37 (T_36)))
T_34: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: 
T_35: (in alOut : ptr16)
  Class: Eq_35
  DataType: (ptr byte)
  OrigDataType: ptr16
T_36: (in out al_37 : ptr16)
  Class: Eq_35
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_37: (in bios_kbd_get_keystroke(out al_37) : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in bios_video_set_mode : ptr32)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (fn T_42 (T_41)))
T_39: (in signature of bios_video_set_mode : void)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: 
T_40: (in al : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0x13 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_42: (in bios_video_set_mode(0x13) : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_43: (in dx_ax_52 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di : (memptr (ptr Eq_59) byte))
  Class: Eq_45
  DataType: (memptr (ptr Eq_59) byte)
  OrigDataType: (memptr T_59 (struct 0001 (0 T_62 t0000)))
T_46: (in SEQ(0x0000, di) : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_47: (in 0x0140 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in dx_ax_52 % 0x0140 : uint16)
  Class: Eq_48
  DataType: uint16
  OrigDataType: uint16
T_49: (in SEQ(dx_ax_52 % 0x0140, di) : word32)
  Class: Eq_49
  DataType: uint32
  OrigDataType: uint32
T_50: (in 0x0140 : word16)
  Class: Eq_50
  DataType: uint16
  OrigDataType: uint16
T_51: (in SEQ(dx_ax_52 % 0x0140, di) /u 0x0140 : uint16)
  Class: Eq_51
  DataType: uint16
  OrigDataType: uint16
T_52: (in dx_ax_52 % 0x0140 : uint16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: uint16
T_53: (in SEQ(dx_ax_52 % 0x0140, di) /u 0x0140 ^ dx_ax_52 % 0x0140 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in (byte) (SEQ(dx_ax_52 % 0x0140, di) /u 0x0140 ^ dx_ax_52 % 0x0140) : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in 0x1F : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in (byte) (SEQ(dx_ax_52 % 0x0140, di) /u 0x0140 ^ dx_ax_52 % 0x0140) & 0x1F : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in 0x20 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in ((byte) (SEQ(dx_ax_52 % 0x0140, di) /u 0x0140 ^ dx_ax_52 % 0x0140) & 0x1F) + 0x20 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in 0xA000 : selector)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: (ptr (segment))
T_60: (in 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in di + 0x0000 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in Mem61[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_63: (in 0x0001 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in di + 0x0001 : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_59) byte)
  OrigDataType: word16
T_65: (in __inb : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_67 (T_66)))
T_66: (in 0x60 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in __inb(0x60) : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in 0x01 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_69: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_69
  DataType: bool
  OrigDataType: bool
T_70:
  Class: Eq_70
  DataType: byte
  OrigDataType: (struct 0001 (0 T_26 t0000))
*/
typedef Eq_59 Eq_1struct Globals {
	Eq_59 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_12 {
	int16 w046C;	// 46C
} Eq_12;

typedef void (Eq_20)(byte);

typedef  Eq_23[]struct Eq_23 {
	byte a0149[];	// 149
} Eq_23;

typedef byte (Eq_33)(byte *);

typedef void (Eq_38)(byte);

typedef struct Eq_59 {
} Eq_59;

typedef byte (Eq_65)(byte);

