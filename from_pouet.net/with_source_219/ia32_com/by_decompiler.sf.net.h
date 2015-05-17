// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_219/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_114) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_13: (fn void (word16, byte))
	T_13 (in __outb : ptr32)
Eq_16: (fn void (word16, byte))
	T_16 (in __outb : ptr32)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_26: (segment "Eq_26" (1CD Eq_56 t01CD) (1D1 Eq_66 t01D1) (1D5 Eq_46 t01D5) (1D9 Eq_103 t01D9) (1DD cups16 w01DD) (1DF cups16 w01DF) (1E1 int32 dw01E1) (1E5 int32 dw01E5) (1E9 int32 dw01E9) (1ED Eq_28 t01ED) (1F1 Eq_70 t01F1) (1F5 Eq_60 t01F5) (1F9 Eq_50 t01F9))
	T_26 (in ds : (ptr Eq_26))
Eq_28: (union "Eq_28" (real16 u0) (real32 u1))
	T_28 (in Mem0[ds:0x01ED:real32] : real32)
	T_30 (in ds->t01ED + 1 : word16)
	T_32 (in Mem34[ds:0x01ED:real32] : real32)
	T_59 (in Mem52[ds:0x01ED:real32] : real32)
	T_69 (in Mem56[ds:0x01ED:real32] : real32)
Eq_29: (union "Eq_29" (real16 u0) (real64 u1))
	T_29 (in 1 : real64)
Eq_38: (fn byte (word16))
	T_38 (in __inb : ptr32)
Eq_46: (union "Eq_46" (real16 u0) (real32 u1))
	T_46 (in Mem35[ds:0x01D5:real32] : real32)
Eq_49: (union "Eq_49" (real16 u0) (real64 u1))
	T_49 (in (real64) ds->w01DF : real64)
Eq_50: (union "Eq_50" (real16 u0) (real32 u1))
	T_50 (in ds->t01D5 / (real64) ds->w01DF : word16)
	T_52 (in Mem52[ds:0x01F9:real32] : real32)
	T_54 (in Mem52[ds:0x01F9:real32] : real32)
	T_64 (in Mem56[ds:0x01F9:real32] : real32)
	T_121 (in Mem79[ds:0x01F9:real32] : real32)
Eq_56: (union "Eq_56" (real16 u0) (real32 u1))
	T_56 (in Mem52[ds:0x01CD:real32] : real32)
Eq_60: (union "Eq_60" (real32 u0) (word16 u1))
	T_60 (in ds->t01F9 * ds->t01CD - ds->t01ED : word16)
	T_62 (in Mem56[ds:0x01F5:real32] : real32)
	T_82 (in Mem64[ds:0x01F5:real32] : real32)
Eq_66: (union "Eq_66" (real16 u0) (real32 u1))
	T_66 (in Mem56[ds:0x01D1:real32] : real32)
Eq_70: (union "Eq_70" (real16 u0) (real32 u1))
	T_70 (in ds->t01F9 * ds->t01D1 + ds->t01ED : word16)
	T_72 (in Mem60[ds:0x01F1:real32] : real32)
	T_77 (in Mem61[ds:0x01F1:real32] : real32)
	T_119 (in Mem79[ds:0x01F1:real32] : real32)
	T_122 (in ds->t01F1 + ds->t01F9 : word16)
	T_124 (in Mem83[ds:0x01F1:real32] : real32)
Eq_97: (union "Eq_97" (real16 u0) (real64 u1))
	T_97 (in (real64) ds->dw01E9 : real64)
Eq_100: (union "Eq_100" (real16 u0) (real64 u1))
	T_100 (in (real64) ds->w01DF : real64)
Eq_103: (union "Eq_103" (real16 u0) (real32 u1))
	T_103 (in Mem70[ds:0x01D9:real32] : real32)
Eq_114: (segment "Eq_114" (0 byte b0000))
	T_114 (in 0xA000 : selector)
Eq_145: (fn byte (byte))
	T_145 (in __inb : ptr32)
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in al_12 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_15 (T_14, T_11)))
T_14: (in 0x03C9 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in __outb(0x03C9, al_12) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in __outb : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_18 (T_17, T_11)))
T_17: (in 0x03C9 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in __outb(0x03C9, al_12) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 (T_20, T_11)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, al_12) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in 0x01 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in al_12 + 0x01 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_24: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_25: (in al_12 != 0x00 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in ds : (ptr Eq_26))
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment (1CD T_56 t01CD) (1D1 T_66 t01D1) (1D5 T_46 t01D5) (1D9 T_103 t01D9) (1DD T_73 t01DD) (1DF T_33 t01DF) (1E1 T_78 t01E1) (1E5 T_83 t01E5) (1E9 T_92 t01E9) (1ED T_28 t01ED) (1F1 T_70 t01F1) (1F5 T_60 t01F5) (1F9 T_50 t01F9)))
T_27: (in 0x01ED : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_26) Eq_28)
  OrigDataType: (memptr T_26 (struct (0 T_28 t0000)))
T_28: (in Mem0[ds:0x01ED:real32] : real32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: (union (real16 u0) (real32 u1))
T_29: (in 1 : real64)
  Class: Eq_29
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_30: (in ds->t01ED + 1 : word16)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: real16
T_31: (in 0x01ED : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_26) Eq_28)
  OrigDataType: (memptr T_26 (struct (0 T_32 t0000)))
T_32: (in Mem34[ds:0x01ED:real32] : real32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: real32
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: cups16
  OrigDataType: word16
T_34: (in 0x01DF : word16)
  Class: Eq_34
  DataType: (memptr (ptr Eq_26) cups16)
  OrigDataType: (memptr T_26 (struct (0 T_35 t0000)))
T_35: (in Mem35[ds:0x01DF:word16] : word16)
  Class: Eq_33
  DataType: cups16
  OrigDataType: word16
T_36: (in di_36 : (memptr (ptr Eq_114) byte))
  Class: Eq_36
  DataType: (memptr (ptr Eq_114) byte)
  OrigDataType: (memptr T_114 (struct 0001 (0 T_117 t0000)))
T_37: (in 0x0000 : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_114) byte)
  OrigDataType: word16
T_38: (in __inb : ptr32)
  Class: Eq_38
  DataType: (ptr Eq_38)
  OrigDataType: (ptr (fn T_40 (T_39)))
T_39: (in 0x03DA : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in __inb(0x03DA) : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0x08 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in 0x00 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_44: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in 0x01D5 : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_26) Eq_46)
  OrigDataType: (memptr T_26 (struct (0 T_46 t0000)))
T_46: (in Mem35[ds:0x01D5:real32] : real32)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: (union (real16 u0) (real32 u1))
T_47: (in 0x01DF : word16)
  Class: Eq_47
  DataType: (memptr (ptr Eq_26) cups16)
  OrigDataType: (memptr T_26 (struct (0 T_48 t0000)))
T_48: (in Mem35[ds:0x01DF:word16] : word16)
  Class: Eq_33
  DataType: cups16
  OrigDataType: word16
T_49: (in (real64) ds->w01DF : real64)
  Class: Eq_49
  DataType: Eq_49
  OrigDataType: (union (real16 u0) (real64 u1))
T_50: (in ds->t01D5 / (real64) ds->w01DF : word16)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: real16
T_51: (in 0x01F9 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_26) Eq_50)
  OrigDataType: (memptr T_26 (struct (0 T_52 t0000)))
T_52: (in Mem52[ds:0x01F9:real32] : real32)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: real32
T_53: (in 0x01F9 : word16)
  Class: Eq_53
  DataType: (memptr (ptr Eq_26) Eq_50)
  OrigDataType: (memptr T_26 (struct (0 T_54 t0000)))
T_54: (in Mem52[ds:0x01F9:real32] : real32)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: (union (real16 u0) (real32 u1))
T_55: (in 0x01CD : word16)
  Class: Eq_55
  DataType: (memptr (ptr Eq_26) Eq_56)
  OrigDataType: (memptr T_26 (struct (0 T_56 t0000)))
T_56: (in Mem52[ds:0x01CD:real32] : real32)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: (union (real16 u0) (real32 u1))
T_57: (in ds->t01F9 * ds->t01CD : word16)
  Class: Eq_57
  DataType: real16
  OrigDataType: real16
T_58: (in 0x01ED : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_26) Eq_28)
  OrigDataType: (memptr T_26 (struct (0 T_59 t0000)))
T_59: (in Mem52[ds:0x01ED:real32] : real32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: real32
T_60: (in ds->t01F9 * ds->t01CD - ds->t01ED : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_61: (in 0x01F5 : word16)
  Class: Eq_61
  DataType: (memptr (ptr Eq_26) Eq_60)
  OrigDataType: (memptr T_26 (struct (0 T_62 t0000)))
T_62: (in Mem56[ds:0x01F5:real32] : real32)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: real32
T_63: (in 0x01F9 : word16)
  Class: Eq_63
  DataType: (memptr (ptr Eq_26) Eq_50)
  OrigDataType: (memptr T_26 (struct (0 T_64 t0000)))
T_64: (in Mem56[ds:0x01F9:real32] : real32)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: (union (real16 u0) (real32 u1))
T_65: (in 0x01D1 : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_26) Eq_66)
  OrigDataType: (memptr T_26 (struct (0 T_66 t0000)))
T_66: (in Mem56[ds:0x01D1:real32] : real32)
  Class: Eq_66
  DataType: Eq_66
  OrigDataType: (union (real16 u0) (real32 u1))
T_67: (in ds->t01F9 * ds->t01D1 : word16)
  Class: Eq_67
  DataType: real16
  OrigDataType: real16
T_68: (in 0x01ED : word16)
  Class: Eq_68
  DataType: (memptr (ptr Eq_26) Eq_28)
  OrigDataType: (memptr T_26 (struct (0 T_69 t0000)))
T_69: (in Mem56[ds:0x01ED:real32] : real32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: (union (real16 u0) (real32 u1))
T_70: (in ds->t01F9 * ds->t01D1 + ds->t01ED : word16)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: real16
T_71: (in 0x01F1 : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_26) Eq_70)
  OrigDataType: (memptr T_26 (struct (0 T_72 t0000)))
T_72: (in Mem60[ds:0x01F1:real32] : real32)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: real32
T_73: (in 0x0000 : word16)
  Class: Eq_73
  DataType: cups16
  OrigDataType: word16
T_74: (in 0x01DD : word16)
  Class: Eq_74
  DataType: (memptr (ptr Eq_26) cups16)
  OrigDataType: (memptr T_26 (struct (0 T_75 t0000)))
T_75: (in Mem61[ds:0x01DD:word16] : word16)
  Class: Eq_73
  DataType: cups16
  OrigDataType: word16
T_76: (in 0x01F1 : word16)
  Class: Eq_76
  DataType: (memptr (ptr Eq_26) Eq_70)
  OrigDataType: (memptr T_26 (struct (0 T_77 t0000)))
T_77: (in Mem61[ds:0x01F1:real32] : real32)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: real32
T_78: (in (int32) ds->t01F1 : int32)
  Class: Eq_78
  DataType: int32
  OrigDataType: int32
T_79: (in 0x01E1 : word16)
  Class: Eq_79
  DataType: (memptr (ptr Eq_26) int32)
  OrigDataType: (memptr T_26 (struct (0 T_80 t0000)))
T_80: (in Mem64[ds:0x01E1:int32] : int32)
  Class: Eq_78
  DataType: int32
  OrigDataType: int32
T_81: (in 0x01F5 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_26) Eq_60)
  OrigDataType: (memptr T_26 (struct (0 T_82 t0000)))
T_82: (in Mem64[ds:0x01F5:real32] : real32)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: real32
T_83: (in (int32) ds->t01F5 : int32)
  Class: Eq_83
  DataType: int32
  OrigDataType: int32
T_84: (in 0x01E5 : word16)
  Class: Eq_84
  DataType: (memptr (ptr Eq_26) int32)
  OrigDataType: (memptr T_26 (struct (0 T_85 t0000)))
T_85: (in Mem66[ds:0x01E5:int32] : int32)
  Class: Eq_83
  DataType: int32
  OrigDataType: int32
T_86: (in 0x01E1 : word16)
  Class: Eq_86
  DataType: (memptr (ptr Eq_26) int32)
  OrigDataType: (memptr T_26 (struct (0 T_87 t0000)))
T_87: (in Mem66[ds:0x01E1:word32] : word32)
  Class: Eq_78
  DataType: int32
  OrigDataType: word32
T_88: (in 0x01E5 : word16)
  Class: Eq_88
  DataType: (memptr (ptr Eq_26) int32)
  OrigDataType: (memptr T_26 (struct (0 T_89 t0000)))
T_89: (in Mem66[ds:0x01E5:word32] : word32)
  Class: Eq_83
  DataType: int32
  OrigDataType: word32
T_90: (in ds->dw01E1 ^ ds->dw01E5 : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in 0x000000FF : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in (ds->dw01E1 ^ ds->dw01E5) & 0x000000FF : word32)
  Class: Eq_92
  DataType: int32
  OrigDataType: word32
T_93: (in 0x01E9 : word16)
  Class: Eq_93
  DataType: (memptr (ptr Eq_26) int32)
  OrigDataType: (memptr T_26 (struct (0 T_94 t0000)))
T_94: (in Mem70[ds:0x01E9:word32] : word32)
  Class: Eq_92
  DataType: int32
  OrigDataType: word32
T_95: (in 0x01E9 : word16)
  Class: Eq_95
  DataType: (memptr (ptr Eq_26) int32)
  OrigDataType: (memptr T_26 (struct (0 T_96 t0000)))
T_96: (in Mem70[ds:0x01E9:int32] : int32)
  Class: Eq_92
  DataType: int32
  OrigDataType: int32
T_97: (in (real64) ds->dw01E9 : real64)
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: (union (real16 u0) (real64 u1))
T_98: (in 0x01DF : word16)
  Class: Eq_98
  DataType: (memptr (ptr Eq_26) cups16)
  OrigDataType: (memptr T_26 (struct (0 T_99 t0000)))
T_99: (in Mem70[ds:0x01DF:word16] : word16)
  Class: Eq_33
  DataType: cups16
  OrigDataType: word16
T_100: (in (real64) ds->w01DF : real64)
  Class: Eq_100
  DataType: Eq_100
  OrigDataType: (union (real16 u0) (real64 u1))
T_101: (in (real64) ds->dw01E9 * (real64) ds->w01DF : word16)
  Class: Eq_101
  DataType: real16
  OrigDataType: real16
T_102: (in 0x01D9 : word16)
  Class: Eq_102
  DataType: (memptr (ptr Eq_26) Eq_103)
  OrigDataType: (memptr T_26 (struct (0 T_103 t0000)))
T_103: (in Mem70[ds:0x01D9:real32] : real32)
  Class: Eq_103
  DataType: Eq_103
  OrigDataType: (union (real16 u0) (real32 u1))
T_104: (in (real64) ds->dw01E9 * (real64) ds->w01DF / ds->t01D9 : word16)
  Class: Eq_104
  DataType: real16
  OrigDataType: real16
T_105: (in (int32) ((real64) ds->dw01E9 * (real64) ds->w01DF / ds->t01D9) : int32)
  Class: Eq_92
  DataType: int32
  OrigDataType: int32
T_106: (in 0x01E9 : word16)
  Class: Eq_106
  DataType: (memptr (ptr Eq_26) int32)
  OrigDataType: (memptr T_26 (struct (0 T_107 t0000)))
T_107: (in Mem74[ds:0x01E9:int32] : int32)
  Class: Eq_92
  DataType: int32
  OrigDataType: int32
T_108: (in 0x01E9 : word16)
  Class: Eq_108
  DataType: (memptr (ptr Eq_26) int32)
  OrigDataType: (memptr T_26 (struct (0 T_109 t0000)))
T_109: (in Mem74[ds:0x01E9:word32] : word32)
  Class: Eq_92
  DataType: int32
  OrigDataType: word32
T_110: (in (word16) ds->dw01E9 : word16)
  Class: Eq_110
  DataType: uint16
  OrigDataType: uint16
T_111: (in 0x0002 : word16)
  Class: Eq_111
  DataType: uint16
  OrigDataType: uint16
T_112: (in (word16) ds->dw01E9 >>u 0x0002 : word16)
  Class: Eq_112
  DataType: uint16
  OrigDataType: uint16
T_113: (in (byte) ((word16) ds->dw01E9 >>u 0x0002) : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in 0xA000 : selector)
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: (ptr (segment))
T_115: (in 0x0000 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in di_36 + 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem79[0xA000:di_36 + 0x0000:byte] : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_118: (in 0x01F1 : word16)
  Class: Eq_118
  DataType: (memptr (ptr Eq_26) Eq_70)
  OrigDataType: (memptr T_26 (struct (0 T_119 t0000)))
T_119: (in Mem79[ds:0x01F1:real32] : real32)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: (union (real16 u0) (real32 u1))
T_120: (in 0x01F9 : word16)
  Class: Eq_120
  DataType: (memptr (ptr Eq_26) Eq_50)
  OrigDataType: (memptr T_26 (struct (0 T_121 t0000)))
T_121: (in Mem79[ds:0x01F9:real32] : real32)
  Class: Eq_50
  DataType: Eq_50
  OrigDataType: (union (real16 u0) (real32 u1))
T_122: (in ds->t01F1 + ds->t01F9 : word16)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: real16
T_123: (in 0x01F1 : word16)
  Class: Eq_123
  DataType: (memptr (ptr Eq_26) Eq_70)
  OrigDataType: (memptr T_26 (struct (0 T_124 t0000)))
T_124: (in Mem83[ds:0x01F1:real32] : real32)
  Class: Eq_70
  DataType: Eq_70
  OrigDataType: real32
T_125: (in 0x01DD : word16)
  Class: Eq_125
  DataType: (memptr (ptr Eq_26) cups16)
  OrigDataType: (memptr T_26 (struct (0 T_73 t0000)))
T_126: (in Mem83[ds:0x01DD:word16] : word16)
  Class: Eq_73
  DataType: cups16
  OrigDataType: word16
T_127: (in 0x0001 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in ds->w01DD + 0x0001 : word16)
  Class: Eq_73
  DataType: cups16
  OrigDataType: word16
T_129: (in Mem85[ds:0x01DD:word16] : word16)
  Class: Eq_73
  DataType: cups16
  OrigDataType: word16
T_130: (in 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in di_36 + 0x0001 : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_114) byte)
  OrigDataType: word16
T_132: (in 0x01DD : word16)
  Class: Eq_132
  DataType: (memptr (ptr Eq_26) cups16)
  OrigDataType: (memptr T_26 (struct (0 T_133 t0000)))
T_133: (in Mem85[ds:0x01DD:word16] : word16)
  Class: Eq_73
  DataType: cups16
  OrigDataType: cups16
T_134: (in 0x0140 : word16)
  Class: Eq_73
  DataType: cups16
  OrigDataType: cups16
T_135: (in ds->w01DD <u 0x0140 : bool)
  Class: Eq_135
  DataType: bool
  OrigDataType: bool
T_136: (in 0x01DF : word16)
  Class: Eq_136
  DataType: (memptr (ptr Eq_26) cups16)
  OrigDataType: (memptr T_26 (struct (0 T_33 t0000)))
T_137: (in Mem85[ds:0x01DF:word16] : word16)
  Class: Eq_33
  DataType: cups16
  OrigDataType: word16
T_138: (in 0x0001 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in ds->w01DF + 0x0001 : word16)
  Class: Eq_33
  DataType: cups16
  OrigDataType: word16
T_140: (in Mem89[ds:0x01DF:word16] : word16)
  Class: Eq_33
  DataType: cups16
  OrigDataType: word16
T_141: (in 0x01DF : word16)
  Class: Eq_141
  DataType: (memptr (ptr Eq_26) cups16)
  OrigDataType: (memptr T_26 (struct (0 T_142 t0000)))
T_142: (in Mem89[ds:0x01DF:word16] : word16)
  Class: Eq_33
  DataType: cups16
  OrigDataType: cups16
T_143: (in 0x00C8 : word16)
  Class: Eq_33
  DataType: cups16
  OrigDataType: cups16
T_144: (in ds->w01DF <u 0x00C8 : bool)
  Class: Eq_144
  DataType: bool
  OrigDataType: bool
T_145: (in __inb : ptr32)
  Class: Eq_145
  DataType: (ptr Eq_145)
  OrigDataType: (ptr (fn T_147 (T_146)))
T_146: (in 0x60 : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in __inb(0x60) : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in 0x01 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_149: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_149
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_114 Eq_1struct Globals {
	Eq_114 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_13)(word16, byte);

typedef void (Eq_16)(word16, byte);

typedef void (Eq_19)(word16, byte);

typedef Eq_56 Eq_26Eq_66 Eq_26Eq_46 Eq_26Eq_103 Eq_26Eq_28 Eq_26Eq_70 Eq_26Eq_60 Eq_26Eq_50 Eq_26struct Eq_26 {
	Eq_56 t01CD;	// 1CD
	Eq_66 t01D1;	// 1D1
	Eq_46 t01D5;	// 1D5
	Eq_103 t01D9;	// 1D9
	cups16 w01DD;	// 1DD
	cups16 w01DF;	// 1DF
	int32 dw01E1;	// 1E1
	int32 dw01E5;	// 1E5
	int32 dw01E9;	// 1E9
	Eq_28 t01ED;	// 1ED
	Eq_70 t01F1;	// 1F1
	Eq_60 t01F5;	// 1F5
	Eq_50 t01F9;	// 1F9
} Eq_26;

typedef union Eq_28 {
	real16 u0;
	real32 u1;
} Eq_28;

typedef union Eq_29 {
	real16 u0;
	real64 u1;
} Eq_29;

typedef byte (Eq_38)(word16);

typedef union Eq_46 {
	real16 u0;
	real32 u1;
} Eq_46;

typedef union Eq_49 {
	real16 u0;
	real64 u1;
} Eq_49;

typedef union Eq_50 {
	real16 u0;
	real32 u1;
} Eq_50;

typedef union Eq_56 {
	real16 u0;
	real32 u1;
} Eq_56;

typedef union Eq_60 {
	real32 u0;
	word16 u1;
} Eq_60;

typedef union Eq_66 {
	real16 u0;
	real32 u1;
} Eq_66;

typedef union Eq_70 {
	real16 u0;
	real32 u1;
} Eq_70;

typedef union Eq_97 {
	real16 u0;
	real64 u1;
} Eq_97;

typedef union Eq_100 {
	real16 u0;
	real64 u1;
} Eq_100;

typedef union Eq_103 {
	real16 u0;
	real32 u1;
} Eq_103;

typedef struct Eq_114 {
	byte b0000;	// 0
} Eq_114;

typedef byte (Eq_145)(byte);

