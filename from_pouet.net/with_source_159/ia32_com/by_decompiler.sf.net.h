// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_159/ia32_com/subject.exe
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
T_7: (in cx_11 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0070 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in cl_10 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x70 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr (fn T_14 (T_12, T_13)))
  OrigDataType: (ptr (fn T_14 (T_12, T_13)))
T_12: (in 0x03C8 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in (byte) cx_11 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in __outb(0x03C8, (byte) cx_11) : void)
  Class: Eq_14
  DataType: void
  OrigDataType: void
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr (fn T_18 (T_16, T_17)))
  OrigDataType: (ptr (fn T_18 (T_16, T_17)))
T_16: (in 0x03C9 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x00 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr (fn T_21 (T_20, T_9)))
  OrigDataType: (ptr (fn T_21 (T_20, T_9)))
T_20: (in 0x03C9 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in __outb(0x03C9, cl_10) : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr (fn T_24 (T_23, T_9)))
  OrigDataType: (ptr (fn T_24 (T_23, T_9)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in __outb(0x03C9, cl_10) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in cx_11 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_27: (in (byte) cx_11 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_28: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_29: (in cx_11 != 0x0000 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in al_30 : byte)
  Class: Eq_30
  DataType: (union (uint16 u0) (byte u1))
  OrigDataType: (union (uint16 u0) (byte u1))
T_31: (in di_31 : word16)
  Class: Eq_31
  DataType: (memptr T_38 (struct 0001 (FFFFFEC1 T_52 tFFFFFEC1) (FFFFFFFF T_48 tFFFFFFFF) (0 T_62 t0000) (1 T_44 t0001) (13F T_56 t013F)))
  OrigDataType: (memptr T_38 (struct 0001 (FFFFFEC1 T_52 tFFFFFEC1) (FFFFFFFF T_48 tFFFFFFFF) (0 T_62 t0000) (1 T_44 t0001) (13F T_56 t013F)))
T_32: (in fn0C00_0158 : ptr32)
  Class: Eq_32
  DataType: (ptr (fn T_40 (T_37, T_38, T_39)))
  OrigDataType: (ptr (fn T_40 (T_37, T_38, T_39)))
T_33: (in signature of fn0C00_0158 : void)
  Class: Eq_32
  DataType: 
  OrigDataType: 
T_34: (in di : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in es : selector)
  Class: Eq_35
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_36: (in alOut : ptr16)
  Class: Eq_36
  DataType: ptr16
  OrigDataType: ptr16
T_37: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_38: (in 0xA000 : selector)
  Class: Eq_35
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_39: (in out al_30 : ptr16)
  Class: Eq_36
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_40: (in fn0C00_0158(0x0000, 0xA000, out al_30) : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_41: (in al_50 : byte)
  Class: Eq_41
  DataType: uint8
  OrigDataType: uint8
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di_31 + 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in Mem0[0xA000:di_31 + 0x0001:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in al_30 + Mem0[0xA000:di_31 + 0x0001:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in di_31 - 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem0[0xA000:di_31 - 0x0001:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in al_30 + Mem0[0xA000:di_31 + 0x0001:byte] + Mem0[0xA000:di_31 - 0x0001:byte] : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in 0x013F : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in di_31 - 0x013F : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in Mem0[0xA000:di_31 - 0x013F:byte] : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in al_30 + Mem0[0xA000:di_31 + 0x0001:byte] + Mem0[0xA000:di_31 - 0x0001:byte] + Mem0[0xA000:di_31 - 0x013F:byte] : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in 0x013F : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in di_31 + 0x013F : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in Mem0[0xA000:di_31 + 0x013F:byte] : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in al_30 + Mem0[0xA000:di_31 + 0x0001:byte] + Mem0[0xA000:di_31 - 0x0001:byte] + Mem0[0xA000:di_31 - 0x013F:byte] + Mem0[0xA000:di_31 + 0x013F:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_58: (in 0x02 : byte)
  Class: Eq_58
  DataType: uint8
  OrigDataType: uint8
T_59: (in al_50 >>u 0x02 : word16)
  Class: Eq_59
  DataType: uint16
  OrigDataType: uint16
T_60: (in 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in di_31 + 0x0000 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in Mem54[0xA000:di_31 + 0x0000:byte] : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_63: (in di_55 : word16)
  Class: Eq_63
  DataType: (memptr T_38 (struct (0 T_69 t0000)))
  OrigDataType: (memptr T_38 (struct (0 T_69 t0000)))
T_64: (in 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in di_31 + 0x0001 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_66: (in al_50 >>u 0x02 : word16)
  Class: Eq_66
  DataType: uint16
  OrigDataType: uint16
T_67: (in 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in di_55 + 0x0000 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in Mem56[0xA000:di_55 + 0x0000:byte] : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_70: (in al_50 >>u 0x02 : word16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_71: (in 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in di_55 + 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_73: (in cx_40 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in cx_40 - 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_76: (in 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_77: (in cx_40 != 0x0000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in al_62 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in __inb : ptr32)
  Class: Eq_79
  DataType: (ptr (fn T_81 (T_80)))
  OrigDataType: (ptr (fn T_81 (T_80)))
T_80: (in 0x60 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in __inb(0x60) : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_82: (in 0x0140 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_83: (in 0x01 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in al_62 - 0x01 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_85: (in 0x01 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_86: (in al_62 != 0x01 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in 0x84D0 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_88: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_90 (T_89)))
  OrigDataType: (ptr (fn T_90 (T_89)))
T_89: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_90: (in bios_video_set_mode(0x03) : void)
  Class: Eq_90
  DataType: void
  OrigDataType: void
T_91: (in msdos_display_string : ptr32)
  Class: Eq_91
  DataType: (ptr (fn T_97 (T_95, T_96)))
  OrigDataType: (ptr (fn T_97 (T_95, T_96)))
T_92: (in signature of msdos_display_string : void)
  Class: Eq_91
  DataType: 
  OrigDataType: 
T_93: (in ds : selector)
  Class: Eq_93
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_94: (in dx : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in cs : selector)
  Class: Eq_93
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_96: (in 0x0164 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_97: (in msdos_display_string(cs, 0x0164) : void)
  Class: Eq_97
  DataType: void
  OrigDataType: void
T_98: (in cx_11 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in 0x0140 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_100: (in al_6 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in __inb : ptr32)
  Class: Eq_101
  DataType: (ptr (fn T_103 (T_102)))
  OrigDataType: (ptr (fn T_103 (T_102)))
T_102: (in 0x40 : byte)
  Class: Eq_102
  DataType: byte
  OrigDataType: byte
T_103: (in __inb(0x40) : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_104: (in *alOut : byte)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_105: (in 0x0000 : word16)
  Class: Eq_105
  DataType: 
  OrigDataType: 
T_106: (in di + 0x0000 : word16)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_107: (in Mem7[es:di + 0x0000:byte] : byte)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_108: (in 0x0001 : word16)
  Class: Eq_108
  DataType: 
  OrigDataType: 
T_109: (in di + 0x0001 : word16)
  Class: Eq_34
  DataType: 
  OrigDataType: 
T_110: (in 0x0001 : word16)
  Class: Eq_110
  DataType: 
  OrigDataType: 
T_111: (in cx_11 - 0x0001 : word16)
  Class: Eq_98
  DataType: 
  OrigDataType: 
T_112: (in 0x0000 : word16)
  Class: Eq_98
  DataType: 
  OrigDataType: 
T_113: (in cx_11 != 0x0000 : bool)
  Class: Eq_113
  DataType: 
  OrigDataType: 
*/
