// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_030/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in ss_di_6 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_9: (union "Eq_9" (int16 u0) ((memptr (ptr Eq_8) Eq_47) u1))
	T_9 (in bx : Eq_9)
	T_18 (in bx + 0x0001 : word16)
Eq_13: (segment "Eq_13" (0 (arr Eq_45) a0000))
	T_13 (in ss_7 : (ptr Eq_13))
	T_14 (in SLICE(ss_di_6, selector, 16) : selector)
Eq_19: (union "Eq_19" (byte u0) (word16 u1))
	T_19 (in al_15 : Eq_19)
	T_29 (in (ss_7.*di_8)[bx * 0x0050] + 0x0B + (bx *s 0x0140 <u 0x0000) : word16)
Eq_26: (union "Eq_26" (16 u0) (int16 u1) (cups16 u2))
	T_26 (in bx *s 0x0140 : int16)
	T_27 (in 0x0000 : word16)
Eq_41: (struct "Eq_41" (7 byte b0007))
	T_41 (in si : (memptr (ptr Eq_8) Eq_41))
Eq_45: (struct "Eq_45" 0140 (0 byte b0000))
	T_45
	T_46
Eq_47: (struct "Eq_47" 0001 (0 Eq_7 t0000))
	T_47
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
T_7: (in ss_di_6 : ptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (int16 u0) ((memptr T_8 (struct 0001 (0 T_12 t0000))) u1))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: segptr32
T_13: (in ss_7 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment (0 (arr T_45) a0000)))
T_14: (in SLICE(ss_di_6, selector, 16) : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_15: (in di_8 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in (word16) ss_di_6 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_17: (in 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in bx + 0x0001 : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: word16
T_19: (in al_15 : Eq_19)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: byte
T_20: (in SEQ(ss_7, di_8) : ptr32)
  Class: Eq_20
  DataType: ptr32
  OrigDataType: ptr32
T_21: (in 0x0140 : word16)
  Class: Eq_21
  DataType: int16
  OrigDataType: int16
T_22: (in bx * 0x0140 : word16)
  Class: Eq_22
  DataType: ui16
  OrigDataType: ui16
T_23: (in SEQ(ss_7, di_8)[bx * 0x0140] : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in 0x0B : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in (ss_7.*di_8)[bx * 0x0050] + 0x0B : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in bx *s 0x0140 : int16)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (16 u0) (int16 u1))
T_27: (in 0x0000 : word16)
  Class: Eq_26
  DataType: cups16
  OrigDataType: cups16
T_28: (in bx *s 0x0140 <u 0x0000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in (ss_7.*di_8)[bx * 0x0050] + 0x0B + (bx *s 0x0140 <u 0x0000) : word16)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: word16
T_30: (in 0x0F : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in al_15 & 0x0F : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_32: (in SEQ(ss_7, di_8) : ptr32)
  Class: Eq_32
  DataType: ptr32
  OrigDataType: ptr32
T_33: (in bx * 0x0140 : word16)
  Class: Eq_33
  DataType: ui16
  OrigDataType: ui16
T_34: (in SEQ(ss_7, di_8)[bx * 0x0140] : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_35: (in al_15 & 0x0F : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0x00 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_37: (in (al_15 & 0x0F) == 0x00 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in al_15 & 0x0F : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in 0x43 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in al_15 & 0x0F | 0x43 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in si : (memptr (ptr Eq_8) Eq_41))
  Class: Eq_41
  DataType: (memptr (ptr Eq_8) Eq_41)
  OrigDataType: (memptr T_8 (struct (7 T_44 t0007)))
T_42: (in 0x0007 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in si + 0x0007 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem24[ds:si + 0x0007:byte] : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_45:
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: (struct 0140 (0 T_23 t0000))
T_46:
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: (struct 0140 (0 T_34 t0000))
T_47:
  Class: Eq_47
  DataType: Eq_47
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	ptr32 u0;
	segptr32 u1;
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef union Eq_9 {
	int16 u0;
	Eq_47 Eq_8::* u1;
} Eq_9;

typedef Eq_45 Eq_13[]struct Eq_13 {
	Eq_45 a0000[];	// 0
} Eq_13;

typedef union Eq_19 {
	byte u0;
	word16 u1;
} Eq_19;

typedef union Eq_26 {
	16 u0;
	int16 u1;
	cups16 u2;
} Eq_26;

typedef struct Eq_41 {
	byte b0007;	// 7
} Eq_41;

typedef struct Eq_45 {	// size: 320 140
	byte b0000;	// 0
} Eq_45;

typedef Eq_7 Eq_47struct Eq_47 {	// size: 1 1
	Eq_7 t0000;	// 0
} Eq_47;

