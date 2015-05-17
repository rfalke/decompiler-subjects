// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_242/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_14: (fn void (word16, uint8))
	T_14 (in __outb : ptr32)
Eq_17: (union "Eq_17" (uint16 u0) (byte u1))
	T_17 (in al_12 : Eq_17)
	T_19 (in cl_16 >>u 0x02 : word16)
Eq_20: (fn void (word16, Eq_17))
	T_20 (in __outb : ptr32)
Eq_23: (fn void (word16, Eq_17))
	T_23 (in __outb : ptr32)
Eq_26: (fn void (word16, byte))
	T_26 (in __outb : ptr32)
Eq_36: (segment "Eq_36" (0 (arr byte) a0000))
	T_36 (in es_21 : (ptr Eq_36))
	T_42 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_37: (segment "Eq_37" (205 (arr byte) a0205) (206 (arr byte) a0206))
	T_37 (in ds : (ptr Eq_37))
Eq_47: (struct "Eq_47" 0001 (FFFFFFFF byte bFFFFFFFF) (0 byte b0000))
	T_47 (in si_32 : (memptr (ptr Eq_37) Eq_47))
	T_48 (in 0x0206 : word16)
	T_59 (in si_32 + 0x0001 : word16)
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
T_7: (in cx_15 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in cx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in cx + 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in cl_16 : uint8)
  Class: Eq_11
  DataType: uint8
  OrigDataType: uint8
T_12: (in cx + 0x0001 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in (byte) (cx + 0x0001) : byte)
  Class: Eq_11
  DataType: uint8
  OrigDataType: byte
T_14: (in __outb : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_16 (T_15, T_11)))
T_15: (in 0x03C8 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in __outb(0x03C8, cl_16) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in al_12 : Eq_17)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: byte
T_18: (in 0x02 : byte)
  Class: Eq_18
  DataType: uint8
  OrigDataType: uint8
T_19: (in cl_16 >>u 0x02 : word16)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: uint16
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_22 (T_21, T_17)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C9, al_12) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in __outb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_25 (T_24, T_17)))
T_24: (in 0x03C9 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in __outb(0x03C9, al_12) : void)
  Class: Eq_25
  DataType: void
  OrigDataType: void
T_26: (in __outb : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_30 (T_27, T_29)))
T_27: (in 0x03C9 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0E : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in al_12 + 0x0E : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in __outb(0x03C9, al_12.u1) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in cx_15 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_33: (in (byte) cx_15 : byte)
  Class: Eq_11
  DataType: uint8
  OrigDataType: byte
T_34: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_35: (in cx_15 != 0x0000 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in es_21 : (ptr Eq_36))
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (segment (0 (arr T_75) a0000)))
T_37: (in ds : (ptr Eq_37))
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (segment (205 (arr T_76) a0205) (206 (arr T_74) a0206)))
T_38: (in bx : (memptr (ptr Eq_37) segptr32))
  Class: Eq_38
  DataType: (memptr (ptr Eq_37) segptr32)
  OrigDataType: (memptr T_37 (struct (0 T_41 t0000)))
T_39: (in 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in bx + 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_41
  DataType: segptr32
  OrigDataType: segptr32
T_42: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (segment))
T_43: (in cx_26 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0xFA00 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_45: (in di_28 : (memptr (ptr Eq_36) byte))
  Class: Eq_45
  DataType: (memptr (ptr Eq_36) byte)
  OrigDataType: (memptr T_36 (struct 0001 (0 T_54 t0000)))
T_46: (in 0x0000 : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_36) byte)
  OrigDataType: word16
T_47: (in si_32 : (memptr (ptr Eq_37) Eq_47))
  Class: Eq_47
  DataType: (memptr (ptr Eq_37) Eq_47)
  OrigDataType: (memptr T_37 (struct 0001 (FFFFFFFF T_67 tFFFFFFFF) (0 T_51 t0000)))
T_48: (in 0x0206 : word16)
  Class: Eq_47
  DataType: (memptr (ptr Eq_37) Eq_47)
  OrigDataType: word16
T_49: (in 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in si_32 + 0x0000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in Mem0[ds:si_32 + 0x0000:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in di_28 + 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in Mem37[es_21:di_28 + 0x0000:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_55: (in ax_43 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in bp : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in cx_26 + bp : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in si_32 + 0x0001 : word16)
  Class: Eq_47
  DataType: (memptr (ptr Eq_37) Eq_47)
  OrigDataType: word16
T_60: (in (byte) ax_43 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in SLICE(ax_43, byte, 8) : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in (byte) ax_43 ^ SLICE(ax_43, byte, 8) : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in 0x1F : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in ((byte) ax_43 ^ SLICE(ax_43, byte, 8)) & 0x1F : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in si_32 - 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in Mem50[ds:si_32 - 0x0001:byte] : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in di_28 + 0x0001 : word16)
  Class: Eq_45
  DataType: (memptr (ptr Eq_36) byte)
  OrigDataType: word16
T_70: (in 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in cx_26 - 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_72: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_73: (in cx_26 != 0x0000 : bool)
  Class: Eq_73
  DataType: bool
  OrigDataType: bool
T_74:
  Class: Eq_74
  DataType: byte
  OrigDataType: (struct 0001 (0 T_51 t0000))
T_75:
  Class: Eq_75
  DataType: byte
  OrigDataType: (struct 0001 (0 T_54 t0000))
T_76:
  Class: Eq_76
  DataType: byte
  OrigDataType: (struct 0001 (0 T_67 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_14)(word16, uint8);

typedef union Eq_17 {
	uint16 u0;
	byte u1;
} Eq_17;

typedef void (Eq_20)(word16, Eq_17);

typedef void (Eq_23)(word16, Eq_17);

typedef void (Eq_26)(word16, byte);

typedef  Eq_36[]struct Eq_36 {
	byte a0000[];	// 0
} Eq_36;

typedef  Eq_37[][]struct Eq_37 {
	byte a0205[];	// 205
	byte a0206[];	// 206
} Eq_37;

typedef struct Eq_47 {	// size: 1 1
	byte bFFFFFFFF;	// FFFFFFFF
	byte b0000;	// 0
} Eq_47;

