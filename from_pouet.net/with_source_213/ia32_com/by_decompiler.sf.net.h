// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_213/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_37) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void ((ptr Eq_9), word16))
	T_7 (in msdos_display_string : ptr32)
	T_8 (in signature of msdos_display_string : void)
Eq_9: (segment "Eq_9")
	T_9 (in ds : selector)
	T_11 (in ds : (ptr Eq_9))
Eq_14: (fn void (word16, byte))
	T_14 (in __outb : ptr32)
Eq_22: (fn void (word16, uint16))
	T_22 (in __outb : ptr32)
Eq_27: (fn void (word16, uint8))
	T_27 (in __outb : ptr32)
Eq_32: (fn void (word16, uint16))
	T_32 (in __outb : ptr32)
Eq_37: (segment "Eq_37" (0 (arr byte) a0000))
	T_37 (in 0xA000 : selector)
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
T_7: (in msdos_display_string : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_13 (T_11, T_12)))
T_8: (in signature of msdos_display_string : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in ds : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_10: (in dx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in ds : (ptr Eq_9))
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment))
T_12: (in 0x01CF : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in msdos_display_string(ds, 0x01CF) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in __outb : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_17 (T_15, T_16)))
T_15: (in 0x03C8 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x00 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in di_15 : (memptr (ptr Eq_37) byte))
  Class: Eq_18
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: (memptr T_37 (struct 0001 (0 T_36 t0000)))
T_19: (in 0x0000 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: word16
T_20: (in al_20 : uint8)
  Class: Eq_20
  DataType: uint8
  OrigDataType: uint8
T_21: (in (byte) di_15 : byte)
  Class: Eq_20
  DataType: uint8
  OrigDataType: byte
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
T_25: (in al_20 >>u 0x02 : word16)
  Class: Eq_25
  DataType: uint16
  OrigDataType: uint16
T_26: (in __outb(0x03C9, al_20 >>u 0x02) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_31 (T_28, T_30)))
T_28: (in 0x03C9 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x03 : byte)
  Class: Eq_29
  DataType: uint8
  OrigDataType: uint8
T_30: (in al_20 >>u 0x03 : byte)
  Class: Eq_30
  DataType: uint8
  OrigDataType: uint8
T_31: (in __outb(0x03C9, al_20 >>u 0x03) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in __outb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_35 (T_33, T_34)))
T_33: (in 0x03C9 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in al_20 >>u 0x02 : word16)
  Class: Eq_34
  DataType: uint16
  OrigDataType: uint16
T_35: (in __outb(0x03C9, al_20 >>u 0x02) : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in al_28 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in 0xA000 : selector)
  Class: Eq_37
  DataType: (ptr Eq_37)
  OrigDataType: (ptr (segment (0 (arr T_52) a0000)))
T_38: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_15 + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem0[0xA000:di_15 + 0x0000:byte] : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_41: (in 0x03 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0xA000->*di_15 << 0x03 : word16)
  Class: Eq_42
  DataType: ui16
  OrigDataType: ui16
T_43: (in 0x40 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in (0xA000->*di_15 << 0x03) + 0x40 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_45: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di_15 + 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem31[0xA000:di_15 + 0x0000:byte] : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_48: (in 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in di_15 + 0x0001 : word16)
  Class: Eq_18
  DataType: (memptr (ptr Eq_37) byte)
  OrigDataType: word16
T_50: (in 0x00 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_51: (in al_28 != 0x00 : bool)
  Class: Eq_51
  DataType: bool
  OrigDataType: bool
T_52:
  Class: Eq_52
  DataType: byte
  OrigDataType: (struct 0001 (0 T_40 t0000))
T_53:
  Class: Eq_52
  DataType: byte
  OrigDataType: (struct 0001 (0 T_47 t0000))
*/
typedef Eq_37 Eq_1struct Globals {
	Eq_37 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(Eq_9 *, word16);

typedef struct Eq_9 {
} Eq_9;

typedef void (Eq_14)(word16, byte);

typedef void (Eq_22)(word16, uint16);

typedef void (Eq_27)(word16, uint8);

typedef void (Eq_32)(word16, uint16);

typedef  Eq_37[]struct Eq_37 {
	byte a0000[];	// 0
} Eq_37;

