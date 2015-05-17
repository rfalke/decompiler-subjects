// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_033/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_4: (union "Eq_4" (byte u0) (word16 u1))
	T_4 (in 0x13 : byte)
	T_5 (in al : byte)
	T_18 (in __inb(0x40) : byte)
	T_37 (in (byte) ax : byte)
	T_43 (in Mem0[es:di + 0x0000:byte] : byte)
	T_44 (in v15 : word16)
	T_47 (in Mem0[es:di + 0x0000:byte] : byte)
	T_59 (in Mem0[es:di + 0x0000:byte] : byte)
Eq_6: (fn void (byte))
	T_6 (in bios_video_set_mode : ptr32)
	T_7 (in signature of bios_video_set_mode : void)
Eq_13: (segment "Eq_13")
	T_13 (in bx : word16)
	T_14 (in DPB(bx, bh, 8, 8) : word16)
	T_15 (in es : selector)
Eq_16: (fn Eq_4 (byte))
	T_16 (in __inb : ptr32)
Eq_21: (fn bool (Eq_4, byte, (ptr byte), (ptr byte)))
	T_21 (in __aaa : ptr32)
Eq_28: (fn byte ((ptr byte)))
	T_28 (in bios_kbd_check_keystroke : ptr32)
	T_29 (in signature of bios_kbd_check_keystroke : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in fp : ptr16)
  Class: Eq_2
  DataType: ptr16
  OrigDataType: ptr16
T_3: (in sp : word16)
  Class: Eq_2
  DataType: ptr16
  OrigDataType: ptr16
T_4: (in 0x13 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in al : byte)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (union (byte u0) (word16 u1))
T_6: (in bios_video_set_mode : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_10 (T_9)))
T_7: (in signature of bios_video_set_mode : void)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: 
T_8: (in al : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in 0x13 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_10: (in bios_video_set_mode(0x13) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in 0xA0 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in bh : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in bx : word16)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: word16
T_14: (in DPB(bx, bh, 8, 8) : word16)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: word16
T_15: (in es : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment))
T_16: (in __inb : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_18 (T_17)))
T_17: (in 0x40 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in __inb(0x40) : byte)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: byte
T_19: (in ax : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_21: (in __aaa : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_25 (T_5, T_22, T_23, T_24)))
T_22: (in ah : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in &al : ptr16)
  Class: Eq_23
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_24: (in &ah : ptr16)
  Class: Eq_24
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_25: (in __aaa(al, ah, &al, &ah) : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in C : byte)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_27: (in SCZO : byte)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_28: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn T_32 (T_31)))
T_29: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: 
T_30: (in alOut : ptr16)
  Class: Eq_30
  DataType: (ptr byte)
  OrigDataType: ptr16
T_31: (in out al : ptr16)
  Class: Eq_30
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_32: (in bios_kbd_check_keystroke(out al) : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_33: (in DPB(ax, ah, 8, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_34: (in Z : byte)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_35: (in Test(NE,Z) : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_37: (in (byte) ax : byte)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: byte
T_38: (in SLICE(ax, byte, 8) : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_39: (in false : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_40: (in di : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_13) Eq_4)
  OrigDataType: (memptr T_15 (struct (0 T_4 t0000)))
T_41: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di + 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: byte
T_44: (in v15 : word16)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: (union (byte u0) (word16 u1))
T_45: (in 0x0000 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in di + 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: byte
T_48: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_49: (in cx : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in cx + 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_52: (in cond(cx) : byte)
  Class: Eq_25
  DataType: bool
  OrigDataType: byte
T_53: (in SZO : byte)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_54: (in di - ax : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in di - ax - C : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_13) Eq_4)
  OrigDataType: word16
T_56: (in cond(di) : byte)
  Class: Eq_25
  DataType: bool
  OrigDataType: byte
T_57: (in 0x0000 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in di + 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_4
  DataType: Eq_4
  OrigDataType: byte
T_60: (in 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in di + 0x0001 : word16)
  Class: Eq_40
  DataType: (memptr (ptr Eq_13) Eq_4)
  OrigDataType: word16
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in cx - 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_65: (in cx != 0x0000 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
*/
typedef struct Globals {
} Eq_1;

typedef union Eq_4 {
	byte u0;
	word16 u1;
} Eq_4;

typedef void (Eq_6)(byte);

typedef struct Eq_13 {
} Eq_13;

typedef Eq_4 (Eq_16)(byte);

typedef bool (Eq_21)(Eq_4, byte, byte *, byte *);

typedef byte (Eq_28)(byte *);

