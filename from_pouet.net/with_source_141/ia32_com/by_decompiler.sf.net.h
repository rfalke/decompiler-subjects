// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_141/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_40) ptrFFFA0000) (C000 (ptr Eq_9) ptrC000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_60 (in bios_video_set_mode : ptr32)
Eq_9: (segment "Eq_9" (162 word16 w0162) (164 word16 w0164) (166 word16 w0166))
	T_9 (in 0x0C00 : selector)
Eq_25: (fn word16 (word16, byte))
	T_25 (in __ror : ptr32)
Eq_36: (union "Eq_36" (uint16 u0) ((memptr (ptr Eq_9) Eq_68) u1))
	T_36 (in SEQ(0x0000, ax_39) % 0x0004 : uint16)
Eq_40: (segment "Eq_40" (0 byte b0000))
	T_40 (in 0xA000 : selector)
Eq_51: (fn void ())
	T_51 (in msdos_get_stdin_status : ptr32)
	T_52 (in signature of msdos_get_stdin_status : void)
Eq_57: (fn void (byte))
	T_57 (in __syscall : ptr32)
Eq_63: (fn void (byte))
	T_63 (in msdos_terminate : ptr32)
	T_64 (in signature of msdos_terminate : void)
Eq_68: (struct "Eq_68" (168 byte b0168))
	T_68
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
T_5: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(al) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in bx_20 : (memptr (ptr Eq_40) byte))
  Class: Eq_7
  DataType: (memptr (ptr Eq_40) byte)
  OrigDataType: (memptr T_40 (struct 0001 (0 T_43 t0000)))
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_40) byte)
  OrigDataType: word16
T_9: (in 0x0C00 : selector)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (segment (162 T_11 t0162) (164 T_11 t0164) (166 T_11 t0166)))
T_10: (in 0x0162 : word16)
  Class: Eq_10
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_9 (struct (0 T_11 t0000)))
T_11: (in Mem0[0x0C00:0x0162:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0x0166 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_9 (struct (0 T_13 t0000)))
T_13: (in Mem31[0x0C00:0x0166:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_14: (in 0x0162 : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_9 (struct (0 T_11 t0000)))
T_15: (in Mem31[0x0C00:0x0162:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0164 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_9 (struct (0 T_17 t0000)))
T_17: (in Mem31[0x0C00:0x0164:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0C00->w0162 + 0x0C00->w0164 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_19: (in Mem34[0x0C00:0x0162:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0166 : word16)
  Class: Eq_20
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_9 (struct (0 T_21 t0000)))
T_21: (in Mem34[0x0C00:0x0166:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_22: (in 0x0164 : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_9 (struct (0 T_23 t0000)))
T_23: (in Mem36[0x0C00:0x0164:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_24: (in ax_39 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_25: (in __ror : ptr32)
  Class: Eq_25
  DataType: (ptr Eq_25)
  OrigDataType: (ptr (fn T_29 (T_27, T_28)))
T_26: (in 0x0162 : word16)
  Class: Eq_26
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_9 (struct (0 T_27 t0000)))
T_27: (in Mem36[0x0C00:0x0162:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_28: (in 0x08 : byte)
  Class: Eq_28
  DataType: byte
  OrigDataType: byte
T_29: (in __ror(0x0C00->w0162, 0x08) : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0162 : word16)
  Class: Eq_30
  DataType: (memptr (ptr Eq_9) word16)
  OrigDataType: (memptr T_9 (struct (0 T_31 t0000)))
T_31: (in Mem40[0x0C00:0x0162:word16] : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_32: (in al_54 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in SEQ(0x0000, ax_39) : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in 0x0004 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in SEQ(0x0000, ax_39) % 0x0004 : uint16)
  Class: Eq_36
  DataType: Eq_36
  OrigDataType: (union (uint16 u0) ((memptr T_9 (struct (168 T_39 t0168))) u1))
T_37: (in 0x0168 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in SEQ(0x0000, ax_39) % 0x0004 + 0x0168 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in Mem40[0x0C00:SEQ(0x0000, ax_39) % 0x0004 + 0x0168:byte] : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_40: (in 0xA000 : selector)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (segment))
T_41: (in 0x0000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in bx_20 + 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in Mem57[0xA000:bx_20 + 0x0000:byte] : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in bx_20 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_40) byte)
  OrigDataType: word16
T_46: (in cx_26 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in 0x0001 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in cx_26 - 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_49: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_50: (in cx_26 != 0x0000 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in msdos_get_stdin_status : ptr32)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (fn T_53 ()))
T_52: (in signature of msdos_get_stdin_status : void)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: 
T_53: (in msdos_get_stdin_status() : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
T_54: (in 0x00 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_55: (in al_54 == 0x00 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in 0xFA00 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_57: (in __syscall : ptr32)
  Class: Eq_57
  DataType: (ptr Eq_57)
  OrigDataType: (ptr (fn T_59 (T_58)))
T_58: (in 0x21 : byte)
  Class: Eq_58
  DataType: byte
  OrigDataType: byte
T_59: (in __syscall(0x21) : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_60: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_62 (T_61)))
T_61: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_62: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_63: (in msdos_terminate : ptr32)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (fn T_67 (T_66)))
T_64: (in signature of msdos_terminate : void)
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: 
T_65: (in al : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in 0x03 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_67: (in msdos_terminate(0x03) : void)
  Class: Eq_67
  DataType: void
  OrigDataType: void
T_68:
  Class: Eq_68
  DataType: Eq_68
  OrigDataType: 
*/
typedef Eq_40 Eq_1Eq_9 Eq_1struct Globals {
	Eq_40 * ptrFFFA0000;	// FFFA0000
	Eq_9 * ptrC000;	// C000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_9 {
	word16 w0162;	// 162
	word16 w0164;	// 164
	word16 w0166;	// 166
} Eq_9;

typedef word16 (Eq_25)(word16, byte);

typedef union Eq_36 {
	uint16 u0;
	Eq_68 Eq_9::* u1;
} Eq_36;

typedef struct Eq_40 {
	byte b0000;	// 0
} Eq_40;

typedef void (Eq_51)();

typedef void (Eq_57)(byte);

typedef void (Eq_63)(byte);

typedef struct Eq_68 {
	byte b0168;	// 168
} Eq_68;

