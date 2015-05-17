// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_234/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_27: (segment "Eq_27" (1FB int16 w01FB) (200 (arr byte) a0200))
	T_27 (in es : (ptr Eq_27))
	T_43 (in ds : (ptr Eq_27))
Eq_37: (struct "Eq_37" (0 byte b0000) (5F word16 w005F) (61 byte b0061))
	T_37 (in di_31 : (memptr (ptr Eq_27) Eq_37))
	T_39 (in di_23 + 0x0001 : word16)
Eq_67: (fn real64 (real64))
	T_67 (in sin : ptr32)
Eq_72: (fn real64 (real64))
	T_72 (in cos : ptr32)
Eq_76: (fn real64 (real64))
	T_76 (in sin : ptr32)
Eq_79: (fn real64 (real64))
	T_79 (in sin : ptr32)
Eq_82: (fn void (word16, byte))
	T_82 (in __outb : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
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
T_7: (in di_10 : (memptr (ptr Eq_27) byte))
  Class: Eq_7
  DataType: (memptr (ptr Eq_27) byte)
  OrigDataType: (memptr T_27 (struct 0001 (0 T_30 t0000)))
T_8: (in 0x0200 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_27) byte)
  OrigDataType: word16
T_9: (in cx_11 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in cx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0xFD : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(cx, 0xFD, 8, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in ax_28 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x3F00 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in al_27 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_20 (T_18, T_19)))
T_18: (in 0x03C8 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x00 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in di_23 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0340 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_23: (in cx_26 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x20 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in DPB(cx_11, 0x20, 0, 8) : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_26: (in 0x00 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in es : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (200 (arr T_89) a0200)))
T_28: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in di_10 + 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem14[es:di_10 + 0x0000:byte] : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in di_10 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_27) byte)
  OrigDataType: word16
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in cx_11 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_36: (in cx_11 == 0x0000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in di_31 : (memptr (ptr Eq_27) Eq_37))
  Class: Eq_37
  DataType: (memptr (ptr Eq_27) Eq_37)
  OrigDataType: (memptr T_27 (struct (0 T_42 t0000) (5F T_46 t005F) (61 T_49 t0061)))
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_23 + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_27) Eq_37)
  OrigDataType: word16
T_40: (in 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in di_31 + 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in Mem32[es:di_31 + 0x0000:byte] : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_43: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (1FB T_64 t01FB)))
T_44: (in 0x005F : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di_31 + 0x005F : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem34[ds:di_31 + 0x005F:word16] : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_47: (in 0x0061 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in di_31 + 0x0061 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem36[ds:di_31 + 0x0061:byte] : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_50: (in 0x02 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in al_27 + 0x02 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_52: (in 0x0002 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in di_31 + 0x0002 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_54: (in DPB(ax_28, al_27, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_55: (in 0x0001 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in cx_26 - 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_57: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_58: (in cx_26 != 0x0000 : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in cx_45 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in 0xC0 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in DPB(cx_26, 0xC0, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_62: (in rLoc1_54 : real64)
  Class: Eq_62
  DataType: real64
  OrigDataType: real64
T_63: (in 0x01FB : word16)
  Class: Eq_63
  DataType: (memptr (ptr Eq_27) int16)
  OrigDataType: (memptr T_43 (struct (0 T_64 t0000)))
T_64: (in Mem36[ds:0x01FB:int16] : int16)
  Class: Eq_64
  DataType: int16
  OrigDataType: int16
T_65: (in (real64) ds->w01FB : real64)
  Class: Eq_62
  DataType: real64
  OrigDataType: real64
T_66: (in rLoc4_62 : real64)
  Class: Eq_66
  DataType: real64
  OrigDataType: real64
T_67: (in sin : ptr32)
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (fn T_70 (T_69)))
T_68: (in 0 : real64)
  Class: Eq_68
  DataType: real64
  OrigDataType: real64
T_69: (in 0 / rLoc1_54 : real64)
  Class: Eq_69
  DataType: real64
  OrigDataType: real64
T_70: (in sin(0 / rLoc1_54) : real64)
  Class: Eq_70
  DataType: real64
  OrigDataType: real64
T_71: (in sin(0 / rLoc1_54) * rLoc1_54 : real64)
  Class: Eq_66
  DataType: real64
  OrigDataType: real64
T_72: (in cos : ptr32)
  Class: Eq_72
  DataType: (ptr Eq_72)
  OrigDataType: (ptr (fn T_75 (T_74)))
T_73: (in 0 : real64)
  Class: Eq_73
  DataType: real64
  OrigDataType: real64
T_74: (in rLoc4_62 + 0 : real64)
  Class: Eq_74
  DataType: real64
  OrigDataType: real64
T_75: (in cos(rLoc4_62 + 0) : real64)
  Class: Eq_75
  DataType: real64
  OrigDataType: real64
T_76: (in sin : ptr32)
  Class: Eq_76
  DataType: (ptr Eq_76)
  OrigDataType: (ptr (fn T_78 (T_77)))
T_77: (in rLoc4_62 + 0 : real64)
  Class: Eq_77
  DataType: real64
  OrigDataType: real64
T_78: (in sin(rLoc4_62 + 0) : real64)
  Class: Eq_78
  DataType: real64
  OrigDataType: real64
T_79: (in sin : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_81 (T_80)))
T_80: (in 0 : real64)
  Class: Eq_80
  DataType: real64
  OrigDataType: real64
T_81: (in sin(0) : real64)
  Class: Eq_81
  DataType: real64
  OrigDataType: real64
T_82: (in __outb : ptr32)
  Class: Eq_82
  DataType: (ptr Eq_82)
  OrigDataType: (ptr (fn T_84 (T_83, T_15)))
T_83: (in 0x03C9 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in __outb(0x03C9, al_27) : void)
  Class: Eq_84
  DataType: void
  OrigDataType: void
T_85: (in 0x0001 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in cx_45 - 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_88: (in cx_45 == 0x0000 : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89:
  Class: Eq_89
  DataType: byte
  OrigDataType: (struct 0001 (0 T_30 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_17)(word16, byte);

typedef  Eq_27[]struct Eq_27 {
	int16 w01FB;	// 1FB
	byte a0200[];	// 200
} Eq_27;

typedef struct Eq_37 {
	byte b0000;	// 0
	word16 w005F;	// 5F
	byte b0061;	// 61
} Eq_37;

typedef real64 (Eq_67)(real64);

typedef real64 (Eq_72)(real64);

typedef real64 (Eq_76)(real64);

typedef real64 (Eq_79)(real64);

typedef void (Eq_82)(word16, byte);

