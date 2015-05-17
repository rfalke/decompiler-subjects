// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_367/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in si_8 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_3: (in ax_9 : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_4: (in fn0C00_014D : ptr32)
  Class: Eq_4
  DataType: (ptr (fn T_12 (T_9, T_10, T_11)))
  OrigDataType: (ptr (fn T_12 (T_9, T_10, T_11)))
T_5: (in signature of fn0C00_014D : void)
  Class: Eq_4
  DataType: 
  OrigDataType: 
T_6: (in si : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_7: (in ds : selector)
  Class: Eq_7
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_8: (in siOut : ptr16)
  Class: Eq_8
  DataType: ptr16
  OrigDataType: ptr16
T_9: (in 0x02FA : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_10: (in ds : selector)
  Class: Eq_7
  DataType: (ptr (segment (156 (arr T_103) a0156)))
  OrigDataType: (ptr (segment (156 (arr T_103) a0156)))
T_11: (in out si_8 : ptr16)
  Class: Eq_8
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_12: (in fn0C00_014D(0x02FA, ds, out si_8) : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_13: (in si_14 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_14: (in ax_15 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in fn0C00_014D : ptr32)
  Class: Eq_4
  DataType: (ptr (fn T_17 (T_2, T_10, T_16)))
  OrigDataType: (ptr (fn T_17 (T_2, T_10, T_16)))
T_16: (in out si_14 : ptr16)
  Class: Eq_8
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_17: (in fn0C00_014D(si_8, ds, out si_14) : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_18: (in si_22 : word16)
  Class: Eq_18
  DataType: (memptr T_10 (struct (0 T_30 t0000)))
  OrigDataType: (memptr T_10 (struct (0 T_30 t0000)))
T_19: (in fn0C00_014D : ptr32)
  Class: Eq_4
  DataType: (ptr (fn T_21 (T_13, T_10, T_20)))
  OrigDataType: (ptr (fn T_21 (T_13, T_10, T_20)))
T_20: (in out si_22 : ptr16)
  Class: Eq_8
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_21: (in fn0C00_014D(si_14, ds, out si_22) : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in ax_18 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in ax_15 + si_14 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_24: (in si_33 : word16)
  Class: Eq_24
  DataType: cups16
  OrigDataType: cups16
T_25: (in 0x0006 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in ax_18 + 0x0006 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_27: (in ax_34 : word16)
  Class: Eq_24
  DataType: cups16
  OrigDataType: cups16
T_28: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in si_22 + 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem0[ds:si_22 + 0x0000:word16] : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in 0x00 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in DPB(Mem0[ds:si_22 + 0x0000:word16], 0x00, 8, 8) : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0100 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in ax_9 + 0x0100 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in DPB(Mem0[ds:si_22 + 0x0000:word16], 0x00, 8, 8) + (ax_9 + 0x0100) : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_36: (in ax_18 + 0x0006 : word16)
  Class: Eq_24
  DataType: cups16
  OrigDataType: cups16
T_37: (in ax_34 <=u ax_18 + 0x0006 : bool)
  Class: Eq_37
  DataType: bool
  OrigDataType: bool
T_38: (in di_43 : word16)
  Class: Eq_24
  DataType: (memptr T_53 (struct 0001 (0 T_70 t0000)))
  OrigDataType: (memptr T_53 (struct 0001 (0 T_70 t0000)))
T_39: (in si_46 : word16)
  Class: Eq_39
  DataType: (memptr T_10 (struct 0001 (0 T_67 t0000)))
  OrigDataType: (memptr T_10 (struct 0001 (0 T_67 t0000)))
T_40: (in 0x0156 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_41: (in cx_47 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x01A0 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_43: (in si_60 : word16)
  Class: Eq_43
  DataType: (memptr T_10 (struct 0001 (0 T_52 t0000)))
  OrigDataType: (memptr T_10 (struct 0001 (0 T_52 t0000)))
T_44: (in 0x0005 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in ax_18 + 0x0005 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_46: (in di_61 : word16)
  Class: Eq_46
  DataType: (memptr T_53 (struct 0001 (0 T_56 t0000)))
  OrigDataType: (memptr T_53 (struct 0001 (0 T_56 t0000)))
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in ax_34 - 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_49: (in cx_63 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in si_60 + 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in Mem0[ds:si_60 + 0x0000:byte] : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in es : selector)
  Class: Eq_53
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_54: (in 0x0000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in di_61 + 0x0000 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem68[es:di_61 + 0x0000:byte] : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_57: (in 0x0001 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in si_60 - 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in di_61 - 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in cx_63 - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_63: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_64: (in cx_63 == 0x0000 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in si_46 + 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in Mem0[ds:si_46 + 0x0000:byte] : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in 0x0000 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in di_43 + 0x0000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in Mem52[es:di_43 + 0x0000:byte] : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_71: (in 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in si_46 + 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in di_43 + 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in cx_47 - 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_78: (in cx_47 == 0x0000 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in ax : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in si_4 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_81: (in fn0C00_0152 : ptr32)
  Class: Eq_81
  DataType: (ptr (fn T_87 (T_6, T_7, T_86)))
  OrigDataType: (ptr (fn T_87 (T_6, T_7, T_86)))
T_82: (in signature of fn0C00_0152 : void)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_83: (in si : word16)
  Class: Eq_2
  DataType: (memptr T_84 (struct (0 T_96 t0000)))
  OrigDataType: (memptr T_84 (struct (0 T_96 t0000)))
T_84: (in ds : selector)
  Class: Eq_7
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_85: (in siOut : ptr16)
  Class: Eq_85
  DataType: ptr16
  OrigDataType: ptr16
T_86: (in out si_4 : ptr16)
  Class: Eq_85
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_87: (in fn0C00_0152(si, ds, out si_4) : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in si_7 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in fn0C00_0152 : ptr32)
  Class: Eq_81
  DataType: (ptr (fn T_91 (T_80, T_7, T_90)))
  OrigDataType: (ptr (fn T_91 (T_80, T_7, T_90)))
T_90: (in out si_7 : ptr16)
  Class: Eq_85
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_91: (in fn0C00_0152(si_4, ds, out si_7) : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in ax : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in ax_5 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in si + 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in Mem0[ds:si + 0x0000:word16] : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_97: (in si_8 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0002 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in si + 0x0002 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in *siOut : word16)
  Class: Eq_99
  DataType: 
  OrigDataType: 
T_101: (in (byte) ax_5 : byte)
  Class: Eq_101
  DataType: 
  OrigDataType: 
T_102: (in DPB(ax_5, (byte) ax_5, 8, 8) : word16)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_103:
  Class: Eq_103
  DataType: 
  OrigDataType: (struct 0001 (0 T_67 t0000))
*/
