// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_335/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_7: (segment "Eq_7" (2000 (arr word16) a2000))
	T_7 (in cs : selector)
Eq_15: (segment "Eq_15" (4B4 word16 w04B4))
	T_15 (in ds : (ptr Eq_15))
Eq_18: (fn void (byte))
	T_18 (in bios_video_set_mode : ptr32)
	T_19 (in signature of bios_video_set_mode : void)
Eq_23: (fn void (word16, byte))
	T_23 (in __outb : ptr32)
Eq_40: (union "Eq_40" (uint16 u0) (byte u1))
	T_40 (in al_40 : Eq_40)
	T_42 (in ah_33 >>u 0x02 : word16)
Eq_43: (fn void (word16, Eq_40))
	T_43 (in __outb : ptr32)
Eq_46: (fn void (word16, Eq_40))
	T_46 (in __outb : ptr32)
Eq_49: (fn void (word16, Eq_40))
	T_49 (in __outb : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in di_13 : word16)
  Class: Eq_2
  DataType: (memptr (ptr (arr word16)) word16)
  OrigDataType: (memptr T_9 (struct 0002 (0 T_6 t0000)))
T_3: (in 0x0000 : word16)
  Class: Eq_2
  DataType: (memptr (ptr (arr word16)) word16)
  OrigDataType: word16
T_4: (in cx_12 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in 0x7FFF : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_6: (in 0x0000 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in cs : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_8: (in 0x2000 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in cs + 0x2000 : word16)
  Class: Eq_9
  DataType: (ptr (arr word16))
  OrigDataType: (ptr (struct (0 (arr T_56) a0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in di_13 + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem18[cs + 0x2000:di_13 + 0x0000:word16] : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_13: (in 0x1000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in cs + 0x1000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in ds : (ptr Eq_15))
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment (4B4 T_17 t04B4)))
T_16: (in 0x04B4 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_15) word16)
  OrigDataType: (memptr T_15 (struct (0 T_17 t0000)))
T_17: (in Mem22[ds:0x04B4:word16] : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_18: (in bios_video_set_mode : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_22 (T_21)))
T_19: (in signature of bios_video_set_mode : void)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: 
T_20: (in al : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0x13 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_22: (in bios_video_set_mode(0x13) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_26 (T_24, T_25)))
T_24: (in 0x03C8 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x00 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in ah_33 : uint8)
  Class: Eq_27
  DataType: uint8
  OrigDataType: uint8
T_28: (in 0x00 : byte)
  Class: Eq_27
  DataType: uint8
  OrigDataType: byte
T_29: (in 0x0000 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_30: (in cs + 0x2000 : word16)
  Class: Eq_9
  DataType: (ptr (arr word16))
  OrigDataType: (ptr (struct (0 (arr T_57) a0000)))
T_31: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di_13 + 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem15[cs + 0x2000:di_13 + 0x0000:word16] : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0002 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in di_13 + 0x0002 : word16)
  Class: Eq_2
  DataType: (memptr (ptr (arr word16)) word16)
  OrigDataType: word16
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cx_12 - 0x0001 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0000 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_39: (in cx_12 == 0x0000 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in al_40 : Eq_40)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: byte
T_41: (in 0x02 : byte)
  Class: Eq_41
  DataType: uint8
  OrigDataType: uint8
T_42: (in ah_33 >>u 0x02 : word16)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: uint16
T_43: (in __outb : ptr32)
  Class: Eq_43
  DataType: (ptr Eq_43)
  OrigDataType: (ptr (fn T_45 (T_44, T_40)))
T_44: (in 0x03C9 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in __outb(0x03C9, al_40) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in __outb : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_48 (T_47, T_40)))
T_47: (in 0x03C9 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in __outb(0x03C9, al_40) : void)
  Class: Eq_48
  DataType: void
  OrigDataType: void
T_49: (in __outb : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_51 (T_50, T_40)))
T_50: (in 0x03C9 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in __outb(0x03C9, al_40) : void)
  Class: Eq_51
  DataType: void
  OrigDataType: void
T_52: (in 0x01 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in ah_33 + 0x01 : byte)
  Class: Eq_27
  DataType: uint8
  OrigDataType: byte
T_54: (in 0x00 : byte)
  Class: Eq_27
  DataType: uint8
  OrigDataType: byte
T_55: (in ah_33 != 0x00 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56:
  Class: Eq_56
  DataType: word16
  OrigDataType: (struct 0002 (0 T_12 t0000))
T_57:
  Class: Eq_56
  DataType: word16
  OrigDataType: (struct 0002 (0 T_33 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef  Eq_7[]struct Eq_7 {
	word16 a2000[];	// 2000
} Eq_7;

typedef struct Eq_15 {
	word16 w04B4;	// 4B4
} Eq_15;

typedef void (Eq_18)(byte);

typedef void (Eq_23)(word16, byte);

typedef union Eq_40 {
	uint16 u0;
	byte u1;
} Eq_40;

typedef void (Eq_43)(word16, Eq_40);

typedef void (Eq_46)(word16, Eq_40);

typedef void (Eq_49)(word16, Eq_40);

