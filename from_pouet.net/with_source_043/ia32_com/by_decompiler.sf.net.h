// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_043/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (word16, byte))
	T_2 (in __outb : ptr32)
Eq_6: (fn void (word16, byte))
	T_6 (in __outb : ptr32)
Eq_10: (fn void (word16, byte))
	T_10 (in __outb : ptr32)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_24: (fn byte ((ptr byte)))
	T_24 (in bios_kbd_get_keystroke : ptr32)
	T_25 (in signature of bios_kbd_get_keystroke : void)
Eq_31: (fn byte (byte))
	T_31 (in __inb : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in __outb : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_5 (T_3, T_4)))
T_3: (in 0x0331 : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_4: (in 0x3F : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in __outb(0x0331, 0x3F) : void)
  Class: Eq_5
  DataType: void
  OrigDataType: void
T_6: (in __outb : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_9 (T_7, T_8)))
T_7: (in 0x0330 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x99 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in __outb(0x0330, 0x99) : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in __outb : ptr32)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (fn T_18 (T_11, T_17)))
T_11: (in 0x0330 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in di : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in (byte) di : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x0B : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in (byte) di & 0x0B : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x27 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in ((byte) di & 0x0B) + 0x27 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in __outb(0x0330, ((byte) di & 0x0B) + 0x27) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_22 (T_20, T_21)))
T_20: (in 0x0330 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in 0x7F : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in __outb(0x0330, 0x7F) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in al_17 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_28 (T_27)))
T_25: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: 
T_26: (in alOut : ptr16)
  Class: Eq_26
  DataType: (ptr byte)
  OrigDataType: ptr16
T_27: (in out al_17 : ptr16)
  Class: Eq_26
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_28: (in bios_kbd_get_keystroke(out al_17) : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di + 0x0001 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_31: (in __inb : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_33 (T_32)))
T_32: (in 0x60 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in __inb(0x60) : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in 0x01 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_35: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(word16, byte);

typedef void (Eq_6)(word16, byte);

typedef void (Eq_10)(word16, byte);

typedef void (Eq_19)(word16, byte);

typedef byte (Eq_24)(byte *);

typedef byte (Eq_31)(byte);

