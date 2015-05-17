// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_109/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7")
	T_7 (in es_7 : (ptr Eq_7))
	T_13 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
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
T_7: (in es_7 : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : (memptr (ptr Eq_8) segptr32))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) segptr32)
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_12
  DataType: segptr32
  OrigDataType: segptr32
T_13: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_14: (in dx_29 : int16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_15: (in 0x0032 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_16: (in dx_29 > 0x0032 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in 0x00B0 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in dx_ax_18 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in 0x0140 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in dx_ax_18 % 0x0140 : uint16)
  Class: Eq_20
  DataType: uint16
  OrigDataType: uint16
T_21: (in 0x00B0 - dx_ax_18 % 0x0140 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_22: (in ax_28 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in ax_28 + 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in (byte) (ax_28 + 0x0001) : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in al_27 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_27: (in 0x07 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_28: (in ax_23 : int16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_29: (in dx_29 > ax_23 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in si : int16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_31: (in 0x0032 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in si + 0x0032 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_33: (in dx_29 < si : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in 0x04 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_35: (in 0x0064 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in dx_29 - 0x0064 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_37: (in -ax_23 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_38: (in si < dx_29 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in di : (memptr (ptr Eq_7) byte))
  Class: Eq_39
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_42 t0000)))
T_40: (in 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in di + 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in Mem48[es_7:di + 0x0000:byte] : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in di + 0x0001 : word16)
  Class: Eq_39
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_45: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in SEQ(0x0000, di) : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_47: (in dx_ax_18 % 0x0140 : uint16)
  Class: Eq_47
  DataType: uint16
  OrigDataType: uint16
T_48: (in SEQ(dx_ax_18 % 0x0140, di) : word32)
  Class: Eq_48
  DataType: uint32
  OrigDataType: uint32
T_49: (in 0x0140 : word16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: uint16
T_50: (in SEQ(dx_ax_18 % 0x0140, di) /u 0x0140 : uint16)
  Class: Eq_50
  DataType: uint16
  OrigDataType: uint16
T_51: (in 0x004B : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in SEQ(dx_ax_18 % 0x0140, di) /u 0x0140 - 0x004B : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_53: (in 0x01 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_54: (in 0x01 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in DPB(si, 0x01, 0, 8) : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_56: (in dx_ax_18 % 0x0140 : uint16)
  Class: Eq_56
  DataType: uint16
  OrigDataType: uint16
T_57: (in dx_ax_18 % 0x0140 - 0x00B0 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: word16
T_58: (in 0x0000 : word16)
  Class: Eq_14
  DataType: int16
  OrigDataType: int16
T_59: (in dx_29 > 0x0000 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

