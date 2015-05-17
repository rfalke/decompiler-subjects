// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_254/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_22: (fn void (word16, uint16))
	T_22 (in __outb : ptr32)
Eq_29: (fn void (word16, byte))
	T_29 (in __outb : ptr32)
Eq_37: (fn void (word16, byte))
	T_37 (in __outb : ptr32)
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
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in ax_14 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_13: (in cl_18 : ui8)
  Class: Eq_13
  DataType: ui8
  OrigDataType: ui8
T_14: (in 0xFF : byte)
  Class: Eq_13
  DataType: ui8
  OrigDataType: byte
T_15: (in cx_20 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in cx : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0xFF : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in DPB(cx, 0xFF, 0, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_19: (in al_25 : uint8)
  Class: Eq_19
  DataType: uint8
  OrigDataType: uint8
T_20: (in 0x02 : byte)
  Class: Eq_20
  DataType: ui8
  OrigDataType: ui8
T_21: (in cl_18 * 0x02 : byte)
  Class: Eq_19
  DataType: uint8
  OrigDataType: ui8
T_22: (in __outb : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_26 (T_23, T_25)))
T_23: (in 0x03C9 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x02 : byte)
  Class: Eq_24
  DataType: uint8
  OrigDataType: uint8
T_25: (in al_25 >>u 0x02 : word16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in __outb(0x03C9, al_25 >>u 0x02) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in ax_26 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_28: (in DPB(ax_14, al_25, 0, 8) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_29: (in __outb : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_36 (T_30, T_35)))
T_30: (in 0x03C9 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in (byte) ax_26 : byte)
  Class: Eq_31
  DataType: uint8
  OrigDataType: uint8
T_32: (in 0x03 : byte)
  Class: Eq_32
  DataType: uint8
  OrigDataType: uint8
T_33: (in (byte) ax_26 >>u 0x03 : word16)
  Class: Eq_33
  DataType: uint16
  OrigDataType: uint16
T_34: (in 0x1F : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in ((byte) ax_26 >>u 0x03) + 0x1F : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in __outb(0x03C9, ((byte) ax_26 >>u 0x03) + 0x1F) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in __outb : ptr32)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (fn T_40 (T_38, T_39)))
T_38: (in 0x03C9 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x3F : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in __outb(0x03C9, 0x3F) : void)
  Class: Eq_40
  DataType: void
  OrigDataType: void
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in cx_20 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_43: (in (byte) cx_20 : byte)
  Class: Eq_13
  DataType: ui8
  OrigDataType: byte
T_44: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_45: (in cx_20 != 0x0000 : bool)
  Class: Eq_45
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_22)(word16, uint16);

typedef void (Eq_29)(word16, byte);

typedef void (Eq_37)(word16, byte);

