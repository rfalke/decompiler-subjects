// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_034/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7" (0 byte b0000))
	T_7 (in ds_7 : (ptr Eq_7))
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
T_7: (in ds_7 : (ptr Eq_7))
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
T_14: (in dx_ax_16 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in di : (memptr (ptr Eq_7) byte))
  Class: Eq_16
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_20 t0000)))
T_17: (in SEQ(0x0000, di) : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_18: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di + 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in Mem0[ds_7:di + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0x0140 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in dx_ax_16 % 0x0140 : uint16)
  Class: Eq_22
  DataType: uint16
  OrigDataType: uint16
T_23: (in SEQ(dx_ax_16 % 0x0140, di) : word32)
  Class: Eq_23
  DataType: uint32
  OrigDataType: uint32
T_24: (in 0x0140 : word16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: uint16
T_25: (in SEQ(dx_ax_16 % 0x0140, di) /u 0x0140 : uint16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in cx : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in SEQ(dx_ax_16 % 0x0140, di) /u 0x0140 + cx : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in dx_ax_16 % 0x0140 : uint16)
  Class: Eq_28
  DataType: uint16
  OrigDataType: uint16
T_29: (in dx_ax_16 % 0x0140 + cx : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in SEQ(dx_ax_16 % 0x0140, di) /u 0x0140 + cx & dx_ax_16 % 0x0140 + cx : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in cl : byte)
  Class: Eq_31
  DataType: uint8
  OrigDataType: uint8
T_32: (in (SEQ(dx_ax_16 % 0x0140, di) /u 0x0140 + cx & dx_ax_16 % 0x0140 + cx) >>u cl : word16)
  Class: Eq_32
  DataType: uint16
  OrigDataType: uint16
T_33: (in (byte) ((SEQ(dx_ax_16 % 0x0140, di) /u 0x0140 + cx & dx_ax_16 % 0x0140 + cx) >>u cl) : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in ds_7->*di ^ (byte) ((SEQ(dx_ax_16 % 0x0140, di) /u 0x0140 + cx & dx_ax_16 % 0x0140 + cx) >>u cl) : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_35: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in di + 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem28[ds_7:di + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di + 0x0001 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_40: (in 0x0000 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_41: (in di != &Eq_7::b0000 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in cx + 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_44: (in (byte) cx : byte)
  Class: Eq_31
  DataType: uint8
  OrigDataType: byte
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
	byte b0000;	// 0
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

