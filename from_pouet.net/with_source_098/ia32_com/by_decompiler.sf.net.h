// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_098/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (350 (ptr Eq_19) ptr0350))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (byte))
	T_7 (in __syscall : ptr32)
Eq_18: (memptr Eq_19 Eq_18)
	T_18 (in si : (memptr (ptr Eq_19) (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 Eq_18))))))))))))))))))))))))))))))))))))))))))))))))))))
	T_22 (in Mem32[0x0035:si + 0x0000:word16] : word16)
Eq_19: (segment "Eq_19")
	T_19 (in 0x0035 : selector)
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
T_5: (in 0x12 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(0x12) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in __syscall : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_9 (T_8)))
T_8: (in 0x29 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in __syscall(0x29) : void)
  Class: Eq_9
  DataType: void
  OrigDataType: void
T_10: (in cx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in cx - 0x0001 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_14: (in cx != 0x0000 : bool)
  Class: Eq_14
  DataType: bool
  OrigDataType: bool
T_15: (in P : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x50 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in DPB(cx, 0x50, 0, 8) : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_18: (in si : (memptr (ptr Eq_19) (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 Eq_18))))))))))))))))))))))))))))))))))))))))))))))))))))
  Class: Eq_18
  DataType: (memptr (ptr Eq_19) (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 Eq_18)))))))))))))))))))))))))))))))))))))))))))))))))))
  OrigDataType: (memptr T_19 (struct (0 T_22 t0000)))
T_19: (in 0x0035 : selector)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (segment))
T_20: (in 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in si + 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in Mem32[0x0035:si + 0x0000:word16] : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_19) (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 (memptr Eq_19 Eq_18)))))))))))))))))))))))))))))))))))))))))))))))))))
  OrigDataType: word16
*/
typedef Eq_19 Eq_1struct Globals {
	Eq_19 * ptr0350;	// 350
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(byte);

typedef  Eq_19::*Eq_18;

typedef struct Eq_19 {
} Eq_19;

