// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_080/ia32_com/subject.exe
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
T_7: (in di_17 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in si_16 : word16)
  Class: Eq_8
  DataType: (memptr T_19 (struct 0002 (0 T_28 t0000)))
  OrigDataType: (memptr T_19 (struct 0002 (0 T_28 t0000)))
T_9: (in cx_18 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in fn0C00_0133 : ptr32)
  Class: Eq_10
  DataType: (ptr (fn T_22 (T_17, T_18, T_19, T_20, T_21)))
  OrigDataType: (ptr (fn T_22 (T_17, T_18, T_19, T_20, T_21)))
T_11: (in signature of fn0C00_0133 : void)
  Class: Eq_10
  DataType: 
  OrigDataType: 
T_12: (in cx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in di : word16)
  Class: Eq_7
  DataType: (memptr T_14 (struct (0 T_66 t0000)))
  OrigDataType: (memptr T_14 (struct (0 T_66 t0000)))
T_14: (in ds : selector)
  Class: Eq_14
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_15: (in siOut : ptr16)
  Class: Eq_15
  DataType: ptr16
  OrigDataType: ptr16
T_16: (in diOut : ptr16)
  Class: Eq_16
  DataType: ptr16
  OrigDataType: ptr16
T_17: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_18: (in 0x2D9F : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_19: (in 0xA000 : selector)
  Class: Eq_14
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_20: (in out si_16 : ptr16)
  Class: Eq_15
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_21: (in out di_17 : ptr16)
  Class: Eq_16
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_22: (in fn0C00_0133(0x0000, 0x2D9F, 0xA000, out si_16, out di_17) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_23: (in cx_39 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0002 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in si_16 + 0x0002 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_26: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in si_16 + 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem0[0xA000:si_16 + 0x0000:word16] : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in si_16 + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem0[0xA000:si_16 + 0x0000:word16] : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_32: (in Mem0[0xA000:si_16 + 0x0000:word16] ^ Mem0[0xA000:si_16 + 0x0000:word16] : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_35 : word16)
  Class: Eq_33
  DataType: (memptr T_19 (struct 0002 (0 T_36 t0000)))
  OrigDataType: (memptr T_19 (struct 0002 (0 T_36 t0000)))
T_34: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in di_35 + 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in Mem46[0xA000:di_35 + 0x0000:word16] : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0002 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di_35 + 0x0002 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in cx_39 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_42: (in cx_39 != 0x0000 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in fn0C00_0133 : ptr32)
  Class: Eq_10
  DataType: (ptr (fn T_46 (T_9, T_7, T_19, T_44, T_45)))
  OrigDataType: (ptr (fn T_46 (T_9, T_7, T_19, T_44, T_45)))
T_44: (in out si_16 : ptr16)
  Class: Eq_15
  DataType: (ptr (memptr T_19 (struct 0002 (0 T_28 t0000))))
  OrigDataType: (ptr (memptr T_19 (struct 0002 (0 T_28 t0000))))
T_45: (in out di_17 : ptr16)
  Class: Eq_16
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_46: (in fn0C00_0133(cx_18, di_17, 0xA000, out si_16, out di_17) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_47: (in (byte) cx_18 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x80 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_49: (in (byte) cx_18 == 0x80 : bool)
  Class: Eq_49
  DataType: bool
  OrigDataType: bool
T_50: (in al_63 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_51
  DataType: (ptr (fn T_55 (T_54)))
  OrigDataType: (ptr (fn T_55 (T_54)))
T_52: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_53: (in alOut : ptr16)
  Class: Eq_53
  DataType: ptr16
  OrigDataType: ptr16
T_54: (in out al_63 : ptr16)
  Class: Eq_53
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_55: (in bios_kbd_get_keystroke(out al_63) : byte)
  Class: Eq_55
  DataType: byte
  OrigDataType: byte
T_56: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_58 (T_57)))
  OrigDataType: (ptr (fn T_58 (T_57)))
T_57: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_58: (in bios_video_set_mode(0x03) : void)
  Class: Eq_58
  DataType: void
  OrigDataType: void
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in di_17 + 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in di_17 + 0x0001 + 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_63: (in 0x0F0F : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in di + 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in Mem4[ds:di + 0x0000:word16] : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_67: (in si_3 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in *siOut : word16)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_69: (in di_6 : word16)
  Class: Eq_69
  DataType: 
  OrigDataType: 
T_70: (in 0x013F : word16)
  Class: Eq_70
  DataType: 
  OrigDataType: 
T_71: (in di + 0x013F : word16)
  Class: Eq_71
  DataType: 
  OrigDataType: 
T_72: (in *diOut : word16)
  Class: Eq_71
  DataType: 
  OrigDataType: 
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_74: (in cx + 0x0001 : word16)
  Class: Eq_74
  DataType: 
  OrigDataType: 
*/
