// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_050/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, word16))
	T_7 (in __outw : ptr32)
Eq_13: (union "Eq_13" (ptr32 u0) (segptr32 u1))
	T_13 (in es_ax_12 : ptr32)
	T_18 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_14: (segment "Eq_14")
	T_14 (in ds : (ptr Eq_14))
Eq_19: (union "Eq_19" (byte u0) (word16 u1))
	T_19 (in al_13 : Eq_19)
	T_20 (in (byte) es_ax_12 : byte)
	T_29 (in al_13 + 0x95 + C : word16)
	T_31 (in 0x00 : byte)
	T_56 (in (byte) (ax_50 - 0x0001) : byte)
Eq_21: (segment "Eq_21")
	T_21 (in es_15 : (ptr Eq_21))
	T_22 (in SLICE(es_ax_12, selector, 16) : selector)
Eq_23: (fn void (word16, Eq_19))
	T_23 (in __outb : ptr32)
Eq_50: (fn byte (byte))
	T_50 (in __inb : ptr32)
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
T_7: (in __outw : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_12 (T_8, T_11)))
T_8: (in 0x03D4 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in ax : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x20 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in DPB(ax, 0x20, 8, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in __outw(0x03D4, DPB(ax, 0x20, 8, 8)) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in es_ax_12 : ptr32)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: ptr32
T_14: (in ds : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_15: (in bx : (memptr (ptr Eq_14) Eq_13))
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) Eq_13)
  OrigDataType: (memptr T_14 (struct (0 T_18 t0000)))
T_16: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in bx + 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: segptr32
T_19: (in al_13 : Eq_19)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: (union (byte u0) (word16 u1))
T_20: (in (byte) es_ax_12 : byte)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: byte
T_21: (in es_15 : (ptr Eq_21))
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (segment))
T_22: (in SLICE(es_ax_12, selector, 16) : selector)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (segment))
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_25 (T_24, T_19)))
T_24: (in 0x03C9 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in __outb(0x03C9, al_13) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in 0x95 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in al_13 + 0x95 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in C : byte)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in al_13 + 0x95 + C : word16)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: word16
T_30: (in cond(al_13) : byte)
  Class: Eq_28
  DataType: bool
  OrigDataType: byte
T_31: (in 0x00 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_32: (in al_13 != 0x00 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in cx_57 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in (byte) cx_57 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in SLICE(cx_57, byte, 8) : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in (byte) cx_57 ^ SLICE(cx_57, byte, 8) : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in di : (memptr (ptr Eq_21) byte))
  Class: Eq_37
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: (memptr T_21 (struct 0001 (0 T_40 t0000)))
T_38: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem46[es_15:di + 0x0000:byte] : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_41: (in false : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_21) byte)
  OrigDataType: word16
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in cx_57 - 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_46: (in cx : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_47: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_48: (in cx != 0x0000 : bool)
  Class: Eq_48
  DataType: bool
  OrigDataType: bool
T_49: (in ax_50 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in __inb : ptr32)
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (fn T_52 (T_51)))
T_51: (in 0x60 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in __inb(0x60) : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in DPB(cx_57, __inb(0x60), 0, 8) : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in ax_50 - 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in (byte) (ax_50 - 0x0001) : byte)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: byte
T_57: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_58: (in ax_50 != 0x0001 : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, word16);

typedef union Eq_13 {
	ptr32 u0;
	segptr32 u1;
} Eq_13;

typedef struct Eq_14 {
} Eq_14;

typedef union Eq_19 {
	byte u0;
	word16 u1;
} Eq_19;

typedef struct Eq_21 {
} Eq_21;

typedef void (Eq_23)(word16, Eq_19);

typedef byte (Eq_50)(byte);

