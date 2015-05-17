// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_038/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (segment "Eq_2")
	T_2 (in es_6 : (ptr Eq_2))
	T_8 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_3: (segment "Eq_3")
	T_3 (in ds : (ptr Eq_3))
Eq_9: (fn void (byte))
	T_9 (in bios_video_set_mode : ptr32)
	T_10 (in signature of bios_video_set_mode : void)
	T_42 (in bios_video_set_mode : ptr32)
Eq_18: (fn word64 ())
	T_18 (in __rdtsc : ptr32)
Eq_37: (fn byte (byte))
	T_37 (in __inb : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in es_6 : (ptr Eq_2))
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (segment))
T_3: (in ds : (ptr Eq_3))
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment))
T_4: (in bx : (memptr (ptr Eq_3) segptr32))
  Class: Eq_4
  DataType: (memptr (ptr Eq_3) segptr32)
  OrigDataType: (memptr T_3 (struct (0 T_7 t0000)))
T_5: (in 0x0000 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in bx + 0x0000 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_7
  DataType: segptr32
  OrigDataType: segptr32
T_8: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (segment))
T_9: (in bios_video_set_mode : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_13 (T_12)))
T_10: (in signature of bios_video_set_mode : void)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: 
T_11: (in al : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x13 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in bios_video_set_mode(0x13) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in bx_9 : uint16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: uint16
T_15: (in 0x0F : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(bx, 0x0F, 0, 8) : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: word16
T_17: (in ax : word16)
  Class: Eq_17
  DataType: uint16
  OrigDataType: uint16
T_18: (in __rdtsc : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_19 ()))
T_19: (in __rdtsc() : word64)
  Class: Eq_19
  DataType: word64
  OrigDataType: word64
T_20: (in (byte) __rdtsc() : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in (byte) __rdtsc() & 0x01 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in DPB(ax, (byte) __rdtsc() & 0x01, 0, 8) : word16)
  Class: Eq_17
  DataType: uint16
  OrigDataType: word16
T_24: (in bx_9 *u ax : uint32)
  Class: Eq_24
  DataType: uint32
  OrigDataType: uint32
T_25: (in (byte) (bx_9 *u ax) : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in di : (memptr (ptr Eq_2) byte))
  Class: Eq_26
  DataType: (memptr (ptr Eq_2) byte)
  OrigDataType: (memptr T_2 (struct 0001 (0 T_29 t0000)))
T_27: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di + 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem29[es_6:di + 0x0000:byte] : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di + 0x0001 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_2) byte)
  OrigDataType: word16
T_32: (in cx : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in cx - 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_36: (in cx != 0x0000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in __inb : ptr32)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (fn T_39 (T_38)))
T_38: (in 0x60 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in __inb(0x60) : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in 0x01 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_41: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in bios_video_set_mode : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_44 (T_43)))
T_43: (in 0x03 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_44: (in bios_video_set_mode(0x03) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef struct Eq_2 {
} Eq_2;

typedef struct Eq_3 {
} Eq_3;

typedef void (Eq_9)(byte);

typedef word64 (Eq_18)();

typedef byte (Eq_37)(byte);

