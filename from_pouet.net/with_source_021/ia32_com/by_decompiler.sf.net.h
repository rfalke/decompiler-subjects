// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_021/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_9: (segment "Eq_9" (103 byte b0103))
	T_9 (in ds : (ptr Eq_9))
Eq_18: (fn bool (byte, byte, (ptr byte), (ptr byte)))
	T_18 (in __aaa : ptr32)
Eq_25: (union "Eq_25" (int16 u0) (cups16 u1))
	T_25 (in ax_38 : Eq_25)
	T_26 (in al_37 *s al_37 : int16)
	T_29 (in 0x0000 : word16)
Eq_27: (struct "Eq_27" 0001 (0 segptr32 ptr0000))
	T_27 (in bx : (memptr (ptr Eq_9) Eq_27))
	T_46 (in bx - 0x0001 : word16)
Eq_33: (segment "Eq_33")
	T_33 (in es_26 : (ptr Eq_33))
	T_54 (in SLICE((ds->*bx).ptr0000, selector, 16) : selector)
Eq_47: (fn void (byte))
	T_47 (in bios_video_set_mode : ptr32)
	T_48 (in signature of bios_video_set_mode : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in al_15 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_3: (in 0x13 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_4: (in ax_14 : word16)
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
T_8: (in al_31 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in ds : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (103 T_11 t0103)))
T_10: (in 0x0103 : word16)
  Class: Eq_10
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_9 (struct (0 T_11 t0000)))
T_11: (in Mem0[ds:0x0103:byte] : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_12: (in al_33 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in ah_34 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in al_37 : int8)
  Class: Eq_14
  DataType: int8
  OrigDataType: int8
T_15: (in DPB(ax_14, al_31, 0, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in di : (memptr (ptr Eq_33) byte))
  Class: Eq_16
  DataType: (memptr (ptr Eq_33) byte)
  OrigDataType: (memptr T_33 (struct 0001 (0 T_36 t0000)))
T_17: (in DPB(ax_14, al_31, 0, 8) + di : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in __aaa : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_22 (T_8, T_19, T_20, T_21)))
T_19: (in ah : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in &al_33 : ptr16)
  Class: Eq_20
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_21: (in &ah_34 : ptr16)
  Class: Eq_21
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_22: (in __aaa(al_31, ah, &al_33, &ah_34) : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in DPB(ax_14, al_31, 0, 8) + di + __aaa(al_31, ah, &al_33, &ah_34) : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in (byte) (DPB(ax_14, al_31, 0, 8) + di + __aaa(al_31, ah, &al_33, &ah_34)) : byte)
  Class: Eq_14
  DataType: int8
  OrigDataType: byte
T_25: (in ax_38 : Eq_25)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: cups16
T_26: (in al_37 *s al_37 : int16)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: int16
T_27: (in bx : (memptr (ptr Eq_9) Eq_27))
  Class: Eq_27
  DataType: (memptr (ptr Eq_9) Eq_27)
  OrigDataType: (memptr T_9 (struct 0001 (0 T_53 t0000)))
T_28: (in ax_38 - bx : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_25
  DataType: cups16
  OrigDataType: cups16
T_30: (in ax_38 <u 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in ax_38 - bx - (ax_38 <u 0x0000) : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_32: (in (byte) ax_14 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_33: (in es_26 : (ptr Eq_33))
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (segment))
T_34: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in di + 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in Mem45[es_26:di + 0x0000:byte] : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_37: (in SLICE(ax_14, byte, 8) : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di + 0x0001 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_33) byte)
  OrigDataType: word16
T_40: (in dx : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in dx - 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_44: (in dx != 0x0000 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in bx - 0x0001 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_9) Eq_27)
  OrigDataType: word16
T_47: (in bios_video_set_mode : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_50 (T_2)))
T_48: (in signature of bios_video_set_mode : void)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: 
T_49: (in al : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_50: (in bios_video_set_mode(al_15) : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in bx + 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_53
  DataType: segptr32
  OrigDataType: segptr32
T_54: (in SLICE((ds->*bx).ptr0000, selector, 16) : selector)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (segment))
*/
typedef struct Globals {
} Eq_1;

typedef struct Eq_9 {
	byte b0103;	// 103
} Eq_9;

typedef bool (Eq_18)(byte, byte, byte *, byte *);

typedef union Eq_25 {
	int16 u0;
	cups16 u1;
} Eq_25;

typedef struct Eq_27 {	// size: 1 1
	segptr32 ptr0000;	// 0
} Eq_27;

typedef struct Eq_33 {
} Eq_33;

typedef void (Eq_47)(byte);

