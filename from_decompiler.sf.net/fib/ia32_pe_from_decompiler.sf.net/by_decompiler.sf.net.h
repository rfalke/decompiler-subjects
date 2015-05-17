// subject.h
// Generated on TIMESTAMP by decompiling from_decompiler.sf.net/fib/ia32_pe_from_decompiler.sf.net/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals")
	globals_t (in globals : (ptr (struct "Globals")))
Eq_6: (fn word32 (word32))
	T_6 (in fn00401000 : ptr32)
	T_7 (in signature of fn00401000 : void)
	T_12 (in fn00401000 : ptr32)
	T_60 (in fn00401000 : ptr32)
	T_63 (in fn00401000 : ptr32)
Eq_18: (struct "Eq_18" 0001 (0 byte b0000) (1 Eq_18 t0001))
	T_18 (in ecx_25 : (ptr Eq_18))
	T_19 (in dwArg08 : word32)
	T_20 (in edi_9 : (ptr Eq_18))
	T_24 (in dwArg08 - 0x00000001 + dwArg0C : word32)
	T_52 (in ecx_25 + 0x00000001 : word32)
Eq_55: (fn void (word32, word32, word32))
	T_55 (in fn00401050 : ptr32)
	T_56 (in signature of fn00401050 : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in eax : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in dwArg04 : word32)
  Class: Eq_3
  DataType: int32
  OrigDataType: int32
T_4: (in 0x00000001 : word32)
  Class: Eq_3
  DataType: int32
  OrigDataType: int32
T_5: (in dwArg04 >= 0x00000001 : bool)
  Class: Eq_5
  DataType: bool
  OrigDataType: bool
T_6: (in fn00401000 : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_11 (T_10)))
T_7: (in signature of fn00401000 : void)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: 
T_8: (in dwArg04 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in 0x00000001 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in dwArg04 - 0x00000001 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_11: (in fn00401000(dwArg04 - 0x00000001) : word32)
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
T_14: (in dwArg04 - 0x00000002 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_15: (in fn00401000(dwArg04 - 0x00000002) : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_16: (in fn00401000(dwArg04 - 0x00000001) + fn00401000(dwArg04 - 0x00000002) : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in 0x00000001 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in ecx_25 : (ptr Eq_18))
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (struct 0001 (0 T_26 t0000)))
T_19: (in dwArg08 : word32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: up32
T_20: (in edi_9 : (ptr Eq_18))
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: up32
T_21: (in 0x00000001 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in dwArg08 - 0x00000001 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in dwArg0C : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in dwArg08 - 0x00000001 + dwArg0C : word32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: word32
T_25: (in dwArg08 >=u edi_9 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in 0x00 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in 0x00000000 : word32)
  Class: Eq_27
  DataType: word32
  OrigDataType: word32
T_28: (in ecx_25 + 0x00000000 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_29: (in Mem30[ecx_25 + 0x00000000:byte] : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_30: (in esi_38 : uint32)
  Class: Eq_30
  DataType: uint32
  OrigDataType: uint32
T_31: (in dwArg04 : word32)
  Class: Eq_30
  DataType: uint32
  OrigDataType: word32
T_32: (in edx_43 : uint32)
  Class: Eq_32
  DataType: uint32
  OrigDataType: uint32
T_33: (in 0xCCCCCCCD : word32)
  Class: Eq_33
  DataType: uint32
  OrigDataType: uint32
T_34: (in esi_38 *u 0xCCCCCCCD : uint64)
  Class: Eq_34
  DataType: uint64
  OrigDataType: uint64
T_35: (in SLICE(esi_38 *u 0xCCCCCCCD, word32, 32) : word32)
  Class: Eq_32
  DataType: uint32
  OrigDataType: word32
T_36: (in 0x00000003 : word32)
  Class: Eq_36
  DataType: uint32
  OrigDataType: uint32
T_37: (in edx_43 >>u 0x00000003 : word32)
  Class: Eq_37
  DataType: uint32
  OrigDataType: uint32
T_38: (in edx_43 >>u 0x00000003 : word32)
  Class: Eq_38
  DataType: uint32
  OrigDataType: uint32
T_39: (in 0x00000004 : word32)
  Class: Eq_39
  DataType: ui32
  OrigDataType: ui32
T_40: (in (edx_43 >>u 0x00000003) * 0x00000004 : word32)
  Class: Eq_40
  DataType: ui32
  OrigDataType: ui32
T_41: (in (edx_43 >>u 0x00000003) + (edx_43 >>u 0x00000003) * 0x00000004 : word32)
  Class: Eq_41
  DataType: ui32
  OrigDataType: ui32
T_42: (in 0x00000002 : word32)
  Class: Eq_42
  DataType: ui32
  OrigDataType: ui32
T_43: (in ((edx_43 >>u 0x00000003) + (edx_43 >>u 0x00000003) * 0x00000004) * 0x00000002 : word32)
  Class: Eq_43
  DataType: ui32
  OrigDataType: ui32
T_44: (in esi_38 - ((edx_43 >>u 0x00000003) + (edx_43 >>u 0x00000003) * 0x00000004) * 0x00000002 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in (byte) (esi_38 - ((edx_43 >>u 0x00000003) + (edx_43 >>u 0x00000003) * 0x00000004) * 0x00000002) : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0x30 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in (byte) (esi_38 - ((edx_43 >>u 0x00000003) + (edx_43 >>u 0x00000003) * 0x00000004) * 0x00000002) + 0x30 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_48: (in 0x00000000 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in ecx_25 + 0x00000000 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in Mem52[ecx_25 + 0x00000000:byte] : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_51: (in 0x00000001 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in ecx_25 + 0x00000001 : word32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: word32
T_53: (in edx_43 >>u 0x00000003 : word32)
  Class: Eq_30
  DataType: uint32
  OrigDataType: uint32
T_54: (in ecx_25 <u edi_9 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in fn00401050 : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_71 (T_66, T_69, T_70)))
T_56: (in signature of fn00401050 : void)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: 
T_57: (in dwArg04 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in dwArg08 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in dwArg0C : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_60: (in fn00401000 : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_62 (T_61)))
T_61: (in 0x00000009 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_62: (in fn00401000(0x00000009) : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_63: (in fn00401000 : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (fn T_65 (T_64)))
T_64: (in 0x00000008 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_65: (in fn00401000(0x00000008) : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_66: (in fn00401000(0x00000009) + fn00401000(0x00000008) : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_67: (in fp : ptr32)
  Class: Eq_67
  DataType: ptr32
  OrigDataType: ptr32
T_68: (in 0x00000064 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in fp - 0x00000064 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_70: (in 0x00000064 : word32)
  Class: Eq_59
  DataType: word32
  OrigDataType: word32
T_71: (in fn00401050(fn00401000(0x00000009) + fn00401000(0x00000008), fp - 0x00000064, 0x00000064) : void)
  Class: Eq_71
  DataType: void
  OrigDataType: void
*/
typedef struct Globals {
} Eq_1;

typedef word32 (Eq_6)(word32);

typedef Eq_18 Eq_18struct Eq_18 {	// size: 1 1
	byte b0000;	// 0
	Eq_18 t0001;	// 1
} Eq_18;

typedef void (Eq_55)(word32, word32, word32);

