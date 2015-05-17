// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_105/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_52) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_13: (fn void (word16, byte))
	T_13 (in __outb : ptr32)
Eq_52: (segment "Eq_52")
	T_52 (in 0xA000 : selector)
Eq_65: (fn byte (byte))
	T_65 (in __inb : ptr32)
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
T_7: (in al_12 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0x13 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_9: (in ax_11 : word16)
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
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_15 (T_14, T_7)))
T_14: (in 0x03C9 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in __outb(0x03C9, al_12) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in ax_11 + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_18: (in (byte) ax_11 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_19: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_20: (in ax_11 != 0x0000 : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in dx_ax_30 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in 0x0000 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di : (memptr (ptr Eq_52) byte))
  Class: Eq_23
  DataType: (memptr (ptr Eq_52) byte)
  OrigDataType: (memptr T_52 (struct 0001 (0 T_55 t0000)))
T_24: (in SEQ(0x0000, di) : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_25: (in ax_35 : int16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_26: (in 0x0140 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in dx_ax_30 % 0x0140 : uint16)
  Class: Eq_27
  DataType: uint16
  OrigDataType: uint16
T_28: (in SEQ(dx_ax_30 % 0x0140, di) : word32)
  Class: Eq_28
  DataType: uint32
  OrigDataType: uint32
T_29: (in 0x0140 : word16)
  Class: Eq_29
  DataType: uint16
  OrigDataType: uint16
T_30: (in SEQ(dx_ax_30 % 0x0140, di) /u 0x0140 : uint16)
  Class: Eq_30
  DataType: uint16
  OrigDataType: uint16
T_31: (in 0x0064 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in SEQ(dx_ax_30 % 0x0140, di) /u 0x0140 - 0x0064 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: word16
T_33: (in dx_38 : int16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_34: (in dx_ax_30 % 0x0140 : uint16)
  Class: Eq_34
  DataType: uint16
  OrigDataType: uint16
T_35: (in 0x00A0 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in dx_ax_30 % 0x0140 - 0x00A0 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: word16
T_37: (in 0x0000 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_38: (in dx_38 > 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in ax_35 > dx_38 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in -dx_38 : word16)
  Class: Eq_25
  DataType: int16
  OrigDataType: int16
T_41: (in ax_49 : uint16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: uint16
T_42: (in 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in ax_35 + 0x0001 : word16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: word16
T_44: (in 0x00000FA0 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in 0x00000FA0 % ax_49 : uint16)
  Class: Eq_45
  DataType: uint16
  OrigDataType: uint16
T_46: (in 0x0FA0 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in SEQ(0x00000FA0 % ax_49, 0x0FA0) : word32)
  Class: Eq_47
  DataType: uint32
  OrigDataType: uint32
T_48: (in SEQ(0x00000FA0 % ax_49, 0x0FA0) /u ax_49 : uint16)
  Class: Eq_48
  DataType: uint16
  OrigDataType: uint16
T_49: (in si : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in SEQ(0x00000FA0 % ax_49, 0x0FA0) /u ax_49 + si : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in (byte) (SEQ(0x00000FA0 % ax_49, 0x0FA0) /u ax_49 + si) : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in 0xA000 : selector)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (segment))
T_53: (in 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in di + 0x0000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in Mem60[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in di + 0x0001 : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_52) byte)
  OrigDataType: word16
T_58: (in cx : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in cx - 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_61: (in 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_62: (in cx != 0x0000 : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in 0x0001 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in si + 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_65: (in __inb : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_67 (T_66)))
T_66: (in 0x60 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in __inb(0x60) : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in 0x01 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_69: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_69
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_52 Eq_1struct Globals {
	Eq_52 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_13)(word16, byte);

typedef struct Eq_52 {
} Eq_52;

typedef byte (Eq_65)(byte);

