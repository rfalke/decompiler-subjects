// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_174/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_88) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (segment "Eq_8")
	T_8 (in ss : selector)
Eq_12: (struct "Eq_12" 0001 (0 Eq_54 t0000))
	T_12 (in si : (memptr word16 Eq_12))
	T_48 (in si - 0x0001 : word16)
	T_93 (in si + 0x0002 : word16)
Eq_30: (fn word16 (word16, word16, byte))
	T_30 (in __shrd : ptr32)
Eq_36: (fn void (word16, int8))
	T_36 (in __outb : ptr32)
Eq_45: (union "Eq_45" (int16 u0) (uint16 u1) ((memptr word16 byte) u2))
	T_45 (in bx_38 : Eq_45)
	T_46 (in 0x0141 : word16)
	T_70 (in -bx_38 : word16)
	T_71 (in 0x0000 : word16)
	T_74 (in bx_38 >>u 0x0007 : word16)
Eq_54: (union "Eq_54" (byte u0) (word16 u1))
	T_54 (in Mem15[dx_8:si + 0x0000:byte] : byte)
	T_87 (in Mem63[dx_8:si + 0x0000:word16] : word16)
	T_91 (in Mem83[0xA000:di + 0x0000:word16] : word16)
Eq_58: (fn byte (byte, byte, byte))
	T_58 (in __rcr : ptr32)
Eq_88: (segment "Eq_88")
	T_88 (in 0xA000 : selector)
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
T_7: (in 0x3838 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ss : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bp : (memptr (ptr Eq_8) word16))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_84 t0000)))
T_10: (in 0x0003 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bp + 0x0003 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_14 t0000)))
T_12: (in si : (memptr word16 Eq_12))
  Class: Eq_12
  DataType: (memptr word16 Eq_12)
  OrigDataType: (memptr T_19 (struct 0001 (0 T_54 t0000)))
T_13: (in bp + 0x0003 + si : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in Mem15[ss:bp + 0x0003 + si:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_15: (in ax_25 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in ax : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x13 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_19: (in dx_8 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in dx : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in dh : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in 0x13 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in dh + 0x13 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in DPB(dx, dh + 0x13, 8, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_25: (in dx_19 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x03C8 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_27: (in cx_22 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x2000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_29: (in ax_27 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in __shrd : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 (T_15, T_27, T_31)))
T_31: (in 0x13 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in __shrd(ax_25, cx_22, 0x13) : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_33: (in al_30 : int8)
  Class: Eq_33
  DataType: int8
  OrigDataType: byte
T_34: (in (byte) ax_27 : byte)
  Class: Eq_34
  DataType: int8
  OrigDataType: int8
T_35: (in -(byte) ax_27 : byte)
  Class: Eq_33
  DataType: int8
  OrigDataType: int8
T_36: (in __outb : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_37 (T_25, T_33)))
T_37: (in __outb(dx_19, al_30) : void)
  Class: Eq_37
  DataType: void
  OrigDataType: void
T_38: (in DPB(ax_27, al_30, 0, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_39: (in 0xC9 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in DPB(dx_19, 0xC9, 0, 8) : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in cx_22 - 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_44: (in cx_22 != 0x0000 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in bx_38 : Eq_45)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: (union (int16 u0) (uint16 u1) ((memptr T_19 (struct (0 T_49 t0000))) u2))
T_46: (in 0x0141 : word16)
  Class: Eq_45
  DataType: int16
  OrigDataType: word16
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in si - 0x0001 : word16)
  Class: Eq_12
  DataType: (memptr word16 Eq_12)
  OrigDataType: word16
T_49: (in v18_58 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in bx_38 + si : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in Mem15[dx_8:bx_38 + si:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in si + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem15[dx_8:si + 0x0000:byte] : byte)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: byte
T_55: (in Mem15[dx_8:bx_38 + si:byte] + Mem15[dx_8:si + 0x0000:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_56: (in bx_38 + si : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem59[dx_8:bx_38 + si:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_58: (in __rcr : ptr32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (fn T_63 (T_60, T_61, T_62)))
T_59: (in bx_38 + si : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in Mem59[dx_8:bx_38 + si:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_61: (in 0x01 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in cond(v18_58) : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in __rcr(Mem59[dx_8:bx_38 + si:byte], 0x01, cond(v18_58)) : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_64: (in bx_38 + si : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem63[dx_8:bx_38 + si:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_66: (in 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in cx_22 - 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_68: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_69: (in cx_22 != 0x0000 : bool)
  Class: Eq_69
  DataType: bool
  OrigDataType: bool
T_70: (in -bx_38 : word16)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: int16
T_71: (in 0x0000 : word16)
  Class: Eq_45
  DataType: int16
  OrigDataType: int16
T_72: (in bx_38 < 0x0000 : bool)
  Class: Eq_72
  DataType: bool
  OrigDataType: bool
T_73: (in 0x0007 : word16)
  Class: Eq_73
  DataType: uint16
  OrigDataType: uint16
T_74: (in bx_38 >>u 0x0007 : word16)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: uint16
T_75: (in bx_38 >>u 0x0007 : word16)
  Class: Eq_75
  DataType: uint16
  OrigDataType: uint16
T_76: (in 0x0000 : word16)
  Class: Eq_75
  DataType: uint16
  OrigDataType: word16
T_77: (in bx_38 >>u 0x0007 != 0x0000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in cx_76 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in 0x80 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in DPB(cx_22, 0x80, 8, 8) : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_81: (in 0xFFE8 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in di : (memptr (ptr Eq_88) Eq_54))
  Class: Eq_82
  DataType: (memptr (ptr Eq_88) Eq_54)
  OrigDataType: (memptr T_88 (struct 0002 (0 T_91 t0000)))
T_83: (in bp + di : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem89[ss:bp + di:word16] : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_85: (in 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in si + 0x0000 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in Mem63[dx_8:si + 0x0000:word16] : word16)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: word16
T_88: (in 0xA000 : selector)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (segment))
T_89: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in di + 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in Mem83[0xA000:di + 0x0000:word16] : word16)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: word16
T_92: (in 0x0002 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in si + 0x0002 : word16)
  Class: Eq_12
  DataType: (memptr word16 Eq_12)
  OrigDataType: word16
T_94: (in 0x0002 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in di + 0x0002 : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_88) Eq_54)
  OrigDataType: word16
T_96: (in 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in cx_76 - 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_99: (in cx_76 == 0x0000 : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_88 Eq_1struct Globals {
	Eq_88 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_8 {
} Eq_8;

typedef Eq_54 Eq_12struct Eq_12 {	// size: 1 1
	Eq_54 t0000;	// 0
} Eq_12;

typedef word16 (Eq_30)(word16, word16, byte);

typedef void (Eq_36)(word16, int8);

typedef union Eq_45 {
	int16 u0;
	uint16 u1;
	byte word16::* u2;
} Eq_45;

typedef union Eq_54 {
	byte u0;
	word16 u1;
} Eq_54;

typedef byte (Eq_58)(byte, byte, byte);

typedef struct Eq_88 {
} Eq_88;

