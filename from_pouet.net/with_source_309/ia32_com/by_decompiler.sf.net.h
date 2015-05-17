// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_309/ia32_com/subject.exe
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
T_7: (in cx_16 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x04B0 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in fn0C00_0274 : ptr32)
  Class: Eq_9
  DataType: (ptr (fn T_18 (T_15, T_16, T_17)))
  OrigDataType: (ptr (fn T_18 (T_15, T_16, T_17)))
T_10: (in signature of fn0C00_0274 : void)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_11: (in si : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in ah : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in ds : selector)
  Class: Eq_13
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_14: (in 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in cx_16 << 0x0001 : word16)
  Class: Eq_11
  DataType: ui16
  OrigDataType: ui16
T_16: (in ah : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_17: (in ds : selector)
  Class: Eq_13
  DataType: (ptr (segment (29F T_25 t029F) (2C02 T_28 t2C02) (3C02 T_45 t3C02)))
  OrigDataType: (ptr (segment (29F T_25 t029F) (2C02 T_28 t2C02) (3C02 T_45 t3C02)))
T_18: (in fn0C00_0274(cx_16 << 0x0001, ah, ds) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_19: (in 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in cx_16 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_21: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_22: (in cx_16 != 0x0000 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in Z_24 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in 0x029F : word16)
  Class: Eq_24
  DataType: (memptr T_17 (struct (0 T_25 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_25 t0000)))
T_25: (in Mem0[ds:0x029F:byte] : byte)
  Class: Eq_25
  DataType: bcu8
  OrigDataType: bcu8
T_26: (in 0x04 : byte)
  Class: Eq_25
  DataType: bcu8
  OrigDataType: bcu8
T_27: (in Mem0[ds:0x029F:byte] >=u 0x04 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in v14_38 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in 0x2C02 : word16)
  Class: Eq_29
  DataType: (memptr T_17 (struct (0 T_30 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_30 t0000)))
T_30: (in Mem0[ds:0x2C02:byte] : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_31: (in 0x01 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in Mem0[ds:0x2C02:byte] + 0x01 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_33: (in 0x2C02 : word16)
  Class: Eq_33
  DataType: (memptr T_17 (struct (0 T_34 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_34 t0000)))
T_34: (in Mem39[ds:0x2C02:byte] : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_35: (in cond(v14_38) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_36: (in v11_33 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_37: (in 0x2C02 : word16)
  Class: Eq_37
  DataType: (memptr T_17 (struct (0 T_38 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_38 t0000)))
T_38: (in Mem0[ds:0x2C02:byte] : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_39: (in 0x01 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in Mem0[ds:0x2C02:byte] - 0x01 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_41: (in 0x2C02 : word16)
  Class: Eq_41
  DataType: (memptr T_17 (struct (0 T_42 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_42 t0000)))
T_42: (in Mem34[ds:0x2C02:byte] : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_43: (in cond(v11_33) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_44: (in 0x3C02 : word16)
  Class: Eq_44
  DataType: (memptr T_17 (struct (0 T_45 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_45 t0000)))
T_45: (in Mem0[ds:0x3C02:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0x3C02 : word16)
  Class: Eq_46
  DataType: (memptr T_17 (struct (0 T_47 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_47 t0000)))
T_47: (in Mem0[ds:0x3C02:byte] : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_48: (in 0x28 : byte)
  Class: Eq_45
  DataType: bcu8
  OrigDataType: bcu8
T_49: (in Mem0[ds:0x3C02:byte] <u 0x28 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in Mem0[ds:0x3C02:byte] + (Mem0[ds:0x3C02:byte] <u 0x28) : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_51: (in 0x3C02 : word16)
  Class: Eq_51
  DataType: (memptr T_17 (struct (0 T_52 t0000)))
  OrigDataType: (memptr T_17 (struct (0 T_52 t0000)))
T_52: (in Mem30[ds:0x3C02:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_53: (in fn0C00_0274 : ptr32)
  Class: Eq_9
  DataType: (ptr (fn T_55 (T_54, T_16, T_17)))
  OrigDataType: (ptr (fn T_55 (T_54, T_16, T_17)))
T_54: (in 0x0960 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_55: (in fn0C00_0274(0x0960, ah, ds) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in dx : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in __inb : ptr32)
  Class: Eq_57
  DataType: (ptr (fn T_59 (T_58)))
  OrigDataType: (ptr (fn T_59 (T_58)))
T_58: (in 0x40 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in __inb(0x40) : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in dx_7 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0000 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in ax : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in SEQ(0x0000, ax) : word32)
  Class: Eq_63
  DataType: word32
  OrigDataType: word32
T_64: (in bx : word16)
  Class: Eq_64
  DataType: int16
  OrigDataType: int16
T_65: (in SEQ(0x0000, ax) % bx : int16)
  Class: Eq_60
  DataType: int16
  OrigDataType: int16
T_66: (in ah_10 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in SEQ(dx_7, ax) : word32)
  Class: Eq_67
  DataType: int32
  OrigDataType: int32
T_68: (in SEQ(dx_7, ax) / bx : int16)
  Class: Eq_68
  DataType: int16
  OrigDataType: int16
T_69: (in SLICE(SEQ(dx_7, ax) / bx, byte, 8) : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in ahOut : ptr16)
  Class: Eq_70
  DataType: ptr16
  OrigDataType: ptr16
T_71: (in *ahOut : byte)
  Class: Eq_69
  DataType: 
  OrigDataType: 
T_72: (in 0x0001 : word16)
  Class: Eq_72
  DataType: 
  OrigDataType: 
T_73: (in dx_7 + 0x0001 : word16)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_74: (in 0x0F : byte)
  Class: Eq_74
  DataType: 
  OrigDataType: 
T_75: (in 0x32A2 : word16)
  Class: Eq_75
  DataType: 
  OrigDataType: 
T_76: (in si + 0x32A2 : word16)
  Class: Eq_76
  DataType: 
  OrigDataType: 
T_77: (in Mem2[ds:si + 0x32A2:byte] : byte)
  Class: Eq_74
  DataType: 
  OrigDataType: 
T_78: (in ah_7 : byte)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_79: (in fn0C00_026C : ptr32)
  Class: Eq_79
  DataType: 
  OrigDataType: 
T_80: (in signature of fn0C00_026C : void)
  Class: Eq_79
  DataType: 
  OrigDataType: 
T_81: (in ah : byte)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_82: (in 0x0064 : word16)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_83: (in out ah_7 : ptr16)
  Class: Eq_70
  DataType: 
  OrigDataType: 
T_84: (in fn0C00_026C(0x0064, ah, out ah_7) : word16)
  Class: Eq_84
  DataType: 
  OrigDataType: 
T_85: (in 0x0032 : word16)
  Class: Eq_85
  DataType: 
  OrigDataType: 
T_86: (in fn0C00_026C(0x0064, ah, out ah_7) - 0x0032 : word16)
  Class: Eq_86
  DataType: 
  OrigDataType: 
T_87: (in 0x02A2 : word16)
  Class: Eq_87
  DataType: 
  OrigDataType: 
T_88: (in si + 0x02A2 : word16)
  Class: Eq_88
  DataType: 
  OrigDataType: 
T_89: (in Mem11[ds:si + 0x02A2:word16] : word16)
  Class: Eq_86
  DataType: 
  OrigDataType: 
T_90: (in ah_12 : byte)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_91: (in fn0C00_026C : ptr32)
  Class: Eq_79
  DataType: 
  OrigDataType: 
T_92: (in 0x0064 : word16)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_93: (in out ah_12 : ptr16)
  Class: Eq_70
  DataType: 
  OrigDataType: 
T_94: (in fn0C00_026C(0x0064, ah_7, out ah_12) : word16)
  Class: Eq_94
  DataType: 
  OrigDataType: 
T_95: (in 0x0032 : word16)
  Class: Eq_95
  DataType: 
  OrigDataType: 
T_96: (in fn0C00_026C(0x0064, ah_7, out ah_12) - 0x0032 : word16)
  Class: Eq_96
  DataType: 
  OrigDataType: 
T_97: (in 0x12A2 : word16)
  Class: Eq_97
  DataType: 
  OrigDataType: 
T_98: (in si + 0x12A2 : word16)
  Class: Eq_98
  DataType: 
  OrigDataType: 
T_99: (in Mem16[ds:si + 0x12A2:word16] : word16)
  Class: Eq_96
  DataType: 
  OrigDataType: 
T_100: (in ah_18 : byte)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_101: (in fn0C00_026C : ptr32)
  Class: Eq_79
  DataType: 
  OrigDataType: 
T_102: (in 0x00FE : word16)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_103: (in out ah_18 : ptr16)
  Class: Eq_70
  DataType: 
  OrigDataType: 
T_104: (in fn0C00_026C(0x00FE, ah_12, out ah_18) : word16)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_105: (in 0x22A2 : word16)
  Class: Eq_105
  DataType: 
  OrigDataType: 
T_106: (in si + 0x22A2 : word16)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_107: (in Mem20[ds:si + 0x22A2:word16] : word16)
  Class: Eq_104
  DataType: 
  OrigDataType: 
*/
