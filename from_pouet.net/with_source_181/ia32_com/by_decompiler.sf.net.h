// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_181/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_14: (segment "Eq_14")
	T_14 (in ss : selector)
Eq_26: (union "Eq_26" (real16 u0) (real64 u1))
	T_26 (in rLoc3_52 : Eq_26)
	T_45 (in ((real64) ds->t0197 / (rLoc4 * rLoc4 + rLoc2 * rLoc2) + (real64) (ss->*esp_48)) / (real64) ds->t0197 : word16)
Eq_27: (segment "Eq_27" (11D word16 w011D) (195 word16 w0195) (197 Eq_29 t0197))
	T_27 (in ds : (ptr Eq_27))
Eq_29: (union "Eq_29" (int32 u0) (word16 u1))
	T_29 (in Mem0[ds:0x0197:int32] : int32)
	T_43 (in Mem0[ds:0x0197:word16] : word16)
Eq_36: (union "Eq_36" (real16 u0) (real64 u1))
	T_36 (in (real64) ds->t0197 / (rLoc4 * rLoc4 + rLoc2 * rLoc2) : real64)
Eq_40: (union "Eq_40" (real16 u0) (real64 u1))
	T_40 (in (real64) (ss->*esp_48) : real64)
Eq_44: (union "Eq_44" (real16 u0) (real64 u1))
	T_44 (in (real64) ds->t0197 : real64)
Eq_46: (union "Eq_46" (real16 u0) (real64 u1))
	T_46 (in rLoc3_54 : Eq_46)
	T_48 (in cos(rLoc3_52) : real64)
Eq_47: (fn Eq_46 (Eq_26))
	T_47 (in cos : ptr32)
Eq_49: (fn real64 (Eq_26))
	T_49 (in sin : ptr32)
Eq_51: (fn real64 (real64))
	T_51 (in sin : ptr32)
Eq_52: (fn Eq_53 (real64, real64))
	T_52 (in atan : ptr32)
Eq_53: (union "Eq_53" (real16 u0) (real64 u1))
	T_53 (in atan(rLoc1_27, rLoc3_34) : real64)
Eq_56: (union "Eq_56" (real16 u0) (real64 u1))
	T_56 (in (real64) ds->w0195 : real64)
Eq_57: (union "Eq_57" (real16 u0) (real64 u1))
	T_57 (in atan(rLoc1_27, rLoc3_34) * (real64) ds->w0195 : word16)
Eq_61: (union "Eq_61" (real16 u0) (real64 u1))
	T_61 (in (real64) (ss->*esp_48) : real64)
Eq_64: (union "Eq_64" (real16 u0) (real64 u1))
	T_64 (in (real64) ds->w011D : real64)
Eq_65: (union "Eq_65" (real16 u0) (real64 u1))
	T_65 (in (real64) (ss->*esp_48) / (real64) ds->w011D : word16)
Eq_66: (fn real64 (real16))
	T_66 (in sin : ptr32)
Eq_69: (union "Eq_69" (real16 u0) (real64 u1))
	T_69 (in (real64) ds->w0195 : real64)
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
T_7: (in esp_48 : (memptr (ptr Eq_14) int16))
  Class: Eq_7
  DataType: (memptr (ptr Eq_14) int16)
  OrigDataType: (memptr T_14 (struct (0 T_39 t0000)))
T_8: (in esp : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in fp : ptr16)
  Class: Eq_9
  DataType: ptr16
  OrigDataType: ptr16
T_10: (in 0x0006 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in fp - 0x0006 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in DPB(esp, fp - 0x0006, 0, 16) : word32)
  Class: Eq_7
  DataType: (memptr (ptr Eq_14) int16)
  OrigDataType: word32
T_13: (in rLoc1_27 : real64)
  Class: Eq_13
  DataType: real64
  OrigDataType: real64
T_14: (in ss : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_15: (in 0x0002 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in fp - 0x0002 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in DPB(esp, fp - 0x0002, 0, 16) : word32)
  Class: Eq_17
  DataType: (memptr (ptr Eq_14) int16)
  OrigDataType: (memptr T_14 (struct (0 T_18 t0000)))
T_18: (in Mem0[ss:DPB(esp, fp - 0x0002, 0, 16):int16] : int16)
  Class: Eq_18
  DataType: int16
  OrigDataType: int16
T_19: (in (real64) Mem0[ss:DPB(esp, fp - 0x0002, 0, 16):int16] : real64)
  Class: Eq_13
  DataType: real64
  OrigDataType: real64
T_20: (in rLoc3_34 : real64)
  Class: Eq_20
  DataType: real64
  OrigDataType: real64
T_21: (in 0x0004 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in fp - 0x0004 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in DPB(esp, fp - 0x0004, 0, 16) : word32)
  Class: Eq_23
  DataType: (memptr (ptr Eq_14) int16)
  OrigDataType: (memptr T_14 (struct (0 T_24 t0000)))
T_24: (in Mem0[ss:DPB(esp, fp - 0x0004, 0, 16):int16] : int16)
  Class: Eq_24
  DataType: int16
  OrigDataType: int16
T_25: (in (real64) Mem0[ss:DPB(esp, fp - 0x0004, 0, 16):int16] : real64)
  Class: Eq_20
  DataType: real64
  OrigDataType: real64
T_26: (in rLoc3_52 : Eq_26)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real64
T_27: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (11D T_63 t011D) (195 T_55 t0195) (197 T_29 t0197)))
T_28: (in 0x0197 : word16)
  Class: Eq_28
  DataType: (memptr (ptr Eq_27) Eq_29)
  OrigDataType: (memptr T_27 (struct (0 T_29 t0000)))
T_29: (in Mem0[ds:0x0197:int32] : int32)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: int32
T_30: (in (real64) ds->t0197 : real64)
  Class: Eq_30
  DataType: real64
  OrigDataType: real64
T_31: (in rLoc4 : real64)
  Class: Eq_31
  DataType: real64
  OrigDataType: real64
T_32: (in rLoc4 * rLoc4 : real64)
  Class: Eq_32
  DataType: real64
  OrigDataType: real64
T_33: (in rLoc2 : real64)
  Class: Eq_33
  DataType: real64
  OrigDataType: real64
T_34: (in rLoc2 * rLoc2 : real64)
  Class: Eq_34
  DataType: real64
  OrigDataType: real64
T_35: (in rLoc4 * rLoc4 + rLoc2 * rLoc2 : real64)
  Class: Eq_35
  DataType: real64
  OrigDataType: real64
T_36: (in (real64) ds->t0197 / (rLoc4 * rLoc4 + rLoc2 * rLoc2) : real64)
  Class: Eq_36
  DataType: Eq_36
  OrigDataType: (union (real16 u0) (real64 u1))
T_37: (in 0x00000000 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in esp_48 + 0x00000000 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in Mem0[ss:esp_48 + 0x00000000:word16] : word16)
  Class: Eq_39
  DataType: int16
  OrigDataType: word16
T_40: (in (real64) (ss->*esp_48) : real64)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: (union (real16 u0) (real64 u1))
T_41: (in (real64) ds->t0197 / (rLoc4 * rLoc4 + rLoc2 * rLoc2) + (real64) (ss->*esp_48) : word16)
  Class: Eq_41
  DataType: real16
  OrigDataType: real16
T_42: (in 0x0197 : word16)
  Class: Eq_42
  DataType: (memptr (ptr Eq_27) Eq_29)
  OrigDataType: (memptr T_27 (struct (0 T_43 t0000)))
T_43: (in Mem0[ds:0x0197:word16] : word16)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: word16
T_44: (in (real64) ds->t0197 : real64)
  Class: Eq_44
  DataType: Eq_44
  OrigDataType: (union (real16 u0) (real64 u1))
T_45: (in ((real64) ds->t0197 / (rLoc4 * rLoc4 + rLoc2 * rLoc2) + (real64) (ss->*esp_48)) / (real64) ds->t0197 : word16)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real16
T_46: (in rLoc3_54 : Eq_46)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: (union (real16 u0) (real64 u1))
T_47: (in cos : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_48 (T_26)))
T_48: (in cos(rLoc3_52) : real64)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: real64
T_49: (in sin : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_50 (T_26)))
T_50: (in sin(rLoc3_52) : real64)
  Class: Eq_50
  DataType: real64
  OrigDataType: real64
T_51: (in sin : ptr32)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (fn T_74 (T_73)))
T_52: (in atan : ptr32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (fn T_53 (T_13, T_20)))
T_53: (in atan(rLoc1_27, rLoc3_34) : real64)
  Class: Eq_53
  DataType: Eq_53
  OrigDataType: (union (real16 u0) (real64 u1))
T_54: (in 0x0195 : word16)
  Class: Eq_54
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_55 t0000)))
T_55: (in Mem0[ds:0x0195:word16] : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in (real64) ds->w0195 : real64)
  Class: Eq_56
  DataType: Eq_56
  OrigDataType: (union (real16 u0) (real64 u1))
T_57: (in atan(rLoc1_27, rLoc3_34) * (real64) ds->w0195 : word16)
  Class: Eq_57
  DataType: Eq_57
  OrigDataType: (union (real16 u0) (real64 u1))
T_58: (in 0x00000000 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in esp_48 + 0x00000000 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in Mem0[ss:esp_48 + 0x00000000:int16] : int16)
  Class: Eq_39
  DataType: int16
  OrigDataType: int16
T_61: (in (real64) (ss->*esp_48) : real64)
  Class: Eq_61
  DataType: Eq_61
  OrigDataType: (union (real16 u0) (real64 u1))
T_62: (in 0x011D : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_63 t0000)))
T_63: (in Mem0[ds:0x011D:word16] : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in (real64) ds->w011D : real64)
  Class: Eq_64
  DataType: Eq_64
  OrigDataType: (union (real16 u0) (real64 u1))
T_65: (in (real64) (ss->*esp_48) / (real64) ds->w011D : word16)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: (union (real16 u0) (real64 u1))
T_66: (in sin : ptr32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (fn T_71 (T_70)))
T_67: (in 0x0195 : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_68 t0000)))
T_68: (in Mem0[ds:0x0195:word16] : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_69: (in (real64) ds->w0195 : real64)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: (union (real16 u0) (real64 u1))
T_70: (in rLoc3_54 * (real64) ds->w0195 : word16)
  Class: Eq_70
  DataType: real16
  OrigDataType: real16
T_71: (in sin(rLoc3_54 * (real64) ds->w0195) : real64)
  Class: Eq_71
  DataType: real64
  OrigDataType: real64
T_72: (in (real64) (ss->*esp_48) / (real64) ds->w011D + sin(rLoc3_54 * (real64) ds->w0195) : real64)
  Class: Eq_72
  DataType: real64
  OrigDataType: real64
T_73: (in atan(rLoc1_27, rLoc3_34) * (real64) ds->w0195 + ((real64) (ss->*esp_48) / (real64) ds->w011D + sin(rLoc3_54 * (real64) ds->w0195)) : real64)
  Class: Eq_73
  DataType: real64
  OrigDataType: real64
T_74: (in sin(atan(rLoc1_27, rLoc3_34) * (real64) ds->w0195 + ((real64) (ss->*esp_48) / (real64) ds->w011D + sin(rLoc3_54 * (real64) ds->w0195))) : real64)
  Class: Eq_74
  DataType: real64
  OrigDataType: real64
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_14 {
} Eq_14;

typedef union Eq_26 {
	real16 u0;
	real64 u1;
} Eq_26;

typedef Eq_29 Eq_27struct Eq_27 {
	word16 w011D;	// 11D
	word16 w0195;	// 195
	Eq_29 t0197;	// 197
} Eq_27;

typedef union Eq_29 {
	int32 u0;
	word16 u1;
} Eq_29;

typedef union Eq_36 {
	real16 u0;
	real64 u1;
} Eq_36;

typedef union Eq_40 {
	real16 u0;
	real64 u1;
} Eq_40;

typedef union Eq_44 {
	real16 u0;
	real64 u1;
} Eq_44;

typedef union Eq_46 {
	real16 u0;
	real64 u1;
} Eq_46;

typedef Eq_46 (Eq_47)(Eq_26);

typedef real64 (Eq_49)(Eq_26);

typedef real64 (Eq_51)(real64);

typedef Eq_53 (Eq_52)(real64, real64);

typedef union Eq_53 {
	real16 u0;
	real64 u1;
} Eq_53;

typedef union Eq_56 {
	real16 u0;
	real64 u1;
} Eq_56;

typedef union Eq_57 {
	real16 u0;
	real64 u1;
} Eq_57;

typedef union Eq_61 {
	real16 u0;
	real64 u1;
} Eq_61;

typedef union Eq_64 {
	real16 u0;
	real64 u1;
} Eq_64;

typedef union Eq_65 {
	real16 u0;
	real64 u1;
} Eq_65;

typedef real64 (Eq_66)(real16);

typedef union Eq_69 {
	real16 u0;
	real64 u1;
} Eq_69;

