// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_328/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (fn void (word16, byte))
	T_13 (in __outb : ptr32)
Eq_18: (segment "Eq_18" (300 (arr byte) a0300))
	T_18 (in es : (ptr Eq_18))
Eq_30: (union "Eq_30" (int8 u0) (uint8 u1))
	T_30 (in al_33 : Eq_30)
	T_31 (in -cl : byte)
Eq_32: (fn void (word16, uint16))
	T_32 (in __outb : ptr32)
Eq_37: (fn void (word16, uint8))
	T_37 (in __outb : ptr32)
Eq_42: (fn void (word16, uint8))
	T_42 (in __outb : ptr32)
Eq_53: (segment "Eq_53" (302 byte b0302) (304 byte b0304))
	T_53 (in ss : selector)
Eq_54: (union "Eq_54" (ptr16 u0) ((memptr (ptr Eq_53) Eq_71) u1))
	T_54 (in fp : ptr16)
Eq_71: (struct "Eq_71" (FFFFFFFE word16 wFFFFFFFE))
	T_71
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
T_7: (in di_17 : (memptr (ptr Eq_18) byte))
  Class: Eq_7
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: (memptr T_18 (struct 0001 (0 T_21 t0000)))
T_8: (in 0x0300 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: word16
T_9: (in cx_18 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in cx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0xA0 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(cx, 0xA0, 8, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_16 (T_14, T_15)))
T_14: (in 0x03C8 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in 0x00 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in es : (ptr Eq_18))
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment (300 (arr T_70) a0300)))
T_19: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di_17 + 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in Mem21[es:di_17 + 0x0000:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx_18 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in di_17 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: word16
T_26: (in (byte) cx_18 : byte)
  Class: Eq_26
  DataType: int8
  OrigDataType: byte
T_27: (in cl : int8)
  Class: Eq_26
  DataType: int8
  OrigDataType: int8
T_28: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_29: (in cx_18 == 0x0000 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in al_33 : Eq_30)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: uint8
T_31: (in -cl : byte)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: int8
T_32: (in __outb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_36 (T_33, T_35)))
T_33: (in 0x03C9 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x02 : byte)
  Class: Eq_34
  DataType: uint8
  OrigDataType: uint8
T_35: (in al_33 >>u 0x02 : word16)
  Class: Eq_35
  DataType: uint16
  OrigDataType: uint16
T_36: (in __outb(0x03C9, al_33 >>u 0x02) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in __outb : ptr32)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (fn T_41 (T_38, T_40)))
T_38: (in 0x03C9 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x03 : byte)
  Class: Eq_39
  DataType: uint8
  OrigDataType: uint8
T_40: (in al_33 >>u 0x03 : byte)
  Class: Eq_40
  DataType: uint8
  OrigDataType: uint8
T_41: (in __outb(0x03C9, al_33 >>u 0x03) : void)
  Class: Eq_41
  DataType: void
  OrigDataType: void
T_42: (in __outb : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_46 (T_43, T_45)))
T_43: (in 0x03C9 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x04 : byte)
  Class: Eq_44
  DataType: uint8
  OrigDataType: uint8
T_45: (in al_33 >>u 0x04 : byte)
  Class: Eq_45
  DataType: uint8
  OrigDataType: uint8
T_46: (in __outb(0x03C9, al_33 >>u 0x04) : void)
  Class: Eq_46
  DataType: void
  OrigDataType: void
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in cx_18 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_49: (in (byte) cx_18 : byte)
  Class: Eq_26
  DataType: int8
  OrigDataType: byte
T_50: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_51: (in cx_18 != 0x0000 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in 0x0337 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in ss : selector)
  Class: Eq_53
  DataType: (ptr Eq_53)
  OrigDataType: (ptr (segment (302 T_58 t0302) (304 T_63 t0304)))
T_54: (in fp : ptr16)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: (union (ptr16 u0) ((memptr T_53 (struct (FFFFFFFE T_57 tFFFFFFFE))) u1))
T_55: (in 0x0002 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in fp - 0x0002 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem52[ss:fp - 0x0002:word16] : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_58: (in 0x21 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in 0x0302 : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_53) byte)
  OrigDataType: (memptr T_53 (struct (0 T_60 t0000)))
T_60: (in Mem54[ss:0x0302:byte] : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_61: (in 0x41 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in 0x0304 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_53) byte)
  OrigDataType: (memptr T_53 (struct (0 T_63 t0000)))
T_63: (in Mem55[ss:0x0304:byte] : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_64: (in 0x0302 : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_53) byte)
  OrigDataType: (memptr T_53 (struct (0 T_65 t0000)))
T_65: (in Mem55[ss:0x0302:byte] : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_66: (in 0x01 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in ss->b0302 - 0x01 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_68: (in 0x0302 : word16)
  Class: Eq_68
  DataType: (memptr (ptr Eq_53) byte)
  OrigDataType: (memptr T_53 (struct (0 T_69 t0000)))
T_69: (in Mem57[ss:0x0302:byte] : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_70:
  Class: Eq_70
  DataType: byte
  OrigDataType: (struct 0001 (0 T_21 t0000))
T_71:
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_13)(word16, byte);

typedef  Eq_18[]struct Eq_18 {
	byte a0300[];	// 300
} Eq_18;

typedef union Eq_30 {
	int8 u0;
	uint8 u1;
} Eq_30;

typedef void (Eq_32)(word16, uint16);

typedef void (Eq_37)(word16, uint8);

typedef void (Eq_42)(word16, uint8);

typedef struct Eq_53 {
	byte b0302;	// 302
	byte b0304;	// 304
} Eq_53;

typedef union Eq_54 {
	ptr16 u0;
	Eq_71 Eq_53::* u1;
} Eq_54;

typedef struct Eq_71 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_71;

