// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_039/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_18) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_18: (segment "Eq_18")
	T_18 (in 0xA000 : selector)
Eq_32: (fn byte (word16))
	T_32 (in __inb : ptr32)
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
T_8: (in di : (memptr (ptr Eq_18) byte))
  Class: Eq_8
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: (memptr T_18 (struct 0001 (0 T_21 t0000)))
T_9: (in bx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in di + bx : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in (byte) ax_20 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in SLICE(ax_20, byte, 8) : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in (byte) ax_20 ^ SLICE(ax_20, byte, 8) : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in bh : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in ((byte) ax_20 ^ SLICE(ax_20, byte, 8)) & bh : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x3F : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in ((byte) ax_20 ^ SLICE(ax_20, byte, 8)) & bh & 0x3F : byte)
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
T_20: (in di + 0x0000 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in Mem28[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di + 0x0001 : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_18) byte)
  OrigDataType: word16
T_24: (in cx : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in cx - 0x0001 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_28: (in cx != 0x0000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_31: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_32: (in __inb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_34 (T_33)))
T_33: (in 0x03DA : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in __inb(0x03DA) : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x08 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in 0x00 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_38: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_18 Eq_1struct Globals {
	Eq_18 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_18 {
} Eq_18;

typedef byte (Eq_32)(word16);

