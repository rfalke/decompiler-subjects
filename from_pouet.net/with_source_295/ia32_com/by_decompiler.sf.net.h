// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_295/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF80000 (ptr Eq_55) ptrFFF80000) (FFFA0000 (ptr Eq_9) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void ((ptr Eq_9), word16))
	T_7 (in msdos_display_string : ptr32)
	T_8 (in signature of msdos_display_string : void)
Eq_9: (segment "Eq_9" (0 Eq_37 t0000) (1FA word16 w01FA) (1FC word16 w01FC) (1FE word16 w01FE) (400 Eq_82 t0400) (41D Eq_124 t041D))
	T_9 (in ds : selector)
	T_11 (in ds : (ptr Eq_9))
	T_245 (in 0xA000 : selector)
Eq_18: (fn void (word16, byte))
	T_18 (in __outb : ptr32)
Eq_28: (fn void (word16, byte))
	T_28 (in __outb : ptr32)
Eq_31: (fn void (word16, byte))
	T_31 (in __outb : ptr32)
Eq_34: (fn void (word16, byte))
	T_34 (in __outb : ptr32)
Eq_37: (struct "Eq_37" 0002 (FFFFFFFE Eq_46 tFFFFFFFE) (0 word16 w0000))
	T_37 (in cx : (memptr (ptr Eq_9) Eq_37))
	T_39 (in cx - 0x0001 : word16)
	T_42 (in 0x0000 : word16)
	T_45 (in DPB(cx, 0x02, 0, 8) : word16)
	T_87 (in cx + 0x0001 : word16)
	T_235 (in cx_322 : (memptr (ptr Eq_9) Eq_37))
	T_236 (in DPB(cx_322, ch_111, 8, 8) : word16)
	T_238 (in di_272 : (memptr (ptr Eq_9) Eq_37))
	T_239 (in si_273 : (memptr (ptr Eq_9) Eq_37))
	T_241 (in DPB(cx_322, 0x78, 8, 8) : word16)
	T_250 (in di_272 + 0x0002 : word16)
	T_255 (in si_273 + 0x0002 : word16)
	T_257 (in cx - 0x0001 : word16)
	T_258 (in 0x0000 : word16)
Eq_46: (union "Eq_46" (ui16 u0) ((memptr (ptr Eq_9) uint8) u1))
	T_46 (in dx_136 : Eq_46)
	T_47 (in 0x04FB : word16)
	T_77 (in dx_317 << 0x02 : word16)
	T_222 (in dx_136 + 0x0001 : word16)
	T_253 (in Mem283[ds:di_272 - 0x0002:word16] : word16)
Eq_55: (segment "Eq_55" (0 byte b0000))
	T_55 (in 0x8000 : selector)
Eq_82: (struct "Eq_82" (0 int16 w0000) (1F Eq_108 t001F) (23 Eq_104 t0023))
	T_82 (in bx_103 : (memptr (ptr Eq_9) Eq_82))
	T_83 (in 0x0400 : word16)
	T_119 (in DPB(bx_103, bl_104, 0, 8) : word16)
Eq_95: (union "Eq_95" (real16 u0) (real64 u1))
	T_95 (in rLoc1_115 : Eq_95)
	T_103 (in (real64) (ds->*bx_103).w0000 / (real64) ds->w01FA : word16)
Eq_99: (union "Eq_99" (real16 u0) (real64 u1))
	T_99 (in (real64) (ds->*bx_103).w0000 : real64)
Eq_102: (union "Eq_102" (real16 u0) (real64 u1))
	T_102 (in (real64) ds->w01FA : real64)
Eq_104: (union "Eq_104" (real32 u0) (real64 u1))
	T_104 (in rLoc1_117 : Eq_104)
	T_106 (in cos(rLoc1_115) : real64)
	T_114 (in Mem120[ds:bx_103 + 0x0023:real32] : real32)
Eq_105: (fn Eq_104 (Eq_95))
	T_105 (in cos : ptr32)
Eq_107: (fn Eq_108 (Eq_95))
	T_107 (in sin : ptr32)
Eq_108: (union "Eq_108" (real32 u0) (real64 u1))
	T_108 (in sin(rLoc1_115) : real64)
	T_111 (in Mem119[ds:bx_103 + 0x001F:real32] : real32)
Eq_121: (struct "Eq_121" 0001 (0 int16 w0000))
	T_121 (in bx_126 : (memptr (ptr Eq_9) Eq_121))
	T_123 (in DPB(bx_103, 0x03, 8, 8) : word16)
	T_149 (in DPB(bx_176, 0x00, 0, 8) : word16)
	T_159 (in bx_201 + 0x0001 : word16)
Eq_124: (struct "Eq_124" 0001 (0 Eq_164 t0000) (4 Eq_169 t0004))
	T_124 (in di_172 : (memptr (ptr Eq_9) Eq_124))
	T_126 (in di_172 + 0x0001 : word16)
	T_183 (in di_172 + 0x0008 : word16)
	T_227 (in 0x041D : word16)
Eq_131: (struct "Eq_131" 0001 (0 int16 w0000))
	T_131 (in DPB(bx_187 + 0x0001, 0x00, 0, 8) : word16)
	T_132 (in bx_176 : (memptr (ptr Eq_9) Eq_131))
	T_143 (in bx_187 + 0x0001 : word16)
	T_228 (in DPB(bx_126, ch_111, 0, 8) : word16)
Eq_150: (struct "Eq_150" (1 int16 w0001))
	T_150 (in bx_201 : (memptr (ptr Eq_9) Eq_150))
	T_152 (in bx_126 + 0x0001 : word16)
Eq_153: (union "Eq_153" (real16 u0) (real64 u1))
	T_153 (in rLoc1_200 : Eq_153)
	T_157 (in (real64) (ds->*bx_126).w0000 : real64)
	T_160 (in rLoc2_214 : Eq_153)
	T_161 (in rLoc1_323 : Eq_153)
	T_166 (in rArg0 : Eq_153)
	T_171 (in rLoc1_323 * (ds->*di_172).t0000 + rArg0 * (ds->*di_172).t0004 : real64)
	T_193 (in rLoc1_323 / (rArg1 / ((rLoc2_214 + (real64) ds->w01FC) / (real64) ds->w01FE)) : real64)
Eq_164: (union "Eq_164" (real16 u0) (real32 u1))
	T_164 (in Mem196[ds:di_172 + 0x0000:real32] : real32)
	T_179 (in Mem196[ds:di_172 + 0x0000:real32] : real32)
Eq_165: (union "Eq_165" (real16 u0) (real64 u1))
	T_165 (in rLoc1_323 * (ds->*di_172).t0000 : word16)
Eq_169: (union "Eq_169" (real16 u0) (real32 u1))
	T_169 (in Mem196[ds:di_172 + 0x0004:real32] : real32)
	T_174 (in Mem196[ds:di_172 + 0x0004:real32] : real32)
Eq_170: (union "Eq_170" (real16 u0) (real64 u1))
	T_170 (in rArg0 * (ds->*di_172).t0004 : word16)
Eq_176: (union "Eq_176" (real16 u0) (real64 u1))
	T_176 (in rArg1 : Eq_176)
	T_181 (in rArg0 * (ds->*di_172).t0004 - rArg1 * (ds->*di_172).t0000 : real64)
Eq_186: (union "Eq_186" (real16 u0) (real64 u1))
	T_186 (in (real64) ds->w01FC : real64)
Eq_190: (union "Eq_190" (real16 u0) (real64 u1))
	T_190 (in (real64) ds->w01FE : real64)
Eq_191: (union "Eq_191" (real16 u0) (real64 u1))
	T_191 (in (rLoc2_214 + (real64) ds->w01FC) / (real64) ds->w01FE : word16)
Eq_205: (struct "Eq_205" (7DA0 byte b7DA0))
	T_205 (in di_236 : (memptr (ptr Eq_9) Eq_205))
	T_208 (in di_234 + (ds->*bx_201).w0001 : word16)
Eq_260: (fn byte (byte))
	T_260 (in __inb : ptr32)
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
T_7: (in msdos_display_string : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_13 (T_11, T_12)))
T_8: (in signature of msdos_display_string : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in ds : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_10: (in dx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in ds : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (1FA word16 w01FA) (1FC T_185 t01FC) (1FE T_189 t01FE)))
T_12: (in 0x01F2 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in msdos_display_string(ds, 0x01F2) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in ax_14 : uint16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: uint16
T_15: (in ax : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x09 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in DPB(ax, 0x09, 8, 8) : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: word16
T_18: (in __outb : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_21 (T_19, T_20)))
T_19: (in 0x03C8 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in cl : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in __outb(0x03C8, cl) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in ax_23 : uint16)
  Class: Eq_22
  DataType: uint16
  OrigDataType: uint16
T_23: (in DPB(ax_14, cl, 0, 8) : word16)
  Class: Eq_22
  DataType: uint16
  OrigDataType: word16
T_24: (in al_26 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in 0x0002 : word16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in ax_23 >>u 0x0002 : word16)
  Class: Eq_26
  DataType: uint16
  OrigDataType: uint16
T_27: (in (byte) (ax_23 >>u 0x0002) : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_28: (in __outb : ptr32)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn T_30 (T_29, T_24)))
T_29: (in 0x03C9 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in __outb(0x03C9, al_26) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in __outb : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_33 (T_32, T_24)))
T_32: (in 0x03C9 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in __outb(0x03C9, al_26) : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in __outb : ptr32)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (fn T_36 (T_35, T_24)))
T_35: (in 0x03C9 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in __outb(0x03C9, al_26) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in cx : (memptr (ptr Eq_9) Eq_37))
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx - 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_40: (in ax_23 >>u 0x0002 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: uint16
T_41: (in (byte) cx : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_42: (in 0x0000 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_43: (in cx != &Eq_9::t0000 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in 0x02 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in DPB(cx, 0x02, 0, 8) : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_46: (in dx_136 : Eq_46)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: (union (ui16 u0) ((memptr T_11 (struct 0001 (0 T_214 t0000))) u1))
T_47: (in 0x04FB : word16)
  Class: Eq_46
  DataType: ui16
  OrigDataType: word16
T_48: (in dl_137 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0xFB : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_50: (in dh_138 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_51: (in 0x04 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_52: (in bl : byte)
  Class: Eq_52
  DataType: bcu8
  OrigDataType: bcu8
T_53: (in 0xFB : byte)
  Class: Eq_52
  DataType: bcu8
  OrigDataType: bcu8
T_54: (in bl >u 0xFB : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in 0x8000 : selector)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (segment))
T_56: (in bx : (memptr (ptr Eq_55) byte))
  Class: Eq_56
  DataType: (memptr (ptr Eq_55) byte)
  OrigDataType: (memptr T_55 (struct 0001 (0 T_59 t0000)))
T_57: (in 0x0000 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in bx + 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in Mem66[0x8000:bx + 0x0000:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_60: (in 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in bx - 0x0001 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_55) byte)
  OrigDataType: word16
T_62: (in (byte) bx : byte)
  Class: Eq_52
  DataType: bcu8
  OrigDataType: byte
T_63: (in 0x0000 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_55) byte)
  OrigDataType: word16
T_64: (in bx != &Eq_55::b0000 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0x04 : byte)
  Class: Eq_52
  DataType: bcu8
  OrigDataType: bcu8
T_66: (in bl <u 0x04 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in false : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in dx_313 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in 0x0F0F : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in bx & 0x0F0F : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_71: (in dx_317 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in (byte) dx_313 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in SLICE(dx_313, byte, 8) : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in (byte) dx_313 + SLICE(dx_313, byte, 8) : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in DPB(dx_313, (byte) dx_313 + SLICE(dx_313, byte, 8), 0, 8) : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_76: (in 0x02 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in dx_317 << 0x02 : word16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: ui16
T_78: (in dx_317 << 0x02 : word16)
  Class: Eq_78
  DataType: ui16
  OrigDataType: ui16
T_79: (in (byte) (dx_317 << 0x02) : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_80: (in dx_317 << 0x02 : word16)
  Class: Eq_80
  DataType: ui16
  OrigDataType: ui16
T_81: (in SLICE(dx_317 << 0x02, byte, 8) : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_82: (in bx_103 : (memptr (ptr Eq_9) Eq_82))
  Class: Eq_82
  DataType: (memptr (ptr Eq_9) Eq_82)
  OrigDataType: (memptr T_11 (struct (0 T_90 t0000) (1F T_111 t001F) (23 T_114 t0023)))
T_83: (in 0x0400 : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_9) Eq_82)
  OrigDataType: word16
T_84: (in bl_104 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in 0x00 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_86: (in 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in cx + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_88: (in 0x0000 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in bx_103 + 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in Mem66[ds:bx_103 + 0x0000:word16] : word16)
  Class: Eq_90
  DataType: int16
  OrigDataType: word16
T_91: (in (ds->*bx_103).w0000 + cx : word16)
  Class: Eq_90
  DataType: int16
  OrigDataType: word16
T_92: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in bx_103 + 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem113[ds:bx_103 + 0x0000:word16] : word16)
  Class: Eq_90
  DataType: int16
  OrigDataType: word16
T_95: (in rLoc1_115 : Eq_95)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: real64
T_96: (in 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in bx_103 + 0x0000 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in Mem113[ds:bx_103 + 0x0000:int16] : int16)
  Class: Eq_90
  DataType: int16
  OrigDataType: int16
T_99: (in (real64) (ds->*bx_103).w0000 : real64)
  Class: Eq_99
  DataType: Eq_99
  OrigDataType: (union (real16 u0) (real64 u1))
T_100: (in 0x01FA : word16)
  Class: Eq_100
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_11 (struct (0 T_101 t0000)))
T_101: (in Mem113[ds:0x01FA:word16] : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in (real64) ds->w01FA : real64)
  Class: Eq_102
  DataType: Eq_102
  OrigDataType: (union (real16 u0) (real64 u1))
T_103: (in (real64) (ds->*bx_103).w0000 / (real64) ds->w01FA : word16)
  Class: Eq_95
  DataType: Eq_95
  OrigDataType: real16
T_104: (in rLoc1_117 : Eq_104)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: real64
T_105: (in cos : ptr32)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: (ptr (fn T_106 (T_95)))
T_106: (in cos(rLoc1_115) : real64)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: real64
T_107: (in sin : ptr32)
  Class: Eq_107
  DataType: (ptr Eq_107)
  OrigDataType: (ptr (fn T_108 (T_95)))
T_108: (in sin(rLoc1_115) : real64)
  Class: Eq_108
  DataType: Eq_108
  OrigDataType: real64
T_109: (in 0x001F : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in bx_103 + 0x001F : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in Mem119[ds:bx_103 + 0x001F:real32] : real32)
  Class: Eq_108
  DataType: Eq_108
  OrigDataType: real32
T_112: (in 0x0023 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in bx_103 + 0x0023 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in Mem120[ds:bx_103 + 0x0023:real32] : real32)
  Class: Eq_104
  DataType: Eq_104
  OrigDataType: real32
T_115: (in 0x08 : byte)
  Class: Eq_115
  DataType: byte
  OrigDataType: byte
T_116: (in bl_104 + 0x08 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_117: (in ch_111 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_119: (in DPB(bx_103, bl_104, 0, 8) : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_9) Eq_82)
  OrigDataType: word16
T_120: (in P : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in bx_126 : (memptr (ptr Eq_9) Eq_121))
  Class: Eq_121
  DataType: (memptr (ptr Eq_9) Eq_121)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_156 t0000)))
T_122: (in 0x03 : byte)
  Class: Eq_122
  DataType: byte
  OrigDataType: byte
T_123: (in DPB(bx_103, 0x03, 8, 8) : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_9) Eq_121)
  OrigDataType: word16
T_124: (in di_172 : (memptr (ptr Eq_9) Eq_124))
  Class: Eq_124
  DataType: (memptr (ptr Eq_9) Eq_124)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_164 t0000) (4 T_169 t0004)))
T_125: (in 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in di_172 + 0x0001 : word16)
  Class: Eq_124
  DataType: (memptr (ptr Eq_9) Eq_124)
  OrigDataType: word16
T_127: (in bx_187 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in bx_187 + 0x0001 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in 0x00 : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in DPB(bx_187 + 0x0001, 0x00, 0, 8) : word16)
  Class: Eq_131
  DataType: (memptr (ptr Eq_9) Eq_131)
  OrigDataType: word16
T_132: (in bx_176 : (memptr (ptr Eq_9) Eq_131))
  Class: Eq_131
  DataType: (memptr (ptr Eq_9) Eq_131)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_133 t0000)))
T_133: (in ax_182 : int16)
  Class: Eq_133
  DataType: int16
  OrigDataType: word16
T_134: (in al_173 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_135: (in 0x80 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in al_173 - 0x80 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in (int16) (al_173 - 0x80) : int16)
  Class: Eq_133
  DataType: int16
  OrigDataType: int16
T_138: (in 0x0000 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in bx_176 + 0x0000 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in Mem184[ds:bx_176 + 0x0000:word16] : word16)
  Class: Eq_133
  DataType: int16
  OrigDataType: word16
T_141: (in 0x0001 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in bx_176 + 0x0001 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_143: (in bx_187 + 0x0001 : word16)
  Class: Eq_131
  DataType: (memptr (ptr Eq_9) Eq_131)
  OrigDataType: word16
T_144: (in bp_151 : int16)
  Class: Eq_133
  DataType: int16
  OrigDataType: int16
T_145: (in 0x0000 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in bx_176 + 0x0000 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in Mem196[ds:bx_176 + 0x0000:word16] : word16)
  Class: Eq_133
  DataType: int16
  OrigDataType: word16
T_148: (in 0x00 : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_149: (in DPB(bx_176, 0x00, 0, 8) : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_9) Eq_121)
  OrigDataType: word16
T_150: (in bx_201 : (memptr (ptr Eq_9) Eq_150))
  Class: Eq_150
  DataType: (memptr (ptr Eq_9) Eq_150)
  OrigDataType: (memptr T_11 (struct (1 T_194 t0001)))
T_151: (in 0x0001 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in bx_126 + 0x0001 : word16)
  Class: Eq_150
  DataType: (memptr (ptr Eq_9) Eq_150)
  OrigDataType: word16
T_153: (in rLoc1_200 : Eq_153)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: real64
T_154: (in 0x0000 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in bx_126 + 0x0000 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in Mem196[ds:bx_126 + 0x0000:int16] : int16)
  Class: Eq_156
  DataType: int16
  OrigDataType: int16
T_157: (in (real64) (ds->*bx_126).w0000 : real64)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: real64
T_158: (in 0x0001 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in bx_201 + 0x0001 : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_9) Eq_121)
  OrigDataType: word16
T_160: (in rLoc2_214 : Eq_153)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: (union (real16 u0) (real64 u1))
T_161: (in rLoc1_323 : Eq_153)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: (union (real16 u0) (real64 u1))
T_162: (in 0x0000 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in di_172 + 0x0000 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in Mem196[ds:di_172 + 0x0000:real32] : real32)
  Class: Eq_164
  DataType: Eq_164
  OrigDataType: (union (real16 u0) (real32 u1))
T_165: (in rLoc1_323 * (ds->*di_172).t0000 : word16)
  Class: Eq_165
  DataType: Eq_165
  OrigDataType: (union (real16 u0) (real64 u1))
T_166: (in rArg0 : Eq_153)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: (union (real16 u0) (real64 u1))
T_167: (in 0x0004 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in di_172 + 0x0004 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in Mem196[ds:di_172 + 0x0004:real32] : real32)
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: (union (real16 u0) (real32 u1))
T_170: (in rArg0 * (ds->*di_172).t0004 : word16)
  Class: Eq_170
  DataType: Eq_170
  OrigDataType: (union (real16 u0) (real64 u1))
T_171: (in rLoc1_323 * (ds->*di_172).t0000 + rArg0 * (ds->*di_172).t0004 : real64)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: real64
T_172: (in 0x0004 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in di_172 + 0x0004 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in Mem196[ds:di_172 + 0x0004:real32] : real32)
  Class: Eq_169
  DataType: Eq_169
  OrigDataType: (union (real16 u0) (real32 u1))
T_175: (in rArg0 * (ds->*di_172).t0004 : word16)
  Class: Eq_175
  DataType: real16
  OrigDataType: real16
T_176: (in rArg1 : Eq_176)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: (union (real16 u0) (real64 u1))
T_177: (in 0x0000 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in di_172 + 0x0000 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in Mem196[ds:di_172 + 0x0000:real32] : real32)
  Class: Eq_164
  DataType: Eq_164
  OrigDataType: (union (real16 u0) (real32 u1))
T_180: (in rArg1 * (ds->*di_172).t0000 : word16)
  Class: Eq_180
  DataType: real16
  OrigDataType: real16
T_181: (in rArg0 * (ds->*di_172).t0004 - rArg1 * (ds->*di_172).t0000 : real64)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: real64
T_182: (in 0x0008 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in di_172 + 0x0008 : word16)
  Class: Eq_124
  DataType: (memptr (ptr Eq_9) Eq_124)
  OrigDataType: word16
T_184: (in 0x01FC : word16)
  Class: Eq_184
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_11 (struct (0 T_185 t0000)))
T_185: (in Mem196[ds:0x01FC:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in (real64) ds->w01FC : real64)
  Class: Eq_186
  DataType: Eq_186
  OrigDataType: (union (real16 u0) (real64 u1))
T_187: (in rLoc2_214 + (real64) ds->w01FC : word16)
  Class: Eq_187
  DataType: real16
  OrigDataType: real16
T_188: (in 0x01FE : word16)
  Class: Eq_188
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_11 (struct (0 T_189 t0000)))
T_189: (in Mem196[ds:0x01FE:word16] : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in (real64) ds->w01FE : real64)
  Class: Eq_190
  DataType: Eq_190
  OrigDataType: (union (real16 u0) (real64 u1))
T_191: (in (rLoc2_214 + (real64) ds->w01FC) / (real64) ds->w01FE : word16)
  Class: Eq_191
  DataType: Eq_191
  OrigDataType: (union (real16 u0) (real64 u1))
T_192: (in rArg1 / ((rLoc2_214 + (real64) ds->w01FC) / (real64) ds->w01FE) : real64)
  Class: Eq_192
  DataType: real64
  OrigDataType: real64
T_193: (in rLoc1_323 / (rArg1 / ((rLoc2_214 + (real64) ds->w01FC) / (real64) ds->w01FE)) : real64)
  Class: Eq_153
  DataType: Eq_153
  OrigDataType: real64
T_194: (in (int16) rArg0 : int16)
  Class: Eq_194
  DataType: int16
  OrigDataType: int16
T_195: (in bx_201 + 0x0001 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in Mem233[ds:bx_201 + 0x0001:int16] : int16)
  Class: Eq_194
  DataType: int16
  OrigDataType: int16
T_197: (in di_234 : int16)
  Class: Eq_197
  DataType: int16
  OrigDataType: word16
T_198: (in bx_201 + 0x0001 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in Mem233[ds:bx_201 + 0x0001:word16] : word16)
  Class: Eq_194
  DataType: int16
  OrigDataType: int16
T_200: (in 0x0140 : word16)
  Class: Eq_200
  DataType: int16
  OrigDataType: int16
T_201: (in (ds->*bx_201).w0001 *s 0x0140 : int16)
  Class: Eq_197
  DataType: int16
  OrigDataType: int16
T_202: (in (int16) rArg1 : int16)
  Class: Eq_194
  DataType: int16
  OrigDataType: int16
T_203: (in bx_201 + 0x0001 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in Mem235[ds:bx_201 + 0x0001:int16] : int16)
  Class: Eq_194
  DataType: int16
  OrigDataType: int16
T_205: (in di_236 : (memptr (ptr Eq_9) Eq_205))
  Class: Eq_205
  DataType: (memptr (ptr Eq_9) Eq_205)
  OrigDataType: (memptr T_11 (struct (7DA0 T_211 t7DA0)))
T_206: (in bx_201 + 0x0001 : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in Mem235[ds:bx_201 + 0x0001:word16] : word16)
  Class: Eq_194
  DataType: int16
  OrigDataType: word16
T_208: (in di_234 + (ds->*bx_201).w0001 : word16)
  Class: Eq_205
  DataType: (memptr (ptr Eq_9) Eq_205)
  OrigDataType: word16
T_209: (in 0x7DA0 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in di_236 + 0x7DA0 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in Mem235[ds:di_236 + 0x7DA0:byte] : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_212: (in 0x0000 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in dx_136 + 0x0000 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in Mem235[ds:dx_136 + 0x0000:byte] : byte)
  Class: Eq_214
  DataType: uint8
  OrigDataType: uint8
T_215: (in 0x05 : byte)
  Class: Eq_215
  DataType: uint8
  OrigDataType: uint8
T_216: (in Mem235[ds:dx_136 + 0x0000:byte] >>u 0x05 : word16)
  Class: Eq_216
  DataType: uint16
  OrigDataType: uint16
T_217: (in Mem235[ds:di_236 + 0x7DA0:byte] + (Mem235[ds:dx_136 + 0x0000:byte] >>u 0x05) : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_218: (in 0x7DA0 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in di_236 + 0x7DA0 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in Mem243[ds:di_236 + 0x7DA0:byte] : byte)
  Class: Eq_211
  DataType: byte
  OrigDataType: byte
T_221: (in 0x0001 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in dx_136 + 0x0001 : word16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: word16
T_223: (in (byte) dx_136 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_224: (in SLICE(dx_136, byte, 8) : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_225: (in Z_250 : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_226: (in cond(dx_136) : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_227: (in 0x041D : word16)
  Class: Eq_124
  DataType: (memptr (ptr Eq_9) Eq_124)
  OrigDataType: word16
T_228: (in DPB(bx_126, ch_111, 0, 8) : word16)
  Class: Eq_131
  DataType: (memptr (ptr Eq_9) Eq_131)
  OrigDataType: word16
T_229: (in -bp_151 : word16)
  Class: Eq_133
  DataType: int16
  OrigDataType: int16
T_230: (in cond(bp_151) : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_231: (in 0x0000 : word16)
  Class: Eq_133
  DataType: int16
  OrigDataType: int16
T_232: (in bp_151 < 0x0000 : bool)
  Class: Eq_232
  DataType: bool
  OrigDataType: bool
T_233: (in 0x02 : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_234: (in ch_111 + 0x02 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_235: (in cx_322 : (memptr (ptr Eq_9) Eq_37))
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_236: (in DPB(cx_322, ch_111, 8, 8) : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_237: (in 0x0080 : word16)
  Class: Eq_133
  DataType: int16
  OrigDataType: word16
T_238: (in di_272 : (memptr (ptr Eq_9) Eq_37))
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: (memptr T_9 (struct 0002 (FFFFFFFE T_253 tFFFFFFFE) (0 T_248 t0000)))
T_239: (in si_273 : (memptr (ptr Eq_9) Eq_37))
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: (memptr T_11 (struct 0002 (0 T_244 t0000)))
T_240: (in 0x78 : byte)
  Class: Eq_240
  DataType: byte
  OrigDataType: byte
T_241: (in DPB(cx_322, 0x78, 8, 8) : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_242: (in 0x0000 : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in si_273 + 0x0000 : word16)
  Class: Eq_243
  DataType: word16
  OrigDataType: word16
T_244: (in Mem243[ds:si_273 + 0x0000:word16] : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in 0xA000 : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_246: (in 0x0000 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_247: (in di_272 + 0x0000 : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in Mem280[0xA000:di_272 + 0x0000:word16] : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_249: (in 0x0002 : word16)
  Class: Eq_249
  DataType: word16
  OrigDataType: word16
T_250: (in di_272 + 0x0002 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_251: (in 0x0002 : word16)
  Class: Eq_251
  DataType: word16
  OrigDataType: word16
T_252: (in di_272 - 0x0002 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_253: (in Mem283[ds:di_272 - 0x0002:word16] : word16)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: word16
T_254: (in 0x0002 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in si_273 + 0x0002 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_256: (in 0x0001 : word16)
  Class: Eq_256
  DataType: word16
  OrigDataType: word16
T_257: (in cx - 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_258: (in 0x0000 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_259: (in cx != &Eq_9::t0000 : bool)
  Class: Eq_259
  DataType: bool
  OrigDataType: bool
T_260: (in __inb : ptr32)
  Class: Eq_260
  DataType: (ptr Eq_260)
  OrigDataType: (ptr (fn T_262 (T_261)))
T_261: (in 0x60 : byte)
  Class: Eq_261
  DataType: byte
  OrigDataType: byte
T_262: (in __inb(0x60) : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_263: (in DPB(ax_182, __inb(0x60), 0, 8) : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in 0x0001 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_265: (in DPB(ax_182, __inb(0x60), 0, 8) != 0x0001 : bool)
  Class: Eq_265
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_55 Eq_1Eq_9 Eq_1struct Globals {
	Eq_55 * ptrFFF80000;	// FFF80000
	Eq_9 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(Eq_9 *, word16);

typedef Eq_37 Eq_9Eq_82 Eq_9Eq_124 Eq_9struct Eq_9 {
	Eq_37 t0000;	// 0
	word16 w01FA;	// 1FA
	word16 w01FC;	// 1FC
	word16 w01FE;	// 1FE
	Eq_82 t0400;	// 400
	Eq_124 t041D;	// 41D
} Eq_9;

typedef void (Eq_18)(word16, byte);

typedef void (Eq_28)(word16, byte);

typedef void (Eq_31)(word16, byte);

typedef void (Eq_34)(word16, byte);

typedef Eq_46 Eq_37struct Eq_37 {	// size: 2 2
	Eq_46 tFFFFFFFE;	// FFFFFFFE
	word16 w0000;	// 0
} Eq_37;

typedef union Eq_46 {
	ui16 u0;
	uint8 Eq_9::* u1;
} Eq_46;

typedef struct Eq_55 {
	byte b0000;	// 0
} Eq_55;

typedef Eq_108 Eq_82Eq_104 Eq_82struct Eq_82 {
	int16 w0000;	// 0
	Eq_108 t001F;	// 1F
	Eq_104 t0023;	// 23
} Eq_82;

typedef union Eq_95 {
	real16 u0;
	real64 u1;
} Eq_95;

typedef union Eq_99 {
	real16 u0;
	real64 u1;
} Eq_99;

typedef union Eq_102 {
	real16 u0;
	real64 u1;
} Eq_102;

typedef union Eq_104 {
	real32 u0;
	real64 u1;
} Eq_104;

typedef Eq_104 (Eq_105)(Eq_95);

typedef Eq_108 (Eq_107)(Eq_95);

typedef union Eq_108 {
	real32 u0;
	real64 u1;
} Eq_108;

typedef struct Eq_121 {	// size: 1 1
	int16 w0000;	// 0
} Eq_121;

typedef Eq_164 Eq_124Eq_169 Eq_124struct Eq_124 {	// size: 1 1
	Eq_164 t0000;	// 0
	Eq_169 t0004;	// 4
} Eq_124;

typedef struct Eq_131 {	// size: 1 1
	int16 w0000;	// 0
} Eq_131;

typedef struct Eq_150 {
	int16 w0001;	// 1
} Eq_150;

typedef union Eq_153 {
	real16 u0;
	real64 u1;
} Eq_153;

typedef union Eq_164 {
	real16 u0;
	real32 u1;
} Eq_164;

typedef union Eq_165 {
	real16 u0;
	real64 u1;
} Eq_165;

typedef union Eq_169 {
	real16 u0;
	real32 u1;
} Eq_169;

typedef union Eq_170 {
	real16 u0;
	real64 u1;
} Eq_170;

typedef union Eq_176 {
	real16 u0;
	real64 u1;
} Eq_176;

typedef union Eq_186 {
	real16 u0;
	real64 u1;
} Eq_186;

typedef union Eq_190 {
	real16 u0;
	real64 u1;
} Eq_190;

typedef union Eq_191 {
	real16 u0;
	real64 u1;
} Eq_191;

typedef struct Eq_205 {
	byte b7DA0;	// 7DA0
} Eq_205;

typedef byte (Eq_260)(byte);

