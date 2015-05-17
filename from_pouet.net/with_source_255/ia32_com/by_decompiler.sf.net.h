// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_255/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: 
  OrigDataType: 
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_4: (in al : byte)
  Class: Eq_4
  DataType: 
  OrigDataType: 
T_5: (in 0x13 : byte)
  Class: Eq_4
  DataType: 
  OrigDataType: 
T_6: (in bios_video_set_mode(0x13) : void)
  Class: Eq_6
  DataType: 
  OrigDataType: 
T_7: (in __outw : ptr32)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_8: (in 0x03D4 : word16)
  Class: Eq_8
  DataType: 
  OrigDataType: 
T_9: (in ax : word16)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_10: (in 0x20 : byte)
  Class: Eq_10
  DataType: 
  OrigDataType: 
T_11: (in DPB(ax, 0x20, 8, 8) : word16)
  Class: Eq_11
  DataType: 
  OrigDataType: 
T_12: (in __outw(0x03D4, DPB(ax, 0x20, 8, 8)) : void)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_13: (in dx_27 : word16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_14: (in 0x03D4 : word16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_15: (in al_52 : byte)
  Class: Eq_15
  DataType: 
  OrigDataType: 
T_16: (in bl : byte)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_17: (in 0x3F : byte)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_18: (in bl & 0x3F : byte)
  Class: Eq_15
  DataType: 
  OrigDataType: 
T_19: (in ax_54 : word16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_20: (in 0x20 : byte)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_21: (in al_52 - 0x20 : byte)
  Class: Eq_21
  DataType: 
  OrigDataType: 
T_22: (in al_52 - 0x20 : byte)
  Class: Eq_22
  DataType: 
  OrigDataType: 
T_23: (in (al_52 - 0x20) *s (al_52 - 0x20) : int16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_24: (in cx : word16)
  Class: Eq_24
  DataType: 
  OrigDataType: 
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: 
  OrigDataType: 
T_26: (in cx - 0x0001 : word16)
  Class: Eq_24
  DataType: 
  OrigDataType: 
T_27: (in bh : byte)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_28: (in bx : word16)
  Class: Eq_28
  DataType: 
  OrigDataType: 
T_29: (in DPB(bx, bl, 8, 8) : word16)
  Class: Eq_28
  DataType: 
  OrigDataType: 
T_30: (in ecx : word32)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_31: (in DPB(ecx, cx, 0, 16) : word32)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_32: (in dx_395 : word16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_33: (in 0x0000 : word16)
  Class: Eq_24
  DataType: 
  OrigDataType: 
T_34: (in cx != 0x0000 : bool)
  Class: Eq_34
  DataType: 
  OrigDataType: 
T_35: (in dx_395 + ax_54 : word16)
  Class: Eq_35
  DataType: 
  OrigDataType: 
T_36: (in 0x0003 : word16)
  Class: Eq_36
  DataType: 
  OrigDataType: 
T_37: (in dx_395 + ax_54 >>u 0x0003 : word16)
  Class: Eq_37
  DataType: 
  OrigDataType: 
T_38: (in (byte) (dx_395 + ax_54 >>u 0x0003) : byte)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_39: (in 0x6000 : selector)
  Class: Eq_39
  DataType: 
  OrigDataType: 
T_40: (in 0x0000 : word16)
  Class: Eq_40
  DataType: 
  OrigDataType: 
T_41: (in bx + 0x0000 : word16)
  Class: Eq_41
  DataType: 
  OrigDataType: 
T_42: (in Mem72[0x6000:bx + 0x0000:byte] : byte)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_43: (in dx_ax_78 : int32)
  Class: Eq_43
  DataType: 
  OrigDataType: 
T_44: (in 0x0040 : word16)
  Class: Eq_44
  DataType: 
  OrigDataType: 
T_45: (in bx + 0x0040 : word16)
  Class: Eq_45
  DataType: 
  OrigDataType: 
T_46: (in (byte) (bx + 0x0040) : byte)
  Class: Eq_46
  DataType: 
  OrigDataType: 
T_47: (in (int16) (byte) (bx + 0x0040) : int16)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_48: (in (int32) (int16) (byte) (bx + 0x0040) : int32)
  Class: Eq_43
  DataType: 
  OrigDataType: 
T_49: (in al_79 : byte)
  Class: Eq_49
  DataType: 
  OrigDataType: 
T_50: (in (byte) dx_ax_78 : byte)
  Class: Eq_49
  DataType: 
  OrigDataType: 
T_51: (in ax_83 : word16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_52: (in al_79 *s al_79 : int16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_53: (in SLICE(dx_ax_78, word16, 16) : word16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_54: (in ax_87 : word16)
  Class: Eq_54
  DataType: 
  OrigDataType: 
T_55: (in SLICE(ax_83, byte, 8) : byte)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_56: (in 0x40 : byte)
  Class: Eq_56
  DataType: 
  OrigDataType: 
T_57: (in SLICE(ax_83, byte, 8) - 0x40 : byte)
  Class: Eq_57
  DataType: 
  OrigDataType: 
T_58: (in DPB(ax_83, SLICE(ax_83, byte, 8) - 0x40, 8, 8) : word16)
  Class: Eq_58
  DataType: 
  OrigDataType: 
T_59: (in DPB(ax_83, SLICE(ax_83, byte, 8) - 0x40, 8, 8) ^ dx_27 : word16)
  Class: Eq_54
  DataType: 
  OrigDataType: 
T_60: (in 0x0006 : word16)
  Class: Eq_60
  DataType: 
  OrigDataType: 
T_61: (in ax_87 >> 0x0006 : word16)
  Class: Eq_61
  DataType: 
  OrigDataType: 
T_62: (in 0x7000 : selector)
  Class: Eq_62
  DataType: 
  OrigDataType: 
*/
