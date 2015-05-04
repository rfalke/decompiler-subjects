// subject.h
// Generated on 5/4/2015 12:03:53 AM by decompiling from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe
// using Decompiler version 0.4.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (40A0C8 word32 dw40A0C8) (40A10F ui32 dw40A10F) (40A113 ui32 dw40A113) (40A117 word32 dw40A117) (40A57C ptr32 ptr40A57C) (40A580 ptr32 ptr40A580) (40A5CC word32 dw40A5CC) (40BBF4 word32 dw40BBF4))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_9: (fn word32 (Eq_11))
	T_9 (in GetModuleHandleA : ptr32)
	T_10 (in signature of GetModuleHandleA : void)
	T_31 (in GetModuleHandleA : ptr32)
Eq_11: (union "Eq_11" (word32 u0) (LPCSTR u1))
	T_11 (in lpModuleName : LPCSTR)
	T_12 (in 0x00000000 : word32)
	T_32 (in 0x00000000 : word32)
Eq_14: (fn void ())
	T_14 (in fn00402134 : ptr32)
	T_15 (in signature of fn00402134 : void)
Eq_17: (fn void ())
	T_17 (in fn004014D0 : ptr32)
	T_18 (in signature of fn004014D0 : void)
Eq_20: (fn void ())
	T_20 (in fn00402138 : ptr32)
	T_21 (in signature of fn00402138 : void)
Eq_23: (fn void (word32, (ptr Eq_26), word32))
	T_23 (in fn00402D50 : ptr32)
	T_24 (in signature of fn00402D50 : void)
Eq_26: (segment "Eq_26" (2C (ptr word32) ptr002C))
	T_26 (in fs : (ptr Eq_26))
	T_28 (in fs : (ptr Eq_26))
	T_44 (in fs : (ptr Eq_26))
	T_46 (in fs : (ptr Eq_26))
	T_50 (in fs : (ptr Eq_26))
Eq_42: (fn void ((ptr Eq_26), word32))
	T_42 (in fn00402D9C : ptr32)
	T_43 (in signature of fn00402D9C : void)
	T_130 (in fn00402D9C : ptr32)
Eq_58: (struct "Eq_58" 0001 (0 Eq_71 t0000) (1 Eq_58 t0001) (4 Eq_58 t0004))
	T_58 (in edi_13 : (ptr Eq_58))
	T_59 (in dwArg04 : word32)
	T_78 (in edi_13 + 0x00000004 : word32)
	T_92 (in edi_13 + 0x00000001 : word32)
Eq_60: (struct "Eq_60" 0001 (0 Eq_71 t0000) (1 Eq_60 t0001) (4 Eq_60 t0004))
	T_60 (in esi_16 : (ptr Eq_60))
	T_61 (in dwArg08 : word32)
	T_76 (in esi_16 + 0x00000004 : word32)
	T_90 (in esi_16 + 0x00000001 : word32)
Eq_71: (union "Eq_71" (byte u0) (word32 u1))
	T_71 (in Mem0[esi_16 + 0x00000000:word32] : word32)
	T_74 (in Mem29[edi_13 + 0x00000000:word32] : word32)
	T_85 (in Mem0[esi_16 + 0x00000000:byte] : byte)
	T_88 (in Mem41[edi_13 + 0x00000000:byte] : byte)
Eq_115: (fn void (word32, word32, word32))
	T_115 (in fn0040213C : ptr32)
	T_116 (in signature of fn0040213C : void)
Eq_120: (fn word32 ((ptr Eq_26)))
	T_120 (in fn00401140 : ptr32)
	T_121 (in signature of fn00401140 : void)
	T_136 (in fn00401140 : ptr32)
Eq_125: (fn void ())
	T_125 (in fn00402BD8 : ptr32)
	T_126 (in signature of fn00402BD8 : void)
Eq_143: (struct "Eq_143" (0 word32 dw0000) (4 ptr32 ptr0004))
	T_143 (in dwArg04 : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in 0x0040A10F : ptr32)
  Class: Eq_2
  DataType: (ptr ui32)
  OrigDataType: (ptr (struct (0 T_3 t0000)))
T_3: (in Mem0[0x0040A10F:word32] : word32)
  Class: Eq_3
  DataType: ui32
  OrigDataType: word32
T_4: (in 0x00000002 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_5: (in globals->dw40A10F << 0x00000002 : word32)
  Class: Eq_5
  DataType: ui32
  OrigDataType: ui32
T_6: (in 0x0040A113 : ptr32)
  Class: Eq_6
  DataType: (ptr ui32)
  OrigDataType: (ptr (struct (0 T_7 t0000)))
T_7: (in Mem6[0x0040A113:word32] : word32)
  Class: Eq_5
  DataType: ui32
  OrigDataType: word32
T_8: (in eax_12 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in GetModuleHandleA : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_13 (T_12)))
T_10: (in signature of GetModuleHandleA : void)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: 
T_11: (in lpModuleName : LPCSTR)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: LPCSTR
T_12: (in 0x00000000 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_13: (in GetModuleHandleA(0x00000000) : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_14: (in fn00402134 : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_16 ()))
T_15: (in signature of fn00402134 : void)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: 
T_16: (in fn00402134() : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in fn004014D0 : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 ()))
T_18: (in signature of fn004014D0 : void)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: 
T_19: (in fn004014D0() : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in fn00402138 : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_22 ()))
T_21: (in signature of fn00402138 : void)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: 
T_22: (in fn00402138() : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in fn00402D50 : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_30 (T_8, T_28, T_29)))
T_24: (in signature of fn00402D50 : void)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: 
T_25: (in eax : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_26: (in fs : (ptr Eq_26))
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment))
T_27: (in dwArg04 : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_28: (in fs : (ptr Eq_26))
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment))
T_29: (in 0x00000000 : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_30: (in fn00402D50(eax_12, fs, 0x00000000) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in GetModuleHandleA : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_33 (T_32)))
T_32: (in 0x00000000 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_33: (in GetModuleHandleA(0x00000000) : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_34: (in 0x0040A117 : ptr32)
  Class: Eq_34
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_35 t0000)))
T_35: (in Mem28[0x0040A117:word32] : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_36: (in 0x0040A0C8 : word32)
  Class: Eq_36
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_37 t0000)))
T_37: (in Mem28[0x0040A0C8:word32] : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in 0x00000001 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in globals->dw40A0C8 & 0x00000001 : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in 0x0040BBF4 : ptr32)
  Class: Eq_40
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_41 t0000)))
T_41: (in Mem50[0x0040BBF4:word32] : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_42: (in fn00402D9C : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_48 (T_46, T_47)))
T_43: (in signature of fn00402D9C : void)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: 
T_44: (in fs : (ptr Eq_26))
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment))
T_45: (in dwArg04 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in fs : (ptr Eq_26))
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment))
T_47: (in dwArg00 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_48: (in fn00402D9C(fs, dwArg00) : void)
  Class: Eq_48
  DataType: void
  OrigDataType: void
T_49: (in eax : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in fs : (ptr Eq_26))
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment (2C (ptr word32) ptr002C)))
T_51: (in 0x002C : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_26) (ptr word32))
  OrigDataType: (memptr T_50 (struct (0 T_52 t0000)))
T_52: (in Mem0[fs:0x002C:word32] : word32)
  Class: Eq_52
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_57 t0000)))
T_53: (in 0x0040A10F : ptr32)
  Class: Eq_53
  DataType: (ptr ui32)
  OrigDataType: (ptr (struct (0 T_54 t0000)))
T_54: (in Mem0[0x0040A10F:word32] : word32)
  Class: Eq_3
  DataType: ui32
  OrigDataType: ui32
T_55: (in 0x00000004 : word32)
  Class: Eq_55
  DataType: ui32
  OrigDataType: ui32
T_56: (in globals->dw40A10F * 0x00000004 : word32)
  Class: Eq_56
  DataType: ui32
  OrigDataType: ui32
T_57: (in Mem0[fs:0x002C:word32][Mem0[0x0040A10F:word32] * 0x00000004] : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in edi_13 : (ptr Eq_58))
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (struct 0001 (0 T_71 t0000)))
T_59: (in dwArg04 : word32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: word32
T_60: (in esi_16 : (ptr Eq_60))
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (struct 0001 (0 T_71 t0000)))
T_61: (in dwArg08 : word32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: word32
T_62: (in ecx_21 : uint32)
  Class: Eq_62
  DataType: uint32
  OrigDataType: word32
T_63: (in dwArg0C : word32)
  Class: Eq_63
  DataType: uint32
  OrigDataType: uint32
T_64: (in 0x00000002 : word32)
  Class: Eq_64
  DataType: uint32
  OrigDataType: uint32
T_65: (in dwArg0C >>u 0x00000002 : word32)
  Class: Eq_62
  DataType: uint32
  OrigDataType: uint32
T_66: (in ecx_34 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_67: (in 0x00000003 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in dwArg0C & 0x00000003 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_69: (in 0x00000000 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in esi_16 + 0x00000000 : word32)
  Class: Eq_70
  DataType: word32
  OrigDataType: word32
T_71: (in Mem0[esi_16 + 0x00000000:word32] : word32)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word32
T_72: (in 0x00000000 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in edi_13 + 0x00000000 : word32)
  Class: Eq_73
  DataType: word32
  OrigDataType: word32
T_74: (in Mem29[edi_13 + 0x00000000:word32] : word32)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: word32
T_75: (in 0x00000004 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in esi_16 + 0x00000004 : word32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: word32
T_77: (in 0x00000004 : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_78: (in edi_13 + 0x00000004 : word32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: word32
T_79: (in 0x00000001 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in ecx_21 - 0x00000001 : word32)
  Class: Eq_62
  DataType: uint32
  OrigDataType: word32
T_81: (in 0x00000000 : word32)
  Class: Eq_62
  DataType: uint32
  OrigDataType: word32
T_82: (in ecx_21 == 0x00000000 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in 0x00000000 : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in esi_16 + 0x00000000 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in Mem0[esi_16 + 0x00000000:byte] : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_86: (in 0x00000000 : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_87: (in edi_13 + 0x00000000 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in Mem41[edi_13 + 0x00000000:byte] : byte)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: byte
T_89: (in 0x00000001 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in esi_16 + 0x00000001 : word32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: word32
T_91: (in 0x00000001 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in edi_13 + 0x00000001 : word32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: word32
T_93: (in 0x00000001 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in ecx_34 - 0x00000001 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_95: (in 0x00000000 : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_96: (in ecx_34 == 0x00000000 : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in 0x0040A57C : ptr32)
  Class: Eq_97
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_98 t0000)))
T_98: (in Mem0[0x0040A57C:word32] : word32)
  Class: Eq_98
  DataType: ptr32
  OrigDataType: word32
T_99: (in 0x00000000 : word32)
  Class: Eq_98
  DataType: ptr32
  OrigDataType: word32
T_100: (in globals->ptr40A57C != 0x00000000 : bool)
  Class: Eq_100
  DataType: bool
  OrigDataType: bool
T_101: (in 0x0040A580 : ptr32)
  Class: Eq_101
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_102 t0000)))
T_102: (in Mem0[0x0040A580:word32] : word32)
  Class: Eq_102
  DataType: ptr32
  OrigDataType: word32
T_103: (in 0x00000000 : word32)
  Class: Eq_102
  DataType: ptr32
  OrigDataType: word32
T_104: (in globals->ptr40A580 != 0x00000000 : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in 0x00402C00 : ptr32)
  Class: Eq_98
  DataType: ptr32
  OrigDataType: ptr32
T_106: (in 0x0040A57C : ptr32)
  Class: Eq_106
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_107 t0000)))
T_107: (in Mem8[0x0040A57C:word32] : word32)
  Class: Eq_98
  DataType: ptr32
  OrigDataType: word32
T_108: (in 0x00402C50 : ptr32)
  Class: Eq_102
  DataType: ptr32
  OrigDataType: ptr32
T_109: (in 0x0040A580 : ptr32)
  Class: Eq_109
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_110 t0000)))
T_110: (in Mem7[0x0040A580:word32] : word32)
  Class: Eq_102
  DataType: ptr32
  OrigDataType: word32
T_111: (in ebx_11 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in dwArg04 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_113: (in 0x00000000 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_114: (in dwArg04 != 0x00000000 : bool)
  Class: Eq_114
  DataType: bool
  OrigDataType: bool
T_115: (in fn0040213C : ptr32)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (fn T_124 (T_122, T_111, T_123)))
T_116: (in signature of fn0040213C : void)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: 
T_117: (in dwArg04 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in dwArg08 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_119: (in dwArg0C : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in fn00401140 : ptr32)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: (ptr (fn T_122 (T_26)))
T_121: (in signature of fn00401140 : void)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: 
T_122: (in fn00401140(fs) : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_123: (in 0x0000009C : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_124: (in fn0040213C(fn00401140(fs), ebx_11, 0x0000009C) : void)
  Class: Eq_124
  DataType: void
  OrigDataType: void
T_125: (in fn00402BD8 : ptr32)
  Class: Eq_125
  DataType: (ptr Eq_125)
  OrigDataType: (ptr (fn T_127 ()))
T_126: (in signature of fn00402BD8 : void)
  Class: Eq_125
  DataType: (ptr Eq_125)
  OrigDataType: 
T_127: (in fn00402BD8() : void)
  Class: Eq_127
  DataType: void
  OrigDataType: void
T_128: (in 0x00000000 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_129: (in dwArg04 != 0x00000000 : bool)
  Class: Eq_129
  DataType: bool
  OrigDataType: bool
T_130: (in fn00402D9C : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_134 (T_26, T_133)))
T_131: (in fp : ptr32)
  Class: Eq_131
  DataType: ptr32
  OrigDataType: ptr32
T_132: (in 0x0000000C : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in fp - 0x0000000C : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_134: (in fn00402D9C(fs, fp - 0x0000000C) : void)
  Class: Eq_48
  DataType: void
  OrigDataType: void
T_135: (in dwLoc08 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_136: (in fn00401140 : ptr32)
  Class: Eq_120
  DataType: (ptr Eq_120)
  OrigDataType: (ptr (fn T_137 (T_44)))
T_137: (in fn00401140(fs) : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_138: (in 0x0000001C : word32)
  Class: Eq_138
  DataType: word32
  OrigDataType: word32
T_139: (in fn00401140(fs) + 0x0000001C : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in 0x0040A5CC : ptr32)
  Class: Eq_140
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_141 t0000)))
T_141: (in Mem15[0x0040A5CC:word32] : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_142: (in 0x82727349 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in dwArg04 : word32)
  Class: Eq_143
  DataType: (ptr Eq_143)
  OrigDataType: (ptr (struct (0 T_146 t0000) (4 T_150 t0004)))
T_144: (in 0x00000000 : word32)
  Class: Eq_144
  DataType: word32
  OrigDataType: word32
T_145: (in dwArg04 + 0x00000000 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in Mem16[dwArg04 + 0x00000000:word32] : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_147: (in 0x0040A5B8 : ptr32)
  Class: Eq_147
  DataType: ptr32
  OrigDataType: ptr32
T_148: (in 0x00000004 : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in dwArg04 + 0x00000004 : word32)
  Class: Eq_149
  DataType: word32
  OrigDataType: word32
T_150: (in Mem17[dwArg04 + 0x00000004:word32] : word32)
  Class: Eq_147
  DataType: ptr32
  OrigDataType: word32
*/
typedef struct Globals {
	word32 dw40A0C8;	// 40A0C8
	ui32 dw40A10F;	// 40A10F
	ui32 dw40A113;	// 40A113
	word32 dw40A117;	// 40A117
	ptr32 ptr40A57C;	// 40A57C
	ptr32 ptr40A580;	// 40A580
	word32 dw40A5CC;	// 40A5CC
	word32 dw40BBF4;	// 40BBF4
} Eq_1;

typedef word32 (Eq_9)(Eq_11);

typedef union Eq_11 {
	word32 u0;
	 LPCSTR u1;
} Eq_11;

typedef void (Eq_14)();

typedef void (Eq_17)();

typedef void (Eq_20)();

typedef void (Eq_23)(word32, Eq_26 *, word32);

typedef struct Eq_26 {
	word32 * ptr002C;	// 2C
} Eq_26;

typedef void (Eq_42)(Eq_26 *, word32);

typedef Eq_71 Eq_58Eq_58 Eq_58Eq_58 Eq_58struct Eq_58 {	// size: 1 1
	Eq_71 t0000;	// 0
	Eq_58 t0001;	// 1
	Eq_58 t0004;	// 4
} Eq_58;

typedef Eq_71 Eq_60Eq_60 Eq_60Eq_60 Eq_60struct Eq_60 {	// size: 1 1
	Eq_71 t0000;	// 0
	Eq_60 t0001;	// 1
	Eq_60 t0004;	// 4
} Eq_60;

typedef union Eq_71 {
	byte u0;
	word32 u1;
} Eq_71;

typedef void (Eq_115)(word32, word32, word32);

typedef word32 (Eq_120)(Eq_26 *);

typedef void (Eq_125)();

typedef struct Eq_143 {
	word32 dw0000;	// 0
	ptr32 ptr0004;	// 4
} Eq_143;

