// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_118/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_6 (T_5)))
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: 
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
T_7: (in sp_1 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in fp : ptr16)
  Class: Eq_7
  DataType: ptr16
  OrigDataType: ptr16
T_9: (in ds_11 : selector)
  Class: Eq_9
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_10: (in ds : selector)
  Class: Eq_10
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_11: (in bx : word16)
  Class: Eq_11
  DataType: (memptr T_10 (struct 0001 (0 T_14 t0000)))
  OrigDataType: (memptr T_10 (struct 0001 (0 T_14 t0000)))
T_12: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in bx + 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_14
  DataType: segptr32
  OrigDataType: segptr32
T_15: (in SLICE(Mem0[ds:bx + 0x0000:segptr32], selector, 16) : selector)
  Class: Eq_9
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_16: (in sp_58 : word16)
  Class: Eq_7
  DataType: (memptr T_20 (struct (FFFFFFF1 T_78 tFFFFFFF1) (FFFFFFF2 T_49 tFFFFFFF2) (FFFFFFF3 T_74 tFFFFFFF3) (FFFFFFF4 T_45 tFFFFFFF4) (FFFFFFF5 T_66 tFFFFFFF5) (FFFFFFF6 T_39 tFFFFFFF6) (FFFFFFF7 T_62 tFFFFFFF7) (FFFFFFF8 T_38 tFFFFFFF8) (FFFFFFFA T_11 tFFFFFFFA) (FFFFFFFC T_28 tFFFFFFFC) (FFFFFFFE T_24 tFFFFFFFE) (0 T_19 t0000)))
  OrigDataType: (memptr T_20 (struct (FFFFFFF1 T_78 tFFFFFFF1) (FFFFFFF2 T_49 tFFFFFFF2) (FFFFFFF3 T_74 tFFFFFFF3) (FFFFFFF4 T_45 tFFFFFFF4) (FFFFFFF5 T_66 tFFFFFFF5) (FFFFFFF6 T_39 tFFFFFFF6) (FFFFFFF7 T_62 tFFFFFFF7) (FFFFFFF8 T_38 tFFFFFFF8) (FFFFFFFA T_11 tFFFFFFFA) (FFFFFFFC T_28 tFFFFFFFC) (FFFFFFFE T_24 tFFFFFFFE) (0 T_19 t0000)))
T_17: (in 0x0002 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in sp_1 - 0x0002 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_19: (in ax_116 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in ss : selector)
  Class: Eq_20
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_21: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in sp_58 + 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in Mem59[ss:sp_58 + 0x0000:word16] : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_24: (in cx : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0002 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in sp_58 - 0x0002 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in Mem62[ss:sp_58 - 0x0002:word16] : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_28: (in dx : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0004 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in sp_58 - 0x0004 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem64[ss:sp_58 - 0x0004:word16] : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0006 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in sp_58 - 0x0006 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem66[ss:sp_58 - 0x0006:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0008 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in sp_58 - 0x0008 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in sp_58 - 0x0008 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem68[ss:sp_58 - 0x0008:word16] : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_39: (in bp_57 : word16)
  Class: Eq_39
  DataType: int16
  OrigDataType: int16
T_40: (in bp_105 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_41: (in bp_105 + ax_116 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_42: (in 0x000A : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in sp_58 - 0x000A : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem70[ss:sp_58 - 0x000A:word16] : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_45: (in si : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 0x000C : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in sp_58 - 0x000C : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem72[ss:sp_58 - 0x000C:word16] : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_49: (in di_56 : word16)
  Class: Eq_49
  DataType: int16
  OrigDataType: int16
T_50: (in di_101 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_51: (in di_101 + dx : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_52: (in 0x000E : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in sp_58 - 0x000E : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem74[ss:sp_58 - 0x000E:word16] : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_55: (in dx_ax_77 : int32)
  Class: Eq_55
  DataType: int32
  OrigDataType: int32
T_56: (in 0x0002 : word16)
  Class: Eq_56
  DataType: int16
  OrigDataType: int16
T_57: (in di_56 *s 0x0002 : int16)
  Class: Eq_57
  DataType: int16
  OrigDataType: int16
T_58: (in bp_57 *s (di_56 *s 0x0002) : int32)
  Class: Eq_55
  DataType: int32
  OrigDataType: int32
T_59: (in SLICE(dx_ax_77, word16, 16) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in 0x0009 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in sp_58 - 0x0009 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in Mem81[ss:sp_58 - 0x0009:word16] : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_63: (in (word16) dx_ax_77 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in 0x000B : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in sp_58 - 0x000B : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in Mem83[ss:sp_58 - 0x000B:word16] : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_67: (in dx_ax_86 : int32)
  Class: Eq_67
  DataType: int32
  OrigDataType: int32
T_68: (in di_56 - bp_57 : word16)
  Class: Eq_68
  DataType: int16
  OrigDataType: int16
T_69: (in bp_57 + di_56 : word16)
  Class: Eq_69
  DataType: int16
  OrigDataType: int16
T_70: (in (di_56 - bp_57) *s (bp_57 + di_56) : int32)
  Class: Eq_67
  DataType: int32
  OrigDataType: int32
T_71: (in SLICE(dx_ax_86, word16, 16) : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in 0x000D : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in sp_58 - 0x000D : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem90[ss:sp_58 - 0x000D:word16] : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_75: (in (word16) dx_ax_86 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in 0x000F : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in sp_58 - 0x000F : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in Mem92[ss:sp_58 - 0x000F:word16] : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_79: (in 0x0006 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in sp_58 - 0x0006 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in Mem92[ss:sp_58 - 0x0006:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_82: (in cx_114 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0002 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in sp_58 - 0x0002 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in Mem92[ss:sp_58 - 0x0002:word16] : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_86: (in 0x000E : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in sp_58 - 0x000E : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in Mem92[ss:sp_58 - 0x000E:word16] : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_89: (in 0x000C : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in sp_58 - 0x000C : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in Mem92[ss:sp_58 - 0x000C:word16] : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_92: (in 0x000A : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in sp_58 - 0x000A : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in Mem92[ss:sp_58 - 0x000A:word16] : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_95: (in (byte) bx : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in bl : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_97: (in 0x0004 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in sp_58 - 0x0004 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in Mem92[ss:sp_58 - 0x0004:word16] : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_100: (in 0x0000 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in sp_58 + 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in Mem92[ss:sp_58 + 0x0000:word16] : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_103: (in 0x0002 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in sp_58 + 0x0002 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_105: (in 0x0001 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in cx_114 - 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_107: (in cl_123 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in cx_114 - 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in (byte) (cx_114 - 0x0001) : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_110: (in bl_139 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_111: (in bp_57 *s bp_57 : int32)
  Class: Eq_111
  DataType: int32
  OrigDataType: int32
T_112: (in SLICE(bp_57 *s bp_57, byte, 24) : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in SLICE(bp_57 *s bp_57, byte, 24) & bl_139 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in 0x00 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_115: (in (SLICE(bp_57 *s bp_57, byte, 24) & bl_139) == 0x00 : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_117: (in cx_114 != 0x0001 : bool)
  Class: Eq_117
  DataType: bool
  OrigDataType: bool
T_118: (in (SLICE(bp_57 *s bp_57, byte, 24) & bl_139) == 0x00 && cx_114 != 0x0001 : bool)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_119: (in 0x0000 : word16)
  Class: Eq_119
  DataType: 
  OrigDataType: 
T_120: (in bx + 0x0000 : word16)
  Class: Eq_120
  DataType: 
  OrigDataType: 
T_121: (in Mem124[ds_11:bx + 0x0000:byte] : byte)
  Class: Eq_107
  DataType: 
  OrigDataType: 
T_122: (in 0x0001 : word16)
  Class: Eq_122
  DataType: 
  OrigDataType: 
T_123: (in bx - 0x0001 : word16)
  Class: Eq_11
  DataType: 
  OrigDataType: 
T_124: (in bx - 0x0001 : word16)
  Class: Eq_124
  DataType: 
  OrigDataType: 
T_125: (in (byte) (bx - 0x0001) : byte)
  Class: Eq_95
  DataType: 
  OrigDataType: 
T_126: (in 0x0001 : word16)
  Class: Eq_11
  DataType: 
  OrigDataType: 
T_127: (in bx != 0x0001 : bool)
  Class: Eq_127
  DataType: 
  OrigDataType: 
T_128: (in dx_ax_33 : int32)
  Class: Eq_128
  DataType: 
  OrigDataType: 
T_129: (in SEQ(dx, bx) : int32)
  Class: Eq_128
  DataType: 
  OrigDataType: 
T_130: (in dx_ax_35 : int32)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_131: (in 0x0140 : word16)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_132: (in dx_ax_33 % 0x0140 : int16)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_133: (in SEQ(dx_ax_33 % 0x0140, bx) : int32)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_134: (in dx_ax_33 % 0x0140 : int16)
  Class: Eq_28
  DataType: 
  OrigDataType: 
T_135: (in 0x0140 : word16)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_136: (in dx_ax_35 / 0x0140 : int16)
  Class: Eq_19
  DataType: 
  OrigDataType: 
T_137: (in 0x22 : byte)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_138: (in DPB(cx, 0x22, 0, 8) : word16)
  Class: Eq_24
  DataType: 
  OrigDataType: 
T_139: (in dx_ax_35 / 0x0140 : int16)
  Class: Eq_39
  DataType: 
  OrigDataType: 
T_140: (in 0x0140 : word16)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_141: (in sp_1 + 0x0140 : word16)
  Class: Eq_49
  DataType: 
  OrigDataType: 
T_142: (in ax_130 : word16)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_143: (in __inb : ptr32)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_144: (in 0x60 : byte)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_145: (in __inb(0x60) : byte)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_146: (in DPB(ax_116, __inb(0x60), 0, 8) : word16)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_147: (in 0x0001 : word16)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_148: (in ax_130 - 0x0001 : word16)
  Class: Eq_148
  DataType: 
  OrigDataType: 
T_149: (in 0x0000 : word16)
  Class: Eq_149
  DataType: 
  OrigDataType: 
T_150: (in sp_58 + 0x0000 : word16)
  Class: Eq_150
  DataType: 
  OrigDataType: 
T_151: (in Mem138[ss:sp_58 + 0x0000:word16] : word16)
  Class: Eq_148
  DataType: 
  OrigDataType: 
T_152: (in 0x0001 : word16)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_153: (in ax_130 != 0x0001 : bool)
  Class: Eq_153
  DataType: 
  OrigDataType: 
*/
