// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_031/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (ptr32 u0) (segptr32 u1))
	T_7 (in es_cx_6 : Eq_7)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_9: (struct "Eq_9" 0001 (0 Eq_7 t0000))
	T_9 (in bx : (memptr (ptr Eq_8) Eq_9))
	T_35 (in bx + 0x0001 : word16)
Eq_13: (segment "Eq_13")
	T_13 (in es_7 : (ptr Eq_13))
	T_14 (in SLICE(es_cx_6, selector, 16) : selector)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_22: (fn void (word16, byte))
	T_22 (in __outb : ptr32)
Eq_25: (fn void (word16, byte))
	T_25 (in __outb : ptr32)
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
T_7: (in es_cx_6 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : (memptr (ptr Eq_8) Eq_9))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_9)
  OrigDataType: (memptr T_8 (struct 0001 (0 T_12 t0000)))
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
T_13: (in es_7 : (ptr Eq_13))
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_14: (in SLICE(es_cx_6, selector, 16) : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_15: (in cx_11 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in (word16) es_cx_6 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_17: (in al_13 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in (byte) cx_11 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_17)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, al_13) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_24 (T_23, T_17)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in __outb(0x03C9, al_13) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in __outb : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_27 (T_26, T_17)))
T_26: (in 0x03C9 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in __outb(0x03C9, al_13) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in cx_11 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_30: (in ch_16 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in SLICE(cx_11, byte, 8) : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_32: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_33: (in cx_11 != 0x0000 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in bx + 0x0001 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_9)
  OrigDataType: word16
T_36: (in bh_28 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_38: (in C : byte)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in !C : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_40: (in al_13 + ch_16 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in al_13 + ch_16 + C : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x7F : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in al_13 + ch_16 + C & 0x7F : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in al_13 + ch_16 + C & 0x7F ^ bh_28 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_45: (in di : (memptr (ptr Eq_13) byte))
  Class: Eq_45
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: (memptr T_13 (struct 0001 (0 T_48 t0000)))
T_46: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in di + 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem45[es_7:di + 0x0000:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in cx_11 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_51: (in false : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in di + 0x0001 : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_13) byte)
  OrigDataType: word16
T_54: (in SLICE(cx_11, byte, 8) : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_55: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_56: (in cx_11 != 0x0000 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
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

typedef Eq_7 Eq_9struct Eq_9 {	// size: 1 1
	Eq_7 t0000;	// 0
} Eq_9;

typedef struct Eq_13 {
} Eq_13;

typedef void (Eq_19)(word16, byte);

typedef void (Eq_22)(word16, byte);

typedef void (Eq_25)(word16, byte);

