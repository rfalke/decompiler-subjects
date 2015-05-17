// subject.h
// Generated on TIMESTAMP by decompiling from_boomerang/ifthen/ia32_elf_by_boomerang/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (8048328 (ptr code) ptr8048328) (80483B4 (ptr code) ptr80483B4) (80483E4 (ptr code) ptr80483E4))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (word32))
	T_2 (in __align : ptr32)
Eq_7: (fn word32 ((ptr (ptr code)), int32, (ptr (ptr char)), (ptr (ptr code)), (ptr (ptr code)), (ptr (ptr code)), (ptr void)))
	T_7 (in __libc_start_main : ptr32)
	T_8 (in signature of __libc_start_main : void)
Eq_25: (fn void ())
	T_25 (in __hlt : ptr32)
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
T_7: (in __libc_start_main : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_24 (T_16, T_17, T_18, T_19, T_20, T_21, T_23)))
T_8: (in signature of __libc_start_main : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in main : (ptr (ptr code)))
  Class: Eq_9
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (ptr code))
T_10: (in argc : int32)
  Class: Eq_10
  DataType: int32
  OrigDataType: int32
T_11: (in ubp_av : (ptr (ptr char)))
  Class: Eq_11
  DataType: (ptr (ptr char))
  OrigDataType: (ptr (ptr char))
T_12: (in init : (ptr (ptr code)))
  Class: Eq_12
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (ptr code))
T_13: (in fini : (ptr (ptr code)))
  Class: Eq_13
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (ptr code))
T_14: (in rtld_fini : (ptr (ptr code)))
  Class: Eq_14
  DataType: (ptr (ptr code))
  OrigDataType: (ptr (ptr code))
T_15: (in stack_end : (ptr void))
  Class: Eq_15
  DataType: (ptr void)
  OrigDataType: (ptr void)
T_16: (in 0x08048328 : word32)
  Class: Eq_9
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_17: (in dwArg00 : word32)
  Class: Eq_10
  DataType: int32
  OrigDataType: word32
T_18: (in fp + 0x00000004 : word32)
  Class: Eq_11
  DataType: (ptr (ptr char))
  OrigDataType: word32
T_19: (in 0x080483B4 : word32)
  Class: Eq_12
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_20: (in 0x080483E4 : word32)
  Class: Eq_13
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_21: (in edx : (ptr (ptr code)))
  Class: Eq_14
  DataType: (ptr (ptr code))
  OrigDataType: word32
T_22: (in 0x00000004 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in fp - 0x00000004 : word32)
  Class: Eq_15
  DataType: (ptr void)
  OrigDataType: word32
T_24: (in __libc_start_main(&globals->ptr8048328, dwArg00, fp + 0x00000004, &globals->ptr80483B4, &globals->ptr80483E4, edx, fp - 0x00000004) : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in __hlt : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_26 ()))
T_26: (in __hlt() : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
*/
typedef code Eq_1code Eq_1code Eq_1struct Globals {
	code * ptr8048328;	// 8048328
	code * ptr80483B4;	// 80483B4
	code * ptr80483E4;	// 80483E4
} Eq_1;

typedef void (Eq_2)(word32);

typedef word32 (Eq_7)(code * *, int32, char * *, code * *, code * *, code * *, void);

typedef void (Eq_25)();

