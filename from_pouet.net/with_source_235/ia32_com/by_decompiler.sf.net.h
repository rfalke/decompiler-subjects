// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_235/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_224 (in bios_video_set_mode : ptr32)
Eq_7: (union "Eq_7" ((memptr (ptr Eq_10) Eq_276) u0) (Eq_278 u1))
	T_7 (in sp_1 : Eq_7)
	T_8 (in fp : ptr16)
	T_11 (in sp_26 : Eq_7)
	T_208 (in sp_1 - 0x0002 : word16)
Eq_9: (segment "Eq_9" (FFFFF780 (arr byte) aFFFFF780) (0 (arr Eq_273) a0000) (2 Eq_23 t0002) (13A Eq_23 t013A) (1F3 int16 w01F3) (1F5 int16 w01F5) (1F7 Eq_78 t01F7) (1F9 Eq_82 t01F9) (1FB int16 w01FB) (1FC byte b01FC) (1FD int16 w01FD) (F780 byte bF780))
	T_9 (in 0x0000 : word16)
	T_14 (in Mem53[ss:sp_26 + 0x0000:word16] : word16)
	T_22 (in es_29 : selector)
	T_54 (in 0x0140 : word16)
	T_57 (in Mem73[ss:sp_26 - 0x0002:word16] : word16)
	T_62 (in cx_81 : word16)
	T_64 (in Mem73[ss:sp_26 - 0x0002:word16] : word16)
	T_79 (in ds_34 : selector)
	T_94 (in cx_81 - 0x0001 : word16)
	T_95 (in 0x0000 : word16)
	T_159 (in es : (ptr Eq_9))
	T_171 (in Mem131[ss:sp_26 - 0x0002:word16] : word16)
	T_172 (in ds_132 : selector)
	T_174 (in Mem131[ss:sp_26 - 0x0002:selector] : selector)
	T_175 (in 0xA000 : word16)
	T_178 (in Mem135[ss:sp_26 - 0x0002:word16] : word16)
	T_179 (in es_136 : selector)
	T_181 (in Mem135[ss:sp_26 - 0x0002:selector] : selector)
	T_209 (in 0x8000 : word16)
	T_212 (in Mem27[ss:sp_26 + 0x0000:word16] : word16)
	T_215 (in Mem27[ss:sp_26 + 0x0000:selector] : selector)
	T_216 (in cs : selector)
	T_219 (in Mem33[ss:sp_26 + 0x0000:word16] : word16)
	T_222 (in Mem33[ss:sp_26 + 0x0000:selector] : selector)
Eq_10: (segment "Eq_10")
	T_10 (in ss : selector)
Eq_21: (union "Eq_21" (byte u0) (word16 u1))
	T_21 (in 0x14 : byte)
	T_26 (in Mem42[es_29:di + 0x0000:byte] : byte)
	T_195 (in Mem135[ds_132:si_140 + 0x0000:word16] : word16)
	T_198 (in Mem151[es_136:di + 0x0000:word16] : word16)
Eq_23: (struct "Eq_23" 0001 (0 Eq_21 t0000))
	T_23 (in di : (memptr (ptr Eq_9) Eq_23))
	T_28 (in di + 0x0001 : word16)
	T_158 (in di : (memptr (ptr Eq_9) Eq_23))
	T_162 (in 0x0002 : word16)
	T_167 (in 0x013A : word16)
	T_186 (in 0x0000 : word16)
	T_202 (in di + 0x0002 : word16)
Eq_37: (struct "Eq_37" (9E byte b009E) (13E byte b013E))
	T_37 (in di_57 : (memptr (ptr Eq_9) Eq_37))
	T_39 (in di_49 + 0x0001 : word16)
Eq_78: (union "Eq_78" (int16 u0) (cups16 u1))
	T_78 (in bx_94 : Eq_78)
	T_81 (in Mem73[ds_34:0x01F7:word16] : word16)
	T_108 (in 0x0136 : word16)
	T_110 (in 0x0006 : word16)
	T_117 (in bx_105 : Eq_78)
	T_120 (in bx_94 + Mem73[ds_34:0x01FB:word16] : word16)
	T_139 (in Mem120[ds_34:0x01F7:word16] : word16)
Eq_82: (union "Eq_82" (int16 u0) (cups16 u1))
	T_82 (in dx_95 : Eq_82)
	T_84 (in Mem73[ds_34:0x01F9:word16] : word16)
	T_85 (in 0x00C3 : word16)
	T_97 (in 0x0001 : word16)
	T_104 (in dx_99 : Eq_82)
	T_107 (in dx_95 + Mem73[ds_34:0x01FD:word16] : word16)
	T_141 (in Mem121[ds_34:0x01F9:word16] : word16)
	T_148 (in dx : Eq_82)
	T_249 (in Mem0[ss:bp + 0x0000:word16] : word16)
	T_252 (in dx - 0x000C : word16)
	T_255 (in Mem0[ss:bp + 0x0000:word16] : word16)
	T_259 (in Mem0[ss:bp + 0x0000:word16] : word16)
	T_261 (in Mem0[ss:bp + 0x0000:word16] - 0x0001 : word16)
	T_264 (in Mem13[ss:bp + 0x0000:word16] : word16)
	T_267 (in Mem0[ss:bp + 0x0000:word16] : word16)
	T_269 (in Mem0[ss:bp + 0x0000:word16] + 0x0001 : word16)
	T_272 (in Mem21[ss:bp + 0x0000:word16] : word16)
Eq_121: (struct "Eq_121" 0140 (0 word32 dw0000))
	T_121 (in di_109 : (memptr (ptr Eq_9) Eq_121))
	T_124 (in dx_99 *s 0x0140 + bx_105 : word16)
	T_133 (in di_109 + 0x0140 : word16)
Eq_146: (fn void (Eq_82, (memptr (ptr Eq_246) Eq_82)))
	T_146 (in fn0C00_01DD : ptr32)
	T_147 (in signature of fn0C00_01DD : void)
	T_152 (in fn0C00_01DD : ptr32)
Eq_155: (fn void (int16, (memptr (ptr Eq_9) Eq_23), (ptr Eq_9)))
	T_155 (in fn0C00_01C5 : ptr32)
	T_156 (in signature of fn0C00_01C5 : void)
	T_164 (in fn0C00_01C5 : ptr32)
	T_227 (in fn0C00_01C5 : ptr32)
Eq_187: (fn void (byte))
	T_187 (in __syscall : ptr32)
Eq_230: (struct "Eq_230" 0140 (0 word32 dw0000))
	T_230 (in di_12 : (memptr (ptr Eq_9) Eq_230))
	T_233 (in di + ax *s 0x0140 : word16)
	T_241 (in di_12 + 0x0140 : word16)
Eq_246: (segment "Eq_246" (1F3 Eq_82 t01F3) (1F5 Eq_82 t01F5))
	T_246 (in ss : selector)
Eq_273: (union "Eq_273" (byte u0) (Eq_21 u1))
	T_273
	T_275
Eq_276: (struct "Eq_276" (FFFFFFFE (ptr Eq_9) ptrFFFFFFFE) (0 (ptr Eq_9) ptr0000))
	T_276
Eq_277: (struct "Eq_277" (FFFFFFFE (ptr Eq_9) ptrFFFFFFFE) (0 (ptr Eq_9) ptr0000))
	T_277
Eq_278: (union "Eq_278" (ptr16 u0) ((memptr (ptr Eq_10) Eq_277) u1))
	T_278
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
T_7: (in sp_1 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (memptr T_10 (struct (FFFFFFFE T_22 tFFFFFFFE) (0 T_14 t0000)))
T_8: (in fp : ptr16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr16
T_9: (in 0x0000 : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_10: (in ss : selector)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (segment))
T_11: (in sp_26 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (memptr T_10 (struct "Eq_277" (FFFFFFFE (ptr Eq_9) ptrFFFFFFFE) (0 (ptr Eq_9) ptr0000)))
T_12: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in sp_26 + 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in Mem53[ss:sp_26 + 0x0000:word16] : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_15: (in cx_47 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in cx_36 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0xC8 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in DPB(cx_36, 0xC8, 0, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_19: (in di_49 : (memptr (ptr Eq_9) byte))
  Class: Eq_19
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_22 (struct 0001 (0 T_36 t0000)))
T_20: (in 0x0000 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_21: (in 0x14 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in es_29 : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (FFFFF780 (arr T_274) aFFFFF780) (0 (arr T_273) a0000)))
T_23: (in di : (memptr (ptr Eq_9) Eq_23))
  Class: Eq_23
  DataType: (memptr (ptr Eq_9) Eq_23)
  OrigDataType: (memptr T_22 (struct 0001 (0 T_21 t0000)))
T_24: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in di + 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in Mem42[es_29:di + 0x0000:byte] : byte)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: byte
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di + 0x0001 : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_9) Eq_23)
  OrigDataType: word16
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in cx_36 - 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_32: (in cx_36 == 0x0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in 0x0F : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in di_49 + 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in Mem56[es_29:di_49 + 0x0000:byte] : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_37: (in di_57 : (memptr (ptr Eq_9) Eq_37))
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: (memptr T_22 (struct (9E T_43 t009E) (13E T_47 t013E)))
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_49 + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_9) Eq_37)
  OrigDataType: word16
T_40: (in 0x0F : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0x009E : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di_57 + 0x009E : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem59[es_29:di_57 + 0x009E:byte] : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_44: (in 0x0F : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x013E : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di_57 + 0x013E : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem63[es_29:di_57 + 0x013E:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_48: (in 0x013F : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in di_57 + 0x013F : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in cx_47 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_53: (in cx_47 != 0x0000 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in 0x0140 : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_55: (in 0x0002 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in sp_26 - 0x0002 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem73[ss:sp_26 - 0x0002:word16] : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_58: (in di_67 : (memptr (ptr Eq_9) byte))
  Class: Eq_58
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_22 (struct 0001 (0 T_71 t0000)))
T_59: (in 0xF780 : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_60: (in cx_70 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0140 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_62: (in cx_81 : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_63: (in sp_26 - 0x0002 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem73[ss:sp_26 - 0x0002:word16] : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_65: (in di_84 : (memptr (ptr Eq_9) byte))
  Class: Eq_65
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_22 (struct 0001 (0 T_90 t0000)))
T_66: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in di_67 + 0x0000 : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_68: (in 0x0F : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in di_67 + 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in Mem77[es_29:di_67 + 0x0000:byte] : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_72: (in 0x0001 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in di_67 + 0x0001 : word16)
  Class: Eq_58
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_74: (in 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in cx_70 - 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_76: (in 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_77: (in cx_70 == 0x0000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in bx_94 : Eq_78)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: (union (int16 u0) (cups16 u1))
T_79: (in ds_34 : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (1F3 T_161 t01F3) (1F5 T_166 t01F5) (1F7 T_78 t01F7) (1F9 T_82 t01F9) (1FB T_113 t01FB) (1FC T_143 t01FC) (1FD T_100 t01FD)))
T_80: (in 0x01F7 : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_9) Eq_78)
  OrigDataType: (memptr T_79 (struct (0 T_81 t0000)))
T_81: (in Mem73[ds_34:0x01F7:word16] : word16)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: word16
T_82: (in dx_95 : Eq_82)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: (union (int16 u0) (cups16 u1))
T_83: (in 0x01F9 : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_9) Eq_82)
  OrigDataType: (memptr T_79 (struct (0 T_84 t0000)))
T_84: (in Mem73[ds_34:0x01F9:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_85: (in 0x00C3 : word16)
  Class: Eq_82
  DataType: cups16
  OrigDataType: cups16
T_86: (in dx_95 <u 0x00C3 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in 0x0F : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in 0x0000 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in di_84 + 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in Mem89[es_29:di_84 + 0x0000:byte] : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_91: (in 0x0001 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in di_84 + 0x0001 : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: word16
T_93: (in 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in cx_81 - 0x0001 : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_95: (in 0x0000 : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_96: (in cx_81 == 0x0000 : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in 0x0001 : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: int16
T_98: (in dx_95 > 0x0001 : bool)
  Class: Eq_98
  DataType: bool
  OrigDataType: bool
T_99: (in 0x01FD : word16)
  Class: Eq_99
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_79 (struct (0 T_100 t0000)))
T_100: (in Mem73[ds_34:0x01FD:word16] : word16)
  Class: Eq_100
  DataType: int16
  OrigDataType: int16
T_101: (in -ds_34->w01FD : word16)
  Class: Eq_100
  DataType: int16
  OrigDataType: int16
T_102: (in 0x01FD : word16)
  Class: Eq_102
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_79 (struct (0 T_103 t0000)))
T_103: (in Mem171[ds_34:0x01FD:word16] : word16)
  Class: Eq_100
  DataType: int16
  OrigDataType: word16
T_104: (in dx_99 : Eq_82)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: int16
T_105: (in 0x01FD : word16)
  Class: Eq_105
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_79 (struct (0 T_106 t0000)))
T_106: (in Mem73[ds_34:0x01FD:word16] : word16)
  Class: Eq_100
  DataType: int16
  OrigDataType: word16
T_107: (in dx_95 + Mem73[ds_34:0x01FD:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_108: (in 0x0136 : word16)
  Class: Eq_78
  DataType: cups16
  OrigDataType: cups16
T_109: (in bx_94 <u 0x0136 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in 0x0006 : word16)
  Class: Eq_78
  DataType: int16
  OrigDataType: int16
T_111: (in bx_94 > 0x0006 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in 0x01FB : word16)
  Class: Eq_112
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_79 (struct (0 T_113 t0000)))
T_113: (in Mem73[ds_34:0x01FB:word16] : word16)
  Class: Eq_113
  DataType: int16
  OrigDataType: int16
T_114: (in -ds_34->w01FB : word16)
  Class: Eq_113
  DataType: int16
  OrigDataType: int16
T_115: (in 0x01FB : word16)
  Class: Eq_115
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_79 (struct (0 T_116 t0000)))
T_116: (in Mem164[ds_34:0x01FB:word16] : word16)
  Class: Eq_113
  DataType: int16
  OrigDataType: word16
T_117: (in bx_105 : Eq_78)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: word16
T_118: (in 0x01FB : word16)
  Class: Eq_118
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_79 (struct (0 T_119 t0000)))
T_119: (in Mem73[ds_34:0x01FB:word16] : word16)
  Class: Eq_113
  DataType: int16
  OrigDataType: word16
T_120: (in bx_94 + Mem73[ds_34:0x01FB:word16] : word16)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: word16
T_121: (in di_109 : (memptr (ptr Eq_9) Eq_121))
  Class: Eq_121
  DataType: (memptr (ptr Eq_9) Eq_121)
  OrigDataType: (memptr T_22 (struct 0140 (0 T_131 t0000)))
T_122: (in 0x0140 : word16)
  Class: Eq_122
  DataType: int16
  OrigDataType: int16
T_123: (in dx_99 *s 0x0140 : int16)
  Class: Eq_123
  DataType: int16
  OrigDataType: int16
T_124: (in dx_99 *s 0x0140 + bx_105 : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_9) Eq_121)
  OrigDataType: word16
T_125: (in cx_112 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in 0x04 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in DPB(cx_81, 0x04, 0, 8) : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_128: (in 0x5C5C5C5C : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in 0x0000 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in di_109 + 0x0000 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in Mem115[es_29:di_109 + 0x0000:word32] : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_132: (in 0x0140 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in di_109 + 0x0140 : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_9) Eq_121)
  OrigDataType: word16
T_134: (in 0x0001 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in cx_112 - 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_136: (in 0x0000 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_137: (in cx_112 != 0x0000 : bool)
  Class: Eq_137
  DataType: bool
  OrigDataType: bool
T_138: (in 0x01F7 : word16)
  Class: Eq_138
  DataType: (memptr (ptr Eq_9) Eq_78)
  OrigDataType: (memptr T_79 (struct (0 T_139 t0000)))
T_139: (in Mem120[ds_34:0x01F7:word16] : word16)
  Class: Eq_78
  DataType: Eq_78
  OrigDataType: word16
T_140: (in 0x01F9 : word16)
  Class: Eq_140
  DataType: (memptr (ptr Eq_9) Eq_82)
  OrigDataType: (memptr T_79 (struct (0 T_141 t0000)))
T_141: (in Mem121[ds_34:0x01F9:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_142: (in 0x01FC : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_9) byte)
  OrigDataType: (memptr T_79 (struct (0 T_143 t0000)))
T_143: (in Mem121[ds_34:0x01FC:byte] : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in 0x00 : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_145: (in ds_34->b01FC == 0x00 : bool)
  Class: Eq_145
  DataType: bool
  OrigDataType: bool
T_146: (in fn0C00_01DD : ptr32)
  Class: Eq_146
  DataType: (ptr Eq_146)
  OrigDataType: (ptr (fn T_151 (T_104, T_150)))
T_147: (in signature of fn0C00_01DD : void)
  Class: Eq_146
  DataType: (ptr Eq_146)
  OrigDataType: 
T_148: (in dx : Eq_82)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: int16
T_149: (in bp : (memptr (ptr Eq_246) Eq_82))
  Class: Eq_149
  DataType: (memptr (ptr Eq_246) Eq_82)
  OrigDataType: (memptr T_246 (struct (0 T_82 t0000)))
T_150: (in 0x01F5 : word16)
  Class: Eq_149
  DataType: (memptr (ptr Eq_246) Eq_82)
  OrigDataType: word16
T_151: (in fn0C00_01DD(dx_99, &Eq_246::t01F5) : void)
  Class: Eq_151
  DataType: void
  OrigDataType: void
T_152: (in fn0C00_01DD : ptr32)
  Class: Eq_146
  DataType: (ptr Eq_146)
  OrigDataType: (ptr (fn T_154 (T_104, T_153)))
T_153: (in 0x01F3 : word16)
  Class: Eq_149
  DataType: (memptr (ptr Eq_246) Eq_82)
  OrigDataType: word16
T_154: (in fn0C00_01DD(dx_99, &Eq_246::t01F3) : void)
  Class: Eq_151
  DataType: void
  OrigDataType: void
T_155: (in fn0C00_01C5 : ptr32)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: (ptr (fn T_163 (T_161, T_162, T_22)))
T_156: (in signature of fn0C00_01C5 : void)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: 
T_157: (in ax : int16)
  Class: Eq_157
  DataType: int16
  OrigDataType: int16
T_158: (in di : (memptr (ptr Eq_9) Eq_23))
  Class: Eq_23
  DataType: (memptr (ptr Eq_9) Eq_23)
  OrigDataType: word16
T_159: (in es : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_160: (in 0x01F3 : word16)
  Class: Eq_160
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_79 (struct (0 T_161 t0000)))
T_161: (in Mem121[ds_34:0x01F3:word16] : word16)
  Class: Eq_157
  DataType: int16
  OrigDataType: word16
T_162: (in 0x0002 : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_9) Eq_23)
  OrigDataType: word16
T_163: (in fn0C00_01C5(ds_34->w01F3, &Eq_9::t0002, es_29) : void)
  Class: Eq_163
  DataType: void
  OrigDataType: void
T_164: (in fn0C00_01C5 : ptr32)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: (ptr (fn T_168 (T_166, T_167, T_22)))
T_165: (in 0x01F5 : word16)
  Class: Eq_165
  DataType: (memptr (ptr Eq_9) int16)
  OrigDataType: (memptr T_79 (struct (0 T_166 t0000)))
T_166: (in Mem121[ds_34:0x01F5:word16] : word16)
  Class: Eq_157
  DataType: int16
  OrigDataType: word16
T_167: (in 0x013A : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_9) Eq_23)
  OrigDataType: word16
T_168: (in fn0C00_01C5(ds_34->w01F5, &Eq_9::t013A, es_29) : void)
  Class: Eq_163
  DataType: void
  OrigDataType: void
T_169: (in 0x0002 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in sp_26 - 0x0002 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in Mem131[ss:sp_26 - 0x0002:word16] : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_172: (in ds_132 : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (0 (arr T_275) a0000)))
T_173: (in sp_26 - 0x0002 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in Mem131[ss:sp_26 - 0x0002:selector] : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_175: (in 0xA000 : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_176: (in 0x0002 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in sp_26 - 0x0002 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in Mem135[ss:sp_26 - 0x0002:word16] : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_179: (in es_136 : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_180: (in sp_26 - 0x0002 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in Mem135[ss:sp_26 - 0x0002:selector] : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_182: (in cx_138 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in 0x7D00 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_184: (in si_140 : (memptr (ptr Eq_9) Eq_21))
  Class: Eq_184
  DataType: (memptr (ptr Eq_9) Eq_21)
  OrigDataType: (memptr T_172 (struct 0002 (0 T_195 t0000)))
T_185: (in 0x0000 : word16)
  Class: Eq_184
  DataType: (memptr (ptr Eq_9) Eq_21)
  OrigDataType: word16
T_186: (in 0x0000 : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_9) Eq_23)
  OrigDataType: word16
T_187: (in __syscall : ptr32)
  Class: Eq_187
  DataType: (ptr Eq_187)
  OrigDataType: (ptr (fn T_189 (T_188)))
T_188: (in 0x16 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in __syscall(0x16) : void)
  Class: Eq_189
  DataType: void
  OrigDataType: void
T_190: (in 0x0000 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in 0x0000 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_192: (in 0x0000 == 0x0000 : bool)
  Class: Eq_192
  DataType: bool
  OrigDataType: bool
T_193: (in 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in si_140 + 0x0000 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in Mem135[ds_132:si_140 + 0x0000:word16] : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: word16
T_196: (in 0x0000 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in di + 0x0000 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in Mem151[es_136:di + 0x0000:word16] : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: word16
T_199: (in 0x0002 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in si_140 + 0x0002 : word16)
  Class: Eq_184
  DataType: (memptr (ptr Eq_9) Eq_21)
  OrigDataType: word16
T_201: (in 0x0002 : word16)
  Class: Eq_201
  DataType: word16
  OrigDataType: word16
T_202: (in di + 0x0002 : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_9) Eq_23)
  OrigDataType: word16
T_203: (in 0x0001 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in cx_138 - 0x0001 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_205: (in 0x0000 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_206: (in cx_138 == 0x0000 : bool)
  Class: Eq_206
  DataType: bool
  OrigDataType: bool
T_207: (in 0x0002 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in sp_1 - 0x0002 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_209: (in 0x8000 : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_210: (in 0x0000 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in sp_26 + 0x0000 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in Mem27[ss:sp_26 + 0x0000:word16] : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_213: (in 0x0000 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in sp_26 + 0x0000 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in Mem27[ss:sp_26 + 0x0000:selector] : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_216: (in cs : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_217: (in 0x0000 : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_218: (in sp_26 + 0x0000 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in Mem33[ss:sp_26 + 0x0000:word16] : word16)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: word16
T_220: (in 0x0000 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in sp_26 + 0x0000 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in Mem33[ss:sp_26 + 0x0000:selector] : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_223: (in 0xFFFF : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_224: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_226 (T_225)))
T_225: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_226: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_227: (in fn0C00_01C5 : ptr32)
  Class: Eq_155
  DataType: (ptr Eq_155)
  OrigDataType: (ptr (fn T_229 (T_228, T_23, T_179)))
T_228: (in 0x0003 : word16)
  Class: Eq_157
  DataType: int16
  OrigDataType: word16
T_229: (in fn0C00_01C5(0x0003, di, es_136) : void)
  Class: Eq_163
  DataType: void
  OrigDataType: void
T_230: (in di_12 : (memptr (ptr Eq_9) Eq_230))
  Class: Eq_230
  DataType: (memptr (ptr Eq_9) Eq_230)
  OrigDataType: (memptr T_159 (struct 0140 (0 T_239 t0000)))
T_231: (in 0x0140 : word16)
  Class: Eq_231
  DataType: int16
  OrigDataType: int16
T_232: (in ax *s 0x0140 : int16)
  Class: Eq_232
  DataType: int16
  OrigDataType: int16
T_233: (in di + ax *s 0x0140 : word16)
  Class: Eq_230
  DataType: (memptr (ptr Eq_9) Eq_230)
  OrigDataType: word16
T_234: (in cx_14 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in 0x0010 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_236: (in 0x51515151 : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_237: (in 0x0000 : word16)
  Class: Eq_237
  DataType: word16
  OrigDataType: word16
T_238: (in di_12 + 0x0000 : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in Mem10[es:di_12 + 0x0000:word32] : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_240: (in 0x0140 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in di_12 + 0x0140 : word16)
  Class: Eq_230
  DataType: (memptr (ptr Eq_9) Eq_230)
  OrigDataType: word16
T_242: (in 0x0001 : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in cx_14 - 0x0001 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_244: (in 0x0000 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_245: (in cx_14 != 0x0000 : bool)
  Class: Eq_245
  DataType: bool
  OrigDataType: bool
T_246: (in ss : selector)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: (ptr (segment))
T_247: (in 0x0000 : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in bp + 0x0000 : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in Mem0[ss:bp + 0x0000:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: int16
T_250: (in dx >= Mem0[ss:bp + 0x0000:word16] : bool)
  Class: Eq_250
  DataType: bool
  OrigDataType: bool
T_251: (in 0x000C : word16)
  Class: Eq_251
  DataType: word16
  OrigDataType: word16
T_252: (in dx - 0x000C : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: cups16
T_253: (in 0x0000 : word16)
  Class: Eq_253
  DataType: word16
  OrigDataType: word16
T_254: (in bp + 0x0000 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in Mem0[ss:bp + 0x0000:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: cups16
T_256: (in dx - 0x000C <=u Mem0[ss:bp + 0x0000:word16] : bool)
  Class: Eq_256
  DataType: bool
  OrigDataType: bool
T_257: (in 0x0000 : word16)
  Class: Eq_257
  DataType: word16
  OrigDataType: word16
T_258: (in bp + 0x0000 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in Mem0[ss:bp + 0x0000:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_260: (in 0x0001 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_261: (in Mem0[ss:bp + 0x0000:word16] - 0x0001 : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_262: (in 0x0000 : word16)
  Class: Eq_262
  DataType: word16
  OrigDataType: word16
T_263: (in bp + 0x0000 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in Mem13[ss:bp + 0x0000:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_265: (in 0x0000 : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in bp + 0x0000 : word16)
  Class: Eq_266
  DataType: word16
  OrigDataType: word16
T_267: (in Mem0[ss:bp + 0x0000:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_268: (in 0x0001 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in Mem0[ss:bp + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_270: (in 0x0000 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in bp + 0x0000 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_272: (in Mem21[ss:bp + 0x0000:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_273:
  Class: Eq_273
  DataType: Eq_273
  OrigDataType: (struct 0001 (0 T_36 t0000))
T_274:
  Class: Eq_274
  DataType: byte
  OrigDataType: (struct 0001 (0 T_71 t0000))
T_275:
  Class: Eq_273
  DataType: Eq_273
  OrigDataType: (struct 0002 (0 Eq_21 t0000))
T_276:
  Class: Eq_276
  DataType: Eq_276
  OrigDataType: 
T_277:
  Class: Eq_277
  DataType: Eq_277
  OrigDataType: 
T_278:
  Class: Eq_278
  DataType: Eq_278
  OrigDataType: 
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	Eq_276 Eq_10::* u0;
	Eq_278 u1;
} Eq_7;

typedef  Eq_9[]Eq_273[]Eq_23Eq_23Eq_78Eq_82struct Eq_9 {
	byte aFFFFF780[];	// FFFFF780
	Eq_273 a0000[];	// 0
	Eq_23 t0002;	// 2
	Eq_23 t013A;	// 13A
	int16 w01F3;	// 1F3
	int16 w01F5;	// 1F5
	Eq_78 t01F7;	// 1F7
	Eq_82 t01F9;	// 1F9
	int16 w01FB;	// 1FB
	byte b01FC;	// 1FC
	int16 w01FD;	// 1FD
	byte bF780;	// F780
} Eq_9;

typedef struct Eq_10 {
} Eq_10;

typedef union Eq_21 {
	byte u0;
	word16 u1;
} Eq_21;

typedef Eq_21 Eq_23struct Eq_23 {	// size: 1 1
	Eq_21 t0000;	// 0
} Eq_23;

typedef struct Eq_37 {
	byte b009E;	// 9E
	byte b013E;	// 13E
} Eq_37;

typedef union Eq_78 {
	int16 u0;
	cups16 u1;
} Eq_78;

typedef union Eq_82 {
	int16 u0;
	cups16 u1;
} Eq_82;

typedef struct Eq_121 {	// size: 320 140
	word32 dw0000;	// 0
} Eq_121;

typedef void (Eq_146)(Eq_82, Eq_82 Eq_246::*);

typedef void (Eq_155)(int16, Eq_23 Eq_9::*, Eq_9 *);

typedef void (Eq_187)(byte);

typedef struct Eq_230 {	// size: 320 140
	word32 dw0000;	// 0
} Eq_230;

typedef Eq_82 Eq_246Eq_82 Eq_246struct Eq_246 {
	Eq_82 t01F3;	// 1F3
	Eq_82 t01F5;	// 1F5
} Eq_246;

typedef union Eq_273 {
	byte u0;
	Eq_21 u1;
} Eq_273;

typedef Eq_9 Eq_276Eq_9 Eq_276struct Eq_276 {
	Eq_9 * ptrFFFFFFFE;	// FFFFFFFE
	Eq_9 * ptr0000;	// 0
} Eq_276;

typedef Eq_9 Eq_277Eq_9 Eq_277struct Eq_277 {
	Eq_9 * ptrFFFFFFFE;	// FFFFFFFE
	Eq_9 * ptr0000;	// 0
} Eq_277;

typedef union Eq_278 {
	ptr16 u0;
	Eq_277 Eq_10::* u1;
} Eq_278;

