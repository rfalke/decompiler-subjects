// subject.h
// Generated on 5/4/2015 12:02:24 AM by decompiling from_boomerang/line1/ia32_elf_by_boomerang_o4/subject.exe
// using Decompiler version 0.4.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (word32))
	T_2 (in __align : ptr32)
Eq_8: (fn void ())
	T_8 (in __hlt : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in __align : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in fp : ptr32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: ptr32
T_4: (in 0x00000004 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_5: (in fp + 0x00000004 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in __align(fp + 0x00000004) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in !__libc_start_main : ptr32)
  Class: Eq_7
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_8: (in __hlt : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_9 ()))
T_9: (in __hlt() : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(word32);

typedef void (Eq_8)();

