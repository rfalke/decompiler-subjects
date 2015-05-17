// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_096/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_18) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_18: (segment "Eq_18" (FFFFE880 byte bFFFFE880) (0 byte b0000) (E880 byte bE880))
	T_18 (in 0xA000 : selector)
Eq_29: (fn void (word16, byte))
	T_29 (in __outb : ptr32)
Eq_33: (fn void (word16, byte))
	T_33 (in __outb : ptr32)
Eq_41: (fn void (word16, byte))
	T_41 (in __outb : ptr32)
Eq_55: (fn void (word16, byte))
	T_55 (in __outb : ptr32)
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
T_7: (in di_16 : (memptr (ptr Eq_18) byte))
  Class: Eq_7
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: (memptr T_18 (struct 0001 (0 T_21 t0000)))
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: word16
T_9: (in wLoc02_19 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in si_21 : int16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_12: (in si : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in si + 0x0001 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_15: (in 0xE880 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: word16
T_16: (in di_16 != &Eq_18::bFFFFE880 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in al_53 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0xA000 : selector)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment))
T_19: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in di_16 + 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in Mem57[0xA000:di_16 + 0x0000:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di_16 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: word16
T_24: (in cx_54 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in cx_54 - 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_28: (in cx_54 == 0x0000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in __outb : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_32 (T_30, T_31)))
T_30: (in 0x03C9 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in 0x00 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in __outb : ptr32)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (fn T_36 (T_34, T_35)))
T_34: (in 0x03C9 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in 0x00 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in bx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in bx + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_40: (in (byte) bx : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_41: (in __outb : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_43 (T_42, T_17)))
T_42: (in 0x03C9 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in __outb(0x03C9, al_53) : void)
  Class: Eq_43
  DataType: void
  OrigDataType: void
T_44: (in 0x0780 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_45: (in wLoc02_19 + si_21 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_46: (in 0x0000 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: word16
T_47: (in bl_66 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in (byte) bx : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_49: (in 0x20 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_50: (in bl_66 == 0x20 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in -si_21 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_52: (in DPB(bx, bl_66, 0, 8) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_53: (in 0x00 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_54: (in bl_66 != 0x00 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in __outb : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_58 (T_56, T_57)))
T_56: (in 0x03C8 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in (byte) bx : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in __outb(0x03C8, (byte) bx) : void)
  Class: Eq_58
  DataType: void
  OrigDataType: void
*/
typedef Eq_18 Eq_1struct Globals {
	Eq_18 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_18 {
	byte bFFFFE880;	// FFFFE880
	byte b0000;	// 0
	byte bE880;	// E880
} Eq_18;

typedef void (Eq_29)(word16, byte);

typedef void (Eq_33)(word16, byte);

typedef void (Eq_41)(word16, byte);

typedef void (Eq_55)(word16, byte);

