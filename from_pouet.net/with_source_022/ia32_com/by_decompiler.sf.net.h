// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_022/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_16: (fn byte (byte))
	T_16 (in __inb : ptr32)
Eq_20: (union "Eq_20" (byte u0) (word16 u1))
	T_20 (in al_20 : Eq_20)
	T_27 (in v14_39 : Eq_20)
	T_31 (in Mem33[bx_7:di_31 + 0x0001:byte] : byte)
	T_32 (in 0x00 : byte)
	T_34 (in Mem40[bx_7:di_31 + 0x0001:byte] : byte)
	T_46 (in Mem33[bx_7:di_31 + 0x0000:byte] : byte)
Eq_22: (fn bool (byte, byte, (ptr byte), (ptr byte)))
	T_22 (in __aaa : ptr32)
Eq_28: (struct "Eq_28" (0 Eq_20 t0000) (1 Eq_20 t0001))
	T_28 (in di_31 : (memptr word16 Eq_28))
	T_43 (in di - ax_15 - C_22 : word16)
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
T_7: (in ax_15 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in bx_7 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in bx : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0xA0 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in DPB(bx, 0xA0, 8, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_15: (in al_18 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in __inb : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_18 (T_17)))
T_17: (in 0x40 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in __inb(0x40) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_19: (in DPB(ax_15, al_18, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_20: (in al_20 : Eq_20)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: (union (byte u0) (word16 u1))
T_21: (in C_22 : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_22: (in __aaa : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_26 (T_15, T_23, T_24, T_25)))
T_23: (in ah : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in &al_20 : ptr16)
  Class: Eq_24
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_25: (in &ah : ptr16)
  Class: Eq_25
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_26: (in __aaa(al_18, ah, &al_20, &ah) : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_27: (in v14_39 : Eq_20)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: word16
T_28: (in di_31 : (memptr word16 Eq_28))
  Class: Eq_28
  DataType: (memptr word16 Eq_28)
  OrigDataType: (memptr T_11 (struct (0 T_46 t0000) (1 T_20 t0001)))
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di_31 + 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem33[bx_7:di_31 + 0x0001:byte] : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_32: (in 0x00 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_33: (in di_31 + 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem40[bx_7:di_31 + 0x0001:byte] : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_35: (in 0x00 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_36: (in false : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_37: (in (word16) v14_39 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_38: (in cx : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in cx + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_41: (in di : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di - ax_15 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di - ax_15 - C_22 : word16)
  Class: Eq_28
  DataType: (memptr word16 Eq_28)
  OrigDataType: word16
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di_31 + 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem33[bx_7:di_31 + 0x0000:byte] : byte)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: byte
T_47: (in di_31 + 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_48: (in 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in cx - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_51: (in cx != 0x0000 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef byte (Eq_16)(byte);

typedef union Eq_20 {
	byte u0;
	word16 u1;
} Eq_20;

typedef bool (Eq_22)(byte, byte, byte *, byte *);

typedef Eq_20 Eq_28Eq_20 Eq_28struct Eq_28 {
	Eq_20 t0000;	// 0
	Eq_20 t0001;	// 1
} Eq_28;

