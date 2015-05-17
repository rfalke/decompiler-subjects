// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_040/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (segment "Eq_7" (11F byte b011F))
	T_7 (in ds : (ptr Eq_7))
	T_15 (in ds : selector)
Eq_13: (fn void ((ptr Eq_7), word16))
	T_13 (in msdos_display_string : ptr32)
	T_14 (in signature of msdos_display_string : void)
Eq_26: (segment "Eq_26")
	T_26 (in SLICE(Mem10[ds:bx:segptr32], selector, 16) : selector)
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
T_7: (in ds : (ptr Eq_7))
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment (11F T_9 t011F)))
T_8: (in 0x011F : word16)
  Class: Eq_8
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_9 t0000)))
T_9: (in Mem0[ds:0x011F:byte] : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x01 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in ds->b011F + 0x01 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_12: (in Mem10[ds:0x011F:byte] : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_13: (in msdos_display_string : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_18 (T_7, T_17)))
T_14: (in signature of msdos_display_string : void)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: 
T_15: (in ds : selector)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (segment))
T_16: (in dx : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x011D : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_18: (in msdos_display_string(ds, 0x011D) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in di : (memptr (ptr Eq_26) byte))
  Class: Eq_19
  DataType: (memptr (ptr Eq_26) byte)
  OrigDataType: (memptr T_26 (struct (0 T_29 t0000)))
T_20: (in cx : (memptr (ptr Eq_26) byte))
  Class: Eq_19
  DataType: (memptr (ptr Eq_26) byte)
  OrigDataType: (memptr T_26 (struct (0 T_29 t0000)))
T_21: (in di + cx : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_26) byte)
  OrigDataType: word16
T_22: (in 0x011F : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_7) byte)
  OrigDataType: (memptr T_7 (struct (0 T_23 t0000)))
T_23: (in Mem10[ds:0x011F:byte] : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_24: (in bx : (memptr (ptr Eq_7) segptr32))
  Class: Eq_24
  DataType: (memptr (ptr Eq_7) segptr32)
  OrigDataType: (memptr T_7 (struct (0 T_25 t0000)))
T_25: (in Mem10[ds:bx:segptr32] : segptr32)
  Class: Eq_25
  DataType: segptr32
  OrigDataType: segptr32
T_26: (in SLICE(Mem10[ds:bx:segptr32], selector, 16) : selector)
  Class: Eq_26
  DataType: (ptr Eq_26)
  OrigDataType: (ptr (segment))
T_27: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di + 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem21[SLICE(Mem10[ds:bx:segptr32], selector, 16):di + 0x0000:byte] : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
*/
typedef struct Globals {
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_7 {
	byte b011F;	// 11F
} Eq_7;

typedef void (Eq_13)(Eq_7 *, word16);

typedef struct Eq_26 {
} Eq_26;

