// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_170/ia32_com/subject.exe
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
T_7: (in bx_18 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_8: (in bx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x05 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(bx, 0x05, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in al_102 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0xA000 : selector)
  Class: Eq_12
  DataType: (ptr (segment (0 (arr T_121) a0000) (280 (arr T_122) a0280)))
  OrigDataType: (ptr (segment (0 (arr T_121) a0000) (280 (arr T_122) a0280)))
T_13: (in di_25 : word16)
  Class: Eq_13
  DataType: (memptr T_12 (struct 0001 (0 T_16 t0000)))
  OrigDataType: (memptr T_12 (struct 0001 (0 T_16 t0000)))
T_14: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in di_25 + 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem44[0xA000:di_25 + 0x0000:byte] : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_17: (in 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_25 + 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_19: (in cx_28 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in cx_28 - 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_23: (in cx_28 != 0x0000 : bool)
  Class: Eq_23
  DataType: bool
  OrigDataType: bool
T_24: (in 0x09 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_25: (in dx_34 : word16)
  Class: Eq_25
  DataType: cups16
  OrigDataType: cups16
T_26: (in 0x09C4 : word16)
  Class: Eq_25
  DataType: cups16
  OrigDataType: cups16
T_27: (in dx_34 <u 0x09C4 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in dx_93 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in ax_94 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in fn0C00_0168 : ptr32)
  Class: Eq_30
  DataType: (ptr (fn T_35 (T_13, T_34)))
  OrigDataType: (ptr (fn T_35 (T_13, T_34)))
T_31: (in signature of fn0C00_0168 : void)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_32: (in di : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_33: (in dxOut : ptr16)
  Class: Eq_33
  DataType: ptr16
  OrigDataType: ptr16
T_34: (in out dx_93 : ptr16)
  Class: Eq_33
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_35: (in fn0C00_0168(di_25, out dx_93) : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0F : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_37: (in 0x0046 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in ax_94 + 0x0046 : word16)
  Class: Eq_38
  DataType: int16
  OrigDataType: int16
T_39: (in ax_94 + 0x0046 : word16)
  Class: Eq_39
  DataType: int16
  OrigDataType: int16
T_40: (in (ax_94 + 0x0046) *s (ax_94 + 0x0046) : int16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_41: (in dx_93 + (ax_94 + 0x0046) *s (ax_94 + 0x0046) : word16)
  Class: Eq_41
  DataType: cups16
  OrigDataType: cups16
T_42: (in 0x3931 : word16)
  Class: Eq_41
  DataType: cups16
  OrigDataType: cups16
T_43: (in dx_93 + (ax_94 + 0x0046) *s (ax_94 + 0x0046) <u 0x3931 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in 0x0C : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_45: (in dx_31 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in ax_32 : word16)
  Class: Eq_46
  DataType: int16
  OrigDataType: int16
T_47: (in fn0C00_0168 : ptr32)
  Class: Eq_30
  DataType: (ptr (fn T_49 (T_13, T_48)))
  OrigDataType: (ptr (fn T_49 (T_13, T_48)))
T_48: (in out dx_31 : ptr16)
  Class: Eq_33
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_49: (in fn0C00_0168(di_25, out dx_31) : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_50: (in ax_32 *s ax_32 : int16)
  Class: Eq_50
  DataType: int16
  OrigDataType: int16
T_51: (in dx_31 + ax_32 *s ax_32 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_52: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_53: (in si : word16)
  Class: Eq_25
  DataType: (union (int16 u0) (cups16 u1))
  OrigDataType: (union (int16 u0) (cups16 u1))
T_54: (in dx_34 <u si : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in si + bx_18 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_56: (in 0x0001 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_57: (in si <= 0x0001 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in -bx_18 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_59: (in 0x0960 : word16)
  Class: Eq_25
  DataType: cups16
  OrigDataType: cups16
T_60: (in si >=u 0x0960 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in __inb : ptr32)
  Class: Eq_61
  DataType: (ptr (fn T_63 (T_62)))
  OrigDataType: (ptr (fn T_63 (T_62)))
T_62: (in 0x60 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in __inb(0x60) : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in 0x01 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_65: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_67: (in 0xFA00 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_68: (in ss : selector)
  Class: Eq_68
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_69: (in fp : ptr16)
  Class: Eq_69
  DataType: (union (ptr16 u0) ((memptr T_68 (struct (FFFFFFFE T_72 tFFFFFFFE))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_68 (struct (FFFFFFFE T_72 tFFFFFFFE))) u1))
T_70: (in 0x0002 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in fp - 0x0002 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in Mem59[ss:fp - 0x0002:word16] : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_73: (in cx_57 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in 0x0064 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in cx_57 - 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_78: (in cx_57 != 0x0000 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in si_69 : word16)
  Class: Eq_79
  DataType: (memptr T_12 (struct 0001 (0 T_82 t0000)))
  OrigDataType: (memptr T_12 (struct 0001 (0 T_82 t0000)))
T_80: (in 0x0000 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in si_69 + 0x0000 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in Mem59[0xA000:si_69 + 0x0000:byte] : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in di_66 : word16)
  Class: Eq_83
  DataType: (memptr T_12 (struct 0001 (0 T_86 t0000)))
  OrigDataType: (memptr T_12 (struct 0001 (0 T_86 t0000)))
T_84: (in 0x0000 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in di_66 + 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in Mem75[0xA000:di_66 + 0x0000:byte] : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_87: (in 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in si_69 + 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_89: (in 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in di_66 + 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_91: (in cx_70 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in cx_70 - 0x0001 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_94: (in 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_95: (in cx_70 == 0x0000 : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_97: (in 0x0280 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_98: (in 0xFA00 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_99: (in ax : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in dx_ax_5 : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_101: (in 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in SEQ(0x0000, di) : word32)
  Class: Eq_100
  DataType: word32
  OrigDataType: word32
T_103: (in dx_10 : word16)
  Class: Eq_103
  DataType: int16
  OrigDataType: int16
T_104: (in 0x0140 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in dx_ax_5 % 0x0140 : uint16)
  Class: Eq_105
  DataType: uint16
  OrigDataType: uint16
T_106: (in 0x00A0 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in dx_ax_5 % 0x0140 - 0x00A0 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_108: (in ax_11 : word16)
  Class: Eq_108
  DataType: int16
  OrigDataType: int16
T_109: (in dx_ax_5 % 0x0140 : uint16)
  Class: Eq_109
  DataType: uint16
  OrigDataType: uint16
T_110: (in SEQ(dx_ax_5 % 0x0140, di) : word32)
  Class: Eq_110
  DataType: uint32
  OrigDataType: uint32
T_111: (in 0x0140 : word16)
  Class: Eq_111
  DataType: uint16
  OrigDataType: uint16
T_112: (in SEQ(dx_ax_5 % 0x0140, di) /u 0x0140 : uint16)
  Class: Eq_112
  DataType: uint16
  OrigDataType: uint16
T_113: (in 0x0064 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in SEQ(dx_ax_5 % 0x0140, di) /u 0x0140 - 0x0064 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_115: (in 0x0000 : word16)
  Class: Eq_108
  DataType: int16
  OrigDataType: int16
T_116: (in ax_11 >= 0x0000 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in dx_18 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in dx_10 *s dx_10 : int16)
  Class: Eq_118
  DataType: int16
  OrigDataType: int16
T_119: (in *dxOut : int16)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_120: (in -ax_11 : word16)
  Class: Eq_108
  DataType: 
  OrigDataType: 
T_121:
  Class: Eq_121
  DataType: 
  OrigDataType: (struct 0001 (0 T_16 t0000))
T_122:
  Class: Eq_122
  DataType: 
  OrigDataType: (struct 0001 (0 T_82 t0000))
T_123:
  Class: Eq_121
  DataType: 
  OrigDataType: (struct 0001 (0 T_86 t0000))
*/
