// subject.h
// Generated on 5/4/2015 12:11:48 AM by decompiling from_pouet.net/with_source_388/ia32_com/subject.exe
// using Decompiler version 0.4.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (31580 (ptr Eq_27) ptr31580))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (segment "Eq_3" (2 cups16 w0002) (154 (arr word16) a0154))
	T_3 (in ds : (ptr Eq_3))
	T_15 (in ds : selector)
Eq_13: (fn void ((ptr Eq_3), word16))
	T_13 (in msdos_display_string : ptr32)
	T_14 (in signature of msdos_display_string : void)
Eq_19: (fn void (byte))
	T_19 (in msdos_terminate : ptr32)
	T_20 (in signature of msdos_terminate : void)
Eq_27: (segment "Eq_27" (0 (arr word16) a0000))
	T_27 (in 0x3158 : selector)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in 0x319D : word16)
  Class: Eq_2
  DataType: cups16
  OrigDataType: cups16
T_3: (in ds : (ptr Eq_3))
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment (2 T_5 t0002) (154 (arr T_39) a0154)))
T_4: (in 0x0002 : word16)
  Class: Eq_4
  DataType: (memptr (ptr Eq_3) cups16)
  OrigDataType: (memptr T_3 (struct (0 T_5 t0000)))
T_5: (in Mem0[ds:0x0002:word16] : word16)
  Class: Eq_2
  DataType: cups16
  OrigDataType: cups16
T_6: (in 0x319D <u ds->w0002 : bool)
  Class: Eq_6
  DataType: bool
  OrigDataType: bool
T_7: (in cx_51 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0124 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in di_52 : (memptr (ptr Eq_27) word16))
  Class: Eq_9
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct 0002 (0 T_30 t0000)))
T_10: (in 0x0000 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: word16
T_11: (in si_57 : (memptr (ptr Eq_3) word16))
  Class: Eq_11
  DataType: (memptr (ptr Eq_3) word16)
  OrigDataType: (memptr T_3 (struct 0002 (0 T_26 t0000)))
T_12: (in 0x0154 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_3) word16)
  OrigDataType: word16
T_13: (in msdos_display_string : ptr32)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (fn T_18 (T_3, T_17)))
T_14: (in signature of msdos_display_string : void)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: 
T_15: (in ds : selector)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment))
T_16: (in dx : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x011C : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_18: (in msdos_display_string(ds, 0x011C) : void)
  Class: Eq_18
  DataType: void
  OrigDataType: void
T_19: (in msdos_terminate : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_23 (T_22)))
T_20: (in signature of msdos_terminate : void)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: 
T_21: (in al : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_23: (in msdos_terminate(0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in si_57 + 0x0000 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in Mem0[ds:si_57 + 0x0000:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x3158 : selector)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (0 (arr T_40) a0000)))
T_28: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in di_52 + 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem63[0x3158:di_52 + 0x0000:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_31: (in 0x0002 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in si_57 + 0x0002 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_3) word16)
  OrigDataType: word16
T_33: (in 0x0002 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in di_52 + 0x0002 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: word16
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in cx_51 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_38: (in cx_51 == 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39:
  Class: Eq_39
  DataType: word16
  OrigDataType: (struct 0002 (0 T_26 t0000))
T_40:
  Class: Eq_40
  DataType: word16
  OrigDataType: (struct 0002 (0 T_30 t0000))
*/
typedef Eq_27 Eq_1struct Globals {
	Eq_27 * ptr31580;	// 31580
} Eq_1;

typedef  Eq_3[]struct Eq_3 {
	cups16 w0002;	// 2
	word16 a0154[];	// 154
} Eq_3;

typedef void (Eq_13)(Eq_3 *, word16);

typedef void (Eq_19)(byte);

typedef  Eq_27[]struct Eq_27 {
	word16 a0000[];	// 0
} Eq_27;

