// subject.h
// Generated on 5/4/2015 12:12:19 AM by decompiling from_pouet.net/with_source_394/ia32_mz/subject.exe
// using Decompiler version 0.4.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_31) ptrFFFA0000) (8000 (ptr Eq_14) ptr8000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_7 (in bios_video_set_mode : ptr32)
Eq_10: (fn void (word16, word16, (ptr Eq_14), word16))
	T_10 (in bios_video_set_block_of_DAC_registers : ptr32)
	T_11 (in signature of bios_video_set_block_of_DAC_registers : void)
Eq_14: (segment "Eq_14" (FFFF99C0 (union "Eq_213" (uint16 u0) (byte u1)) uFFFF99C0) (FFFFE055 (union "Eq_213") uFFFFE055) (0 byte b0000) (5E Eq_471 t005E) (FE Eq_480 t00FE) (8C0 (arr byte) a08C0) (99C0 Eq_213 t99C0) (DB5E uint16 wDB5E) (DB60 word16 wDB60) (DB62 word16 wDB62) (DB64 uint16 wDB64) (DB66 (memptr (ptr Eq_14) Eq_480) ptrDB66) (DB68 (memptr (ptr Eq_14) Eq_471) ptrDB68) (DB6A word16 wDB6A) (DB6C (memptr (ptr Eq_14) byte) ptrDB6C) (DB6E (memptr (ptr Eq_31) byte) ptrDB6E) (DB72 word16 wDB72) (DB77 byte bDB77) (DB78 Eq_632 tDB78) (DB7B byte bDB7B) (E055 Eq_213 tE055))
	T_14 (in es : selector)
	T_18 (in 0x0800 : selector)
	T_780 (in ds : selector)
Eq_21: (segment "Eq_21")
	T_21 (in ds : (ptr Eq_21))
Eq_31: (segment "Eq_31" (FFFFD840 byte bFFFFD840) (FFFFD842 byte bFFFFD842) (FFFFD97E (union "Eq_213" (uint16 u0) (byte u1)) uFFFFD97E) (FFFFD97F (union "Eq_213") uFFFFD97F) (3200 (arr byte) a3200) (D840 byte bD840) (D842 byte bD842) (D97E Eq_213 tD97E) (D97F Eq_213 tD97F))
	T_31 (in 0xA000 : selector)
Eq_114: (segment "Eq_114")
	T_114 (in ds : (ptr Eq_114))
Eq_208: (fn void ())
	T_208 (in fn1676_0186 : ptr32)
	T_209 (in signature of fn1676_0186 : void)
	T_211 (in fn1676_0186 : ptr32)
	T_407 (in fn1676_0186 : ptr32)
Eq_213: (union "Eq_213" (uint16 u0) (byte u1))
	T_213 (in 0x0800 : word16)
	T_214 (in ax : word16)
	T_225 (in Mem0[0x0800:si + 0x0000:word16] : word16)
	T_241 (in 0x0A00 : word16)
	T_242 (in bx : word16)
	T_243 (in 0x0800 : word16)
	T_252 (in 0xA000 : word16)
	T_258 (in DPB(ax, al, 0, 8) : word16)
	T_264 (in DPB(ax, ah, 8, 8) : word16)
	T_268 (in Mem0[0x0800:si + 0x0000:byte] : byte)
	T_269 (in v14 : byte)
	T_272 (in Mem0[0xA000:di + 0x0000:byte] : byte)
	T_284 (in DPB(ax, ah, 8, 8) : word16)
	T_305 (in DPB(ax, al, 0, 8) : word16)
	T_314 (in 0x00D0 : word16)
	T_319 (in 0x00D8 : word16)
	T_324 (in 0x00E0 : word16)
	T_329 (in 0x00E8 : word16)
	T_334 (in 0x00F0 : word16)
	T_339 (in 0x00F8 : word16)
	T_344 (in 0x0100 : word16)
	T_349 (in 0x0108 : word16)
	T_354 (in 0x0110 : word16)
	T_359 (in 0x0118 : word16)
	T_364 (in 0x0120 : word16)
	T_369 (in 0x0128 : word16)
	T_374 (in 0x0130 : word16)
	T_379 (in 0x0138 : word16)
	T_381 (in ax - 0x0041 : word16)
	T_383 (in DPB(ax, ah, 8, 8) : word16)
	T_387 (in (word16) dx_ax : word16)
Eq_215: (segment "Eq_215" (DB60 word16 wDB60) (DB6A word16 wDB6A))
	T_215 (in 0x0800 : word16)
	T_216 (in ds : selector)
	T_244 (in 0x0800 : word16)
	T_391 (in ds : (ptr Eq_215))
	T_534 (in fn1676_0084() : selector)
Eq_253: (segment "Eq_253")
	T_253 (in 0xA000 : word16)
	T_254 (in es : selector)
Eq_300: (fn void ())
	T_300 (in fn1676_0287 : ptr32)
	T_301 (in signature of fn1676_0287 : void)
	T_308 (in fn1676_0287 : ptr32)
Eq_389: (fn void ((ptr Eq_215)))
	T_389 (in fn1676_0198 : ptr32)
	T_390 (in signature of fn1676_0198 : void)
	T_531 (in fn1676_0198 : ptr32)
Eq_409: (segment "Eq_409" (DB5C byte bDB5C) (DB5D byte bDB5D))
	T_409 (in ds : (ptr Eq_409))
	T_762 (in fn1676_037C(ds_21) : selector)
Eq_414: (fn void (word16, byte))
	T_414 (in __outb : ptr32)
Eq_421: (fn void (word16, byte))
	T_421 (in __outb : ptr32)
Eq_424: (fn void (word16, byte))
	T_424 (in __outb : ptr32)
Eq_427: (fn void (word16, byte))
	T_427 (in __outb : ptr32)
Eq_434: (fn void (word16, byte))
	T_434 (in __outb : ptr32)
Eq_441: (fn void (word16, byte))
	T_441 (in __outb : ptr32)
Eq_444: (fn void (word16, byte))
	T_444 (in __outb : ptr32)
Eq_447: (fn void (word16, byte))
	T_447 (in __outb : ptr32)
Eq_471: (struct "Eq_471" (FFFFD8C0 word16 wFFFFD8C0))
	T_471 (in Mem0[0x0800:0xDB68:word16] : word16)
	T_489 (in Mem14[0x0800:0xDB68:word16] : word16)
	T_490 (in 0x005E : word16)
	T_493 (in Mem14[0x0800:0xDB68:word16] : word16)
	T_495 (in Mem14[0x0800:0xDB68:word16] + 0x0001 : word16)
	T_496 (in Mem31[0x0800:0xDB68:word16] : word16)
	T_498 (in Mem31[0x0800:0xDB68:word16] : word16)
	T_500 (in Mem31[0x0800:0xDB68:word16] + 0x0001 : word16)
	T_501 (in Mem33[0x0800:0xDB68:word16] : word16)
	T_502 (in 0x0000 : word16)
	T_504 (in Mem28[0x0800:0xDB68:word16] : word16)
	T_539 (in 0x0000 : word16)
	T_541 (in Mem4[0x0800:0xDB68:word16] : word16)
Eq_480: (struct "Eq_480" (FFFFD920 word16 wFFFFD920))
	T_480 (in Mem9[0x0800:0xDB66:word16] : word16)
	T_506 (in Mem14[0x0800:0xDB66:word16] : word16)
	T_507 (in 0x00FE : word16)
	T_510 (in Mem14[0x0800:0xDB66:word16] : word16)
	T_512 (in Mem14[0x0800:0xDB66:word16] + 0x0001 : word16)
	T_513 (in Mem23[0x0800:0xDB66:word16] : word16)
	T_515 (in Mem23[0x0800:0xDB66:word16] : word16)
	T_517 (in Mem23[0x0800:0xDB66:word16] + 0x0001 : word16)
	T_518 (in Mem25[0x0800:0xDB66:word16] : word16)
	T_522 (in 0x0000 : word16)
	T_524 (in Mem21[0x0800:0xDB66:word16] : word16)
	T_536 (in 0x0000 : word16)
	T_538 (in Mem3[0x0800:0xDB66:word16] : word16)
Eq_525: (fn void ())
	T_525 (in fn1676_0061 : ptr32)
	T_526 (in signature of fn1676_0061 : void)
Eq_528: (fn void ())
	T_528 (in fn1676_006F : ptr32)
	T_529 (in signature of fn1676_006F : void)
Eq_532: (fn (ptr Eq_215) ())
	T_532 (in fn1676_0084 : ptr32)
	T_533 (in signature of fn1676_0084 : void)
Eq_542: (fn void (word16, byte))
	T_542 (in __outb : ptr32)
Eq_546: (fn void (word16, byte))
	T_546 (in __outb : ptr32)
Eq_550: (fn void (word16, byte))
	T_550 (in __outb : ptr32)
Eq_554: (fn void (word16, byte))
	T_554 (in __outb : ptr32)
Eq_558: (fn byte (word16))
	T_558 (in __inb : ptr32)
Eq_565: (fn void (word16, byte))
	T_565 (in __outb : ptr32)
Eq_570: (segment "Eq_570" (DB76 byte bDB76) (DB77 byte bDB77) (DB7C byte bDB7C))
	T_570 (in ds : (ptr Eq_570))
	T_582 (in ds : (ptr Eq_570))
	T_749 (in ds_21 : (ptr Eq_570))
	T_752 (in fn1676_0104() : selector)
Eq_573: (fn void (word16, byte))
	T_573 (in __outb : ptr32)
Eq_576: (fn void (word16, byte))
	T_576 (in __outb : ptr32)
Eq_579: (fn void (word16, byte))
	T_579 (in __outb : ptr32)
Eq_604: (fn void ((ptr Eq_570)))
	T_604 (in fn1676_036E : ptr32)
	T_605 (in signature of fn1676_036E : void)
	T_610 (in fn1676_036E : ptr32)
Eq_607: (fn (ptr Eq_609) ())
	T_607 (in fn1676_03BF : ptr32)
	T_608 (in signature of fn1676_03BF : void)
Eq_609: (segment "Eq_609")
	T_609 (in fn1676_03BF() : selector)
Eq_628: (segment "Eq_628")
	T_628 (in ds : (ptr Eq_628))
Eq_632: (union "Eq_632" (int16 u0) ((memptr (ptr Eq_14) Eq_791) u1))
	T_632 (in Mem0[0x0800:0xDB78:word16] : word16)
	T_694 (in Mem67[0x0800:0xDB78:word16] : word16)
	T_695 (in 0x04B0 : word16)
	T_703 (in Mem62[0x0800:0xDB78:word16] : word16)
	T_705 (in Mem62[0x0800:0xDB78:word16] + 0x0001 : word16)
	T_706 (in Mem64[0x0800:0xDB78:word16] : word16)
	T_707 (in 0x0000 : word16)
	T_709 (in Mem73[0x0800:0xDB78:word16] : word16)
	T_711 (in Mem67[0x0800:0xDB78:word16] : word16)
	T_713 (in Mem67[0x0800:0xDB78:word16] + 0x0001 : word16)
	T_714 (in Mem71[0x0800:0xDB78:word16] : word16)
Eq_716: (fn bool ((ptr Eq_718), word16, (ptr word16)))
	T_716 (in msdos_resize_memory_block : ptr32)
	T_717 (in signature of msdos_resize_memory_block : void)
Eq_718: (segment "Eq_718")
	T_718 (in es : selector)
	T_721 (in es : (ptr Eq_718))
Eq_725: (fn void ())
	T_725 (in fn1676_0068 : ptr32)
	T_726 (in signature of fn1676_0068 : void)
	T_737 (in fn1676_0068 : ptr32)
	T_776 (in fn1676_0068 : ptr32)
Eq_730: (fn void ())
	T_730 (in fn1676_0365 : ptr32)
	T_731 (in signature of fn1676_0365 : void)
	T_753 (in fn1676_0365 : ptr32)
Eq_739: (fn void ())
	T_739 (in fn1676_0340 : ptr32)
	T_740 (in signature of fn1676_0340 : void)
Eq_742: (fn void (byte, byte))
	T_742 (in __outb : ptr32)
Eq_746: (fn void ())
	T_746 (in fn1676_02E7 : ptr32)
	T_747 (in signature of fn1676_02E7 : void)
Eq_750: (fn (ptr Eq_570) ())
	T_750 (in fn1676_0104 : ptr32)
	T_751 (in signature of fn1676_0104 : void)
Eq_755: (fn void ())
	T_755 (in fn1676_0165 : ptr32)
	T_756 (in signature of fn1676_0165 : void)
Eq_758: (fn void ((ptr Eq_409)))
	T_758 (in fn1676_029E : ptr32)
	T_759 (in signature of fn1676_029E : void)
Eq_760: (fn (ptr Eq_409) ((ptr Eq_570)))
	T_760 (in fn1676_037C : ptr32)
	T_761 (in signature of fn1676_037C : void)
Eq_764: (fn void ())
	T_764 (in fn1676_009B : ptr32)
	T_765 (in signature of fn1676_009B : void)
Eq_767: (fn byte (byte))
	T_767 (in __inb : ptr32)
Eq_772: (fn void (byte, byte))
	T_772 (in __outb : ptr32)
Eq_778: (fn void ((ptr Eq_14), word16))
	T_778 (in msdos_display_string : ptr32)
	T_779 (in signature of msdos_display_string : void)
Eq_784: (fn void (byte))
	T_784 (in msdos_terminate : ptr32)
	T_785 (in signature of msdos_terminate : void)
Eq_791: (struct "Eq_791" (FFFFDB7D word16 wFFFFDB7D))
	T_791
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
T_7: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_9 (T_8)))
T_8: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_9: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_10: (in bios_video_set_block_of_DAC_registers : ptr32)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (fn T_20 (T_16, T_17, T_18, T_19)))
T_11: (in signature of bios_video_set_block_of_DAC_registers : void)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: 
T_12: (in bx : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in cx : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in es : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_15: (in dx : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in 0x0000 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_17: (in 0x00FF : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_18: (in 0x0800 : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment (8C0 (arr byte) a08C0) (DB5E T_69 tDB5E) (DB60 T_248 tDB60) (DB62 T_45 tDB62) (DB64 T_49 tDB64) (DB66 T_480 tDB66) (DB68 T_471 tDB68) (DB6A T_221 tDB6A) (DB6C T_43 tDB6C) (DB6E T_56 tDB6E) (DB72 T_521 tDB72) (DB77 T_692 tDB77) (DB78 T_632 tDB78) (DB7B T_650 tDB7B)))
T_19: (in 0xD5C0 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_20: (in bios_video_set_block_of_DAC_registers(0x0000, 0x00FF, 0x0800, 0xD5C0) : void)
  Class: Eq_20
  DataType: void
  OrigDataType: void
T_21: (in ds : (ptr Eq_21))
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (segment))
T_22: (in si_10 : (memptr (ptr Eq_14) byte))
  Class: Eq_22
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_18 (struct 0001 (0 T_30 t0000)))
T_23: (in 0x08C0 : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_24: (in di_11 : (memptr (ptr Eq_31) byte))
  Class: Eq_24
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: (memptr T_31 (struct 0001 (0 T_34 t0000)))
T_25: (in 0x3200 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_26: (in cx_12 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x9100 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_28: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in si_10 + 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in Mem0[0x0800:si_10 + 0x0000:byte] : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in 0xA000 : selector)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (segment (3200 (arr T_790) a3200)))
T_32: (in 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in di_11 + 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem15[0xA000:di_11 + 0x0000:byte] : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in si_10 + 0x0001 : word16)
  Class: Eq_22
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_37: (in 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in di_11 + 0x0001 : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in cx_12 - 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_41: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_42: (in cx_12 == 0x0000 : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in bx_12 : (memptr (ptr Eq_14) byte))
  Class: Eq_43
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_44: (in 0xDB62 : word16)
  Class: Eq_44
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_18 (struct (0 T_45 t0000)))
T_45: (in Mem0[0x0800:0xDB62:word16] : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 0x08C0 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in 0x0800->wDB62 + 0x08C0 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in 0xDB64 : word16)
  Class: Eq_48
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_49 t0000)))
T_49: (in Mem0[0x0800:0xDB64:word16] : word16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: word16
T_50: (in 0x0028 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in 0x0800->wDB64 - 0x0028 : word16)
  Class: Eq_51
  DataType: uint16
  OrigDataType: uint16
T_52: (in 0x0140 : word16)
  Class: Eq_52
  DataType: uint16
  OrigDataType: uint16
T_53: (in (0x0800->wDB64 - 0x0028) *u 0x0140 : uint32)
  Class: Eq_53
  DataType: uint32
  OrigDataType: uint32
T_54: (in (word16) ((0x0800->wDB64 - 0x0028) *u 0x0140) : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in 0x0800->wDB62 + 0x08C0 + (word16) ((0x0800->wDB64 - 0x0028) *u 0x0140) : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_56: (in bx_21 : (memptr (ptr Eq_31) byte))
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_57: (in 0xDB62 : word16)
  Class: Eq_57
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_18 (struct (0 T_58 t0000)))
T_58: (in Mem0[0x0800:0xDB62:word16] : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_59: (in 0xDB64 : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_60 t0000)))
T_60: (in Mem0[0x0800:0xDB64:word16] : word16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: uint16
T_61: (in 0x0140 : word16)
  Class: Eq_61
  DataType: uint16
  OrigDataType: uint16
T_62: (in 0x0800->wDB64 *u 0x0140 : uint32)
  Class: Eq_62
  DataType: uint32
  OrigDataType: uint32
T_63: (in (word16) (0x0800->wDB64 *u 0x0140) : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in 0x0800->wDB62 + (word16) (0x0800->wDB64 *u 0x0140) : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_65: (in 0xDB6C : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) byte))
  OrigDataType: (memptr T_18 (struct (0 T_66 t0000)))
T_66: (in Mem24[0x0800:0xDB6C:word16] : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_67: (in 0xDB6E : word16)
  Class: Eq_67
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_31) byte))
  OrigDataType: (memptr T_18 (struct (0 T_68 t0000)))
T_68: (in Mem25[0x0800:0xDB6E:word16] : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_69: (in 0x0000 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_70: (in 0xDB5E : word16)
  Class: Eq_70
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_71 t0000)))
T_71: (in Mem26[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_72: (in si_13 : (memptr (ptr Eq_14) byte))
  Class: Eq_43
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_18 (struct 0001 (0 T_97 t0000)))
T_73: (in di_23 : (memptr (ptr Eq_31) byte))
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: (memptr T_31 (struct 0001 (0 T_100 t0000)))
T_74: (in 0xDB5E : word16)
  Class: Eq_74
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_69 t0000)))
T_75: (in Mem26[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_76: (in 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0800->wDB5E + 0x0001 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_78: (in Mem45[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_79: (in ax_49 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in 0xDB5E : word16)
  Class: Eq_80
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_81 t0000)))
T_81: (in Mem45[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: uint16
T_82: (in 0x0140 : word16)
  Class: Eq_82
  DataType: uint16
  OrigDataType: uint16
T_83: (in 0x0800->wDB5E *u 0x0140 : uint32)
  Class: Eq_83
  DataType: uint32
  OrigDataType: uint32
T_84: (in (word16) (0x0800->wDB5E *u 0x0140) : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_85: (in 0xDB6C : word16)
  Class: Eq_85
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) byte))
  OrigDataType: (memptr T_18 (struct (0 T_86 t0000)))
T_86: (in Mem45[0x0800:0xDB6C:word16] : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_87: (in Mem45[0x0800:0xDB6C:word16] + ax_49 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_88: (in 0xDB6E : word16)
  Class: Eq_88
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_31) byte))
  OrigDataType: (memptr T_18 (struct (0 T_89 t0000)))
T_89: (in Mem45[0x0800:0xDB6E:word16] : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_90: (in Mem45[0x0800:0xDB6E:word16] + ax_49 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_91: (in 0xDB5E : word16)
  Class: Eq_91
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_92 t0000)))
T_92: (in Mem45[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_93: (in 0x0006 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_94: (in 0x0800->wDB5E != 0x0006 : bool)
  Class: Eq_94
  DataType: bool
  OrigDataType: bool
T_95: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in si_13 + 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in Mem26[0x0800:si_13 + 0x0000:byte] : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in 0x0000 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_23 + 0x0000 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in Mem40[0xA000:di_23 + 0x0000:byte] : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_101: (in 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in si_13 + 0x0001 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_103: (in 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in di_23 + 0x0001 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_105: (in cx_35 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in 0x0001 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in cx_35 - 0x0001 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_108: (in 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_109: (in cx_35 == 0x0000 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in 0x0039 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_111: (in 0x0000 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_112: (in 0xDB5E : word16)
  Class: Eq_112
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_113 t0000)))
T_113: (in Mem56[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_114: (in ds : (ptr Eq_114))
  Class: Eq_114
  DataType: (ptr Eq_114)
  OrigDataType: (ptr (segment))
T_115: (in bx_13 : (memptr (ptr Eq_31) byte))
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_116: (in 0xDB62 : word16)
  Class: Eq_116
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_18 (struct (0 T_117 t0000)))
T_117: (in Mem0[0x0800:0xDB62:word16] : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_118: (in 0xDB64 : word16)
  Class: Eq_118
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_119 t0000)))
T_119: (in Mem0[0x0800:0xDB64:word16] : word16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: uint16
T_120: (in 0x0140 : word16)
  Class: Eq_120
  DataType: uint16
  OrigDataType: uint16
T_121: (in 0x0800->wDB64 *u 0x0140 : uint32)
  Class: Eq_121
  DataType: uint32
  OrigDataType: uint32
T_122: (in (word16) (0x0800->wDB64 *u 0x0140) : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in 0x0800->wDB62 + (word16) (0x0800->wDB64 *u 0x0140) : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_124: (in 0x0000 : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_125: (in 0xDB6C : word16)
  Class: Eq_125
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) byte))
  OrigDataType: (memptr T_18 (struct (0 T_126 t0000)))
T_126: (in Mem16[0x0800:0xDB6C:word16] : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_127: (in 0xDB6E : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_31) byte))
  OrigDataType: (memptr T_18 (struct (0 T_128 t0000)))
T_128: (in Mem17[0x0800:0xDB6E:word16] : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_129: (in 0x0000 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_130: (in 0xDB5E : word16)
  Class: Eq_130
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_131 t0000)))
T_131: (in Mem18[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_132: (in si_27 : (memptr (ptr Eq_14) byte))
  Class: Eq_132
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_18 (struct 0001 (0 T_150 t0000)))
T_133: (in 0x0000 : word16)
  Class: Eq_132
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_134: (in di_15 : (memptr (ptr Eq_31) byte))
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: (memptr T_31 (struct 0001 (0 T_147 t0000)))
T_135: (in 0x0001 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in si_27 + 0x0001 : word16)
  Class: Eq_132
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_137: (in 0x0001 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in di_15 + 0x0001 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_139: (in cx_31 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in 0x0001 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in cx_31 - 0x0001 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_142: (in 0x0000 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_143: (in cx_31 != 0x0000 : bool)
  Class: Eq_143
  DataType: bool
  OrigDataType: bool
T_144: (in al_38 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_145: (in 0x0000 : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in di_15 + 0x0000 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in Mem60[0xA000:di_15 + 0x0000:byte] : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_148: (in 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in si_27 + 0x0000 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in Mem18[0x0800:si_27 + 0x0000:byte] : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_151: (in 0x00 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_152: (in al_38 == 0x00 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in 0xDB5E : word16)
  Class: Eq_153
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_69 t0000)))
T_154: (in Mem18[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_155: (in 0x0001 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in 0x0800->wDB5E + 0x0001 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_157: (in Mem48[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_158: (in ax_52 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in 0xDB5E : word16)
  Class: Eq_159
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_160 t0000)))
T_160: (in Mem48[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: uint16
T_161: (in 0x0140 : word16)
  Class: Eq_161
  DataType: uint16
  OrigDataType: uint16
T_162: (in 0x0800->wDB5E *u 0x0140 : uint32)
  Class: Eq_162
  DataType: uint32
  OrigDataType: uint32
T_163: (in (word16) (0x0800->wDB5E *u 0x0140) : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_164: (in 0xDB6C : word16)
  Class: Eq_164
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) byte))
  OrigDataType: (memptr T_18 (struct (0 T_165 t0000)))
T_165: (in Mem48[0x0800:0xDB6C:word16] : word16)
  Class: Eq_43
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_166: (in Mem48[0x0800:0xDB6C:word16] + ax_52 : word16)
  Class: Eq_132
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_167: (in 0xDB6E : word16)
  Class: Eq_167
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_31) byte))
  OrigDataType: (memptr T_18 (struct (0 T_168 t0000)))
T_168: (in Mem48[0x0800:0xDB6E:word16] : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_169: (in Mem48[0x0800:0xDB6E:word16] + ax_52 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_170: (in 0xDB5E : word16)
  Class: Eq_170
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_171 t0000)))
T_171: (in Mem48[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_172: (in 0x0006 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_173: (in 0x0800->wDB5E != 0x0006 : bool)
  Class: Eq_173
  DataType: bool
  OrigDataType: bool
T_174: (in 0x0039 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_175: (in 0x0000 : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_176: (in 0xDB5E : word16)
  Class: Eq_176
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_177 t0000)))
T_177: (in Mem59[0x0800:0xDB5E:word16] : word16)
  Class: Eq_69
  DataType: uint16
  OrigDataType: word16
T_178: (in di_21 : (memptr (ptr Eq_31) byte))
  Class: Eq_178
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: (memptr T_31 (struct 0001 (0 T_197 t0000)))
T_179: (in 0xD840 : word16)
  Class: Eq_178
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_180: (in si_20 : (memptr (ptr Eq_31) byte))
  Class: Eq_180
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: (memptr T_31 (struct 0001 (0 T_194 t0000)))
T_181: (in 0xD842 : word16)
  Class: Eq_180
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_182: (in ah_11 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_183: (in 0x08 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_184: (in 0x0002 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in di_21 + 0x0002 : word16)
  Class: Eq_178
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_186: (in 0x0002 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in si_20 + 0x0002 : word16)
  Class: Eq_180
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_188: (in 0x01 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in ah_11 - 0x01 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_190: (in 0x00 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_191: (in ah_11 != 0x00 : bool)
  Class: Eq_191
  DataType: bool
  OrigDataType: bool
T_192: (in 0x0000 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in si_20 + 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem0[0xA000:si_20 + 0x0000:byte] : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_195: (in 0x0000 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in di_21 + 0x0000 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in Mem28[0xA000:di_21 + 0x0000:byte] : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_198: (in 0x0001 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in si_20 + 0x0001 : word16)
  Class: Eq_180
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_200: (in 0x0001 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in di_21 + 0x0001 : word16)
  Class: Eq_178
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_202: (in cx_22 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in 0x0001 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in cx_22 - 0x0001 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_205: (in 0x0000 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_206: (in cx_22 == 0x0000 : bool)
  Class: Eq_206
  DataType: bool
  OrigDataType: bool
T_207: (in 0x013E : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_208: (in fn1676_0186 : ptr32)
  Class: Eq_208
  DataType: (ptr Eq_208)
  OrigDataType: (ptr (fn T_210 ()))
T_209: (in signature of fn1676_0186 : void)
  Class: Eq_208
  DataType: (ptr Eq_208)
  OrigDataType: 
T_210: (in fn1676_0186() : void)
  Class: Eq_210
  DataType: void
  OrigDataType: void
T_211: (in fn1676_0186 : ptr32)
  Class: Eq_208
  DataType: (ptr Eq_208)
  OrigDataType: (ptr (fn T_212 ()))
T_212: (in fn1676_0186() : void)
  Class: Eq_210
  DataType: void
  OrigDataType: void
T_213: (in 0x0800 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_214: (in ax : word16)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: uint16
T_215: (in 0x0800 : word16)
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: word16
T_216: (in ds : selector)
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: (ptr (segment))
T_217: (in 0xE055 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: word16
T_218: (in si : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: (memptr T_18 (struct (0 T_213 t0000)))
T_219: (in 0xE055 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in 0xDB6A : word16)
  Class: Eq_220
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_18 (struct (0 T_221 t0000)))
T_221: (in Mem0[0x0800:0xDB6A:word16] : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in 0xE055 + 0x0800->wDB6A : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: word16
T_223: (in 0x0000 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in si + 0x0000 : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in Mem0[0x0800:si + 0x0000:word16] : word16)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: word16
T_226: (in dx : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in SEQ(dx, ax) : word32)
  Class: Eq_227
  DataType: uint32
  OrigDataType: word32
T_228: (in dx_ax : word32)
  Class: Eq_227
  DataType: uint32
  OrigDataType: uint32
T_229: (in (byte) ax : byte)
  Class: Eq_229
  DataType: byte
  OrigDataType: byte
T_230: (in al : byte)
  Class: Eq_229
  DataType: byte
  OrigDataType: byte
T_231: (in 0x00 : byte)
  Class: Eq_231
  DataType: byte
  OrigDataType: byte
T_232: (in al - 0x00 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_233: (in cond(al - 0x00) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_234: (in SCZO : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_235: (in Z : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_236: (in Test(NE,Z) : bool)
  Class: Eq_236
  DataType: bool
  OrigDataType: bool
T_237: (in 0x20 : byte)
  Class: Eq_237
  DataType: byte
  OrigDataType: byte
T_238: (in al - 0x20 : byte)
  Class: Eq_238
  DataType: byte
  OrigDataType: byte
T_239: (in cond(al - 0x20) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_240: (in Test(NE,Z) : bool)
  Class: Eq_240
  DataType: bool
  OrigDataType: bool
T_241: (in 0x0A00 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_242: (in bx : word16)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: uint16
T_243: (in 0x0800 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_244: (in 0x0800 : word16)
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: word16
T_245: (in 0x99C0 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: word16
T_246: (in 0x99C0 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_247: (in 0xDB60 : word16)
  Class: Eq_247
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_18 (struct (0 T_248 t0000)))
T_248: (in Mem0[0x0800:0xDB60:word16] : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in 0x99C0 + 0x0800->wDB60 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: word16
T_250: (in si + bx : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: word16
T_251: (in cond(si) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_252: (in 0xA000 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_253: (in 0xA000 : word16)
  Class: Eq_253
  DataType: (ptr Eq_253)
  OrigDataType: word16
T_254: (in es : selector)
  Class: Eq_253
  DataType: (ptr Eq_253)
  OrigDataType: (ptr (segment))
T_255: (in 0xD97E : word16)
  Class: Eq_255
  DataType: (memptr (ptr Eq_31) Eq_213)
  OrigDataType: word16
T_256: (in di : word16)
  Class: Eq_255
  DataType: (memptr (ptr Eq_31) Eq_213)
  OrigDataType: (memptr T_31 (struct (0 T_272 t0000)))
T_257: (in 0x00 : byte)
  Class: Eq_229
  DataType: byte
  OrigDataType: byte
T_258: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: word16
T_259: (in cx : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: (memptr T_18 (struct (0 T_225 t0000)))
T_260: (in 0xD97E : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_261: (in SEQ(dx, ax) : word32)
  Class: Eq_227
  DataType: uint32
  OrigDataType: word32
T_262: (in 0x08 : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_263: (in ah : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_264: (in DPB(ax, ah, 8, 8) : word16)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: word16
T_265: (in DPB(dx_ax, ah, 8, 8) : word32)
  Class: Eq_227
  DataType: uint32
  OrigDataType: word32
T_266: (in 0x0000 : word16)
  Class: Eq_266
  DataType: word16
  OrigDataType: word16
T_267: (in si + 0x0000 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in Mem0[0x0800:si + 0x0000:byte] : byte)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: byte
T_269: (in v14 : byte)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: byte
T_270: (in 0x0000 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in di + 0x0000 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_272: (in Mem0[0xA000:di + 0x0000:byte] : byte)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: byte
T_273: (in 0x0001 : word16)
  Class: Eq_273
  DataType: word16
  OrigDataType: word16
T_274: (in si + 0x0001 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: word16
T_275: (in 0x0001 : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_276: (in di + 0x0001 : word16)
  Class: Eq_255
  DataType: (memptr (ptr Eq_31) Eq_213)
  OrigDataType: word16
T_277: (in 0x013F : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in si + 0x013F : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: word16
T_279: (in 0x013F : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in di + 0x013F : word16)
  Class: Eq_255
  DataType: (memptr (ptr Eq_31) Eq_213)
  OrigDataType: word16
T_281: (in cond(di) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_282: (in 0x01 : byte)
  Class: Eq_282
  DataType: byte
  OrigDataType: byte
T_283: (in ah - 0x01 : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_284: (in DPB(ax, ah, 8, 8) : word16)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: word16
T_285: (in DPB(dx_ax, ah, 8, 8) : word32)
  Class: Eq_227
  DataType: uint32
  OrigDataType: word32
T_286: (in cond(ah) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_287: (in SZO : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_288: (in Test(NE,Z) : bool)
  Class: Eq_288
  DataType: bool
  OrigDataType: bool
T_289: (in 0xD97E : word16)
  Class: Eq_255
  DataType: (memptr (ptr Eq_31) Eq_213)
  OrigDataType: word16
T_290: (in 0x0001 : word16)
  Class: Eq_290
  DataType: word16
  OrigDataType: word16
T_291: (in si + 0x0001 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: word16
T_292: (in 0xD97F : word16)
  Class: Eq_255
  DataType: (memptr (ptr Eq_31) Eq_213)
  OrigDataType: word16
T_293: (in 0x01 : byte)
  Class: Eq_293
  DataType: byte
  OrigDataType: byte
T_294: (in al - 0x01 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_295: (in cond(al - 0x01) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_296: (in Test(EQ,Z) : bool)
  Class: Eq_296
  DataType: bool
  OrigDataType: bool
T_297: (in 0x0001 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_298: (in si + 0x0001 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_14) Eq_213)
  OrigDataType: word16
T_299: (in cond(si) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_300: (in fn1676_0287 : ptr32)
  Class: Eq_300
  DataType: (ptr Eq_300)
  OrigDataType: (ptr (fn T_302 ()))
T_301: (in signature of fn1676_0287 : void)
  Class: Eq_300
  DataType: (ptr Eq_300)
  OrigDataType: 
T_302: (in fn1676_0287() : void)
  Class: Eq_302
  DataType: void
  OrigDataType: void
T_303: (in 0x01 : byte)
  Class: Eq_303
  DataType: byte
  OrigDataType: byte
T_304: (in al + 0x01 : byte)
  Class: Eq_229
  DataType: byte
  OrigDataType: byte
T_305: (in DPB(ax, al, 0, 8) : word16)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: word16
T_306: (in DPB(dx_ax, al, 0, 8) : word32)
  Class: Eq_227
  DataType: uint32
  OrigDataType: word32
T_307: (in cond(al) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_308: (in fn1676_0287 : ptr32)
  Class: Eq_300
  DataType: (ptr Eq_300)
  OrigDataType: (ptr (fn T_309 ()))
T_309: (in fn1676_0287() : void)
  Class: Eq_302
  DataType: void
  OrigDataType: void
T_310: (in 0x30 : byte)
  Class: Eq_310
  DataType: byte
  OrigDataType: byte
T_311: (in al - 0x30 : byte)
  Class: Eq_311
  DataType: byte
  OrigDataType: byte
T_312: (in cond(al - 0x30) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_313: (in Test(NE,Z) : bool)
  Class: Eq_313
  DataType: bool
  OrigDataType: bool
T_314: (in 0x00D0 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_315: (in 0x31 : byte)
  Class: Eq_315
  DataType: byte
  OrigDataType: byte
T_316: (in al - 0x31 : byte)
  Class: Eq_316
  DataType: byte
  OrigDataType: byte
T_317: (in cond(al - 0x31) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_318: (in Test(NE,Z) : bool)
  Class: Eq_318
  DataType: bool
  OrigDataType: bool
T_319: (in 0x00D8 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_320: (in 0x32 : byte)
  Class: Eq_320
  DataType: byte
  OrigDataType: byte
T_321: (in al - 0x32 : byte)
  Class: Eq_321
  DataType: byte
  OrigDataType: byte
T_322: (in cond(al - 0x32) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_323: (in Test(NE,Z) : bool)
  Class: Eq_323
  DataType: bool
  OrigDataType: bool
T_324: (in 0x00E0 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_325: (in 0x33 : byte)
  Class: Eq_325
  DataType: byte
  OrigDataType: byte
T_326: (in al - 0x33 : byte)
  Class: Eq_326
  DataType: byte
  OrigDataType: byte
T_327: (in cond(al - 0x33) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_328: (in Test(NE,Z) : bool)
  Class: Eq_328
  DataType: bool
  OrigDataType: bool
T_329: (in 0x00E8 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_330: (in 0x34 : byte)
  Class: Eq_330
  DataType: byte
  OrigDataType: byte
T_331: (in al - 0x34 : byte)
  Class: Eq_331
  DataType: byte
  OrigDataType: byte
T_332: (in cond(al - 0x34) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_333: (in Test(NE,Z) : bool)
  Class: Eq_333
  DataType: bool
  OrigDataType: bool
T_334: (in 0x00F0 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_335: (in 0x35 : byte)
  Class: Eq_335
  DataType: byte
  OrigDataType: byte
T_336: (in al - 0x35 : byte)
  Class: Eq_336
  DataType: byte
  OrigDataType: byte
T_337: (in cond(al - 0x35) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_338: (in Test(NE,Z) : bool)
  Class: Eq_338
  DataType: bool
  OrigDataType: bool
T_339: (in 0x00F8 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_340: (in 0x36 : byte)
  Class: Eq_340
  DataType: byte
  OrigDataType: byte
T_341: (in al - 0x36 : byte)
  Class: Eq_341
  DataType: byte
  OrigDataType: byte
T_342: (in cond(al - 0x36) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_343: (in Test(NE,Z) : bool)
  Class: Eq_343
  DataType: bool
  OrigDataType: bool
T_344: (in 0x0100 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_345: (in 0x37 : byte)
  Class: Eq_345
  DataType: byte
  OrigDataType: byte
T_346: (in al - 0x37 : byte)
  Class: Eq_346
  DataType: byte
  OrigDataType: byte
T_347: (in cond(al - 0x37) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_348: (in Test(NE,Z) : bool)
  Class: Eq_348
  DataType: bool
  OrigDataType: bool
T_349: (in 0x0108 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_350: (in 0x38 : byte)
  Class: Eq_350
  DataType: byte
  OrigDataType: byte
T_351: (in al - 0x38 : byte)
  Class: Eq_351
  DataType: byte
  OrigDataType: byte
T_352: (in cond(al - 0x38) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_353: (in Test(NE,Z) : bool)
  Class: Eq_353
  DataType: bool
  OrigDataType: bool
T_354: (in 0x0110 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_355: (in 0x39 : byte)
  Class: Eq_355
  DataType: byte
  OrigDataType: byte
T_356: (in al - 0x39 : byte)
  Class: Eq_356
  DataType: byte
  OrigDataType: byte
T_357: (in cond(al - 0x39) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_358: (in Test(NE,Z) : bool)
  Class: Eq_358
  DataType: bool
  OrigDataType: bool
T_359: (in 0x0118 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_360: (in 0x3F : byte)
  Class: Eq_360
  DataType: byte
  OrigDataType: byte
T_361: (in al - 0x3F : byte)
  Class: Eq_361
  DataType: byte
  OrigDataType: byte
T_362: (in cond(al - 0x3F) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_363: (in Test(NE,Z) : bool)
  Class: Eq_363
  DataType: bool
  OrigDataType: bool
T_364: (in 0x0120 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_365: (in 0x21 : byte)
  Class: Eq_365
  DataType: byte
  OrigDataType: byte
T_366: (in al - 0x21 : byte)
  Class: Eq_366
  DataType: byte
  OrigDataType: byte
T_367: (in cond(al - 0x21) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_368: (in Test(NE,Z) : bool)
  Class: Eq_368
  DataType: bool
  OrigDataType: bool
T_369: (in 0x0128 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_370: (in 0x2E : byte)
  Class: Eq_370
  DataType: byte
  OrigDataType: byte
T_371: (in al - 0x2E : byte)
  Class: Eq_371
  DataType: byte
  OrigDataType: byte
T_372: (in cond(al - 0x2E) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_373: (in Test(NE,Z) : bool)
  Class: Eq_373
  DataType: bool
  OrigDataType: bool
T_374: (in 0x0130 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_375: (in 0x2C : byte)
  Class: Eq_375
  DataType: byte
  OrigDataType: byte
T_376: (in al - 0x2C : byte)
  Class: Eq_376
  DataType: byte
  OrigDataType: byte
T_377: (in cond(al - 0x2C) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_378: (in Test(NE,Z) : bool)
  Class: Eq_378
  DataType: bool
  OrigDataType: bool
T_379: (in 0x0138 : word16)
  Class: Eq_213
  DataType: uint16
  OrigDataType: word16
T_380: (in 0x0041 : word16)
  Class: Eq_380
  DataType: word16
  OrigDataType: word16
T_381: (in ax - 0x0041 : word16)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: word16
T_382: (in 0x00 : byte)
  Class: Eq_262
  DataType: byte
  OrigDataType: byte
T_383: (in DPB(ax, ah, 8, 8) : word16)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: word16
T_384: (in 0x0008 : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_385: (in 0x0008 : word16)
  Class: Eq_385
  DataType: uint16
  OrigDataType: uint16
T_386: (in 0x0008 *u ax : uint32)
  Class: Eq_227
  DataType: uint32
  OrigDataType: uint32
T_387: (in (word16) dx_ax : word16)
  Class: Eq_213
  DataType: Eq_213
  OrigDataType: word16
T_388: (in cond(dx_ax) : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_389: (in fn1676_0198 : ptr32)
  Class: Eq_389
  DataType: (ptr Eq_389)
  OrigDataType: (ptr (fn T_392 (T_216)))
T_390: (in signature of fn1676_0198 : void)
  Class: Eq_389
  DataType: (ptr Eq_389)
  OrigDataType: 
T_391: (in ds : (ptr Eq_215))
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: (ptr (segment (DB60 word16 wDB60) (DB6A T_398 tDB6A)))
T_392: (in fn1676_0198(ds) : void)
  Class: Eq_392
  DataType: void
  OrigDataType: void
T_393: (in fp : ptr16)
  Class: Eq_393
  DataType: ptr16
  OrigDataType: ptr16
T_394: (in sp : word16)
  Class: Eq_393
  DataType: ptr16
  OrigDataType: ptr16
T_395: (in 0x0000 : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_396: (in 0xDB60 : word16)
  Class: Eq_396
  DataType: (memptr (ptr Eq_215) word16)
  OrigDataType: (memptr T_391 (struct (0 T_397 t0000)))
T_397: (in Mem0[ds:0xDB60:word16] : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_398: (in 0x0000 : word16)
  Class: Eq_398
  DataType: word16
  OrigDataType: word16
T_399: (in 0xDB6A : word16)
  Class: Eq_399
  DataType: (memptr (ptr Eq_215) word16)
  OrigDataType: (memptr T_391 (struct (0 T_400 t0000)))
T_400: (in Mem0[ds:0xDB6A:word16] : word16)
  Class: Eq_398
  DataType: word16
  OrigDataType: word16
T_401: (in 0x0000 : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_402: (in 0xDB60 : word16)
  Class: Eq_402
  DataType: (memptr (ptr Eq_215) word16)
  OrigDataType: (memptr T_391 (struct (0 T_403 t0000)))
T_403: (in Mem0[ds:0xDB60:word16] : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_404: (in 0x0000 : word16)
  Class: Eq_398
  DataType: word16
  OrigDataType: word16
T_405: (in 0xDB6A : word16)
  Class: Eq_405
  DataType: (memptr (ptr Eq_215) word16)
  OrigDataType: (memptr T_391 (struct (0 T_406 t0000)))
T_406: (in Mem0[ds:0xDB6A:word16] : word16)
  Class: Eq_398
  DataType: word16
  OrigDataType: word16
T_407: (in fn1676_0186 : ptr32)
  Class: Eq_208
  DataType: (ptr Eq_208)
  OrigDataType: (ptr (fn T_408 ()))
T_408: (in fn1676_0186() : void)
  Class: Eq_210
  DataType: void
  OrigDataType: void
T_409: (in ds : (ptr Eq_409))
  Class: Eq_409
  DataType: (ptr Eq_409)
  OrigDataType: (ptr (segment (DB5C T_418 tDB5C) (DB5D T_411 tDB5D)))
T_410: (in 0xDB5D : word16)
  Class: Eq_410
  DataType: (memptr (ptr Eq_409) byte)
  OrigDataType: (memptr T_409 (struct (0 T_411 t0000)))
T_411: (in Mem0[ds:0xDB5D:byte] : byte)
  Class: Eq_411
  DataType: byte
  OrigDataType: byte
T_412: (in 0x01 : byte)
  Class: Eq_411
  DataType: byte
  OrigDataType: byte
T_413: (in ds->bDB5D == 0x01 : bool)
  Class: Eq_413
  DataType: bool
  OrigDataType: bool
T_414: (in __outb : ptr32)
  Class: Eq_414
  DataType: (ptr Eq_414)
  OrigDataType: (ptr (fn T_417 (T_415, T_416)))
T_415: (in 0x03C8 : word16)
  Class: Eq_415
  DataType: word16
  OrigDataType: word16
T_416: (in 0xFE : byte)
  Class: Eq_416
  DataType: byte
  OrigDataType: byte
T_417: (in __outb(0x03C8, 0xFE) : void)
  Class: Eq_417
  DataType: void
  OrigDataType: void
T_418: (in al_28 : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_419: (in 0xDB5C : word16)
  Class: Eq_419
  DataType: (memptr (ptr Eq_409) byte)
  OrigDataType: (memptr T_409 (struct (0 T_420 t0000)))
T_420: (in Mem0[ds:0xDB5C:byte] : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_421: (in __outb : ptr32)
  Class: Eq_421
  DataType: (ptr Eq_421)
  OrigDataType: (ptr (fn T_423 (T_422, T_418)))
T_422: (in 0x03C9 : word16)
  Class: Eq_422
  DataType: word16
  OrigDataType: word16
T_423: (in __outb(0x03C9, al_28) : void)
  Class: Eq_423
  DataType: void
  OrigDataType: void
T_424: (in __outb : ptr32)
  Class: Eq_424
  DataType: (ptr Eq_424)
  OrigDataType: (ptr (fn T_426 (T_425, T_418)))
T_425: (in 0x03C9 : word16)
  Class: Eq_425
  DataType: word16
  OrigDataType: word16
T_426: (in __outb(0x03C9, al_28) : void)
  Class: Eq_426
  DataType: void
  OrigDataType: void
T_427: (in __outb : ptr32)
  Class: Eq_427
  DataType: (ptr Eq_427)
  OrigDataType: (ptr (fn T_429 (T_428, T_418)))
T_428: (in 0x03C9 : word16)
  Class: Eq_428
  DataType: word16
  OrigDataType: word16
T_429: (in __outb(0x03C9, al_28) : void)
  Class: Eq_429
  DataType: void
  OrigDataType: void
T_430: (in 0xDB5C : word16)
  Class: Eq_430
  DataType: (memptr (ptr Eq_409) byte)
  OrigDataType: (memptr T_409 (struct (0 T_431 t0000)))
T_431: (in Mem0[ds:0xDB5C:byte] : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_432: (in 0x0F : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_433: (in ds->bDB5C == 0x0F : bool)
  Class: Eq_433
  DataType: bool
  OrigDataType: bool
T_434: (in __outb : ptr32)
  Class: Eq_434
  DataType: (ptr Eq_434)
  OrigDataType: (ptr (fn T_437 (T_435, T_436)))
T_435: (in 0x03C8 : word16)
  Class: Eq_435
  DataType: word16
  OrigDataType: word16
T_436: (in 0xFE : byte)
  Class: Eq_436
  DataType: byte
  OrigDataType: byte
T_437: (in __outb(0x03C8, 0xFE) : void)
  Class: Eq_437
  DataType: void
  OrigDataType: void
T_438: (in al_18 : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_439: (in 0xDB5C : word16)
  Class: Eq_439
  DataType: (memptr (ptr Eq_409) byte)
  OrigDataType: (memptr T_409 (struct (0 T_440 t0000)))
T_440: (in Mem0[ds:0xDB5C:byte] : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_441: (in __outb : ptr32)
  Class: Eq_441
  DataType: (ptr Eq_441)
  OrigDataType: (ptr (fn T_443 (T_442, T_438)))
T_442: (in 0x03C9 : word16)
  Class: Eq_442
  DataType: word16
  OrigDataType: word16
T_443: (in __outb(0x03C9, al_18) : void)
  Class: Eq_443
  DataType: void
  OrigDataType: void
T_444: (in __outb : ptr32)
  Class: Eq_444
  DataType: (ptr Eq_444)
  OrigDataType: (ptr (fn T_446 (T_445, T_438)))
T_445: (in 0x03C9 : word16)
  Class: Eq_445
  DataType: word16
  OrigDataType: word16
T_446: (in __outb(0x03C9, al_18) : void)
  Class: Eq_446
  DataType: void
  OrigDataType: void
T_447: (in __outb : ptr32)
  Class: Eq_447
  DataType: (ptr Eq_447)
  OrigDataType: (ptr (fn T_449 (T_448, T_438)))
T_448: (in 0x03C9 : word16)
  Class: Eq_448
  DataType: word16
  OrigDataType: word16
T_449: (in __outb(0x03C9, al_18) : void)
  Class: Eq_449
  DataType: void
  OrigDataType: void
T_450: (in 0xDB5C : word16)
  Class: Eq_450
  DataType: (memptr (ptr Eq_409) byte)
  OrigDataType: (memptr T_409 (struct (0 T_451 t0000)))
T_451: (in Mem0[ds:0xDB5C:byte] : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_452: (in 0x3F : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_453: (in ds->bDB5C == 0x3F : bool)
  Class: Eq_453
  DataType: bool
  OrigDataType: bool
T_454: (in 0x01 : byte)
  Class: Eq_411
  DataType: byte
  OrigDataType: byte
T_455: (in 0xDB5D : word16)
  Class: Eq_455
  DataType: (memptr (ptr Eq_409) byte)
  OrigDataType: (memptr T_409 (struct (0 T_456 t0000)))
T_456: (in Mem24[ds:0xDB5D:byte] : byte)
  Class: Eq_411
  DataType: byte
  OrigDataType: byte
T_457: (in 0xDB5C : word16)
  Class: Eq_457
  DataType: (memptr (ptr Eq_409) byte)
  OrigDataType: (memptr T_409 (struct (0 T_418 t0000)))
T_458: (in Mem0[ds:0xDB5C:byte] : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_459: (in 0x01 : byte)
  Class: Eq_459
  DataType: byte
  OrigDataType: byte
T_460: (in ds->bDB5C + 0x01 : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_461: (in Mem22[ds:0xDB5C:byte] : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_462: (in 0x00 : byte)
  Class: Eq_411
  DataType: byte
  OrigDataType: byte
T_463: (in 0xDB5D : word16)
  Class: Eq_463
  DataType: (memptr (ptr Eq_409) byte)
  OrigDataType: (memptr T_409 (struct (0 T_464 t0000)))
T_464: (in Mem34[ds:0xDB5D:byte] : byte)
  Class: Eq_411
  DataType: byte
  OrigDataType: byte
T_465: (in 0xDB5C : word16)
  Class: Eq_465
  DataType: (memptr (ptr Eq_409) byte)
  OrigDataType: (memptr T_409 (struct (0 T_418 t0000)))
T_466: (in Mem0[ds:0xDB5C:byte] : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_467: (in 0x01 : byte)
  Class: Eq_467
  DataType: byte
  OrigDataType: byte
T_468: (in ds->bDB5C - 0x01 : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_469: (in Mem32[ds:0xDB5C:byte] : byte)
  Class: Eq_418
  DataType: byte
  OrigDataType: byte
T_470: (in 0xDB68 : word16)
  Class: Eq_470
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_471))
  OrigDataType: (memptr T_18 (struct (0 T_471 t0000)))
T_471: (in Mem0[0x0800:0xDB68:word16] : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: (memptr T_18 (struct (FFFFD8C0 T_474 tFFFFD8C0)))
T_472: (in 0xD8C0 : word16)
  Class: Eq_472
  DataType: word16
  OrigDataType: word16
T_473: (in Mem0[0x0800:0xDB68:word16] + 0xD8C0 : word16)
  Class: Eq_473
  DataType: word16
  OrigDataType: word16
T_474: (in Mem0[0x0800:Mem0[0x0800:0xDB68:word16] + 0xD8C0:word16] : word16)
  Class: Eq_474
  DataType: word16
  OrigDataType: word16
T_475: (in 0x0064 : word16)
  Class: Eq_475
  DataType: word16
  OrigDataType: word16
T_476: (in (0x0800->*0x0800->ptrDB68).wFFFFD8C0 + 0x0064 : word16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: word16
T_477: (in 0xDB64 : word16)
  Class: Eq_477
  DataType: (memptr (ptr Eq_14) uint16)
  OrigDataType: (memptr T_18 (struct (0 T_478 t0000)))
T_478: (in Mem9[0x0800:0xDB64:word16] : word16)
  Class: Eq_49
  DataType: uint16
  OrigDataType: word16
T_479: (in 0xDB66 : word16)
  Class: Eq_479
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_480))
  OrigDataType: (memptr T_18 (struct (0 T_480 t0000)))
T_480: (in Mem9[0x0800:0xDB66:word16] : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: (memptr T_18 (struct (FFFFD920 T_483 tFFFFD920)))
T_481: (in 0xD920 : word16)
  Class: Eq_481
  DataType: word16
  OrigDataType: word16
T_482: (in Mem9[0x0800:0xDB66:word16] + 0xD920 : word16)
  Class: Eq_482
  DataType: word16
  OrigDataType: word16
T_483: (in Mem9[0x0800:Mem9[0x0800:0xDB66:word16] + 0xD920:word16] : word16)
  Class: Eq_483
  DataType: word16
  OrigDataType: word16
T_484: (in 0x0044 : word16)
  Class: Eq_484
  DataType: word16
  OrigDataType: word16
T_485: (in (0x0800->*0x0800->ptrDB66).wFFFFD920 + 0x0044 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_486: (in 0xDB62 : word16)
  Class: Eq_486
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_18 (struct (0 T_487 t0000)))
T_487: (in Mem14[0x0800:0xDB62:word16] : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_488: (in 0xDB68 : word16)
  Class: Eq_488
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_471))
  OrigDataType: (memptr T_18 (struct (0 T_489 t0000)))
T_489: (in Mem14[0x0800:0xDB68:word16] : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_490: (in 0x005E : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_491: (in 0x0800->ptrDB68 != &Eq_14::t005E : bool)
  Class: Eq_491
  DataType: bool
  OrigDataType: bool
T_492: (in 0xDB68 : word16)
  Class: Eq_492
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_471))
  OrigDataType: (memptr T_18 (struct (0 T_471 t0000)))
T_493: (in Mem14[0x0800:0xDB68:word16] : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_494: (in 0x0001 : word16)
  Class: Eq_494
  DataType: word16
  OrigDataType: word16
T_495: (in Mem14[0x0800:0xDB68:word16] + 0x0001 : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_496: (in Mem31[0x0800:0xDB68:word16] : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_497: (in 0xDB68 : word16)
  Class: Eq_497
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_471))
  OrigDataType: (memptr T_18 (struct (0 T_471 t0000)))
T_498: (in Mem31[0x0800:0xDB68:word16] : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_499: (in 0x0001 : word16)
  Class: Eq_499
  DataType: word16
  OrigDataType: word16
T_500: (in Mem31[0x0800:0xDB68:word16] + 0x0001 : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_501: (in Mem33[0x0800:0xDB68:word16] : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_502: (in 0x0000 : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_503: (in 0xDB68 : word16)
  Class: Eq_503
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_471))
  OrigDataType: (memptr T_18 (struct (0 T_504 t0000)))
T_504: (in Mem28[0x0800:0xDB68:word16] : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_505: (in 0xDB66 : word16)
  Class: Eq_505
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_480))
  OrigDataType: (memptr T_18 (struct (0 T_506 t0000)))
T_506: (in Mem14[0x0800:0xDB66:word16] : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_507: (in 0x00FE : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_508: (in 0x0800->ptrDB66 != &Eq_14::t00FE : bool)
  Class: Eq_508
  DataType: bool
  OrigDataType: bool
T_509: (in 0xDB66 : word16)
  Class: Eq_509
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_480))
  OrigDataType: (memptr T_18 (struct (0 T_480 t0000)))
T_510: (in Mem14[0x0800:0xDB66:word16] : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_511: (in 0x0001 : word16)
  Class: Eq_511
  DataType: word16
  OrigDataType: word16
T_512: (in Mem14[0x0800:0xDB66:word16] + 0x0001 : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_513: (in Mem23[0x0800:0xDB66:word16] : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_514: (in 0xDB66 : word16)
  Class: Eq_514
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_480))
  OrigDataType: (memptr T_18 (struct (0 T_480 t0000)))
T_515: (in Mem23[0x0800:0xDB66:word16] : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_516: (in 0x0001 : word16)
  Class: Eq_516
  DataType: word16
  OrigDataType: word16
T_517: (in Mem23[0x0800:0xDB66:word16] + 0x0001 : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_518: (in Mem25[0x0800:0xDB66:word16] : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_519: (in 0x0000 : word16)
  Class: Eq_519
  DataType: word16
  OrigDataType: word16
T_520: (in 0xDB72 : word16)
  Class: Eq_520
  DataType: (memptr (ptr Eq_14) word16)
  OrigDataType: (memptr T_18 (struct (0 T_521 t0000)))
T_521: (in Mem27[0x0800:0xDB72:word16] : word16)
  Class: Eq_519
  DataType: word16
  OrigDataType: word16
T_522: (in 0x0000 : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_523: (in 0xDB66 : word16)
  Class: Eq_523
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_480))
  OrigDataType: (memptr T_18 (struct (0 T_524 t0000)))
T_524: (in Mem21[0x0800:0xDB66:word16] : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_525: (in fn1676_0061 : ptr32)
  Class: Eq_525
  DataType: (ptr Eq_525)
  OrigDataType: (ptr (fn T_527 ()))
T_526: (in signature of fn1676_0061 : void)
  Class: Eq_525
  DataType: (ptr Eq_525)
  OrigDataType: 
T_527: (in fn1676_0061() : void)
  Class: Eq_527
  DataType: void
  OrigDataType: void
T_528: (in fn1676_006F : ptr32)
  Class: Eq_528
  DataType: (ptr Eq_528)
  OrigDataType: (ptr (fn T_530 ()))
T_529: (in signature of fn1676_006F : void)
  Class: Eq_528
  DataType: (ptr Eq_528)
  OrigDataType: 
T_530: (in fn1676_006F() : void)
  Class: Eq_530
  DataType: void
  OrigDataType: void
T_531: (in fn1676_0198 : ptr32)
  Class: Eq_389
  DataType: (ptr Eq_389)
  OrigDataType: (ptr (fn T_535 (T_534)))
T_532: (in fn1676_0084 : ptr32)
  Class: Eq_532
  DataType: (ptr Eq_532)
  OrigDataType: (ptr (fn T_534 ()))
T_533: (in signature of fn1676_0084 : void)
  Class: Eq_532
  DataType: (ptr Eq_532)
  OrigDataType: 
T_534: (in fn1676_0084() : selector)
  Class: Eq_215
  DataType: (ptr Eq_215)
  OrigDataType: (ptr (segment))
T_535: (in fn1676_0198(fn1676_0084()) : void)
  Class: Eq_392
  DataType: void
  OrigDataType: void
T_536: (in 0x0000 : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_537: (in 0xDB66 : word16)
  Class: Eq_537
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_480))
  OrigDataType: (memptr T_18 (struct (0 T_538 t0000)))
T_538: (in Mem3[0x0800:0xDB66:word16] : word16)
  Class: Eq_480
  DataType: (memptr (ptr Eq_14) Eq_480)
  OrigDataType: word16
T_539: (in 0x0000 : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_540: (in 0xDB68 : word16)
  Class: Eq_540
  DataType: (memptr (ptr Eq_14) (memptr (ptr Eq_14) Eq_471))
  OrigDataType: (memptr T_18 (struct (0 T_541 t0000)))
T_541: (in Mem4[0x0800:0xDB68:word16] : word16)
  Class: Eq_471
  DataType: (memptr (ptr Eq_14) Eq_471)
  OrigDataType: word16
T_542: (in __outb : ptr32)
  Class: Eq_542
  DataType: (ptr Eq_542)
  OrigDataType: (ptr (fn T_545 (T_543, T_544)))
T_543: (in 0x03C8 : word16)
  Class: Eq_543
  DataType: word16
  OrigDataType: word16
T_544: (in 0xFE : byte)
  Class: Eq_544
  DataType: byte
  OrigDataType: byte
T_545: (in __outb(0x03C8, 0xFE) : void)
  Class: Eq_545
  DataType: void
  OrigDataType: void
T_546: (in __outb : ptr32)
  Class: Eq_546
  DataType: (ptr Eq_546)
  OrigDataType: (ptr (fn T_549 (T_547, T_548)))
T_547: (in 0x03C9 : word16)
  Class: Eq_547
  DataType: word16
  OrigDataType: word16
T_548: (in 0x00 : byte)
  Class: Eq_548
  DataType: byte
  OrigDataType: byte
T_549: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_549
  DataType: void
  OrigDataType: void
T_550: (in __outb : ptr32)
  Class: Eq_550
  DataType: (ptr Eq_550)
  OrigDataType: (ptr (fn T_553 (T_551, T_552)))
T_551: (in 0x03C9 : word16)
  Class: Eq_551
  DataType: word16
  OrigDataType: word16
T_552: (in 0x00 : byte)
  Class: Eq_552
  DataType: byte
  OrigDataType: byte
T_553: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_553
  DataType: void
  OrigDataType: void
T_554: (in __outb : ptr32)
  Class: Eq_554
  DataType: (ptr Eq_554)
  OrigDataType: (ptr (fn T_557 (T_555, T_556)))
T_555: (in 0x03C9 : word16)
  Class: Eq_555
  DataType: word16
  OrigDataType: word16
T_556: (in 0x00 : byte)
  Class: Eq_556
  DataType: byte
  OrigDataType: byte
T_557: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_557
  DataType: void
  OrigDataType: void
T_558: (in __inb : ptr32)
  Class: Eq_558
  DataType: (ptr Eq_558)
  OrigDataType: (ptr (fn T_560 (T_559)))
T_559: (in 0x03DA : word16)
  Class: Eq_559
  DataType: word16
  OrigDataType: word16
T_560: (in __inb(0x03DA) : byte)
  Class: Eq_560
  DataType: byte
  OrigDataType: byte
T_561: (in 0x08 : byte)
  Class: Eq_561
  DataType: byte
  OrigDataType: byte
T_562: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_562
  DataType: byte
  OrigDataType: byte
T_563: (in 0x00 : byte)
  Class: Eq_562
  DataType: byte
  OrigDataType: byte
T_564: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_564
  DataType: bool
  OrigDataType: bool
T_565: (in __outb : ptr32)
  Class: Eq_565
  DataType: (ptr Eq_565)
  OrigDataType: (ptr (fn T_568 (T_566, T_567)))
T_566: (in 0x03C8 : word16)
  Class: Eq_566
  DataType: word16
  OrigDataType: word16
T_567: (in 0xFD : byte)
  Class: Eq_567
  DataType: byte
  OrigDataType: byte
T_568: (in __outb(0x03C8, 0xFD) : void)
  Class: Eq_568
  DataType: void
  OrigDataType: void
T_569: (in al_8 : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_570: (in ds : (ptr Eq_570))
  Class: Eq_570
  DataType: (ptr Eq_570)
  OrigDataType: (ptr (segment (DB7C T_572 tDB7C)))
T_571: (in 0xDB7C : word16)
  Class: Eq_571
  DataType: (memptr (ptr Eq_570) byte)
  OrigDataType: (memptr T_570 (struct (0 T_572 t0000)))
T_572: (in Mem0[ds:0xDB7C:byte] : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_573: (in __outb : ptr32)
  Class: Eq_573
  DataType: (ptr Eq_573)
  OrigDataType: (ptr (fn T_575 (T_574, T_569)))
T_574: (in 0x03C9 : word16)
  Class: Eq_574
  DataType: word16
  OrigDataType: word16
T_575: (in __outb(0x03C9, al_8) : void)
  Class: Eq_575
  DataType: void
  OrigDataType: void
T_576: (in __outb : ptr32)
  Class: Eq_576
  DataType: (ptr Eq_576)
  OrigDataType: (ptr (fn T_578 (T_577, T_569)))
T_577: (in 0x03C9 : word16)
  Class: Eq_577
  DataType: word16
  OrigDataType: word16
T_578: (in __outb(0x03C9, al_8) : void)
  Class: Eq_578
  DataType: void
  OrigDataType: void
T_579: (in __outb : ptr32)
  Class: Eq_579
  DataType: (ptr Eq_579)
  OrigDataType: (ptr (fn T_581 (T_580, T_569)))
T_580: (in 0x03C9 : word16)
  Class: Eq_580
  DataType: word16
  OrigDataType: word16
T_581: (in __outb(0x03C9, al_8) : void)
  Class: Eq_581
  DataType: void
  OrigDataType: void
T_582: (in ds : (ptr Eq_570))
  Class: Eq_570
  DataType: (ptr Eq_570)
  OrigDataType: (ptr (segment (DB76 T_596 tDB76) (DB77 T_584 tDB77) (DB7C T_588 tDB7C)))
T_583: (in 0xDB77 : word16)
  Class: Eq_583
  DataType: (memptr (ptr Eq_570) byte)
  OrigDataType: (memptr T_582 (struct (0 T_584 t0000)))
T_584: (in Mem0[ds:0xDB77:byte] : byte)
  Class: Eq_584
  DataType: byte
  OrigDataType: byte
T_585: (in 0x01 : byte)
  Class: Eq_584
  DataType: byte
  OrigDataType: byte
T_586: (in ds->bDB77 == 0x01 : bool)
  Class: Eq_586
  DataType: bool
  OrigDataType: bool
T_587: (in 0xDB7C : word16)
  Class: Eq_587
  DataType: (memptr (ptr Eq_570) byte)
  OrigDataType: (memptr T_582 (struct (0 T_588 t0000)))
T_588: (in Mem0[ds:0xDB7C:byte] : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_589: (in 0x00 : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_590: (in ds->bDB7C == 0x00 : bool)
  Class: Eq_590
  DataType: bool
  OrigDataType: bool
T_591: (in 0xDB7C : word16)
  Class: Eq_591
  DataType: (memptr (ptr Eq_570) byte)
  OrigDataType: (memptr T_582 (struct (0 T_592 t0000)))
T_592: (in Mem0[ds:0xDB7C:byte] : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_593: (in 0x3F : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_594: (in ds->bDB7C == 0x3F : bool)
  Class: Eq_594
  DataType: bool
  OrigDataType: bool
T_595: (in 0xDB76 : word16)
  Class: Eq_595
  DataType: (memptr (ptr Eq_570) byte)
  OrigDataType: (memptr T_582 (struct (0 T_596 t0000)))
T_596: (in Mem0[ds:0xDB76:byte] : byte)
  Class: Eq_596
  DataType: byte
  OrigDataType: byte
T_597: (in 0xFF : byte)
  Class: Eq_596
  DataType: byte
  OrigDataType: byte
T_598: (in ds->bDB76 == 0xFF : bool)
  Class: Eq_598
  DataType: bool
  OrigDataType: bool
T_599: (in 0xDB7C : word16)
  Class: Eq_599
  DataType: (memptr (ptr Eq_570) byte)
  OrigDataType: (memptr T_582 (struct (0 T_588 t0000)))
T_600: (in Mem0[ds:0xDB7C:byte] : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_601: (in 0x01 : byte)
  Class: Eq_601
  DataType: byte
  OrigDataType: byte
T_602: (in ds->bDB7C + 0x01 : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_603: (in Mem13[ds:0xDB7C:byte] : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_604: (in fn1676_036E : ptr32)
  Class: Eq_604
  DataType: (ptr Eq_604)
  OrigDataType: (ptr (fn T_606 (T_582)))
T_605: (in signature of fn1676_036E : void)
  Class: Eq_604
  DataType: (ptr Eq_604)
  OrigDataType: 
T_606: (in fn1676_036E(ds) : void)
  Class: Eq_606
  DataType: void
  OrigDataType: void
T_607: (in fn1676_03BF : ptr32)
  Class: Eq_607
  DataType: (ptr Eq_607)
  OrigDataType: (ptr (fn T_609 ()))
T_608: (in signature of fn1676_03BF : void)
  Class: Eq_607
  DataType: (ptr Eq_607)
  OrigDataType: 
T_609: (in fn1676_03BF() : selector)
  Class: Eq_609
  DataType: (ptr Eq_609)
  OrigDataType: (ptr (segment))
T_610: (in fn1676_036E : ptr32)
  Class: Eq_604
  DataType: (ptr Eq_604)
  OrigDataType: (ptr (fn T_611 (T_582)))
T_611: (in fn1676_036E(ds) : void)
  Class: Eq_606
  DataType: void
  OrigDataType: void
T_612: (in 0xDB7C : word16)
  Class: Eq_612
  DataType: (memptr (ptr Eq_570) byte)
  OrigDataType: (memptr T_582 (struct (0 T_588 t0000)))
T_613: (in Mem0[ds:0xDB7C:byte] : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_614: (in 0x01 : byte)
  Class: Eq_614
  DataType: byte
  OrigDataType: byte
T_615: (in ds->bDB7C - 0x01 : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_616: (in Mem26[ds:0xDB7C:byte] : byte)
  Class: Eq_569
  DataType: byte
  OrigDataType: byte
T_617: (in 0x01 : byte)
  Class: Eq_584
  DataType: byte
  OrigDataType: byte
T_618: (in 0xDB77 : word16)
  Class: Eq_618
  DataType: (memptr (ptr Eq_570) byte)
  OrigDataType: (memptr T_582 (struct (0 T_619 t0000)))
T_619: (in Mem20[ds:0xDB77:byte] : byte)
  Class: Eq_584
  DataType: byte
  OrigDataType: byte
T_620: (in 0x00 : byte)
  Class: Eq_596
  DataType: byte
  OrigDataType: byte
T_621: (in 0xDB76 : word16)
  Class: Eq_621
  DataType: (memptr (ptr Eq_570) byte)
  OrigDataType: (memptr T_582 (struct (0 T_622 t0000)))
T_622: (in Mem21[ds:0xDB76:byte] : byte)
  Class: Eq_596
  DataType: byte
  OrigDataType: byte
T_623: (in 0xDB76 : word16)
  Class: Eq_623
  DataType: (memptr (ptr Eq_570) byte)
  OrigDataType: (memptr T_582 (struct (0 T_596 t0000)))
T_624: (in Mem0[ds:0xDB76:byte] : byte)
  Class: Eq_596
  DataType: byte
  OrigDataType: byte
T_625: (in 0x01 : byte)
  Class: Eq_625
  DataType: byte
  OrigDataType: byte
T_626: (in ds->bDB76 + 0x01 : byte)
  Class: Eq_596
  DataType: byte
  OrigDataType: byte
T_627: (in Mem18[ds:0xDB76:byte] : byte)
  Class: Eq_596
  DataType: byte
  OrigDataType: byte
T_628: (in ds : (ptr Eq_628))
  Class: Eq_628
  DataType: (ptr Eq_628)
  OrigDataType: (ptr (segment))
T_629: (in bx_15 : word16)
  Class: Eq_629
  DataType: word16
  OrigDataType: word16
T_630: (in ax_7 : word16)
  Class: Eq_630
  DataType: word16
  OrigDataType: word16
T_631: (in 0xDB78 : word16)
  Class: Eq_631
  DataType: (memptr (ptr Eq_14) Eq_632)
  OrigDataType: (memptr T_18 (struct (0 T_632 t0000)))
T_632: (in Mem0[0x0800:0xDB78:word16] : word16)
  Class: Eq_632
  DataType: Eq_632
  OrigDataType: (memptr T_18 (struct (FFFFDB7D T_635 tFFFFDB7D)))
T_633: (in 0xDB7D : word16)
  Class: Eq_633
  DataType: word16
  OrigDataType: word16
T_634: (in Mem0[0x0800:0xDB78:word16] + 0xDB7D : word16)
  Class: Eq_634
  DataType: word16
  OrigDataType: word16
T_635: (in Mem0[0x0800:Mem0[0x0800:0xDB78:word16] + 0xDB7D:word16] : word16)
  Class: Eq_630
  DataType: word16
  OrigDataType: word16
T_636: (in (byte) ax_7 : byte)
  Class: Eq_636
  DataType: byte
  OrigDataType: byte
T_637: (in 0x20 : byte)
  Class: Eq_636
  DataType: byte
  OrigDataType: byte
T_638: (in (byte) ax_7 != 0x20 : bool)
  Class: Eq_638
  DataType: bool
  OrigDataType: bool
T_639: (in 0x0001 : word16)
  Class: Eq_639
  DataType: word16
  OrigDataType: word16
T_640: (in ax_7 - 0x0001 : word16)
  Class: Eq_640
  DataType: word16
  OrigDataType: word16
T_641: (in 0x00 : byte)
  Class: Eq_641
  DataType: byte
  OrigDataType: byte
T_642: (in DPB(ax_7 - 0x0001, 0x00, 8, 8) : word16)
  Class: Eq_629
  DataType: word16
  OrigDataType: word16
T_643: (in 0x1400 : word16)
  Class: Eq_629
  DataType: word16
  OrigDataType: word16
T_644: (in si_20 : (memptr (ptr Eq_14) byte))
  Class: Eq_644
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_18 (struct 0001 (0 T_669 t0000)))
T_645: (in 0xADC0 : word16)
  Class: Eq_645
  DataType: word16
  OrigDataType: word16
T_646: (in bx_15 + 0xADC0 : word16)
  Class: Eq_644
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_647: (in di_30 : (memptr (ptr Eq_31) byte))
  Class: Eq_647
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: (memptr T_31 (struct 0001 (0 T_672 t0000)))
T_648: (in 0xA000 : word16)
  Class: Eq_648
  DataType: word16
  OrigDataType: word16
T_649: (in 0xDB7B : word16)
  Class: Eq_649
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_18 (struct (0 T_650 t0000)))
T_650: (in Mem0[0x0800:0xDB7B:byte] : byte)
  Class: Eq_650
  DataType: byte
  OrigDataType: byte
T_651: (in DPB(0xA000, 0x0800->bDB7B, 0, 8) : word16)
  Class: Eq_651
  DataType: uint16
  OrigDataType: uint16
T_652: (in 0x0008 : word16)
  Class: Eq_652
  DataType: uint16
  OrigDataType: uint16
T_653: (in DPB(0xA000, 0x0800->bDB7B, 0, 8) *u 0x0008 : uint32)
  Class: Eq_653
  DataType: uint32
  OrigDataType: uint32
T_654: (in (word16) (DPB(0xA000, 0x0800->bDB7B, 0, 8) *u 0x0008) : word16)
  Class: Eq_654
  DataType: word16
  OrigDataType: word16
T_655: (in 0x0F00 : word16)
  Class: Eq_655
  DataType: word16
  OrigDataType: word16
T_656: (in (word16) (DPB(0xA000, 0x0800->bDB7B, 0, 8) *u 0x0008) + 0x0F00 : word16)
  Class: Eq_647
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_657: (in dx_32 : word16)
  Class: Eq_657
  DataType: word16
  OrigDataType: word16
T_658: (in 0x0010 : word16)
  Class: Eq_657
  DataType: word16
  OrigDataType: word16
T_659: (in 0x0138 : word16)
  Class: Eq_659
  DataType: word16
  OrigDataType: word16
T_660: (in si_20 + 0x0138 : word16)
  Class: Eq_644
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_661: (in 0x0138 : word16)
  Class: Eq_661
  DataType: word16
  OrigDataType: word16
T_662: (in di_30 + 0x0138 : word16)
  Class: Eq_647
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_663: (in 0x0001 : word16)
  Class: Eq_663
  DataType: word16
  OrigDataType: word16
T_664: (in dx_32 - 0x0001 : word16)
  Class: Eq_657
  DataType: word16
  OrigDataType: word16
T_665: (in 0x0000 : word16)
  Class: Eq_657
  DataType: word16
  OrigDataType: word16
T_666: (in dx_32 != 0x0000 : bool)
  Class: Eq_666
  DataType: bool
  OrigDataType: bool
T_667: (in 0x0000 : word16)
  Class: Eq_667
  DataType: word16
  OrigDataType: word16
T_668: (in si_20 + 0x0000 : word16)
  Class: Eq_668
  DataType: word16
  OrigDataType: word16
T_669: (in Mem0[0x0800:si_20 + 0x0000:byte] : byte)
  Class: Eq_669
  DataType: byte
  OrigDataType: byte
T_670: (in 0x0000 : word16)
  Class: Eq_670
  DataType: word16
  OrigDataType: word16
T_671: (in di_30 + 0x0000 : word16)
  Class: Eq_671
  DataType: word16
  OrigDataType: word16
T_672: (in Mem46[0xA000:di_30 + 0x0000:byte] : byte)
  Class: Eq_669
  DataType: byte
  OrigDataType: byte
T_673: (in 0x0001 : word16)
  Class: Eq_673
  DataType: word16
  OrigDataType: word16
T_674: (in si_20 + 0x0001 : word16)
  Class: Eq_644
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_675: (in 0x0001 : word16)
  Class: Eq_675
  DataType: word16
  OrigDataType: word16
T_676: (in di_30 + 0x0001 : word16)
  Class: Eq_647
  DataType: (memptr (ptr Eq_31) byte)
  OrigDataType: word16
T_677: (in cx_41 : word16)
  Class: Eq_677
  DataType: word16
  OrigDataType: word16
T_678: (in 0x0001 : word16)
  Class: Eq_678
  DataType: word16
  OrigDataType: word16
T_679: (in cx_41 - 0x0001 : word16)
  Class: Eq_677
  DataType: word16
  OrigDataType: word16
T_680: (in 0x0000 : word16)
  Class: Eq_677
  DataType: word16
  OrigDataType: word16
T_681: (in cx_41 == 0x0000 : bool)
  Class: Eq_681
  DataType: bool
  OrigDataType: bool
T_682: (in 0x0008 : word16)
  Class: Eq_677
  DataType: word16
  OrigDataType: word16
T_683: (in 0xDB7B : word16)
  Class: Eq_683
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_18 (struct (0 T_684 t0000)))
T_684: (in Mem0[0x0800:0xDB7B:byte] : byte)
  Class: Eq_650
  DataType: byte
  OrigDataType: byte
T_685: (in 0x27 : byte)
  Class: Eq_650
  DataType: byte
  OrigDataType: byte
T_686: (in 0x0800->bDB7B == 0x27 : bool)
  Class: Eq_686
  DataType: bool
  OrigDataType: bool
T_687: (in 0x00 : byte)
  Class: Eq_650
  DataType: byte
  OrigDataType: byte
T_688: (in 0xDB7B : word16)
  Class: Eq_688
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_18 (struct (0 T_689 t0000)))
T_689: (in Mem66[0x0800:0xDB7B:byte] : byte)
  Class: Eq_650
  DataType: byte
  OrigDataType: byte
T_690: (in 0x00 : byte)
  Class: Eq_690
  DataType: byte
  OrigDataType: byte
T_691: (in 0xDB77 : word16)
  Class: Eq_691
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_18 (struct (0 T_692 t0000)))
T_692: (in Mem67[0x0800:0xDB77:byte] : byte)
  Class: Eq_690
  DataType: byte
  OrigDataType: byte
T_693: (in 0xDB78 : word16)
  Class: Eq_693
  DataType: (memptr (ptr Eq_14) Eq_632)
  OrigDataType: (memptr T_18 (struct (0 T_694 t0000)))
T_694: (in Mem67[0x0800:0xDB78:word16] : word16)
  Class: Eq_632
  DataType: Eq_632
  OrigDataType: int16
T_695: (in 0x04B0 : word16)
  Class: Eq_632
  DataType: int16
  OrigDataType: int16
T_696: (in 0x0800->tDB78 > 0x04B0 : bool)
  Class: Eq_696
  DataType: bool
  OrigDataType: bool
T_697: (in 0xDB7B : word16)
  Class: Eq_697
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_18 (struct (0 T_650 t0000)))
T_698: (in Mem0[0x0800:0xDB7B:byte] : byte)
  Class: Eq_650
  DataType: byte
  OrigDataType: byte
T_699: (in 0x01 : byte)
  Class: Eq_699
  DataType: byte
  OrigDataType: byte
T_700: (in 0x0800->bDB7B + 0x01 : byte)
  Class: Eq_650
  DataType: byte
  OrigDataType: byte
T_701: (in Mem62[0x0800:0xDB7B:byte] : byte)
  Class: Eq_650
  DataType: byte
  OrigDataType: byte
T_702: (in 0xDB78 : word16)
  Class: Eq_702
  DataType: (memptr (ptr Eq_14) Eq_632)
  OrigDataType: (memptr T_18 (struct (0 T_632 t0000)))
T_703: (in Mem62[0x0800:0xDB78:word16] : word16)
  Class: Eq_632
  DataType: Eq_632
  OrigDataType: word16
T_704: (in 0x0001 : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_705: (in Mem62[0x0800:0xDB78:word16] + 0x0001 : word16)
  Class: Eq_632
  DataType: Eq_632
  OrigDataType: word16
T_706: (in Mem64[0x0800:0xDB78:word16] : word16)
  Class: Eq_632
  DataType: Eq_632
  OrigDataType: word16
T_707: (in 0x0000 : word16)
  Class: Eq_632
  DataType: int16
  OrigDataType: word16
T_708: (in 0xDB78 : word16)
  Class: Eq_708
  DataType: (memptr (ptr Eq_14) Eq_632)
  OrigDataType: (memptr T_18 (struct (0 T_709 t0000)))
T_709: (in Mem73[0x0800:0xDB78:word16] : word16)
  Class: Eq_632
  DataType: Eq_632
  OrigDataType: word16
T_710: (in 0xDB78 : word16)
  Class: Eq_710
  DataType: (memptr (ptr Eq_14) Eq_632)
  OrigDataType: (memptr T_18 (struct (0 T_632 t0000)))
T_711: (in Mem67[0x0800:0xDB78:word16] : word16)
  Class: Eq_632
  DataType: Eq_632
  OrigDataType: word16
T_712: (in 0x0001 : word16)
  Class: Eq_712
  DataType: word16
  OrigDataType: word16
T_713: (in Mem67[0x0800:0xDB78:word16] + 0x0001 : word16)
  Class: Eq_632
  DataType: Eq_632
  OrigDataType: word16
T_714: (in Mem71[0x0800:0xDB78:word16] : word16)
  Class: Eq_632
  DataType: Eq_632
  OrigDataType: word16
T_715: (in bx_5 : word16)
  Class: Eq_715
  DataType: word16
  OrigDataType: word16
T_716: (in msdos_resize_memory_block : ptr32)
  Class: Eq_716
  DataType: (ptr Eq_716)
  OrigDataType: (ptr (fn T_724 (T_721, T_722, T_723)))
T_717: (in signature of msdos_resize_memory_block : void)
  Class: Eq_716
  DataType: (ptr Eq_716)
  OrigDataType: 
T_718: (in es : selector)
  Class: Eq_718
  DataType: (ptr Eq_718)
  OrigDataType: (ptr (segment))
T_719: (in bx : word16)
  Class: Eq_719
  DataType: word16
  OrigDataType: word16
T_720: (in bxOut : ptr16)
  Class: Eq_720
  DataType: (ptr word16)
  OrigDataType: ptr16
T_721: (in es : (ptr Eq_718))
  Class: Eq_718
  DataType: (ptr Eq_718)
  OrigDataType: (ptr (segment))
T_722: (in 0x186A : word16)
  Class: Eq_719
  DataType: word16
  OrigDataType: word16
T_723: (in out bx_5 : ptr16)
  Class: Eq_720
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_724: (in msdos_resize_memory_block(es, 0x186A, out bx_5) : bool)
  Class: Eq_724
  DataType: bool
  OrigDataType: bool
T_725: (in fn1676_0068 : ptr32)
  Class: Eq_725
  DataType: (ptr Eq_725)
  OrigDataType: (ptr (fn T_727 ()))
T_726: (in signature of fn1676_0068 : void)
  Class: Eq_725
  DataType: (ptr Eq_725)
  OrigDataType: 
T_727: (in fn1676_0068() : void)
  Class: Eq_727
  DataType: void
  OrigDataType: void
T_728: (in cx_10 : word16)
  Class: Eq_728
  DataType: word16
  OrigDataType: word16
T_729: (in 0x0064 : word16)
  Class: Eq_728
  DataType: word16
  OrigDataType: word16
T_730: (in fn1676_0365 : ptr32)
  Class: Eq_730
  DataType: (ptr Eq_730)
  OrigDataType: (ptr (fn T_732 ()))
T_731: (in signature of fn1676_0365 : void)
  Class: Eq_730
  DataType: (ptr Eq_730)
  OrigDataType: 
T_732: (in fn1676_0365() : void)
  Class: Eq_732
  DataType: void
  OrigDataType: void
T_733: (in 0x0001 : word16)
  Class: Eq_733
  DataType: word16
  OrigDataType: word16
T_734: (in cx_10 - 0x0001 : word16)
  Class: Eq_728
  DataType: word16
  OrigDataType: word16
T_735: (in 0x0000 : word16)
  Class: Eq_728
  DataType: word16
  OrigDataType: word16
T_736: (in cx_10 != 0x0000 : bool)
  Class: Eq_736
  DataType: bool
  OrigDataType: bool
T_737: (in fn1676_0068 : ptr32)
  Class: Eq_725
  DataType: (ptr Eq_725)
  OrigDataType: (ptr (fn T_738 ()))
T_738: (in fn1676_0068() : void)
  Class: Eq_727
  DataType: void
  OrigDataType: void
T_739: (in fn1676_0340 : ptr32)
  Class: Eq_739
  DataType: (ptr Eq_739)
  OrigDataType: (ptr (fn T_741 ()))
T_740: (in signature of fn1676_0340 : void)
  Class: Eq_739
  DataType: (ptr Eq_739)
  OrigDataType: 
T_741: (in fn1676_0340() : void)
  Class: Eq_741
  DataType: void
  OrigDataType: void
T_742: (in __outb : ptr32)
  Class: Eq_742
  DataType: (ptr Eq_742)
  OrigDataType: (ptr (fn T_745 (T_743, T_744)))
T_743: (in 0x21 : byte)
  Class: Eq_743
  DataType: byte
  OrigDataType: byte
T_744: (in 0x5E : byte)
  Class: Eq_744
  DataType: byte
  OrigDataType: byte
T_745: (in __outb(0x21, 0x5E) : void)
  Class: Eq_745
  DataType: void
  OrigDataType: void
T_746: (in fn1676_02E7 : ptr32)
  Class: Eq_746
  DataType: (ptr Eq_746)
  OrigDataType: (ptr (fn T_748 ()))
T_747: (in signature of fn1676_02E7 : void)
  Class: Eq_746
  DataType: (ptr Eq_746)
  OrigDataType: 
T_748: (in fn1676_02E7() : void)
  Class: Eq_748
  DataType: void
  OrigDataType: void
T_749: (in ds_21 : (ptr Eq_570))
  Class: Eq_570
  DataType: (ptr Eq_570)
  OrigDataType: (ptr (segment))
T_750: (in fn1676_0104 : ptr32)
  Class: Eq_750
  DataType: (ptr Eq_750)
  OrigDataType: (ptr (fn T_752 ()))
T_751: (in signature of fn1676_0104 : void)
  Class: Eq_750
  DataType: (ptr Eq_750)
  OrigDataType: 
T_752: (in fn1676_0104() : selector)
  Class: Eq_570
  DataType: (ptr Eq_570)
  OrigDataType: (ptr (segment))
T_753: (in fn1676_0365 : ptr32)
  Class: Eq_730
  DataType: (ptr Eq_730)
  OrigDataType: (ptr (fn T_754 ()))
T_754: (in fn1676_0365() : void)
  Class: Eq_732
  DataType: void
  OrigDataType: void
T_755: (in fn1676_0165 : ptr32)
  Class: Eq_755
  DataType: (ptr Eq_755)
  OrigDataType: (ptr (fn T_757 ()))
T_756: (in signature of fn1676_0165 : void)
  Class: Eq_755
  DataType: (ptr Eq_755)
  OrigDataType: 
T_757: (in fn1676_0165() : void)
  Class: Eq_757
  DataType: void
  OrigDataType: void
T_758: (in fn1676_029E : ptr32)
  Class: Eq_758
  DataType: (ptr Eq_758)
  OrigDataType: (ptr (fn T_763 (T_762)))
T_759: (in signature of fn1676_029E : void)
  Class: Eq_758
  DataType: (ptr Eq_758)
  OrigDataType: 
T_760: (in fn1676_037C : ptr32)
  Class: Eq_760
  DataType: (ptr Eq_760)
  OrigDataType: (ptr (fn T_762 (T_749)))
T_761: (in signature of fn1676_037C : void)
  Class: Eq_760
  DataType: (ptr Eq_760)
  OrigDataType: 
T_762: (in fn1676_037C(ds_21) : selector)
  Class: Eq_409
  DataType: (ptr Eq_409)
  OrigDataType: (ptr (segment))
T_763: (in fn1676_029E(fn1676_037C(ds_21)) : void)
  Class: Eq_763
  DataType: void
  OrigDataType: void
T_764: (in fn1676_009B : ptr32)
  Class: Eq_764
  DataType: (ptr Eq_764)
  OrigDataType: (ptr (fn T_766 ()))
T_765: (in signature of fn1676_009B : void)
  Class: Eq_764
  DataType: (ptr Eq_764)
  OrigDataType: 
T_766: (in fn1676_009B() : void)
  Class: Eq_766
  DataType: void
  OrigDataType: void
T_767: (in __inb : ptr32)
  Class: Eq_767
  DataType: (ptr Eq_767)
  OrigDataType: (ptr (fn T_769 (T_768)))
T_768: (in 0x60 : byte)
  Class: Eq_768
  DataType: byte
  OrigDataType: byte
T_769: (in __inb(0x60) : byte)
  Class: Eq_769
  DataType: byte
  OrigDataType: byte
T_770: (in 0x01 : byte)
  Class: Eq_769
  DataType: byte
  OrigDataType: byte
T_771: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_771
  DataType: bool
  OrigDataType: bool
T_772: (in __outb : ptr32)
  Class: Eq_772
  DataType: (ptr Eq_772)
  OrigDataType: (ptr (fn T_775 (T_773, T_774)))
T_773: (in 0x21 : byte)
  Class: Eq_773
  DataType: byte
  OrigDataType: byte
T_774: (in 0x00 : byte)
  Class: Eq_774
  DataType: byte
  OrigDataType: byte
T_775: (in __outb(0x21, 0x00) : void)
  Class: Eq_775
  DataType: void
  OrigDataType: void
T_776: (in fn1676_0068 : ptr32)
  Class: Eq_725
  DataType: (ptr Eq_725)
  OrigDataType: (ptr (fn T_777 ()))
T_777: (in fn1676_0068() : void)
  Class: Eq_727
  DataType: void
  OrigDataType: void
T_778: (in msdos_display_string : ptr32)
  Class: Eq_778
  DataType: (ptr Eq_778)
  OrigDataType: (ptr (fn T_783 (T_18, T_782)))
T_779: (in signature of msdos_display_string : void)
  Class: Eq_778
  DataType: (ptr Eq_778)
  OrigDataType: 
T_780: (in ds : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_781: (in dx : word16)
  Class: Eq_781
  DataType: word16
  OrigDataType: word16
T_782: (in 0xE6B4 : word16)
  Class: Eq_781
  DataType: word16
  OrigDataType: word16
T_783: (in msdos_display_string(0x0800, 0xE6B4) : void)
  Class: Eq_783
  DataType: void
  OrigDataType: void
T_784: (in msdos_terminate : ptr32)
  Class: Eq_784
  DataType: (ptr Eq_784)
  OrigDataType: (ptr (fn T_788 (T_787)))
T_785: (in signature of msdos_terminate : void)
  Class: Eq_784
  DataType: (ptr Eq_784)
  OrigDataType: 
T_786: (in al : byte)
  Class: Eq_786
  DataType: byte
  OrigDataType: byte
T_787: (in 0x00 : byte)
  Class: Eq_786
  DataType: byte
  OrigDataType: byte
T_788: (in msdos_terminate(0x00) : void)
  Class: Eq_788
  DataType: void
  OrigDataType: void
T_789:
  Class: Eq_789
  DataType: byte
  OrigDataType: (struct 0001 (0 T_30 t0000))
T_790:
  Class: Eq_790
  DataType: byte
  OrigDataType: (struct 0001 (0 T_34 t0000))
T_791:
  Class: Eq_791
  DataType: Eq_791
  OrigDataType: 
*/
typedef Eq_31 Eq_1Eq_14 Eq_1struct Globals {
	Eq_31 * ptrFFFA0000;	// FFFA0000
	Eq_14 * ptr8000;	// 8000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_10)(word16, word16, Eq_14 *, word16);

typedef union Eq_213 {
	uint16 u0;
	byte u1;
} Eq_14union Eq_213 {
	uint16 u0;
	byte u1;
} Eq_14Eq_471 Eq_14Eq_480 Eq_14 Eq_14[]Eq_213Eq_480Eq_471Eq_632Eq_213struct Eq_14 {
	union Eq_213 {
		uint16 u0;
		byte u1;
	} uFFFF99C0;	// FFFF99C0
	union Eq_213 {
		uint16 u0;
		byte u1;
	} uFFFFE055;	// FFFFE055
	byte b0000;	// 0
	Eq_471 t005E;	// 5E
	Eq_480 t00FE;	// FE
	byte a08C0[];	// 8C0
	Eq_213 t99C0;	// 99C0
	uint16 wDB5E;	// DB5E
	word16 wDB60;	// DB60
	word16 wDB62;	// DB62
	uint16 wDB64;	// DB64
	Eq_480 Eq_14::*ptrDB66;	// DB66
	Eq_471 Eq_14::*ptrDB68;	// DB68
	word16 wDB6A;	// DB6A
	byte Eq_14::*ptrDB6C;	// DB6C
	byte Eq_31::*ptrDB6E;	// DB6E
	word16 wDB72;	// DB72
	byte bDB77;	// DB77
	Eq_632 tDB78;	// DB78
	byte bDB7B;	// DB7B
	Eq_213 tE055;	// E055
} Eq_14;

typedef struct Eq_21 {
} Eq_21;

typedef union Eq_213 {
	uint16 u0;
	byte u1;
} Eq_31union Eq_213 {
	uint16 u0;
	byte u1;
} Eq_31 Eq_31[]Eq_213Eq_213struct Eq_31 {
	byte bFFFFD840;	// FFFFD840
	byte bFFFFD842;	// FFFFD842
	union Eq_213 {
		uint16 u0;
		byte u1;
	} uFFFFD97E;	// FFFFD97E
	union Eq_213 {
		uint16 u0;
		byte u1;
	} uFFFFD97F;	// FFFFD97F
	byte a3200[];	// 3200
	byte bD840;	// D840
	byte bD842;	// D842
	Eq_213 tD97E;	// D97E
	Eq_213 tD97F;	// D97F
} Eq_31;

typedef struct Eq_114 {
} Eq_114;

typedef void (Eq_208)();

typedef union Eq_213 {
	uint16 u0;
	byte u1;
} Eq_213;

typedef struct Eq_215 {
	word16 wDB60;	// DB60
	word16 wDB6A;	// DB6A
} Eq_215;

typedef struct Eq_253 {
} Eq_253;

typedef void (Eq_300)();

typedef void (Eq_389)(Eq_215 *);

typedef struct Eq_409 {
	byte bDB5C;	// DB5C
	byte bDB5D;	// DB5D
} Eq_409;

typedef void (Eq_414)(word16, byte);

typedef void (Eq_421)(word16, byte);

typedef void (Eq_424)(word16, byte);

typedef void (Eq_427)(word16, byte);

typedef void (Eq_434)(word16, byte);

typedef void (Eq_441)(word16, byte);

typedef void (Eq_444)(word16, byte);

typedef void (Eq_447)(word16, byte);

typedef struct Eq_471 {
	word16 wFFFFD8C0;	// FFFFD8C0
} Eq_471;

typedef struct Eq_480 {
	word16 wFFFFD920;	// FFFFD920
} Eq_480;

typedef void (Eq_525)();

typedef void (Eq_528)();

typedef Eq_215 * (Eq_532)();

typedef void (Eq_542)(word16, byte);

typedef void (Eq_546)(word16, byte);

typedef void (Eq_550)(word16, byte);

typedef void (Eq_554)(word16, byte);

typedef byte (Eq_558)(word16);

typedef void (Eq_565)(word16, byte);

typedef struct Eq_570 {
	byte bDB76;	// DB76
	byte bDB77;	// DB77
	byte bDB7C;	// DB7C
} Eq_570;

typedef void (Eq_573)(word16, byte);

typedef void (Eq_576)(word16, byte);

typedef void (Eq_579)(word16, byte);

typedef void (Eq_604)(Eq_570 *);

typedef Eq_609 * (Eq_607)();

typedef struct Eq_609 {
} Eq_609;

typedef struct Eq_628 {
} Eq_628;

typedef union Eq_632 {
	int16 u0;
	Eq_791 Eq_14::* u1;
} Eq_632;

typedef bool (Eq_716)(Eq_718 *, word16, word16 *);

typedef struct Eq_718 {
} Eq_718;

typedef void (Eq_725)();

typedef void (Eq_730)();

typedef void (Eq_739)();

typedef void (Eq_742)(byte, byte);

typedef void (Eq_746)();

typedef Eq_570 * (Eq_750)();

typedef void (Eq_755)();

typedef void (Eq_758)(Eq_409 *);

typedef Eq_409 * (Eq_760)(Eq_570 *);

typedef void (Eq_764)();

typedef byte (Eq_767)(byte);

typedef void (Eq_772)(byte, byte);

typedef void (Eq_778)(Eq_14 *, word16);

typedef void (Eq_784)(byte);

typedef struct Eq_791 {
	word16 wFFFFDB7D;	// FFFFDB7D
} Eq_791;

