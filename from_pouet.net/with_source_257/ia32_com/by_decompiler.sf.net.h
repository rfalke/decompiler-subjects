// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_257/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF90000 (ptr Eq_78) ptrFFF90000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (segment "Eq_8" (1F0 Eq_94 t01F0) (1F8 word16 w01F8) (200 word16 w0200) (204 word16 w0204) (20A int16 w020A))
	T_8 (in ds : (ptr Eq_8))
	T_77 (in ds : (ptr Eq_8))
Eq_14: (fn void (word16, byte))
	T_14 (in __outb : ptr32)
Eq_18: (fn void (word16, byte))
	T_18 (in __outb : ptr32)
Eq_21: (fn void (word16, byte))
	T_21 (in __outb : ptr32)
Eq_24: (fn void (word16, byte))
	T_24 (in __outb : ptr32)
Eq_40: (union "Eq_40" (real16 u0) (real64 u1))
	T_40 (in rLoc2_40 : Eq_40)
	T_41 (in 0 : real64)
	T_95 (in rLoc2_40 + ds->t01F0 : word16)
Eq_44: (union "Eq_44" (real16 u0) (real64 u1))
	T_44 (in rLoc3_46 : Eq_44)
	T_47 (in (real64) ds->w020A : real64)
	T_58 (in rLoc7 : real64)
	T_60 (in rLoc6_57 : Eq_44)
	T_64 (in sin(rLoc3_46) * rLoc7_55 * rLoc4_49 : real64)
	T_68 (in rLoc4_64 : Eq_44)
	T_71 (in rLoc4_49 * (rLoc5_52 * (rLoc7_55 * rLoc7_55)) : real64)
	T_79 (in rArg0 : Eq_44)
	T_80 (in rArg1 : Eq_44)
	T_81 (in rArg2 : Eq_44)
Eq_48: (union "Eq_48" (real16 u0) (real64 u1))
	T_48 (in rLoc4_49 : Eq_48)
	T_53 (in rLoc2_40 * rLoc2_40 * (real64) ds->w01F8 : word16)
Eq_49: (union "Eq_49" (real16 u0) (real64 u1))
	T_49 (in rLoc2_40 * rLoc2_40 : real64)
Eq_52: (union "Eq_52" (real16 u0) (real64 u1))
	T_52 (in (real64) ds->w01F8 : real64)
Eq_55: (fn real64 (Eq_44))
	T_55 (in cos : ptr32)
Eq_61: (fn real64 (Eq_44))
	T_61 (in sin : ptr32)
Eq_72: (fn void (word16, (memptr (ptr Eq_8) Eq_75), byte, (ptr Eq_8), (ptr Eq_78), Eq_44, Eq_44, Eq_44))
	T_72 (in fn0C00_01B9 : ptr32)
	T_73 (in signature of fn0C00_01B9 : void)
	T_89 (in fn0C00_01B9 : ptr32)
Eq_75: (struct "Eq_75" (FFFFFFFA word16 wFFFFFFFA) (FFFFFFFC word16 wFFFFFFFC) (FFFFFFFE uint16 wFFFFFFFE) (0 word16 w0000) (4 word16 w0004) (6 int16 w0006) (8 Eq_133 t0008))
	T_75 (in si : (memptr (ptr Eq_8) Eq_75))
	T_82 (in 0x0200 : word16)
	T_90 (in 0x0200 : word16)
Eq_78: (segment "Eq_78" (0 (arr Eq_165) a0000))
	T_78 (in fs : (ptr Eq_78))
	T_84 (in 0x9000 : selector)
Eq_94: (union "Eq_94" (real16 u0) (real32 u1))
	T_94 (in Mem69[ds:0x01F0:real32] : real32)
Eq_100: (union "Eq_100" (real16 u0) (real64 u1))
	T_100 (in rArg0_11 : Eq_100)
	T_105 (in rArg1 + (real64) (ds->*si).w0000 : word16)
Eq_104: (union "Eq_104" (real16 u0) (real64 u1))
	T_104 (in (real64) (ds->*si).w0000 : real64)
Eq_109: (union "Eq_109" (real16 u0) (real64 u1))
	T_109 (in (real64) (ds->*si).w0000 : real64)
Eq_110: (union "Eq_110" (real16 u0) (real64 u1))
	T_110 (in rArg0 + (real64) (ds->*si).w0000 : word16)
Eq_114: (union "Eq_114" (real16 u0) (real64 u1))
	T_114 (in (real64) (ds->*si).w0004 : real64)
Eq_119: (union "Eq_119" (real16 u0) (real64 u1))
	T_119 (in (real64) (ds->*si).w0006 : real64)
Eq_124: (union "Eq_124" (real16 u0) (real64 u1))
	T_124 (in (real64) (ds->*si).w0004 : real64)
Eq_125: (union "Eq_125" (real16 u0) (real64 u1))
	T_125 (in (rArg2 + (real64) (ds->*si).w0004 + (real64) (ds->*si).w0006) / (real64) (ds->*si).w0004 : word16)
Eq_127: (union "Eq_127" (real16 u0) (real64 u1))
	T_127 (in (rArg0 + (real64) (ds->*si).w0000) * ((((rArg2 + (real64) (ds->*si).w0004) + (real64) (ds->*si).w0006) / (real64) (ds->*si).w0004) * rArg0_11) : real64)
Eq_131: (union "Eq_131" (real16 u0) (real64 u1))
	T_131 (in (real64) (ds->*si).w0006 : real64)
Eq_133: (union "Eq_133" (int16 u0) (uint16 u1))
	T_133 (in (int16) ((rArg0 + (real64) (ds->*si).w0000) * ((((rArg2 + (real64) (ds->*si).w0004) + (real64) (ds->*si).w0006) / (real64) (ds->*si).w0004) * rArg0_11) + (real64) (ds->*si).w0006) : int16)
	T_136 (in Mem22[ds:si + 0x0008:int16] : int16)
	T_158 (in Mem30[ds:si + 0x0008:word16] : word16)
Eq_137: (union "Eq_137" (64 u0) (real16 u1) (real64 u2))
	T_137 (in rArg2_23 : Eq_137)
	T_142 (in rArg0_11 + (real64) (ds->*si).w0000 : word16)
	T_164 (in -rArg2_23 : real64)
Eq_141: (union "Eq_141" (real16 u0) (real64 u1))
	T_141 (in (real64) (ds->*si).w0000 : real64)
Eq_165: (struct "Eq_165" 0002 (0 byte b0000))
	T_165
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
T_7: (in 0xF63C : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (1F0 T_94 t01F0) (1F8 T_51 t01F8) (200 T_10 t0200) (204 T_65 t0204) (20A T_32 t020A)))
T_9: (in 0x0200 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_10 t0000)))
T_10: (in Mem14[ds:0x0200:word16] : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in al_19 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in bx : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in (byte) bx : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_14: (in __outb : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_16 (T_15, T_11)))
T_15: (in 0x03C8 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in __outb(0x03C8, al_19) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in ax_18 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_18: (in __outb : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_20 (T_19, T_11)))
T_19: (in 0x03C9 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in __outb(0x03C9, al_19) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22, T_11)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in __outb(0x03C9, al_19) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_26 (T_25, T_11)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in __outb(0x03C9, al_19) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in ax_18 + 0x0001 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_29: (in (byte) ax_18 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_30: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_31: (in ax_18 != 0x0000 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in bx_35 : int16)
  Class: Eq_32
  DataType: int16
  OrigDataType: word16
T_33: (in ax : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x32 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in DPB(ax, 0x32, 0, 8) : word16)
  Class: Eq_32
  DataType: int16
  OrigDataType: word16
T_36: (in cx_39 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cx : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0xC8 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in DPB(cx, 0xC8, 0, 8) : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_40: (in rLoc2_40 : Eq_40)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: (union (real16 u0) (real64 u1))
T_41: (in 0 : real64)
  Class: Eq_40
  DataType: real64
  OrigDataType: real64
T_42: (in 0x020A : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_43 t0000)))
T_43: (in Mem45[ds:0x020A:word16] : word16)
  Class: Eq_32
  DataType: int16
  OrigDataType: word16
T_44: (in rLoc3_46 : Eq_44)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: real64
T_45: (in 0x020A : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_46 t0000)))
T_46: (in Mem45[ds:0x020A:int16] : int16)
  Class: Eq_32
  DataType: int16
  OrigDataType: int16
T_47: (in (real64) ds->w020A : real64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: real64
T_48: (in rLoc4_49 : Eq_48)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: real64
T_49: (in rLoc2_40 * rLoc2_40 : real64)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: (union (real16 u0) (real64 u1))
T_50: (in 0x01F8 : word16)
  Class: Eq_50
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_51 t0000)))
T_51: (in Mem45[ds:0x01F8:word16] : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in (real64) ds->w01F8 : real64)
  Class: Eq_52
  DataType: Eq_52
  OrigDataType: (union (real16 u0) (real64 u1))
T_53: (in rLoc2_40 * rLoc2_40 * (real64) ds->w01F8 : word16)
  Class: Eq_48
  DataType: Eq_48
  OrigDataType: real16
T_54: (in rLoc5_52 : real64)
  Class: Eq_54
  DataType: real64
  OrigDataType: real64
T_55: (in cos : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_56 (T_44)))
T_56: (in cos(rLoc3_46) : real64)
  Class: Eq_54
  DataType: real64
  OrigDataType: real64
T_57: (in rLoc7_55 : real64)
  Class: Eq_57
  DataType: real64
  OrigDataType: real64
T_58: (in rLoc7 : real64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: real64
T_59: (in rLoc7 * rLoc7 : real64)
  Class: Eq_57
  DataType: real64
  OrigDataType: real64
T_60: (in rLoc6_57 : Eq_44)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: real64
T_61: (in sin : ptr32)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (fn T_62 (T_44)))
T_62: (in sin(rLoc3_46) : real64)
  Class: Eq_62
  DataType: real64
  OrigDataType: real64
T_63: (in sin(rLoc3_46) * rLoc7_55 : real64)
  Class: Eq_63
  DataType: real64
  OrigDataType: real64
T_64: (in sin(rLoc3_46) * rLoc7_55 * rLoc4_49 : real64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: real64
T_65: (in 0xFFB5 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in 0x0204 : word16)
  Class: Eq_66
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_67 t0000)))
T_67: (in Mem68[ds:0x0204:word16] : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_68: (in rLoc4_64 : Eq_44)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: real64
T_69: (in rLoc7_55 * rLoc7_55 : real64)
  Class: Eq_69
  DataType: real64
  OrigDataType: real64
T_70: (in rLoc5_52 * (rLoc7_55 * rLoc7_55) : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_71: (in rLoc4_49 * (rLoc5_52 * (rLoc7_55 * rLoc7_55)) : real64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: real64
T_72: (in fn0C00_01B9 : ptr32)
  Class: Eq_72
  DataType: (ptr Eq_72)
  OrigDataType: (ptr (fn T_85 (T_17, T_82, T_83, T_8, T_84, T_68, T_60, T_68)))
T_73: (in signature of fn0C00_01B9 : void)
  Class: Eq_72
  DataType: (ptr Eq_72)
  OrigDataType: 
T_74: (in bp : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_75: (in si : (memptr (ptr Eq_8) Eq_75))
  Class: Eq_75
  DataType: (memptr (ptr Eq_8) Eq_75)
  OrigDataType: (memptr T_77 (struct (FFFFFFFA T_118 tFFFFFFFA) (FFFFFFFC T_123 tFFFFFFFC) (FFFFFFFE T_140 tFFFFFFFE) (0 T_103 t0000) (4 T_113 t0004) (6 T_145 t0006) (8 T_133 t0008)))
T_76: (in bl : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_78: (in fs : (ptr Eq_78))
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: (ptr (segment (0 (arr T_165) a0000)))
T_79: (in rArg0 : Eq_44)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (real16 u0) (real64 u1))
T_80: (in rArg1 : Eq_44)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (real16 u0) (real64 u1))
T_81: (in rArg2 : Eq_44)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (real16 u0) (real64 u1))
T_82: (in 0x0200 : word16)
  Class: Eq_75
  DataType: (memptr (ptr Eq_8) Eq_75)
  OrigDataType: word16
T_83: (in 0x32 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_84: (in 0x9000 : selector)
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: (ptr (segment))
T_85: (in fn0C00_01B9(ax_18, &Eq_8::w0200, 0x32, ds, 0x9000, rLoc4_64, rLoc6_57, rLoc4_64) : void)
  Class: Eq_85
  DataType: void
  OrigDataType: void
T_86: (in 0xFFE7 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0204 : word16)
  Class: Eq_87
  DataType: (memptr (ptr Eq_8) word16)
  OrigDataType: (memptr T_8 (struct (0 T_88 t0000)))
T_88: (in Mem69[ds:0x0204:word16] : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_89: (in fn0C00_01B9 : ptr32)
  Class: Eq_72
  DataType: (ptr Eq_72)
  OrigDataType: (ptr (fn T_92 (T_17, T_90, T_91, T_8, T_84, T_60, T_68, T_44)))
T_90: (in 0x0200 : word16)
  Class: Eq_75
  DataType: (memptr (ptr Eq_8) Eq_75)
  OrigDataType: word16
T_91: (in 0x32 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_92: (in fn0C00_01B9(ax_18, &Eq_8::w0200, 0x32, ds, 0x9000, rLoc6_57, rLoc4_64, rLoc3_46) : void)
  Class: Eq_85
  DataType: void
  OrigDataType: void
T_93: (in 0x01F0 : word16)
  Class: Eq_93
  DataType: (memptr (ptr Eq_8) Eq_94)
  OrigDataType: (memptr T_8 (struct (0 T_94 t0000)))
T_94: (in Mem69[ds:0x01F0:real32] : real32)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: (union (real16 u0) (real32 u1))
T_95: (in rLoc2_40 + ds->t01F0 : word16)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: real16
T_96: (in 0x0001 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in cx_39 - 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_99: (in cx_39 != 0x0000 : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
T_100: (in rArg0_11 : Eq_100)
  Class: Eq_100
  DataType: Eq_100
  OrigDataType: (union (real16 u0) (real64 u1))
T_101: (in 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in si + 0x0000 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in Mem0[ds:si + 0x0000:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in (real64) (ds->*si).w0000 : real64)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: (union (real16 u0) (real64 u1))
T_105: (in rArg1 + (real64) (ds->*si).w0000 : word16)
  Class: Eq_100
  DataType: Eq_100
  OrigDataType: real16
T_106: (in 0x0000 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in si + 0x0000 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in Mem0[ds:si + 0x0000:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_109: (in (real64) (ds->*si).w0000 : real64)
  Class: Eq_109
  DataType: Eq_109
  OrigDataType: (union (real16 u0) (real64 u1))
T_110: (in rArg0 + (real64) (ds->*si).w0000 : word16)
  Class: Eq_110
  DataType: Eq_110
  OrigDataType: (union (real16 u0) (real64 u1))
T_111: (in 0x0004 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in si + 0x0004 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in Mem0[ds:si + 0x0004:word16] : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in (real64) (ds->*si).w0004 : real64)
  Class: Eq_114
  DataType: Eq_114
  OrigDataType: (union (real16 u0) (real64 u1))
T_115: (in rArg2 + (real64) (ds->*si).w0004 : word16)
  Class: Eq_115
  DataType: real16
  OrigDataType: real16
T_116: (in 0x0006 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in si - 0x0006 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem0[ds:si - 0x0006:word16] : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in (real64) (ds->*si).w0006 : real64)
  Class: Eq_119
  DataType: Eq_119
  OrigDataType: (union (real16 u0) (real64 u1))
T_120: (in rArg2 + (real64) (ds->*si).w0004 + (real64) (ds->*si).w0006 : word16)
  Class: Eq_120
  DataType: real16
  OrigDataType: real16
T_121: (in 0x0004 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in si - 0x0004 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in Mem0[ds:si - 0x0004:word16] : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in (real64) (ds->*si).w0004 : real64)
  Class: Eq_124
  DataType: Eq_124
  OrigDataType: (union (real16 u0) (real64 u1))
T_125: (in (rArg2 + (real64) (ds->*si).w0004 + (real64) (ds->*si).w0006) / (real64) (ds->*si).w0004 : word16)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: (union (real16 u0) (real64 u1))
T_126: (in (rArg2 + (real64) (ds->*si).w0004 + (real64) (ds->*si).w0006) / (real64) (ds->*si).w0004 * rArg0_11 : real64)
  Class: Eq_126
  DataType: real64
  OrigDataType: real64
T_127: (in (rArg0 + (real64) (ds->*si).w0000) * ((((rArg2 + (real64) (ds->*si).w0004) + (real64) (ds->*si).w0006) / (real64) (ds->*si).w0004) * rArg0_11) : real64)
  Class: Eq_127
  DataType: Eq_127
  OrigDataType: (union (real16 u0) (real64 u1))
T_128: (in 0x0006 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in si - 0x0006 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in Mem0[ds:si - 0x0006:word16] : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_131: (in (real64) (ds->*si).w0006 : real64)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: (union (real16 u0) (real64 u1))
T_132: (in (rArg0 + (real64) (ds->*si).w0000) * ((((rArg2 + (real64) (ds->*si).w0004) + (real64) (ds->*si).w0006) / (real64) (ds->*si).w0004) * rArg0_11) + (real64) (ds->*si).w0006 : word16)
  Class: Eq_132
  DataType: real16
  OrigDataType: real16
T_133: (in (int16) ((rArg0 + (real64) (ds->*si).w0000) * ((((rArg2 + (real64) (ds->*si).w0004) + (real64) (ds->*si).w0006) / (real64) (ds->*si).w0004) * rArg0_11) + (real64) (ds->*si).w0006) : int16)
  Class: Eq_133
  DataType: Eq_133
  OrigDataType: int16
T_134: (in 0x0008 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in si + 0x0008 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in Mem22[ds:si + 0x0008:int16] : int16)
  Class: Eq_133
  DataType: Eq_133
  OrigDataType: int16
T_137: (in rArg2_23 : Eq_137)
  Class: Eq_137
  DataType: Eq_137
  OrigDataType: (union (64 u0) (real64 u1))
T_138: (in 0x0002 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in si - 0x0002 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in Mem22[ds:si - 0x0002:word16] : word16)
  Class: Eq_140
  DataType: uint16
  OrigDataType: word16
T_141: (in (real64) (ds->*si).w0000 : real64)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: (union (real16 u0) (real64 u1))
T_142: (in rArg0_11 + (real64) (ds->*si).w0000 : word16)
  Class: Eq_137
  DataType: Eq_137
  OrigDataType: real16
T_143: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_144: (in bp == 0x0000 : bool)
  Class: Eq_144
  DataType: bool
  OrigDataType: bool
T_145: (in (int16) rArg2_23 : int16)
  Class: Eq_145
  DataType: int16
  OrigDataType: int16
T_146: (in 0x0006 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in si + 0x0006 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in Mem30[ds:si + 0x0006:int16] : int16)
  Class: Eq_145
  DataType: int16
  OrigDataType: int16
T_149: (in 0x0006 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in si + 0x0006 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in Mem30[ds:si + 0x0006:word16] : word16)
  Class: Eq_145
  DataType: int16
  OrigDataType: word16
T_152: (in SEQ(fs, Mem30[ds:si + 0x0006:word16]) : ptr32)
  Class: Eq_152
  DataType: ptr32
  OrigDataType: ptr32
T_153: (in 0x0002 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in si - 0x0002 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in Mem30[ds:si - 0x0002:word16] : word16)
  Class: Eq_140
  DataType: uint16
  OrigDataType: uint16
T_156: (in 0x0008 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in si + 0x0008 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in Mem30[ds:si + 0x0008:word16] : word16)
  Class: Eq_133
  DataType: Eq_133
  OrigDataType: uint16
T_159: (in (ds->*si).w0000 *u (ds->*si).t0008 : uint32)
  Class: Eq_159
  DataType: uint32
  OrigDataType: uint32
T_160: (in (word16) ((ds->*si).w0000 *u (ds->*si).t0008) : word16)
  Class: Eq_160
  DataType: ui16
  OrigDataType: ui16
T_161: (in 0x0002 : word16)
  Class: Eq_161
  DataType: ui16
  OrigDataType: ui16
T_162: (in (word16) ((ds->*si).w0000 *u (ds->*si).t0008) * 0x0002 : word16)
  Class: Eq_162
  DataType: ui16
  OrigDataType: ui16
T_163: (in SEQ(fs, Mem30[ds:si + 0x0006:word16])[(word16) ((ds->*si).w0000 *u (ds->*si).t0008) * 0x0002] : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_164: (in -rArg2_23 : real64)
  Class: Eq_137
  DataType: Eq_137
  OrigDataType: 64
T_165:
  Class: Eq_165
  DataType: Eq_165
  OrigDataType: (struct 0002 (0 T_163 t0000))
*/
typedef Eq_78 Eq_1struct Globals {
	Eq_78 * ptrFFF90000;	// FFF90000
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_94 Eq_8struct Eq_8 {
	Eq_94 t01F0;	// 1F0
	word16 w01F8;	// 1F8
	word16 w0200;	// 200
	word16 w0204;	// 204
	int16 w020A;	// 20A
} Eq_8;

typedef void (Eq_14)(word16, byte);

typedef void (Eq_18)(word16, byte);

typedef void (Eq_21)(word16, byte);

typedef void (Eq_24)(word16, byte);

typedef union Eq_40 {
	real16 u0;
	real64 u1;
} Eq_40;

typedef union Eq_44 {
	real16 u0;
	real64 u1;
} Eq_44;

typedef union Eq_48 {
	real16 u0;
	real64 u1;
} Eq_48;

typedef union Eq_49 {
	real16 u0;
	real64 u1;
} Eq_49;

typedef union Eq_52 {
	real16 u0;
	real64 u1;
} Eq_52;

typedef real64 (Eq_55)(Eq_44);

typedef real64 (Eq_61)(Eq_44);

typedef void (Eq_72)(word16, Eq_75 Eq_8::*, byte, Eq_8 *, Eq_78 *, Eq_44, Eq_44, Eq_44);

typedef Eq_133 Eq_75struct Eq_75 {
	word16 wFFFFFFFA;	// FFFFFFFA
	word16 wFFFFFFFC;	// FFFFFFFC
	uint16 wFFFFFFFE;	// FFFFFFFE
	word16 w0000;	// 0
	word16 w0004;	// 4
	int16 w0006;	// 6
	Eq_133 t0008;	// 8
} Eq_75;

typedef Eq_165 Eq_78[]struct Eq_78 {
	Eq_165 a0000[];	// 0
} Eq_78;

typedef union Eq_94 {
	real16 u0;
	real32 u1;
} Eq_94;

typedef union Eq_100 {
	real16 u0;
	real64 u1;
} Eq_100;

typedef union Eq_104 {
	real16 u0;
	real64 u1;
} Eq_104;

typedef union Eq_109 {
	real16 u0;
	real64 u1;
} Eq_109;

typedef union Eq_110 {
	real16 u0;
	real64 u1;
} Eq_110;

typedef union Eq_114 {
	real16 u0;
	real64 u1;
} Eq_114;

typedef union Eq_119 {
	real16 u0;
	real64 u1;
} Eq_119;

typedef union Eq_124 {
	real16 u0;
	real64 u1;
} Eq_124;

typedef union Eq_125 {
	real16 u0;
	real64 u1;
} Eq_125;

typedef union Eq_127 {
	real16 u0;
	real64 u1;
} Eq_127;

typedef union Eq_131 {
	real16 u0;
	real64 u1;
} Eq_131;

typedef union Eq_133 {
	int16 u0;
	uint16 u1;
} Eq_133;

typedef union Eq_137 {
	64 u0;
	real16 u1;
	real64 u2;
} Eq_137;

typedef union Eq_141 {
	real16 u0;
	real64 u1;
} Eq_141;

typedef struct Eq_165 {	// size: 2 2
	byte b0000;	// 0
} Eq_165;

