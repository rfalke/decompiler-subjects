// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_131/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_57 (in bios_video_set_mode : ptr32)
Eq_7: (segment "Eq_7" (10 byte b0010))
	T_7 (in es_7 : (ptr Eq_7))
	T_13 (in SLICE(ds->*bx, selector, 16) : selector)
Eq_8: (segment "Eq_8")
	T_8 (in ds : (ptr Eq_8))
Eq_22: (fn void (word16, byte))
	T_22 (in __outb : ptr32)
Eq_25: (fn void (word16, byte))
	T_25 (in __outb : ptr32)
Eq_28: (fn void (word16, byte))
	T_28 (in __outb : ptr32)
Eq_46: (fn byte (word16))
	T_46 (in __inb : ptr32)
Eq_52: (fn byte (byte))
	T_52 (in __inb : ptr32)
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
T_7: (in es_7 : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : (memptr (ptr Eq_8) segptr32))
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) segptr32)
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_12
  DataType: segptr32
  OrigDataType: segptr32
T_13: (in SLICE(ds->*bx, selector, 16) : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_14: (in al_15 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in 0x00 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_16: (in ah_10 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_18: (in dx_13 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_20: (in cx_14 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in 0x0100 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_24 (T_23, T_14)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in __outb(0x03C9, al_15) : void)
  Class: Eq_24
  DataType: void
  OrigDataType: void
T_25: (in __outb : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_27 (T_26, T_14)))
T_26: (in 0x03C9 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in __outb(0x03C9, al_15) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in __outb : ptr32)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn T_30 (T_29, T_14)))
T_29: (in 0x03C9 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in __outb(0x03C9, al_15) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in 0x04 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in al_15 + 0x04 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_33: (in 0x0001 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in cx_14 - 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_35: (in 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_36: (in cx_14 != 0x0000 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in di_33 : (memptr (ptr Eq_7) byte))
  Class: Eq_37
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct 0001 (0 T_72 t0000)))
T_38: (in 0x0010 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_39: (in bl : byte)
  Class: Eq_39
  DataType: int8
  OrigDataType: int8
T_40: (in 0x02 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in bl + 0x02 : byte)
  Class: Eq_39
  DataType: int8
  OrigDataType: byte
T_42: (in bh_35 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in 0x00 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_44: (in 0xDA : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in DPB(dx_13, 0xDA, 0, 8) : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_46: (in __inb : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_47 (T_18)))
T_47: (in __inb(dx_13) : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in 0x08 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in __inb(dx_13) & 0x08 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in 0x00 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_51: (in (__inb(dx_13) & 0x08) == 0x00 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52: (in __inb : ptr32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (fn T_54 (T_53)))
T_53: (in 0x60 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in __inb(0x60) : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in 0x01 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_56: (in __inb(0x60) == 0x01 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_59 (T_58)))
T_58: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_59: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_60: (in 0x00 : byte)
  Class: Eq_39
  DataType: int8
  OrigDataType: int8
T_61: (in bl <= 0x00 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in ah_10 - bl : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_63: (in ah_10 + bh_35 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_64: (in 0x01 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in bh_35 + 0x01 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_66: (in 0xC8 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_67: (in bh_35 == 0xC8 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in cx_67 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in 0x0140 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in di_33 + 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in Mem72[es_7:di_33 + 0x0000:byte] : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in di_33 + 0x0001 : word16)
  Class: Eq_37
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: word16
T_75: (in ah_10 + bh_35 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_76: (in 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in cx_67 - 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0000 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_79: (in cx_67 != 0x0000 : bool)
  Class: Eq_79
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
	byte b0010;	// 10
} Eq_7;

typedef struct Eq_8 {
} Eq_8;

typedef void (Eq_22)(word16, byte);

typedef void (Eq_25)(word16, byte);

typedef void (Eq_28)(word16, byte);

typedef byte (Eq_46)(word16);

typedef byte (Eq_52)(byte);

