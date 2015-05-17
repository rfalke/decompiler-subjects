// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_051/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in cx_10 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_3: (in 0x0029 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_4: (in bx_13 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in bx : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in 0x50 : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_7: (in DPB(bx, 0x50, 0, 8) : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_8: (in ax_11 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x0202 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_10: (in __syscall : ptr32)
  Class: Eq_10
  DataType: (ptr (fn T_12 (T_11)))
  OrigDataType: (ptr (fn T_12 (T_11)))
T_11: (in 0x29 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in __syscall(0x29) : void)
  Class: Eq_12
  DataType: void
  OrigDataType: void
T_13: (in 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in cx_10 - 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_15: (in 0x0000 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_16: (in bx_13 != 0x0000 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in 0x0000 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_18: (in cx_10 != 0x0000 : bool)
  Class: Eq_18
  DataType: bool
  OrigDataType: bool
T_19: (in bx_13 != 0x0000 && cx_10 != 0x0000 : bool)
  Class: Eq_19
  DataType: 
  OrigDataType: 
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: 
  OrigDataType: 
T_21: (in bx_13 - 0x0001 : word16)
  Class: Eq_4
  DataType: 
  OrigDataType: 
T_22: (in 0x0000 : word16)
  Class: Eq_4
  DataType: 
  OrigDataType: 
T_23: (in bx_13 < 0x0000 : bool)
  Class: Eq_23
  DataType: 
  OrigDataType: 
T_24: (in 0x0001 : word16)
  Class: Eq_24
  DataType: 
  OrigDataType: 
T_25: (in ax_11 - 0x0001 : word16)
  Class: Eq_8
  DataType: 
  OrigDataType: 
T_26: (in P : byte)
  Class: Eq_26
  DataType: 
  OrigDataType: 
T_27: (in __syscall : ptr32)
  Class: Eq_27
  DataType: 
  OrigDataType: 
T_28: (in 0x16 : byte)
  Class: Eq_28
  DataType: 
  OrigDataType: 
T_29: (in __syscall(0x16) : void)
  Class: Eq_29
  DataType: 
  OrigDataType: 
T_30: (in ax_41 : word16)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_31: (in di : word16)
  Class: Eq_31
  DataType: 
  OrigDataType: 
T_32: (in di ^ ax_11 : word16)
  Class: Eq_30
  DataType: 
  OrigDataType: 
T_33: (in ds : selector)
  Class: Eq_33
  DataType: 
  OrigDataType: 
T_34: (in si : word16)
  Class: Eq_34
  DataType: 
  OrigDataType: 
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: 
  OrigDataType: 
T_36: (in si + 0x0001 : word16)
  Class: Eq_36
  DataType: 
  OrigDataType: 
T_37: (in Mem0[ds:si + 0x0001:word16] : word16)
  Class: Eq_37
  DataType: 
  OrigDataType: 
T_38: (in 0x000F : word16)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_39: (in ax_41 << 0x000F : word16)
  Class: Eq_39
  DataType: 
  OrigDataType: 
T_40: (in (int32) (ax_41 << 0x000F) : int32)
  Class: Eq_40
  DataType: 
  OrigDataType: 
T_41: (in SLICE((int32) (ax_41 << 0x000F), word16, 16) : word16)
  Class: Eq_41
  DataType: 
  OrigDataType: 
T_42: (in Mem0[ds:si + 0x0001:word16] + SLICE((int32) (ax_41 << 0x000F), word16, 16) : word16)
  Class: Eq_42
  DataType: 
  OrigDataType: 
T_43: (in ax_41 << 0x000F : word16)
  Class: Eq_43
  DataType: 
  OrigDataType: 
T_44: (in 0x0000 : word16)
  Class: Eq_43
  DataType: 
  OrigDataType: 
T_45: (in ax_41 << 0x000F <u 0x0000 : bool)
  Class: Eq_45
  DataType: 
  OrigDataType: 
T_46: (in Mem0[ds:si + 0x0001:word16] + SLICE((int32) (ax_41 << 0x000F), word16, 16) + (ax_41 << 0x000F <u 0x0000) : word16)
  Class: Eq_46
  DataType: 
  OrigDataType: 
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_48: (in si + 0x0001 : word16)
  Class: Eq_48
  DataType: 
  OrigDataType: 
T_49: (in Mem51[ds:si + 0x0001:word16] : word16)
  Class: Eq_46
  DataType: 
  OrigDataType: 
*/
