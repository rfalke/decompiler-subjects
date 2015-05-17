// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_019/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (segment "Eq_8")
	T_8 (in ss : selector)
Eq_9: (struct "Eq_9" (2 word16 w0002) (4 (ptr Eq_13) ptr0004))
	T_9 (in wArg00 : word16)
Eq_13: (segment "Eq_13")
	T_13 (in ds_10 : (ptr Eq_13))
	T_16 (in Mem0[ss:wArg00 + 0x0004:selector] : selector)
Eq_25: (union "Eq_25" (byte u0) (word16 u1))
	T_25 (in al_24 : Eq_25)
	T_34 (in v10_33 : Eq_25)
	T_39 (in (byte) ax_20 : byte)
	T_44 (in Mem0[ds_10:di + 0x0000:byte] : byte)
	T_47 (in Mem34[ds_10:di + 0x0000:byte] : byte)
Eq_26: (fn bool (byte, byte, (ptr byte), (ptr byte)))
	T_26 (in __aaa : ptr32)
Eq_36: (struct "Eq_36" 0001 (0 Eq_25 t0000))
	T_36 (in di : (memptr (ptr Eq_13) Eq_36))
	T_38 (in di + 0x0001 : word16)
	T_49 (in di + DPB(ax_20, v10_33, 0, 8) : word16)
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
T_7: (in cx_18 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ss : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in wArg00 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_9)
  OrigDataType: (memptr T_8 (struct (2 T_12 t0002) (4 T_16 t0004)))
T_10: (in 0x0002 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in wArg00 + 0x0002 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ss:wArg00 + 0x0002:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_13: (in ds_10 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in 0x0004 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in wArg00 + 0x0004 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem0[ss:wArg00 + 0x0004:selector] : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_17: (in sp_11 : (memptr (ptr Eq_8) int16))
  Class: Eq_17
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct 0002 (0 T_23 t0000)))
T_18: (in 0x0006 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in wArg00 + 0x0006 : word16)
  Class: Eq_17
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: word16
T_20: (in ax_20 : int16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_21: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in sp_11 + 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem0[ss:sp_11 + 0x0000:word16] : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: word16
T_24: (in ah_25 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in al_24 : Eq_25)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: byte
T_26: (in __aaa : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_31 (T_27, T_28, T_29, T_30)))
T_27: (in (byte) ax_20 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in SLICE(ax_20, byte, 8) : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in &al_24 : ptr16)
  Class: Eq_29
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_30: (in &ah_25 : ptr16)
  Class: Eq_30
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_31: (in __aaa((byte) ax_20, SLICE(ax_20, byte, 8), &al_24, &ah_25) : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in 0x0002 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in sp_11 + 0x0002 : word16)
  Class: Eq_17
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: word16
T_34: (in v10_33 : Eq_25)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: word16
T_35: (in (int16) v10_33 : int16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_36: (in di : (memptr (ptr Eq_13) Eq_36))
  Class: Eq_36
  DataType: (memptr (ptr Eq_13) Eq_36)
  OrigDataType: (memptr T_13 (struct 0001 (0 T_25 t0000)))
T_37: (in 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di + 0x0001 : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_13) Eq_36)
  OrigDataType: word16
T_39: (in (byte) ax_20 : byte)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: byte
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in cx_18 + 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_42: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di + 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem0[ds_10:di + 0x0000:byte] : byte)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: byte
T_45: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di + 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem34[ds_10:di + 0x0000:byte] : byte)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: byte
T_48: (in DPB(ax_20, v10_33, 0, 8) : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in di + DPB(ax_20, v10_33, 0, 8) : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_13) Eq_36)
  OrigDataType: word16
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in cx_18 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_53: (in cx_18 != 0x0000 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_8 {
} Eq_8;

typedef Eq_13 Eq_9struct Eq_9 {
	word16 w0002;	// 2
	Eq_13 * ptr0004;	// 4
} Eq_9;

typedef struct Eq_13 {
} Eq_13;

typedef union Eq_25 {
	byte u0;
	word16 u1;
} Eq_25;

typedef bool (Eq_26)(byte, byte, byte *, byte *);

typedef Eq_25 Eq_36struct Eq_36 {	// size: 1 1
	Eq_25 t0000;	// 0
} Eq_36;

