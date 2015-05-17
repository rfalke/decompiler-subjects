// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_020/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_9: (segment "Eq_9" (103 byte b0103))
	T_9 (in ds : (ptr Eq_9))
Eq_17: (fn word16 (byte))
	T_17 (in __aam : ptr32)
Eq_20: (struct "Eq_20" 0001 (0 segptr32 ptr0000))
	T_20 (in bx : (memptr (ptr Eq_9) Eq_20))
	T_39 (in bx - 0x0001 : word16)
Eq_26: (segment "Eq_26")
	T_26 (in es_26 : (ptr Eq_26))
	T_47 (in SLICE((ds->*bx).ptr0000, selector, 16) : selector)
Eq_40: (fn void (byte))
	T_40 (in bios_video_set_mode : ptr32)
	T_41 (in signature of bios_video_set_mode : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in al_14 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_3: (in 0x13 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_4: (in ax_13 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in ax : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in 0x13 : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_7: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_8: (in ax_33 : cups16)
  Class: Eq_8
  DataType: cups16
  OrigDataType: cups16
T_9: (in ds : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (103 T_11 t0103)))
T_10: (in 0x0103 : word16)
  Class: Eq_10
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_9 (struct (0 T_11 t0000)))
T_11: (in Mem0[ds:0x0103:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(ax_13, ds->b0103, 0, 8) : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in di : (memptr (ptr Eq_26) byte))
  Class: Eq_13
  DataType: (memptr (ptr Eq_26) byte)
  OrigDataType: (memptr T_26 (struct 0001 (0 T_29 t0000)))
T_14: (in DPB(ax_13, ds->b0103, 0, 8) + di : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in C : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(ax_13, ds->b0103, 0, 8) + di + C : word16)
  Class: Eq_8
  DataType: cups16
  OrigDataType: word16
T_17: (in __aam : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18)))
T_18: (in (byte) ax_33 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in __aam((byte) ax_33) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in bx : (memptr (ptr Eq_9) Eq_20))
  Class: Eq_20
  DataType: (memptr (ptr Eq_9) Eq_20)
  OrigDataType: (memptr T_9 (struct 0001 (0 T_46 t0000)))
T_21: (in __aam((byte) ax_33) - bx : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_8
  DataType: cups16
  OrigDataType: cups16
T_23: (in ax_33 <u 0x0000 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in __aam((byte) ax_33) - bx - (ax_33 <u 0x0000) : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_25: (in (byte) ax_13 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_26: (in es_26 : (ptr Eq_26))
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment))
T_27: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di + 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem43[es_26:di + 0x0000:byte] : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_30: (in cond(ax_13) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di + 0x0001 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_26) byte)
  OrigDataType: word16
T_33: (in dx : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in dx - 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_37: (in dx != 0x0000 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in bx - 0x0001 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_9) Eq_20)
  OrigDataType: word16
T_40: (in bios_video_set_mode : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_43 (T_2)))
T_41: (in signature of bios_video_set_mode : void)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: 
T_42: (in al : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_43: (in bios_video_set_mode(al_14) : void)
  Class: Eq_43
  DataType: void
  OrigDataType: void
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in bx + 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_46
  DataType: segptr32
  OrigDataType: segptr32
T_47: (in SLICE((ds->*bx).ptr0000, selector, 16) : selector)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment))
*/
typedef struct Globals {
} Eq_1;

typedef struct Eq_9 {
	byte b0103;	// 103
} Eq_9;

typedef word16 (Eq_17)(byte);

typedef struct Eq_20 {	// size: 1 1
	segptr32 ptr0000;	// 0
} Eq_20;

typedef struct Eq_26 {
} Eq_26;

typedef void (Eq_40)(byte);

