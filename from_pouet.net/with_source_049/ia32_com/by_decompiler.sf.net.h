// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_049/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_6 (T_5)))
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: 
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
  DataType: ptr32
  OrigDataType: ptr32
T_8: (in ds : selector)
  Class: Eq_8
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_9: (in bx : word16)
  Class: Eq_9
  DataType: (memptr T_8 (struct (0 T_12 t0000)))
  OrigDataType: (memptr T_8 (struct (0 T_12 t0000)))
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
  DataType: segptr32
  OrigDataType: segptr32
T_13: (in es_7 : selector)
  Class: Eq_13
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_14: (in SLICE(es_di_6, selector, 16) : selector)
  Class: Eq_13
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_15: (in di_25 : word16)
  Class: Eq_15
  DataType: (memptr T_13 (struct 0001 (0 T_25 t0000)))
  OrigDataType: (memptr T_13 (struct 0001 (0 T_25 t0000)))
T_16: (in (word16) es_di_6 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_17: (in bx_34 : word16)
  Class: Eq_17
  DataType: cups16
  OrigDataType: cups16
T_18: (in 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in bx_34 + 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0000 : word16)
  Class: Eq_17
  DataType: cups16
  OrigDataType: cups16
T_21: (in bx_34 >u 0x0000 : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_22: (in (byte) bx_34 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in di_25 + 0x0000 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in Mem52[es_7:di_25 + 0x0000:byte] : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_26: (in 0xCCE6 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di_25 + 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_29: (in cx : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0001 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in cx - 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_32: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_33: (in cx != 0x0000 : bool)
  Class: Eq_33
  DataType: bool
  OrigDataType: bool
T_34: (in 0x1B : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in DPB(bx, 0x1B, 0, 8) : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in cx - 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_38: (in __inb : ptr32)
  Class: Eq_38
  DataType: (ptr (fn T_40 (T_39)))
  OrigDataType: (ptr (fn T_40 (T_39)))
T_39: (in 0x60 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in __inb(0x60) : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in 0x01 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_42: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in 0x0001 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_44: (in cx != 0x0001 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in __inb(0x60) != 0x01 && cx != 0x0001 : bool)
  Class: Eq_45
  DataType: 
  OrigDataType: 
*/
