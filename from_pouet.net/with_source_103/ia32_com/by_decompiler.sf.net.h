// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_103/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_51) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_15: (struct 0001 (0 byte b0000))
	T_15 (in dx_36 : word16)
	T_16 (in 0x03C9 : word16)
	T_47 (in si_40 : word16)
	T_57 (in si_40 + 0x0001 : word16)
	T_76 (in dx_36 + 0x0001 : word16)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_21: (fn void (word16, byte))
	T_21 (in __outb : ptr32)
Eq_25: (fn void (word16, uint16))
	T_25 (in __outb : ptr32)
Eq_42: (fn byte (byte))
	T_42 (in __inb : ptr32)
Eq_51: (segment (0 (arr Eq_81) a0000) (50 (arr Eq_82) a0050))
	T_51 (in 0xA000 : selector)
Eq_52: (struct 0001 (0 byte b0000))
	T_52 (in di_37 : word16)
	T_59 (in di_37 + 0x0001 : word16)
	T_79 (in 0x0000 : word16)
Eq_81: (struct 0001 (0 byte b0000))
	T_81
Eq_82: (struct 0140 (0 byte b0000))
	T_82
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x03 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x03) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in ax_4 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in ax : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0x13 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_15: (in dx_36 : word16)
  Class: Eq_15
  DataType: (memptr word16 Eq_15)
  OrigDataType: word16
T_16: (in 0x03C9 : word16)
  Class: Eq_15
  DataType: (memptr word16 Eq_15)
  OrigDataType: word16
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_20 (T_18, T_19)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x00 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_24 (T_22, T_23)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in 0x00 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in __outb : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_30 (T_26, T_29)))
T_26: (in 0x03C9 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in cl : byte)
  Class: Eq_27
  DataType: uint8
  OrigDataType: uint8
T_28: (in 0x02 : byte)
  Class: Eq_28
  DataType: uint8
  OrigDataType: uint8
T_29: (in cl >>u 0x02 : word16)
  Class: Eq_29
  DataType: uint16
  OrigDataType: uint16
T_30: (in __outb(0x03C9, cl >>u 0x02) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in cx : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in cx - 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_34: (in (byte) cx : byte)
  Class: Eq_27
  DataType: uint8
  OrigDataType: byte
T_35: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_36: (in cx != 0x0000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in bx_22 : word16)
  Class: Eq_37
  DataType: ui16
  OrigDataType: ui16
T_38: (in bx : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x64 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in DPB(bx, 0x64, 0, 8) : word16)
  Class: Eq_37
  DataType: ui16
  OrigDataType: word16
T_41: (in al_54 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in __inb : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_44 (T_43)))
T_43: (in 0x60 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in __inb(0x60) : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_45: (in 0x48 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_46: (in al_54 != 0x48 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in si_40 : word16)
  Class: Eq_15
  DataType: (memptr word16 Eq_15)
  OrigDataType: (memptr T_11 (struct 0001 (0 T_50 t0000)))
T_48: (in 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in si_40 + 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in Mem0[ax_4:si_40 + 0x0000:byte] : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in 0xA000 : selector)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (segment (0 (arr T_81) a0000) (50 (arr T_82) a0050)))
T_52: (in di_37 : word16)
  Class: Eq_52
  DataType: (memptr (ptr Eq_51) Eq_52)
  OrigDataType: (memptr T_51 (struct 0001 (0 T_55 t0000)))
T_53: (in 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in di_37 + 0x0000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in Mem49[0xA000:di_37 + 0x0000:byte] : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in si_40 + 0x0001 : word16)
  Class: Eq_15
  DataType: (memptr word16 Eq_15)
  OrigDataType: word16
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in di_37 + 0x0001 : word16)
  Class: Eq_52
  DataType: (memptr (ptr Eq_51) Eq_52)
  OrigDataType: word16
T_60: (in cx_41 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in cx_41 - 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_63: (in 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_64: (in cx_41 == 0x0000 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0x50 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_66: (in al_54 != 0x50 : bool)
  Class: Eq_66
  DataType: bool
  OrigDataType: bool
T_67: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in bx_22 - 0x0001 : word16)
  Class: Eq_37
  DataType: ui16
  OrigDataType: word16
T_69: (in 0x02 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in 0x0050 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in SEQ(0xA000, 0x0050) : ptr32)
  Class: Eq_71
  DataType: ptr32
  OrigDataType: ptr32
T_72: (in 0x0140 : word16)
  Class: Eq_72
  DataType: ui16
  OrigDataType: ui16
T_73: (in bx_22 * 0x0140 : word16)
  Class: Eq_73
  DataType: ui16
  OrigDataType: ui16
T_74: (in SEQ(0xA000, 0x0050)[bx_22 * 0x0140] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in dx_36 + 0x0001 : word16)
  Class: Eq_15
  DataType: (memptr word16 Eq_15)
  OrigDataType: word16
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in bx_22 + 0x0001 : word16)
  Class: Eq_37
  DataType: ui16
  OrigDataType: word16
T_79: (in 0x0000 : word16)
  Class: Eq_52
  DataType: (memptr (ptr Eq_51) Eq_52)
  OrigDataType: word16
T_80: (in 0xFA00 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_81:
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: (struct 0001 (0 T_55 t0000))
T_82:
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: (struct 0140 (0 T_74 t0000))
*/
typedef  Eq_1struct Globals {
	 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_15;

typedef void (Eq_17)(word16, byte);

typedef void (Eq_21)(word16, byte);

typedef void (Eq_25)(word16, uint16);

typedef byte (Eq_42)(byte);

typedef  Eq_51[][]struct  {
	 a0000[];	// 0
	 a0050[];	// 50
} Eq_51;

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_52;

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_81;

typedef struct  {	// size: 320 140
	byte b0000;	// 0
} Eq_82;

