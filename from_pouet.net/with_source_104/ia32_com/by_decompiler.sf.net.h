// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_104/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (byte))
	T_7 (in msdos_write_console_char : ptr32)
	T_8 (in signature of msdos_write_console_char : void)
Eq_12: (fn void (word16, byte))
	T_12 (in __outb : ptr32)
Eq_19: (segment "Eq_19" (46C int16 w046C))
	T_19 (in fs : (ptr Eq_19))
Eq_23: (fn void (word16, byte))
	T_23 (in __outb : ptr32)
Eq_27: (fn void (word16, byte))
	T_27 (in __outb : ptr32)
Eq_35: (fn void (word16, byte))
	T_35 (in __outb : ptr32)
Eq_39: (fn byte (byte))
	T_39 (in __inb : ptr32)
Eq_44: (fn void (word16, byte))
	T_44 (in __outb : ptr32)
Eq_50: (fn void (word16, byte))
	T_50 (in __outb : ptr32)
Eq_55: (fn void (word16, byte))
	T_55 (in __outb : ptr32)
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
T_7: (in msdos_write_console_char : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_11 (T_10)))
T_8: (in signature of msdos_write_console_char : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in dl : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x0E : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_11: (in msdos_write_console_char(0x0E) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in __outb : ptr32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (fn T_15 (T_13, T_14)))
T_13: (in 0x0331 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x3F : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in __outb(0x0331, 0x3F) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in ax_27 : int16)
  Class: Eq_16
  DataType: int16
  OrigDataType: word16
T_17: (in 0x0002 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in ax_27 + 0x0002 : word16)
  Class: Eq_16
  DataType: int16
  OrigDataType: int16
T_19: (in fs : (ptr Eq_19))
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (segment (46C T_16 t046C)))
T_20: (in 0x046C : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_19) int16)
  OrigDataType: (memptr T_19 (struct (0 T_21 t0000)))
T_21: (in Mem0[fs:0x046C:word16] : word16)
  Class: Eq_16
  DataType: int16
  OrigDataType: int16
T_22: (in ax_27 + 0x0002 >= fs->w046C : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_26 (T_24, T_25)))
T_24: (in 0x0330 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x99 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in __outb(0x0330, 0x99) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_34 (T_28, T_33)))
T_28: (in 0x0330 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in bl_16 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in 0x0B : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in bl_16 & 0x0B : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in 0x27 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in (bl_16 & 0x0B) + 0x27 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in __outb(0x0330, (bl_16 & 0x0B) + 0x27) : void)
  Class: Eq_34
  DataType: void
  OrigDataType: void
T_35: (in __outb : ptr32)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (fn T_38 (T_36, T_37)))
T_36: (in 0x0330 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in 0x00 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in __outb(0x0330, 0x00) : void)
  Class: Eq_38
  DataType: void
  OrigDataType: void
T_39: (in __inb : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_41 (T_40)))
T_40: (in 0x60 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in __inb(0x60) : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0x01 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_43: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in __outb : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_47 (T_45, T_46)))
T_45: (in 0x0330 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 0x99 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in __outb(0x0330, 0x99) : void)
  Class: Eq_47
  DataType: void
  OrigDataType: void
T_48: (in di : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in (byte) di : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_50: (in __outb : ptr32)
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (fn T_54 (T_51, T_53)))
T_51: (in 0x0330 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in bl_16 & 0x0B : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in (bl_16 & 0x0B) + 0x27 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in __outb(0x0330, (bl_16 & 0x0B) + 0x27) : void)
  Class: Eq_54
  DataType: void
  OrigDataType: void
T_55: (in __outb : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_58 (T_56, T_57)))
T_56: (in 0x0330 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in 0x7F : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in __outb(0x0330, 0x7F) : void)
  Class: Eq_58
  DataType: void
  OrigDataType: void
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in di + 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_61: (in 0x046C : word16)
  Class: Eq_61
  DataType: (memptr (ptr Eq_19) int16)
  OrigDataType: (memptr T_19 (struct (0 T_62 t0000)))
T_62: (in Mem0[fs:0x046C:word16] : word16)
  Class: Eq_16
  DataType: int16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(byte);

typedef void (Eq_12)(word16, byte);

typedef struct Eq_19 {
	int16 w046C;	// 46C
} Eq_19;

typedef void (Eq_23)(word16, byte);

typedef void (Eq_27)(word16, byte);

typedef void (Eq_35)(word16, byte);

typedef byte (Eq_39)(byte);

typedef void (Eq_44)(word16, byte);

typedef void (Eq_50)(word16, byte);

typedef void (Eq_55)(word16, byte);

