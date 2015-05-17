// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_102/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_8) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_8: (segment "Eq_8" (0 (arr Eq_52) a0000))
	T_8 (in 0xA000 : selector)
Eq_28: (segment "Eq_28")
	T_28 (in ds : (ptr Eq_28))
Eq_30: (struct "Eq_30" (137 byte b0137))
	T_30 (in bp_95 & 0x000F : word16)
Eq_36: (struct "Eq_36" (13B byte b013B))
	T_36 (in bp_95 & 0x000F : word16)
Eq_52: (struct "Eq_52" 0140 (0 byte b0000))
	T_52
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
T_7: (in ch_46 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in 0xA000 : selector)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (0 (arr T_52) a0000)))
T_9: (in di : int16)
  Class: Eq_9
  DataType: int16
  OrigDataType: int16
T_10: (in 0x0006 : word16)
  Class: Eq_10
  DataType: uint16
  OrigDataType: uint16
T_11: (in di >> 0x0006 : word16)
  Class: Eq_11
  DataType: int16
  OrigDataType: int16
T_12: (in SEQ(0xA000, di >> 0x0006) : ptr32)
  Class: Eq_12
  DataType: ptr32
  OrigDataType: ptr32
T_13: (in si : int16)
  Class: Eq_13
  DataType: int16
  OrigDataType: int16
T_14: (in 0x0006 : word16)
  Class: Eq_14
  DataType: uint16
  OrigDataType: uint16
T_15: (in si >> 0x0006 : word16)
  Class: Eq_15
  DataType: int16
  OrigDataType: int16
T_16: (in 0x0140 : word16)
  Class: Eq_16
  DataType: ui16
  OrigDataType: ui16
T_17: (in (si >> 0x0006) * 0x0140 : word16)
  Class: Eq_17
  DataType: ui16
  OrigDataType: ui16
T_18: (in SEQ(0xA000, di >> 0x0006)[(si >> 0x0006) * 0x0140] : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_19: (in bp_95 : int16)
  Class: Eq_19
  DataType: int16
  OrigDataType: word16
T_20: (in bp : int16)
  Class: Eq_20
  DataType: int16
  OrigDataType: int16
T_21: (in 0x0002 : word16)
  Class: Eq_21
  DataType: uint16
  OrigDataType: uint16
T_22: (in bp >> 0x0002 : word16)
  Class: Eq_19
  DataType: int16
  OrigDataType: int16
T_23: (in dl_86 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in dx : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in (byte) dx : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_26: (in cx : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_28: (in ds : (ptr Eq_28))
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (segment))
T_29: (in 0x000F : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bp_95 & 0x000F : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_28) Eq_30)
  OrigDataType: (memptr T_28 (struct (137 T_33 t0137)))
T_31: (in 0x0137 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in (bp_95 & 0x000F) + 0x0137 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem75[ds:(bp_95 & 0x000F) + 0x0137:byte] : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in (int16) (ds->*(bp_95 & 0x000F)).b0137 : int16)
  Class: Eq_34
  DataType: int16
  OrigDataType: int16
T_35: (in di + (int16) (ds->*(bp_95 & 0x000F)).b0137 : word16)
  Class: Eq_9
  DataType: int16
  OrigDataType: word16
T_36: (in bp_95 & 0x000F : word16)
  Class: Eq_36
  DataType: (memptr (ptr Eq_28) Eq_36)
  OrigDataType: (memptr T_28 (struct (13B T_39 t013B)))
T_37: (in 0x013B : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in (bp_95 & 0x000F) + 0x013B : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem75[ds:(bp_95 & 0x000F) + 0x013B:byte] : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in (int16) (ds->*(bp_95 & 0x000F)).b013B : int16)
  Class: Eq_40
  DataType: int16
  OrigDataType: int16
T_41: (in si + (int16) (ds->*(bp_95 & 0x000F)).b013B : word16)
  Class: Eq_13
  DataType: int16
  OrigDataType: word16
T_42: (in 0x01 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in dl_86 - 0x01 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in DPB(dx, dl_86 - 0x01, 0, 8) : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_45: (in 0x01 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_46: (in dl_86 != 0x01 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in cx + 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in bp + 0x0001 : word16)
  Class: Eq_20
  DataType: int16
  OrigDataType: word16
T_51: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_52:
  Class: Eq_52
  DataType: Eq_52
  OrigDataType: (struct 0140 (0 T_18 t0000))
*/
typedef Eq_8 Eq_1struct Globals {
	Eq_8 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef Eq_52 Eq_8[]struct Eq_8 {
	Eq_52 a0000[];	// 0
} Eq_8;

typedef struct Eq_28 {
} Eq_28;

typedef struct Eq_30 {
	byte b0137;	// 137
} Eq_30;

typedef struct Eq_36 {
	byte b013B;	// 13B
} Eq_36;

typedef struct Eq_52 {	// size: 320 140
	byte b0000;	// 0
} Eq_52;

