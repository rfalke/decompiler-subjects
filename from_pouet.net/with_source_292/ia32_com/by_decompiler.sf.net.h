// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_292/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_11: (fn void (word16, byte))
	T_11 (in __outb : ptr32)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_32: (fn void (word16, byte))
	T_32 (in __outb : ptr32)
Eq_42: (fn void (word16, byte))
	T_42 (in __outb : ptr32)
Eq_51: (fn void (byte, byte))
	T_51 (in __outb : ptr32)
Eq_56: (segment "Eq_56" (FA04 word16 wFA04))
	T_56 (in ds : (ptr Eq_56))
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
T_7: (in ax_4 : word16)
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
T_11: (in __outb : ptr32)
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (fn T_16 (T_12, T_15)))
T_12: (in 0x03C8 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in 0x0EFA : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in ax_4 | 0x0EFA : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in (byte) (ax_4 | 0x0EFA) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in __outb(0x03C8, (byte) (ax_4 | 0x0EFA)) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_23 (T_18, T_22)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in ax_25 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in ax_25 << 0x0001 : word16)
  Class: Eq_21
  DataType: ui16
  OrigDataType: ui16
T_22: (in (byte) (ax_25 << 0x0001) : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in __outb(0x03C9, (byte) (ax_25 << 0x0001)) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in cx : uint16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: uint16
T_25: (in 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in cx - 0x0001 : word16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: word16
T_27: (in 0x0000 : word16)
  Class: Eq_24
  DataType: uint16
  OrigDataType: word16
T_28: (in cx != 0x0000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in ax_22 : ui16)
  Class: Eq_29
  DataType: ui16
  OrigDataType: word16
T_30: (in 0x1F : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in DPB(ax_22, 0x1F, 0, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_32: (in __outb : ptr32)
  Class: Eq_32
  DataType: (ptr Eq_32)
  OrigDataType: (ptr (fn T_37 (T_33, T_36)))
T_33: (in 0x03C9 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0002 : word16)
  Class: Eq_34
  DataType: uint16
  OrigDataType: uint16
T_35: (in cx >>u 0x0002 : word16)
  Class: Eq_35
  DataType: uint16
  OrigDataType: uint16
T_36: (in (byte) (cx >>u 0x0002) : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in __outb(0x03C9, (byte) (cx >>u 0x0002)) : void)
  Class: Eq_37
  DataType: void
  OrigDataType: void
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx << 0x0001 : word16)
  Class: Eq_29
  DataType: ui16
  OrigDataType: ui16
T_40: (in al_23 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in (byte) ax_22 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_42: (in __outb : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_44 (T_43, T_40)))
T_43: (in 0x03C9 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in __outb(0x03C9, al_23) : void)
  Class: Eq_44
  DataType: void
  OrigDataType: void
T_45: (in 0x3F : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in al_23 & 0x3F : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in DPB(ax_22, al_23 & 0x3F, 0, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_48: (in al_23 & 0x3F : byte)
  Class: Eq_48
  DataType: bcu8
  OrigDataType: bcu8
T_49: (in 0x1F : byte)
  Class: Eq_48
  DataType: bcu8
  OrigDataType: bcu8
T_50: (in (al_23 & 0x3F) <=u 0x1F : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in __outb : ptr32)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (fn T_54 (T_52, T_53)))
T_52: (in 0x61 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in (byte) ax_4 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in __outb(0x61, (byte) ax_4) : void)
  Class: Eq_54
  DataType: void
  OrigDataType: void
T_55: (in 0x0019 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in ds : (ptr Eq_56))
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (segment (FA04 T_58 tFA04)))
T_57: (in 0xFA04 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_56) word16)
  OrigDataType: (memptr T_56 (struct (0 T_58 t0000)))
T_58: (in Mem41[ds:0xFA04:word16] : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_11)(word16, byte);

typedef void (Eq_17)(word16, byte);

typedef void (Eq_32)(word16, byte);

typedef void (Eq_42)(word16, byte);

typedef void (Eq_51)(byte, byte);

typedef struct Eq_56 {
	word16 wFA04;	// FA04
} Eq_56;

