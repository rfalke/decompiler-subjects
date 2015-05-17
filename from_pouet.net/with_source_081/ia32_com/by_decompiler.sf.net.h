// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_081/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF90000 (ptr Eq_12) ptrFFF90000) (FFFA0000 (ptr Eq_50) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_12: (segment "Eq_12" (0 (arr byte 321) a0000) (140 byte b0140))
	T_12 (in 0x9000 : selector)
Eq_28: (segment "Eq_28")
	T_28 (in ss : selector)
Eq_29: (union "Eq_29" (ptr16 u0) ((memptr (ptr Eq_28) Eq_77) u1))
	T_29 (in fp : ptr16)
Eq_50: (segment "Eq_50" (0 byte b0000))
	T_50 (in 0xA000 : selector)
Eq_77: (struct "Eq_77" (FFFFFFFE word16 wFFFFFFFE))
	T_77
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
T_7: (in di_13 : (memptr (ptr Eq_12) byte))
  Class: Eq_7
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: (memptr T_12 (struct 0001 (0 T_15 t0000)))
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_9: (in si_10 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x018B : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in ch : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x9000 : selector)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment (0 (arr T_75 321) a0000)))
T_13: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in di_13 + 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in Mem17[0x9000:di_13 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_16: (in cx : int16)
  Class: Eq_16
  DataType: int16
  OrigDataType: int16
T_17: (in cx + si_10 : word16)
  Class: Eq_16
  DataType: int16
  OrigDataType: word16
T_18: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_19: (in 0x0028 : word16)
  Class: Eq_19
  DataType: int16
  OrigDataType: int16
T_20: (in cx *s 0x0028 : int32)
  Class: Eq_20
  DataType: int32
  OrigDataType: int32
T_21: (in SLICE(cx *s 0x0028, word16, 16) : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in si_10 - SLICE(cx *s 0x0028, word16, 16) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in di_13 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_25: (in 0x0000 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_26: (in di_13 != Eq_12::a0000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in 0xA000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in ss : selector)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment))
T_29: (in fp : ptr16)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: (union (ptr16 u0) ((memptr T_28 (struct (FFFFFFFE T_32 tFFFFFFFE))) u1))
T_30: (in 0x0002 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in fp - 0x0002 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in Mem29[ss:fp - 0x0002:word16] : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_33: (in dx_35 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0028 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_35: (in dh_37 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0x00 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_37: (in bx : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: (memptr T_12 (struct (0 T_40 t0000)))
T_38: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in bx + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem29[0x9000:bx + 0x0000:byte] : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in cx_62 : (memptr (ptr Eq_12) byte))
  Class: Eq_41
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: (memptr T_12 (struct 0001 (0 T_44 t0000)))
T_42: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in cx_62 + 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem29[0x9000:cx_62 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_45: (in 0x9000->*bx + 0x9000->*cx_62 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in cx_62 + dx_35 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem29[0x9000:cx_62 + dx_35:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_48: (in 0x9000->*bx + 0x9000->*cx_62 + cx_62[dx_35] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x9000->*bx + 0x9000->*cx_62 + cx_62[dx_35] & dh_37 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in 0xA000 : selector)
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (segment))
T_51: (in si_48 : (memptr (ptr Eq_50) byte))
  Class: Eq_51
  DataType: (memptr (ptr Eq_50) byte)
  OrigDataType: (memptr T_50 (struct 0001 (0 T_54 t0000)))
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in si_48 + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem75[0xA000:si_48 + 0x0000:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in si_48 + 0x0001 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_50) byte)
  OrigDataType: word16
T_57: (in 0x0001 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in cx_62 - 0x0001 : word16)
  Class: Eq_41
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_59: (in 0x0000 : word16)
  Class: Eq_41
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_60: (in cx_62 != Eq_12::a0000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in bl_51 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in 0x01 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in bl_51 - 0x01 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_64: (in DPB(bx, bl_51, 0, 8) : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_65: (in 0x00 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_66: (in bl_51 != 0x00 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in 0x0140 : word16)
  Class: Eq_41
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in dx_35 + 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_70: (in SLICE(dx_35, byte, 8) : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_71: (in 0x0000 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_50) byte)
  OrigDataType: word16
T_72: (in 0xC8 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_73: (in 0xC8 : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in DPB(bx, 0xC8, 0, 8) : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_12) byte)
  OrigDataType: word16
T_75:
  Class: Eq_75
  DataType: byte
  OrigDataType: (struct 0001 (0 T_15 t0000))
T_76:
  Class: Eq_75
  DataType: byte
  OrigDataType: (struct 0001 (0 T_44 t0000))
T_77:
  Class: Eq_77
  DataType: Eq_77
  OrigDataType: 
*/
typedef Eq_12 Eq_1Eq_50 Eq_1struct Globals {
	Eq_12 * ptrFFF90000;	// FFF90000
	Eq_50 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_12[321]struct Eq_12 {
	byte a0000[321];	// 0
	byte b0140;	// 140
} Eq_12;

typedef struct Eq_28 {
} Eq_28;

typedef union Eq_29 {
	ptr16 u0;
	Eq_77 Eq_28::* u1;
} Eq_29;

typedef struct Eq_50 {
	byte b0000;	// 0
} Eq_50;

typedef struct Eq_77 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_77;

