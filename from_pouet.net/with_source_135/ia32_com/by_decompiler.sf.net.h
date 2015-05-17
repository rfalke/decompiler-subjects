// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_135/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_26) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_15: (fn void (word16, byte))
	T_15 (in __outb : ptr32)
Eq_26: (segment "Eq_26" (0 (arr byte) a0000))
	T_26 (in 0xA000 : selector)
	T_31 (in Mem32[ss:fp - 0x0004:word16] : word16)
Eq_27: (segment "Eq_27")
	T_27 (in ss : selector)
Eq_28: (union "Eq_28" (ptr16 u0) ((memptr (ptr Eq_27) Eq_91) u1))
	T_28 (in fp : ptr16)
Eq_48: (segment "Eq_48" (15E uint16 w015E) (160 word16 w0160) (162 word16 w0162))
	T_48 (in ds : (ptr Eq_48))
Eq_81: (fn byte (byte))
	T_81 (in __inb : ptr32)
Eq_91: (struct "Eq_91" (FFFFFFFC (ptr Eq_26) ptrFFFFFFFC))
	T_91
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
T_7: (in al_17 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_16 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in ax : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0x13 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_13: (in di_27 : (memptr (ptr Eq_26) byte))
  Class: Eq_13
  DataType: (memptr (ptr Eq_26) byte)
  OrigDataType: (memptr T_26 (struct 0001 (0 T_34 t0000)))
T_14: (in 0x0000 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_26) byte)
  OrigDataType: word16
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16, T_7)))
T_16: (in 0x03C9 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in __outb(0x03C9, al_17) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in ax_16 + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_20: (in (byte) ax_16 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_21: (in cx : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx - 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_25: (in cx != 0x0000 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in 0xA000 : selector)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment (0 (arr T_89) a0000)))
T_27: (in ss : selector)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment))
T_28: (in fp : ptr16)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: (union (ptr16 u0) ((memptr T_27 (struct (FFFFFFFC T_31 tFFFFFFFC))) u1))
T_29: (in 0x0004 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in fp - 0x0004 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem32[ss:fp - 0x0004:word16] : word16)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: word16
T_32: (in 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_27 + 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem32[0xA000:di_27 + 0x0000:byte] : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x01 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0xA000->*di_27 + 0x01 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_37: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di_27 + 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem40[0xA000:di_27 + 0x0000:byte] : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_40: (in di_41 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di_27 + 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_43: (in dx_48 : uint16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: word16
T_44: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di_41 - 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in SEQ(0x0000, di_41 - 0x0001) : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in ds : (ptr Eq_48))
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (segment (15E T_50 t015E) (160 T_61 t0160) (162 T_71 t0162)))
T_49: (in 0x015E : word16)
  Class: Eq_49
  DataType: (memptr (ptr Eq_48) uint16)
  OrigDataType: (memptr T_48 (struct (0 T_50 t0000)))
T_50: (in Mem40[ds:0x015E:word16] : word16)
  Class: Eq_50
  DataType: uint16
  OrigDataType: word16
T_51: (in SEQ(0x0000, di_41 - 0x0001) % ds->w015E : uint16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: uint16
T_52: (in ax_50 : uint16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: word16
T_53: (in di_41 - 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in SEQ(dx_48, di_41 - 0x0001) : word32)
  Class: Eq_54
  DataType: uint32
  OrigDataType: uint32
T_55: (in Mem40[ds:0x015E:word16] : word16)
  Class: Eq_50
  DataType: uint16
  OrigDataType: uint16
T_56: (in SEQ(dx_48, di_41 - 0x0001) /u ds->w015E : uint16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: uint16
T_57: (in 0x0000 : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: word16
T_58: (in dx_48 != 0x0000 : bool)
  Class: Eq_58
  DataType: bool
  OrigDataType: bool
T_59: (in 0x013F : word16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: word16
T_60: (in dx_48 != 0x013F : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0160 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_63 t0000)))
T_63: (in Mem77[ds:0x0160:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0000 : word16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: word16
T_65: (in ax_50 != 0x0000 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0xFFFF : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0160 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_68 t0000)))
T_68: (in Mem76[ds:0x0160:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_69: (in 0x00C7 : word16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: word16
T_70: (in ax_50 != 0x00C7 : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in 0x0140 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in 0x0162 : word16)
  Class: Eq_72
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_73 t0000)))
T_73: (in Mem75[ds:0x0162:word16] : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_74: (in di_41 - 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0160 : word16)
  Class: Eq_75
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_76 t0000)))
T_76: (in Mem40[ds:0x0160:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_77: (in di_41 - 0x0001 + ds->w0160 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0162 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_79 t0000)))
T_79: (in Mem40[ds:0x0162:word16] : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_80: (in di_41 - 0x0001 + ds->w0160 + ds->w0162 : word16)
  Class: Eq_13
  DataType: (memptr (ptr Eq_26) byte)
  OrigDataType: word16
T_81: (in __inb : ptr32)
  Class: Eq_81
  DataType: (ptr Eq_81)
  OrigDataType: (ptr (fn T_83 (T_82)))
T_82: (in 0x60 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in __inb(0x60) : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in 0x01 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_85: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_85
  DataType: bool
  OrigDataType: bool
T_86: (in 0xFEC0 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0162 : word16)
  Class: Eq_87
  DataType: (memptr (ptr Eq_48) word16)
  OrigDataType: (memptr T_48 (struct (0 T_88 t0000)))
T_88: (in Mem74[ds:0x0162:word16] : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_89:
  Class: Eq_89
  DataType: byte
  OrigDataType: (struct 0001 (0 T_34 t0000))
T_90:
  Class: Eq_89
  DataType: byte
  OrigDataType: (struct 0001 (0 T_39 t0000))
T_91:
  Class: Eq_91
  DataType: Eq_91
  OrigDataType: 
*/
typedef Eq_26 Eq_1struct Globals {
	Eq_26 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_15)(word16, byte);

typedef  Eq_26[]struct Eq_26 {
	byte a0000[];	// 0
} Eq_26;

typedef struct Eq_27 {
} Eq_27;

typedef union Eq_28 {
	ptr16 u0;
	Eq_91 Eq_27::* u1;
} Eq_28;

typedef struct Eq_48 {
	uint16 w015E;	// 15E
	word16 w0160;	// 160
	word16 w0162;	// 162
} Eq_48;

typedef byte (Eq_81)(byte);

typedef Eq_26 Eq_91struct Eq_91 {
	Eq_26 * ptrFFFFFFFC;	// FFFFFFFC
} Eq_91;

