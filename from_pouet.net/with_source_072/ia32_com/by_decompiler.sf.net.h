// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_072/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_35) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_12: (segment "Eq_12")
	T_12 (in ds : (ptr Eq_12))
Eq_35: (segment "Eq_35" (0 int8 b0000))
	T_35 (in 0xA000 : selector)
Eq_73: (fn byte (byte))
	T_73 (in __inb : ptr32)
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
T_7: (in bx_23 : uint16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: uint16
T_8: (in bx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x04 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(bx, 0x04, 0, 8) : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: word16
T_11: (in ax_77 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_12: (in ds : (ptr Eq_12))
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (segment))
T_13: (in si : (memptr (ptr Eq_12) uint16))
  Class: Eq_13
  DataType: (memptr (ptr Eq_12) uint16)
  OrigDataType: (memptr T_12 (struct (0 T_16 t0000)))
T_14: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in si + 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in Mem0[ds:si + 0x0000:word16] : word16)
  Class: Eq_16
  DataType: uint16
  OrigDataType: uint16
T_17: (in ax_61 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_18: (in ds->*si *u ax_61 : uint32)
  Class: Eq_18
  DataType: uint32
  OrigDataType: uint32
T_19: (in ds->*si *u ax_61 % bx_23 : uint16)
  Class: Eq_19
  DataType: uint16
  OrigDataType: uint16
T_20: (in SEQ(Mem0[ds:si + 0x0000:word16] *u ax_61 % bx_23, ax_61) : word32)
  Class: Eq_20
  DataType: uint32
  OrigDataType: uint32
T_21: (in SEQ(ds->*si *u ax_61 % bx_23, ax_61) /u bx_23 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_22: (in cx : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_23: (in cl_100 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in (byte) ax_77 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in dx_143 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_26: (in dx_134 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: ui16
T_27: (in dl_135 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in (byte) cx : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_29: (in P : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in al_104 : int8)
  Class: Eq_30
  DataType: int8
  OrigDataType: int8
T_31: (in 0x10 : byte)
  Class: Eq_30
  DataType: int8
  OrigDataType: byte
T_32: (in ax_105 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x10 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in DPB(dx_143, 0x10, 0, 8) : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_35: (in 0xA000 : selector)
  Class: Eq_35
  DataType: (ptr Eq_35)
  OrigDataType: (ptr (segment))
T_36: (in di : (memptr (ptr Eq_35) int8))
  Class: Eq_36
  DataType: (memptr (ptr Eq_35) int8)
  OrigDataType: (memptr T_35 (struct 0001 (0 T_39 t0000)))
T_37: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di + 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem118[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_30
  DataType: int8
  OrigDataType: byte
T_40: (in 0x0001 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in di + 0x0001 : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_35) int8)
  OrigDataType: word16
T_42: (in 0x0000 : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_35) int8)
  OrigDataType: word16
T_43: (in di != &Eq_35::b0000 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in dx_128 : ui16)
  Class: Eq_44
  DataType: ui16
  OrigDataType: word16
T_45: (in 0x0002 : word16)
  Class: Eq_45
  DataType: ui16
  OrigDataType: ui16
T_46: (in dx_134 * 0x0002 : word16)
  Class: Eq_44
  DataType: ui16
  OrigDataType: ui16
T_47: (in cx_132 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_48: (in cx + bx_23 : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_49: (in dx_131 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_50: (in (byte) dx_128 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in 0xC0 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in (byte) dx_128 + 0xC0 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in DPB(dx_128, (byte) dx_128 + 0xC0, 0, 8) : word16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: word16
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in ax_105 + 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_56: (in (byte) cx_132 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_57: (in (byte) dx_131 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_58: (in (byte) ax_105 : byte)
  Class: Eq_30
  DataType: int8
  OrigDataType: byte
T_59: (in 0x1F : byte)
  Class: Eq_30
  DataType: int8
  OrigDataType: int8
T_60: (in al_104 < 0x1F : bool)
  Class: Eq_60
  DataType: bool
  OrigDataType: bool
T_61: (in cl_100 & dl_135 : byte)
  Class: Eq_61
  DataType: int8
  OrigDataType: int8
T_62: (in 0x00 : byte)
  Class: Eq_61
  DataType: int8
  OrigDataType: int8
T_63: (in (cl_100 & dl_135) < 0x00 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in dx_ax_56 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in SEQ(0x0000, di) : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_67: (in 0x0140 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in dx_ax_56 % 0x0140 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
T_69: (in dx_ax_56 % 0x0140 : uint16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: uint16
T_70: (in SEQ(dx_ax_56 % 0x0140, di) : word32)
  Class: Eq_70
  DataType: uint32
  OrigDataType: uint32
T_71: (in 0x0140 : word16)
  Class: Eq_71
  DataType: uint16
  OrigDataType: uint16
T_72: (in SEQ(dx_ax_56 % 0x0140, di) /u 0x0140 : uint16)
  Class: Eq_11
  DataType: uint16
  OrigDataType: uint16
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
T_76: (in (int16) __inb(0x60) : int16)
  Class: Eq_76
  DataType: int16
  OrigDataType: int16
T_77: (in 0x0001 : word16)
  Class: Eq_76
  DataType: int16
  OrigDataType: word16
T_78: (in (int16) __inb(0x60) != 0x0001 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in bx_23 + 0x0001 : word16)
  Class: Eq_7
  DataType: uint16
  OrigDataType: word16
*/
typedef Eq_35 Eq_1struct Globals {
	Eq_35 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_12 {
} Eq_12;

typedef struct Eq_35 {
	int8 b0000;	// 0
} Eq_35;

typedef byte (Eq_73)(byte);

