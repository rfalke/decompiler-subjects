// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_119/ia32_com/subject.exe
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
T_7: (in ds_cx_10 : ptr32)
  Class: Eq_7
  DataType: ptr32
  OrigDataType: ptr32
T_8: (in ds : selector)
  Class: Eq_8
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_9: (in bx : word16)
  Class: Eq_9
  DataType: (memptr T_8 (struct 0001 (FFFFFEBF T_65 tFFFFFEBF) (0 T_7 t0000)))
  OrigDataType: (memptr T_8 (struct 0001 (FFFFFEBF T_65 tFFFFFEBF) (0 T_7 t0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_7
  DataType: segptr32
  OrigDataType: segptr32
T_13: (in al_17 : byte)
  Class: Eq_13
  DataType: uint8
  OrigDataType: uint8
T_14: (in 0x13 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in ds_11 : selector)
  Class: Eq_8
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_16: (in SLICE(ds_cx_10, selector, 16) : selector)
  Class: Eq_8
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_17: (in cx_12 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in (word16) ds_cx_10 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_19: (in cl_13 : byte)
  Class: Eq_19
  DataType: uint8
  OrigDataType: uint8
T_20: (in (byte) ds_cx_10 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_21: (in ax_22 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in cl_13 *u al_17 : uint16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: uint16
T_23: (in ah_23 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in SLICE(ax_22, byte, 8) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in __outb : ptr32)
  Class: Eq_25
  DataType: (ptr (fn T_27 (T_26, T_23)))
  OrigDataType: (ptr (fn T_27 (T_26, T_23)))
T_26: (in 0x03C9 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in __outb(0x03C9, ah_23) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in __outb : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_30 (T_29, T_23)))
  OrigDataType: (ptr (fn T_30 (T_29, T_23)))
T_29: (in 0x03C9 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in __outb(0x03C9, ah_23) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in ax_125 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in __shrd : ptr32)
  Class: Eq_32
  DataType: (ptr (fn T_35 (T_33, T_17, T_34)))
  OrigDataType: (ptr (fn T_35 (T_33, T_17, T_34)))
T_33: (in DPB(ax_22, ah_23, 0, 8) : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x12 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in __shrd(DPB(ax_22, ah_23, 0, 8), cx_12, 0x12) : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_36: (in (byte) ax_125 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_37: (in __outb : ptr32)
  Class: Eq_37
  DataType: (ptr (fn T_39 (T_38, T_13)))
  OrigDataType: (ptr (fn T_39 (T_38, T_13)))
T_38: (in 0x03C9 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in __outb(0x03C9, al_17) : void)
  Class: Eq_39
  DataType: void
  OrigDataType: void
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in cx_12 - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_42: (in C_107 : byte)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in cond(ax_22) : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_44: (in (byte) cx_12 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_45: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_46: (in cx_12 != 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in 0xFC : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in DPB(bx, 0xFC, 8, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_49: (in bl : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_50: (in 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in bx + 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in Mem59[ds_11:bx + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in bx + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_55: (in (byte) bx : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_56: (in 0xFFC0 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_57: (in bx != 0xFFC0 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in ax_71 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in ax_125 + 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_61: (in al_73 : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in (byte) ax_71 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in 0x0141 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in bx - 0x0141 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem59[ds_11:bx - 0x0141:byte] : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in (byte) ax_71 + Mem59[ds_11:bx - 0x0141:byte] : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in (byte) ax_71 + Mem59[ds_11:bx - 0x0141:byte] + C_107 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_68: (in al_77 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_69: (in __rcr : ptr32)
  Class: Eq_69
  DataType: (ptr (fn T_72 (T_61, T_70, T_71)))
  OrigDataType: (ptr (fn T_72 (T_61, T_70, T_71)))
T_70: (in 0x01 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in cond(al_73) : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in __rcr(al_73, 0x01, cond(al_73)) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_73: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in bx + 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in Mem82[ds_11:bx + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_76: (in DPB(ax_71, al_77, 0, 8) : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_77: (in 0x02 : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in al_73 & 0x02 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in 0x00 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_80: (in (al_73 & 0x02) != 0x00 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_81: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in bx - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_84: (in bx != 0x0000 : bool)
  Class: Eq_84
  DataType: bool
  OrigDataType: bool
T_85: (in cl_112 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_86: (in 0x48 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_87: (in 0x48 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in DPB(cx_12, 0x48, 0, 8) : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_89: (in cx_111 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in bx + 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem113[ds_11:bx + 0x0000:byte] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_93: (in 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in bx + 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in si : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in bx + 0x0000 + si : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_97: (in 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in cx_111 - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_99: (in (byte) bx : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_100: (in (byte) cx_111 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_101: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_102: (in cx_111 != 0x0000 : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in ax_124 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in ax_98 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in __inb : ptr32)
  Class: Eq_105
  DataType: (ptr (fn T_107 (T_106)))
  OrigDataType: (ptr (fn T_107 (T_106)))
T_106: (in 0x60 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in __inb(0x60) : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in DPB(ax_98, __inb(0x60), 0, 8) : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in cx_12 - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_111: (in 0x0001 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in ax_124 - 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_113: (in (byte) cx_12 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_114: (in 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_115: (in ax_124 != 0x0001 : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_117: (in cx_12 != 0x0000 : bool)
  Class: Eq_117
  DataType: bool
  OrigDataType: bool
T_118: (in ax_124 != 0x0001 && cx_12 != 0x0000 : bool)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_119: (in __rdtsc : ptr32)
  Class: Eq_119
  DataType: 
  OrigDataType: 
T_120: (in __rdtsc() : word64)
  Class: Eq_120
  DataType: 
  OrigDataType: 
T_121: (in (word16) __rdtsc() : word16)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_122: (in bx + ax_98 : word16)
  Class: Eq_122
  DataType: 
  OrigDataType: 
T_123: (in 0x0040 : word16)
  Class: Eq_123
  DataType: 
  OrigDataType: 
T_124: (in bx + ax_98 + 0x0040 : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_125: (in cond(bx) : byte)
  Class: Eq_42
  DataType: 
  OrigDataType: 
T_126: (in 0x0001 : word16)
  Class: Eq_103
  DataType: 
  OrigDataType: 
T_127: (in ax_124 != 0x0001 : bool)
  Class: Eq_127
  DataType: 
  OrigDataType: 
*/
