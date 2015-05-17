// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_079/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_16) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_9: (union "Eq_9" (uint8 u0) (uint16 u1))
	T_9 (in al_20 : Eq_9)
	T_10 (in 0x80 : byte)
	T_54 (in al_36 >>u 0x02 : word16)
Eq_16: (segment "Eq_16" (FFFFF8C0 (struct "Eq_26" (FFFFFFFF byte bFFFFFFFF) (0 byte b0000) (1 byte b0001) (140 Eq_47 t0140)) tFFFFF8C0) (0 Eq_26 t0000) (40 (arr word16) a0040) (F8C0 Eq_26 tF8C0))
	T_16 (in 0xA000 : selector)
Eq_26: (struct "Eq_26" (FFFFFFFF byte bFFFFFFFF) (0 byte b0000) (1 byte b0001) (140 Eq_47 t0140))
	T_26 (in di_30 : (memptr (ptr Eq_16) Eq_26))
	T_27 (in di_26 : (memptr (ptr Eq_16) Eq_26))
	T_29 (in di_26 - 0x0001 : word16)
	T_55 (in 0x0000 : word16)
	T_61 (in 0xF8C0 : word16)
Eq_47: (union "Eq_47" (uint16 u0) (byte u1))
	T_47 (in Mem0[0xA000:di_30 + 0x0140:byte] : byte)
	T_50 (in al_36 >>u 0x02 : word16)
	T_53 (in Mem39[0xA000:di_30 + 0x0140:byte] : byte)
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
T_5: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(al) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in di_11 : (memptr (ptr Eq_16) word16))
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) word16)
  OrigDataType: (memptr T_16 (struct 0002 (0 T_19 t0000)))
T_8: (in 0x0040 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) word16)
  OrigDataType: word16
T_9: (in al_20 : Eq_9)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union (uint8 u0) (uint16 u1))
T_10: (in 0x80 : byte)
  Class: Eq_9
  DataType: uint8
  OrigDataType: byte
T_11: (in cx_10 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0x0064 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_13: (in dx_16 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x00C8 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in 0x0080 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0xA000 : selector)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (segment (40 (arr T_62) a0040)))
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_11 + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem13[0xA000:di_11 + 0x0000:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0002 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in di_11 + 0x0002 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) word16)
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx_10 - 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_25: (in cx_10 == 0x0000 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in di_30 : (memptr (ptr Eq_16) Eq_26))
  Class: Eq_26
  DataType: (memptr (ptr Eq_16) Eq_26)
  OrigDataType: (memptr T_16 (struct (FFFFFFFF T_39 tFFFFFFFF) (0 T_35 t0000) (1 T_43 t0001) (140 T_47 t0140)))
T_27: (in di_26 : (memptr (ptr Eq_16) Eq_26))
  Class: Eq_26
  DataType: (memptr (ptr Eq_16) Eq_26)
  OrigDataType: (memptr T_16 (struct (FFFFFFFF T_39 tFFFFFFFF) (0 T_35 t0000) (1 T_43 t0001) (140 T_47 t0140)))
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in di_26 - 0x0001 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_16) Eq_26)
  OrigDataType: word16
T_30: (in al_36 : uint8)
  Class: Eq_30
  DataType: uint8
  OrigDataType: uint8
T_31: (in 0x03 : byte)
  Class: Eq_31
  DataType: uint8
  OrigDataType: uint8
T_32: (in al_20 >>u 0x03 : word16)
  Class: Eq_32
  DataType: uint16
  OrigDataType: uint16
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in di_30 + 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem0[0xA000:di_30 + 0x0000:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in (al_20 >>u 0x03) + (0xA000->*di_30).b0000 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di_30 - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem0[0xA000:di_30 - 0x0001:byte] : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in (al_20 >>u 0x03) + (0xA000->*di_30).b0000 + (0xA000->*di_30).b0001 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di_30 + 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem0[0xA000:di_30 + 0x0001:byte] : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in (al_20 >>u 0x03) + (0xA000->*di_30).b0000 + (0xA000->*di_30).b0001 + (0xA000->*di_30).b0001 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x0140 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di_30 + 0x0140 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem0[0xA000:di_30 + 0x0140:byte] : byte)
  Class: Eq_47
  DataType: Eq_47
  OrigDataType: byte
T_48: (in (al_20 >>u 0x03) + (0xA000->*di_30).b0000 + (0xA000->*di_30).b0001 + (0xA000->*di_30).b0001 + (0xA000->*di_30).t0140 : byte)
  Class: Eq_30
  DataType: uint8
  OrigDataType: byte
T_49: (in 0x02 : byte)
  Class: Eq_49
  DataType: uint8
  OrigDataType: uint8
T_50: (in al_36 >>u 0x02 : word16)
  Class: Eq_47
  DataType: Eq_47
  OrigDataType: uint16
T_51: (in 0x0140 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_30 + 0x0140 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem39[0xA000:di_30 + 0x0140:byte] : byte)
  Class: Eq_47
  DataType: Eq_47
  OrigDataType: byte
T_54: (in al_36 >>u 0x02 : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: uint16
T_55: (in 0x0000 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_16) Eq_26)
  OrigDataType: word16
T_56: (in di_30 != &Eq_16::t0000 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in 0x0001 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in dx_16 - 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_59: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_60: (in dx_16 != 0x0000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in 0xF8C0 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_16) Eq_26)
  OrigDataType: word16
T_62:
  Class: Eq_62
  DataType: word16
  OrigDataType: (struct 0002 (0 T_19 t0000))
*/
typedef Eq_16 Eq_1struct Globals {
	Eq_16 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_9 {
	uint8 u0;
	uint16 u1;
} Eq_9;

typedef struct Eq_26;
Eq_26 Eq_16 Eq_16[]Eq_26struct Eq_16 {
	struct Eq_26 tFFFFF8C0;	// FFFFF8C0
	Eq_26 t0000;	// 0
	word16 a0040[];	// 40
	Eq_26 tF8C0;	// F8C0
} Eq_16;

typedef struct Eq_26 Eq_26;

typedef union Eq_47 {
	uint16 u0;
	byte u1;
} Eq_47;

