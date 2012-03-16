// fib.h
// Generated on 16.03.2012 05:48:56 by decompiling ...\Samples\fib.exe
// using Decompiler.

/*
// Equivalence classes ////////////
Eq_6: (fn word32 (word32))
	T_6 (in fn00401000 : ptr32)
	T_7 (in signature of fn00401000)
	T_12 (in fn00401000 : ptr32)
	T_57 (in fn00401000 : ptr32)
	T_60 (in fn00401000 : ptr32)
Eq_52: (fn void (word32, (ptr word32), word32))
	T_52 (in fn00401050 : ptr32)
	T_53 (in signature of fn00401050)
// Type Variables ////////////
Globals: (in globals : ptr32)
  Class: Eq_1
  DataType: Eq_1
  OrigDataType: 
T_2: (in eax : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in dwArg00 : word32)
  Class: Eq_3
  DataType: int32
  OrigDataType: int32
T_4: (in 0x00000001 : word32)
  Class: Eq_3
  DataType: int32
  OrigDataType: int32
T_5: (in dwArg00 >= 0x00000001 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in fn00401000 : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_11 (T_10)))
T_7: (in signature of fn00401000)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: 
T_8: (in dwArg00 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in 0x00000001 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in dwArg00 - 0x00000001 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_11: (in fn00401000(dwArg00 - 0x00000001) : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in fn00401000 : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_15 (T_14)))
T_13: (in 0x00000002 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in dwArg00 - 0x00000002 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_15: (in fn00401000(dwArg00 - 0x00000002) : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_16: (in fn00401000(dwArg00 - 0x00000001) + fn00401000(dwArg00 - 0x00000002) : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in 0x00000001 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in ecx_18 : (ptr byte))
  Class: Eq_18
  DataType: (ptr byte)
  OrigDataType: (ptr (struct 1 (0 T_41 t0000)))
T_19: (in dwArg04 : word32)
  Class: Eq_18
  DataType: (ptr byte)
  OrigDataType: up32
T_20: (in edi_21 : (ptr byte))
  Class: Eq_18
  DataType: (ptr byte)
  OrigDataType: up32
T_21: (in 0x00000001 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in dwArg04 - 0x00000001 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in dwArg08 : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in dwArg04 - 0x00000001 + dwArg08 : word32)
  Class: Eq_18
  DataType: (ptr byte)
  OrigDataType: word32
T_25: (in dwArg04 >=u edi_21 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in esi_26 : uint32)
  Class: Eq_26
  DataType: uint32
  OrigDataType: uint32
T_27: (in dwArg00 : word32)
  Class: Eq_26
  DataType: uint32
  OrigDataType: word32
T_28: (in edx_33 : uint32)
  Class: Eq_26
  DataType: uint32
  OrigDataType: word32
T_29: (in 0xCCCCCCCD : word32)
  Class: Eq_29
  DataType: uint32
  OrigDataType: uint32
T_30: (in esi_26 *u 0xCCCCCCCD : uint64)
  Class: Eq_30
  DataType: uint64
  OrigDataType: uint64
T_31: (in SLICE(esi_26 *u 0xCCCCCCCD, word32, 32) : word32)
  Class: Eq_31
  DataType: uint32
  OrigDataType: uint32
T_32: (in 0x00000003 : word32)
  Class: Eq_32
  DataType: uint32
  OrigDataType: uint32
T_33: (in SLICE(esi_26 *u 0xCCCCCCCD, word32, 32) >>u 0x00000003 : word32)
  Class: Eq_26
  DataType: uint32
  OrigDataType: uint32
T_34: (in 0x00000005 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in edx_33 * 0x00000005 : word32)
  Class: Eq_35
  DataType: uir32
  OrigDataType: uir32
T_36: (in 0x00000002 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in edx_33 * 0x00000005 * 0x00000002 : word32)
  Class: Eq_37
  DataType: uir32
  OrigDataType: uir32
T_38: (in esi_26 - edx_33 * 0x00000005 * 0x00000002 : word32)
  Class: Eq_38
  DataType: word32
  OrigDataType: word32
T_39: (in (byte) (esi_26 - edx_33 * 0x00000005 * 0x00000002) : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in 0x30 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in (byte) (esi_26 - edx_33 * 0x00000005 * 0x00000002) + 0x30 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_42: (in 0x00000000 : word32)
  Class: Eq_42
  DataType: word32
  OrigDataType: word32
T_43: (in ecx_18 + 0x00000000 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in Mem41[ecx_18 + 0x00000000:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_45: (in 0x00000001 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in ecx_18 + 0x00000001 : word32)
  Class: Eq_18
  DataType: (ptr byte)
  OrigDataType: word32
T_47: (in ecx_18 <u edi_21 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in 0x00 : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_49: (in 0x00000000 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in ecx_18 + 0x00000000 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in Mem60[ecx_18 + 0x00000000:byte] : byte)
  Class: Eq_41
  DataType: byte
  OrigDataType: byte
T_52: (in fn00401050 : ptr32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (fn T_67 (T_63, T_65, T_66)))
T_53: (in signature of fn00401050)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: 
T_54: (in dwArg00 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in dwArg04 : (ptr word32))
  Class: Eq_55
  DataType: (ptr word32)
  OrigDataType: word32
T_56: (in dwArg08 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in fn00401000 : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_59 (T_58)))
T_58: (in 0x00000009 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_59: (in fn00401000(0x00000009) : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_60: (in fn00401000 : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_62 (T_61)))
T_61: (in 0x00000008 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_62: (in fn00401000(0x00000008) : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_63: (in fn00401000(0x00000009) + fn00401000(0x00000008) : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_64: (in dwLoc68 : word32)
  Class: Eq_64
  DataType: word32
  OrigDataType: word32
T_65: (in &dwLoc68 : ptr32)
  Class: Eq_55
  DataType: (ptr word32)
  OrigDataType: (ptr T_64)
T_66: (in 0x00000064 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_67: (in fn00401050(fn00401000(0x00000009) + fn00401000(0x00000008), &dwLoc68, 0x00000064) : void)
  Class: Eq_67
  DataType: void
  OrigDataType: void
*/
typedef word32 (Eq_6)(word32);

typedef void (Eq_52)(word32, word32 *, word32);

