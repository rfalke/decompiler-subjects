// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_291/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_38) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, uint8))
	T_11 (in __outb : ptr32)
Eq_14: (union "Eq_14" (uint8 u0) (uint16 u1))
	T_14 (in al_12 : Eq_14)
	T_16 (in al_17 >>u 0x02 : word16)
Eq_17: (fn void (word16, Eq_14))
	T_17 (in __outb : ptr32)
Eq_22: (fn void (word16, byte))
	T_22 (in __outb : ptr32)
Eq_31: (fn void (word16, uint8))
	T_31 (in __outb : ptr32)
Eq_38: (segment "Eq_38" (0 (arr word16) a0000) (C0 (arr byte) a00C0) (188 word16 w0188) (1F6 Eq_80 t01F6) (1F8 int16 w01F8) (1FA word16 w01FA) (1FB word16 w01FB) (1FD word16 w01FD) (1FF (arr byte) a01FF) (200 (arr byte) a0200) (201 (arr byte) a0201) (340 (arr Eq_261) a0340))
	T_38 (in ds : (ptr Eq_38))
	T_43 (in Mem48[ss:fp - 0x0002:word16] : word16)
	T_139 (in 0xA000 : selector)
Eq_39: (segment "Eq_39")
	T_39 (in ss : selector)
Eq_40: (union "Eq_40" (ptr16 u0) ((memptr (ptr Eq_39) Eq_265) u1))
	T_40 (in fp : ptr16)
Eq_65: (fn Eq_113 (real64))
	T_65 (in cos : ptr32)
Eq_66: (fn real64 (real64))
	T_66 (in sqrt : ptr32)
Eq_67: (fn real64 (real64))
	T_67 (in sqrt : ptr32)
Eq_75: (fn real64 (real64))
	T_75 (in sin : ptr32)
Eq_76: (fn real64 (real64, real64))
	T_76 (in atan : ptr32)
Eq_78: (fn real64 (real16))
	T_78 (in __rndint : ptr32)
Eq_80: (union "Eq_80" (int16 u0) (byte u1))
	T_80 (in Mem77[ds:0x01F6:int16] : int16)
	T_89 (in Mem77[ds:0x01F6:int16] : int16)
	T_99 (in Mem77[ds:0x01F6:int16] : int16)
	T_109 (in Mem77[ds:0x01F6:int16] : int16)
	T_155 (in Mem124[ds:0x01F6:word16] : word16)
	T_157 (in Mem124[ds:0x01F6:word16] + 0x0001 : word16)
	T_159 (in Mem131[ds:0x01F6:word16] : word16)
	T_171 (in Mem131[ds:0x01F6:byte] : byte)
Eq_81: (union "Eq_81" (real16 u0) (real64 u1))
	T_81 (in (real64) ds->t01F6 : real64)
Eq_84: (union "Eq_84" (real16 u0) (real64 u1))
	T_84 (in (real64) ds->w01FA : real64)
Eq_90: (union "Eq_90" (real16 u0) (real64 u1))
	T_90 (in (real64) ds->t01F6 : real64)
Eq_93: (union "Eq_93" (real16 u0) (real64 u1))
	T_93 (in (real64) ds->w01FD : real64)
Eq_94: (union "Eq_94" (real16 u0) (real64 u1))
	T_94 (in (real64) ds->t01F6 / (real64) ds->w01FD : word16)
Eq_97: (fn real64 (real16))
	T_97 (in __rndint : ptr32)
Eq_100: (union "Eq_100" (real16 u0) (real64 u1))
	T_100 (in (real64) ds->t01F6 : real64)
Eq_103: (union "Eq_103" (real16 u0) (real64 u1))
	T_103 (in (real64) ds->w01FB : real64)
Eq_110: (union "Eq_110" (64 u0) (real64 u1))
	T_110 (in (real64) ds->t01F6 : real64)
Eq_111: (union "Eq_111" (64 u0) (real64 u1))
	T_111 (in -(real64) ds->t01F6 : real64)
Eq_113: (union "Eq_113" (real16 u0) (real64 u1))
	T_113 (in cos(sqrt(sqrt(rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78)) * 3 + sin(atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) + (real64) ds->t01F6 / (real64) ds->w01FD) * __rndint((real64) ds->t01F6 / (real64) ds->w01FB) + -((real64) ds->t01F6)) : real64)
Eq_116: (union "Eq_116" (real16 u0) (real64 u1))
	T_116 (in (real64) ds->w0188 : real64)
Eq_160: (fn void (byte, byte))
	T_160 (in __outb : ptr32)
Eq_163: (fn void (byte, byte))
	T_163 (in __outb : ptr32)
Eq_173: (fn void (byte, byte))
	T_173 (in __outb : ptr32)
Eq_176: (fn void (byte, byte))
	T_176 (in __outb : ptr32)
Eq_179: (struct "Eq_179" 0001 (FFFFFEC0 byte bFFFFFEC0) (FFFFFFFF byte bFFFFFFFF) (0 byte b0000) (1 byte b0001) (140 byte b0140))
	T_179 (in di_140 : (memptr (ptr Eq_38) Eq_179))
	T_180 (in 0x0200 : word16)
	T_216 (in di_140 + 0x0001 : word16)
Eq_221: (fn byte (word16))
	T_221 (in __inb : ptr32)
Eq_235: (fn byte ((ptr byte)))
	T_235 (in bios_kbd_check_keystroke : ptr32)
	T_236 (in signature of bios_kbd_check_keystroke : void)
Eq_261: (union "Eq_261" (byte u0) (word16 u1))
	T_261
	T_263
Eq_265: (struct "Eq_265" (FFFFFFFE (ptr Eq_38) ptrFFFFFFFE))
	T_265
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
T_7: (in al_17 : uint8)
  Class: Eq_7
  DataType: uint8
  OrigDataType: uint8
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: uint8
  OrigDataType: byte
T_9: (in cx_19 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_13 (T_12, T_7)))
T_12: (in 0x03C8 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in __outb(0x03C8, al_17) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in al_12 : Eq_14)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: uint8
T_15: (in 0x02 : byte)
  Class: Eq_15
  DataType: uint8
  OrigDataType: uint8
T_16: (in al_17 >>u 0x02 : word16)
  Class: Eq_14
  DataType: Eq_14
  OrigDataType: uint16
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18, T_14)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __outb(0x03C9, al_12) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in ax_13 : uint16)
  Class: Eq_20
  DataType: uint16
  OrigDataType: uint16
T_21: (in al_12 *u al_12 : uint16)
  Class: Eq_20
  DataType: uint16
  OrigDataType: uint16
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_27 (T_23, T_26)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0006 : word16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: uint16
T_25: (in ax_13 >>u 0x0006 : word16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in (byte) (ax_13 >>u 0x0006) : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in __outb(0x03C9, (byte) (ax_13 >>u 0x0006)) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in 0x0007 : word16)
  Class: Eq_28
  DataType: uint16
  OrigDataType: uint16
T_29: (in ax_13 >>u 0x0007 : word16)
  Class: Eq_29
  DataType: uint16
  OrigDataType: uint16
T_30: (in (byte) (ax_13 >>u 0x0007) : byte)
  Class: Eq_7
  DataType: uint8
  OrigDataType: byte
T_31: (in __outb : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_33 (T_32, T_7)))
T_32: (in 0x03C9 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in __outb(0x03C9, al_17) : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in cx_19 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_37: (in cx_19 != 0x0000 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in ds : (ptr Eq_38))
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (segment (C0 (arr T_260) a00C0) (188 T_115 t0188) (1F6 T_80 t01F6) (1F8 T_50 t01F8) (1FA T_83 t01FA) (1FB T_102 t01FB) (1FD T_92 t01FD) (1FF (arr T_259) a01FF) (200 (arr T_257) a0200) (201 (arr T_258) a0201) (340 (arr T_261) a0340)))
T_39: (in ss : selector)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (segment))
T_40: (in fp : ptr16)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: (union (ptr16 u0) ((memptr T_39 (struct (FFFFFFFE T_43 tFFFFFFFE))) u1))
T_41: (in 0x0002 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in fp - 0x0002 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem48[ss:fp - 0x0002:word16] : word16)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: word16
T_44: (in dx_127 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0052 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_46: (in di_125 : (memptr (ptr Eq_38) byte))
  Class: Eq_46
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: (memptr T_38 (struct 0001 (0 T_124 t0000)))
T_47: (in 0x0200 : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_48: (in 0x00A0 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in cx_126 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in 0x00A0 - cx_126 : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: word16
T_51: (in 0x01F8 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_38) int16)
  OrigDataType: (memptr T_38 (struct (0 T_52 t0000)))
T_52: (in Mem73[ds:0x01F8:word16] : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: word16
T_53: (in rLoc1_74 : real64)
  Class: Eq_53
  DataType: real64
  OrigDataType: real64
T_54: (in 0x01F8 : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_38) int16)
  OrigDataType: (memptr T_38 (struct (0 T_55 t0000)))
T_55: (in Mem73[ds:0x01F8:int16] : int16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_56: (in (real64) ds->w01F8 : real64)
  Class: Eq_53
  DataType: real64
  OrigDataType: real64
T_57: (in 0x0000 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in dx_127 + 0x0000 : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: word16
T_59: (in 0x01F8 : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_38) int16)
  OrigDataType: (memptr T_38 (struct (0 T_60 t0000)))
T_60: (in Mem77[ds:0x01F8:word16] : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: word16
T_61: (in rLoc2_78 : real64)
  Class: Eq_61
  DataType: real64
  OrigDataType: real64
T_62: (in 0x01F8 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_38) int16)
  OrigDataType: (memptr T_38 (struct (0 T_63 t0000)))
T_63: (in Mem77[ds:0x01F8:int16] : int16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_64: (in (real64) ds->w01F8 : real64)
  Class: Eq_61
  DataType: real64
  OrigDataType: real64
T_65: (in cos : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_113 (T_112)))
T_66: (in sqrt : ptr32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (fn T_72 (T_71)))
T_67: (in sqrt : ptr32)
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (fn T_71 (T_70)))
T_68: (in rLoc2_78 * rLoc2_78 : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_69: (in rLoc2_78 * rLoc2_78 : real64)
  Class: Eq_69
  DataType: real64
  OrigDataType: real64
T_70: (in rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78 : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_71: (in sqrt(rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78) : real64)
  Class: Eq_71
  DataType: real64
  OrigDataType: real64
T_72: (in sqrt(sqrt(rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78)) : real64)
  Class: Eq_72
  DataType: real64
  OrigDataType: real64
T_73: (in 3 : real64)
  Class: Eq_73
  DataType: real64
  OrigDataType: real64
T_74: (in sqrt(sqrt(rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78)) * 3 : real64)
  Class: Eq_74
  DataType: real64
  OrigDataType: real64
T_75: (in sin : ptr32)
  Class: Eq_75
  DataType: (ptr Eq_75)
  OrigDataType: (ptr (fn T_96 (T_95)))
T_76: (in atan : ptr32)
  Class: Eq_76
  DataType: (ptr Eq_76)
  OrigDataType: (ptr (fn T_77 (T_61, T_53)))
T_77: (in atan(rLoc2_78, rLoc1_74) : real64)
  Class: Eq_77
  DataType: real64
  OrigDataType: real64
T_78: (in __rndint : ptr32)
  Class: Eq_78
  DataType: (ptr Eq_78)
  OrigDataType: (ptr (fn T_86 (T_85)))
T_79: (in 0x01F6 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_38) Eq_80)
  OrigDataType: (memptr T_38 (struct (0 T_80 t0000)))
T_80: (in Mem77[ds:0x01F6:int16] : int16)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: int16
T_81: (in (real64) ds->t01F6 : real64)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: (union (real16 u0) (real64 u1))
T_82: (in 0x01FA : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_83 t0000)))
T_83: (in Mem77[ds:0x01FA:word16] : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in (real64) ds->w01FA : real64)
  Class: Eq_84
  DataType: Eq_84
  OrigDataType: (union (real16 u0) (real64 u1))
T_85: (in (real64) ds->t01F6 / (real64) ds->w01FA : word16)
  Class: Eq_85
  DataType: real16
  OrigDataType: real16
T_86: (in __rndint((real64) ds->t01F6 / (real64) ds->w01FA) : real64)
  Class: Eq_86
  DataType: real64
  OrigDataType: real64
T_87: (in atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) : real64)
  Class: Eq_87
  DataType: real64
  OrigDataType: real64
T_88: (in 0x01F6 : word16)
  Class: Eq_88
  DataType: (memptr (ptr Eq_38) Eq_80)
  OrigDataType: (memptr T_38 (struct (0 T_89 t0000)))
T_89: (in Mem77[ds:0x01F6:int16] : int16)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: int16
T_90: (in (real64) ds->t01F6 : real64)
  Class: Eq_90
  DataType: Eq_90
  OrigDataType: (union (real16 u0) (real64 u1))
T_91: (in 0x01FD : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_92 t0000)))
T_92: (in Mem77[ds:0x01FD:word16] : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in (real64) ds->w01FD : real64)
  Class: Eq_93
  DataType: Eq_93
  OrigDataType: (union (real16 u0) (real64 u1))
T_94: (in (real64) ds->t01F6 / (real64) ds->w01FD : word16)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: (union (real16 u0) (real64 u1))
T_95: (in atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) + (real64) ds->t01F6 / (real64) ds->w01FD : real64)
  Class: Eq_95
  DataType: real64
  OrigDataType: real64
T_96: (in sin(atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) + (real64) ds->t01F6 / (real64) ds->w01FD) : real64)
  Class: Eq_96
  DataType: real64
  OrigDataType: real64
T_97: (in __rndint : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_105 (T_104)))
T_98: (in 0x01F6 : word16)
  Class: Eq_98
  DataType: (memptr (ptr Eq_38) Eq_80)
  OrigDataType: (memptr T_38 (struct (0 T_99 t0000)))
T_99: (in Mem77[ds:0x01F6:int16] : int16)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: int16
T_100: (in (real64) ds->t01F6 : real64)
  Class: Eq_100
  DataType: Eq_100
  OrigDataType: (union (real16 u0) (real64 u1))
T_101: (in 0x01FB : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_102 t0000)))
T_102: (in Mem77[ds:0x01FB:word16] : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in (real64) ds->w01FB : real64)
  Class: Eq_103
  DataType: Eq_103
  OrigDataType: (union (real16 u0) (real64 u1))
T_104: (in (real64) ds->t01F6 / (real64) ds->w01FB : word16)
  Class: Eq_104
  DataType: real16
  OrigDataType: real16
T_105: (in __rndint((real64) ds->t01F6 / (real64) ds->w01FB) : real64)
  Class: Eq_105
  DataType: real64
  OrigDataType: real64
T_106: (in sin(atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) + (real64) ds->t01F6 / (real64) ds->w01FD) * __rndint((real64) ds->t01F6 / (real64) ds->w01FB) : real64)
  Class: Eq_106
  DataType: real64
  OrigDataType: real64
T_107: (in sqrt(sqrt(rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78)) * 3 + sin(atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) + (real64) ds->t01F6 / (real64) ds->w01FD) * __rndint((real64) ds->t01F6 / (real64) ds->w01FB) : real64)
  Class: Eq_107
  DataType: real64
  OrigDataType: real64
T_108: (in 0x01F6 : word16)
  Class: Eq_108
  DataType: (memptr (ptr Eq_38) Eq_80)
  OrigDataType: (memptr T_38 (struct (0 T_109 t0000)))
T_109: (in Mem77[ds:0x01F6:int16] : int16)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: int16
T_110: (in (real64) ds->t01F6 : real64)
  Class: Eq_110
  DataType: Eq_110
  OrigDataType: (union (64 u0) (real64 u1))
T_111: (in -(real64) ds->t01F6 : real64)
  Class: Eq_111
  DataType: Eq_111
  OrigDataType: (union (64 u0) (real64 u1))
T_112: (in sqrt(sqrt(rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78)) * 3 + sin(atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) + (real64) ds->t01F6 / (real64) ds->w01FD) * __rndint((real64) ds->t01F6 / (real64) ds->w01FB) + -((real64) ds->t01F6) : real64)
  Class: Eq_112
  DataType: real64
  OrigDataType: real64
T_113: (in cos(sqrt(sqrt(rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78)) * 3 + sin(atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) + (real64) ds->t01F6 / (real64) ds->w01FD) * __rndint((real64) ds->t01F6 / (real64) ds->w01FB) + -((real64) ds->t01F6)) : real64)
  Class: Eq_113
  DataType: Eq_113
  OrigDataType: (union (real16 u0) (real64 u1))
T_114: (in 0x0188 : word16)
  Class: Eq_114
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct (0 T_115 t0000)))
T_115: (in Mem77[ds:0x0188:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in (real64) ds->w0188 : real64)
  Class: Eq_116
  DataType: Eq_116
  OrigDataType: (union (real16 u0) (real64 u1))
T_117: (in cos(sqrt(sqrt(rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78)) * 3 + sin(atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) + (real64) ds->t01F6 / (real64) ds->w01FD) * __rndint((real64) ds->t01F6 / (real64) ds->w01FB) + -((real64) ds->t01F6)) * (real64) ds->w0188 : word16)
  Class: Eq_117
  DataType: real16
  OrigDataType: real16
T_118: (in (int16) (cos(sqrt(sqrt(rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78)) * 3 + sin(atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) + (real64) ds->t01F6 / (real64) ds->w01FD) * __rndint((real64) ds->t01F6 / (real64) ds->w01FB) + -((real64) ds->t01F6)) * (real64) ds->w0188) : int16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_119: (in 0x01F8 : word16)
  Class: Eq_119
  DataType: (memptr (ptr Eq_38) int16)
  OrigDataType: (memptr T_38 (struct (0 T_120 t0000)))
T_120: (in Mem114[ds:0x01F8:int16] : int16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_121: (in bx_117 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in 0x0000 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in di_125 + 0x0000 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem114[ds:di_125 + 0x0000:byte] : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_125: (in (word16) (ds->*di_125) : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_126: (in ax_120 : uint16)
  Class: Eq_126
  DataType: uint16
  OrigDataType: uint16
T_127: (in 0x01F8 : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_38) int16)
  OrigDataType: (memptr T_38 (struct (0 T_128 t0000)))
T_128: (in Mem114[ds:0x01F8:word16] : word16)
  Class: Eq_50
  DataType: int16
  OrigDataType: word16
T_129: (in 0x007F : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in ds->w01F8 + 0x007F : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in ds->w01F8 + 0x007F + bx_117 : word16)
  Class: Eq_131
  DataType: uint16
  OrigDataType: uint16
T_132: (in 0x0001 : word16)
  Class: Eq_132
  DataType: uint16
  OrigDataType: uint16
T_133: (in ds->w01F8 + 0x007F + bx_117 >>u 0x0001 : word16)
  Class: Eq_133
  DataType: uint16
  OrigDataType: uint16
T_134: (in (ds->w01F8 + 0x007F + bx_117 >>u 0x0001) + bx_117 : word16)
  Class: Eq_126
  DataType: uint16
  OrigDataType: word16
T_135: (in al_122 : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_136: (in 0x0001 : word16)
  Class: Eq_136
  DataType: uint16
  OrigDataType: uint16
T_137: (in ax_120 >>u 0x0001 : word16)
  Class: Eq_137
  DataType: uint16
  OrigDataType: uint16
T_138: (in (byte) (ax_120 >>u 0x0001) : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_139: (in 0xA000 : selector)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (segment (0 (arr T_264) a0000) (200 (arr T_262) a0200)))
T_140: (in 0x0000 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in di_125 + 0x0000 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in Mem124[0xA000:di_125 + 0x0000:byte] : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_143: (in 0x0001 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in di_125 + 0x0001 : word16)
  Class: Eq_46
  DataType: (memptr (ptr Eq_38) byte)
  OrigDataType: word16
T_145: (in 0x0001 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in cx_126 - 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_147: (in 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_148: (in cx_126 != 0x0000 : bool)
  Class: Eq_148
  DataType: bool
  OrigDataType: bool
T_149: (in 0x0001 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in dx_127 - 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_151: (in 0x0078 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_152: (in dx_127 != 0x0078 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in 0x0140 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_154: (in 0x01F6 : word16)
  Class: Eq_154
  DataType: (memptr (ptr Eq_38) Eq_80)
  OrigDataType: (memptr T_38 (struct (0 T_155 t0000)))
T_155: (in Mem124[ds:0x01F6:word16] : word16)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word16
T_156: (in 0x0001 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in Mem124[ds:0x01F6:word16] + 0x0001 : word16)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word16
T_158: (in 0x01F6 : word16)
  Class: Eq_158
  DataType: (memptr (ptr Eq_38) Eq_80)
  OrigDataType: (memptr T_38 (struct (0 T_159 t0000)))
T_159: (in Mem131[ds:0x01F6:word16] : word16)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: word16
T_160: (in __outb : ptr32)
  Class: Eq_160
  DataType: (ptr Eq_160)
  OrigDataType: (ptr (fn T_162 (T_161, T_135)))
T_161: (in 0x61 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in __outb(0x61, al_122) : void)
  Class: Eq_162
  DataType: void
  OrigDataType: void
T_163: (in __outb : ptr32)
  Class: Eq_163
  DataType: (ptr Eq_163)
  OrigDataType: (ptr (fn T_166 (T_164, T_165)))
T_164: (in 0x43 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in 0xB6 : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in __outb(0x43, 0xB6) : void)
  Class: Eq_166
  DataType: void
  OrigDataType: void
T_167: (in al_138 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in ax_120 >>u 0x0001 : word16)
  Class: Eq_168
  DataType: uint16
  OrigDataType: uint16
T_169: (in (byte) (ax_120 >>u 0x0001) : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in 0x01F6 : word16)
  Class: Eq_170
  DataType: (memptr (ptr Eq_38) Eq_80)
  OrigDataType: (memptr T_38 (struct (0 T_171 t0000)))
T_171: (in Mem131[ds:0x01F6:byte] : byte)
  Class: Eq_80
  DataType: Eq_80
  OrigDataType: byte
T_172: (in (byte) (ax_120 >>u 0x0001) + ds->t01F6 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_173: (in __outb : ptr32)
  Class: Eq_173
  DataType: (ptr Eq_173)
  OrigDataType: (ptr (fn T_175 (T_174, T_167)))
T_174: (in 0x42 : byte)
  Class: Eq_174
  DataType: byte
  OrigDataType: byte
T_175: (in __outb(0x42, al_138) : void)
  Class: Eq_175
  DataType: void
  OrigDataType: void
T_176: (in __outb : ptr32)
  Class: Eq_176
  DataType: (ptr Eq_176)
  OrigDataType: (ptr (fn T_178 (T_177, T_167)))
T_177: (in 0x42 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in __outb(0x42, al_138) : void)
  Class: Eq_178
  DataType: void
  OrigDataType: void
T_179: (in di_140 : (memptr (ptr Eq_38) Eq_179))
  Class: Eq_179
  DataType: (memptr (ptr Eq_38) Eq_179)
  OrigDataType: (memptr T_38 (struct 0001 (FFFFFEC0 T_201 tFFFFFEC0) (FFFFFFFF T_196 tFFFFFFFF) (0 T_185 t0000) (1 T_191 t0001) (140 T_206 t0140)))
T_180: (in 0x0200 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_38) Eq_179)
  OrigDataType: word16
T_181: (in cx_141 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in 0xFC80 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_183: (in 0x0000 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in di_140 + 0x0000 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in Mem131[ds:di_140 + 0x0000:byte] : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in (word16) (ds->*di_140).b0000 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in 0x0002 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in (word16) (ds->*di_140).b0000 << 0x0002 : word16)
  Class: Eq_188
  DataType: ui16
  OrigDataType: ui16
T_189: (in 0x0001 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in di_140 + 0x0001 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in Mem131[ds:di_140 + 0x0001:byte] : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_192: (in (word16) (ds->*di_140).b0001 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in ((word16) (ds->*di_140).b0000 << 0x0002) + (word16) (ds->*di_140).b0001 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in 0x0001 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in di_140 - 0x0001 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in Mem131[ds:di_140 - 0x0001:byte] : byte)
  Class: Eq_196
  DataType: byte
  OrigDataType: byte
T_197: (in (word16) (ds->*di_140).b0001 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in ((word16) (ds->*di_140).b0000 << 0x0002) + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0001 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in 0x0140 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in di_140 - 0x0140 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in Mem131[ds:di_140 - 0x0140:byte] : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in (word16) (ds->*di_140).b0140 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in ((word16) (ds->*di_140).b0000 << 0x0002) + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0140 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in 0x0140 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in di_140 + 0x0140 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in Mem131[ds:di_140 + 0x0140:byte] : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in (word16) (ds->*di_140).b0140 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in ((word16) (ds->*di_140).b0000 << 0x0002) + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0140 + (word16) (ds->*di_140).b0140 : word16)
  Class: Eq_208
  DataType: uint16
  OrigDataType: uint16
T_209: (in 0x0003 : word16)
  Class: Eq_209
  DataType: uint16
  OrigDataType: uint16
T_210: (in ((word16) (ds->*di_140).b0000 << 0x0002) + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0140 + (word16) (ds->*di_140).b0140 >>u 0x0003 : word16)
  Class: Eq_210
  DataType: uint16
  OrigDataType: uint16
T_211: (in (byte) (((word16) (ds->*di_140).b0000 << 0x0002) + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0140 + (word16) (ds->*di_140).b0140 >>u 0x0003) : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_212: (in 0x0000 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in di_140 + 0x0000 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in Mem157[0xA000:di_140 + 0x0000:byte] : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_215: (in 0x0001 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in di_140 + 0x0001 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_38) Eq_179)
  OrigDataType: word16
T_217: (in 0x0001 : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_218: (in cx_141 - 0x0001 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_219: (in 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_220: (in cx_141 != 0x0000 : bool)
  Class: Eq_220
  DataType: bool
  OrigDataType: bool
T_221: (in __inb : ptr32)
  Class: Eq_221
  DataType: (ptr Eq_221)
  OrigDataType: (ptr (fn T_223 (T_222)))
T_222: (in 0x03DA : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in __inb(0x03DA) : byte)
  Class: Eq_223
  DataType: byte
  OrigDataType: byte
T_224: (in 0x08 : byte)
  Class: Eq_224
  DataType: byte
  OrigDataType: byte
T_225: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_226: (in 0x00 : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_227: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_227
  DataType: bool
  OrigDataType: bool
T_228: (in si_169 : (memptr (ptr Eq_38) word16))
  Class: Eq_228
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_38 (struct 0002 (0 T_245 t0000)))
T_229: (in 0x0340 : word16)
  Class: Eq_228
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: word16
T_230: (in di_170 : (memptr (ptr Eq_38) word16))
  Class: Eq_230
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: (memptr T_139 (struct 0002 (0 T_248 t0000)))
T_231: (in 0x0000 : word16)
  Class: Eq_230
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: word16
T_232: (in cx_175 : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_233: (in 0x7D00 : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_234: (in al_184 : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_235: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_235
  DataType: (ptr Eq_235)
  OrigDataType: (ptr (fn T_239 (T_238)))
T_236: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_235
  DataType: (ptr Eq_235)
  OrigDataType: 
T_237: (in alOut : ptr16)
  Class: Eq_237
  DataType: (ptr byte)
  OrigDataType: ptr16
T_238: (in out al_184 : ptr16)
  Class: Eq_237
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_239: (in bios_kbd_check_keystroke(out al_184) : byte)
  Class: Eq_239
  DataType: byte
  OrigDataType: byte
T_240: (in 0x0000 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in 0x0000 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_242: (in 0x0000 == 0x0000 : bool)
  Class: Eq_242
  DataType: bool
  OrigDataType: bool
T_243: (in 0x0000 : word16)
  Class: Eq_243
  DataType: word16
  OrigDataType: word16
T_244: (in si_169 + 0x0000 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in Mem157[ds:si_169 + 0x0000:word16] : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in 0x0000 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_247: (in di_170 + 0x0000 : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in Mem180[0xA000:di_170 + 0x0000:word16] : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_249: (in 0x0002 : word16)
  Class: Eq_249
  DataType: word16
  OrigDataType: word16
T_250: (in si_169 + 0x0002 : word16)
  Class: Eq_228
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: word16
T_251: (in 0x0002 : word16)
  Class: Eq_251
  DataType: word16
  OrigDataType: word16
T_252: (in di_170 + 0x0002 : word16)
  Class: Eq_230
  DataType: (memptr (ptr Eq_38) word16)
  OrigDataType: word16
T_253: (in 0x0001 : word16)
  Class: Eq_253
  DataType: word16
  OrigDataType: word16
T_254: (in cx_175 - 0x0001 : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_255: (in 0x0000 : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_256: (in cx_175 == 0x0000 : bool)
  Class: Eq_256
  DataType: bool
  OrigDataType: bool
T_257:
  Class: Eq_257
  DataType: byte
  OrigDataType: (struct 0001 (0 T_185 t0000))
T_258:
  Class: Eq_258
  DataType: byte
  OrigDataType: (struct 0001 (0 T_191 t0000))
T_259:
  Class: Eq_259
  DataType: byte
  OrigDataType: (struct 0001 (0 T_196 t0000))
T_260:
  Class: Eq_260
  DataType: byte
  OrigDataType: (struct 0001 (0 T_201 t0000))
T_261:
  Class: Eq_261
  DataType: Eq_261
  OrigDataType: (struct 0001 (0 T_206 t0000))
T_262:
  Class: Eq_257
  DataType: byte
  OrigDataType: (struct 0001 (0 T_214 t0000))
T_263:
  Class: Eq_261
  DataType: Eq_261
  OrigDataType: (struct 0002 (0 word16 w0000))
T_264:
  Class: Eq_264
  DataType: word16
  OrigDataType: (struct 0002 (0 T_248 t0000))
T_265:
  Class: Eq_265
  DataType: Eq_265
  OrigDataType: 
*/
typedef Eq_38 Eq_1struct Globals {
	Eq_38 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, uint8);

typedef union Eq_14 {
	uint8 u0;
	uint16 u1;
} Eq_14;

typedef void (Eq_17)(word16, Eq_14);

typedef void (Eq_22)(word16, byte);

typedef void (Eq_31)(word16, uint8);

typedef  Eq_38[][]Eq_80[][][]Eq_261[]struct Eq_38 {
	word16 a0000[];	// 0
	byte a00C0[];	// C0
	word16 w0188;	// 188
	Eq_80 t01F6;	// 1F6
	int16 w01F8;	// 1F8
	word16 w01FA;	// 1FA
	word16 w01FB;	// 1FB
	word16 w01FD;	// 1FD
	byte a01FF[];	// 1FF
	byte a0200[];	// 200
	byte a0201[];	// 201
	Eq_261 a0340[];	// 340
} Eq_38;

typedef struct Eq_39 {
} Eq_39;

typedef union Eq_40 {
	ptr16 u0;
	Eq_265 Eq_39::* u1;
} Eq_40;

typedef Eq_113 (Eq_65)(real64);

typedef real64 (Eq_66)(real64);

typedef real64 (Eq_67)(real64);

typedef real64 (Eq_75)(real64);

typedef real64 (Eq_76)(real64, real64);

typedef real64 (Eq_78)(real16);

typedef union Eq_80 {
	int16 u0;
	byte u1;
} Eq_80;

typedef union Eq_81 {
	real16 u0;
	real64 u1;
} Eq_81;

typedef union Eq_84 {
	real16 u0;
	real64 u1;
} Eq_84;

typedef union Eq_90 {
	real16 u0;
	real64 u1;
} Eq_90;

typedef union Eq_93 {
	real16 u0;
	real64 u1;
} Eq_93;

typedef union Eq_94 {
	real16 u0;
	real64 u1;
} Eq_94;

typedef real64 (Eq_97)(real16);

typedef union Eq_100 {
	real16 u0;
	real64 u1;
} Eq_100;

typedef union Eq_103 {
	real16 u0;
	real64 u1;
} Eq_103;

typedef union Eq_110 {
	64 u0;
	real64 u1;
} Eq_110;

typedef union Eq_111 {
	64 u0;
	real64 u1;
} Eq_111;

typedef union Eq_113 {
	real16 u0;
	real64 u1;
} Eq_113;

typedef union Eq_116 {
	real16 u0;
	real64 u1;
} Eq_116;

typedef void (Eq_160)(byte, byte);

typedef void (Eq_163)(byte, byte);

typedef void (Eq_173)(byte, byte);

typedef void (Eq_176)(byte, byte);

typedef struct Eq_179 {	// size: 1 1
	byte bFFFFFEC0;	// FFFFFEC0
	byte bFFFFFFFF;	// FFFFFFFF
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0140;	// 140
} Eq_179;

typedef byte (Eq_221)(word16);

typedef byte (Eq_235)(byte *);

typedef union Eq_261 {
	byte u0;
	word16 u1;
} Eq_261;

typedef Eq_38 Eq_265struct Eq_265 {
	Eq_38 * ptrFFFFFFFE;	// FFFFFFFE
} Eq_265;

