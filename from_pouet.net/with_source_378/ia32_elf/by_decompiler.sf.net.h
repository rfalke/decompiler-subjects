// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_378/ia32_elf/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in ebp : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in esp_111 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_4: (in fp : ptr32)
  Class: Eq_4
  DataType: ptr32
  OrigDataType: ptr32
T_5: (in 0x00000020 : word32)
  Class: Eq_5
  DataType: word32
  OrigDataType: word32
T_6: (in fp - 0x00000020 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_7: (in esi_26 : word32)
  Class: Eq_7
  DataType: (ptr (struct 0002 (0 T_15 t0000)))
  OrigDataType: (ptr (struct 0002 (0 T_15 t0000)))
T_8: (in 0x0804A6B8 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_9: (in edi_27 : word32)
  Class: Eq_9
  DataType: (ptr (struct 0002 (0 T_20 t0000)))
  OrigDataType: (ptr (struct 0002 (0 T_20 t0000)))
T_10: (in 0x0804A6A0 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_11: (in ecx_28 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in 0x0000003C : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_13: (in 0x00000000 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in esi_26 + 0x00000000 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in Mem0[esi_26 + 0x00000000:word16] : word16)
  Class: Eq_15
  DataType: uint16
  OrigDataType: uint16
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: uint16
  OrigDataType: uint16
T_17: (in Mem0[esi_26 + 0x00000000:word16] >>u 0x0001 : word16)
  Class: Eq_17
  DataType: uint16
  OrigDataType: uint16
T_18: (in 0x00000000 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in edi_27 + 0x00000000 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in Mem37[edi_27 + 0x00000000:word16] : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_21: (in 0x00000002 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in esi_26 - 0x00000002 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_23: (in 0x00000002 : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in edi_27 - 0x00000002 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_25: (in 0x00000001 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in ecx_28 - 0x00000001 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_27: (in 0x00000000 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_28: (in ecx_28 != 0x00000000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in edi_41 : word32)
  Class: Eq_29
  DataType: (ptr (struct 0004 (0 T_38 t0000) (3FFFC T_89 t3FFFC) (7FFFC T_57 t7FFFC) (BFFFC T_67 tBFFFC)))
  OrigDataType: (ptr (struct 0004 (0 T_38 t0000) (3FFFC T_89 t3FFFC) (7FFFC T_57 t7FFFC) (BFFFC T_67 tBFFFC)))
T_30: (in 0x0804AB70 : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_31: (in ebx_104 : word32)
  Class: Eq_31
  DataType: ui32
  OrigDataType: ui32
T_32: (in 0x00000000 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_33: (in ecx_106 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_34: (in 0x00010000 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_35: (in eax_134 : word32)
  Class: Eq_35
  DataType: int32
  OrigDataType: int32
T_36: (in 0x00000000 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in edi_41 + 0x00000000 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in Mem74[edi_41 + 0x00000000:word32] : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_39: (in edx_81 : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in (int64) ebx_104 : int64)
  Class: Eq_40
  DataType: int64
  OrigDataType: int64
T_41: (in 0x000000A8 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in (int64) ebx_104 % 0x000000A8 : uint32)
  Class: Eq_42
  DataType: uint32
  OrigDataType: uint32
T_43: (in 0x00000010 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in (int64) ebx_104 % 0x000000A8 << 0x00000010 : word32)
  Class: Eq_39
  DataType: ui32
  OrigDataType: ui32
T_45: (in 0x00000004 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in edi_41 + 0x00000004 : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_47: (in (int64) edx_81 : int64)
  Class: Eq_47
  DataType: int64
  OrigDataType: int64
T_48: (in 0x000000A8 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in (int64) edx_81 % 0x000000A8 : uint32)
  Class: Eq_49
  DataType: uint32
  OrigDataType: uint32
T_50: (in SEQ((int64) edx_81 % 0x000000A8, edx_81) : int64)
  Class: Eq_50
  DataType: (union (int64 u0) (uint64 u1))
  OrigDataType: (union (int64 u0) (uint64 u1))
T_51: (in 0x000000A8 : word32)
  Class: Eq_51
  DataType: uint32
  OrigDataType: uint32
T_52: (in SEQ((int64) edx_81 % 0x000000A8, edx_81) /u 0x000000A8 : uint32)
  Class: Eq_52
  DataType: uint32
  OrigDataType: uint32
T_53: (in 0x00008000 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in SEQ((int64) edx_81 % 0x000000A8, edx_81) /u 0x000000A8 - 0x00008000 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in 0x0007FFFC : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in edi_41 + 0x0007FFFC : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in Mem89[edi_41 + 0x0007FFFC:word32] : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_58: (in fn0804890C : ptr32)
  Class: Eq_58
  DataType: (ptr (fn T_60 ()))
  OrigDataType: (ptr (fn T_60 ()))
T_59: (in signature of fn0804890C : void)
  Class: Eq_58
  DataType: 
  OrigDataType: 
T_60: (in fn0804890C() : word32)
  Class: Eq_60
  DataType: word32
  OrigDataType: word32
T_61: (in 0x0000FFFF : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in fn0804890C() & 0x0000FFFF : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in 0x00008000 : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in (fn0804890C() & 0x0000FFFF) - 0x00008000 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in 0x000BFFFC : word32)
  Class: Eq_65
  DataType: word32
  OrigDataType: word32
T_66: (in edi_41 + 0x000BFFFC : word32)
  Class: Eq_66
  DataType: word32
  OrigDataType: word32
T_67: (in Mem94[edi_41 + 0x000BFFFC:word32] : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_68: (in rLoc1_95 : real64)
  Class: Eq_68
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_69: (in 0x0804A71E : ptr32)
  Class: Eq_69
  DataType: (ptr (struct (0 T_70 t0000)))
  OrigDataType: (ptr (struct (0 T_70 t0000)))
T_70: (in Mem94[0x0804A71E:real64] : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_71: (in sin : ptr32)
  Class: Eq_71
  DataType: (ptr (fn T_73 (T_72)))
  OrigDataType: (ptr (fn T_73 (T_72)))
T_72: (in rLoc2 : real64)
  Class: Eq_72
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_73: (in sin(rLoc2) : real64)
  Class: Eq_73
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_74: (in 0x0804A726 : ptr32)
  Class: Eq_74
  DataType: (ptr (struct (0 T_75 t0000)))
  OrigDataType: (ptr (struct (0 T_75 t0000)))
T_75: (in Mem94[0x0804A726:real64] : real64)
  Class: Eq_75
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_76: (in sin(rLoc2) * Mem94[0x0804A726:real64] : word32)
  Class: Eq_72
  DataType: real32
  OrigDataType: real32
T_77: (in (int32) rLoc2 : int32)
  Class: Eq_77
  DataType: int32
  OrigDataType: int32
T_78: (in 0x0804A712 : ptr32)
  Class: Eq_78
  DataType: (ptr (struct (0 T_79 t0000)))
  OrigDataType: (ptr (struct (0 T_79 t0000)))
T_79: (in Mem99[0x0804A712:int32] : int32)
  Class: Eq_77
  DataType: int32
  OrigDataType: int32
T_80: (in 0x0804A716 : ptr32)
  Class: Eq_80
  DataType: (ptr (struct (0 T_81 t0000)))
  OrigDataType: (ptr (struct (0 T_81 t0000)))
T_81: (in Mem99[0x0804A716:real64] : real64)
  Class: Eq_81
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_82: (in rLoc1_95 + Mem99[0x0804A716:real64] : word32)
  Class: Eq_68
  DataType: real32
  OrigDataType: real32
T_83: (in 0x0804A71E : ptr32)
  Class: Eq_83
  DataType: (ptr (struct (0 T_84 t0000)))
  OrigDataType: (ptr (struct (0 T_84 t0000)))
T_84: (in Mem101[0x0804A71E:real64] : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_85: (in 0x0804A712 : word32)
  Class: Eq_85
  DataType: (ptr (struct (0 T_86 t0000)))
  OrigDataType: (ptr (struct (0 T_86 t0000)))
T_86: (in Mem101[0x0804A712:word32] : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_87: (in 0x0003FFFC : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in edi_41 + 0x0003FFFC : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in Mem103[edi_41 + 0x0003FFFC:word32] : word32)
  Class: Eq_77
  DataType: word32
  OrigDataType: word32
T_90: (in 0x00000001 : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in ebx_104 + 0x00000001 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_92: (in 0x00000001 : word32)
  Class: Eq_92
  DataType: word32
  OrigDataType: word32
T_93: (in ecx_106 - 0x00000001 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_94: (in 0x00000000 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_95: (in ecx_106 != 0x00000000 : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in 0x00007FFF : word32)
  Class: Eq_96
  DataType: int32
  OrigDataType: int32
T_97: (in -0x00007FFF : word32)
  Class: Eq_35
  DataType: int32
  OrigDataType: int32
T_98: (in eax_56 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in 0x00000002 : word32)
  Class: Eq_99
  DataType: ui32
  OrigDataType: ui32
T_100: (in ebx_104 * 0x00000002 : word32)
  Class: Eq_98
  DataType: ui32
  OrigDataType: ui32
T_101: (in 0x00007FFF : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_102: (in (int64) eax_56 : int64)
  Class: Eq_102
  DataType: int64
  OrigDataType: int64
T_103: (in 0x000000A8 : word32)
  Class: Eq_103
  DataType: word32
  OrigDataType: word32
T_104: (in (int64) eax_56 % 0x000000A8 : uint32)
  Class: Eq_104
  DataType: uint32
  OrigDataType: uint32
T_105: (in SEQ((int64) eax_56 % 0x000000A8, eax_56) : int64)
  Class: Eq_105
  DataType: (union (int64 u0) (uint64 u1))
  OrigDataType: (union (int64 u0) (uint64 u1))
T_106: (in 0x000000A8 : word32)
  Class: Eq_106
  DataType: uint32
  OrigDataType: uint32
T_107: (in SEQ((int64) eax_56 % 0x000000A8, eax_56) /u 0x000000A8 : uint32)
  Class: Eq_107
  DataType: uint32
  OrigDataType: uint32
T_108: (in (byte) (SEQ((int64) eax_56 % 0x000000A8, eax_56) /u 0x000000A8) : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in 0x01 : byte)
  Class: Eq_109
  DataType: byte
  OrigDataType: byte
T_110: (in (byte) (SEQ((int64) eax_56 % 0x000000A8, eax_56) /u 0x000000A8) & 0x01 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in 0x00 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_112: (in ((byte) (SEQ((int64) eax_56 % 0x000000A8, eax_56) /u 0x000000A8) & 0x01) == 0x00 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in ebp_107 : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_114: (in 0x0804A200 : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_115: (in ecx_108 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in 0x00000009 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_117: (in esp_112 : word32)
  Class: Eq_117
  DataType: (ptr (struct (0 T_115 t0000) (C T_141 t000C)))
  OrigDataType: (ptr (struct (0 T_115 t0000) (C T_141 t000C)))
T_118: (in 0x00000004 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in esp_111 - 0x00000004 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_120: (in 0x00000000 : word32)
  Class: Eq_120
  DataType: word32
  OrigDataType: word32
T_121: (in esp_112 + 0x00000000 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in Mem113[esp_112 + 0x00000000:word32] : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_123: (in fn080487CB : ptr32)
  Class: Eq_123
  DataType: (ptr (fn T_126 (T_113)))
  OrigDataType: (ptr (fn T_126 (T_113)))
T_124: (in signature of fn080487CB : void)
  Class: Eq_123
  DataType: 
  OrigDataType: 
T_125: (in ebp : word32)
  Class: Eq_113
  DataType: (ptr (struct (0 T_228 t0000) (4 T_209 t0004) (8 T_205 t0008) (C T_251 t000C) (10 T_243 t0010) (14 T_260 t0014) (18 T_181 t0018) (1C T_166 t001C)))
  OrigDataType: (ptr (struct (0 T_228 t0000) (4 T_209 t0004) (8 T_205 t0008) (C T_251 t000C) (10 T_243 t0010) (14 T_260 t0014) (18 T_181 t0018) (1C T_166 t001C)))
T_126: (in fn080487CB(ebp_107) : void)
  Class: Eq_126
  DataType: void
  OrigDataType: void
T_127: (in ecx_116 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_128: (in 0x00000000 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in esp_112 + 0x00000000 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in Mem113[esp_112 + 0x00000000:word32] : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_131: (in 0x00000020 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in ebp_107 + 0x00000020 : word32)
  Class: Eq_113
  DataType: word32
  OrigDataType: word32
T_133: (in 0x00000004 : word32)
  Class: Eq_133
  DataType: word32
  OrigDataType: word32
T_134: (in esp_112 + 0x00000004 : word32)
  Class: Eq_3
  DataType: word32
  OrigDataType: word32
T_135: (in 0x00000001 : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in ecx_116 - 0x00000001 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_137: (in 0x00000001 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_138: (in ecx_116 != 0x00000001 : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in 0x0000000C : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in esp_112 + 0x0000000C : word32)
  Class: Eq_140
  DataType: word32
  OrigDataType: word32
T_141: (in Mem113[esp_112 + 0x0000000C:word32] : word32)
  Class: Eq_141
  DataType: word32
  OrigDataType: word32
T_142: (in 0x00000000 : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_143: (in 0x0804AB40 : word32)
  Class: Eq_143
  DataType: (ptr (struct (0 T_144 t0000)))
  OrigDataType: (ptr (struct (0 T_144 t0000)))
T_144: (in Mem4[0x0804AB40:word32] : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_145: (in 0x00000000 : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_146: (in 0x0804AB44 : word32)
  Class: Eq_146
  DataType: (ptr (struct (0 T_147 t0000)))
  OrigDataType: (ptr (struct (0 T_147 t0000)))
T_147: (in Mem5[0x0804AB44:word32] : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_148: (in 0x00000000 : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_149: (in 0x0804AB48 : word32)
  Class: Eq_149
  DataType: (ptr (struct (0 T_150 t0000)))
  OrigDataType: (ptr (struct (0 T_150 t0000)))
T_150: (in Mem6[0x0804AB48:word32] : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_151: (in 0x00000000 : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in 0x0804AB4C : word32)
  Class: Eq_152
  DataType: (ptr (struct (0 T_153 t0000)))
  OrigDataType: (ptr (struct (0 T_153 t0000)))
T_153: (in Mem7[0x0804AB4C:word32] : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_154: (in 0x00000000 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_155: (in 0x0804AB50 : word32)
  Class: Eq_155
  DataType: (ptr (struct (0 T_156 t0000)))
  OrigDataType: (ptr (struct (0 T_156 t0000)))
T_156: (in Mem8[0x0804AB50:word32] : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_157: (in 0x00000000 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in 0x0804AB60 : word32)
  Class: Eq_158
  DataType: (ptr (struct (0 T_159 t0000)))
  OrigDataType: (ptr (struct (0 T_159 t0000)))
T_159: (in Mem9[0x0804AB60:word32] : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_160: (in 0x00010000 : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_161: (in 0x0804AB64 : word32)
  Class: Eq_161
  DataType: (ptr (struct (0 T_162 t0000)))
  OrigDataType: (ptr (struct (0 T_162 t0000)))
T_162: (in Mem13[0x0804AB64:word32] : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_163: (in eax_15 : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in 0x0000001C : word32)
  Class: Eq_164
  DataType: word32
  OrigDataType: word32
T_165: (in ebp + 0x0000001C : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in Mem13[ebp + 0x0000001C:word32] : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_167: (in 0x00000010 : word32)
  Class: Eq_167
  DataType: word32
  OrigDataType: word32
T_168: (in eax_15 << 0x00000010 : word32)
  Class: Eq_168
  DataType: ui32
  OrigDataType: ui32
T_169: (in (int64) (eax_15 << 0x00000010) : int64)
  Class: Eq_169
  DataType: int64
  OrigDataType: int64
T_170: (in 0x00029040 : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in (int64) (eax_15 << 0x00000010) % 0x00029040 : int32)
  Class: Eq_171
  DataType: int32
  OrigDataType: int32
T_172: (in eax_15 << 0x00000010 : word32)
  Class: Eq_172
  DataType: ui32
  OrigDataType: ui32
T_173: (in SEQ((int64) (eax_15 << 0x00000010) % 0x00029040, eax_15 << 0x00000010) : int64)
  Class: Eq_173
  DataType: int64
  OrigDataType: int64
T_174: (in 0x00029040 : word32)
  Class: Eq_174
  DataType: int32
  OrigDataType: int32
T_175: (in SEQ((int64) (eax_15 << 0x00000010) % 0x00029040, eax_15 << 0x00000010) / 0x00029040 : int32)
  Class: Eq_175
  DataType: int32
  OrigDataType: int32
T_176: (in 0x0804AB68 : word32)
  Class: Eq_176
  DataType: (ptr (struct (0 T_177 t0000)))
  OrigDataType: (ptr (struct (0 T_177 t0000)))
T_177: (in Mem22[0x0804AB68:word32] : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_178: (in eax_24 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in 0x00000018 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in ebp + 0x00000018 : word32)
  Class: Eq_180
  DataType: word32
  OrigDataType: word32
T_181: (in Mem22[ebp + 0x00000018:word32] : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_182: (in 0x00000000 : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_183: (in eax_24 == 0x00000000 : bool)
  Class: Eq_183
  DataType: bool
  OrigDataType: bool
T_184: (in 0x0000002A : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_185: (in 0x0804AB48 : ptr32)
  Class: Eq_185
  DataType: (ptr (struct (0 T_186 t0000)))
  OrigDataType: (ptr (struct (0 T_186 t0000)))
T_186: (in Mem78[0x0804AB48:word32] : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_187: (in edx_eax_67 : int64)
  Class: Eq_187
  DataType: int64
  OrigDataType: int64
T_188: (in (int64) eax_24 : int64)
  Class: Eq_187
  DataType: int64
  OrigDataType: int64
T_189: (in 0x00000067 : word32)
  Class: Eq_189
  DataType: word32
  OrigDataType: word32
T_190: (in edx_eax_67 % 0x00000067 : uint32)
  Class: Eq_190
  DataType: uint32
  OrigDataType: uint32
T_191: (in SEQ(edx_eax_67 % 0x00000067, eax_24) : int64)
  Class: Eq_191
  DataType: (union (int64 u0) (uint64 u1))
  OrigDataType: (union (int64 u0) (uint64 u1))
T_192: (in 0x00000067 : word32)
  Class: Eq_192
  DataType: uint32
  OrigDataType: uint32
T_193: (in SEQ(edx_eax_67 % 0x00000067, eax_24) /u 0x00000067 : uint32)
  Class: Eq_142
  DataType: uint32
  OrigDataType: uint32
T_194: (in 0x0804AB40 : word32)
  Class: Eq_194
  DataType: (ptr (struct (0 T_195 t0000)))
  OrigDataType: (ptr (struct (0 T_195 t0000)))
T_195: (in Mem71[0x0804AB40:word32] : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_196: (in edx_eax_67 % 0x00000067 : uint32)
  Class: Eq_196
  DataType: uint32
  OrigDataType: uint32
T_197: (in 0x027C4597 : word32)
  Class: Eq_197
  DataType: uint32
  OrigDataType: uint32
T_198: (in edx_eax_67 % 0x00000067 *u 0x027C4597 : uint64)
  Class: Eq_198
  DataType: uint64
  OrigDataType: uint64
T_199: (in (word32) (edx_eax_67 % 0x00000067 *u 0x027C4597) : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_200: (in 0x0804AB44 : word32)
  Class: Eq_200
  DataType: (ptr (struct (0 T_201 t0000)))
  OrigDataType: (ptr (struct (0 T_201 t0000)))
T_201: (in Mem77[0x0804AB44:word32] : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_202: (in ecx_37 : word32)
  Class: Eq_202
  DataType: uint32
  OrigDataType: uint32
T_203: (in 0x00000008 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in ebp + 0x00000008 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in Mem22[ebp + 0x00000008:word32] : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_206: (in esi_35 : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_207: (in 0x00000004 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in ebp + 0x00000004 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in Mem22[ebp + 0x00000004:word32] : word32)
  Class: Eq_209
  DataType: word32
  OrigDataType: word32
T_210: (in 0x00000012 : word32)
  Class: Eq_210
  DataType: word32
  OrigDataType: word32
T_211: (in Mem22[ebp + 0x00000004:word32] << 0x00000012 : word32)
  Class: Eq_211
  DataType: ui32
  OrigDataType: ui32
T_212: (in 0x0804AB70 : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in (Mem22[ebp + 0x00000004:word32] << 0x00000012) + 0x0804AB70 : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_214: (in edi_43 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_215: (in fn0804888C : ptr32)
  Class: Eq_215
  DataType: (ptr (fn T_233 (T_225, T_202, T_206, T_232)))
  OrigDataType: (ptr (fn T_233 (T_225, T_202, T_206, T_232)))
T_216: (in signature of fn0804888C : void)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_217: (in eax : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_218: (in ecx : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_219: (in esi : word32)
  Class: Eq_206
  DataType: word32
  OrigDataType: word32
T_220: (in edi : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_221: (in 2097152 : int64)
  Class: Eq_221
  DataType: int64
  OrigDataType: int64
T_222: (in 2097152 % ecx_37 : uint32)
  Class: Eq_222
  DataType: uint32
  OrigDataType: uint32
T_223: (in 0x00200000 : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_224: (in SEQ(2097152 % ecx_37, 0x00200000) : int64)
  Class: Eq_224
  DataType: (union (int64 u0) (uint64 u1))
  OrigDataType: (union (int64 u0) (uint64 u1))
T_225: (in SEQ(2097152 % ecx_37, 0x00200000) /u ecx_37 : uint32)
  Class: Eq_217
  DataType: uint32
  OrigDataType: uint32
T_226: (in 0x00000000 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in ebp + 0x00000000 : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in Mem22[ebp + 0x00000000:word32] : word32)
  Class: Eq_228
  DataType: word32
  OrigDataType: word32
T_229: (in 0x00000012 : word32)
  Class: Eq_229
  DataType: word32
  OrigDataType: word32
T_230: (in Mem22[ebp + 0x00000000:word32] << 0x00000012 : word32)
  Class: Eq_230
  DataType: ui32
  OrigDataType: ui32
T_231: (in 0x082CAB70 : word32)
  Class: Eq_231
  DataType: word32
  OrigDataType: word32
T_232: (in (Mem22[ebp + 0x00000000:word32] << 0x00000012) + 0x082CAB70 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_233: (in fn0804888C(SEQ(2097152 % ecx_37, 0x00200000) /u ecx_37, ecx_37, esi_35, (Mem22[ebp + 0x00000000:word32] << 0x00000012) + 0x082CAB70) : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_234: (in 0x0804AB54 : ptr32)
  Class: Eq_234
  DataType: (ptr (struct (0 T_235 t0000)))
  OrigDataType: (ptr (struct (0 T_235 t0000)))
T_235: (in Mem22[0x0804AB54:word32] : word32)
  Class: Eq_217
  DataType: int32
  OrigDataType: int32
T_236: (in -Mem22[0x0804AB54:word32] : word32)
  Class: Eq_217
  DataType: int32
  OrigDataType: int32
T_237: (in Mem45[0x0804AB54:word32] : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_238: (in edi_55 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_239: (in fn0804888C : ptr32)
  Class: Eq_215
  DataType: (ptr (fn T_253 (T_240, T_243, T_206, T_252)))
  OrigDataType: (ptr (fn T_253 (T_240, T_243, T_206, T_252)))
T_240: (in 0x00000000 : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_241: (in 0x00000010 : word32)
  Class: Eq_241
  DataType: word32
  OrigDataType: word32
T_242: (in ebp + 0x00000010 : word32)
  Class: Eq_242
  DataType: word32
  OrigDataType: word32
T_243: (in Mem45[ebp + 0x00000010:word32] : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_244: (in fn08048891 : ptr32)
  Class: Eq_244
  DataType: (ptr (fn T_252 (T_251, T_206, T_214)))
  OrigDataType: (ptr (fn T_252 (T_251, T_206, T_214)))
T_245: (in signature of fn08048891 : void)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_246: (in ecx : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_247: (in esi : word32)
  Class: Eq_206
  DataType: (ptr (struct (0 (arr T_1161) a0000)))
  OrigDataType: (ptr (struct (0 (arr T_1161) a0000)))
T_248: (in edi : word32)
  Class: Eq_214
  DataType: (ptr (struct 0004 (0 T_317 t0000)))
  OrigDataType: (ptr (struct 0004 (0 T_317 t0000)))
T_249: (in 0x0000000C : word32)
  Class: Eq_249
  DataType: word32
  OrigDataType: word32
T_250: (in ebp + 0x0000000C : word32)
  Class: Eq_250
  DataType: word32
  OrigDataType: word32
T_251: (in Mem45[ebp + 0x0000000C:word32] : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_252: (in fn08048891(Mem45[ebp + 0x0000000C:word32], esi_35, edi_43) : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_253: (in fn0804888C(0x00000000, Mem45[ebp + 0x00000010:word32], esi_35, fn08048891(Mem45[ebp + 0x0000000C:word32], esi_35, edi_43)) : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_254: (in eax_57 : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_255: (in 0x0804AB50 : word32)
  Class: Eq_255
  DataType: (ptr (struct (0 T_256 t0000)))
  OrigDataType: (ptr (struct (0 T_256 t0000)))
T_256: (in Mem45[0x0804AB50:word32] : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_257: (in ecx_56 : word32)
  Class: Eq_202
  DataType: int32
  OrigDataType: int32
T_258: (in 0x00000014 : word32)
  Class: Eq_258
  DataType: word32
  OrigDataType: word32
T_259: (in ebp + 0x00000014 : word32)
  Class: Eq_259
  DataType: word32
  OrigDataType: word32
T_260: (in Mem45[ebp + 0x00000014:word32] : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_261: (in fn0804888C : ptr32)
  Class: Eq_215
  DataType: (ptr (fn T_267 (T_266, T_257, T_206, T_238)))
  OrigDataType: (ptr (fn T_267 (T_266, T_257, T_206, T_238)))
T_262: (in (int64) eax_57 : int64)
  Class: Eq_262
  DataType: int64
  OrigDataType: int64
T_263: (in (int64) eax_57 % ecx_56 : int32)
  Class: Eq_263
  DataType: int32
  OrigDataType: int32
T_264: (in SEQ((int64) eax_57 % ecx_56, eax_57) : int64)
  Class: Eq_264
  DataType: int64
  OrigDataType: int64
T_265: (in SEQ((int64) eax_57 % ecx_56, eax_57) / ecx_56 : int32)
  Class: Eq_265
  DataType: int32
  OrigDataType: int32
T_266: (in -(SEQ((int64) eax_57 % ecx_56, eax_57) / ecx_56) : word32)
  Class: Eq_217
  DataType: int32
  OrigDataType: int32
T_267: (in fn0804888C(-(SEQ((int64) eax_57 % ecx_56, eax_57) / ecx_56), ecx_56, esi_35, edi_55) : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_268: (in 0x0804AB54 : word32)
  Class: Eq_268
  DataType: (ptr (struct (0 T_269 t0000)))
  OrigDataType: (ptr (struct (0 T_269 t0000)))
T_269: (in Mem3[0x0804AB54:word32] : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_270: (in fn08048891 : ptr32)
  Class: Eq_244
  DataType: (ptr (fn T_271 (T_218, T_219, T_220)))
  OrigDataType: (ptr (fn T_271 (T_218, T_219, T_220)))
T_271: (in fn08048891(ecx, esi, edi) : word32)
  Class: Eq_271
  DataType: word32
  OrigDataType: word32
T_272: (in 0x00000000 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_273: (in ecx != 0x00000000 : bool)
  Class: Eq_273
  DataType: bool
  OrigDataType: bool
T_274: (in 0x0804AB60 : ptr32)
  Class: Eq_274
  DataType: (ptr (struct (0 T_157 t0000)))
  OrigDataType: (ptr (struct (0 T_157 t0000)))
T_275: (in Mem0[0x0804AB60:word32] : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_276: (in 0x0804AB64 : word32)
  Class: Eq_276
  DataType: (ptr (struct (0 T_277 t0000)))
  OrigDataType: (ptr (struct (0 T_277 t0000)))
T_277: (in Mem0[0x0804AB64:word32] : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_278: (in Mem0[0x0804AB60:word32] + Mem0[0x0804AB64:word32] : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_279: (in Mem31[0x0804AB60:word32] : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_280: (in 0x0804AB64 : ptr32)
  Class: Eq_280
  DataType: (ptr (struct (0 T_160 t0000)))
  OrigDataType: (ptr (struct (0 T_160 t0000)))
T_281: (in Mem31[0x0804AB64:word32] : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_282: (in 0x0804AB68 : word32)
  Class: Eq_282
  DataType: (ptr (struct (0 T_283 t0000)))
  OrigDataType: (ptr (struct (0 T_283 t0000)))
T_283: (in Mem31[0x0804AB68:word32] : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_284: (in Mem31[0x0804AB64:word32] + Mem31[0x0804AB68:word32] : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_285: (in Mem34[0x0804AB64:word32] : word32)
  Class: Eq_160
  DataType: word32
  OrigDataType: word32
T_286: (in 0x0804AB50 : ptr32)
  Class: Eq_286
  DataType: (ptr (struct (0 T_287 t0000)))
  OrigDataType: (ptr (struct (0 T_287 t0000)))
T_287: (in Mem34[0x0804AB50:word32] : word32)
  Class: Eq_154
  DataType: int32
  OrigDataType: int32
T_288: (in 0x0000000A : word32)
  Class: Eq_288
  DataType: uint32
  OrigDataType: uint32
T_289: (in Mem34[0x0804AB50:word32] >> 0x0000000A : word32)
  Class: Eq_289
  DataType: int32
  OrigDataType: int32
T_290: (in 0x0804AB60 : word32)
  Class: Eq_290
  DataType: (ptr (struct (0 T_291 t0000)))
  OrigDataType: (ptr (struct (0 T_291 t0000)))
T_291: (in Mem34[0x0804AB60:word32] : word32)
  Class: Eq_157
  DataType: uint32
  OrigDataType: uint32
T_292: (in 0x00000010 : word32)
  Class: Eq_292
  DataType: uint32
  OrigDataType: uint32
T_293: (in Mem34[0x0804AB60:word32] >>u 0x00000010 : word32)
  Class: Eq_293
  DataType: uint32
  OrigDataType: uint32
T_294: (in 0x00000004 : word32)
  Class: Eq_294
  DataType: ui32
  OrigDataType: ui32
T_295: (in (Mem34[0x0804AB60:word32] >>u 0x00000010) * 0x00000004 : word32)
  Class: Eq_295
  DataType: ui32
  OrigDataType: ui32
T_296: (in esi[(Mem34[0x0804AB60:word32] >>u 0x00000010) * 0x00000004] : word32)
  Class: Eq_296
  DataType: int32
  OrigDataType: int32
T_297: (in (Mem34[0x0804AB50:word32] >> 0x0000000A) *s esi[(Mem34[0x0804AB60:word32] >>u 0x00000010) * 0x00000004] : int64)
  Class: Eq_297
  DataType: int64
  OrigDataType: int64
T_298: (in (word32) ((Mem34[0x0804AB50:word32] >> 0x0000000A) *s esi[(Mem34[0x0804AB60:word32] >>u 0x00000010) * 0x00000004]) : word32)
  Class: Eq_298
  DataType: int32
  OrigDataType: int32
T_299: (in 0x0000000B : word32)
  Class: Eq_299
  DataType: uint32
  OrigDataType: uint32
T_300: (in (word32) ((Mem34[0x0804AB50:word32] >> 0x0000000A) *s esi[(Mem34[0x0804AB60:word32] >>u 0x00000010) * 0x00000004]) >> 0x0000000B : word32)
  Class: Eq_300
  DataType: int32
  OrigDataType: int32
T_301: (in 0x0808AB70 : word32)
  Class: Eq_301
  DataType: (ptr (struct (0 T_308 t0000)))
  OrigDataType: (ptr (struct (0 T_308 t0000)))
T_302: (in 0x0804AB48 : ptr32)
  Class: Eq_302
  DataType: (ptr (struct (0 T_303 t0000)))
  OrigDataType: (ptr (struct (0 T_303 t0000)))
T_303: (in Mem34[0x0804AB48:word32] : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_304: (in 0x0000FFFF : word32)
  Class: Eq_304
  DataType: word32
  OrigDataType: word32
T_305: (in Mem34[0x0804AB48:word32] & 0x0000FFFF : word32)
  Class: Eq_305
  DataType: ui32
  OrigDataType: ui32
T_306: (in 0x00000004 : word32)
  Class: Eq_306
  DataType: ui32
  OrigDataType: ui32
T_307: (in (Mem34[0x0804AB48:word32] & 0x0000FFFF) * 0x00000004 : word32)
  Class: Eq_307
  DataType: ui32
  OrigDataType: ui32
T_308: (in 0x0808AB70[(Mem34[0x0804AB48:word32] & 0x0000FFFF) * 0x00000004] : word32)
  Class: Eq_308
  DataType: int32
  OrigDataType: int32
T_309: (in 0x00000004 : word32)
  Class: Eq_309
  DataType: uint32
  OrigDataType: uint32
T_310: (in 0x0808AB70[(Mem34[0x0804AB48:word32] & 0x0000FFFF) * 0x00000004] >> 0x00000004 : word32)
  Class: Eq_310
  DataType: int32
  OrigDataType: int32
T_311: (in ((word32) ((Mem34[0x0804AB50:word32] >> 0x0000000A) *s esi[(Mem34[0x0804AB60:word32] >>u 0x00000010) * 0x00000004]) >> 0x0000000B) *s (0x0808AB70[(Mem34[0x0804AB48:word32] & 0x0000FFFF) * 0x00000004] >> 0x00000004) : int64)
  Class: Eq_311
  DataType: int64
  OrigDataType: int64
T_312: (in (word32) (((word32) ((Mem34[0x0804AB50:word32] >> 0x0000000A) *s esi[(Mem34[0x0804AB60:word32] >>u 0x00000010) * 0x00000004]) >> 0x0000000B) *s (0x0808AB70[(Mem34[0x0804AB48:word32] & 0x0000FFFF) * 0x00000004] >> 0x00000004)) : word32)
  Class: Eq_312
  DataType: int32
  OrigDataType: int32
T_313: (in 0x0000000C : word32)
  Class: Eq_313
  DataType: uint32
  OrigDataType: uint32
T_314: (in (word32) (((word32) ((Mem34[0x0804AB50:word32] >> 0x0000000A) *s esi[(Mem34[0x0804AB60:word32] >>u 0x00000010) * 0x00000004]) >> 0x0000000B) *s (0x0808AB70[(Mem34[0x0804AB48:word32] & 0x0000FFFF) * 0x00000004] >> 0x00000004)) >> 0x0000000C : word32)
  Class: Eq_314
  DataType: int32
  OrigDataType: int32
T_315: (in 0x00000000 : word32)
  Class: Eq_315
  DataType: word32
  OrigDataType: word32
T_316: (in edi + 0x00000000 : word32)
  Class: Eq_316
  DataType: word32
  OrigDataType: word32
T_317: (in Mem54[edi + 0x00000000:word32] : word32)
  Class: Eq_314
  DataType: word32
  OrigDataType: word32
T_318: (in 0x0804AB50 : ptr32)
  Class: Eq_318
  DataType: (ptr (struct (0 T_154 t0000)))
  OrigDataType: (ptr (struct (0 T_154 t0000)))
T_319: (in Mem54[0x0804AB50:word32] : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_320: (in 0x0804AB54 : word32)
  Class: Eq_320
  DataType: (ptr (struct (0 T_321 t0000)))
  OrigDataType: (ptr (struct (0 T_321 t0000)))
T_321: (in Mem54[0x0804AB54:word32] : word32)
  Class: Eq_217
  DataType: word32
  OrigDataType: word32
T_322: (in Mem54[0x0804AB50:word32] + Mem54[0x0804AB54:word32] : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_323: (in Mem58[0x0804AB50:word32] : word32)
  Class: Eq_154
  DataType: word32
  OrigDataType: word32
T_324: (in v17_60 : word32)
  Class: Eq_151
  DataType: up32
  OrigDataType: up32
T_325: (in 0x0804AB4C : ptr32)
  Class: Eq_325
  DataType: (ptr (struct (0 T_151 t0000)))
  OrigDataType: (ptr (struct (0 T_151 t0000)))
T_326: (in Mem58[0x0804AB4C:word32] : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_327: (in 0x0804AB44 : word32)
  Class: Eq_327
  DataType: (ptr (struct (0 T_328 t0000)))
  OrigDataType: (ptr (struct (0 T_328 t0000)))
T_328: (in Mem58[0x0804AB44:word32] : word32)
  Class: Eq_145
  DataType: word32
  OrigDataType: word32
T_329: (in Mem58[0x0804AB4C:word32] + Mem58[0x0804AB44:word32] : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_330: (in Mem61[0x0804AB4C:word32] : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_331: (in 0x0804AB48 : ptr32)
  Class: Eq_331
  DataType: (ptr (struct (0 T_148 t0000)))
  OrigDataType: (ptr (struct (0 T_148 t0000)))
T_332: (in Mem61[0x0804AB48:word32] : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_333: (in 0x0804AB40 : word32)
  Class: Eq_333
  DataType: (ptr (struct (0 T_334 t0000)))
  OrigDataType: (ptr (struct (0 T_334 t0000)))
T_334: (in Mem61[0x0804AB40:word32] : word32)
  Class: Eq_142
  DataType: word32
  OrigDataType: word32
T_335: (in Mem61[0x0804AB48:word32] + Mem61[0x0804AB40:word32] : word32)
  Class: Eq_335
  DataType: word32
  OrigDataType: word32
T_336: (in 0x00000000 : word32)
  Class: Eq_151
  DataType: up32
  OrigDataType: up32
T_337: (in v17_60 <u 0x00000000 : bool)
  Class: Eq_337
  DataType: bool
  OrigDataType: bool
T_338: (in Mem61[0x0804AB48:word32] + Mem61[0x0804AB40:word32] + (v17_60 <u 0x00000000) : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_339: (in Mem66[0x0804AB48:word32] : word32)
  Class: Eq_148
  DataType: word32
  OrigDataType: word32
T_340: (in 0x00000004 : word32)
  Class: Eq_340
  DataType: word32
  OrigDataType: word32
T_341: (in edi + 0x00000004 : word32)
  Class: Eq_214
  DataType: word32
  OrigDataType: word32
T_342: (in 0x00000001 : word32)
  Class: Eq_342
  DataType: word32
  OrigDataType: word32
T_343: (in ecx - 0x00000001 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_344: (in 0x00000000 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_345: (in ecx != 0x00000000 : bool)
  Class: Eq_345
  DataType: bool
  OrigDataType: bool
T_346: (in eax : word32)
  Class: Eq_346
  DataType: word32
  OrigDataType: word32
T_347: (in eax_8 : word32)
  Class: Eq_347
  DataType: word32
  OrigDataType: word32
T_348: (in __ror : ptr32)
  Class: Eq_348
  DataType: (ptr (fn T_356 (T_354, T_355)))
  OrigDataType: (ptr (fn T_356 (T_354, T_355)))
T_349: (in 0x0804A626 : word32)
  Class: Eq_349
  DataType: (ptr (struct (0 T_350 t0000)))
  OrigDataType: (ptr (struct (0 T_350 t0000)))
T_350: (in Mem0[0x0804A626:word32] : word32)
  Class: Eq_347
  DataType: word32
  OrigDataType: word32
T_351: (in 0xF31782CE : word32)
  Class: Eq_351
  DataType: word32
  OrigDataType: word32
T_352: (in Mem0[0x0804A626:word32] + 0xF31782CE : word32)
  Class: Eq_352
  DataType: word32
  OrigDataType: word32
T_353: (in 0xF31782CE : word32)
  Class: Eq_353
  DataType: word32
  OrigDataType: word32
T_354: (in Mem0[0x0804A626:word32] + 0xF31782CE ^ 0xF31782CE : word32)
  Class: Eq_354
  DataType: word32
  OrigDataType: word32
T_355: (in 0x01 : byte)
  Class: Eq_355
  DataType: byte
  OrigDataType: byte
T_356: (in __ror(Mem0[0x0804A626:word32] + 0xF31782CE ^ 0xF31782CE, 0x01) : word32)
  Class: Eq_347
  DataType: word32
  OrigDataType: word32
T_357: (in 0x0804A626 : word32)
  Class: Eq_357
  DataType: (ptr (struct (0 T_358 t0000)))
  OrigDataType: (ptr (struct (0 T_358 t0000)))
T_358: (in Mem10[0x0804A626:word32] : word32)
  Class: Eq_347
  DataType: word32
  OrigDataType: word32
T_359: (in ebp_2 : word32)
  Class: Eq_359
  DataType: word32
  OrigDataType: word32
T_360: (in fn08048714 : ptr32)
  Class: Eq_360
  DataType: (ptr (fn T_362 ()))
  OrigDataType: (ptr (fn T_362 ()))
T_361: (in signature of fn08048714 : void)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_362: (in fn08048714() : word32)
  Class: Eq_359
  DataType: word32
  OrigDataType: word32
T_363: (in 0x00000031 : word32)
  Class: Eq_363
  DataType: word32
  OrigDataType: word32
T_364: (in fp : ptr32)
  Class: Eq_364
  DataType: (ptr (struct (FFFFFFDC T_416 tFFFFFFDC) (FFFFFFE0 T_401 tFFFFFFE0) (FFFFFFE4 T_393 tFFFFFFE4) (FFFFFFE8 T_389 tFFFFFFE8) (FFFFFFEC T_385 tFFFFFFEC) (FFFFFFF0 T_381 tFFFFFFF0) (FFFFFFF4 T_376 tFFFFFFF4) (FFFFFFF8 T_372 tFFFFFFF8) (FFFFFFFC T_367 tFFFFFFFC)))
  OrigDataType: (ptr (struct (FFFFFFDC T_416 tFFFFFFDC) (FFFFFFE0 T_401 tFFFFFFE0) (FFFFFFE4 T_393 tFFFFFFE4) (FFFFFFE8 T_389 tFFFFFFE8) (FFFFFFEC T_385 tFFFFFFEC) (FFFFFFF0 T_381 tFFFFFFF0) (FFFFFFF4 T_376 tFFFFFFF4) (FFFFFFF8 T_372 tFFFFFFF8) (FFFFFFFC T_367 tFFFFFFFC)))
T_365: (in 0x00000004 : word32)
  Class: Eq_365
  DataType: word32
  OrigDataType: word32
T_366: (in fp - 0x00000004 : word32)
  Class: Eq_366
  DataType: word32
  OrigDataType: word32
T_367: (in Mem9[fp - 0x00000004:word32] : word32)
  Class: Eq_363
  DataType: word32
  OrigDataType: word32
T_368: (in SDL_Init : ptr32)
  Class: Eq_368
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_369: (in 0x00000000 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_370: (in 0x00000008 : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_371: (in fp - 0x00000008 : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_372: (in Mem14[fp - 0x00000008:word32] : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_373: (in 0x0804A734 : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_374: (in 0x0000000C : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_375: (in fp - 0x0000000C : word32)
  Class: Eq_375
  DataType: word32
  OrigDataType: word32
T_376: (in Mem17[fp - 0x0000000C:word32] : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_377: (in SDL_OpenAudio : ptr32)
  Class: Eq_377
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_378: (in 0x80000003 : word32)
  Class: Eq_378
  DataType: word32
  OrigDataType: word32
T_379: (in 0x00000010 : word32)
  Class: Eq_379
  DataType: word32
  OrigDataType: word32
T_380: (in fp - 0x00000010 : word32)
  Class: Eq_380
  DataType: word32
  OrigDataType: word32
T_381: (in Mem20[fp - 0x00000010:word32] : word32)
  Class: Eq_378
  DataType: word32
  OrigDataType: word32
T_382: (in 0x00000020 : word32)
  Class: Eq_382
  DataType: word32
  OrigDataType: word32
T_383: (in 0x00000014 : word32)
  Class: Eq_383
  DataType: word32
  OrigDataType: word32
T_384: (in fp - 0x00000014 : word32)
  Class: Eq_384
  DataType: word32
  OrigDataType: word32
T_385: (in Mem27[fp - 0x00000014:word32] : word32)
  Class: Eq_382
  DataType: word32
  OrigDataType: word32
T_386: (in 0x00000020 : word32)
  Class: Eq_386
  DataType: word32
  OrigDataType: word32
T_387: (in 0x00000018 : word32)
  Class: Eq_387
  DataType: word32
  OrigDataType: word32
T_388: (in fp - 0x00000018 : word32)
  Class: Eq_388
  DataType: word32
  OrigDataType: word32
T_389: (in Mem29[fp - 0x00000018:word32] : word32)
  Class: Eq_386
  DataType: word32
  OrigDataType: word32
T_390: (in 0x00000280 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_391: (in 0x0000001C : word32)
  Class: Eq_391
  DataType: word32
  OrigDataType: word32
T_392: (in fp - 0x0000001C : word32)
  Class: Eq_392
  DataType: word32
  OrigDataType: word32
T_393: (in Mem33[fp - 0x0000001C:word32] : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_394: (in SDL_SetVideoMode : ptr32)
  Class: Eq_394
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_395: (in fn080491C0 : ptr32)
  Class: Eq_395
  DataType: (ptr (fn T_397 ()))
  OrigDataType: (ptr (fn T_397 ()))
T_396: (in signature of fn080491C0 : void)
  Class: Eq_395
  DataType: 
  OrigDataType: 
T_397: (in fn080491C0() : void)
  Class: Eq_397
  DataType: void
  OrigDataType: void
T_398: (in 0x00000000 : word32)
  Class: Eq_398
  DataType: word32
  OrigDataType: word32
T_399: (in 0x00000020 : word32)
  Class: Eq_399
  DataType: word32
  OrigDataType: word32
T_400: (in fp - 0x00000020 : word32)
  Class: Eq_400
  DataType: word32
  OrigDataType: word32
T_401: (in Mem40[fp - 0x00000020:word32] : word32)
  Class: Eq_398
  DataType: word32
  OrigDataType: word32
T_402: (in SDL_ShowCursor : ptr32)
  Class: Eq_402
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_403: (in SDL_PauseAudio : ptr32)
  Class: Eq_403
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_404: (in SDL_GetTicks : ptr32)
  Class: Eq_404
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_405: (in 0x00000000 : word32)
  Class: Eq_405
  DataType: word32
  OrigDataType: word32
T_406: (in 0x087CABE8 : word32)
  Class: Eq_406
  DataType: (ptr (struct (0 T_407 t0000)))
  OrigDataType: (ptr (struct (0 T_407 t0000)))
T_407: (in Mem41[0x087CABE8:word32] : word32)
  Class: Eq_405
  DataType: word32
  OrigDataType: word32
T_408: (in SDL_Quit : ptr32)
  Class: Eq_408
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_409: (in __syscall : ptr32)
  Class: Eq_409
  DataType: (ptr (fn T_411 (T_410)))
  OrigDataType: (ptr (fn T_411 (T_410)))
T_410: (in 0x80 : byte)
  Class: Eq_410
  DataType: byte
  OrigDataType: byte
T_411: (in __syscall(0x80) : void)
  Class: Eq_411
  DataType: void
  OrigDataType: void
T_412: (in esi_103 : word32)
  Class: Eq_412
  DataType: int32
  OrigDataType: int32
T_413: (in 0x00000000 : word32)
  Class: Eq_412
  DataType: word32
  OrigDataType: word32
T_414: (in ebx_59 : word32)
  Class: Eq_414
  DataType: int32
  OrigDataType: int32
T_415: (in 0x00000000 : word32)
  Class: Eq_414
  DataType: word32
  OrigDataType: word32
T_416: (in 0x087CABEC : word32)
  Class: Eq_416
  DataType: word32
  OrigDataType: word32
T_417: (in 0x00000024 : word32)
  Class: Eq_417
  DataType: word32
  OrigDataType: word32
T_418: (in fp - 0x00000024 : word32)
  Class: Eq_418
  DataType: word32
  OrigDataType: word32
T_419: (in Mem109[fp - 0x00000024:word32] : word32)
  Class: Eq_416
  DataType: word32
  OrigDataType: word32
T_420: (in SDL_PollEvent : ptr32)
  Class: Eq_420
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_421: (in 0x087CABEC : ptr32)
  Class: Eq_421
  DataType: (ptr (struct (0 T_422 t0000)))
  OrigDataType: (ptr (struct (0 T_422 t0000)))
T_422: (in Mem109[0x087CABEC:byte] : byte)
  Class: Eq_422
  DataType: byte
  OrigDataType: byte
T_423: (in 0x02 : byte)
  Class: Eq_422
  DataType: byte
  OrigDataType: byte
T_424: (in Mem109[0x087CABEC:byte] != 0x02 : bool)
  Class: Eq_424
  DataType: bool
  OrigDataType: bool
T_425: (in SDL_GetTicks : ptr32)
  Class: Eq_425
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_426: (in 0x00000000 : word32)
  Class: Eq_426
  DataType: word32
  OrigDataType: word32
T_427: (in 0x087CABE8 : ptr32)
  Class: Eq_427
  DataType: (ptr (struct (0 T_428 t0000)))
  OrigDataType: (ptr (struct (0 T_428 t0000)))
T_428: (in Mem41[0x087CABE8:word32] : word32)
  Class: Eq_405
  DataType: word32
  OrigDataType: word32
T_429: (in 0x00000000 - Mem41[0x087CABE8:word32] : word32)
  Class: Eq_416
  DataType: word32
  OrigDataType: word32
T_430: (in fp - 0x00000024 : word32)
  Class: Eq_430
  DataType: word32
  OrigDataType: word32
T_431: (in Mem45[fp - 0x00000024:word32] : word32)
  Class: Eq_416
  DataType: word32
  OrigDataType: word32
T_432: (in SDL_GL_SwapBuffers : ptr32)
  Class: Eq_432
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_433: (in ebp_47 : word32)
  Class: Eq_433
  DataType: word32
  OrigDataType: word32
T_434: (in edi_48 : word32)
  Class: Eq_434
  DataType: (ptr (struct (0 (arr T_1162) a0000)))
  OrigDataType: (ptr (struct (0 (arr T_1162) a0000)))
T_435: (in ecx_49 : word32)
  Class: Eq_412
  DataType: word32
  OrigDataType: word32
T_436: (in fn08048E99 : ptr32)
  Class: Eq_436
  DataType: (ptr (fn T_445 (T_359, T_442, T_443, T_444)))
  OrigDataType: (ptr (fn T_445 (T_359, T_442, T_443, T_444)))
T_437: (in signature of fn08048E99 : void)
  Class: Eq_436
  DataType: 
  OrigDataType: 
T_438: (in ebp : word32)
  Class: Eq_359
  DataType: (ptr (struct (FFFFFFFC T_952 tFFFFFFFC)))
  OrigDataType: (ptr (struct (FFFFFFFC T_952 tFFFFFFFC)))
T_439: (in dwArg04 : word32)
  Class: Eq_439
  DataType: word32
  OrigDataType: word32
T_440: (in ebpOut : ptr32)
  Class: Eq_440
  DataType: ptr32
  OrigDataType: ptr32
T_441: (in ediOut : ptr32)
  Class: Eq_441
  DataType: ptr32
  OrigDataType: ptr32
T_442: (in dwArg00 : word32)
  Class: Eq_439
  DataType: word32
  OrigDataType: word32
T_443: (in out ebp_47 : ptr32)
  Class: Eq_440
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_444: (in out edi_48 : ptr32)
  Class: Eq_441
  DataType: (ptr word32)
  OrigDataType: (ptr word32)
T_445: (in fn08048E99(ebp_2, dwArg00, out ebp_47, out edi_48) : word32)
  Class: Eq_412
  DataType: word32
  OrigDataType: word32
T_446: (in esp_52 : word32)
  Class: Eq_446
  DataType: word32
  OrigDataType: word32
T_447: (in 0x00000020 : word32)
  Class: Eq_447
  DataType: word32
  OrigDataType: word32
T_448: (in fp - 0x00000020 : word32)
  Class: Eq_446
  DataType: word32
  OrigDataType: word32
T_449: (in 0x0804A74C : ptr32)
  Class: Eq_449
  DataType: (ptr (struct (0 T_450 t0000)))
  OrigDataType: (ptr (struct (0 T_450 t0000)))
T_450: (in Mem45[0x0804A74C:byte] : byte)
  Class: Eq_450
  DataType: byte
  OrigDataType: byte
T_451: (in 0x00 : byte)
  Class: Eq_450
  DataType: byte
  OrigDataType: byte
T_452: (in Mem45[0x0804A74C:byte] != 0x00 : bool)
  Class: Eq_452
  DataType: bool
  OrigDataType: bool
T_453: (in edx_104 : word32)
  Class: Eq_412
  DataType: int32
  OrigDataType: int32
T_454: (in edx_104 < esi_103 : bool)
  Class: Eq_454
  DataType: bool
  OrigDataType: bool
T_455: (in -edx_104 : word32)
  Class: Eq_412
  DataType: int32
  OrigDataType: int32
T_456: (in 0x00000001 : word32)
  Class: Eq_456
  DataType: word32
  OrigDataType: word32
T_457: (in ebx_59 + 0x00000001 : word32)
  Class: Eq_414
  DataType: word32
  OrigDataType: word32
T_458: (in 0x000003FF : word32)
  Class: Eq_414
  DataType: int32
  OrigDataType: int32
T_459: (in ebx_59 <= 0x000003FF : bool)
  Class: Eq_459
  DataType: bool
  OrigDataType: bool
T_460: (in cx_69 : word16)
  Class: Eq_460
  DataType: word16
  OrigDataType: word16
T_461: (in 0x0002 : word16)
  Class: Eq_461
  DataType: ui16
  OrigDataType: ui16
T_462: (in ebx_59 * 0x0002 : word32)
  Class: Eq_462
  DataType: ui32
  OrigDataType: ui32
T_463: (in edi_48[ebx_59 * 0x0002] : word16)
  Class: Eq_460
  DataType: word16
  OrigDataType: word16
T_464: (in DPB(ecx_49, cx_69, 0, 16) : word32)
  Class: Eq_412
  DataType: word32
  OrigDataType: word32
T_465: (in esp_71 : word32)
  Class: Eq_465
  DataType: (ptr (struct (0 T_412 t0000)))
  OrigDataType: (ptr (struct (0 T_412 t0000)))
T_466: (in 0x00000004 : word32)
  Class: Eq_466
  DataType: word32
  OrigDataType: word32
T_467: (in esp_52 - 0x00000004 : word32)
  Class: Eq_465
  DataType: word32
  OrigDataType: word32
T_468: (in 0x00000000 : word32)
  Class: Eq_468
  DataType: word32
  OrigDataType: word32
T_469: (in esp_71 + 0x00000000 : word32)
  Class: Eq_469
  DataType: word32
  OrigDataType: word32
T_470: (in Mem72[esp_71 + 0x00000000:word32] : word32)
  Class: Eq_412
  DataType: word32
  OrigDataType: word32
T_471: (in 0x00000000 : word32)
  Class: Eq_471
  DataType: word32
  OrigDataType: word32
T_472: (in esp_71 + 0x00000000 : word32)
  Class: Eq_472
  DataType: word32
  OrigDataType: word32
T_473: (in Mem72[esp_71 + 0x00000000:int16] : int16)
  Class: Eq_412
  DataType: int16
  OrigDataType: int16
T_474: (in (real64) Mem72[esp_71 + 0x00000000:int16] : real64)
  Class: Eq_474
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_475: (in 0x0804A8C8 : ptr32)
  Class: Eq_475
  DataType: (ptr (struct (0 T_476 t0000)))
  OrigDataType: (ptr (struct (0 T_476 t0000)))
T_476: (in Mem72[0x0804A8C8:real32] : real32)
  Class: Eq_476
  DataType: real32
  OrigDataType: real32
T_477: (in (real64) Mem72[esp_71 + 0x00000000:int16] * Mem72[0x0804A8C8:real32] : word32)
  Class: Eq_477
  DataType: real32
  OrigDataType: real32
T_478: (in 0x087D55E0 : word32)
  Class: Eq_478
  DataType: (ptr (struct (0 T_481 t0000)))
  OrigDataType: (ptr (struct (0 T_481 t0000)))
T_479: (in 4F : real32)
  Class: Eq_479
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_480: (in ebx_59 * 4F : word32)
  Class: Eq_480
  DataType: ui32
  OrigDataType: ui32
T_481: (in 0x087D55E0[ebx_59 * 4F] : real32)
  Class: Eq_477
  DataType: real32
  OrigDataType: real32
T_482: (in 0x00000004 : word32)
  Class: Eq_482
  DataType: word32
  OrigDataType: word32
T_483: (in esp_71 + 0x00000004 : word32)
  Class: Eq_446
  DataType: word32
  OrigDataType: word32
T_484: (in (int32) cx_69 : int32)
  Class: Eq_412
  DataType: int32
  OrigDataType: int32
T_485: (in 0x00000000 : word32)
  Class: Eq_412
  DataType: int32
  OrigDataType: int32
T_486: (in edx_104 >= 0x00000000 : bool)
  Class: Eq_486
  DataType: bool
  OrigDataType: bool
T_487: (in 0x00000000 : word32)
  Class: Eq_487
  DataType: word32
  OrigDataType: word32
T_488: (in esp_71 + 0x00000000 : word32)
  Class: Eq_488
  DataType: word32
  OrigDataType: word32
T_489: (in Mem90[esp_71 + 0x00000000:word32] : word32)
  Class: Eq_412
  DataType: word32
  OrigDataType: word32
T_490: (in 0x00000000 : word32)
  Class: Eq_490
  DataType: word32
  OrigDataType: word32
T_491: (in esp_71 + 0x00000000 : word32)
  Class: Eq_491
  DataType: word32
  OrigDataType: word32
T_492: (in Mem90[esp_71 + 0x00000000:int16] : int16)
  Class: Eq_412
  DataType: int16
  OrigDataType: int16
T_493: (in (real64) Mem90[esp_71 + 0x00000000:int16] : real64)
  Class: Eq_493
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_494: (in 0x0804A8CC : ptr32)
  Class: Eq_494
  DataType: (ptr (struct (0 T_495 t0000)))
  OrigDataType: (ptr (struct (0 T_495 t0000)))
T_495: (in Mem90[0x0804A8CC:real32] : real32)
  Class: Eq_495
  DataType: real32
  OrigDataType: real32
T_496: (in (real64) Mem90[esp_71 + 0x00000000:int16] * Mem90[0x0804A8CC:real32] : word32)
  Class: Eq_496
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_497: (in 0x0804A8D0 : ptr32)
  Class: Eq_497
  DataType: (ptr (struct (0 T_498 t0000)))
  OrigDataType: (ptr (struct (0 T_498 t0000)))
T_498: (in Mem90[0x0804A8D0:real32] : real32)
  Class: Eq_498
  DataType: real32
  OrigDataType: real32
T_499: (in 0x087D55C0 : ptr32)
  Class: Eq_499
  DataType: (ptr (struct (0 T_500 t0000)))
  OrigDataType: (ptr (struct (0 T_500 t0000)))
T_500: (in Mem90[0x087D55C0:real32] : real32)
  Class: Eq_500
  DataType: real32
  OrigDataType: real32
T_501: (in Mem90[0x0804A8D0:real32] * Mem90[0x087D55C0:real32] : word32)
  Class: Eq_501
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_502: (in (real64) Mem90[esp_71 + 0x00000000:int16] * Mem90[0x0804A8CC:real32] + Mem90[0x0804A8D0:real32] * Mem90[0x087D55C0:real32] : real64)
  Class: Eq_500
  DataType: real64
  OrigDataType: real64
T_503: (in 0x087D55C0 : ptr32)
  Class: Eq_503
  DataType: (ptr (struct (0 T_504 t0000)))
  OrigDataType: (ptr (struct (0 T_504 t0000)))
T_504: (in Mem97[0x087D55C0:real32] : real32)
  Class: Eq_500
  DataType: real32
  OrigDataType: real32
T_505: (in 0x087D55C4 : ptr32)
  Class: Eq_505
  DataType: (ptr (struct (0 T_506 t0000)))
  OrigDataType: (ptr (struct (0 T_506 t0000)))
T_506: (in Mem97[0x087D55C4:word32] : word32)
  Class: Eq_506
  DataType: int32
  OrigDataType: int32
T_507: (in 0x0000002F : word32)
  Class: Eq_506
  DataType: int32
  OrigDataType: int32
T_508: (in Mem97[0x087D55C4:word32] <= 0x0000002F : bool)
  Class: Eq_508
  DataType: bool
  OrigDataType: bool
T_509: (in 0x00000000 : word32)
  Class: Eq_500
  DataType: word32
  OrigDataType: word32
T_510: (in 0x087D55C0 : word32)
  Class: Eq_510
  DataType: (ptr (struct (0 T_511 t0000)))
  OrigDataType: (ptr (struct (0 T_511 t0000)))
T_511: (in Mem102[0x087D55C0:word32] : word32)
  Class: Eq_500
  DataType: word32
  OrigDataType: word32
T_512: (in ecx : word32)
  Class: Eq_512
  DataType: word32
  OrigDataType: word32
T_513: (in eax_109 : word32)
  Class: Eq_513
  DataType: int32
  OrigDataType: int32
T_514: (in 0x00000000 : word32)
  Class: Eq_513
  DataType: word32
  OrigDataType: word32
T_515: (in rLoc1_21 : real64)
  Class: Eq_515
  DataType: real64
  OrigDataType: real64
T_516: (in rArg04 : real32)
  Class: Eq_516
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_517: (in rArg04 + rArg04 : real64)
  Class: Eq_517
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_518: (in (rArg04 + rArg04) * rArg04 : word32)
  Class: Eq_515
  DataType: real32
  OrigDataType: real32
T_519: (in rLoc6_69 : real64)
  Class: Eq_519
  DataType: real64
  OrigDataType: real64
T_520: (in 0x087D4848 : ptr32)
  Class: Eq_520
  DataType: (ptr (struct (0 T_521 t0000)))
  OrigDataType: (ptr (struct (0 T_521 t0000)))
T_521: (in Mem0[0x087D4848:real32] : real32)
  Class: Eq_521
  DataType: real32
  OrigDataType: real32
T_522: (in 1 : real64)
  Class: Eq_522
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_523: (in Mem0[0x087D4848:real32] + 1 : word32)
  Class: Eq_519
  DataType: real32
  OrigDataType: real32
T_524: (in rLoc3_25 : real64)
  Class: Eq_524
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_525: (in rArg04 * rArg04 : real64)
  Class: Eq_524
  DataType: real64
  OrigDataType: real64
T_526: (in rLoc3_58 : real64)
  Class: Eq_526
  DataType: real64
  OrigDataType: real64
T_527: (in 0x087D484C : ptr32)
  Class: Eq_527
  DataType: (ptr (struct (0 T_528 t0000)))
  OrigDataType: (ptr (struct (0 T_528 t0000)))
T_528: (in Mem0[0x087D484C:real32] : real32)
  Class: Eq_528
  DataType: real32
  OrigDataType: real32
T_529: (in 1 : real64)
  Class: Eq_529
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_530: (in Mem0[0x087D484C:real32] + 1 : word32)
  Class: Eq_526
  DataType: real32
  OrigDataType: real32
T_531: (in rLoc4_60 : real64)
  Class: Eq_531
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_532: (in 1 : real64)
  Class: Eq_532
  DataType: real64
  OrigDataType: real64
T_533: (in 0x087D4848 : ptr32)
  Class: Eq_533
  DataType: (ptr (struct (0 T_534 t0000)))
  OrigDataType: (ptr (struct (0 T_534 t0000)))
T_534: (in Mem0[0x087D4848:real32] : real32)
  Class: Eq_521
  DataType: real32
  OrigDataType: real32
T_535: (in 1 - Mem0[0x087D4848:real32] : word32)
  Class: Eq_531
  DataType: word32
  OrigDataType: word32
T_536: (in rLoc7_71 : real64)
  Class: Eq_536
  DataType: real64
  OrigDataType: real64
T_537: (in rLoc6_69 * rLoc6_69 : real64)
  Class: Eq_536
  DataType: real64
  OrigDataType: real64
T_538: (in rLoc3_55 : real64)
  Class: Eq_538
  DataType: real64
  OrigDataType: real64
T_539: (in 1 : real64)
  Class: Eq_539
  DataType: real64
  OrigDataType: real64
T_540: (in 0x087D4844 : ptr32)
  Class: Eq_540
  DataType: (ptr (struct (0 T_541 t0000)))
  OrigDataType: (ptr (struct (0 T_541 t0000)))
T_541: (in Mem0[0x087D4844:real32] : real32)
  Class: Eq_541
  DataType: real32
  OrigDataType: real32
T_542: (in 1 - Mem0[0x087D4844:real32] : word32)
  Class: Eq_538
  DataType: word32
  OrigDataType: word32
T_543: (in rLoc2_23 : real64)
  Class: Eq_543
  DataType: real64
  OrigDataType: real64
T_544: (in rArg04 * rLoc1_21 : real64)
  Class: Eq_543
  DataType: real64
  OrigDataType: real64
T_545: (in rLoc2_81 : real64)
  Class: Eq_545
  DataType: real64
  OrigDataType: real64
T_546: (in rLoc3_25 * rArg04 : word32)
  Class: Eq_546
  DataType: real32
  OrigDataType: real32
T_547: (in rLoc3_25 * rArg04 - rLoc1_21 : real64)
  Class: Eq_547
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_548: (in rLoc3_25 * rArg04 - rLoc1_21 + rArg04 : word32)
  Class: Eq_548
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_549: (in rLoc4_60 * rLoc3_58 : real64)
  Class: Eq_549
  DataType: real64
  OrigDataType: real64
T_550: (in dwArg08 : word32)
  Class: Eq_550
  DataType: (ptr (struct (0 (arr T_1164) a0000) (C (arr T_1163) a000C) (18 (arr T_1165) a0018) (24 (arr T_1167) a0024)))
  OrigDataType: (ptr (struct (0 (arr T_1164) a0000) (C (arr T_1163) a000C) (18 (arr T_1165) a0018) (24 (arr T_1167) a0024)))
T_551: (in 0x0000000C : word32)
  Class: Eq_551
  DataType: word32
  OrigDataType: word32
T_552: (in dwArg08 + 0x0000000C : word32)
  Class: Eq_552
  DataType: word32
  OrigDataType: word32
T_553: (in 4F : real32)
  Class: Eq_553
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_554: (in eax_109 * 4F : word32)
  Class: Eq_554
  DataType: ui32
  OrigDataType: ui32
T_555: (in (dwArg08 + 0x0000000C)[eax_109 * 4F] : real32)
  Class: Eq_555
  DataType: real32
  OrigDataType: real32
T_556: (in 4F : real32)
  Class: Eq_556
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_557: (in eax_109 * 4F : word32)
  Class: Eq_557
  DataType: ui32
  OrigDataType: ui32
T_558: (in dwArg08[eax_109 * 4F] : real32)
  Class: Eq_558
  DataType: real32
  OrigDataType: real32
T_559: (in (dwArg08 + 0x0000000C)[eax_109 * 4F] - dwArg08[eax_109 * 4F] : word32)
  Class: Eq_559
  DataType: (union (real64 u0) (word32 u1))
  OrigDataType: (union (real64 u0) (word32 u1))
T_560: (in rLoc4_60 * rLoc3_58 * ((dwArg08 + 0x0000000C)[eax_109 * 4F] - dwArg08[eax_109 * 4F]) : real64)
  Class: Eq_560
  DataType: real64
  OrigDataType: real64
T_561: (in rLoc7_71 + (rLoc4_60 * rLoc3_58) * ((dwArg08 + 0x0000000C)[eax_109 * 4F] - dwArg08[eax_109 * 4F]) : real64)
  Class: Eq_561
  DataType: real64
  OrigDataType: real64
T_562: (in (rLoc7_71 + (rLoc4_60 * rLoc3_58) * ((dwArg08 + 0x0000000C)[eax_109 * 4F] - dwArg08[eax_109 * 4F])) * rLoc3_55 : real64)
  Class: Eq_562
  DataType: real64
  OrigDataType: real64
T_563: (in (rLoc3_25 * rArg04 - rLoc1_21 + rArg04) * ((rLoc7_71 + (rLoc4_60 * rLoc3_58) * ((dwArg08 + 0x0000000C)[eax_109 * 4F] - dwArg08[eax_109 * 4F])) * rLoc3_55) : real64)
  Class: Eq_545
  DataType: real64
  OrigDataType: real64
T_564: (in 0x0804A8DC : ptr32)
  Class: Eq_564
  DataType: (ptr (struct (0 T_565 t0000)))
  OrigDataType: (ptr (struct (0 T_565 t0000)))
T_565: (in Mem0[0x0804A8DC:real32] : real32)
  Class: Eq_565
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_566: (in Mem0[0x0804A8DC:real32] * rLoc2_81 : real64)
  Class: Eq_566
  DataType: real64
  OrigDataType: real64
T_567: (in 1 : real64)
  Class: Eq_567
  DataType: real64
  OrigDataType: real64
T_568: (in rLoc3_25 * 1 : real64)
  Class: Eq_568
  DataType: real64
  OrigDataType: real64
T_569: (in 0x00000018 : word32)
  Class: Eq_569
  DataType: word32
  OrigDataType: word32
T_570: (in dwArg08 + 0x00000018 : word32)
  Class: Eq_570
  DataType: word32
  OrigDataType: word32
T_571: (in 4F : real32)
  Class: Eq_571
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_572: (in eax_109 * 4F : word32)
  Class: Eq_572
  DataType: ui32
  OrigDataType: ui32
T_573: (in (dwArg08 + 0x00000018)[eax_109 * 4F] : real32)
  Class: Eq_573
  DataType: real32
  OrigDataType: real32
T_574: (in 0x0000000C : word32)
  Class: Eq_574
  DataType: word32
  OrigDataType: word32
T_575: (in dwArg08 + 0x0000000C : word32)
  Class: Eq_575
  DataType: word32
  OrigDataType: word32
T_576: (in 4F : real32)
  Class: Eq_576
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_577: (in eax_109 * 4F : word32)
  Class: Eq_577
  DataType: ui32
  OrigDataType: ui32
T_578: (in (dwArg08 + 0x0000000C)[eax_109 * 4F] : real32)
  Class: Eq_578
  DataType: real32
  OrigDataType: real32
T_579: (in (dwArg08 + 0x00000018)[eax_109 * 4F] - (dwArg08 + 0x0000000C)[eax_109 * 4F] : word32)
  Class: Eq_579
  DataType: (union (real64 u0) (word32 u1))
  OrigDataType: (union (real64 u0) (word32 u1))
T_580: (in ((dwArg08 + 0x00000018)[eax_109 * 4F] - (dwArg08 + 0x0000000C)[eax_109 * 4F]) * rLoc7_71 : real64)
  Class: Eq_580
  DataType: real64
  OrigDataType: real64
T_581: (in rLoc6_69 * rLoc3_58 : real64)
  Class: Eq_581
  DataType: real64
  OrigDataType: real64
T_582: (in ((dwArg08 + 0x00000018)[eax_109 * 4F] - (dwArg08 + 0x0000000C)[eax_109 * 4F]) * rLoc7_71 * (rLoc6_69 * rLoc3_58) : real64)
  Class: Eq_582
  DataType: real64
  OrigDataType: real64
T_583: (in 1 : real64)
  Class: Eq_583
  DataType: real64
  OrigDataType: real64
T_584: (in 0x087D484C : ptr32)
  Class: Eq_584
  DataType: (ptr (struct (0 T_585 t0000)))
  OrigDataType: (ptr (struct (0 T_585 t0000)))
T_585: (in Mem0[0x087D484C:real32] : real32)
  Class: Eq_528
  DataType: real32
  OrigDataType: real32
T_586: (in 1 - Mem0[0x087D484C:real32] : word32)
  Class: Eq_586
  DataType: real32
  OrigDataType: real32
T_587: (in (1 - Mem0[0x087D484C:real32]) * rLoc4_60 : word32)
  Class: Eq_587
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_588: (in 0x00000024 : word32)
  Class: Eq_588
  DataType: word32
  OrigDataType: word32
T_589: (in dwArg08 + 0x00000024 : word32)
  Class: Eq_589
  DataType: word32
  OrigDataType: word32
T_590: (in 4F : real32)
  Class: Eq_590
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_591: (in eax_109 * 4F : word32)
  Class: Eq_591
  DataType: ui32
  OrigDataType: ui32
T_592: (in (dwArg08 + 0x00000024)[eax_109 * 4F] : real32)
  Class: Eq_592
  DataType: real32
  OrigDataType: real32
T_593: (in 0x00000018 : word32)
  Class: Eq_593
  DataType: word32
  OrigDataType: word32
T_594: (in dwArg08 + 0x00000018 : word32)
  Class: Eq_594
  DataType: word32
  OrigDataType: word32
T_595: (in 4F : real32)
  Class: Eq_595
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_596: (in eax_109 * 4F : word32)
  Class: Eq_596
  DataType: ui32
  OrigDataType: ui32
T_597: (in (dwArg08 + 0x00000018)[eax_109 * 4F] : real32)
  Class: Eq_597
  DataType: real32
  OrigDataType: real32
T_598: (in (dwArg08 + 0x00000024)[eax_109 * 4F] - (dwArg08 + 0x00000018)[eax_109 * 4F] : word32)
  Class: Eq_598
  DataType: (union (real64 u0) (word32 u1))
  OrigDataType: (union (real64 u0) (word32 u1))
T_599: (in (1 - Mem0[0x087D484C:real32]) * rLoc4_60 * ((dwArg08 + 0x00000024)[eax_109 * 4F] - (dwArg08 + 0x00000018)[eax_109 * 4F]) : real64)
  Class: Eq_599
  DataType: real64
  OrigDataType: real64
T_600: (in ((dwArg08 + 0x00000018)[eax_109 * 4F] - (dwArg08 + 0x0000000C)[eax_109 * 4F]) * rLoc7_71 * (rLoc6_69 * rLoc3_58) + ((1 - Mem0[0x087D484C:real32]) * rLoc4_60) * ((dwArg08 + 0x00000024)[eax_109 * 4F] - (dwArg08 + 0x00000018)[eax_109 * 4F]) : real64)
  Class: Eq_600
  DataType: real64
  OrigDataType: real64
T_601: (in (((dwArg08 + 0x00000018)[eax_109 * 4F] - (dwArg08 + 0x0000000C)[eax_109 * 4F]) * rLoc7_71 * (rLoc6_69 * rLoc3_58) + ((1 - Mem0[0x087D484C:real32]) * rLoc4_60) * ((dwArg08 + 0x00000024)[eax_109 * 4F] - (dwArg08 + 0x00000018)[eax_109 * 4F])) * rLoc3_55 : real64)
  Class: Eq_601
  DataType: real64
  OrigDataType: real64
T_602: (in rLoc3_25 * 1 * (((((dwArg08 + 0x00000018)[eax_109 * 4F] - (dwArg08 + 0x0000000C)[eax_109 * 4F]) * rLoc7_71) * (rLoc6_69 * rLoc3_58) + ((1 - Mem0[0x087D484C:real32]) * rLoc4_60) * ((dwArg08 + 0x00000024)[eax_109 * 4F] - (dwArg08 + 0x00000018)[eax_109 * 4F])) * rLoc3_55) : real64)
  Class: Eq_602
  DataType: real64
  OrigDataType: real64
T_603: (in Mem0[0x0804A8DC:real32] * rLoc2_81 * ((rLoc3_25 * 1) * (((((dwArg08 + 0x00000018)[eax_109 * 4F] - (dwArg08 + 0x0000000C)[eax_109 * 4F]) * rLoc7_71) * (rLoc6_69 * rLoc3_58) + ((1 - Mem0[0x087D484C:real32]) * rLoc4_60) * ((dwArg08 + 0x00000024)[eax_109 * 4F] - (dwArg08 + 0x00000018)[eax_109 * 4F])) * rLoc3_55)) : real64)
  Class: Eq_603
  DataType: real64
  OrigDataType: real64
T_604: (in 1 : real64)
  Class: Eq_604
  DataType: real64
  OrigDataType: real64
T_605: (in rLoc2_23 + 1 : real64)
  Class: Eq_605
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_606: (in 0x0000000C : word32)
  Class: Eq_606
  DataType: word32
  OrigDataType: word32
T_607: (in dwArg08 + 0x0000000C : word32)
  Class: Eq_607
  DataType: word32
  OrigDataType: word32
T_608: (in 4F : real32)
  Class: Eq_608
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_609: (in eax_109 * 4F : word32)
  Class: Eq_609
  DataType: ui32
  OrigDataType: ui32
T_610: (in (dwArg08 + 0x0000000C)[eax_109 * 4F] : real32)
  Class: Eq_610
  DataType: real32
  OrigDataType: real32
T_611: (in (rLoc2_23 + 1) * (dwArg08 + 0x0000000C)[eax_109 * 4F] : word32)
  Class: Eq_611
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_612: (in 0x0804A8D4 : ptr32)
  Class: Eq_612
  DataType: (ptr (struct (0 T_613 t0000)))
  OrigDataType: (ptr (struct (0 T_613 t0000)))
T_613: (in Mem0[0x0804A8D4:real32] : real32)
  Class: Eq_613
  DataType: real32
  OrigDataType: real32
T_614: (in rLoc3_25 * Mem0[0x0804A8D4:real32] : word32)
  Class: Eq_614
  DataType: real32
  OrigDataType: real32
T_615: (in rLoc2_23 - rLoc3_25 * Mem0[0x0804A8D4:real32] : real64)
  Class: Eq_615
  DataType: real64
  OrigDataType: real64
T_616: (in rLoc5 : real64)
  Class: Eq_538
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_617: (in 0x0804A8D8 : ptr32)
  Class: Eq_617
  DataType: (ptr (struct (0 T_618 t0000)))
  OrigDataType: (ptr (struct (0 T_618 t0000)))
T_618: (in Mem0[0x0804A8D8:real32] : real32)
  Class: Eq_618
  DataType: real32
  OrigDataType: real32
T_619: (in rLoc5 * Mem0[0x0804A8D8:real32] : word32)
  Class: Eq_619
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_620: (in rLoc2_23 - rLoc3_25 * Mem0[0x0804A8D4:real32] + rLoc5 * Mem0[0x0804A8D8:real32] : real64)
  Class: Eq_620
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_621: (in 0x00000018 : word32)
  Class: Eq_621
  DataType: word32
  OrigDataType: word32
T_622: (in dwArg08 + 0x00000018 : word32)
  Class: Eq_622
  DataType: word32
  OrigDataType: word32
T_623: (in 4F : real32)
  Class: Eq_623
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_624: (in eax_109 * 4F : word32)
  Class: Eq_624
  DataType: ui32
  OrigDataType: ui32
T_625: (in (dwArg08 + 0x00000018)[eax_109 * 4F] : real32)
  Class: Eq_625
  DataType: real32
  OrigDataType: real32
T_626: (in (rLoc2_23 - rLoc3_25 * Mem0[0x0804A8D4:real32] + rLoc5 * Mem0[0x0804A8D8:real32]) * (dwArg08 + 0x00000018)[eax_109 * 4F] : word32)
  Class: Eq_626
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_627: (in (rLoc2_23 + 1) * (dwArg08 + 0x0000000C)[eax_109 * 4F] + ((rLoc2_23 - rLoc3_25 * Mem0[0x0804A8D4:real32]) + rLoc5 * Mem0[0x0804A8D8:real32]) * (dwArg08 + 0x00000018)[eax_109 * 4F] : real64)
  Class: Eq_627
  DataType: real64
  OrigDataType: real64
T_628: (in rLoc2_81 + ((rLoc2_23 + 1) * (dwArg08 + 0x0000000C)[eax_109 * 4F] + ((rLoc2_23 - rLoc3_25 * Mem0[0x0804A8D4:real32]) + rLoc5 * Mem0[0x0804A8D8:real32]) * (dwArg08 + 0x00000018)[eax_109 * 4F]) : real64)
  Class: Eq_628
  DataType: real64
  OrigDataType: real64
T_629: (in Mem0[0x0804A8DC:real32] * rLoc2_81 * ((rLoc3_25 * 1) * (((((dwArg08 + 0x00000018)[eax_109 * 4F] - (dwArg08 + 0x0000000C)[eax_109 * 4F]) * rLoc7_71) * (rLoc6_69 * rLoc3_58) + ((1 - Mem0[0x087D484C:real32]) * rLoc4_60) * ((dwArg08 + 0x00000024)[eax_109 * 4F] - (dwArg08 + 0x00000018)[eax_109 * 4F])) * rLoc3_55)) + (rLoc2_81 + ((rLoc2_23 + 1) * (dwArg08 + 0x0000000C)[eax_109 * 4F] + ((rLoc2_23 - rLoc3_25 * Mem0[0x0804A8D4:real32]) + rLoc5 * Mem0[0x0804A8D8:real32]) * (dwArg08 + 0x00000018)[eax_109 * 4F])) : real64)
  Class: Eq_629
  DataType: real64
  OrigDataType: real64
T_630: (in dwArg0C : word32)
  Class: Eq_630
  DataType: (ptr (struct (0 (arr T_1171) a0000)))
  OrigDataType: (ptr (struct (0 (arr T_1171) a0000)))
T_631: (in 4F : real32)
  Class: Eq_631
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_632: (in eax_109 * 4F : word32)
  Class: Eq_632
  DataType: ui32
  OrigDataType: ui32
T_633: (in dwArg0C[eax_109 * 4F] : real32)
  Class: Eq_629
  DataType: real32
  OrigDataType: real32
T_634: (in 1 : real64)
  Class: Eq_634
  DataType: real64
  OrigDataType: real64
T_635: (in rArg04 - 1 : word32)
  Class: Eq_516
  DataType: word32
  OrigDataType: word32
T_636: (in 0x00000001 : word32)
  Class: Eq_636
  DataType: word32
  OrigDataType: word32
T_637: (in eax_109 + 0x00000001 : word32)
  Class: Eq_513
  DataType: word32
  OrigDataType: word32
T_638: (in 0x00000001 : word32)
  Class: Eq_513
  DataType: int32
  OrigDataType: int32
T_639: (in eax_109 <= 0x00000001 : bool)
  Class: Eq_639
  DataType: bool
  OrigDataType: bool
T_640: (in ecx : word32)
  Class: Eq_640
  DataType: word32
  OrigDataType: word32
T_641: (in esi_110 : word32)
  Class: Eq_641
  DataType: ui32
  OrigDataType: ui32
T_642: (in 0x00000000 : word32)
  Class: Eq_641
  DataType: word32
  OrigDataType: word32
T_643: (in dwLoc14_115 : word32)
  Class: Eq_643
  DataType: ui32
  OrigDataType: ui32
T_644: (in 0x00000000 : word32)
  Class: Eq_643
  DataType: word32
  OrigDataType: word32
T_645: (in v13_91 : real32)
  Class: Eq_645
  DataType: real32
  OrigDataType: real32
T_646: (in 0x0804A8E4 : ptr32)
  Class: Eq_646
  DataType: (ptr (struct (0 T_645 t0000)))
  OrigDataType: (ptr (struct (0 T_645 t0000)))
T_647: (in Mem75[0x0804A8E4:real32] : real32)
  Class: Eq_645
  DataType: real32
  OrigDataType: real32
T_648: (in rArg04 : real32)
  Class: Eq_648
  DataType: real32
  OrigDataType: real32
T_649: (in Mem75[0x0804A8E4:real32] - rArg04 : word32)
  Class: Eq_645
  DataType: word32
  OrigDataType: word32
T_650: (in Mem92[0x0804A8E4:real32] : real32)
  Class: Eq_645
  DataType: real32
  OrigDataType: real32
T_651: (in rLoc2_153 : real64)
  Class: Eq_651
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_652: (in 0x087D4870 : word32)
  Class: Eq_652
  DataType: (ptr (struct (0 T_656 t0000)))
  OrigDataType: (ptr (struct (0 T_656 t0000)))
T_653: (in edx_83 : word32)
  Class: Eq_653
  DataType: int32
  OrigDataType: int32
T_654: (in 4F : real32)
  Class: Eq_654
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_655: (in edx_83 * 4F : word32)
  Class: Eq_655
  DataType: ui32
  OrigDataType: ui32
T_656: (in 0x087D4870[edx_83 * 4F] : real32)
  Class: Eq_656
  DataType: real32
  OrigDataType: real32
T_657: (in rArg04 * 0x087D4870[edx_83 * 4F] : word32)
  Class: Eq_651
  DataType: real32
  OrigDataType: real32
T_658: (in 0x087D4864 : word32)
  Class: Eq_658
  DataType: (ptr (struct (0 T_661 t0000)))
  OrigDataType: (ptr (struct (0 T_661 t0000)))
T_659: (in 4F : real32)
  Class: Eq_659
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_660: (in edx_83 * 4F : word32)
  Class: Eq_660
  DataType: ui32
  OrigDataType: ui32
T_661: (in 0x087D4864[edx_83 * 4F] : real32)
  Class: Eq_661
  DataType: real32
  OrigDataType: real32
T_662: (in rArg04 * 0x087D4864[edx_83 * 4F] : word32)
  Class: Eq_662
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_663: (in rArg04 * 0x087D4864[edx_83 * 4F] + rLoc2_153 : real64)
  Class: Eq_663
  DataType: real64
  OrigDataType: real64
T_664: (in 0x087D48A0 : word32)
  Class: Eq_664
  DataType: (ptr (struct (0 T_670 t0000)))
  OrigDataType: (ptr (struct (0 T_670 t0000)))
T_665: (in 0x00000003 : word32)
  Class: Eq_665
  DataType: ui32
  OrigDataType: ui32
T_666: (in esi_110 * 0x00000003 : word32)
  Class: Eq_666
  DataType: ui32
  OrigDataType: ui32
T_667: (in esi_110 * 0x00000003 + edx_83 : word32)
  Class: Eq_667
  DataType: ui32
  OrigDataType: ui32
T_668: (in 4F : real32)
  Class: Eq_668
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_669: (in (esi_110 * 0x00000003 + edx_83) * 4F : word32)
  Class: Eq_669
  DataType: ui32
  OrigDataType: ui32
T_670: (in 0x087D48A0[(esi_110 * 0x00000003 + edx_83) * 4F] : real32)
  Class: Eq_663
  DataType: real32
  OrigDataType: real32
T_671: (in 0x00000001 : word32)
  Class: Eq_671
  DataType: word32
  OrigDataType: word32
T_672: (in edx_83 + 0x00000001 : word32)
  Class: Eq_653
  DataType: word32
  OrigDataType: word32
T_673: (in 0x00000002 : word32)
  Class: Eq_653
  DataType: int32
  OrigDataType: int32
T_674: (in edx_83 <= 0x00000002 : bool)
  Class: Eq_674
  DataType: bool
  OrigDataType: bool
T_675: (in sin : ptr32)
  Class: Eq_675
  DataType: (ptr (fn T_680 (T_679)))
  OrigDataType: (ptr (fn T_680 (T_679)))
T_676: (in 0x0804A8E8 : ptr32)
  Class: Eq_676
  DataType: (ptr (struct (0 T_677 t0000)))
  OrigDataType: (ptr (struct (0 T_677 t0000)))
T_677: (in Mem97[0x0804A8E8:real32] : real32)
  Class: Eq_677
  DataType: real32
  OrigDataType: real32
T_678: (in (real64) esi_110 : real64)
  Class: Eq_678
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_679: (in Mem97[0x0804A8E8:real32] * (real64) esi_110 : word32)
  Class: Eq_679
  DataType: real32
  OrigDataType: real32
T_680: (in sin(Mem97[0x0804A8E8:real32] * (real64) esi_110) : real64)
  Class: Eq_680
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_681: (in 0x0804A8EC : ptr32)
  Class: Eq_681
  DataType: (ptr (struct (0 T_682 t0000)))
  OrigDataType: (ptr (struct (0 T_682 t0000)))
T_682: (in Mem97[0x0804A8EC:real32] : real32)
  Class: Eq_682
  DataType: real32
  OrigDataType: real32
T_683: (in sin(Mem97[0x0804A8E8:real32] * (real64) esi_110) * Mem97[0x0804A8EC:real32] : word32)
  Class: Eq_683
  DataType: real32
  OrigDataType: real32
T_684: (in 0x087D48A8 : word32)
  Class: Eq_684
  DataType: (ptr (struct (0 T_689 t0000)))
  OrigDataType: (ptr (struct (0 T_689 t0000)))
T_685: (in 0x00000003 : word32)
  Class: Eq_685
  DataType: ui32
  OrigDataType: ui32
T_686: (in esi_110 * 0x00000003 : word32)
  Class: Eq_686
  DataType: ui32
  OrigDataType: ui32
T_687: (in 4F : real32)
  Class: Eq_687
  DataType: (union (32 u0) (real32 u1))
  OrigDataType: (union (32 u0) (real32 u1))
T_688: (in esi_110 * 0x00000003 * 4F : word32)
  Class: Eq_688
  DataType: ui32
  OrigDataType: ui32
T_689: (in 0x087D48A8[esi_110 * 0x00000003 * 4F] : real32)
  Class: Eq_683
  DataType: real32
  OrigDataType: real32
T_690: (in 0x00000001 : word32)
  Class: Eq_690
  DataType: word32
  OrigDataType: word32
T_691: (in esi_110 + 0x00000001 : word32)
  Class: Eq_641
  DataType: word32
  OrigDataType: word32
T_692: (in edi_111 : word32)
  Class: Eq_692
  DataType: int32
  OrigDataType: int32
T_693: (in 0x00000001 : word32)
  Class: Eq_693
  DataType: word32
  OrigDataType: word32
T_694: (in edi_111 + 0x00000001 : word32)
  Class: Eq_692
  DataType: word32
  OrigDataType: word32
T_695: (in 0x0000000F : word32)
  Class: Eq_692
  DataType: int32
  OrigDataType: int32
T_696: (in edi_111 <= 0x0000000F : bool)
  Class: Eq_696
  DataType: bool
  OrigDataType: bool
T_697: (in 0x087D4864 : word32)
  Class: Eq_697
  DataType: word32
  OrigDataType: word32
T_698: (in fp : ptr32)
  Class: Eq_698
  DataType: (ptr (struct (FFFFFFDC T_697 tFFFFFFDC)))
  OrigDataType: (ptr (struct (FFFFFFDC T_697 tFFFFFFDC)))
T_699: (in 0x00000024 : word32)
  Class: Eq_699
  DataType: word32
  OrigDataType: word32
T_700: (in fp - 0x00000024 : word32)
  Class: Eq_700
  DataType: word32
  OrigDataType: word32
T_701: (in Mem57[fp - 0x00000024:word32] : word32)
  Class: Eq_697
  DataType: word32
  OrigDataType: word32
T_702: (in ebx_59 : word32)
  Class: Eq_702
  DataType: word32
  OrigDataType: word32
T_703: (in 0x00000003 : word32)
  Class: Eq_703
  DataType: ui32
  OrigDataType: ui32
T_704: (in dwLoc14_115 * 0x00000003 : word32)
  Class: Eq_702
  DataType: ui32
  OrigDataType: ui32
T_705: (in rLoc1_68 : real64)
  Class: Eq_705
  DataType: real64
  OrigDataType: real64
T_706: (in 0x0804A8E0 : ptr32)
  Class: Eq_706
  DataType: (ptr (struct (0 T_707 t0000)))
  OrigDataType: (ptr (struct (0 T_707 t0000)))
T_707: (in Mem57[0x0804A8E0:real32] : real32)
  Class: Eq_707
  DataType: real32
  OrigDataType: real32
T_708: (in (real64) edi_111 : real64)
  Class: Eq_708
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_709: (in Mem57[0x0804A8E0:real32] * (real64) edi_111 : word32)
  Class: Eq_705
  DataType: real32
  OrigDataType: real32
T_710: (in fn08048A31 : ptr32)
  Class: Eq_710
  DataType: (ptr (fn T_720 (T_705, T_718, T_719)))
  OrigDataType: (ptr (fn T_720 (T_705, T_718, T_719)))
T_711: (in signature of fn08048A31 : void)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_712: (in rArg04 : real32)
  Class: Eq_705
  DataType: real32
  OrigDataType: real32
T_713: (in dwArg08 : word32)
  Class: Eq_713
  DataType: word32
  OrigDataType: word32
T_714: (in dwArg0C : word32)
  Class: Eq_714
  DataType: word32
  OrigDataType: word32
T_715: (in 0x00000002 : word32)
  Class: Eq_715
  DataType: word32
  OrigDataType: word32
T_716: (in ebx_59 << 0x00000002 : word32)
  Class: Eq_716
  DataType: ui32
  OrigDataType: ui32
T_717: (in 0x0804A800 : word32)
  Class: Eq_717
  DataType: word32
  OrigDataType: word32
T_718: (in (ebx_59 << 0x00000002) + 0x0804A800 : word32)
  Class: Eq_713
  DataType: word32
  OrigDataType: word32
T_719: (in rLoc24 : real32)
  Class: Eq_714
  DataType: real32
  OrigDataType: real32
T_720: (in fn08048A31(rLoc1_68, (ebx_59 << 0x00000002) + 0x0804A800, rLoc24) : word32)
  Class: Eq_720
  DataType: word32
  OrigDataType: word32
T_721: (in 0x087D4870 : word32)
  Class: Eq_697
  DataType: word32
  OrigDataType: word32
T_722: (in 0x00000024 : word32)
  Class: Eq_722
  DataType: word32
  OrigDataType: word32
T_723: (in fp - 0x00000024 : word32)
  Class: Eq_723
  DataType: word32
  OrigDataType: word32
T_724: (in Mem75[fp - 0x00000024:word32] : word32)
  Class: Eq_697
  DataType: word32
  OrigDataType: word32
T_725: (in ecx_135 : word32)
  Class: Eq_725
  DataType: word32
  OrigDataType: word32
T_726: (in fn08048A31 : ptr32)
  Class: Eq_710
  DataType: (ptr (fn T_730 (T_705, T_729, T_719)))
  OrigDataType: (ptr (fn T_730 (T_705, T_729, T_719)))
T_727: (in ebx_59 << 0x00000002 : word32)
  Class: Eq_727
  DataType: ui32
  OrigDataType: ui32
T_728: (in 0x0804A860 : word32)
  Class: Eq_728
  DataType: word32
  OrigDataType: word32
T_729: (in (ebx_59 << 0x00000002) + 0x0804A860 : word32)
  Class: Eq_713
  DataType: word32
  OrigDataType: word32
T_730: (in fn08048A31(rLoc1_68, (ebx_59 << 0x00000002) + 0x0804A860, rLoc24) : word32)
  Class: Eq_725
  DataType: word32
  OrigDataType: word32
T_731: (in 0x00000000 : word32)
  Class: Eq_653
  DataType: word32
  OrigDataType: word32
T_732: (in v15_114 : word32)
  Class: Eq_643
  DataType: up32
  OrigDataType: up32
T_733: (in 0x00000001 : word32)
  Class: Eq_733
  DataType: word32
  OrigDataType: word32
T_734: (in dwLoc14_115 + 0x00000001 : word32)
  Class: Eq_643
  DataType: word32
  OrigDataType: word32
T_735: (in 0x00000003 : word32)
  Class: Eq_643
  DataType: up32
  OrigDataType: up32
T_736: (in v15_114 <=u 0x00000003 : bool)
  Class: Eq_736
  DataType: bool
  OrigDataType: bool
T_737: (in 0x00000000 : word32)
  Class: Eq_692
  DataType: word32
  OrigDataType: word32
T_738: (in dwLoc14_118 : word32)
  Class: Eq_738
  DataType: ui32
  OrigDataType: ui32
T_739: (in 0x00000000 : word32)
  Class: Eq_738
  DataType: word32
  OrigDataType: word32
T_740: (in 0x00000000 : word32)
  Class: Eq_740
  DataType: int32
  OrigDataType: int32
T_741: (in 0x00000001 : word32)
  Class: Eq_741
  DataType: word32
  OrigDataType: word32
T_742: (in esi_110 - 0x00000001 : word32)
  Class: Eq_740
  DataType: int32
  OrigDataType: int32
T_743: (in 0x00000000 >= esi_110 - 0x00000001 : bool)
  Class: Eq_743
  DataType: bool
  OrigDataType: bool
T_744: (in ebx_156 : word32)
  Class: Eq_744
  DataType: ui32
  OrigDataType: ui32
T_745: (in 0x00000003 : word32)
  Class: Eq_745
  DataType: ui32
  OrigDataType: ui32
T_746: (in dwLoc14_118 * 0x00000003 : word32)
  Class: Eq_744
  DataType: ui32
  OrigDataType: ui32
T_747: (in 0x087D48B4 : word32)
  Class: Eq_747
  DataType: (ptr (struct (0 T_750 t0000)))
  OrigDataType: (ptr (struct (0 T_750 t0000)))
T_748: (in 0x00000004 : word32)
  Class: Eq_748
  DataType: ui32
  OrigDataType: ui32
T_749: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_749
  DataType: ui32
  OrigDataType: ui32
T_750: (in 0x087D48B4[ebx_156 * 0x00000004] : real32)
  Class: Eq_750
  DataType: real32
  OrigDataType: real32
T_751: (in 0x087D48A8 : word32)
  Class: Eq_751
  DataType: (ptr (struct (0 T_754 t0000)))
  OrigDataType: (ptr (struct (0 T_754 t0000)))
T_752: (in 0x00000004 : word32)
  Class: Eq_752
  DataType: ui32
  OrigDataType: ui32
T_753: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_753
  DataType: ui32
  OrigDataType: ui32
T_754: (in 0x087D48A8[ebx_156 * 0x00000004] : real32)
  Class: Eq_683
  DataType: real32
  OrigDataType: real32
T_755: (in 0x087D48B4[ebx_156 * 0x00000004] - 0x087D48A8[ebx_156 * 0x00000004] : word32)
  Class: Eq_755
  DataType: word32
  OrigDataType: word32
T_756: (in 0x087D487C : ptr32)
  Class: Eq_756
  DataType: (ptr (struct (0 T_757 t0000)))
  OrigDataType: (ptr (struct (0 T_757 t0000)))
T_757: (in Mem160[0x087D487C:real32] : real32)
  Class: Eq_755
  DataType: real32
  OrigDataType: real32
T_758: (in 0x087D48A0 : word32)
  Class: Eq_758
  DataType: (ptr (struct (0 T_761 t0000)))
  OrigDataType: (ptr (struct (0 T_761 t0000)))
T_759: (in 0x00000004 : word32)
  Class: Eq_759
  DataType: ui32
  OrigDataType: ui32
T_760: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_760
  DataType: ui32
  OrigDataType: ui32
T_761: (in 0x087D48A0[ebx_156 * 0x00000004] : real32)
  Class: Eq_663
  DataType: real32
  OrigDataType: real32
T_762: (in 0x087D48AC : word32)
  Class: Eq_762
  DataType: (ptr (struct (0 T_765 t0000)))
  OrigDataType: (ptr (struct (0 T_765 t0000)))
T_763: (in 0x00000004 : word32)
  Class: Eq_763
  DataType: ui32
  OrigDataType: ui32
T_764: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_764
  DataType: ui32
  OrigDataType: ui32
T_765: (in 0x087D48AC[ebx_156 * 0x00000004] : real32)
  Class: Eq_725
  DataType: real32
  OrigDataType: real32
T_766: (in 0x087D48A0[ebx_156 * 0x00000004] - 0x087D48AC[ebx_156 * 0x00000004] : word32)
  Class: Eq_766
  DataType: word32
  OrigDataType: word32
T_767: (in 0x087D4880 : ptr32)
  Class: Eq_767
  DataType: (ptr (struct (0 T_768 t0000)))
  OrigDataType: (ptr (struct (0 T_768 t0000)))
T_768: (in Mem163[0x087D4880:real32] : real32)
  Class: Eq_766
  DataType: real32
  OrigDataType: real32
T_769: (in 0x087D48B0 : word32)
  Class: Eq_769
  DataType: (ptr (struct (0 T_772 t0000)))
  OrigDataType: (ptr (struct (0 T_772 t0000)))
T_770: (in 0x00000004 : word32)
  Class: Eq_770
  DataType: ui32
  OrigDataType: ui32
T_771: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_771
  DataType: ui32
  OrigDataType: ui32
T_772: (in 0x087D48B0[ebx_156 * 0x00000004] : real32)
  Class: Eq_772
  DataType: real32
  OrigDataType: real32
T_773: (in 0x087D48A4 : word32)
  Class: Eq_773
  DataType: (ptr (struct (0 T_776 t0000)))
  OrigDataType: (ptr (struct (0 T_776 t0000)))
T_774: (in 0x00000004 : word32)
  Class: Eq_774
  DataType: ui32
  OrigDataType: ui32
T_775: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_775
  DataType: ui32
  OrigDataType: ui32
T_776: (in 0x087D48A4[ebx_156 * 0x00000004] : real32)
  Class: Eq_776
  DataType: real32
  OrigDataType: real32
T_777: (in 0x087D48B0[ebx_156 * 0x00000004] - 0x087D48A4[ebx_156 * 0x00000004] : word32)
  Class: Eq_777
  DataType: word32
  OrigDataType: word32
T_778: (in 0x087D4884 : ptr32)
  Class: Eq_778
  DataType: (ptr (struct (0 T_779 t0000)))
  OrigDataType: (ptr (struct (0 T_779 t0000)))
T_779: (in Mem166[0x087D4884:real32] : real32)
  Class: Eq_777
  DataType: real32
  OrigDataType: real32
T_780: (in rLoc4_171 : real64)
  Class: Eq_780
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_781: (in 0x0804A8F0 : ptr32)
  Class: Eq_781
  DataType: (ptr (struct (0 T_782 t0000)))
  OrigDataType: (ptr (struct (0 T_782 t0000)))
T_782: (in Mem166[0x0804A8F0:real32] : real32)
  Class: Eq_780
  DataType: real32
  OrigDataType: real32
T_783: (in rLoc3_170 : real64)
  Class: Eq_783
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_784: (in 0x087D55C8 : ptr32)
  Class: Eq_784
  DataType: (ptr (struct (0 T_785 t0000)))
  OrigDataType: (ptr (struct (0 T_785 t0000)))
T_785: (in Mem166[0x087D55C8:real32] : real32)
  Class: Eq_783
  DataType: real32
  OrigDataType: real32
T_786: (in rLoc4_179 : real64)
  Class: Eq_786
  DataType: real64
  OrigDataType: real64
T_787: (in sin : ptr32)
  Class: Eq_787
  DataType: (ptr (fn T_793 (T_792)))
  OrigDataType: (ptr (fn T_793 (T_792)))
T_788: (in 0x0804A8DC : ptr32)
  Class: Eq_788
  DataType: (ptr (struct (0 T_789 t0000)))
  OrigDataType: (ptr (struct (0 T_789 t0000)))
T_789: (in Mem166[0x0804A8DC:real32] : real32)
  Class: Eq_565
  DataType: real32
  OrigDataType: real32
T_790: (in rLoc2_153 * Mem166[0x0804A8DC:real32] : word32)
  Class: Eq_790
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_791: (in rLoc4_171 * rLoc4_171 : real64)
  Class: Eq_791
  DataType: real64
  OrigDataType: real64
T_792: (in rLoc2_153 * Mem166[0x0804A8DC:real32] + rLoc4_171 * rLoc4_171 : real64)
  Class: Eq_792
  DataType: real64
  OrigDataType: real64
T_793: (in sin(rLoc2_153 * Mem166[0x0804A8DC:real32] + rLoc4_171 * rLoc4_171) : real64)
  Class: Eq_793
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_794: (in 0x087D55C0 : ptr32)
  Class: Eq_794
  DataType: (ptr (struct (0 T_795 t0000)))
  OrigDataType: (ptr (struct (0 T_795 t0000)))
T_795: (in Mem166[0x087D55C0:real32] : real32)
  Class: Eq_500
  DataType: real32
  OrigDataType: real32
T_796: (in sin(rLoc2_153 * Mem166[0x0804A8DC:real32] + rLoc4_171 * rLoc4_171) * Mem166[0x087D55C0:real32] : word32)
  Class: Eq_786
  DataType: real32
  OrigDataType: real32
T_797: (in rLoc5_181 : real64)
  Class: Eq_797
  DataType: real64
  OrigDataType: real64
T_798: (in 0x0804A8F4 : ptr32)
  Class: Eq_798
  DataType: (ptr (struct (0 T_799 t0000)))
  OrigDataType: (ptr (struct (0 T_799 t0000)))
T_799: (in Mem166[0x0804A8F4:real32] : real32)
  Class: Eq_799
  DataType: real32
  OrigDataType: real32
T_800: (in rLoc4_171 * Mem166[0x0804A8F4:real32] : word32)
  Class: Eq_797
  DataType: real32
  OrigDataType: real32
T_801: (in rLoc5_181 * rLoc4_179 : real64)
  Class: Eq_801
  DataType: real64
  OrigDataType: real64
T_802: (in rLoc4_171 * (rLoc5_181 * rLoc4_179) : real64)
  Class: Eq_802
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_803: (in 0x087D48A4 : word32)
  Class: Eq_803
  DataType: (ptr (struct (0 T_806 t0000)))
  OrigDataType: (ptr (struct (0 T_806 t0000)))
T_804: (in 0x00000004 : word32)
  Class: Eq_804
  DataType: ui32
  OrigDataType: ui32
T_805: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_805
  DataType: ui32
  OrigDataType: ui32
T_806: (in 0x087D48A4[ebx_156 * 0x00000004] : real32)
  Class: Eq_776
  DataType: real32
  OrigDataType: real32
T_807: (in rLoc4_171 * (rLoc5_181 * rLoc4_179) + 0x087D48A4[ebx_156 * 0x00000004] : word32)
  Class: Eq_776
  DataType: real32
  OrigDataType: real32
T_808: (in 0x087D48A4 : word32)
  Class: Eq_808
  DataType: (ptr (struct (0 T_811 t0000)))
  OrigDataType: (ptr (struct (0 T_811 t0000)))
T_809: (in 0x00000004 : word32)
  Class: Eq_809
  DataType: ui32
  OrigDataType: ui32
T_810: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_810
  DataType: ui32
  OrigDataType: ui32
T_811: (in 0x087D48A4[ebx_156 * 0x00000004] : real32)
  Class: Eq_776
  DataType: real32
  OrigDataType: real32
T_812: (in rLoc2_206 : real64)
  Class: Eq_812
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_813: (in 1 : real64)
  Class: Eq_813
  DataType: real64
  OrigDataType: real64
T_814: (in rLoc5_181 + 1 : real64)
  Class: Eq_814
  DataType: real64
  OrigDataType: real64
T_815: (in (real64) dwLoc14_118 : real64)
  Class: Eq_815
  DataType: real64
  OrigDataType: real64
T_816: (in rLoc5_181 + 1 + (real64) dwLoc14_118 : real64)
  Class: Eq_812
  DataType: real64
  OrigDataType: real64
T_817: (in sin : ptr32)
  Class: Eq_817
  DataType: (ptr (fn T_826 (T_825)))
  OrigDataType: (ptr (fn T_826 (T_825)))
T_818: (in rLoc5_181 + 1 : real64)
  Class: Eq_818
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_819: (in 0x0804A8F8 : ptr32)
  Class: Eq_819
  DataType: (ptr (struct (0 T_820 t0000)))
  OrigDataType: (ptr (struct (0 T_820 t0000)))
T_820: (in Mem193[0x0804A8F8:real32] : real32)
  Class: Eq_820
  DataType: real32
  OrigDataType: real32
T_821: (in (rLoc5_181 + 1) * Mem193[0x0804A8F8:real32] : word32)
  Class: Eq_821
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_822: (in 0x0804A8FC : ptr32)
  Class: Eq_822
  DataType: (ptr (struct (0 T_823 t0000)))
  OrigDataType: (ptr (struct (0 T_823 t0000)))
T_823: (in Mem193[0x0804A8FC:real32] : real32)
  Class: Eq_823
  DataType: real32
  OrigDataType: real32
T_824: (in rLoc3_170 * Mem193[0x0804A8FC:real32] : word32)
  Class: Eq_824
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_825: (in (rLoc5_181 + 1) * Mem193[0x0804A8F8:real32] + rLoc3_170 * Mem193[0x0804A8FC:real32] : real64)
  Class: Eq_825
  DataType: real64
  OrigDataType: real64
T_826: (in sin((rLoc5_181 + 1) * Mem193[0x0804A8F8:real32] + rLoc3_170 * Mem193[0x0804A8FC:real32]) : real64)
  Class: Eq_826
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_827: (in 0x087D55C0 : ptr32)
  Class: Eq_827
  DataType: (ptr (struct (0 T_828 t0000)))
  OrigDataType: (ptr (struct (0 T_828 t0000)))
T_828: (in Mem193[0x087D55C0:real32] : real32)
  Class: Eq_500
  DataType: real32
  OrigDataType: real32
T_829: (in sin((rLoc5_181 + 1) * Mem193[0x0804A8F8:real32] + rLoc3_170 * Mem193[0x0804A8FC:real32]) * Mem193[0x087D55C0:real32] : word32)
  Class: Eq_829
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_830: (in sin((rLoc5_181 + 1) * Mem193[0x0804A8F8:real32] + rLoc3_170 * Mem193[0x0804A8FC:real32]) * Mem193[0x087D55C0:real32] * rLoc2_206 : real64)
  Class: Eq_830
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_831: (in 0x0804A900 : ptr32)
  Class: Eq_831
  DataType: (ptr (struct (0 T_832 t0000)))
  OrigDataType: (ptr (struct (0 T_832 t0000)))
T_832: (in Mem193[0x0804A900:real32] : real32)
  Class: Eq_832
  DataType: real32
  OrigDataType: real32
T_833: (in sin((rLoc5_181 + 1) * Mem193[0x0804A8F8:real32] + rLoc3_170 * Mem193[0x0804A8FC:real32]) * Mem193[0x087D55C0:real32] * rLoc2_206 * Mem193[0x0804A900:real32] : word32)
  Class: Eq_833
  DataType: real32
  OrigDataType: real32
T_834: (in 0x087D48A8 : word32)
  Class: Eq_834
  DataType: (ptr (struct (0 T_837 t0000)))
  OrigDataType: (ptr (struct (0 T_837 t0000)))
T_835: (in 0x00000004 : word32)
  Class: Eq_835
  DataType: ui32
  OrigDataType: ui32
T_836: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_836
  DataType: ui32
  OrigDataType: ui32
T_837: (in 0x087D48A8[ebx_156 * 0x00000004] : real32)
  Class: Eq_683
  DataType: real32
  OrigDataType: real32
T_838: (in sin((rLoc5_181 + 1) * Mem193[0x0804A8F8:real32] + rLoc3_170 * Mem193[0x0804A8FC:real32]) * Mem193[0x087D55C0:real32] * rLoc2_206 * Mem193[0x0804A900:real32] + 0x087D48A8[ebx_156 * 0x00000004] : word32)
  Class: Eq_683
  DataType: real32
  OrigDataType: real32
T_839: (in 0x087D48A8 : word32)
  Class: Eq_839
  DataType: (ptr (struct (0 T_842 t0000)))
  OrigDataType: (ptr (struct (0 T_842 t0000)))
T_840: (in 0x00000004 : word32)
  Class: Eq_840
  DataType: ui32
  OrigDataType: ui32
T_841: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_841
  DataType: ui32
  OrigDataType: ui32
T_842: (in 0x087D48A8[ebx_156 * 0x00000004] : real32)
  Class: Eq_683
  DataType: real32
  OrigDataType: real32
T_843: (in 0x087D558C : ptr32)
  Class: Eq_843
  DataType: (ptr (struct (0 T_844 t0000)))
  OrigDataType: (ptr (struct (0 T_844 t0000)))
T_844: (in Mem210[0x087D558C:word32] : word32)
  Class: Eq_844
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_845: (in 0x087D558C : ptr32)
  Class: Eq_845
  DataType: (ptr (struct (0 T_846 t0000)))
  OrigDataType: (ptr (struct (0 T_846 t0000)))
T_846: (in Mem210[0x087D558C:word32] : word32)
  Class: Eq_844
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_847: (in 0x087D558C : ptr32)
  Class: Eq_847
  DataType: (ptr (struct (0 T_848 t0000)))
  OrigDataType: (ptr (struct (0 T_848 t0000)))
T_848: (in Mem210[0x087D558C:word32] : word32)
  Class: Eq_844
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_849: (in 0x087D5580 : ptr32)
  Class: Eq_849
  DataType: (ptr (struct (0 T_850 t0000)))
  OrigDataType: (ptr (struct (0 T_850 t0000)))
T_850: (in Mem210[0x087D5580:word32] : word32)
  Class: Eq_850
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_851: (in 0x087D5598 : ptr32)
  Class: Eq_851
  DataType: (ptr (struct (0 T_852 t0000)))
  OrigDataType: (ptr (struct (0 T_852 t0000)))
T_852: (in Mem210[0x087D5598:word32] : word32)
  Class: Eq_852
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_853: (in 0x087D5564 : ptr32)
  Class: Eq_853
  DataType: (ptr (struct (0 T_854 t0000)))
  OrigDataType: (ptr (struct (0 T_854 t0000)))
T_854: (in Mem210[0x087D5564:word32] : word32)
  Class: Eq_854
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_855: (in 0x087D556C : ptr32)
  Class: Eq_855
  DataType: (ptr (struct (0 T_856 t0000)))
  OrigDataType: (ptr (struct (0 T_856 t0000)))
T_856: (in Mem210[0x087D556C:word32] : word32)
  Class: Eq_856
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_857: (in 0x087D556C : ptr32)
  Class: Eq_857
  DataType: (ptr (struct (0 T_858 t0000)))
  OrigDataType: (ptr (struct (0 T_858 t0000)))
T_858: (in Mem210[0x087D556C:word32] : word32)
  Class: Eq_856
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_859: (in 0x087D556C : ptr32)
  Class: Eq_859
  DataType: (ptr (struct (0 T_860 t0000)))
  OrigDataType: (ptr (struct (0 T_860 t0000)))
T_860: (in Mem210[0x087D556C:word32] : word32)
  Class: Eq_856
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_861: (in 0x087D556C : ptr32)
  Class: Eq_861
  DataType: (ptr (struct (0 T_862 t0000)))
  OrigDataType: (ptr (struct (0 T_862 t0000)))
T_862: (in Mem210[0x087D556C:word32] : word32)
  Class: Eq_856
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_863: (in 0x087D5568 : ptr32)
  Class: Eq_863
  DataType: (ptr (struct (0 T_864 t0000)))
  OrigDataType: (ptr (struct (0 T_864 t0000)))
T_864: (in Mem210[0x087D5568:word32] : word32)
  Class: Eq_864
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_865: (in 0x087D5580 : ptr32)
  Class: Eq_865
  DataType: (ptr (struct (0 T_866 t0000)))
  OrigDataType: (ptr (struct (0 T_866 t0000)))
T_866: (in Mem210[0x087D5580:word32] : word32)
  Class: Eq_850
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_867: (in 0x087D5590 : ptr32)
  Class: Eq_867
  DataType: (ptr (struct (0 T_868 t0000)))
  OrigDataType: (ptr (struct (0 T_868 t0000)))
T_868: (in Mem210[0x087D5590:word32] : word32)
  Class: Eq_868
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_869: (in 0x087D5564 : ptr32)
  Class: Eq_869
  DataType: (ptr (struct (0 T_870 t0000)))
  OrigDataType: (ptr (struct (0 T_870 t0000)))
T_870: (in Mem210[0x087D5564:word32] : word32)
  Class: Eq_854
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_871: (in 0x087D556C : ptr32)
  Class: Eq_871
  DataType: (ptr (struct (0 T_872 t0000)))
  OrigDataType: (ptr (struct (0 T_872 t0000)))
T_872: (in Mem210[0x087D556C:word32] : word32)
  Class: Eq_856
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_873: (in 0x087D556C : ptr32)
  Class: Eq_873
  DataType: (ptr (struct (0 T_874 t0000)))
  OrigDataType: (ptr (struct (0 T_874 t0000)))
T_874: (in Mem210[0x087D556C:word32] : word32)
  Class: Eq_856
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_875: (in 0x087D48AC : word32)
  Class: Eq_875
  DataType: (ptr (struct (0 T_878 t0000)))
  OrigDataType: (ptr (struct (0 T_878 t0000)))
T_876: (in 0x00000004 : word32)
  Class: Eq_876
  DataType: ui32
  OrigDataType: ui32
T_877: (in ebx_156 * 0x00000004 : word32)
  Class: Eq_877
  DataType: ui32
  OrigDataType: ui32
T_878: (in 0x087D48AC[ebx_156 * 0x00000004] : word32)
  Class: Eq_725
  DataType: word32
  OrigDataType: word32
T_879: (in 0x087D556C : ptr32)
  Class: Eq_879
  DataType: (ptr (struct (0 T_880 t0000)))
  OrigDataType: (ptr (struct (0 T_880 t0000)))
T_880: (in Mem210[0x087D556C:word32] : word32)
  Class: Eq_856
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_881: (in 0x087D556C : ptr32)
  Class: Eq_881
  DataType: (ptr (struct (0 T_882 t0000)))
  OrigDataType: (ptr (struct (0 T_882 t0000)))
T_882: (in Mem210[0x087D556C:word32] : word32)
  Class: Eq_856
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_883: (in 0x087D5568 : ptr32)
  Class: Eq_883
  DataType: (ptr (struct (0 T_884 t0000)))
  OrigDataType: (ptr (struct (0 T_884 t0000)))
T_884: (in Mem210[0x087D5568:word32] : word32)
  Class: Eq_864
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_885: (in v28_345 : word32)
  Class: Eq_738
  DataType: int32
  OrigDataType: int32
T_886: (in 0x00000001 : word32)
  Class: Eq_886
  DataType: word32
  OrigDataType: word32
T_887: (in dwLoc14_118 + 0x00000001 : word32)
  Class: Eq_738
  DataType: word32
  OrigDataType: word32
T_888: (in 0x0804A904 : ptr32)
  Class: Eq_888
  DataType: (ptr (struct (0 T_889 t0000)))
  OrigDataType: (ptr (struct (0 T_889 t0000)))
T_889: (in Mem210[0x0804A904:real32] : real32)
  Class: Eq_889
  DataType: real32
  OrigDataType: real32
T_890: (in rLoc2_206 * Mem210[0x0804A904:real32] : word32)
  Class: Eq_890
  DataType: real32
  OrigDataType: real32
T_891: (in 0x0804A908 : ptr32)
  Class: Eq_891
  DataType: (ptr (struct (0 T_892 t0000)))
  OrigDataType: (ptr (struct (0 T_892 t0000)))
T_892: (in Mem210[0x0804A908:real32] : real32)
  Class: Eq_892
  DataType: real32
  OrigDataType: real32
T_893: (in rLoc2_206 * Mem210[0x0804A904:real32] * Mem210[0x0804A908:real32] : word32)
  Class: Eq_651
  DataType: real32
  OrigDataType: real32
T_894: (in 0x00000001 : word32)
  Class: Eq_894
  DataType: word32
  OrigDataType: word32
T_895: (in esi_110 - 0x00000001 : word32)
  Class: Eq_738
  DataType: int32
  OrigDataType: int32
T_896: (in v28_345 < esi_110 - 0x00000001 : bool)
  Class: Eq_896
  DataType: bool
  OrigDataType: bool
T_897: (in ecx : word32)
  Class: Eq_897
  DataType: word32
  OrigDataType: word32
T_898: (in dwArg04 : word32)
  Class: Eq_898
  DataType: word32
  OrigDataType: word32
T_899: (in (real64) dwArg04 : real64)
  Class: Eq_783
  DataType: real64
  OrigDataType: real64
T_900: (in 0x087D55C8 : ptr32)
  Class: Eq_900
  DataType: (ptr (struct (0 T_901 t0000)))
  OrigDataType: (ptr (struct (0 T_901 t0000)))
T_901: (in Mem22[0x087D55C8:real32] : real32)
  Class: Eq_783
  DataType: real32
  OrigDataType: real32
T_902: (in rLoc1_26 : real64)
  Class: Eq_902
  DataType: real64
  OrigDataType: real64
T_903: (in 0x0804A914 : ptr32)
  Class: Eq_903
  DataType: (ptr (struct (0 T_904 t0000)))
  OrigDataType: (ptr (struct (0 T_904 t0000)))
T_904: (in Mem22[0x0804A914:real32] : real32)
  Class: Eq_904
  DataType: real32
  OrigDataType: real32
T_905: (in 0x0804A72E : ptr32)
  Class: Eq_905
  DataType: (ptr (struct (0 T_906 t0000)))
  OrigDataType: (ptr (struct (0 T_906 t0000)))
T_906: (in Mem22[0x0804A72E:word32] : word32)
  Class: Eq_906
  DataType: word32
  OrigDataType: word32
T_907: (in (real64) Mem22[0x0804A72E:word32] : real64)
  Class: Eq_907
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_908: (in Mem22[0x0804A914:real32] * (real64) Mem22[0x0804A72E:word32] : word32)
  Class: Eq_908
  DataType: real32
  OrigDataType: real32
T_909: (in 0x0804A918 : ptr32)
  Class: Eq_909
  DataType: (ptr (struct (0 T_910 t0000)))
  OrigDataType: (ptr (struct (0 T_910 t0000)))
T_910: (in Mem22[0x0804A918:real32] : real32)
  Class: Eq_910
  DataType: real32
  OrigDataType: real32
T_911: (in Mem22[0x0804A914:real32] * (real64) Mem22[0x0804A72E:word32] - Mem22[0x0804A918:real32] : word32)
  Class: Eq_911
  DataType: real32
  OrigDataType: real32
T_912: (in 0x0804A91C : ptr32)
  Class: Eq_912
  DataType: (ptr (struct (0 T_913 t0000)))
  OrigDataType: (ptr (struct (0 T_913 t0000)))
T_913: (in Mem22[0x0804A91C:real32] : real32)
  Class: Eq_913
  DataType: real32
  OrigDataType: real32
T_914: (in (Mem22[0x0804A914:real32] * (real64) Mem22[0x0804A72E:word32] - Mem22[0x0804A918:real32]) * Mem22[0x0804A91C:real32] : word32)
  Class: Eq_902
  DataType: real32
  OrigDataType: real32
T_915: (in wLoc12_27 : word16)
  Class: Eq_915
  DataType: word16
  OrigDataType: word16
T_916: (in __fstcw : ptr32)
  Class: Eq_916
  DataType: (ptr (fn T_917 ()))
  OrigDataType: (ptr (fn T_917 ()))
T_917: (in __fstcw() : uint16)
  Class: Eq_915
  DataType: uint16
  OrigDataType: uint16
T_918: (in ax_30 : word16)
  Class: Eq_918
  DataType: word16
  OrigDataType: word16
T_919: (in 0x0C : byte)
  Class: Eq_919
  DataType: byte
  OrigDataType: byte
T_920: (in DPB(wLoc12_27, 0x0C, 8, 8) : word16)
  Class: Eq_918
  DataType: word16
  OrigDataType: word16
T_921: (in __fldcw : ptr32)
  Class: Eq_921
  DataType: (ptr (fn T_922 (T_918)))
  OrigDataType: (ptr (fn T_922 (T_918)))
T_922: (in __fldcw(ax_30) : void)
  Class: Eq_922
  DataType: void
  OrigDataType: void
T_923: (in (int32) rLoc1_26 : int32)
  Class: Eq_506
  DataType: int32
  OrigDataType: int32
T_924: (in 0x087D55C4 : ptr32)
  Class: Eq_924
  DataType: (ptr (struct (0 T_925 t0000)))
  OrigDataType: (ptr (struct (0 T_925 t0000)))
T_925: (in Mem32[0x087D55C4:int32] : int32)
  Class: Eq_506
  DataType: int32
  OrigDataType: int32
T_926: (in __fldcw : ptr32)
  Class: Eq_926
  DataType: (ptr (fn T_927 (T_915)))
  OrigDataType: (ptr (fn T_927 (T_915)))
T_927: (in __fldcw(wLoc12_27) : void)
  Class: Eq_927
  DataType: void
  OrigDataType: void
T_928: (in 0x087D55C4 : ptr32)
  Class: Eq_928
  DataType: (ptr (struct (0 T_929 t0000)))
  OrigDataType: (ptr (struct (0 T_929 t0000)))
T_929: (in Mem32[0x087D55C4:word32] : word32)
  Class: Eq_506
  DataType: int32
  OrigDataType: int32
T_930: (in 0x0000003A : word32)
  Class: Eq_506
  DataType: int32
  OrigDataType: int32
T_931: (in Mem32[0x087D55C4:word32] <= 0x0000003A : bool)
  Class: Eq_931
  DataType: bool
  OrigDataType: bool
T_932: (in rLoc1_38 : real64)
  Class: Eq_932
  DataType: real64
  OrigDataType: real64
T_933: (in 0x0804A920 : ptr32)
  Class: Eq_933
  DataType: (ptr (struct (0 T_934 t0000)))
  OrigDataType: (ptr (struct (0 T_934 t0000)))
T_934: (in Mem32[0x0804A920:real32] : real32)
  Class: Eq_934
  DataType: real32
  OrigDataType: real32
T_935: (in (real64) dwArg04 : real64)
  Class: Eq_935
  DataType: (union (real32 u0) (real64 u1))
  OrigDataType: (union (real32 u0) (real64 u1))
T_936: (in Mem32[0x0804A920:real32] * (real64) dwArg04 : word32)
  Class: Eq_932
  DataType: real32
  OrigDataType: real32
T_937: (in __fldcw : ptr32)
  Class: Eq_937
  DataType: (ptr (fn T_938 (T_918)))
  OrigDataType: (ptr (fn T_938 (T_918)))
T_938: (in __fldcw(ax_30) : void)
  Class: Eq_938
  DataType: void
  OrigDataType: void
T_939: (in __fldcw : ptr32)
  Class: Eq_939
  DataType: (ptr (fn T_940 (T_915)))
  OrigDataType: (ptr (fn T_940 (T_915)))
T_940: (in __fldcw(wLoc12_27) : void)
  Class: Eq_940
  DataType: void
  OrigDataType: void
T_941: (in dwLoc18_40 : int32)
  Class: Eq_941
  DataType: int32
  OrigDataType: int32
T_942: (in (int32) rLoc1_38 : int32)
  Class: Eq_941
  DataType: int32
  OrigDataType: int32
T_943: (in 0x0804A8B4 : ptr32)
  Class: Eq_943
  DataType: (ptr (struct (0 T_944 t0000)))
  OrigDataType: (ptr (struct (0 T_944 t0000)))
T_944: (in Mem32[0x0804A8B4:word32] : word32)
  Class: Eq_941
  DataType: word32
  OrigDataType: word32
T_945: (in dwLoc18_40 == Mem32[0x0804A8B4:word32] : bool)
  Class: Eq_945
  DataType: bool
  OrigDataType: bool
T_946: (in 0x01 : byte)
  Class: Eq_450
  DataType: byte
  OrigDataType: byte
T_947: (in 0x0804A74C : ptr32)
  Class: Eq_947
  DataType: (ptr (struct (0 T_948 t0000)))
  OrigDataType: (ptr (struct (0 T_948 t0000)))
T_948: (in Mem349[0x0804A74C:byte] : byte)
  Class: Eq_450
  DataType: byte
  OrigDataType: byte
T_949: (in edi_113 : word32)
  Class: Eq_949
  DataType: word32
  OrigDataType: word32
T_950: (in 0x00000004 : word32)
  Class: Eq_950
  DataType: word32
  OrigDataType: word32
T_951: (in ebp - 0x00000004 : word32)
  Class: Eq_951
  DataType: word32
  OrigDataType: word32
T_952: (in Mem32[ebp - 0x00000004:word32] : word32)
  Class: Eq_952
  DataType: word32
  OrigDataType: word32
T_953: (in *ediOut : word32)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_954: (in ebp_115 : word32)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in 0x00000000 : word32)
  Class: Eq_955
  DataType: 
  OrigDataType: 
T_956: (in ebp + 0x00000000 : word32)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in Mem32[ebp + 0x00000000:word32] : word32)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_958: (in *ebpOut : word32)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_959: (in 0x0804A8B4 : word32)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_960: (in Mem119[0x0804A8B4:word32] : word32)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_961: (in ebx_120 : word32)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in 0x00000000 : word32)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_963: (in ebx_350 : word32)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_964: (in 0x00000001 : word32)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in ebx_350 + 0x00000001 : word32)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_966: (in 0x0000000F : word32)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_967: (in ebx_120 <=u 0x0000000F : bool)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in ecx_326 : word32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in 0x00000001 : word32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_970: (in eax_332 : word32)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_971: (in 0x00000009 : word32)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in ebx_350 * 0x00000009 : word32)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_973: (in 0x0804A924 : ptr32)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in Mem119[0x0804A924:real32] : real32)
  Class: Eq_974
  DataType: 
  OrigDataType: 
T_975: (in 0x087D4840 : word32)
  Class: Eq_975
  DataType: 
  OrigDataType: 
T_976: (in 4F : real32)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in ecx_326 * 4F : word32)
  Class: Eq_977
  DataType: 
  OrigDataType: 
T_978: (in 0x087D4840[ecx_326 * 4F] : real32)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_979: (in Mem119[0x0804A924:real32] * 0x087D4840[ecx_326 * 4F] : real64)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in 0x0804A760 : word32)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_981: (in ecx_326 + 0x0804A760 : word32)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_982: (in ecx_326 + 0x0804A760 + eax_332 : word32)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in Mem119[ecx_326 + 0x0804A760 + eax_332:byte] : byte)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_984: (in (int16) Mem119[ecx_326 + 0x0804A760 + eax_332:byte] : int16)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_985: (in DPB(eax_332, (int16) Mem119[ecx_326 + 0x0804A760 + eax_332:byte], 0, 16) : word32)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in (int16) DPB(eax_332, (int16) Mem119[ecx_326 + 0x0804A760 + eax_332:byte], 0, 16) : int16)
  Class: Eq_986
  DataType: 
  OrigDataType: 
T_987: (in (real64) (int16) DPB(eax_332, (int16) Mem119[ecx_326 + 0x0804A760 + eax_332:byte], 0, 16) : real64)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_988: (in 0x0804A928 : ptr32)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in Mem119[0x0804A928:real32] : real32)
  Class: Eq_989
  DataType: 
  OrigDataType: 
T_990: (in (real64) (int16) DPB(eax_332, (int16) Mem119[ecx_326 + 0x0804A760 + eax_332:byte], 0, 16) * Mem119[0x0804A928:real32] : word32)
  Class: Eq_990
  DataType: 
  OrigDataType: 
T_991: (in Mem119[0x0804A924:real32] * 0x087D4840[ecx_326 * 4F] + (real64) ((int16) DPB(eax_332, (int16) Mem119[(ecx_326 + 0x0804A760) + eax_332:byte], 0, 16)) * Mem119[0x0804A928:real32] : real64)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_992: (in 0x087D4840 : word32)
  Class: Eq_992
  DataType: 
  OrigDataType: 
T_993: (in 4F : real32)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in ecx_326 * 4F : word32)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_995: (in 0x087D4840[ecx_326 * 4F] : real32)
  Class: Eq_991
  DataType: 
  OrigDataType: 
T_996: (in 0x00000001 : word32)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in ecx_326 + 0x00000001 : word32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_998: (in 0x00000009 : word32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_999: (in ecx_326 <= 0x00000009 : bool)
  Class: Eq_999
  DataType: 
  OrigDataType: 
T_1000: (in 0x087D5578 : ptr32)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1001: (in Mem119[0x087D5578:word32] : word32)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1002: (in 0x087D557C : ptr32)
  Class: Eq_1002
  DataType: 
  OrigDataType: 
T_1003: (in Mem119[0x087D557C:word32] : word32)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1004: (in 0x087D5570 : ptr32)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1005: (in Mem119[0x087D5570:word32] : word32)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1006: (in 0x087D5574 : ptr32)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in Mem119[0x087D5574:word32] : word32)
  Class: Eq_1007
  DataType: 
  OrigDataType: 
T_1008: (in eax_146 : word32)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1009: (in 0x47AE147B : word32)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1010: (in 0x087D55A0 : ptr32)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1011: (in Mem119[0x087D55A0:word32] : word32)
  Class: Eq_1011
  DataType: 
  OrigDataType: 
T_1012: (in 0x087D5570 : ptr32)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1013: (in Mem119[0x087D5570:word32] : word32)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1014: (in 0x087D5574 : ptr32)
  Class: Eq_1014
  DataType: 
  OrigDataType: 
T_1015: (in Mem119[0x087D5574:word32] : word32)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in 0x087D5588 : ptr32)
  Class: Eq_1016
  DataType: 
  OrigDataType: 
T_1017: (in Mem119[0x087D5588:word32] : word32)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1018: (in 0x087D5584 : ptr32)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1019: (in Mem119[0x087D5584:word32] : word32)
  Class: Eq_1019
  DataType: 
  OrigDataType: 
T_1020: (in 0x0804A930 : ptr32)
  Class: Eq_1020
  DataType: 
  OrigDataType: 
T_1021: (in Mem119[0x0804A930:real32] : real32)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1022: (in 0x087D485C : ptr32)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1023: (in Mem119[0x087D485C:real32] : real32)
  Class: Eq_1023
  DataType: 
  OrigDataType: 
T_1024: (in Mem119[0x0804A930:real32] * Mem119[0x087D485C:real32] : word32)
  Class: Eq_1024
  DataType: 
  OrigDataType: 
T_1025: (in 0x087D5560 : ptr32)
  Class: Eq_1025
  DataType: 
  OrigDataType: 
T_1026: (in Mem119[0x087D5560:real32] : real32)
  Class: Eq_1026
  DataType: 
  OrigDataType: 
T_1027: (in Mem119[0x0804A930:real32] * Mem119[0x087D485C:real32] + Mem119[0x087D5560:real32] : word32)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1028: (in 0x087D5560 : ptr32)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1029: (in Mem198[0x087D5560:real32] : real32)
  Class: Eq_1027
  DataType: 
  OrigDataType: 
T_1030: (in 0x087D5584 : ptr32)
  Class: Eq_1030
  DataType: 
  OrigDataType: 
T_1031: (in Mem198[0x087D5584:word32] : word32)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1032: (in 0x087D55C4 : ptr32)
  Class: Eq_1032
  DataType: 
  OrigDataType: 
T_1033: (in Mem198[0x087D55C4:word32] : word32)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1034: (in 0x0000002F : word32)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1035: (in Mem198[0x087D55C4:word32] > 0x0000002F : bool)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1036: (in eax_125 : word32)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1037: (in 0x0804A769 : word32)
  Class: Eq_1037
  DataType: 
  OrigDataType: 
T_1038: (in ebx_350 + 0x0804A769 : word32)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_1039: (in 0x08 : byte)
  Class: Eq_1039
  DataType: 
  OrigDataType: 
T_1040: (in ebx_350 * 0x08 : word32)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1041: (in (ebx_350 + 0x0804A769)[ebx_350 * 0x08] : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1042: (in (int32) (ebx_350 + 0x0804A769)[ebx_350 * 0x08] : int32)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1043: (in 0x087D55C4 : ptr32)
  Class: Eq_1043
  DataType: 
  OrigDataType: 
T_1044: (in Mem119[0x087D55C4:word32] : word32)
  Class: Eq_1036
  DataType: 
  OrigDataType: 
T_1045: (in Mem119[0x087D55C4:word32] >= eax_125 : bool)
  Class: Eq_1045
  DataType: 
  OrigDataType: 
T_1046: (in fp : ptr32)
  Class: Eq_1046
  DataType: 
  OrigDataType: 
T_1047: (in 0x00000020 : word32)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1048: (in fp - 0x00000020 : word32)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1049: (in Mem219[fp - 0x00000020:word32] : word32)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1050: (in 0x0804A8B8 : word32)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1051: (in 0x00000024 : word32)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1052: (in fp - 0x00000024 : word32)
  Class: Eq_1052
  DataType: 
  OrigDataType: 
T_1053: (in Mem221[fp - 0x00000024:word32] : word32)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1054: (in 0x00001200 : word32)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1055: (in 0x00000028 : word32)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1056: (in fp - 0x00000028 : word32)
  Class: Eq_1056
  DataType: 
  OrigDataType: 
T_1057: (in Mem223[fp - 0x00000028:word32] : word32)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1058: (in 0x087D5594 : ptr32)
  Class: Eq_1058
  DataType: 
  OrigDataType: 
T_1059: (in Mem223[0x087D5594:word32] : word32)
  Class: Eq_1059
  DataType: 
  OrigDataType: 
T_1060: (in 0x087D558C : ptr32)
  Class: Eq_1060
  DataType: 
  OrigDataType: 
T_1061: (in Mem223[0x087D558C:word32] : word32)
  Class: Eq_1061
  DataType: 
  OrigDataType: 
T_1062: (in 0x087D558C : ptr32)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1063: (in Mem223[0x087D558C:word32] : word32)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1064: (in 0x3F800000 : word32)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1065: (in 0x00000030 : word32)
  Class: Eq_1065
  DataType: 
  OrigDataType: 
T_1066: (in fp - 0x00000030 : word32)
  Class: Eq_1066
  DataType: 
  OrigDataType: 
T_1067: (in Mem229[fp - 0x00000030:word32] : word32)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1068: (in 0x00000000 : word32)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1069: (in 0x00000034 : word32)
  Class: Eq_1069
  DataType: 
  OrigDataType: 
T_1070: (in fp - 0x00000034 : word32)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1071: (in Mem232[fp - 0x00000034:word32] : word32)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1072: (in 0x00000000 : word32)
  Class: Eq_1072
  DataType: 
  OrigDataType: 
T_1073: (in 0x00000038 : word32)
  Class: Eq_1073
  DataType: 
  OrigDataType: 
T_1074: (in fp - 0x00000038 : word32)
  Class: Eq_1074
  DataType: 
  OrigDataType: 
T_1075: (in Mem234[fp - 0x00000038:word32] : word32)
  Class: Eq_1072
  DataType: 
  OrigDataType: 
T_1076: (in 0x087D5584 : ptr32)
  Class: Eq_1076
  DataType: 
  OrigDataType: 
T_1077: (in Mem234[0x087D5584:word32] : word32)
  Class: Eq_1077
  DataType: 
  OrigDataType: 
T_1078: (in 0x087D5590 : ptr32)
  Class: Eq_1078
  DataType: 
  OrigDataType: 
T_1079: (in Mem198[0x087D5590:word32] : word32)
  Class: Eq_1079
  DataType: 
  OrigDataType: 
T_1080: (in 0x087D559C : ptr32)
  Class: Eq_1080
  DataType: 
  OrigDataType: 
T_1081: (in Mem198[0x087D559C:word32] : word32)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1082: (in v20_290 : real32)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1083: (in 0x0804A8E4 : ptr32)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1084: (in Mem198[0x0804A8E4:real32] : real32)
  Class: Eq_1084
  DataType: 
  OrigDataType: 
T_1085: (in sin : ptr32)
  Class: Eq_1085
  DataType: 
  OrigDataType: 
T_1086: (in ebx_278 : word32)
  Class: Eq_1086
  DataType: 
  OrigDataType: 
T_1087: (in (real64) ebx_278 : real64)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1088: (in 0x0804A934 : ptr32)
  Class: Eq_1088
  DataType: 
  OrigDataType: 
T_1089: (in Mem198[0x0804A934:real32] : real32)
  Class: Eq_1089
  DataType: 
  OrigDataType: 
T_1090: (in (real64) ebx_278 * Mem198[0x0804A934:real32] : word32)
  Class: Eq_1090
  DataType: 
  OrigDataType: 
T_1091: (in sin((real64) ebx_278 * Mem198[0x0804A934:real32]) : real64)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1092: (in Mem198[0x0804A8E4:real32] - sin((real64) ebx_278 * Mem198[0x0804A934:real32]) : word32)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1093: (in Mem291[0x0804A8E4:real32] : real32)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1094: (in 0x087D5580 : ptr32)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1095: (in Mem291[0x087D5580:word32] : word32)
  Class: Eq_1095
  DataType: 
  OrigDataType: 
T_1096: (in 0x087D556C : ptr32)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1097: (in Mem291[0x087D556C:word32] : word32)
  Class: Eq_1097
  DataType: 
  OrigDataType: 
T_1098: (in 0x00000001 : word32)
  Class: Eq_1098
  DataType: 
  OrigDataType: 
T_1099: (in ebx_278 + 0x00000001 : word32)
  Class: Eq_1086
  DataType: 
  OrigDataType: 
T_1100: (in 0x000003FF : word32)
  Class: Eq_1086
  DataType: 
  OrigDataType: 
T_1101: (in ebx_278 <= 0x000003FF : bool)
  Class: Eq_1101
  DataType: 
  OrigDataType: 
T_1102: (in 0x087D5568 : ptr32)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1103: (in Mem291[0x087D5568:word32] : word32)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1104: (in 0x00000000 : word32)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1105: (in 0x00000024 : word32)
  Class: Eq_1105
  DataType: 
  OrigDataType: 
T_1106: (in fp - 0x00000024 : word32)
  Class: Eq_1106
  DataType: 
  OrigDataType: 
T_1107: (in Mem317[fp - 0x00000024:word32] : word32)
  Class: Eq_1104
  DataType: 
  OrigDataType: 
T_1108: (in 0x00000000 : word32)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1109: (in 0x087D5584 : ptr32)
  Class: Eq_1109
  DataType: 
  OrigDataType: 
T_1110: (in Mem317[0x087D5584:word32] : word32)
  Class: Eq_1110
  DataType: 
  OrigDataType: 
T_1111: (in <invalid> : void)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1112: (in 0x087D5564 : ptr32)
  Class: Eq_1112
  DataType: 
  OrigDataType: 
T_1113: (in Mem198[0x087D5564:word32] : word32)
  Class: Eq_1113
  DataType: 
  OrigDataType: 
T_1114: (in 0x00000000 : word32)
  Class: Eq_1086
  DataType: 
  OrigDataType: 
T_1115: (in 0x087D5584 : ptr32)
  Class: Eq_1115
  DataType: 
  OrigDataType: 
T_1116: (in Mem234[0x087D5584:word32] : word32)
  Class: Eq_1116
  DataType: 
  OrigDataType: 
T_1117: (in fn08048B1E : ptr32)
  Class: Eq_1117
  DataType: 
  OrigDataType: 
T_1118: (in signature of fn08048B1E : void)
  Class: Eq_1117
  DataType: 
  OrigDataType: 
T_1119: (in rArg04 : real32)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1120: (in sin : ptr32)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1121: (in 0x0804A900 : ptr32)
  Class: Eq_1121
  DataType: 
  OrigDataType: 
T_1122: (in Mem234[0x0804A900:real32] : real32)
  Class: Eq_1122
  DataType: 
  OrigDataType: 
T_1123: (in (real64) dwArg04 : real64)
  Class: Eq_1123
  DataType: 
  OrigDataType: 
T_1124: (in Mem234[0x0804A900:real32] * (real64) dwArg04 : word32)
  Class: Eq_1124
  DataType: 
  OrigDataType: 
T_1125: (in sin(Mem234[0x0804A900:real32] * (real64) dwArg04) : real64)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1126: (in 0x0804A8DC : ptr32)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1127: (in Mem234[0x0804A8DC:real32] : real32)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1128: (in sin(Mem234[0x0804A900:real32] * (real64) dwArg04) * Mem234[0x0804A8DC:real32] : word32)
  Class: Eq_1128
  DataType: 
  OrigDataType: 
T_1129: (in 0x0804A8DC : ptr32)
  Class: Eq_1129
  DataType: 
  OrigDataType: 
T_1130: (in Mem234[0x0804A8DC:real32] : real32)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1131: (in sin(Mem234[0x0804A900:real32] * (real64) dwArg04) * Mem234[0x0804A8DC:real32] + Mem234[0x0804A8DC:real32] : word32)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1132: (in fn08048B1E(sin(Mem234[0x0804A900:real32] * (real64) dwArg04) * Mem234[0x0804A8DC:real32] + Mem234[0x0804A8DC:real32]) : word32)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_1133: (in dlopen : ptr32)
  Class: Eq_1133
  DataType: 
  OrigDataType: 
T_1134: (in edi_38 : word32)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1135: (in 0x087D5564 : word32)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1136: (in esi_39 : word32)
  Class: Eq_1136
  DataType: 
  OrigDataType: 
T_1137: (in 0x0804A945 : word32)
  Class: Eq_1136
  DataType: 
  OrigDataType: 
T_1138: (in 0x0804A93C : word32)
  Class: Eq_1138
  DataType: 
  OrigDataType: 
T_1139: (in fp : ptr32)
  Class: Eq_1139
  DataType: 
  OrigDataType: 
T_1140: (in 0x00000028 : word32)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1141: (in fp - 0x00000028 : word32)
  Class: Eq_1141
  DataType: 
  OrigDataType: 
T_1142: (in Mem58[fp - 0x00000028:word32] : word32)
  Class: Eq_1138
  DataType: 
  OrigDataType: 
T_1143: (in dlsym : ptr32)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1144: (in eax_51 : word32)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1145: (in 0x00000000 : word32)
  Class: Eq_1145
  DataType: 
  OrigDataType: 
T_1146: (in edi_38 + 0x00000000 : word32)
  Class: Eq_1146
  DataType: 
  OrigDataType: 
T_1147: (in Mem59[edi_38 + 0x00000000:word32] : word32)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1148: (in 0x00000004 : word32)
  Class: Eq_1148
  DataType: 
  OrigDataType: 
T_1149: (in edi_38 + 0x00000004 : word32)
  Class: Eq_1134
  DataType: 
  OrigDataType: 
T_1150: (in 0x00000000 : word32)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1151: (in esi_39 + 0x00000000 : word32)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1152: (in Mem0[esi_39 + 0x00000000:word32] : word32)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1153: (in 0x00000004 : word32)
  Class: Eq_1153
  DataType: 
  OrigDataType: 
T_1154: (in esi_39 + 0x00000004 : word32)
  Class: Eq_1136
  DataType: 
  OrigDataType: 
T_1155: (in 0x00000000 : word32)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1156: (in eax_51 == 0x00000000 : bool)
  Class: Eq_1156
  DataType: 
  OrigDataType: 
T_1157:
  Class: Eq_1157
  DataType: 
  OrigDataType: (struct 0004 (0 T_38 t0000))
T_1158:
  Class: Eq_1158
  DataType: 
  OrigDataType: (struct 0004 (0 T_57 t0000))
T_1159:
  Class: Eq_1159
  DataType: 
  OrigDataType: (struct 0004 (0 T_67 t0000))
T_1160:
  Class: Eq_1160
  DataType: 
  OrigDataType: (struct 0004 (0 T_89 t0000))
T_1161:
  Class: Eq_1161
  DataType: 
  OrigDataType: (struct 0004 (0 T_296 t0000))
T_1162:
  Class: Eq_1162
  DataType: 
  OrigDataType: (struct 0002 (0 T_463 t0000))
T_1163:
  Class: Eq_1163
  DataType: 
  OrigDataType: (struct 0004 (0 T_555 t0000))
T_1164:
  Class: Eq_1164
  DataType: 
  OrigDataType: (struct 0004 (0 T_558 t0000))
T_1165:
  Class: Eq_1165
  DataType: 
  OrigDataType: (struct 0004 (0 T_573 t0000))
T_1166:
  Class: Eq_1163
  DataType: 
  OrigDataType: (struct 0004 (0 T_578 t0000))
T_1167:
  Class: Eq_1167
  DataType: 
  OrigDataType: (struct 0004 (0 T_592 t0000))
T_1168:
  Class: Eq_1165
  DataType: 
  OrigDataType: (struct 0004 (0 T_597 t0000))
T_1169:
  Class: Eq_1163
  DataType: 
  OrigDataType: (struct 0004 (0 T_610 t0000))
T_1170:
  Class: Eq_1165
  DataType: 
  OrigDataType: (struct 0004 (0 T_625 t0000))
T_1171:
  Class: Eq_1171
  DataType: 
  OrigDataType: (struct 0004 (0 T_633 t0000))
*/
