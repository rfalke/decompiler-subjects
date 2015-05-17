// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_095/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union (ptr32 u0) (segptr32 u1))
	T_7 (in es_di_6 : ptr32)
	T_12 (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
Eq_8: (segment)
	T_8 (in ds : selector)
Eq_9: (union ((ptr (struct (46C byte b046C))) u0) ((memptr (ptr Eq_8) (struct (0 Eq_7 t0000))) u1))
	T_9 (in bx : word16)
	T_27 (in bx_22 : word16)
	T_95 (in DPB(bx_22, bl_30, 0, 8) : word16)
Eq_13: (fn void (word16, byte))
	T_13 (in __outb : ptr32)
Eq_17: (segment)
	T_17 (in es_7 : selector)
	T_18 (in SLICE(es_di_6, selector, 16) : selector)
Eq_19: (struct 0001 (0 byte b0000))
	T_19 (in di_101 : word16)
	T_20 (in (word16) es_di_6 : word16)
	T_78 (in di_101 + 0x0001 : word16)
	T_96 (in ~bx_22 : word16)
Eq_33: (fn void (word16, byte))
	T_33 (in __outb : ptr32)
Eq_39: (fn void (word16, byte))
	T_39 (in __outb : ptr32)
Eq_44: (fn void (word16, byte))
	T_44 (in __outb : ptr32)
Eq_47: (fn void (word16, byte))
	T_47 (in __outb : ptr32)
Eq_93: (struct (0 byte b0000))
	T_93 (in 0x046C : word16)
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
T_7: (in es_di_6 : ptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: ptr32
T_8: (in ds : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment))
T_9: (in bx : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (union ((ptr (struct (46C T_94 t046C))) u0) ((memptr T_8 (struct (0 T_12 t0000))) u1))
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in bx + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem0[ds:bx + 0x0000:segptr32] : segptr32)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: segptr32
T_13: (in __outb : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_16 (T_14, T_15)))
T_14: (in 0x03C8 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x20 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in __outb(0x03C8, 0x20) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in es_7 : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_18: (in SLICE(es_di_6, selector, 16) : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment))
T_19: (in di_101 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_17) Eq_19)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_73 t0000)))
T_20: (in (word16) es_di_6 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_17) Eq_19)
  OrigDataType: word16
T_21: (in al_10 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in 0x20 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_23: (in ax_12 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in ax : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in 0x20 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in DPB(ax, 0x20, 0, 8) : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_27: (in bx_22 : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000)))
T_28: (in cx : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in cx - 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_32: (in cx != 0x0000 : bool)
  Class: Eq_32
  DataType: bool
  OrigDataType: bool
T_33: (in __outb : ptr32)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (fn T_38 (T_34, T_37)))
T_34: (in 0x03C9 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in al_32 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0x7F : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in al_32 & 0x7F : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in __outb(0x03C9, al_32 & 0x7F) : void)
  Class: Eq_38
  DataType: void
  OrigDataType: void
T_39: (in __outb : ptr32)
  Class: Eq_39
  DataType: (ptr Eq_39)
  OrigDataType: (ptr (fn T_41 (T_40, T_21)))
T_40: (in 0x03C9 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in __outb(0x03C9, al_10) : void)
  Class: Eq_41
  DataType: void
  OrigDataType: void
T_42: (in al_25 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in (byte) bx_22 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_44: (in __outb : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_46 (T_45, T_42)))
T_45: (in 0x03C9 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in __outb(0x03C9, al_25) : void)
  Class: Eq_46
  DataType: void
  OrigDataType: void
T_47: (in __outb : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_49 (T_48, T_42)))
T_48: (in 0x03C9 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in __outb(0x03C9, al_25) : void)
  Class: Eq_49
  DataType: void
  OrigDataType: void
T_50: (in ax_31 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in ax_12 + 0x0001 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_53: (in (byte) ax_31 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_54: (in bl_30 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in (byte) bx_22 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_56: (in al_32 & 0x7F : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_57: (in al_32 & 0x7F : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in DPB(ax_31, al_32 & 0x7F, 0, 8) : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_59: (in al_32 & 0x7F : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in 0x00 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_61: (in (al_32 & 0x7F) != 0x00 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in dx_56 : word16)
  Class: Eq_62
  DataType: int16
  OrigDataType: int16
T_63: (in 0x00CC : word16)
  Class: Eq_62
  DataType: int16
  OrigDataType: word16
T_64: (in dl_57 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in 0xCC : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_66: (in cl_70 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in cl_70 ^ dl_57 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in al_103 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_69: (in cl_70 | dl_57 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_70: (in al_103 ^ bl_30 : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_71: (in 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in di_101 + 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in Mem89[es_7:di_101 + 0x0000:byte] : byte)
  Class: Eq_70
  DataType: byte
  OrigDataType: byte
T_74: (in cx_69 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in cx_69 - 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in di_101 + 0x0001 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_17) Eq_19)
  OrigDataType: word16
T_79: (in (byte) cx_69 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_80: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_81: (in cx_69 != 0x0000 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in 0x40 : byte)
  Class: Eq_82
  DataType: byte
  OrigDataType: byte
T_83: (in bl_30 & 0x40 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in 0x00 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_85: (in (bl_30 & 0x40) != 0x00 : bool)
  Class: Eq_85
  DataType: bool
  OrigDataType: bool
T_86: (in 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in dx_56 - 0x0001 : word16)
  Class: Eq_62
  DataType: int16
  OrigDataType: word16
T_88: (in (byte) dx_56 : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_89: (in 0x0000 : word16)
  Class: Eq_62
  DataType: int16
  OrigDataType: int16
T_90: (in dx_56 >= 0x0000 : bool)
  Class: Eq_90
  DataType: bool
  OrigDataType: bool
T_91: (in 0x013F : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_92: (in 0x3F : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_93: (in 0x046C : word16)
  Class: Eq_93
  DataType: (memptr Eq_9 Eq_93)
  OrigDataType: (memptr T_9 (struct (0 T_94 t0000)))
T_94: (in Mem89[bx:0x046C:byte] : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_95: (in DPB(bx_22, bl_30, 0, 8) : word16)
  Class: Eq_9
  DataType: Eq_9
  OrigDataType: word16
T_96: (in ~bx_22 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_17) Eq_19)
  OrigDataType: word16
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef union  {
	ptr32 u0;
	segptr32 u1;
} Eq_7;

typedef struct  {
} Eq_8;

typedef union  {
	struct <anonymous>* u0;
	struct <anonymous> Eq_8::* u1;
} Eq_9;

typedef void (Eq_13)(word16, byte);

typedef struct  {
} Eq_17;

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_19;

typedef void (Eq_33)(word16, byte);

typedef void (Eq_39)(word16, byte);

typedef void (Eq_44)(word16, byte);

typedef void (Eq_47)(word16, byte);

typedef struct  {
	byte b0000;	// 0
} Eq_93;

