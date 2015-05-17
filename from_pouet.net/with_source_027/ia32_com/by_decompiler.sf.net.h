// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_027/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_17) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_9: (struct "Eq_9" 0001 (0 Eq_13 t0000))
	T_9 (in di_13 : (memptr (ptr Eq_17) Eq_9))
	T_10 (in 0x0000 : word16)
	T_21 (in di_20 : (memptr (ptr Eq_17) Eq_9))
	T_23 (in di_13 + 0x0001 : word16)
	T_25 (in 0x0000 : word16)
	T_43 (in di_13 + 0x0002 : word16)
Eq_13: (union "Eq_13" (byte u0) (word16 u1))
	T_13 (in al_17 : Eq_13)
	T_16 (in (byte) ax_14 + SLICE(ax_14, byte, 8) : byte)
	T_20 (in Mem19[0xA000:di_13 + 0x0000:byte] : byte)
	T_36 (in Mem26[0xA000:si_30 + 0x0000:word16] : word16)
	T_39 (in Mem34[0xA000:di_13 + 0x0000:word16] : word16)
Eq_17: (segment "Eq_17" (0 Eq_9 t0000) (2D (arr Eq_13) a002D))
	T_17 (in 0xA000 : selector)
	T_31 (in Mem26[ss:fp - 0x0002:word16] : word16)
Eq_27: (segment "Eq_27")
	T_27 (in ss : selector)
Eq_28: (union "Eq_28" (ptr16 u0) ((memptr (ptr Eq_27) Eq_45) u1))
	T_28 (in fp : ptr16)
Eq_45: (struct "Eq_45" (FFFFFFFE (ptr Eq_17) ptrFFFFFFFE))
	T_45
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
T_7: (in ax_12 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0013 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in di_13 : (memptr (ptr Eq_17) Eq_9))
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) Eq_9)
  OrigDataType: (memptr T_17 (struct 0001 (0 T_13 t0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) Eq_9)
  OrigDataType: word16
T_11: (in ax_14 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in ax_12 + di_13 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_13: (in al_17 : Eq_13)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: byte
T_14: (in (byte) ax_14 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in SLICE(ax_14, byte, 8) : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in (byte) ax_14 + SLICE(ax_14, byte, 8) : byte)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: byte
T_17: (in 0xA000 : selector)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (segment (2D (arr T_44) a002D)))
T_18: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in di_13 + 0x0000 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in Mem19[0xA000:di_13 + 0x0000:byte] : byte)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: byte
T_21: (in di_20 : (memptr (ptr Eq_17) Eq_9))
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) Eq_9)
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in di_13 + 0x0001 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) Eq_9)
  OrigDataType: word16
T_24: (in DPB(ax_14, al_17, 0, 8) : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_25: (in 0x0000 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) Eq_9)
  OrigDataType: word16
T_26: (in di_20 != &Eq_17::t0000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in ss : selector)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment))
T_28: (in fp : ptr16)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: (union (ptr16 u0) ((memptr T_27 (struct (FFFFFFFE T_31 tFFFFFFFE))) u1))
T_29: (in 0x0002 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in fp - 0x0002 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem26[ss:fp - 0x0002:word16] : word16)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: word16
T_32: (in si_30 : (memptr (ptr Eq_17) Eq_13))
  Class: Eq_32
  DataType: (memptr (ptr Eq_17) Eq_13)
  OrigDataType: (memptr T_17 (struct 0002 (0 T_36 t0000)))
T_33: (in 0x002D : word16)
  Class: Eq_32
  DataType: (memptr (ptr Eq_17) Eq_13)
  OrigDataType: word16
T_34: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in si_30 + 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in Mem26[0xA000:si_30 + 0x0000:word16] : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_37: (in 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di_13 + 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem34[0xA000:di_13 + 0x0000:word16] : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_40: (in 0x0002 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in si_30 + 0x0002 : word16)
  Class: Eq_32
  DataType: (memptr (ptr Eq_17) Eq_13)
  OrigDataType: word16
T_42: (in 0x0002 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in di_13 + 0x0002 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_17) Eq_9)
  OrigDataType: word16
T_44:
  Class: Eq_44
  DataType: Eq_13
  OrigDataType: (struct 0002 (0 T_36 t0000))
T_45:
  Class: Eq_45
  DataType: Eq_45
  OrigDataType: 
*/
typedef Eq_17 Eq_1struct Globals {
	Eq_17 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_13 Eq_9struct Eq_9 {	// size: 1 1
	Eq_13 t0000;	// 0
} Eq_9;

typedef union Eq_13 {
	byte u0;
	word16 u1;
} Eq_13;

typedef Eq_9 Eq_17Eq_13 Eq_17[]struct Eq_17 {
	Eq_9 t0000;	// 0
	Eq_13 a002D[];	// 2D
} Eq_17;

typedef struct Eq_27 {
} Eq_27;

typedef union Eq_28 {
	ptr16 u0;
	Eq_45 Eq_27::* u1;
} Eq_28;

typedef Eq_17 Eq_45struct Eq_45 {
	Eq_17 * ptrFFFFFFFE;	// FFFFFFFE
} Eq_45;

