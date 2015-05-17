// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_226/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_19: (fn void (word16, byte))
	T_19 (in __outb : ptr32)
Eq_24: (fn word16 (word16, word16, byte))
	T_24 (in __shld : ptr32)
Eq_29: (fn void (word16, uint8))
	T_29 (in __outb : ptr32)
Eq_36: (fn void (word16, byte))
	T_36 (in __outb : ptr32)
Eq_45: (union "Eq_45" (int16 u0) ((memptr word16 byte) u1))
	T_45 (in bx : Eq_45)
	T_74 (in bx + 0x0001 : word16)
	T_75 (in 0x0000 : word16)
Eq_48: (fn real64 (64))
	T_48 (in sqrt : ptr32)
Eq_49: (segment "Eq_49")
	T_49 (in ds : (ptr Eq_49))
Eq_54: (union "Eq_54" (64 u0) (real64 u1))
	T_54 (in (real64) (ds->*di) : real64)
Eq_77: (struct "Eq_77" (FFFF8484 word16 wFFFF8484))
	T_77 (in si : (memptr (ptr Eq_49) Eq_77))
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
T_7: (in dx_13 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in dx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in dh : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x26 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in dh + 0x26 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(dx, dh + 0x26, 8, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_13: (in ax_17 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in wArg00 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in al_18 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in (byte) wArg00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in dx_21 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x03C8 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_19: (in __outb : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_20 (T_17, T_15)))
T_20: (in __outb(dx_21, al_18) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in 0xC9 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in DPB(dx_21, 0xC9, 0, 8) : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_23: (in al_36 : uint8)
  Class: Eq_23
  DataType: uint8
  OrigDataType: uint8
T_24: (in __shld : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_27 (T_13, T_25, T_26)))
T_25: (in cx : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x0E : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in __shld(ax_17, cx, 0x0E) : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in (byte) __shld(ax_17, cx, 0x0E) : byte)
  Class: Eq_23
  DataType: uint8
  OrigDataType: byte
T_29: (in __outb : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_30 (T_17, T_23)))
T_30: (in __outb(dx_21, al_36) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in ax_37 : uint16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: word16
T_32: (in cl : byte)
  Class: Eq_32
  DataType: uint8
  OrigDataType: uint8
T_33: (in cl *u al_36 : uint16)
  Class: Eq_31
  DataType: uint16
  OrigDataType: uint16
T_34: (in ah_38 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_35: (in SLICE(ax_37, byte, 8) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_36: (in __outb : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_37 (T_17, T_34)))
T_37: (in __outb(dx_21, ah_38) : void)
  Class: Eq_37
  DataType: void
  OrigDataType: void
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx - 0x0001 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_40: (in DPB(ax_37, ah_38, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_41: (in (byte) cx : byte)
  Class: Eq_32
  DataType: uint8
  OrigDataType: byte
T_42: (in 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_43: (in cx != 0x0000 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in dx_ax_48 : int32)
  Class: Eq_44
  DataType: int32
  OrigDataType: word32
T_45: (in bx : Eq_45)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: (union (int16 u0) ((memptr T_7 (struct 0001 (0 T_72 t0000))) u1))
T_46: (in bx *s bx : int32)
  Class: Eq_44
  DataType: int32
  OrigDataType: int32
T_47: (in rLoc1_62 : real64)
  Class: Eq_47
  DataType: real64
  OrigDataType: real64
T_48: (in sqrt : ptr32)
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (fn T_56 (T_55)))
T_49: (in ds : (ptr Eq_49))
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (segment))
T_50: (in di : (memptr (ptr Eq_49) int16))
  Class: Eq_50
  DataType: (memptr (ptr Eq_49) int16)
  OrigDataType: (memptr T_49 (struct (0 T_53 t0000)))
T_51: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di + 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem0[ds:di + 0x0000:int16] : int16)
  Class: Eq_53
  DataType: int16
  OrigDataType: int16
T_54: (in (real64) (ds->*di) : real64)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: (union (64 u0) (real64 u1))
T_55: (in -(real64) (ds->*di) : real64)
  Class: Eq_55
  DataType: 64
  OrigDataType: 64
T_56: (in sqrt(-(real64) (ds->*di)) : real64)
  Class: Eq_47
  DataType: real64
  OrigDataType: real64
T_57: (in rLoc1_62 + rLoc1_62 : real64)
  Class: Eq_57
  DataType: real64
  OrigDataType: real64
T_58: (in (int16) (rLoc1_62 + rLoc1_62) : int16)
  Class: Eq_53
  DataType: int16
  OrigDataType: int16
T_59: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in di + 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in Mem64[ds:di + 0x0000:int16] : int16)
  Class: Eq_53
  DataType: int16
  OrigDataType: int16
T_62: (in al_49 : int8)
  Class: Eq_62
  DataType: int8
  OrigDataType: int8
T_63: (in (byte) dx_ax_48 : byte)
  Class: Eq_62
  DataType: int8
  OrigDataType: byte
T_64: (in al_49 *s al_49 : int16)
  Class: Eq_64
  DataType: int16
  OrigDataType: int16
T_65: (in SLICE(dx_ax_48, word16, 16) : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in al_49 *s al_49 + SLICE(dx_ax_48, word16, 16) : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in 0x3FC0 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in al_49 *s al_49 + SLICE(dx_ax_48, word16, 16) - 0x3FC0 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in (byte) (al_49 *s al_49 + SLICE(dx_ax_48, word16, 16) - 0x3FC0) : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in bx + 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in Mem68[dx_13:bx + 0x0000:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in bx + 0x0001 : word16)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: word16
T_75: (in 0x0000 : word16)
  Class: Eq_45
  DataType: int16
  OrigDataType: word16
T_76: (in bx != 0x0000 : bool)
  Class: Eq_76
  DataType: bool
  OrigDataType: bool
T_77: (in si : (memptr (ptr Eq_49) Eq_77))
  Class: Eq_77
  DataType: (memptr (ptr Eq_49) Eq_77)
  OrigDataType: (memptr T_49 (struct (FFFF8484 T_80 tFFFF8484)))
T_78: (in 0x8484 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in si + 0x8484 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in Mem68[ds:si + 0x8484:word16] : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_81: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in (ds->*si).wFFFF8484 + 0x0001 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_83: (in 0x8484 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in si + 0x8484 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in Mem75[ds:si + 0x8484:word16] : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_19)(word16, byte);

typedef word16 (Eq_24)(word16, word16, byte);

typedef void (Eq_29)(word16, uint8);

typedef void (Eq_36)(word16, byte);

typedef union Eq_45 {
	int16 u0;
	byte word16::* u1;
} Eq_45;

typedef real64 (Eq_48)(64);

typedef struct Eq_49 {
} Eq_49;

typedef union Eq_54 {
	64 u0;
	real64 u1;
} Eq_54;

typedef struct Eq_77 {
	word16 wFFFF8484;	// FFFF8484
} Eq_77;

