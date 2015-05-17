// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_310/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_16) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_16: (segment "Eq_16" (0 byte b0000))
	T_16 (in 0xA000 : selector)
	T_134 (in es : (ptr Eq_16))
	T_160 (in es : (ptr Eq_16))
Eq_27: (segment "Eq_27" (236 Eq_56 t0236) (238 Eq_56 t0238) (23A word16 w023A) (23C Eq_60 t023C) (23E Eq_56 t023E) (240 int16 w0240) (242 word16 w0242) (244 Eq_60 t0244) (246 Eq_56 t0246) (248 word16 w0248) (24A word16 w024A) (24C word16 w024C) (24E uint16 w024E) (36D1 uint16 w36D1))
	T_27 (in ds : (ptr Eq_27))
	T_135 (in ds : (ptr Eq_27))
	T_161 (in ds : (ptr Eq_27))
	T_237 (in ds : (ptr Eq_27))
	T_256 (in ds : (ptr Eq_27))
Eq_30: (fn void (byte))
	T_30 (in __syscall : ptr32)
Eq_56: (union "Eq_56" (int16 u0) (uint16 u1))
	T_56 (in bx_168 : Eq_56)
	T_58 (in Mem39[ds:0x0238:word16] : word16)
	T_70 (in bx : Eq_56)
	T_71 (in fn0C00_029C(bx_168) : word16)
	T_73 (in Mem59[ds:0x0238:word16] : word16)
	T_74 (in bx_63 : Eq_56)
	T_77 (in Mem59[ds:0x0236:word16] : word16)
	T_80 (in Mem59[ds:0x0236:word16] + Mem59[ds:0x023A:word16] : word16)
	T_81 (in fn0C00_029C(Mem59[ds:0x0236:word16] + Mem59[ds:0x023A:word16]) : word16)
	T_83 (in Mem64[ds:0x0236:word16] : word16)
	T_88 (in ax_161 : Eq_56)
	T_90 (in Mem39[ds:0x023E:word16] : word16)
	T_92 (in ax_161 - 0x0005 : word16)
	T_95 (in bx_168 - 0x0001 : word16)
	T_96 (in ax_161 - 0x0005 : word16)
	T_99 (in bx_168 + 0x0001 : word16)
	T_100 (in ax_138 : Eq_56)
	T_102 (in Mem64[ds:0x023E:word16] : word16)
	T_105 (in Mem64[ds:0x023E:word16] + Mem64[ds:0x0242:word16] : word16)
	T_107 (in Mem141[ds:0x023E:word16] : word16)
	T_108 (in 0x0002 : word16)
	T_131 (in ax : Eq_56)
	T_137 (in Mem64[ds:0x0246:word16] : word16)
	T_142 (in ax_85 : Eq_56)
	T_144 (in Mem64[ds:0x023E:word16] : word16)
	T_146 (in Mem86[ds:0x0246:word16] : word16)
	T_157 (in ax : Eq_56)
	T_163 (in Mem88[ds:0x0236:word16] : word16)
	T_169 (in Mem88[ds:0x0238:word16] : word16)
	T_181 (in 0x0000 : word16)
	T_200 (in 0x0000 : word16)
	T_218 (in 0x00C6 : word16)
	T_233 (in ax : Eq_56)
	T_236 (in bx : Eq_56)
	T_243 (in Mem149[ds:0x0238:word16] : word16)
	T_254 (in ax : Eq_56)
	T_276 (in ax + 0x0001 : word16)
	T_283 (in ax - 0x000B : word16)
	T_296 (in Mem0[ds:0x0236:word16] : word16)
	T_303 (in ((word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x0236:word16])) & 0x007F) + 0x0024 : word16)
	T_305 (in Mem17[ds:0x023E:word16] : word16)
	T_320 (in 0x0002 : word16)
	T_323 (in 0x0002 : word16)
	T_324 (in 0x00BD : word16)
	T_328 (in bx + 0x000A : word16)
Eq_60: (union "Eq_60" (int16 u0) ((memptr (ptr Eq_16) byte) u1))
	T_60 (in Mem39[ds:0x023C:word16] : word16)
	T_61 (in 0x00E6 : word16)
	T_132 (in bx : Eq_60)
	T_139 (in Mem64[ds:0x0244:word16] : word16)
	T_147 (in bx_87 : Eq_60)
	T_149 (in Mem86[ds:0x023C:word16] : word16)
	T_151 (in Mem88[ds:0x0244:word16] : word16)
	T_158 (in bx : Eq_60)
	T_164 (in 0x0001 : word16)
	T_170 (in 0x013E : word16)
	T_175 (in bx_102 : Eq_60)
	T_176 (in 0x0000 : word16)
	T_186 (in bx_102 + 0x0001 + 0x0001 : word16)
	T_191 (in bx_116 : Eq_60)
	T_192 (in 0x013F : word16)
	T_203 (in bx_124 - 0x0001 : word16)
	T_223 (in cx_147 : Eq_60)
	T_225 (in Mem141[ds:0x023C:word16] : word16)
	T_228 (in Mem141[ds:0x023C:word16] + Mem141[ds:0x0240:word16] : word16)
	T_230 (in Mem149[ds:0x023C:word16] : word16)
	T_234 (in cx : Eq_60)
	T_235 (in dx : Eq_60)
	T_238 (in 0x0001 : word16)
	T_241 (in 0x013E : word16)
	T_245 (in 0x0000 : word16)
	T_250 (in 0x013F : word16)
	T_306 (in 0x00A0 : word16)
	T_308 (in Mem18[ds:0x023C:word16] : word16)
Eq_68: (fn Eq_56 (Eq_56))
	T_68 (in fn0C00_029C : ptr32)
	T_69 (in signature of fn0C00_029C : void)
	T_75 (in fn0C00_029C : ptr32)
Eq_115: (fn byte (word16))
	T_115 (in __inb : ptr32)
Eq_122: (fn byte (word16))
	T_122 (in __inb : ptr32)
Eq_129: (fn byte (Eq_56, Eq_60, byte, (ptr Eq_16), (ptr Eq_27)))
	T_129 (in fn0C00_0250 : ptr32)
	T_130 (in signature of fn0C00_0250 : void)
	T_152 (in fn0C00_0250 : ptr32)
	T_180 (in fn0C00_0250 : ptr32)
	T_199 (in fn0C00_0250 : ptr32)
	T_273 (in fn0C00_0250 : ptr32)
	T_281 (in fn0C00_0250 : ptr32)
	T_284 (in fn0C00_0250 : ptr32)
Eq_155: (fn void (Eq_56, Eq_60, byte, (ptr Eq_16), (ptr Eq_27)))
	T_155 (in fn0C00_0260 : ptr32)
	T_156 (in signature of fn0C00_0260 : void)
	T_167 (in fn0C00_0260 : ptr32)
Eq_208: (fn byte ((ptr byte)))
	T_208 (in bios_kbd_check_keystroke : ptr32)
	T_209 (in signature of bios_kbd_check_keystroke : void)
Eq_215: (fn void ())
	T_215 (in msdos_terminate_program20 : ptr32)
	T_216 (in signature of msdos_terminate_program20 : void)
Eq_231: (fn void (Eq_56, Eq_60, Eq_60, Eq_56, (ptr Eq_27)))
	T_231 (in fn0C00_02AE : ptr32)
	T_232 (in signature of fn0C00_02AE : void)
	T_240 (in fn0C00_02AE : ptr32)
Eq_252: (fn void (Eq_56, (memptr (ptr Eq_27) int16), (ptr Eq_27)))
	T_252 (in fn0C00_0275 : ptr32)
	T_253 (in signature of fn0C00_0275 : void)
	T_259 (in fn0C00_0275 : ptr32)
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
T_7: (in di_13 : (memptr (ptr Eq_16) byte))
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) byte)
  OrigDataType: (memptr T_16 (struct 0001 (0 T_15 t0000)))
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) byte)
  OrigDataType: word16
T_9: (in cx_11 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0140 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in cx_18 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0xF938 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_13: (in al_131 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x12 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0xA000 : selector)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (segment))
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_13 + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem15[0xA000:di_13 + 0x0000:byte] : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in di_13 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) byte)
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx_11 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_25: (in cx_11 == 0x0000 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (236 T_74 t0236) (238 T_56 t0238) (23A T_26 t023A) (23C T_60 t023C) (23E T_74 t023E) (240 T_227 t0240) (242 T_104 t0242) (244 T_60 t0244) (246 T_74 t0246) (248 T_85 t0248) (24A T_179 t024A) (24C T_195 t024C)))
T_28: (in 0x023A : word16)
  Class: Eq_28
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_29 t0000)))
T_29: (in Mem39[ds:0x023A:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_30: (in __syscall : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 (T_31)))
T_31: (in 0x16 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in __syscall(0x16) : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in 0x04 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in al_131 & 0x04 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x00 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_36: (in (al_131 & 0x04) == 0x00 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in 0x12 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_38: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_13 + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem28[0xA000:di_13 + 0x0000:byte] : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di_13 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) byte)
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in cx_18 - 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_46: (in cx_18 == 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in 0x08 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in al_131 & 0x08 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_50: (in (al_131 & 0x08) == 0x00 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in 0x023A : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_26 t0000)))
T_52: (in Mem39[ds:0x023A:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in ds->w023A + 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_55: (in Mem176[ds:0x023A:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_56: (in bx_168 : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: int16
T_57: (in 0x0238 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_58 t0000)))
T_58: (in Mem39[ds:0x0238:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_59: (in 0x023C : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_27) Eq_60)
  OrigDataType: (memptr T_27 (struct (0 T_60 t0000)))
T_60: (in Mem39[ds:0x023C:word16] : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: int16
T_61: (in 0x00E6 : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: int16
T_62: (in ds->t023C < 0x00E6 : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in 0x023A : word16)
  Class: Eq_63
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_26 t0000)))
T_64: (in Mem39[ds:0x023A:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in ds->w023A - 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_67: (in Mem173[ds:0x023A:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_68: (in fn0C00_029C : ptr32)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: (ptr (fn T_71 (T_56)))
T_69: (in signature of fn0C00_029C : void)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: 
T_70: (in bx : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: int16
T_71: (in fn0C00_029C(bx_168) : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_72: (in 0x0238 : word16)
  Class: Eq_72
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_73 t0000)))
T_73: (in Mem59[ds:0x0238:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_74: (in bx_63 : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_75: (in fn0C00_029C : ptr32)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: (ptr (fn T_81 (T_80)))
T_76: (in 0x0236 : word16)
  Class: Eq_76
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_77 t0000)))
T_77: (in Mem59[ds:0x0236:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_78: (in 0x023A : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_79 t0000)))
T_79: (in Mem59[ds:0x023A:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_80: (in Mem59[ds:0x0236:word16] + Mem59[ds:0x023A:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_81: (in fn0C00_029C(Mem59[ds:0x0236:word16] + Mem59[ds:0x023A:word16]) : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_82: (in 0x0236 : word16)
  Class: Eq_82
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_83 t0000)))
T_83: (in Mem64[ds:0x0236:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_84: (in 0x0248 : word16)
  Class: Eq_84
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_85 t0000)))
T_85: (in Mem64[ds:0x0248:word16] : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_87: (in ds->w0248 == 0x0000 : bool)
  Class: Eq_87
  DataType: bool
  OrigDataType: bool
T_88: (in ax_161 : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_89: (in 0x023E : word16)
  Class: Eq_89
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_90 t0000)))
T_90: (in Mem39[ds:0x023E:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_91: (in 0x0005 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in ax_161 - 0x0005 : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: int16
T_93: (in ax_161 - 0x0005 < bx_168 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in 0x0001 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in bx_168 - 0x0001 : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_96: (in ax_161 - 0x0005 : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: int16
T_97: (in ax_161 - 0x0005 > bx_168 : bool)
  Class: Eq_97
  DataType: bool
  OrigDataType: bool
T_98: (in 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in bx_168 + 0x0001 : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_100: (in ax_138 : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_101: (in 0x023E : word16)
  Class: Eq_101
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_102 t0000)))
T_102: (in Mem64[ds:0x023E:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_103: (in 0x0242 : word16)
  Class: Eq_103
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_104 t0000)))
T_104: (in Mem64[ds:0x0242:word16] : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in Mem64[ds:0x023E:word16] + Mem64[ds:0x0242:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_106: (in 0x023E : word16)
  Class: Eq_106
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_107 t0000)))
T_107: (in Mem141[ds:0x023E:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_108: (in 0x0002 : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_109: (in ax_138 != 0x0002 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in 0x0248 : word16)
  Class: Eq_110
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_85 t0000)))
T_111: (in Mem64[ds:0x0248:word16] : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_112: (in 0x0001 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in ds->w0248 - 0x0001 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_114: (in Mem135[ds:0x0248:word16] : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_115: (in __inb : ptr32)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (fn T_117 (T_116)))
T_116: (in 0x03DA : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in __inb(0x03DA) : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in 0x08 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in 0x00 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_121: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_121
  DataType: bool
  OrigDataType: bool
T_122: (in __inb : ptr32)
  Class: Eq_122
  DataType: (ptr Eq_122)
  OrigDataType: (ptr (fn T_124 (T_123)))
T_123: (in 0x03DA : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in __inb(0x03DA) : byte)
  Class: Eq_124
  DataType: byte
  OrigDataType: byte
T_125: (in 0x08 : byte)
  Class: Eq_125
  DataType: byte
  OrigDataType: byte
T_126: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in 0x00 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_128: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_128
  DataType: bool
  OrigDataType: bool
T_129: (in fn0C00_0250 : ptr32)
  Class: Eq_129
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (fn T_141 (T_137, T_139, T_140, T_16, T_27)))
T_130: (in signature of fn0C00_0250 : void)
  Class: Eq_129
  DataType: (ptr Eq_129)
  OrigDataType: 
T_131: (in ax : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: uint16
T_132: (in bx : Eq_60)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: (memptr T_134 (struct (0 byte b0000)))
T_133: (in dl : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in es : (ptr Eq_16))
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (segment))
T_135: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (24E T_266 t024E)))
T_136: (in 0x0246 : word16)
  Class: Eq_136
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_137 t0000)))
T_137: (in Mem64[ds:0x0246:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_138: (in 0x0244 : word16)
  Class: Eq_138
  DataType: (memptr (ptr Eq_27) Eq_60)
  OrigDataType: (memptr T_27 (struct (0 T_139 t0000)))
T_139: (in Mem64[ds:0x0244:word16] : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_140: (in 0x12 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_141: (in fn0C00_0250(ds->t0246, ds->t0244, 0x12, 0xA000, ds) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_142: (in ax_85 : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_143: (in 0x023E : word16)
  Class: Eq_143
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_144 t0000)))
T_144: (in Mem64[ds:0x023E:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_145: (in 0x0246 : word16)
  Class: Eq_145
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_146 t0000)))
T_146: (in Mem86[ds:0x0246:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_147: (in bx_87 : Eq_60)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_148: (in 0x023C : word16)
  Class: Eq_148
  DataType: (memptr (ptr Eq_27) Eq_60)
  OrigDataType: (memptr T_27 (struct (0 T_149 t0000)))
T_149: (in Mem86[ds:0x023C:word16] : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_150: (in 0x0244 : word16)
  Class: Eq_150
  DataType: (memptr (ptr Eq_27) Eq_60)
  OrigDataType: (memptr T_27 (struct (0 T_151 t0000)))
T_151: (in Mem88[ds:0x0244:word16] : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_152: (in fn0C00_0250 : ptr32)
  Class: Eq_129
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (fn T_154 (T_142, T_147, T_153, T_16, T_27)))
T_153: (in 0x0E : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_154: (in fn0C00_0250(ax_85, bx_87, 0x0E, 0xA000, ds) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_155: (in fn0C00_0260 : ptr32)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: (ptr (fn T_166 (T_163, T_164, T_165, T_16, T_27)))
T_156: (in signature of fn0C00_0260 : void)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: 
T_157: (in ax : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_158: (in bx : Eq_60)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_159: (in dl : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_160: (in es : (ptr Eq_16))
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (segment))
T_161: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment))
T_162: (in 0x0236 : word16)
  Class: Eq_162
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_163 t0000)))
T_163: (in Mem88[ds:0x0236:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_164: (in 0x0001 : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: word16
T_165: (in 0x0A : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_166: (in fn0C00_0260(ds->t0236, 0x0001, 0x0A, 0xA000, ds) : void)
  Class: Eq_166
  DataType: void
  OrigDataType: void
T_167: (in fn0C00_0260 : ptr32)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: (ptr (fn T_172 (T_169, T_170, T_171, T_16, T_27)))
T_168: (in 0x0238 : word16)
  Class: Eq_168
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_169 t0000)))
T_169: (in Mem88[ds:0x0238:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_170: (in 0x013E : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: word16
T_171: (in 0x0C : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_172: (in fn0C00_0260(ds->t0238, 0x013E, 0x0C, 0xA000, ds) : void)
  Class: Eq_166
  DataType: void
  OrigDataType: void
T_173: (in dl_106 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_174: (in 0x0F : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_175: (in bx_102 : Eq_60)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_176: (in 0x0000 : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: word16
T_177: (in cx_105 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in 0x024A : word16)
  Class: Eq_178
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_179 t0000)))
T_179: (in Mem88[ds:0x024A:word16] : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_180: (in fn0C00_0250 : ptr32)
  Class: Eq_129
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (fn T_182 (T_181, T_175, T_173, T_16, T_27)))
T_181: (in 0x0000 : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_182: (in fn0C00_0250(0x0000, bx_102, dl_106, 0xA000, ds) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_183: (in 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in bx_102 + 0x0001 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in 0x0001 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in bx_102 + 0x0001 + 0x0001 : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_187: (in 0x0001 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in cx_105 - 0x0001 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_189: (in 0x0000 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_190: (in cx_105 != 0x0000 : bool)
  Class: Eq_190
  DataType: bool
  OrigDataType: bool
T_191: (in bx_116 : Eq_60)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_192: (in 0x013F : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: word16
T_193: (in cx_117 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in 0x024C : word16)
  Class: Eq_194
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_195 t0000)))
T_195: (in Mem88[ds:0x024C:word16] : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_196: (in bx_124 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in 0x0001 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in bx_116 - 0x0001 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_199: (in fn0C00_0250 : ptr32)
  Class: Eq_129
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (fn T_201 (T_200, T_191, T_173, T_16, T_27)))
T_200: (in 0x0000 : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_201: (in fn0C00_0250(0x0000, bx_116, dl_106, 0xA000, ds) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_202: (in 0x0001 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in bx_124 - 0x0001 : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_204: (in 0x0001 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in cx_117 - 0x0001 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_206: (in 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_207: (in cx_117 != 0x0000 : bool)
  Class: Eq_207
  DataType: bool
  OrigDataType: bool
T_208: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_208
  DataType: (ptr Eq_208)
  OrigDataType: (ptr (fn T_212 (T_211)))
T_209: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_208
  DataType: (ptr Eq_208)
  OrigDataType: 
T_210: (in alOut : ptr16)
  Class: Eq_210
  DataType: (ptr byte)
  OrigDataType: ptr16
T_211: (in out al_131 : ptr16)
  Class: Eq_210
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_212: (in bios_kbd_check_keystroke(out al_131) : byte)
  Class: Eq_212
  DataType: byte
  OrigDataType: byte
T_213: (in 0x0001 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_214: (in bx_124 == 0x0001 : bool)
  Class: Eq_214
  DataType: bool
  OrigDataType: bool
T_215: (in msdos_terminate_program20 : ptr32)
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: (ptr (fn T_217 ()))
T_216: (in signature of msdos_terminate_program20 : void)
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: 
T_217: (in msdos_terminate_program20() : void)
  Class: Eq_217
  DataType: void
  OrigDataType: void
T_218: (in 0x00C6 : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_219: (in ax_138 != 0x00C6 : bool)
  Class: Eq_219
  DataType: bool
  OrigDataType: bool
T_220: (in 0x0001 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_221: (in 0x0242 : word16)
  Class: Eq_221
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_222 t0000)))
T_222: (in Mem160[ds:0x0242:word16] : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_223: (in cx_147 : Eq_60)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_224: (in 0x023C : word16)
  Class: Eq_224
  DataType: (memptr (ptr Eq_27) Eq_60)
  OrigDataType: (memptr T_27 (struct (0 T_225 t0000)))
T_225: (in Mem141[ds:0x023C:word16] : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_226: (in 0x0240 : word16)
  Class: Eq_226
  DataType: (memptr (ptr Eq_27) int16)
  OrigDataType: (memptr T_27 (struct (0 T_227 t0000)))
T_227: (in Mem141[ds:0x0240:word16] : word16)
  Class: Eq_227
  DataType: int16
  OrigDataType: word16
T_228: (in Mem141[ds:0x023C:word16] + Mem141[ds:0x0240:word16] : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_229: (in 0x023C : word16)
  Class: Eq_229
  DataType: (memptr (ptr Eq_27) Eq_60)
  OrigDataType: (memptr T_27 (struct (0 T_230 t0000)))
T_230: (in Mem149[ds:0x023C:word16] : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_231: (in fn0C00_02AE : ptr32)
  Class: Eq_231
  DataType: (ptr Eq_231)
  OrigDataType: (ptr (fn T_239 (T_100, T_223, T_238, T_74, T_27)))
T_232: (in signature of fn0C00_02AE : void)
  Class: Eq_231
  DataType: (ptr Eq_231)
  OrigDataType: 
T_233: (in ax : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: int16
T_234: (in cx : Eq_60)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_235: (in dx : Eq_60)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_236: (in bx : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: int16
T_237: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (240 T_331 t0240)))
T_238: (in 0x0001 : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: word16
T_239: (in fn0C00_02AE(ax_138, cx_147, 0x0001, bx_63, ds) : void)
  Class: Eq_239
  DataType: void
  OrigDataType: void
T_240: (in fn0C00_02AE : ptr32)
  Class: Eq_231
  DataType: (ptr Eq_231)
  OrigDataType: (ptr (fn T_244 (T_100, T_223, T_241, T_243, T_27)))
T_241: (in 0x013E : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: word16
T_242: (in 0x0238 : word16)
  Class: Eq_242
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_27 (struct (0 T_243 t0000)))
T_243: (in Mem149[ds:0x0238:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_244: (in fn0C00_02AE(ax_138, cx_147, 0x013E, ds->t0238, ds) : void)
  Class: Eq_239
  DataType: void
  OrigDataType: void
T_245: (in 0x0000 : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: word16
T_246: (in cx_147 != 0x0000 : bool)
  Class: Eq_246
  DataType: bool
  OrigDataType: bool
T_247: (in 0xFFFF : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_248: (in 0x0242 : word16)
  Class: Eq_248
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_249 t0000)))
T_249: (in Mem159[ds:0x0242:word16] : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_250: (in 0x013F : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: word16
T_251: (in cx_147 != 0x013F : bool)
  Class: Eq_251
  DataType: bool
  OrigDataType: bool
T_252: (in fn0C00_0275 : ptr32)
  Class: Eq_252
  DataType: (ptr Eq_252)
  OrigDataType: (ptr (fn T_258 (T_100, T_257, T_27)))
T_253: (in signature of fn0C00_0275 : void)
  Class: Eq_252
  DataType: (ptr Eq_252)
  OrigDataType: 
T_254: (in ax : Eq_56)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_255: (in bx : (memptr (ptr Eq_27) int16))
  Class: Eq_255
  DataType: (memptr (ptr Eq_27) int16)
  OrigDataType: (memptr T_256 (struct (0 T_290 t0000)))
T_256: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (236 T_296 t0236) (23C T_308 t023C) (23E T_305 t023E) (248 T_311 t0248) (36D1 uint16 w36D1)))
T_257: (in 0x024C : word16)
  Class: Eq_255
  DataType: (memptr (ptr Eq_27) int16)
  OrigDataType: word16
T_258: (in fn0C00_0275(ax_138, &Eq_27::w024C, ds) : void)
  Class: Eq_258
  DataType: void
  OrigDataType: void
T_259: (in fn0C00_0275 : ptr32)
  Class: Eq_252
  DataType: (ptr Eq_252)
  OrigDataType: (ptr (fn T_261 (T_100, T_260, T_27)))
T_260: (in 0x024A : word16)
  Class: Eq_255
  DataType: (memptr (ptr Eq_27) int16)
  OrigDataType: word16
T_261: (in fn0C00_0275(ax_138, &Eq_27::w024A, ds) : void)
  Class: Eq_258
  DataType: void
  OrigDataType: void
T_262: (in dl_18 : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_263: (in dx : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in (byte) dx : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_265: (in 0x024E : word16)
  Class: Eq_265
  DataType: (memptr (ptr Eq_27) uint16)
  OrigDataType: (memptr T_135 (struct (0 T_266 t0000)))
T_266: (in Mem0[ds:0x024E:word16] : word16)
  Class: Eq_266
  DataType: uint16
  OrigDataType: uint16
T_267: (in ds->w024E *u ax : uint32)
  Class: Eq_267
  DataType: uint32
  OrigDataType: uint32
T_268: (in (word16) (ds->w024E *u ax) : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in bx + (word16) (ds->w024E *u ax) : word16)
  Class: Eq_269
  DataType: word16
  OrigDataType: word16
T_270: (in Mem20[es:bx + (word16) (ds->w024E *u ax):byte] : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_271: (in cx_14 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_272: (in 0x000A : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_273: (in fn0C00_0250 : ptr32)
  Class: Eq_129
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (fn T_274 (T_157, T_158, T_159, T_160, T_161)))
T_274: (in fn0C00_0250(ax, bx, dl, es, ds) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_275: (in 0x0001 : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_276: (in ax + 0x0001 : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_277: (in 0x0001 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in cx_14 - 0x0001 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_279: (in 0x0000 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_280: (in cx_14 != 0x0000 : bool)
  Class: Eq_280
  DataType: bool
  OrigDataType: bool
T_281: (in fn0C00_0250 : ptr32)
  Class: Eq_129
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (fn T_287 (T_283, T_158, T_286, T_160, T_161)))
T_282: (in 0x000B : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in ax - 0x000B : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_284: (in fn0C00_0250 : ptr32)
  Class: Eq_129
  DataType: (ptr Eq_129)
  OrigDataType: (ptr (fn T_286 (T_157, T_158, T_285, T_160, T_161)))
T_285: (in 0x12 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_286: (in fn0C00_0250(ax, bx, 0x12, es, ds) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_287: (in fn0C00_0250(ax - 0x000B, bx, fn0C00_0250(ax, bx, 0x12, es, ds), es, ds) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_288: (in 0x0000 : word16)
  Class: Eq_288
  DataType: word16
  OrigDataType: word16
T_289: (in bx + 0x0000 : word16)
  Class: Eq_289
  DataType: word16
  OrigDataType: word16
T_290: (in Mem0[ds:bx + 0x0000:word16] : word16)
  Class: Eq_290
  DataType: int16
  OrigDataType: int16
T_291: (in 0x0050 : word16)
  Class: Eq_290
  DataType: int16
  OrigDataType: int16
T_292: (in ds->*bx >= 0x0050 : bool)
  Class: Eq_292
  DataType: bool
  OrigDataType: bool
T_293: (in 0x36D1 : word16)
  Class: Eq_293
  DataType: (memptr (ptr Eq_27) uint16)
  OrigDataType: (memptr T_256 (struct (0 T_294 t0000)))
T_294: (in Mem0[ds:0x36D1:word16] : word16)
  Class: Eq_294
  DataType: uint16
  OrigDataType: uint16
T_295: (in 0x0236 : word16)
  Class: Eq_295
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_256 (struct (0 T_296 t0000)))
T_296: (in Mem0[ds:0x0236:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_297: (in ax + Mem0[ds:0x0236:word16] : word16)
  Class: Eq_297
  DataType: uint16
  OrigDataType: uint16
T_298: (in Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x0236:word16]) : uint32)
  Class: Eq_298
  DataType: uint32
  OrigDataType: uint32
T_299: (in (word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x0236:word16])) : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in 0x007F : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in (word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x0236:word16])) & 0x007F : word16)
  Class: Eq_301
  DataType: word16
  OrigDataType: word16
T_302: (in 0x0024 : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in ((word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x0236:word16])) & 0x007F) + 0x0024 : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_304: (in 0x023E : word16)
  Class: Eq_304
  DataType: (memptr (ptr Eq_27) Eq_56)
  OrigDataType: (memptr T_256 (struct (0 T_305 t0000)))
T_305: (in Mem17[ds:0x023E:word16] : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: word16
T_306: (in 0x00A0 : word16)
  Class: Eq_60
  DataType: int16
  OrigDataType: word16
T_307: (in 0x023C : word16)
  Class: Eq_307
  DataType: (memptr (ptr Eq_27) Eq_60)
  OrigDataType: (memptr T_256 (struct (0 T_308 t0000)))
T_308: (in Mem18[ds:0x023C:word16] : word16)
  Class: Eq_60
  DataType: Eq_60
  OrigDataType: word16
T_309: (in 0x001E : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_310: (in 0x0248 : word16)
  Class: Eq_310
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_256 (struct (0 T_311 t0000)))
T_311: (in Mem19[ds:0x0248:word16] : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_312: (in 0x0000 : word16)
  Class: Eq_312
  DataType: word16
  OrigDataType: word16
T_313: (in bx + 0x0000 : word16)
  Class: Eq_313
  DataType: word16
  OrigDataType: word16
T_314: (in Mem0[ds:bx + 0x0000:word16] : word16)
  Class: Eq_290
  DataType: int16
  OrigDataType: word16
T_315: (in 0x0001 : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_316: (in ds->*bx + 0x0001 : word16)
  Class: Eq_290
  DataType: int16
  OrigDataType: word16
T_317: (in 0x0000 : word16)
  Class: Eq_317
  DataType: word16
  OrigDataType: word16
T_318: (in bx + 0x0000 : word16)
  Class: Eq_318
  DataType: word16
  OrigDataType: word16
T_319: (in Mem21[ds:bx + 0x0000:word16] : word16)
  Class: Eq_290
  DataType: int16
  OrigDataType: word16
T_320: (in 0x0002 : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: int16
T_321: (in bx > 0x0002 : bool)
  Class: Eq_321
  DataType: bool
  OrigDataType: bool
T_322: (in true : bool)
  Class: Eq_322
  DataType: bool
  OrigDataType: bool
T_323: (in 0x0002 : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_324: (in 0x00BD : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: word16
T_325: (in cx != dx : bool)
  Class: Eq_325
  DataType: bool
  OrigDataType: bool
T_326: (in ax < bx : bool)
  Class: Eq_326
  DataType: bool
  OrigDataType: bool
T_327: (in 0x000A : word16)
  Class: Eq_327
  DataType: word16
  OrigDataType: word16
T_328: (in bx + 0x000A : word16)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: int16
T_329: (in ax >= bx.u0 : bool)
  Class: Eq_329
  DataType: bool
  OrigDataType: bool
T_330: (in 0x0240 : word16)
  Class: Eq_330
  DataType: (memptr (ptr Eq_27) int16)
  OrigDataType: (memptr T_237 (struct (0 T_331 t0000)))
T_331: (in Mem0[ds:0x0240:word16] : word16)
  Class: Eq_227
  DataType: int16
  OrigDataType: int16
T_332: (in -ds->w0240 : word16)
  Class: Eq_227
  DataType: int16
  OrigDataType: int16
T_333: (in Mem22[ds:0x0240:word16] : word16)
  Class: Eq_227
  DataType: int16
  OrigDataType: word16
*/
typedef Eq_16 Eq_1struct Globals {
	Eq_16 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_16 {
	byte b0000;	// 0
} Eq_16;

typedef Eq_56 Eq_27Eq_56 Eq_27Eq_60 Eq_27Eq_56 Eq_27Eq_60 Eq_27Eq_56 Eq_27struct Eq_27 {
	Eq_56 t0236;	// 236
	Eq_56 t0238;	// 238
	word16 w023A;	// 23A
	Eq_60 t023C;	// 23C
	Eq_56 t023E;	// 23E
	int16 w0240;	// 240
	word16 w0242;	// 242
	Eq_60 t0244;	// 244
	Eq_56 t0246;	// 246
	word16 w0248;	// 248
	word16 w024A;	// 24A
	word16 w024C;	// 24C
	uint16 w024E;	// 24E
	uint16 w36D1;	// 36D1
} Eq_27;

typedef void (Eq_30)(byte);

typedef union Eq_56 {
	int16 u0;
	uint16 u1;
} Eq_56;

typedef union Eq_60 {
	int16 u0;
	byte Eq_16::* u1;
} Eq_60;

typedef Eq_56 (Eq_68)(Eq_56);

typedef byte (Eq_115)(word16);

typedef byte (Eq_122)(word16);

typedef byte (Eq_129)(Eq_56, Eq_60, byte, Eq_16 *, Eq_27 *);

typedef void (Eq_155)(Eq_56, Eq_60, byte, Eq_16 *, Eq_27 *);

typedef byte (Eq_208)(byte *);

typedef void (Eq_215)();

typedef void (Eq_231)(Eq_56, Eq_60, Eq_60, Eq_56, Eq_27 *);

typedef void (Eq_252)(Eq_56, int16 Eq_27::*, Eq_27 *);

