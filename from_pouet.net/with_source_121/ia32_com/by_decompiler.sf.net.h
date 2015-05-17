// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_121/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_48 (in bios_video_set_mode : ptr32)
Eq_7: (fn void (byte, byte, byte))
	T_7 (in bios_video_set_cursor_position : ptr32)
	T_8 (in signature of bios_video_set_cursor_position : void)
Eq_16: (fn void ((ptr Eq_18), word16))
	T_16 (in msdos_display_string : ptr32)
	T_17 (in signature of msdos_display_string : void)
Eq_18: (segment "Eq_18")
	T_18 (in ds : selector)
	T_20 (in ds : (ptr Eq_18))
Eq_27: (fn void (byte))
	T_27 (in __syscall : ptr32)
Eq_30: (fn void (byte, byte))
	T_30 (in bios_video_set_CGA_palette : ptr32)
	T_31 (in signature of bios_video_set_CGA_palette : void)
Eq_36: (fn void (byte))
	T_36 (in __syscall : ptr32)
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
T_7: (in bios_video_set_cursor_position : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_15 (T_12, T_13, T_14)))
T_8: (in signature of bios_video_set_cursor_position : void)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: 
T_9: (in bh : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in dh : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in dl : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in bh : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_13: (in dh : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_14: (in dl : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_15: (in bios_video_set_cursor_position(bh, dh, dl) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in msdos_display_string : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_22 (T_20, T_21)))
T_17: (in signature of msdos_display_string : void)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: 
T_18: (in ds : selector)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment))
T_19: (in dx : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in ds : (ptr Eq_18))
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (segment))
T_21: (in 0x0136 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_22: (in msdos_display_string(ds, 0x0136) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in cx_15 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x013F : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_25: (in cl_16 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in 0x3F : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_27: (in __syscall : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_29 (T_28)))
T_28: (in 0x10 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in __syscall(0x10) : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in bios_video_set_CGA_palette : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_35 (T_12, T_34)))
T_31: (in signature of bios_video_set_CGA_palette : void)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: 
T_32: (in bh : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_33: (in bl : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in bl : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_35: (in bios_video_set_CGA_palette(bh, bl) : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in __syscall : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_38 (T_37)))
T_37: (in 0x10 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in __syscall(0x10) : void)
  Class: Eq_38
  DataType: void
  OrigDataType: void
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in cx_15 - 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_41: (in (byte) cx_15 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_42: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_43: (in cx_15 != 0x0000 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in 0x10 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in cl_16 & 0x10 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0x00 : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_47: (in (cl_16 & 0x10) == 0x00 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_50 (T_49)))
T_49: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_50: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(byte, byte, byte);

typedef void (Eq_16)(Eq_18 *, word16);

typedef struct Eq_18 {
} Eq_18;

typedef void (Eq_27)(byte);

typedef void (Eq_30)(byte, byte);

typedef void (Eq_36)(byte);

