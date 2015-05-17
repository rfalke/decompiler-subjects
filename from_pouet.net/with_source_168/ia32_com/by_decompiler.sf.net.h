// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_168/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_14: (fn void ())
	T_14 (in msdos_terminate_program20 : ptr32)
	T_15 (in signature of msdos_terminate_program20 : void)
Eq_21: (union "Eq_21" (real16 u0) (real64 u1))
	T_21 (in rLoc2_28 : Eq_21)
	T_24 (in rLoc2 / 32 : word16)
Eq_22: (union "Eq_22" (real16 u0) (real64 u1))
	T_22 (in rLoc2 : real64)
	T_62 (in 1 : real64)
Eq_23: (union "Eq_23" (real16 u0) (real64 u1))
	T_23 (in 32 : real64)
Eq_25: (union "Eq_25" (real16 u0) (real64 u1))
	T_25 (in rLoc2_30 : Eq_25)
	T_27 (in cos(rLoc2_28) : real64)
Eq_26: (fn Eq_25 (Eq_21))
	T_26 (in cos : ptr32)
Eq_29: (fn Eq_30 (Eq_21))
	T_29 (in sin : ptr32)
Eq_30: (union "Eq_30" (real16 u0) (real64 u1))
	T_30 (in sin(rLoc2_28) : real64)
Eq_31: (union "Eq_31" (real16 u0) (real64 u1))
	T_31 (in 60 : real64)
Eq_35: (fn byte (word16, int16, byte))
	T_35 (in fn0C00_0160 : ptr32)
	T_36 (in signature of fn0C00_0160 : void)
	T_45 (in fn0C00_0160 : ptr32)
	T_53 (in fn0C00_0160 : ptr32)
Eq_54: (union "Eq_54" (real16 u0) (real64 u1))
	T_54 (in 60 : real64)
Eq_63: (fn byte (byte))
	T_63 (in __inb : ptr32)
Eq_69: (fn byte ((ptr byte)))
	T_69 (in bios_kbd_get_keystroke : ptr32)
	T_70 (in signature of bios_kbd_get_keystroke : void)
Eq_74: (fn void (byte))
	T_74 (in __syscall : ptr32)
Eq_77: (fn void (byte))
	T_77 (in __syscall : ptr32)
Eq_80: (fn void (byte))
	T_80 (in __syscall : ptr32)
Eq_83: (fn void (byte))
	T_83 (in __syscall : ptr32)
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
T_7: (in ax_26 : word16)
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
T_11: (in dx_18 : int16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_12: (in (int32) ax_26 : int32)
  Class: Eq_12
  DataType: int32
  OrigDataType: int32
T_13: (in SLICE((int32) ax_26, word16, 16) : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_14: (in msdos_terminate_program20 : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (fn T_16 ()))
T_15: (in signature of msdos_terminate_program20 : void)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: 
T_16: (in msdos_terminate_program20() : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in dx_18 + 0x0001 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_19: (in 0x00C8 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_20: (in dx_18 < 0x00C8 : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in rLoc2_28 : Eq_21)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: real64
T_22: (in rLoc2 : real64)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: (union (real16 u0) (real64 u1))
T_23: (in 32 : real64)
  Class: Eq_23
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_24: (in rLoc2 / 32 : word16)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: real16
T_25: (in rLoc2_30 : Eq_25)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: (union (real16 u0) (real64 u1))
T_26: (in cos : ptr32)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (fn T_27 (T_21)))
T_27: (in cos(rLoc2_28) : real64)
  Class: Eq_25
  DataType: Eq_25
  OrigDataType: real64
T_28: (in wLoc06_33 : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_29: (in sin : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_30 (T_21)))
T_30: (in sin(rLoc2_28) : real64)
  Class: Eq_30
  DataType: Eq_30
  OrigDataType: (union (real16 u0) (real64 u1))
T_31: (in 60 : real64)
  Class: Eq_31
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_32: (in sin(rLoc2_28) * 60 : word16)
  Class: Eq_32
  DataType: real16
  OrigDataType: real16
T_33: (in (int16) (sin(rLoc2_28) * 60) : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_34: (in ax_41 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in fn0C00_0160 : ptr32)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (fn T_43 (T_41, T_11, T_42)))
T_36: (in signature of fn0C00_0160 : void)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: 
T_37: (in cx : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in dx : int16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_39: (in al : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in 0x0096 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in wLoc06_33 + 0x0096 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_42: (in 0x01 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_43: (in fn0C00_0160(wLoc06_33 + 0x0096, dx_18, 0x01) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in DPB(ax_26, fn0C00_0160(wLoc06_33 + 0x0096, dx_18, 0x01), 0, 8) : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_45: (in fn0C00_0160 : ptr32)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (fn T_52 (T_48, T_11, T_51)))
T_46: (in -wLoc06_33 : word16)
  Class: Eq_46
  DataType: int16
  OrigDataType: int16
T_47: (in 0x008C : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in -wLoc06_33 + 0x008C : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in ax_41 + 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in (byte) (ax_41 + 0x0001) : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_52: (in fn0C00_0160(-wLoc06_33 + 0x008C, dx_18, (byte) (ax_41 + 0x0001)) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_53: (in fn0C00_0160 : ptr32)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (fn T_60 (T_58, T_11, T_59)))
T_54: (in 60 : real64)
  Class: Eq_54
  DataType: real16
  OrigDataType: (union (real16 u0) (real64 u1))
T_55: (in rLoc2_30 * 60 : word16)
  Class: Eq_55
  DataType: real16
  OrigDataType: real16
T_56: (in (int16) (rLoc2_30 * 60) : int16)
  Class: Eq_56
  DataType: int16
  OrigDataType: int16
T_57: (in 0x00A0 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in (int16) (rLoc2_30 * 60) + 0x00A0 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_59: (in 0x04 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_60: (in fn0C00_0160((int16) (rLoc2_30 * 60) + 0x00A0, dx_18, 0x04) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_61: (in ax_41 + 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_62: (in 1 : real64)
  Class: Eq_22
  DataType: real64
  OrigDataType: real64
T_63: (in __inb : ptr32)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (fn T_65 (T_64)))
T_64: (in 0x60 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in __inb(0x60) : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in 0x01 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_67: (in __inb(0x60) == 0x01 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in al_83 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: (ptr (fn T_73 (T_72)))
T_70: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_69
  DataType: (ptr Eq_69)
  OrigDataType: 
T_71: (in alOut : ptr16)
  Class: Eq_71
  DataType: (ptr byte)
  OrigDataType: ptr16
T_72: (in out al_83 : ptr16)
  Class: Eq_71
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_73: (in bios_kbd_get_keystroke(out al_83) : byte)
  Class: Eq_73
  DataType: byte
  OrigDataType: byte
T_74: (in __syscall : ptr32)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (fn T_76 (T_75)))
T_75: (in 0x10 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in __syscall(0x10) : void)
  Class: Eq_76
  DataType: void
  OrigDataType: void
T_77: (in __syscall : ptr32)
  Class: Eq_77
  DataType: (ptr Eq_77)
  OrigDataType: (ptr (fn T_79 (T_78)))
T_78: (in 0x10 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in __syscall(0x10) : void)
  Class: Eq_79
  DataType: void
  OrigDataType: void
T_80: (in __syscall : ptr32)
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: (ptr (fn T_82 (T_81)))
T_81: (in 0x10 : byte)
  Class: Eq_81
  DataType: byte
  OrigDataType: byte
T_82: (in __syscall(0x10) : void)
  Class: Eq_82
  DataType: void
  OrigDataType: void
T_83: (in __syscall : ptr32)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (fn T_85 (T_84)))
T_84: (in 0x10 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in __syscall(0x10) : void)
  Class: Eq_85
  DataType: void
  OrigDataType: void
T_86: (in al_15 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in 0x08 : byte)
  Class: Eq_87
  DataType: byte
  OrigDataType: byte
T_88: (in al ^ 0x08 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_89: (in 0x08 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in al_15 ^ 0x08 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_91: (in 0x0001 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in dx + 0x0001 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: word16
T_93: (in 0x00C8 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_94: (in dx < 0x00C8 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in al_15 ^ 0x08 : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_14)();

typedef union Eq_21 {
	real16 u0;
	real64 u1;
} Eq_21;

typedef union Eq_22 {
	real16 u0;
	real64 u1;
} Eq_22;

typedef union Eq_23 {
	real16 u0;
	real64 u1;
} Eq_23;

typedef union Eq_25 {
	real16 u0;
	real64 u1;
} Eq_25;

typedef Eq_25 (Eq_26)(Eq_21);

typedef Eq_30 (Eq_29)(Eq_21);

typedef union Eq_30 {
	real16 u0;
	real64 u1;
} Eq_30;

typedef union Eq_31 {
	real16 u0;
	real64 u1;
} Eq_31;

typedef byte (Eq_35)(word16, int16, byte);

typedef union Eq_54 {
	real16 u0;
	real64 u1;
} Eq_54;

typedef byte (Eq_63)(byte);

typedef byte (Eq_69)(byte *);

typedef void (Eq_74)(byte);

typedef void (Eq_77)(byte);

typedef void (Eq_80)(byte);

typedef void (Eq_83)(byte);

