// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_280/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_213) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (struct "Eq_7" 0001 (0 int16 w0000))
	T_7 (in bx_6 : (memptr (ptr Eq_41) Eq_7))
	T_10 (in DPB(bx, 0xF0, 8, 8) : word16)
	T_13 (in bx_14 : (memptr (ptr Eq_41) Eq_7))
	T_51 (in bx_32 + 0x0001 : word16)
Eq_11: (union "Eq_11" (int16 u0) (byte u1))
	T_11 (in cx_15 : Eq_11)
	T_12 (in 0x0100 : word16)
	T_16 (in Mem16[ss:0x0200:word16] : word16)
	T_19 (in Mem16[ss:0x0200:int16] : int16)
	T_49 (in cx_15 - 0x0001 : word16)
	T_57 (in 0x0000 : word16)
	T_163 (in Mem30[ss:0x0200:byte] : byte)
	T_195 (in Mem30[ss:0x0200:byte] : byte)
	T_236 (in Mem212[ss:0x0200:byte] : byte)
	T_238 (in Mem212[ss:0x0200:byte] + 0x01 : byte)
	T_240 (in Mem214[ss:0x0200:byte] : byte)
Eq_14: (segment "Eq_14" (1F8 Eq_22 t01F8) (1FC word16 w01FC) (1FE word16 w01FE) (200 Eq_11 t0200) (204 Eq_189 t0204))
	T_14 (in ss : selector)
Eq_17: (union "Eq_17" (real16 u0) (real64 u1))
	T_17 (in rLoc1_19 : Eq_17)
	T_23 (in (real64) ss->t0200 * ss->t01F8 : word16)
Eq_20: (union "Eq_20" (real16 u0) (real64 u1))
	T_20 (in (real64) ss->t0200 : real64)
Eq_22: (union "Eq_22" (byte u0) (real16 u1) (real32 u2))
	T_22 (in Mem16[ss:0x01F8:real32] : real32)
	T_149 (in Mem30[ss:0x01F8:byte] : byte)
	T_155 (in Mem30[ss:0x01F8:byte] : byte)
	T_242 (in Mem214[ss:0x01F8:byte] : byte)
	T_244 (in ss->t01F8 - 0x01 : byte)
	T_246 (in Mem216[ss:0x01F8:byte] : byte)
Eq_24: (union "Eq_24" (real16 u0) (real64 u1))
	T_24 (in rLoc2_22 : Eq_24)
	T_31 (in sin(rLoc2) * (real64) ss->w01FC : word16)
Eq_25: (fn Eq_27 (Eq_26))
	T_25 (in sin : ptr32)
Eq_26: (union "Eq_26" (real16 u0) (real64 u1))
	T_26 (in rLoc2 : real64)
	T_38 (in sin(rLoc1_19 + rLoc1_19) * (real64) ss->w01FE : word16)
Eq_27: (union "Eq_27" (real16 u0) (real64 u1))
	T_27 (in sin(rLoc2) : real64)
Eq_30: (union "Eq_30" (real16 u0) (real64 u1))
	T_30 (in (real64) ss->w01FC : real64)
Eq_32: (fn Eq_34 (real64))
	T_32 (in sin : ptr32)
Eq_34: (union "Eq_34" (real16 u0) (real64 u1))
	T_34 (in sin(rLoc1_19 + rLoc1_19) : real64)
Eq_37: (union "Eq_37" (real16 u0) (real64 u1))
	T_37 (in (real64) ss->w01FE : real64)
Eq_41: (segment "Eq_41" (0 (arr word16) a0000) (1E9 (arr Eq_252) a01E9))
	T_41 (in ds : (ptr Eq_41))
Eq_59: (fn void (word16, byte))
	T_59 (in __outb : ptr32)
Eq_65: (struct "Eq_65" 0004 (0 byte b0000) (1 byte b0001) (2 byte b0002))
	T_65 (in si_47 : (memptr (ptr Eq_41) Eq_65))
	T_66 (in 0x01E9 : word16)
	T_121 (in si_47 + 0x0004 : word16)
Eq_73: (fn void (word16, uint16))
	T_73 (in __outb : ptr32)
Eq_78: (fn void (word16, uint16))
	T_78 (in __outb : ptr32)
Eq_83: (fn void (word16, uint16))
	T_83 (in __outb : ptr32)
Eq_126: (fn word16 (word16))
	T_126 (in __inw : ptr32)
Eq_134: (fn word16 (word16))
	T_134 (in __inw : ptr32)
Eq_172: (fn word16 (word16, byte, byte))
	T_172 (in __rcl : ptr32)
Eq_189: (union "Eq_189" (word16 u0) (word32 u1))
	T_189 (in Mem30[ss:0x0204:word16] : word16)
	T_230 (in Mem203[ss:0x0204:word32] : word32)
	T_232 (in ss->t0204 - 0x00000001 : word32)
	T_234 (in Mem212[ss:0x0204:word32] : word32)
Eq_213: (segment "Eq_213" (0 byte b0000))
	T_213 (in 0xA000 : selector)
Eq_247: (fn byte (byte))
	T_247 (in __inb : ptr32)
Eq_252: (struct "Eq_252" 0004 (0 byte b0000) (1 byte b0001) (2 byte b0002))
	T_252
	T_257
Eq_253: (struct "Eq_253" 0004 (1 byte b0001))
	T_253
	T_256
Eq_254: (struct "Eq_254" 0004 (2 byte b0002))
	T_254
	T_255
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
T_7: (in bx_6 : (memptr (ptr Eq_41) Eq_7))
  Class: Eq_7
  DataType: (memptr (ptr Eq_41) Eq_7)
  OrigDataType: word16
T_8: (in bx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0xF0 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(bx, 0xF0, 8, 8) : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_41) Eq_7)
  OrigDataType: word16
T_11: (in cx_15 : Eq_11)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_12: (in 0x0100 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_13: (in bx_14 : (memptr (ptr Eq_41) Eq_7))
  Class: Eq_7
  DataType: (memptr (ptr Eq_41) Eq_7)
  OrigDataType: (memptr T_41 (struct 0001 (0 T_44 t0000)))
T_14: (in ss : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment (1F8 T_22 t01F8) (1FC T_29 t01FC) (1FE T_36 t01FE) (200 T_11 t0200) (204 T_189 t0204)))
T_15: (in 0x0200 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_16 t0000)))
T_16: (in Mem16[ss:0x0200:word16] : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_17: (in rLoc1_19 : Eq_17)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: real64
T_18: (in 0x0200 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_19 t0000)))
T_19: (in Mem16[ss:0x0200:int16] : int16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: int16
T_20: (in (real64) ss->t0200 : real64)
  Class: Eq_20
  DataType: Eq_20
  OrigDataType: (union (real16 u0) (real64 u1))
T_21: (in 0x01F8 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_14) Eq_22)
  OrigDataType: (memptr T_14 (struct (0 T_22 t0000)))
T_22: (in Mem16[ss:0x01F8:real32] : real32)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: (union (real16 u0) (real32 u1))
T_23: (in (real64) ss->t0200 * ss->t01F8 : word16)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: real16
T_24: (in rLoc2_22 : Eq_24)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: real64
T_25: (in sin : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_27 (T_26)))
T_26: (in rLoc2 : real64)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real16 u0) (real64 u1))
T_27: (in sin(rLoc2) : real64)
  Class: Eq_27
  DataType: Eq_27
  OrigDataType: (union (real16 u0) (real64 u1))
T_28: (in 0x01FC : word16)
  Class: Eq_28
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_14 (struct (0 T_29 t0000)))
T_29: (in Mem16[ss:0x01FC:word16] : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in (real64) ss->w01FC : real64)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: (union (real16 u0) (real64 u1))
T_31: (in sin(rLoc2) * (real64) ss->w01FC : word16)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: real16
T_32: (in sin : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_34 (T_33)))
T_33: (in rLoc1_19 + rLoc1_19 : real64)
  Class: Eq_33
  DataType: real64
  OrigDataType: real64
T_34: (in sin(rLoc1_19 + rLoc1_19) : real64)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: (union (real16 u0) (real64 u1))
T_35: (in 0x01FE : word16)
  Class: Eq_35
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_14 (struct (0 T_36 t0000)))
T_36: (in Mem16[ss:0x01FE:word16] : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in (real64) ss->w01FE : real64)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: (union (real16 u0) (real64 u1))
T_38: (in sin(rLoc1_19 + rLoc1_19) * (real64) ss->w01FE : word16)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real16
T_39: (in rLoc2_22 + rLoc2 : real64)
  Class: Eq_39
  DataType: real64
  OrigDataType: real64
T_40: (in (int16) (rLoc2_22 + rLoc2) : int16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_41: (in ds : (ptr Eq_41))
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (segment (0 (arr T_258) a0000) (1E9 (arr T_252) a01E9) (1EA (arr T_253) a01EA) (1EB (arr T_254) a01EB)))
T_42: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in bx_14 + 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem30[ds:bx_14 + 0x0000:int16] : int16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_45: (in bx_32 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in bx_14 + 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_48: (in 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in cx_15 - 0x0001 : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in bx_32 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_41) Eq_7)
  OrigDataType: word16
T_52: (in bl_35 : uint8)
  Class: Eq_52
  DataType: uint8
  OrigDataType: uint8
T_53: (in bx_32 + 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in (byte) (bx_32 + 0x0001) : byte)
  Class: Eq_52
  DataType: uint8
  OrigDataType: byte
T_55: (in ch_39 : uint8)
  Class: Eq_55
  DataType: uint8
  OrigDataType: uint8
T_56: (in SLICE(cx_15, byte, 8) : byte)
  Class: Eq_55
  DataType: uint8
  OrigDataType: byte
T_57: (in 0x0000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_58: (in cx_15 != 0x0000 : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in __outb : ptr32)
  Class: Eq_59
  DataType: (ptr Eq_59)
  OrigDataType: (ptr (fn T_62 (T_60, T_61)))
T_60: (in 0x03C8 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in 0x13 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in __outb(0x03C8, 0x13) : void)
  Class: Eq_62
  DataType: void
  OrigDataType: void
T_63: (in ah_41 : uint8)
  Class: Eq_63
  DataType: uint8
  OrigDataType: uint8
T_64: (in 0x00 : byte)
  Class: Eq_63
  DataType: uint8
  OrigDataType: byte
T_65: (in si_47 : (memptr (ptr Eq_41) Eq_65))
  Class: Eq_65
  DataType: (memptr (ptr Eq_41) Eq_65)
  OrigDataType: (memptr T_41 (struct 0004 (0 T_90 t0000) (1 T_95 t0001) (2 T_99 t0002)))
T_66: (in 0x01E9 : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_41) Eq_65)
  OrigDataType: word16
T_67: (in bh_48 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in 0x04 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_69: (in bx_105 : ui16)
  Class: Eq_69
  DataType: ui16
  OrigDataType: ui16
T_70: (in bx_32 + 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in 0x04 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in DPB(bx_32 + 0x0001, 0x04, 8, 8) : word16)
  Class: Eq_69
  DataType: ui16
  OrigDataType: word16
T_73: (in __outb : ptr32)
  Class: Eq_73
  DataType: (ptr Eq_73)
  OrigDataType: (ptr (fn T_77 (T_74, T_76)))
T_74: (in 0x03C9 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0x01 : byte)
  Class: Eq_75
  DataType: uint8
  OrigDataType: uint8
T_76: (in bl_35 >>u 0x01 : word16)
  Class: Eq_76
  DataType: uint16
  OrigDataType: uint16
T_77: (in __outb(0x03C9, bl_35 >>u 0x01) : void)
  Class: Eq_77
  DataType: void
  OrigDataType: void
T_78: (in __outb : ptr32)
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: (ptr (fn T_82 (T_79, T_81)))
T_79: (in 0x03C9 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in 0x01 : byte)
  Class: Eq_80
  DataType: uint8
  OrigDataType: uint8
T_81: (in ah_41 >>u 0x01 : word16)
  Class: Eq_81
  DataType: uint16
  OrigDataType: uint16
T_82: (in __outb(0x03C9, ah_41 >>u 0x01) : void)
  Class: Eq_82
  DataType: void
  OrigDataType: void
T_83: (in __outb : ptr32)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (fn T_87 (T_84, T_86)))
T_84: (in 0x03C9 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in 0x01 : byte)
  Class: Eq_85
  DataType: uint8
  OrigDataType: uint8
T_86: (in ch_39 >>u 0x01 : word16)
  Class: Eq_86
  DataType: uint16
  OrigDataType: uint16
T_87: (in __outb(0x03C9, ch_39 >>u 0x01) : void)
  Class: Eq_87
  DataType: void
  OrigDataType: void
T_88: (in 0x0000 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in si_47 + 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in Mem30[ds:si_47 + 0x0000:byte] : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in bl_35 + (ds->*si_47).b0000 : byte)
  Class: Eq_52
  DataType: uint8
  OrigDataType: byte
T_92: (in DPB(bx_105, bl_35, 0, 8) : word16)
  Class: Eq_69
  DataType: ui16
  OrigDataType: word16
T_93: (in 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in si_47 + 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in Mem30[ds:si_47 + 0x0001:byte] : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in ah_41 + (ds->*si_47).b0001 : byte)
  Class: Eq_63
  DataType: uint8
  OrigDataType: byte
T_97: (in 0x0002 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in si_47 + 0x0002 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in Mem30[ds:si_47 + 0x0002:byte] : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in ch_39 + (ds->*si_47).b0002 : byte)
  Class: Eq_55
  DataType: uint8
  OrigDataType: byte
T_101: (in cl_64 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in 0x01 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in cl_64 - 0x01 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_104: (in 0x00 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_105: (in cl_64 != 0x00 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in 0x01 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in bh_48 - 0x01 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_108: (in 0x0002 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in si_47 + 0x0002 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in Mem30[ds:si_47 + 0x0002:byte] : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_111: (in ch_39 - (ds->*si_47).b0002 : byte)
  Class: Eq_55
  DataType: uint8
  OrigDataType: byte
T_112: (in 0x0001 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in si_47 + 0x0001 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in Mem30[ds:si_47 + 0x0001:byte] : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_115: (in ah_41 - (ds->*si_47).b0001 : byte)
  Class: Eq_63
  DataType: uint8
  OrigDataType: byte
T_116: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in si_47 + 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem30[ds:si_47 + 0x0000:byte] : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_119: (in bl_35 - (ds->*si_47).b0000 : byte)
  Class: Eq_52
  DataType: uint8
  OrigDataType: byte
T_120: (in 0x0004 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in si_47 + 0x0004 : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_41) Eq_65)
  OrigDataType: word16
T_122: (in DPB(bx_105, bh_48, 8, 8) : word16)
  Class: Eq_69
  DataType: ui16
  OrigDataType: word16
T_123: (in 0x00 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_124: (in bh_48 != 0x00 : bool)
  Class: Eq_124
  DataType: bool
  OrigDataType: bool
T_125: (in 0x40 : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_126: (in __inw : ptr32)
  Class: Eq_126
  DataType: (ptr Eq_126)
  OrigDataType: (ptr (fn T_128 (T_127)))
T_127: (in 0x03DA : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in __inw(0x03DA) : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in (byte) __inw(0x03DA) : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in 0x08 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in (byte) __inw(0x03DA) & 0x08 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_132: (in 0x00 : byte)
  Class: Eq_131
  DataType: byte
  OrigDataType: byte
T_133: (in ((byte) __inw(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_133
  DataType: bool
  OrigDataType: bool
T_134: (in __inw : ptr32)
  Class: Eq_134
  DataType: (ptr Eq_134)
  OrigDataType: (ptr (fn T_136 (T_135)))
T_135: (in 0x03DA : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in __inw(0x03DA) : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in (byte) __inw(0x03DA) : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in 0x08 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in (byte) __inw(0x03DA) & 0x08 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_140: (in 0x00 : byte)
  Class: Eq_139
  DataType: byte
  OrigDataType: byte
T_141: (in ((byte) __inw(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_141
  DataType: bool
  OrigDataType: bool
T_142: (in di_133 : (memptr (ptr Eq_213) byte))
  Class: Eq_142
  DataType: (memptr (ptr Eq_213) byte)
  OrigDataType: (memptr T_213 (struct 0001 (0 T_216 t0000)))
T_143: (in 0x0000 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_213) byte)
  OrigDataType: word16
T_144: (in dx_136 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in 0x00C8 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_146: (in ax_171 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in cx_150 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in 0x01F8 : word16)
  Class: Eq_148
  DataType: (memptr (ptr Eq_14) Eq_22)
  OrigDataType: (memptr T_14 (struct (0 T_149 t0000)))
T_149: (in Mem30[ss:0x01F8:byte] : byte)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: byte
T_150: (in (word16) ss->t01F8 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in cx_150 + (word16) ss->t01F8 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_152: (in wLoc02_168 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_153
  DataType: ptr32
  OrigDataType: ptr32
T_154: (in 0x01F8 : word16)
  Class: Eq_154
  DataType: (memptr (ptr Eq_14) Eq_22)
  OrigDataType: (memptr T_14 (struct (0 T_155 t0000)))
T_155: (in Mem30[ss:0x01F8:byte] : byte)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: byte
T_156: (in (word16) ss->t01F8 : word16)
  Class: Eq_156
  DataType: ui16
  OrigDataType: ui16
T_157: (in 0x0002 : word16)
  Class: Eq_157
  DataType: ui16
  OrigDataType: ui16
T_158: (in (word16) ss->t01F8 * 0x0002 : word16)
  Class: Eq_158
  DataType: ui16
  OrigDataType: ui16
T_159: (in (word16) ss->t01F8 * 0x0002 - bx_105 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in dx_136 - ((word16) ss->t01F8 * 0x0002 - bx_105) : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in dx_136 - ((word16) ss->t01F8 * 0x0002 - bx_105) + cx_150 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in 0x0200 : word16)
  Class: Eq_162
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_163 t0000)))
T_163: (in Mem30[ss:0x0200:byte] : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_164: (in (word16) ss->t0200 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in dx_136 - ((word16) ss->t01F8 * 0x0002 - bx_105) + cx_150 - (word16) ss->t0200 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in 0x00 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in DPB(dx_136 - ((word16) ss->t01F8 * 0x0002 - bx_105) + cx_150 - (word16) ss->t0200, 0x00, 8, 8) : word16)
  Class: Eq_167
  DataType: ui16
  OrigDataType: ui16
T_168: (in 0x0002 : word16)
  Class: Eq_168
  DataType: ui16
  OrigDataType: ui16
T_169: (in DPB(dx_136 - ((word16) ss->t01F8 * 0x0002 - bx_105) + cx_150 - (word16) ss->t0200, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_169
  DataType: ui16
  OrigDataType: ui16
T_170: (in SEQ(ds, bx_6)[DPB(dx_136 - ((word16) ss->t01F8 * 0x0002 - bx_105) + cx_150 - (word16) ss->t0200, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_171: (in ax_175 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in __rcl : ptr32)
  Class: Eq_172
  DataType: (ptr Eq_172)
  OrigDataType: (ptr (fn T_175 (T_146, T_173, T_174)))
T_173: (in 0x01 : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in cond(ax_171) : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in __rcl(ax_171, 0x01, cond(ax_171)) : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_176: (in bx_189 : ui16)
  Class: Eq_176
  DataType: ui16
  OrigDataType: ui16
T_177: (in 0x00 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in DPB(cx_150, 0x00, 8, 8) : word16)
  Class: Eq_176
  DataType: ui16
  OrigDataType: word16
T_179: (in bx_196 : ui16)
  Class: Eq_179
  DataType: ui16
  OrigDataType: ui16
T_180: (in 0x0002 : word16)
  Class: Eq_180
  DataType: ui16
  OrigDataType: ui16
T_181: (in bx_189 * 0x0002 : word16)
  Class: Eq_181
  DataType: ui16
  OrigDataType: ui16
T_182: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_182
  DataType: ptr32
  OrigDataType: ptr32
T_183: (in bx_189 * 0x0002 : word16)
  Class: Eq_183
  DataType: ui16
  OrigDataType: ui16
T_184: (in SEQ(ds, bx_6)[bx_189 * 0x0002] : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_185: (in bx_189 * 0x0002 + (ds.*bx_6)[(bx_189 * 0x0002) / 0x0004] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in bx_189 * 0x0002 + (ds.*bx_6)[(bx_189 * 0x0002) / 0x0004] + dx_136 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in bx_189 * 0x0002 + (ds.*bx_6)[(bx_189 * 0x0002) / 0x0004] + dx_136 - cx_150 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in 0x0204 : word16)
  Class: Eq_188
  DataType: (memptr (ptr Eq_14) Eq_189)
  OrigDataType: (memptr T_14 (struct (0 T_189 t0000)))
T_189: (in Mem30[ss:0x0204:word16] : word16)
  Class: Eq_189
  DataType: Eq_189
  OrigDataType: word16
T_190: (in bx_189 * 0x0002 + (ds.*bx_6)[(bx_189 * 0x0002) / 0x0004] + dx_136 - cx_150 + ss->t0204 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in 0x00 : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_192: (in DPB(bx_189 * 0x0002 + (ds.*bx_6)[(bx_189 * 0x0002) / 0x0004] + dx_136 - cx_150 + ss->t0204, 0x00, 8, 8) : word16)
  Class: Eq_179
  DataType: ui16
  OrigDataType: word16
T_193: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_193
  DataType: ptr32
  OrigDataType: ptr32
T_194: (in 0x0200 : word16)
  Class: Eq_194
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_195 t0000)))
T_195: (in Mem30[ss:0x0200:byte] : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_196: (in (word16) ss->t0200 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in (word16) ss->t0200 + dx_136 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in (word16) ss->t0200 + dx_136 - ax_175 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in 0x00 : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in DPB((word16) ss->t0200 + dx_136 - ax_175, 0x00, 8, 8) : word16)
  Class: Eq_200
  DataType: ui16
  OrigDataType: ui16
T_201: (in 0x0002 : word16)
  Class: Eq_201
  DataType: ui16
  OrigDataType: ui16
T_202: (in DPB((word16) ss->t0200 + dx_136 - ax_175, 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_202
  DataType: ui16
  OrigDataType: ui16
T_203: (in SEQ(ds, bx_6)[DPB((word16) ss->t0200 + dx_136 - ax_175, 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_204: (in wLoc02_168 + (ds.*bx_6)[(DPB(((word16) ss->t0200 + dx_136) - ax_175, 0x00, 8, 8) * 0x0002) / 0x0004] : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in SEQ(ds, bx_6) : ptr32)
  Class: Eq_205
  DataType: ptr32
  OrigDataType: ptr32
T_206: (in 0x0002 : word16)
  Class: Eq_206
  DataType: ui16
  OrigDataType: ui16
T_207: (in bx_196 * 0x0002 : word16)
  Class: Eq_207
  DataType: ui16
  OrigDataType: ui16
T_208: (in SEQ(ds, bx_6)[bx_196 * 0x0002] : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_209: (in wLoc02_168 + (ds.*bx_6)[(DPB(((word16) ss->t0200 + dx_136) - ax_175, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(bx_196 * 0x0002) / 0x0004] : word16)
  Class: Eq_209
  DataType: uint16
  OrigDataType: uint16
T_210: (in 0x0003 : word16)
  Class: Eq_210
  DataType: uint16
  OrigDataType: uint16
T_211: (in wLoc02_168 + (ds.*bx_6)[(DPB(((word16) ss->t0200 + dx_136) - ax_175, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(bx_196 * 0x0002) / 0x0004] >>u 0x0003 : word16)
  Class: Eq_211
  DataType: uint16
  OrigDataType: uint16
T_212: (in (byte) (wLoc02_168 + (ds.*bx_6)[(DPB(((word16) ss->t0200 + dx_136) - ax_175, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(bx_196 * 0x0002) / 0x0004] >>u 0x0003) : byte)
  Class: Eq_212
  DataType: byte
  OrigDataType: byte
T_213: (in 0xA000 : selector)
  Class: Eq_213
  DataType: (ptr Eq_213)
  OrigDataType: (ptr (segment))
T_214: (in 0x0000 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in di_133 + 0x0000 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in Mem203[0xA000:di_133 + 0x0000:byte] : byte)
  Class: Eq_212
  DataType: byte
  OrigDataType: byte
T_217: (in bx_196 * 0x0002 : word16)
  Class: Eq_69
  DataType: ui16
  OrigDataType: ui16
T_218: (in 0x0001 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in di_133 + 0x0001 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_213) byte)
  OrigDataType: word16
T_220: (in 0x0001 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in cx_150 - 0x0001 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_222: (in 0x0000 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_223: (in cx_150 != 0x0000 : bool)
  Class: Eq_223
  DataType: bool
  OrigDataType: bool
T_224: (in 0x0001 : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in dx_136 - 0x0001 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_226: (in 0x0000 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_227: (in dx_136 != 0x0000 : bool)
  Class: Eq_227
  DataType: bool
  OrigDataType: bool
T_228: (in 0x0140 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_229: (in 0x0204 : word16)
  Class: Eq_229
  DataType: (memptr (ptr Eq_14) Eq_189)
  OrigDataType: (memptr T_14 (struct (0 T_230 t0000)))
T_230: (in Mem203[ss:0x0204:word32] : word32)
  Class: Eq_189
  DataType: Eq_189
  OrigDataType: word32
T_231: (in 0x00000001 : word32)
  Class: Eq_231
  DataType: word32
  OrigDataType: word32
T_232: (in ss->t0204 - 0x00000001 : word32)
  Class: Eq_189
  DataType: Eq_189
  OrigDataType: word32
T_233: (in 0x0204 : word16)
  Class: Eq_233
  DataType: (memptr (ptr Eq_14) Eq_189)
  OrigDataType: (memptr T_14 (struct (0 T_234 t0000)))
T_234: (in Mem212[ss:0x0204:word32] : word32)
  Class: Eq_189
  DataType: Eq_189
  OrigDataType: word32
T_235: (in 0x0200 : word16)
  Class: Eq_235
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_236 t0000)))
T_236: (in Mem212[ss:0x0200:byte] : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_237: (in 0x01 : byte)
  Class: Eq_237
  DataType: byte
  OrigDataType: byte
T_238: (in Mem212[ss:0x0200:byte] + 0x01 : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_239: (in 0x0200 : word16)
  Class: Eq_239
  DataType: (memptr (ptr Eq_14) Eq_11)
  OrigDataType: (memptr T_14 (struct (0 T_240 t0000)))
T_240: (in Mem214[ss:0x0200:byte] : byte)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: byte
T_241: (in 0x01F8 : word16)
  Class: Eq_241
  DataType: (memptr (ptr Eq_14) Eq_22)
  OrigDataType: (memptr T_14 (struct (0 T_242 t0000)))
T_242: (in Mem214[ss:0x01F8:byte] : byte)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: byte
T_243: (in 0x01 : byte)
  Class: Eq_243
  DataType: byte
  OrigDataType: byte
T_244: (in ss->t01F8 - 0x01 : byte)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: byte
T_245: (in 0x01F8 : word16)
  Class: Eq_245
  DataType: (memptr (ptr Eq_14) Eq_22)
  OrigDataType: (memptr T_14 (struct (0 T_246 t0000)))
T_246: (in Mem216[ss:0x01F8:byte] : byte)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: byte
T_247: (in __inb : ptr32)
  Class: Eq_247
  DataType: (ptr Eq_247)
  OrigDataType: (ptr (fn T_249 (T_248)))
T_248: (in 0x60 : byte)
  Class: Eq_248
  DataType: byte
  OrigDataType: byte
T_249: (in __inb(0x60) : byte)
  Class: Eq_249
  DataType: byte
  OrigDataType: byte
T_250: (in 0x01 : byte)
  Class: Eq_249
  DataType: byte
  OrigDataType: byte
T_251: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_251
  DataType: bool
  OrigDataType: bool
T_252:
  Class: Eq_252
  DataType: Eq_252
  OrigDataType: (struct 0004 (0 T_90 t0000))
T_253:
  Class: Eq_253
  DataType: Eq_253
  OrigDataType: (struct 0004 (0 T_95 t0000))
T_254:
  Class: Eq_254
  DataType: Eq_254
  OrigDataType: (struct 0004 (0 T_99 t0000))
T_255:
  Class: Eq_254
  DataType: Eq_254
  OrigDataType: (struct 0004 (0 T_110 t0000))
T_256:
  Class: Eq_253
  DataType: Eq_253
  OrigDataType: (struct 0004 (0 T_114 t0000))
T_257:
  Class: Eq_252
  DataType: Eq_252
  OrigDataType: (struct 0004 (0 T_118 t0000))
T_258:
  Class: Eq_258
  DataType: word16
  OrigDataType: (struct 0002 (0 T_170 t0000))
T_259:
  Class: Eq_258
  DataType: word16
  OrigDataType: (struct 0002 (0 T_184 t0000))
T_260:
  Class: Eq_258
  DataType: word16
  OrigDataType: (struct 0002 (0 T_203 t0000))
T_261:
  Class: Eq_258
  DataType: word16
  OrigDataType: (struct 0002 (0 T_208 t0000))
*/
typedef Eq_213 Eq_1struct Globals {
	Eq_213 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {	// size: 1 1
	int16 w0000;	// 0
} Eq_7;

typedef union Eq_11 {
	int16 u0;
	byte u1;
} Eq_11;

typedef Eq_22 Eq_14Eq_11 Eq_14Eq_189 Eq_14struct Eq_14 {
	Eq_22 t01F8;	// 1F8
	word16 w01FC;	// 1FC
	word16 w01FE;	// 1FE
	Eq_11 t0200;	// 200
	Eq_189 t0204;	// 204
} Eq_14;

typedef union Eq_17 {
	real16 u0;
	real64 u1;
} Eq_17;

typedef union Eq_20 {
	real16 u0;
	real64 u1;
} Eq_20;

typedef union Eq_22 {
	byte u0;
	real16 u1;
	real32 u2;
} Eq_22;

typedef union Eq_24 {
	real16 u0;
	real64 u1;
} Eq_24;

typedef Eq_27 (Eq_25)(Eq_26);

typedef union Eq_26 {
	real16 u0;
	real64 u1;
} Eq_26;

typedef union Eq_27 {
	real16 u0;
	real64 u1;
} Eq_27;

typedef union Eq_30 {
	real16 u0;
	real64 u1;
} Eq_30;

typedef Eq_34 (Eq_32)(real64);

typedef union Eq_34 {
	real16 u0;
	real64 u1;
} Eq_34;

typedef union Eq_37 {
	real16 u0;
	real64 u1;
} Eq_37;

typedef  Eq_41[]Eq_252[]struct Eq_41 {
	word16 a0000[];	// 0
	Eq_252 a01E9[];	// 1E9
} Eq_41;

typedef void (Eq_59)(word16, byte);

typedef struct Eq_65 {	// size: 4 4
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
} Eq_65;

typedef void (Eq_73)(word16, uint16);

typedef void (Eq_78)(word16, uint16);

typedef void (Eq_83)(word16, uint16);

typedef word16 (Eq_126)(word16);

typedef word16 (Eq_134)(word16);

typedef word16 (Eq_172)(word16, byte, byte);

typedef union Eq_189 {
	word16 u0;
	word32 u1;
} Eq_189;

typedef struct Eq_213 {
	byte b0000;	// 0
} Eq_213;

typedef byte (Eq_247)(byte);

typedef struct Eq_252 {	// size: 4 4
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
} Eq_252;

typedef struct Eq_253 {	// size: 4 4
	byte b0001;	// 1
} Eq_253;

typedef struct Eq_254 {	// size: 4 4
	byte b0002;	// 2
} Eq_254;

