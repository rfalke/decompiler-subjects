// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_123/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
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
Eq_14: (struct "Eq_14" (0 (arr byte 2561) a0000) (1 Eq_14 t0001))
	T_14 (in bx_4 : (ptr Eq_14))
	T_17 (in DPB(bx, 0xA0, 8, 8) : word16)
	T_22 (in bx_21 : (ptr Eq_14))
	T_57 (in DPB(bx_21, 0x1E, 8, 8) : word16)
	T_72 (in bx_21 + 0x0001 : word16)
Eq_23: (union "Eq_23" (ui16 u0) ((memptr (ptr Eq_14) byte) u1))
	T_23 (in di_68 : word16)
	T_27 (in di_50 + bx_21 << 0x0001 : word16)
	T_51 (in di_68 + 0x0001 : word16)
Eq_24: (union "Eq_24" (uint16 u0) ((memptr (ptr Eq_14) byte) u1))
	T_24 (in di_50 : Eq_24)
	T_37 (in di_50 + 0x0001 : word16)
	T_60 (in (bp_35 << 0x0002) + bx_21 : word16)
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
T_12: (in 0x0134 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_13: (in msdos_display_string(ds, 0x0134) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in bx_4 : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (struct (0 (arr T_74 2561) a0000)))
T_15: (in bx : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0xA0 : byte)
  Class: Eq_16
  DataType: byte
  OrigDataType: byte
T_17: (in DPB(bx, 0xA0, 8, 8) : word16)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_18: (in ax_10 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in ax : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x09 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in DPB(ax, 0x09, 8, 8) : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_22: (in bx_21 : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_23: (in di_68 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: (memptr T_14 (struct 0001 (0 T_49 t0000)))
T_24: (in di_50 : Eq_24)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: (union (uint16 u0) ((memptr T_14 (struct 0001 (0 T_35 t0000))) u1))
T_25: (in di_50 + bx_21 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in di_50 + bx_21 << 0x0001 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: ui16
T_28: (in cx_57 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x08 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in DPB(cx_57, 0x08, 0, 8) : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in cx : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_32: (in al_52 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in di_50 + 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in Mem62[bx_4:di_50 + 0x0000:byte] : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in di_50 + 0x0001 : word16)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx_57 - 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_41: (in cx_57 == 0x0000 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in bp_35 : int16)
  Class: Eq_42
  DataType: int16
  OrigDataType: int16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in bp_35 - 0x0001 : word16)
  Class: Eq_42
  DataType: int16
  OrigDataType: word16
T_45: (in 0x0000 : word16)
  Class: Eq_42
  DataType: int16
  OrigDataType: int16
T_46: (in bp_35 >= 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in di_68 + 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem76[bx_4:di_68 + 0x0000:byte] : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_50: (in 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in di_68 + 0x0001 : word16)
  Class: Eq_23
  DataType: Eq_23
  OrigDataType: word16
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in cx - 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_55: (in cx == 0x0000 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in 0x1E : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in DPB(bx_21, 0x1E, 8, 8) : word16)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_58: (in 0x0002 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in bp_35 << 0x0002 : word16)
  Class: Eq_59
  DataType: ui16
  OrigDataType: ui16
T_60: (in (bp_35 << 0x0002) + bx_21 : word16)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: word16
T_61: (in dx_ax_51 : uint32)
  Class: Eq_61
  DataType: uint32
  OrigDataType: word32
T_62: (in 0x0000 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_14 (struct 0001 (0 T_64 t0000)))
T_63: (in bp_35 + 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem0[bx_4:bp_35 + 0x0000:byte] : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in DPB(ax_10, bx_4->a0000[bp_35], 0, 8) : word16)
  Class: Eq_65
  DataType: uint16
  OrigDataType: uint16
T_66: (in di_50 *u DPB(ax_10, (bx_4->a0000)[bp_35], 0, 8) : uint32)
  Class: Eq_61
  DataType: uint32
  OrigDataType: uint32
T_67: (in (byte) dx_ax_51 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_68: (in (word16) dx_ax_51 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_69: (in 0x08 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in DPB(cx, 0x08, 0, 8) : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in bx_21 + 0x0001 : word16)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: word16
T_73: (in 0x0A00 : word16)
  Class: Eq_42
  DataType: int16
  OrigDataType: word16
T_74:
  Class: Eq_74
  DataType: byte
  OrigDataType: (struct 0001 (0 T_64 t0000))
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(Eq_9 *, word16);

typedef struct Eq_9 {
} Eq_9;

typedef  Eq_14[2561]Eq_14struct Eq_14 {
	byte a0000[2561];	// 0
	Eq_14 t0001;	// 1
} Eq_14;

typedef union Eq_23 {
	ui16 u0;
	byte Eq_14::* u1;
} Eq_23;

typedef union Eq_24 {
	uint16 u0;
	byte Eq_14::* u1;
} Eq_24;

