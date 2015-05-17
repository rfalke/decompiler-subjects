// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_100/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_25) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_20: (struct "Eq_20" (0 byte b0000) (1 byte b0001) (2 byte b0002) (3 byte b0003) (4 byte b0004) (5 byte b0005) (6 byte b0006) (7 byte b0007))
	T_20 (in di_36 : (memptr (ptr Eq_25) Eq_20))
	T_23 (in bx *s 0x0140 + bp : word16)
Eq_25: (segment "Eq_25")
	T_25 (in 0xA000 : selector)
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
T_7: (in ax_20 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in ax : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x13 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in si : int16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_12: (in 0x0000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_13: (in si > 0x0000 : bool)
  Class: Eq_13
  DataType: bool
  OrigDataType: bool
T_14: (in bp : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in bp + 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_17: (in bx : int16)
  Class: Eq_17
  DataType: int16
  OrigDataType: int16
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in bx + 0x0001 : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_20: (in di_36 : (memptr (ptr Eq_25) Eq_20))
  Class: Eq_20
  DataType: (memptr (ptr Eq_25) Eq_20)
  OrigDataType: (memptr T_25 (struct (0 T_28 t0000) (1 T_31 t0001) (2 T_35 t0002) (3 T_39 t0003) (4 T_43 t0004) (5 T_47 t0005) (6 T_51 t0006) (7 T_55 t0007)))
T_21: (in 0x0140 : word16)
  Class: Eq_21
  DataType: int16
  OrigDataType: int16
T_22: (in bx *s 0x0140 : int16)
  Class: Eq_22
  DataType: int16
  OrigDataType: int16
T_23: (in bx *s 0x0140 + bp : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_25) Eq_20)
  OrigDataType: word16
T_24: (in al_25 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in 0xA000 : selector)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (segment))
T_26: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_36 + 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in Mem38[0xA000:di_36 + 0x0000:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in di_36 + 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem40[0xA000:di_36 + 0x0001:byte] : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_32: (in 0x04 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in 0x0002 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in di_36 + 0x0002 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem43[0xA000:di_36 + 0x0002:byte] : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_36: (in 0x04 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in 0x0003 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di_36 + 0x0003 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem45[0xA000:di_36 + 0x0003:byte] : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_40: (in 0x04 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0x0004 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di_36 + 0x0004 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem47[0xA000:di_36 + 0x0004:byte] : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_44: (in 0x00 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in 0x0005 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di_36 + 0x0005 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem51[0xA000:di_36 + 0x0005:byte] : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_48: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0006 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in di_36 + 0x0006 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in Mem53[0xA000:di_36 + 0x0006:byte] : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_52: (in 0x00 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in 0x0007 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in di_36 + 0x0007 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in Mem55[0xA000:di_36 + 0x0007:byte] : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_56: (in ax_24 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in 0x00 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in DPB(ax_24, 0x00, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_59: (in 0x4000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_60: (in si > 0x4000 : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in cx : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in cx + 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0001 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in bp + 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_66: (in 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in bx - 0x0001 : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in ax_20 + 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0003 : word16)
  Class: Eq_70
  DataType: int16
  OrigDataType: int16
T_71: (in si *s 0x0003 : int16)
  Class: Eq_71
  DataType: int16
  OrigDataType: int16
T_72: (in si *s 0x0003 + cx : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_73: (in (byte) ax_24 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_74: (in 0xC000 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_75: (in si > 0xC000 : bool)
  Class: Eq_75
  DataType: bool
  OrigDataType: bool
T_76: (in 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in bp - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in bp - 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_80: (in 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in bx + 0x0001 : word16)
  Class: Eq_17
  DataType: int16
  OrigDataType: word16
*/
typedef Eq_25 Eq_1struct Globals {
	Eq_25 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_20 {
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
	byte b0003;	// 3
	byte b0004;	// 4
	byte b0005;	// 5
	byte b0006;	// 6
	byte b0007;	// 7
} Eq_20;

typedef struct Eq_25 {
} Eq_25;

