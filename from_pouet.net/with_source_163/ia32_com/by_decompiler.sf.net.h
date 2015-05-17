// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_163/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_61) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_78 (in bios_video_set_mode : ptr32)
Eq_10: (fn real64 (real16))
	T_10 (in sin : ptr32)
Eq_11: (union "Eq_11" (real16 u0) (real64 u1))
	T_11 (in (real64) cx_16 : real64)
Eq_12: (union "Eq_12" (real16 u0) (real64 u1))
	T_12 (in 21167 : real64)
Eq_15: (fn void (word16, byte))
	T_15 (in __outb : ptr32)
Eq_17: (union "Eq_17" (real16 u0) (real64 u1))
	T_17 (in rLoc1_21 * rLoc1_21 : real64)
Eq_18: (union "Eq_18" (real16 u0) (real64 u1))
	T_18 (in 63 : real64)
Eq_39: (fn Eq_47 (real64, real64))
	T_39 (in atan : ptr32)
Eq_47: (union "Eq_47" (real16 u0) (real64 u1))
	T_47 (in atan((real64) (SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 - 0x0064), rLoc2_52) : real64)
Eq_48: (union "Eq_48" (real16 u0) (real64 u1))
	T_48 (in 41 : real64)
Eq_50: (fn real64 (real64))
	T_50 (in sqrt : ptr32)
Eq_55: (union "Eq_55" (real16 u0) (real64 u1))
	T_55 (in (real64) (int16) sqrt(rLoc3_54 + rLoc3_54 * rLoc3_54) : real64)
Eq_61: (segment "Eq_61")
	T_61 (in 0xA000 : selector)
Eq_73: (fn byte (byte))
	T_73 (in __inb : ptr32)
Eq_81: (fn void ((ptr Eq_83), word16))
	T_81 (in msdos_display_string : ptr32)
	T_82 (in signature of msdos_display_string : void)
Eq_83: (segment "Eq_83")
	T_83 (in ds : selector)
	T_85 (in ds : (ptr Eq_83))
Eq_88: (fn void ())
	T_88 (in msdos_terminate_program20 : ptr32)
	T_89 (in signature of msdos_terminate_program20 : void)
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
T_7: (in cx_16 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0300 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in rLoc1_21 : real64)
  Class: Eq_9
  DataType: real64
  OrigDataType: real64
T_10: (in sin : ptr32)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (fn T_14 (T_13)))
T_11: (in (real64) cx_16 : real64)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: (union (real16 u0) (real64 u1))
T_12: (in 21167 : real64)
  Class: Eq_12
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_13: (in (real64) cx_16 * 21167 : word16)
  Class: Eq_13
  DataType: real16
  OrigDataType: real16
T_14: (in sin((real64) cx_16 * 21167) : real64)
  Class: Eq_9
  DataType: real64
  OrigDataType: real64
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_22 (T_16, T_21)))
T_16: (in 0x03C9 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in rLoc1_21 * rLoc1_21 : real64)
  Class: Eq_17
  DataType: Eq_17
  OrigDataType: (union (real16 u0) (real64 u1))
T_18: (in 63 : real64)
  Class: Eq_18
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_19: (in rLoc1_21 * rLoc1_21 * 63 : word16)
  Class: Eq_19
  DataType: real16
  OrigDataType: real16
T_20: (in (int16) (rLoc1_21 * rLoc1_21 * 63) : int16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_21: (in (byte) (int16) (rLoc1_21 * rLoc1_21 * 63) : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in __outb(0x03C9, (byte) (int16) (rLoc1_21 * rLoc1_21 * 63)) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in cx_16 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_26: (in cx_16 != 0x0000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in dx_ax_43 : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_28: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in di : (memptr (ptr Eq_61) byte))
  Class: Eq_29
  DataType: (memptr (ptr Eq_61) byte)
  OrigDataType: (memptr T_61 (struct 0001 (0 T_64 t0000)))
T_30: (in SEQ(0x0000, di) : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_31: (in rLoc2_52 : real64)
  Class: Eq_31
  DataType: real64
  OrigDataType: real64
T_32: (in 0x0140 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in dx_ax_43 % 0x0140 : uint16)
  Class: Eq_33
  DataType: uint16
  OrigDataType: uint16
T_34: (in 0x00A0 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in dx_ax_43 % 0x0140 - 0x00A0 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in (real64) (dx_ax_43 % 0x0140 - 0x00A0) : real64)
  Class: Eq_31
  DataType: real64
  OrigDataType: real64
T_37: (in rLoc3_54 : real64)
  Class: Eq_37
  DataType: real64
  OrigDataType: real64
T_38: (in rLoc2_52 * rLoc2_52 : real64)
  Class: Eq_37
  DataType: real64
  OrigDataType: real64
T_39: (in atan : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_47 (T_46, T_31)))
T_40: (in dx_ax_43 % 0x0140 : uint16)
  Class: Eq_40
  DataType: uint16
  OrigDataType: uint16
T_41: (in SEQ(dx_ax_43 % 0x0140, di) : word32)
  Class: Eq_41
  DataType: uint32
  OrigDataType: uint32
T_42: (in 0x0140 : word16)
  Class: Eq_42
  DataType: uint16
  OrigDataType: uint16
T_43: (in SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 : uint16)
  Class: Eq_43
  DataType: uint16
  OrigDataType: uint16
T_44: (in 0x0064 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 - 0x0064 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in (real64) (SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 - 0x0064) : real64)
  Class: Eq_46
  DataType: real64
  OrigDataType: real64
T_47: (in atan((real64) (SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 - 0x0064), rLoc2_52) : real64)
  Class: Eq_47
  DataType: Eq_47
  OrigDataType: (union (real16 u0) (real64 u1))
T_48: (in 41 : real64)
  Class: Eq_48
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_49: (in atan((real64) (SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 - 0x0064), rLoc2_52) * 41 : word16)
  Class: Eq_49
  DataType: real16
  OrigDataType: real16
T_50: (in sqrt : ptr32)
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (fn T_53 (T_52)))
T_51: (in rLoc3_54 * rLoc3_54 : real64)
  Class: Eq_51
  DataType: real64
  OrigDataType: real64
T_52: (in rLoc3_54 + rLoc3_54 * rLoc3_54 : real64)
  Class: Eq_52
  DataType: real64
  OrigDataType: real64
T_53: (in sqrt(rLoc3_54 + rLoc3_54 * rLoc3_54) : real64)
  Class: Eq_53
  DataType: real64
  OrigDataType: real64
T_54: (in (int16) sqrt(rLoc3_54 + rLoc3_54 * rLoc3_54) : int16)
  Class: Eq_54
  DataType: int16
  OrigDataType: int16
T_55: (in (real64) (int16) sqrt(rLoc3_54 + rLoc3_54 * rLoc3_54) : real64)
  Class: Eq_55
  DataType: Eq_55
  OrigDataType: (union (real16 u0) (real64 u1))
T_56: (in atan((real64) (SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 - 0x0064), rLoc2_52) * 41 + (real64) ((int16) sqrt(rLoc3_54 + rLoc3_54 * rLoc3_54)) : word16)
  Class: Eq_56
  DataType: real16
  OrigDataType: real16
T_57: (in (int16) (atan((real64) (SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 - 0x0064), rLoc2_52) * 41 + (real64) ((int16) sqrt(rLoc3_54 + rLoc3_54 * rLoc3_54))) : int16)
  Class: Eq_57
  DataType: int16
  OrigDataType: int16
T_58: (in bp : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in (int16) (atan((real64) (SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 - 0x0064), rLoc2_52) * 41 + (real64) ((int16) sqrt(rLoc3_54 + rLoc3_54 * rLoc3_54))) + bp : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in (byte) ((int16) (atan((real64) (SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 - 0x0064), rLoc2_52) * 41 + (real64) ((int16) sqrt(rLoc3_54 + rLoc3_54 * rLoc3_54))) + bp) : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in 0xA000 : selector)
  Class: Eq_61
  DataType: (ptr Eq_61)
  OrigDataType: (ptr (segment))
T_62: (in 0x0000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in di + 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem68[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_65: (in 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in di + 0x0001 : word16)
  Class: Eq_29
  DataType: (memptr (ptr Eq_61) byte)
  OrigDataType: word16
T_67: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in cx_16 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_69: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_70: (in cx_16 != 0x0000 : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in bp - 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_73: (in __inb : ptr32)
  Class: Eq_73
  DataType: (ptr Eq_73)
  OrigDataType: (ptr (fn T_75 (T_74)))
T_74: (in 0x60 : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in __inb(0x60) : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in 0x01 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_77: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_80 (T_79)))
T_79: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_80: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_81: (in msdos_display_string : ptr32)
  Class: Eq_81
  DataType: (ptr Eq_81)
  OrigDataType: (ptr (fn T_87 (T_85, T_86)))
T_82: (in signature of msdos_display_string : void)
  Class: Eq_81
  DataType: (ptr Eq_81)
  OrigDataType: 
T_83: (in ds : selector)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (segment))
T_84: (in dx : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in ds : (ptr Eq_83))
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (segment))
T_86: (in 0x017B : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_87: (in msdos_display_string(ds, 0x017B) : void)
  Class: Eq_87
  DataType: void
  OrigDataType: void
T_88: (in msdos_terminate_program20 : ptr32)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (fn T_90 ()))
T_89: (in signature of msdos_terminate_program20 : void)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: 
T_90: (in msdos_terminate_program20() : void)
  Class: Eq_90
  DataType: void
  OrigDataType: void
*/
typedef Eq_61 Eq_1struct Globals {
	Eq_61 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef real64 (Eq_10)(real16);

typedef union Eq_11 {
	real16 u0;
	real64 u1;
} Eq_11;

typedef union Eq_12 {
	real16 u0;
	real64 u1;
} Eq_12;

typedef void (Eq_15)(word16, byte);

typedef union Eq_17 {
	real16 u0;
	real64 u1;
} Eq_17;

typedef union Eq_18 {
	real16 u0;
	real64 u1;
} Eq_18;

typedef Eq_47 (Eq_39)(real64, real64);

typedef union Eq_47 {
	real16 u0;
	real64 u1;
} Eq_47;

typedef union Eq_48 {
	real16 u0;
	real64 u1;
} Eq_48;

typedef real64 (Eq_50)(real64);

typedef union Eq_55 {
	real16 u0;
	real64 u1;
} Eq_55;

typedef struct Eq_61 {
} Eq_61;

typedef byte (Eq_73)(byte);

typedef void (Eq_81)(Eq_83 *, word16);

typedef struct Eq_83 {
} Eq_83;

typedef void (Eq_88)();

