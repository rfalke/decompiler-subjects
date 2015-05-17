// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_059/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_34 (in bios_video_set_mode : ptr32)
Eq_11: (segment "Eq_11")
	T_11 (in ds : (ptr Eq_11))
Eq_29: (fn byte (byte))
	T_29 (in __inb : ptr32)
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
T_7: (in bx_5 : (memptr (memptr byte byte) byte))
  Class: Eq_7
  DataType: (memptr (memptr byte byte) byte)
  OrigDataType: word16
T_8: (in bx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0xA0 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(bx, 0xA0, 8, 8) : word16)
  Class: Eq_7
  DataType: (memptr (memptr byte byte) byte)
  OrigDataType: word16
T_11: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment))
T_12: (in si : (memptr (ptr Eq_11) byte))
  Class: Eq_12
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_15 t0000)))
T_13: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in si + 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in di_22 : (memptr (memptr byte byte) byte))
  Class: Eq_7
  DataType: (memptr (memptr byte byte) byte)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_19 t0000)))
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_22 + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem41[bx_5:di_22 + 0x0000:byte] : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in si + 0x0001 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di_22 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (memptr byte byte) byte)
  OrigDataType: word16
T_24: (in cx_34 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in cx_34 - 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_28: (in cx_34 != 0x0000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in __inb : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_31 (T_30)))
T_30: (in 0x60 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in __inb(0x60) : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in 0x01 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_33: (in __inb(0x60) == 0x01 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_36 (T_35)))
T_35: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_36: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_37: (in dx : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in dx - 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_41: (in dx == 0x0000 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in 0xC0 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in DPB(dx, 0xC0, 0, 8) : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_44: (in 0x0146 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_11 {
} Eq_11;

typedef byte (Eq_29)(byte);

