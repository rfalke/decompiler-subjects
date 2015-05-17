// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_167/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void (byte))
	T_3 (in bios_video_set_mode : ptr32)
	T_4 (in signature of bios_video_set_mode : void)
	T_34 (in bios_video_set_mode : ptr32)
Eq_8: (fn void (byte, byte))
	T_8 (in bios_video_set_CGA_palette : ptr32)
	T_9 (in signature of bios_video_set_CGA_palette : void)
Eq_21: (union "Eq_21" (real16 u0) (real64 u1))
	T_21 (in rLoc1_27 : Eq_21)
	T_22 (in 0 : real64)
	T_65 (in rLoc1_27 + 0x38D1B717 : word16)
Eq_23: (fn byte (byte))
	T_23 (in __inb : ptr32)
Eq_29: (fn byte ((ptr byte)))
	T_29 (in bios_kbd_get_keystroke : ptr32)
	T_30 (in signature of bios_kbd_get_keystroke : void)
Eq_42: (union "Eq_42" (real16 u0) (real64 u1))
	T_42 (in rLoc2_45 : Eq_42)
	T_47 (in sin(rLoc2 * (real64) ax_4) : real64)
Eq_43: (fn Eq_42 (real16))
	T_43 (in sin : ptr32)
Eq_44: (union "Eq_44" (real16 u0) (real64 u1))
	T_44 (in rLoc2 : real64)
	T_60 (in rLoc2_45 * 200 * cos((rLoc2_45 * 200) * 40) : real64)
Eq_45: (union "Eq_45" (real16 u0) (real64 u1))
	T_45 (in (real64) ax_4 : real64)
Eq_48: (fn real64 (real16))
	T_48 (in sin : ptr32)
Eq_49: (union "Eq_49" (real16 u0) (real64 u1))
	T_49 (in 200 : real64)
Eq_51: (union "Eq_51" (real16 u0) (real64 u1))
	T_51 (in 49 : real64)
Eq_54: (union "Eq_54" (real16 u0) (real64 u1))
	T_54 (in rLoc2_45 * 200 : word16)
Eq_55: (fn real64 (real16))
	T_55 (in cos : ptr32)
Eq_57: (union "Eq_57" (real16 u0) (real64 u1))
	T_57 (in 40 : real64)
Eq_61: (fn void (byte))
	T_61 (in __syscall : ptr32)
Eq_64: (union "Eq_64" (real16 u0) (word32 u1))
	T_64 (in 0x38D1B717 : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rLoc1 : real64)
  Class: Eq_2
  DataType: real64
  OrigDataType: real64
T_3: (in bios_video_set_mode : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_7 (T_6)))
T_4: (in signature of bios_video_set_mode : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in al : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in 0x12 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_7: (in bios_video_set_mode(0x12) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in bios_video_set_CGA_palette : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_14 (T_12, T_13)))
T_9: (in signature of bios_video_set_CGA_palette : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in bh : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in bl : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in bh : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_13: (in 0x07 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_14: (in bios_video_set_CGA_palette(bh, 0x07) : void)
  Class: Eq_14
  DataType: void
  OrigDataType: void
T_15: (in ax_4 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in ax : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x12 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in DPB(ax, 0x12, 0, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_19: (in cx_125 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_21: (in rLoc1_27 : Eq_21)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: (union (real16 u0) (real64 u1))
T_22: (in 0 : real64)
  Class: Eq_21
  DataType: real64
  OrigDataType: real64
T_23: (in __inb : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_25 (T_24)))
T_24: (in 0x60 : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in __inb(0x60) : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in 0x01 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_27: (in __inb(0x60) == 0x01 : bool)
  Class: Eq_27
  DataType: bool
  OrigDataType: bool
T_28: (in al_120 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_33 (T_32)))
T_30: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: 
T_31: (in alOut : ptr16)
  Class: Eq_31
  DataType: (ptr byte)
  OrigDataType: ptr16
T_32: (in out al_120 : ptr16)
  Class: Eq_31
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_33: (in bios_kbd_get_keystroke(out al_120) : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in bios_video_set_mode : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_36 (T_35)))
T_35: (in 0x03 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_36: (in bios_video_set_mode(0x03) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_37: (in cx_132 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx_132 + 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_41: (in cx_132 != 0x0001 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in rLoc2_45 : Eq_42)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: (union (real16 u0) (real64 u1))
T_43: (in sin : ptr32)
  Class: Eq_43
  DataType: (ptr Eq_43)
  OrigDataType: (ptr (fn T_47 (T_46)))
T_44: (in rLoc2 : real64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (real16 u0) (real64 u1))
T_45: (in (real64) ax_4 : real64)
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: (union (real16 u0) (real64 u1))
T_46: (in rLoc2 * (real64) ax_4 : word16)
  Class: Eq_46
  DataType: real16
  OrigDataType: real16
T_47: (in sin(rLoc2 * (real64) ax_4) : real64)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real64
T_48: (in sin : ptr32)
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (fn T_53 (T_52)))
T_49: (in 200 : real64)
  Class: Eq_49
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_50: (in rLoc2_45 * 200 : word16)
  Class: Eq_50
  DataType: real16
  OrigDataType: real16
T_51: (in 49 : real64)
  Class: Eq_51
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_52: (in rLoc2_45 * 200 * 49 : word16)
  Class: Eq_52
  DataType: real16
  OrigDataType: real16
T_53: (in sin(rLoc2_45 * 200 * 49) : real64)
  Class: Eq_53
  DataType: real64
  OrigDataType: real64
T_54: (in rLoc2_45 * 200 : word16)
  Class: Eq_54
  DataType: Eq_54
  OrigDataType: (union (real16 u0) (real64 u1))
T_55: (in cos : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_59 (T_58)))
T_56: (in rLoc2_45 * 200 : word16)
  Class: Eq_56
  DataType: real16
  OrigDataType: real16
T_57: (in 40 : real64)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: (union (real16 u0) (real64 u1))
T_58: (in rLoc2_45 * 200 * 40 : word16)
  Class: Eq_58
  DataType: real16
  OrigDataType: real16
T_59: (in cos(rLoc2_45 * 200 * 40) : real64)
  Class: Eq_59
  DataType: real64
  OrigDataType: real64
T_60: (in rLoc2_45 * 200 * cos((rLoc2_45 * 200) * 40) : real64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: real64
T_61: (in __syscall : ptr32)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (fn T_63 (T_62)))
T_62: (in 0x10 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in __syscall(0x10) : void)
  Class: Eq_63
  DataType: void
  OrigDataType: void
T_64: (in 0x38D1B717 : word32)
  Class: Eq_64
  DataType: real16
  OrigDataType: (union (real16 u0) (word32 u1))
T_65: (in rLoc1_27 + 0x38D1B717 : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: real16
T_66: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in SEQ(0x0000, cx_132) : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in 0x0DA3 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in SEQ(0x0000, cx_132) % 0x0DA3 : uint16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: uint16
T_70: (in 0x0000 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_71: (in SEQ(0x0000, cx_132) % 0x0DA3 != 0x0000 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_3)(byte);

typedef void (Eq_8)(byte, byte);

typedef union Eq_21 {
	real16 u0;
	real64 u1;
} Eq_21;

typedef byte (Eq_23)(byte);

typedef byte (Eq_29)(byte *);

typedef union Eq_42 {
	real16 u0;
	real64 u1;
} Eq_42;

typedef Eq_42 (Eq_43)(real16);

typedef union Eq_44 {
	real16 u0;
	real64 u1;
} Eq_44;

typedef union Eq_45 {
	real16 u0;
	real64 u1;
} Eq_45;

typedef real64 (Eq_48)(real16);

typedef union Eq_49 {
	real16 u0;
	real64 u1;
} Eq_49;

typedef union Eq_51 {
	real16 u0;
	real64 u1;
} Eq_51;

typedef union Eq_54 {
	real16 u0;
	real64 u1;
} Eq_54;

typedef real64 (Eq_55)(real16);

typedef union Eq_57 {
	real16 u0;
	real64 u1;
} Eq_57;

typedef void (Eq_61)(byte);

typedef union Eq_64 {
	real16 u0;
	word32 u1;
} Eq_64;

