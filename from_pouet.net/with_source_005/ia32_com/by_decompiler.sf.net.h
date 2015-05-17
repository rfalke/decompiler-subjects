// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_005/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in __syscall : ptr32)
Eq_6: (fn byte ((ptr byte)))
	T_6 (in bios_kbd_get_keystroke : ptr32)
	T_7 (in signature of bios_kbd_get_keystroke : void)
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
T_5: (in al_9 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_10 (T_9)))
T_7: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: 
T_8: (in alOut : ptr16)
  Class: Eq_8
  DataType: (ptr byte)
  OrigDataType: ptr16
T_9: (in out al_9 : ptr16)
  Class: Eq_8
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_10: (in bios_kbd_get_keystroke(out al_9) : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef byte (Eq_6)(byte *);

