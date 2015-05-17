// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_382/ia32_elf/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (1C0380 Eq_1488 t1C0380) (8049A00 real32 r8049A00) (8049A08 Eq_139 t8049A08) (8049A0C Eq_832 t8049A0C) (8049A10 Eq_961 t8049A10) (8049A2C Eq_1490 t8049A2C) (8049A30 Eq_1456 t8049A30) (8049A34 real32 r8049A34) (8049A38 Eq_1531 t8049A38) (804A0BC (ptr code) ptr804A0BC) (804A0C0 (ptr code) ptr804A0C0) (804A0C4 (ptr code) ptr804A0C4) (804A0C8 (ptr code) ptr804A0C8) (804A0CC (ptr code) ptr804A0CC) (804A0D0 (ptr code) ptr804A0D0) (804A0D4 (ptr code) ptr804A0D4) (804A0D8 (ptr code) ptr804A0D8) (804A0DC (ptr code) ptr804A0DC) (804A0E0 (ptr code) ptr804A0E0) (804A100 Eq_23 t804A100) (824A500 Eq_1451 t824A500) (824A504 Eq_1460 t824A504) (824A508 Eq_1413 t824A508) (824A50C Eq_23 t824A50C) (824A514 word32 dw824A514) (824A520 Eq_23 t824A520) (824A59D byte b824A59D) (940C8A0 Eq_23 t940C8A0) (940C8A4 (arr Eq_1601 8) a940C8A4) (964CD20 Eq_23 t964CD20))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (ptr code)
	T_2 (in 0x0804A0BC : ptr32)
Eq_4: (ptr code)
	T_4 (in 0x0804A0C0 : ptr32)
Eq_6: (ptr code)
	T_6 (in 0x0804A0C4 : ptr32)
Eq_8: (ptr code)
	T_8 (in 0x0804A0C8 : ptr32)
Eq_10: (ptr code)
	T_10 (in 0x0804A0CC : ptr32)
Eq_12: (ptr code)
	T_12 (in 0x0804A0D0 : ptr32)
Eq_14: (ptr code)
	T_14 (in 0x0804A0D4 : ptr32)
Eq_16: (ptr code)
	T_16 (in 0x0804A0D8 : ptr32)
Eq_18: (ptr code)
	T_18 (in 0x0804A0DC : ptr32)
Eq_20: (ptr code)
	T_20 (in 0x0804A0E0 : ptr32)
Eq_23: (struct 40080 (0 Eq_26 t0000) (4 Eq_34 t0004) (8 Eq_42 t0008) (C Eq_23 t000C) (C Eq_855 t000C) (10 Eq_868 t0010) (14 Eq_880 t0014) (18 Eq_23 t0018) (18 real32 r0018) (1C real32 r001C) (20 real32 r0020) (30 Eq_23 t0030) (3C Eq_23 t003C) (54 Eq_56 t0054) (54 Eq_23 t0054) (54 Eq_56 t0054) (54 Eq_758 t0054) (58 Eq_763 t0058) (5C real32 r005C) (60 Eq_731 t0060) (64 Eq_139 t0064) (68 Eq_139 t0068) (6C Eq_139 t006C) (7C byte b007C) (1800 Eq_23 t1800) (40080 Eq_23 t40080))
	T_23 (in eax : word32)
	T_27 (in edx : word32)
	T_49 (in eax : word32)
	T_101 (in eax : word32)
	T_105 (in edx : word32)
	T_110 (in ecx : word32)
	T_138 (in eax : word32)
	T_144 (in eax : word32)
	T_305 (in fp - 0x00040044 : word32)
	T_324 (in fp - 0x00040044 : word32)
	T_612 (in edi_19 : word32)
	T_613 (in eax : word32)
	T_617 (in eax + edx *s 0x00040080 : word32)
	T_636 (in fp - 0x00000028 : word32)
	T_637 (in ecx : word32)
	T_641 (in fp - 0x00000028 : word32)
	T_642 (in dwArg04 : word32)
	T_652 (in edi_19 + 0x00000030 : word32)
	T_671 (in edi_19 + 0x00000018 : word32)
	T_678 (in edi_19 + 0x00000018 : word32)
	T_681 (in edi_19 + 0x00000018 : word32)
	T_698 (in fp - 0x00000034 : word32)
	T_723 (in fp - 0x00000040 : word32)
	T_728 (in fp - 0x00000034 : word32)
	T_729 (in fp - 0x00000040 : word32)
	T_747 (in fp - 0x00000034 : word32)
	T_748 (in edi_19 + 0x00000054 : word32)
	T_783 (in fp - 0x00000034 : word32)
	T_789 (in fp - 0x0000004C : word32)
	T_791 (in fp - 0x00000040 : word32)
	T_794 (in fp - 0x00000040 : word32)
	T_799 (in fp - 0x0000004C : word32)
	T_811 (in fp - 0x0000004C : word32)
	T_822 (in fp - 0x00000028 : word32)
	T_823 (in fp - 0x00000028 : word32)
	T_840 (in dwArg04 : word32)
	T_843 (in edx : word32)
	T_844 (in dwArg04 : word32)
	T_851 (in edi_83 : word32)
	T_854 (in edx + esi_11 *s 0x00040080 : word32)
	T_856 (in dwArg08 : word32)
	T_954 (in 0x0824A500 : word32)
	T_957 (in fp - 0x00000040 : word32)
	T_959 (in edi_83 + 0x0000000C : word32)
	T_964 (in fp - 0x00000040 : word32)
	T_967 (in fp - 0x00000040 : word32)
	T_971 (in edi_83 + 0x00000018 : word32)
	T_972 (in fp - 0x00000040 : word32)
	T_983 (in edi_83 + 0x0000000C : word32)
	T_985 (in edi_83 + 0x00000018 : word32)
	T_988 (in edi_83 + 0x00000018 : word32)
	T_993 (in edi_83 + 0x0000000C : word32)
	T_995 (in fp - 0x00000040 : word32)
	T_1004 (in fp - 0x0000004C : word32)
	T_1006 (in fp - 0x00000040 : word32)
	T_1009 (in fp - 0x0000004C : word32)
	T_1012 (in edi_83 + 0x00000018 : word32)
	T_1013 (in fp - 0x00000040 : word32)
	T_1019 (in edi_83 + 0x0000000C : word32)
	T_1021 (in edi_83 + 0x0000003C : word32)
	T_1025 (in edi_83 + 0x00000018 : word32)
	T_1026 (in edi_83 + 0x0000003C : word32)
	T_1058 (in esi_124 : word32)
	T_1059 (in eax : word32)
	T_1062 (in edi_105 : word32)
	T_1064 (in esi_124 + 0x00000030 : word32)
	T_1066 (in 0x0824A50C : word32)
	T_1171 (in esi_124 + 0x00040080 : word32)
	T_1172 (in ebx_126 : word32)
	T_1174 (in esi_124 + 0x00000018 : word32)
	T_1201 (in dwLoc400C4_31 : word32)
	T_1202 (in 0x0964CD20 : word32)
	T_1205 (in edi_47 : word32)
	T_1230 (in edi_47 + 0x0000000C : word32)
	T_1238 (in dwLoc400C4_31 + 0x00001800 : word32)
	T_1473 (in 0x0940C8A0 : word32)
	T_1539 (in 0x0804A100 : word32)
	T_1586 (in 0x0824A520 : word32)
Eq_26: (union (real32 u0) (real64 u1))
	T_26 (in Mem0[eax + 0x00000000:real32] : real32)
	T_30 (in Mem0[edx + 0x00000000:real32] : real32)
	T_70 (in rLoc2_17 : real64)
	T_73 (in Mem14[eax + 0x00000000:real32] : real32)
	T_104 (in Mem0[eax + 0x00000000:real32] : real32)
	T_108 (in Mem0[edx + 0x00000000:real32] : real32)
	T_109 (in Mem0[eax + 0x00000000:real32] - Mem0[edx + 0x00000000:real32] : word32)
	T_113 (in Mem7[ecx + 0x00000000:real32] : real32)
	T_153 (in Mem12[eax + 0x00000000:real32] : real32)
	T_154 (in Mem12[eax + 0x00000000:real32] * rLoc1_9 : real64)
	T_157 (in Mem15[eax + 0x00000000:real32] : real32)
	T_859 (in Mem0[dwArg08 + 0x00000000:real32] : real32)
	T_863 (in Mem0[dwArg04 + 0x00000000:real32] : real32)
	T_917 (in Mem100[edi_83 + 0x00000000:real32] : real32)
Eq_31: (union (real32 u0) (real64 u1))
	T_31 (in Mem0[eax + 0x00000000:real32] * Mem0[edx + 0x00000000:real32] : word32)
Eq_34: (union (real32 u0) (real64 u1))
	T_34 (in Mem0[eax + 0x00000004:real32] : real32)
	T_37 (in Mem0[edx + 0x00000004:real32] : real32)
	T_55 (in Mem0[eax + 0x00000004:real32] : real32)
	T_92 (in Mem24[eax + 0x00000004:real32] : real32)
	T_116 (in Mem7[eax + 0x00000004:real32] : real32)
	T_119 (in Mem7[edx + 0x00000004:real32] : real32)
	T_120 (in Mem7[eax + 0x00000004:real32] - Mem7[edx + 0x00000004:real32] : word32)
	T_123 (in Mem11[ecx + 0x00000004:real32] : real32)
	T_160 (in Mem15[eax + 0x00000004:real32] : real32)
	T_161 (in Mem15[eax + 0x00000004:real32] * rLoc1_9 : real64)
	T_164 (in Mem18[eax + 0x00000004:real32] : real32)
	T_871 (in Mem90[dwArg08 + 0x00000004:real32] : real32)
	T_875 (in Mem90[dwArg04 + 0x00000004:real32] : real32)
	T_928 (in Mem297[edi_83 + 0x00000004:real32] : real32)
Eq_38: (union (real32 u0) (real64 u1))
	T_38 (in Mem0[eax + 0x00000004:real32] * Mem0[edx + 0x00000004:real32] : word32)
Eq_42: (union (real32 u0) (real64 u1))
	T_42 (in Mem0[eax + 0x00000008:real32] : real32)
	T_45 (in Mem0[edx + 0x00000008:real32] : real32)
	T_48 (in rLoc2_7 : real64)
	T_52 (in Mem0[eax + 0x00000008:real32] : real32)
	T_126 (in Mem11[eax + 0x00000008:real32] : real32)
	T_129 (in Mem11[edx + 0x00000008:real32] : real32)
	T_130 (in Mem11[eax + 0x00000008:real32] - Mem11[edx + 0x00000008:real32] : word32)
	T_133 (in Mem14[ecx + 0x00000008:real32] : real32)
	T_167 (in Mem18[eax + 0x00000008:real32] : real32)
	T_168 (in rLoc1_9 * Mem18[eax + 0x00000008:real32] : word32)
	T_171 (in Mem20[eax + 0x00000008:real32] : real32)
	T_883 (in Mem94[dwArg08 + 0x00000008:real32] : real32)
	T_887 (in Mem94[dwArg04 + 0x00000008:real32] : real32)
	T_939 (in Mem303[edi_83 + 0x00000008:real32] : real32)
Eq_46: (union (real32 u0) (real64 u1))
	T_46 (in Mem0[eax + 0x00000008:real32] * Mem0[edx + 0x00000008:real32] : word32)
Eq_56: (struct (0 real32 r0000) (4 Eq_63 t0004) (8 Eq_59 t0008))
	T_56 (in edx : word32)
	T_309 (in fp - 0x0004008C : word32)
	T_328 (in fp - 0x00040074 : word32)
	T_704 (in edi_19 + 0x00000054 : word32)
	T_786 (in edi_19 + 0x00000054 : word32)
	T_796 (in edi_19 + 0x00000054 : word32)
Eq_59: (union (real32 u0) (real64 u1))
	T_59 (in Mem0[edx + 0x00000008:real32] : real32)
	T_80 (in Mem14[edx + 0x00000008:real32] : real32)
Eq_63: (union (real32 u0) (real64 u1))
	T_63 (in Mem0[edx + 0x00000004:real32] : real32)
	T_88 (in Mem24[edx + 0x00000004:real32] : real32)
Eq_65: (union (real32 u0) (real64 u1))
	T_65 (in Mem0[eax + 0x00000004:real32] * Mem0[edx + 0x00000008:real32] - Mem0[edx + 0x00000004:real32] * rLoc2_7 : real64)
	T_69 (in Mem14[ecx + 0x00000000:real32] : real32)
Eq_66: (struct (0 Eq_65 t0000) (4 Eq_82 t0004) (8 Eq_97 t0008))
	T_66 (in ecx : word32)
	T_307 (in fp - 0x00040050 : word32)
	T_326 (in fp - 0x00040050 : word32)
	T_702 (in fp - 0x00000040 : word32)
	T_785 (in fp - 0x0000004C : word32)
	T_795 (in fp - 0x0000004C : word32)
Eq_82: (union (real32 u0) (real64 u1))
	T_82 (in rLoc2_7 * Mem14[edx + 0x00000000:real32] - Mem14[edx + 0x00000008:real32] * rLoc2_17 : real64)
	T_85 (in Mem24[ecx + 0x00000004:real32] : real32)
Eq_97: (union (real32 u0) (real64 u1))
	T_97 (in rLoc2_17 * Mem24[edx + 0x00000004:real32] - Mem24[eax + 0x00000004:real32] * Mem24[edx + 0x00000000:real32] : real64)
	T_100 (in Mem29[ecx + 0x00000008:real32] : real32)
Eq_135: (fn real64 (Eq_139))
	T_135 (in sqrt : ptr32)
Eq_136: (fn Eq_139 ((ptr Eq_23), (ptr Eq_23)))
	T_136 (in fn08048438 : ptr32)
	T_137 (in signature of fn08048438 : void)
	T_143 (in fn08048438 : ptr32)
	T_640 (in fn08048438 : ptr32)
	T_650 (in fn08048438 : ptr32)
	T_669 (in fn08048438 : ptr32)
	T_677 (in fn08048438 : ptr32)
	T_680 (in fn08048438 : ptr32)
	T_726 (in fn08048438 : ptr32)
	T_745 (in fn08048438 : ptr32)
	T_788 (in fn08048438 : ptr32)
	T_810 (in fn08048438 : ptr32)
	T_820 (in fn08048438 : ptr32)
	T_969 (in fn08048438 : ptr32)
	T_1011 (in fn08048438 : ptr32)
	T_1018 (in fn08048438 : ptr32)
	T_1024 (in fn08048438 : ptr32)
	T_1162 (in fn08048438 : ptr32)
	T_1175 (in fn08048438 : ptr32)
	T_1180 (in fn08048438 : ptr32)
Eq_139: (union (32 u0) (64 u1) (real32 u2) (real64 u3))
	T_139 (in fn08048438(eax, eax) : real64)
	T_145 (in fn08048438(eax, eax) : real64)
	T_626 (in rLoc1_126 : real64)
	T_628 (in rLoc5C_121 : real32)
	T_639 (in rLoc1_164 : real64)
	T_643 (in fn08048438(fp - 0x00000028, dwArg04) : real64)
	T_649 (in Mem0[edi_19 + 0x00000064:real32] : real32)
	T_653 (in fn08048438(edi_19 + 0x00000030, dwArg04) : real64)
	T_663 (in rLoc1_192 : real64)
	T_668 (in Mem0[edi_19 + 0x00000068:real32] : real32)
	T_672 (in fn08048438(edi_19 + 0x00000018, ecx) : real64)
	T_673 (in Mem0[edi_19 + 0x00000068:real32] - fn08048438(edi_19 + 0x00000018, ecx) : word32)
	T_676 (in Mem208[edi_19 + 0x00000068:real32] : real32)
	T_679 (in fn08048438(edi_19 + 0x00000018, dwArg04) : real64)
	T_682 (in fn08048438(edi_19 + 0x00000018, dwArg04) : real64)
	T_685 (in Mem0[edi_19 + 0x0000006C:real32] : real32)
	T_686 (in Mem0[edi_19 + 0x0000006C:real32] / rLoc1_192 : word32)
	T_689 (in Mem201[edi_19 + 0x0000006C:real32] : real32)
	T_691 (in Mem0[0x08049A08:real32] : real32)
	T_694 (in Mem0[0x08049A08:real32] : real32)
	T_706 (in rLoc1_239 : real64)
	T_716 (in sqrt(rLoc40 * rLoc40 + rLoc3C * rLoc3C + rLoc38 * rLoc38) : real64)
	T_718 (in Mem0[0x08049A08:real32] : real32)
	T_725 (in rLoc1_248 : real64)
	T_730 (in fn08048438(fp - 0x00000034, fp - 0x00000040) : real64)
	T_744 (in rLoc1_298 : real64)
	T_749 (in fn08048438(fp - 0x00000034, edi_19 + 0x00000054) : real64)
	T_792 (in fn08048438(fp - 0x0000004C, fp - 0x00000040) : real64)
	T_812 (in fn08048438(dwArg04, fp - 0x0000004C) : real64)
	T_824 (in fn08048438(fp - 0x00000028, fp - 0x00000028) : real64)
	T_973 (in fn08048438(edi_83 + 0x00000018, fp - 0x00000040) : real64)
	T_1014 (in fn08048438(edi_83 + 0x00000018, fp - 0x00000040) : real64)
	T_1022 (in fn08048438(edi_83 + 0x0000000C, edi_83 + 0x0000003C) : real64)
	T_1027 (in fn08048438(edi_83 + 0x00000018, edi_83 + 0x0000003C) : real64)
	T_1163 (in fn08048438(edi_105, edi_105) : real64)
	T_1164 (in rLoc1_135 * rLoc1_135 - fn08048438(edi_105, edi_105) : real64)
	T_1167 (in Mem143[esi_124 + 0x00000064:real32] : real32)
	T_1176 (in fn08048438(edi_105, ebx_126) : real64)
	T_1179 (in Mem132[esi_124 + 0x0000006C:real32] : real32)
	T_1181 (in fn08048438(ebx_126, esi_124) : real64)
	T_1184 (in Mem134[esi_124 + 0x00000068:real32] : real32)
Eq_141: (union (real32 u0) (real64 u1))
	T_141 (in rLoc1_9 : real64)
	T_146 (in sqrt(fn08048438(eax, eax)) : real64)
Eq_142: (fn Eq_141 (Eq_139))
	T_142 (in sqrt : ptr32)
Eq_147: (struct (0 real32 r0000))
	T_147 (in 0x08049A00 : ptr32)
Eq_172: (fn void ())
	T_172 (in fn08048398 : ptr32)
	T_173 (in signature of fn08048398 : void)
Eq_183: (struct (0 int32 dw0000))
	T_183 (in esi_65 : word32)
	T_190 (in eax + ((edi_10 << 0x00000008) + ebx_44) * 0x00000004 : word32)
Eq_184: (struct (0 (arr Eq_1597) a0000) (40 (arr Eq_1598) a0040))
	T_184 (in eax : word32)
	T_314 (in fp - 0x0004000C : word32)
	T_332 (in fp - 0x0004000C : word32)
	T_341 (in fp - 0x00040008 : word32)
Eq_246: (fn void ())
	T_246 (in fn08048418 : ptr32)
	T_247 (in signature of fn08048418 : void)
Eq_301: (fn void ((ptr Eq_23), (ptr Eq_66), (ptr Eq_56)))
	T_301 (in fn0804844D : ptr32)
	T_302 (in signature of fn0804844D : void)
	T_321 (in fn0804844D : ptr32)
	T_700 (in fn0804844D : ptr32)
	T_781 (in fn0804844D : ptr32)
	T_793 (in fn0804844D : ptr32)
Eq_311: (fn void ((ptr Eq_184), int32))
	T_311 (in fn080484CA : ptr32)
	T_312 (in signature of fn080484CA : void)
	T_330 (in fn080484CA : ptr32)
	T_338 (in fn080484CA : ptr32)
Eq_318: (fn void ())
	T_318 (in fn080483E8 : ptr32)
	T_319 (in signature of fn080483E8 : void)
	T_336 (in fn080483E8 : ptr32)
	T_345 (in fn080483E8 : ptr32)
	T_360 (in fn080483E8 : ptr32)
	T_387 (in fn080483E8 : ptr32)
	T_1268 (in fn080483E8 : ptr32)
	T_1295 (in fn080483E8 : ptr32)
	T_1304 (in fn080483E8 : ptr32)
	T_1325 (in fn080483E8 : ptr32)
	T_1336 (in fn080483E8 : ptr32)
	T_1347 (in fn080483E8 : ptr32)
	T_1358 (in fn080483E8 : ptr32)
	T_1369 (in fn080483E8 : ptr32)
	T_1378 (in fn080483E8 : ptr32)
	T_1398 (in fn080483E8 : ptr32)
	T_1411 (in fn080483E8 : ptr32)
Eq_347: (fn void (byte, Eq_349, Eq_350, Eq_351, Eq_352))
	T_347 (in fn08048775 : ptr32)
	T_348 (in signature of fn08048775 : void)
	T_1262 (in fn08048775 : ptr32)
	T_1297 (in fn08048775 : ptr32)
	T_1371 (in fn08048775 : ptr32)
Eq_349: (union (real64 u0) (real32 u1))
	T_349 (in dwArg04 : word32)
	T_354 (in dwArg00 : word32)
	T_416 (in dwArg04 : word32)
	T_426 (in dwArg04 - rLoc1_442 : real64)
	T_466 (in dwArg04 + rLoc1_273 : word32)
	T_494 (in dwArg04 - rLoc1_273 : word32)
	T_1264 (in (real64) edi_114 : real64)
	T_1299 (in 0x00000000 : word32)
	T_1311 (in 0x00000000 : word32)
	T_1373 (in 0x00000000 : word32)
Eq_350: (union (ui32 u0) (real32 u1) (real64 u2))
	T_350 (in dwArg08 : word32)
	T_355 (in dwArg04 : word32)
	T_417 (in dwArg08 : word32)
	T_436 (in rLoc1_442 + dwArg08 : word32)
	T_476 (in dwArg08 + rLoc1_273 : word32)
	T_484 (in dwArg08 - rLoc1_273 : word32)
	T_503 (in dwArg08 - rLoc1_273 : word32)
	T_522 (in dwArg08 + rLoc1_273 : word32)
	T_558 (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) : real64)
	T_1243 (in dwLoc400D4_103 : word32)
	T_1244 (in 0x00000000 : word32)
	T_1276 (in dwLoc400D4_103 + 0x00000001 : word32)
	T_1300 (in 0x41F00000 : word32)
	T_1312 (in 0xC2C80000 : word32)
	T_1374 (in 0x41800000 : word32)
Eq_351: (union (real32 u0) (real64 u1))
	T_351 (in dwArg0C : word32)
	T_356 (in dwArg08 : word32)
	T_396 (in Mem426[fp - 0x000400F4:word32] : word32)
	T_418 (in rArg0C : real32)
	T_427 (in 0x00040080 : word32)
	T_444 (in Mem280[fp - 0x000400F4:word32] : word32)
	T_467 (in 0x00040080 : word32)
	T_512 (in rArg0C + rLoc1_273 : word32)
	T_532 (in rArg0C + rLoc1_273 : word32)
	T_583 (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) : real64)
	T_607 (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) + rArg0C : word32)
	T_1265 (in 0xC1C80000 : word32)
	T_1301 (in 0xC20C0000 : word32)
	T_1313 (in 0xC1F00000 : word32)
	T_1375 (in 0xC1A00000 : word32)
Eq_352: (union (real64 u0) (word32 u1))
	T_352 (in dwArg10 : word32)
	T_358 (in (real64) eax : real64)
	T_1266 (in 0x40000000 : word32)
	T_1302 (in 0x41700000 : word32)
	T_1376 (in 0x41700000 : word32)
Eq_367: (fn void (byte, word32, word32, word32, real32, word32, word32))
	T_367 (in fn080486BA : ptr32)
	T_368 (in signature of fn080486BA : void)
	T_1286 (in fn080486BA : ptr32)
	T_1316 (in fn080486BA : ptr32)
	T_1327 (in fn080486BA : ptr32)
	T_1338 (in fn080486BA : ptr32)
	T_1349 (in fn080486BA : ptr32)
	T_1360 (in fn080486BA : ptr32)
Eq_393: (struct (FFFBFF0C Eq_351 tFFFBFF0C))
	T_393 (in fp : ptr32)
Eq_397: (union (real32 u0) (real64 u1))
	T_397 (in rLoc1_442 : real64)
	T_407 (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) : real64)
Eq_413: (fn void (int32, word32, int32, word32, Eq_349, Eq_350, Eq_351, int32))
	T_413 (in fn0804881D : ptr32)
	T_414 (in signature of fn0804881D : void)
	T_431 (in fn0804881D : ptr32)
	T_461 (in fn0804881D : ptr32)
	T_472 (in fn0804881D : ptr32)
	T_480 (in fn0804881D : ptr32)
	T_490 (in fn0804881D : ptr32)
	T_499 (in fn0804881D : ptr32)
	T_507 (in fn0804881D : ptr32)
	T_518 (in fn0804881D : ptr32)
	T_528 (in fn0804881D : ptr32)
	T_539 (in fn0804881D : ptr32)
	T_564 (in fn0804881D : ptr32)
	T_587 (in fn0804881D : ptr32)
	T_1306 (in fn0804881D : ptr32)
Eq_445: (union (real32 u0) (real64 u1))
	T_445 (in rLoc1_273 : real64)
	T_455 (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) : real64)
Eq_606: (union (real32 u0) (real64 u1))
	T_606 (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) : real64)
Eq_632: (fn void ((ptr Eq_23), (ptr Eq_23), (ptr Eq_23)))
	T_632 (in fn0804847F : ptr32)
	T_633 (in signature of fn0804847F : void)
	T_696 (in fn0804847F : ptr32)
	T_953 (in fn0804847F : ptr32)
	T_981 (in fn0804847F : ptr32)
	T_1002 (in fn0804847F : ptr32)
	T_1065 (in fn0804847F : ptr32)
Eq_658: (union (real32 u0) (real64 u1))
	T_658 (in rLoc2_130 : real64)
	T_660 (in rLoc2_125 * rLoc1_126 + rLoc5C_121 : word32)
Eq_659: (union (real32 u0) (real64 u1))
	T_659 (in rLoc2_125 * rLoc1_126 : real64)
Eq_690: (struct (0 Eq_139 t0000))
	T_690 (in 0x08049A08 : ptr32)
Eq_707: (fn Eq_139 (real64))
	T_707 (in sqrt : ptr32)
Eq_708: (union (real32 u0) (real64 u1))
	T_708 (in rLoc40 : real32)
Eq_710: (union (real32 u0) (real64 u1))
	T_710 (in rLoc3C : real32)
Eq_713: (union (real32 u0) (real64 u1))
	T_713 (in rLoc38 : real32)
Eq_717: (struct (0 Eq_139 t0000))
	T_717 (in 0x08049A08 : ptr32)
Eq_720: (fn void ((ptr Eq_23)))
	T_720 (in fn080484A2 : ptr32)
	T_721 (in signature of fn080484A2 : void)
	T_798 (in fn080484A2 : ptr32)
	T_966 (in fn080484A2 : ptr32)
	T_987 (in fn080484A2 : ptr32)
	T_1225 (in fn080484A2 : ptr32)
Eq_731: (union (32 u0) (64 u1) (real32 u2) (real64 u3))
	T_731 (in rLoc58_253 : real32)
	T_735 (in DPB(rLoc1_248, SLICE(rLoc1_248, byte, 24) & 0x7F, 24, 8) : real32)
	T_738 (in Mem0[edi_19 + 0x00000060:real32] : real32)
	T_742 (in Mem0[edi_19 + 0x00000060:real32] : real32)
	T_765 (in rLoc2_322 : real64)
	T_766 (in rLoc3_310 * rLoc3_310 : real64)
	T_775 (in Mem0[edi_19 + 0x00000060:real32] : real32)
	T_779 (in Mem0[edi_19 + 0x00000060:real32] : real32)
	T_801 (in rLoc1_283 : real64)
	T_804 (in Mem0[edi_19 + 0x00000060:real32] : real32)
	T_815 (in rLoc2_172 : real64)
	T_818 (in Mem0[edi_19 + 0x00000060:real32] : real32)
	T_921 (in Mem100[edi_83 + 0x00000060:real32] : real32)
	T_932 (in Mem297[edi_83 + 0x00000060:real32] : real32)
	T_943 (in Mem303[edi_83 + 0x00000060:real32] : real32)
	T_1157 (in rLoc1_135 : real64)
	T_1160 (in Mem0[esi_124 + 0x00000060:real32] : real32)
Eq_750: (union (real32 u0) (real64 u1))
	T_750 (in rLoc3_310 : real64)
	T_754 (in rLoc1_298 * Mem0[edi_19 + 0x0000005C:real32] : word32)
Eq_758: (union (real32 u0) (real64 u1))
	T_758 (in Mem0[edi_19 + 0x00000054:real32] : real32)
Eq_763: (union (real32 u0) (real64 u1))
	T_763 (in Mem0[edi_19 + 0x00000058:real32] : real32)
Eq_767: (fn real64 (real64))
	T_767 (in sqrt : ptr32)
Eq_805: (fn real64 (real64))
	T_805 (in sqrt : ptr32)
Eq_813: (fn real64 (Eq_658))
	T_813 (in sqrt : ptr32)
Eq_832: (union (64 u0) (real32 u1) (real64 u2))
	T_832 (in rLoc1_23 : real64)
	T_834 (in Mem0[0x08049A0C:real32] : real32)
	T_837 (in rLoc1_322 : real64)
	T_848 (in rLoc2 : real64)
Eq_833: (struct (0 Eq_832 t0000))
	T_833 (in 0x08049A0C : ptr32)
Eq_838: (fn byte ((ptr Eq_23), (ptr Eq_23), int32, (ptr Eq_23), real32, (ptr real64)))
	T_838 (in fn08048C66 : ptr32)
	T_839 (in signature of fn08048C66 : void)
	T_992 (in fn08048C66 : ptr32)
Eq_855: (union (real32 u0) (real64 u1))
	T_855 (in rLoc2_89 : real64)
	T_864 (in rLoc2 * Mem0[dwArg08 + 0x00000000:real32] + Mem0[dwArg04 + 0x00000000:real32] : word32)
	T_867 (in Mem90[edi_83 + 0x0000000C:real32] : real32)
Eq_868: (union (real32 u0) (real64 u1))
	T_868 (in rLoc3_93 : real64)
	T_876 (in Mem90[dwArg08 + 0x00000004:real32] * rLoc1_23 + Mem90[dwArg04 + 0x00000004:real32] : word32)
	T_879 (in Mem94[edi_83 + 0x00000010:real32] : real32)
Eq_872: (union (real32 u0) (real64 u1))
	T_872 (in Mem90[dwArg08 + 0x00000004:real32] * rLoc1_23 : real64)
Eq_880: (union (real32 u0) (real64 u1))
	T_880 (in rLoc3_99 : real64)
	T_888 (in rLoc1_23 * Mem94[dwArg08 + 0x00000008:real32] + Mem94[dwArg04 + 0x00000008:real32] : word32)
	T_891 (in Mem100[edi_83 + 0x00000014:real32] : real32)
Eq_898: (struct (0 word32 dw0000) (4 word32 dw0004) (8 word32 dw0008))
	T_898 (in eax : word32)
	T_1100 (in fp - 0x00000028 : word32)
Eq_961: (union (32 u0) (64 u1) (real32 u2) (real64 u3))
	T_961 (in rLoc1_113 : real64)
	T_965 (in fn08048498(fp - 0x00000040) : real64)
	T_991 (in rLoc1_271 : real64)
	T_1000 (in Mem100[0x08049A10:real32] : real32)
	T_1010 (in fn08048498(fp - 0x0000004C) : real64)
Eq_962: (fn Eq_961 ((ptr Eq_23)))
	T_962 (in fn08048498 : ptr32)
	T_963 (in signature of fn08048498 : void)
	T_1008 (in fn08048498 : ptr32)
Eq_999: (struct (0 Eq_961 t0000))
	T_999 (in 0x08049A10 : ptr32)
Eq_1015: (fn void ())
	T_1015 (in fn08048428 : ptr32)
	T_1016 (in signature of fn08048428 : void)
Eq_1023: (union (64 u0) (real64 u1))
	T_1023 (in rLoc1_155 : real64)
	T_1028 (in -fn08048438(edi_83 + 0x00000018, edi_83 + 0x0000003C) : real64)
Eq_1030: (fn uint16 ())
	T_1030 (in __fstcw : ptr32)
Eq_1032: (fn real64 (real64, Eq_1023))
	T_1032 (in atan : ptr32)
Eq_1033: (fn real64 (real64))
	T_1033 (in sqrt : ptr32)
Eq_1040: (fn void (word16))
	T_1040 (in __fldcw : ptr32)
Eq_1046: (fn void (uint16))
	T_1046 (in __fldcw : ptr32)
Eq_1078: (struct (FFFFFFA4 word32 dwFFFFFFA4) (FFFFFFAC word32 dwFFFFFFAC) (FFFFFFB0 word32 dwFFFFFFB0))
	T_1078 (in fp : ptr32)
Eq_1092: (fn byte ((ptr Eq_898), int32, (ptr Eq_23), word32, word32, word32, word32, real64, (ptr real64)))
	T_1092 (in fn08048EBE : ptr32)
	T_1093 (in signature of fn08048EBE : void)
Eq_1107: (fn uint16 ())
	T_1107 (in __fstcw : ptr32)
Eq_1114: (fn void (word16))
	T_1114 (in __fldcw : ptr32)
Eq_1116: (fn void (uint16))
	T_1116 (in __fldcw : ptr32)
Eq_1118: (fn void (word16))
	T_1118 (in __fldcw : ptr32)
Eq_1120: (fn void (uint16))
	T_1120 (in __fldcw : ptr32)
Eq_1122: (fn void (word16))
	T_1122 (in __fldcw : ptr32)
Eq_1124: (fn void (uint16))
	T_1124 (in __fldcw : ptr32)
Eq_1139: (struct (0 (arr Eq_1600) a0000) (4 (arr Eq_1599) a0004))
	T_1139 (in ecx : word32)
	T_1188 (in eax_28 : word32)
	T_1192 (in Mem0[eax + 0x00000014:word32] : word32)
Eq_1185: (fn void ())
	T_1185 (in fn080483D8 : ptr32)
	T_1186 (in signature of fn080483D8 : void)
Eq_1189: (struct (14 (ptr Eq_1139) ptr0014))
	T_1189 (in eax : word32)
Eq_1193: (fn void ())
	T_1193 (in fn080483A8 : ptr32)
	T_1194 (in signature of fn080483A8 : void)
Eq_1197: (struct (0 word32 dw0000))
	T_1197 (in 0x0824A514 : ptr32)
Eq_1208: (struct 000C (0 Eq_1213 t0000) (4 Eq_1217 t0004) (8 word32 dw0008) (C Eq_1208 t000C))
	T_1208 (in ebx_49 : word32)
	T_1212 (in ebp_43 *s 0x0000000C + 0x0964CD20 : word32)
	T_1232 (in ebx_49 + 0x0000000C : word32)
Eq_1213: (union (real32 u0) (real64 u1))
	T_1213 (in (real64) esi_48 : real64)
	T_1216 (in Mem60[ebx_49 + 0x00000000:real32] : real32)
Eq_1217: (union (real32 u0) (real64 u1))
	T_1217 (in (real64) dwLoc400C0_32 : real64)
	T_1220 (in Mem63[ebx_49 + 0x00000004:real32] : real32)
Eq_1249: (struct 0001 (0 byte b0000) (1 Eq_1249 t0001))
	T_1249 (in dwLoc400CC_102 : word32)
	T_1259 (in dwLoc400CC_102 + 0x00000001 : word32)
	T_1285 (in dwLoc400C8_138 + 0x00000000 : word32)
Eq_1271: (struct (0 byte b0000))
	T_1271 (in 0x0824A59D : word32)
Eq_1380: (fn word32 (byte, real32, word32, word32, word32, word32, word32, word32))
	T_1380 (in fn08048613 : ptr32)
	T_1381 (in signature of fn08048613 : void)
	T_1401 (in fn08048613 : ptr32)
Eq_1413: (union (real64 u0) (real32 u1))
	T_1413 (in 0xC2F00000 : word32)
	T_1415 (in Mem425[0x0824A508:word32] : word32)
	T_1506 (in 0xC2F00000 : word32)
	T_1508 (in Mem474[0x0824A508:word32] : word32)
	T_1535 (in rLoc1_556 * rLoc3_559 : real64)
	T_1537 (in Mem565[0x0824A508:real32] : real32)
Eq_1414: (struct (0 Eq_1413 t0000))
	T_1414 (in 0x0824A508 : ptr32)
Eq_1416: (fn void ())
	T_1416 (in fn080483B8 : ptr32)
	T_1417 (in signature of fn080483B8 : void)
	T_1428 (in fn080483B8 : ptr32)
	T_1434 (in fn080483B8 : ptr32)
	T_1465 (in fn080483B8 : ptr32)
	T_1504 (in fn080483B8 : ptr32)
	T_1552 (in fn080483B8 : ptr32)
Eq_1443: (union (real32 u0) (real64 u1))
	T_1443 (in rLoc1_585 : real64)
	T_1447 (in (real64) ebx_402 * Mem425[0x08049A34:real32] : word32)
Eq_1444: (union (real32 u0) (real64 u1))
	T_1444 (in (real64) ebx_402 : real64)
Eq_1445: (struct (0 real32 r0000))
	T_1445 (in 0x08049A34 : ptr32)
Eq_1449: (fn real64 (Eq_1443))
	T_1449 (in cos : ptr32)
Eq_1451: (union (real32 u0) (real64 u1))
	T_1451 (in rLoc2_588 : real64)
	T_1453 (in sin(rLoc1_585) : real64)
	T_1459 (in Mem594[0x0824A500:real32] : real32)
	T_1526 (in rLoc2_557 : real64)
	T_1528 (in sin(rLoc1_548) : real64)
	T_1534 (in Mem563[0x0824A500:real32] : real32)
	T_1573 (in rLoc2_520 : real64)
	T_1575 (in sin(rLoc1_513) : real64)
	T_1581 (in Mem526[0x0824A500:real32] : real32)
Eq_1452: (fn Eq_1451 (Eq_1443))
	T_1452 (in sin : ptr32)
Eq_1455: (struct (0 Eq_1456 t0000))
	T_1455 (in 0x08049A30 : ptr32)
Eq_1456: (union (real32 u0) (real64 u1))
	T_1456 (in Mem425[0x08049A30:real32] : real32)
	T_1578 (in Mem474[0x08049A30:real32] : real32)
Eq_1458: (struct (0 Eq_1451 t0000))
	T_1458 (in 0x0824A500 : ptr32)
Eq_1460: (union (real32 u0) (real64 u1))
	T_1460 (in rLoc1_587 * rLoc3_590 : real64)
	T_1462 (in Mem596[0x0824A504:real32] : real32)
	T_1520 (in 0xC1200000 : word32)
	T_1522 (in Mem554[0x0824A504:word32] : word32)
	T_1582 (in rLoc1_519 * rLoc3_522 : real64)
	T_1584 (in Mem528[0x0824A504:real32] : real32)
Eq_1461: (struct (0 Eq_1460 t0000))
	T_1461 (in 0x0824A504 : ptr32)
Eq_1471: (fn void ((ptr Eq_23), (ptr Eq_1139), int32))
	T_1471 (in fn0804938F : ptr32)
	T_1472 (in signature of fn0804938F : void)
	T_1538 (in fn0804938F : ptr32)
	T_1585 (in fn0804938F : ptr32)
Eq_1476: (fn void ())
	T_1476 (in fn080483F8 : ptr32)
	T_1477 (in signature of fn080483F8 : void)
	T_1542 (in fn080483F8 : ptr32)
	T_1589 (in fn080483F8 : ptr32)
Eq_1479: (fn void ())
	T_1479 (in fn080483C8 : ptr32)
	T_1480 (in signature of fn080483C8 : void)
	T_1544 (in fn080483C8 : ptr32)
	T_1591 (in fn080483C8 : ptr32)
Eq_1488: (struct 40080 (40080 Eq_1488 t40080) (940C8A4 Eq_1495 t940C8A4))
	T_1488 (in eax_620 : word32)
	T_1489 (in 0x00000000 : word32)
	T_1501 (in eax_620 + 0x00040080 : word32)
	T_1502 (in 0x001C0380 : word32)
Eq_1490: (union (real32 u0) (real64 u1))
	T_1490 (in rLoc1_623 : real64)
	T_1492 (in Mem596[0x08049A2C:real32] : real32)
Eq_1491: (struct (0 Eq_1490 t0000))
	T_1491 (in 0x08049A2C : ptr32)
Eq_1495: (union (real32 u0) (real64 u1))
	T_1495 (in Mem596[eax_620 + 0x0940C8A4:real32] : real32)
	T_1496 (in Mem596[eax_620 + 0x0940C8A4:real32] + rLoc1_623 : real64)
	T_1499 (in Mem627[eax_620 + 0x0940C8A4:real32] : real32)
Eq_1507: (struct (0 Eq_1413 t0000))
	T_1507 (in 0x0824A508 : ptr32)
Eq_1515: (union (real32 u0) (real64 u1))
	T_1515 (in rLoc1_548 : real64)
	T_1519 (in (real64) ebx_451 * Mem425[0x08049A34:real32] : word32)
Eq_1516: (union (real32 u0) (real64 u1))
	T_1516 (in (real64) ebx_451 : real64)
Eq_1517: (struct (0 real32 r0000))
	T_1517 (in 0x08049A34 : ptr32)
Eq_1521: (struct (0 Eq_1460 t0000))
	T_1521 (in 0x0824A504 : ptr32)
Eq_1524: (fn real64 (Eq_1515))
	T_1524 (in cos : ptr32)
Eq_1527: (fn Eq_1451 (Eq_1515))
	T_1527 (in sin : ptr32)
Eq_1530: (struct (0 Eq_1531 t0000))
	T_1530 (in 0x08049A38 : ptr32)
Eq_1531: (union (real32 u0) (real64 u1))
	T_1531 (in Mem554[0x08049A38:real32] : real32)
Eq_1533: (struct (0 Eq_1451 t0000))
	T_1533 (in 0x0824A500 : ptr32)
Eq_1536: (struct (0 Eq_1413 t0000))
	T_1536 (in 0x0824A508 : ptr32)
Eq_1557: (fn void ())
	T_1557 (in fn08048408 : ptr32)
	T_1558 (in signature of fn08048408 : void)
Eq_1560: (fn void (byte))
	T_1560 (in __syscall : ptr32)
Eq_1565: (union (real32 u0) (real64 u1))
	T_1565 (in rLoc1_513 : real64)
	T_1569 (in (real64) ebx_472 * Mem474[0x08049A34:real32] : word32)
Eq_1566: (union (real32 u0) (real64 u1))
	T_1566 (in (real64) ebx_472 : real64)
Eq_1567: (struct (0 real32 r0000))
	T_1567 (in 0x08049A34 : ptr32)
Eq_1571: (fn real64 (Eq_1565))
	T_1571 (in cos : ptr32)
Eq_1574: (fn Eq_1451 (Eq_1565))
	T_1574 (in sin : ptr32)
Eq_1577: (struct (0 Eq_1456 t0000))
	T_1577 (in 0x08049A30 : ptr32)
Eq_1580: (struct (0 Eq_1451 t0000))
	T_1580 (in 0x0824A500 : ptr32)
Eq_1583: (struct (0 Eq_1460 t0000))
	T_1583 (in 0x0824A504 : ptr32)
Eq_1597: (struct 0004 (0 word32 dw0000))
	T_1597
Eq_1598: (struct 0004 (0 word32 dw0000))
	T_1598
Eq_1599: (struct 0004 (0 word32 dw0000))
	T_1599
Eq_1600: (struct 0004 (0 word32 dw0000))
	T_1600
Eq_1601: (struct 40080 (0 Eq_1495 t0000))
	T_1601
	T_1602
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in 0x0804A0BC : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (struct (0 T_3 t0000)))
T_3: (in Mem0[0x0804A0BC:word32] : word32)
  Class: Eq_3
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_4: (in 0x0804A0C0 : ptr32)
  Class: Eq_4
  DataType: (ptr Eq_4)
  OrigDataType: (ptr (struct (0 T_5 t0000)))
T_5: (in Mem0[0x0804A0C0:word32] : word32)
  Class: Eq_5
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_6: (in 0x0804A0C4 : ptr32)
  Class: Eq_6
  DataType: (ptr Eq_6)
  OrigDataType: (ptr (struct (0 T_7 t0000)))
T_7: (in Mem0[0x0804A0C4:word32] : word32)
  Class: Eq_7
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_8: (in 0x0804A0C8 : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (struct (0 T_9 t0000)))
T_9: (in Mem0[0x0804A0C8:word32] : word32)
  Class: Eq_9
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_10: (in 0x0804A0CC : ptr32)
  Class: Eq_10
  DataType: (ptr Eq_10)
  OrigDataType: (ptr (struct (0 T_11 t0000)))
T_11: (in Mem0[0x0804A0CC:word32] : word32)
  Class: Eq_11
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_12: (in 0x0804A0D0 : ptr32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (struct (0 T_13 t0000)))
T_13: (in Mem0[0x0804A0D0:word32] : word32)
  Class: Eq_13
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_14: (in 0x0804A0D4 : ptr32)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (struct (0 T_15 t0000)))
T_15: (in Mem0[0x0804A0D4:word32] : word32)
  Class: Eq_15
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_16: (in 0x0804A0D8 : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (struct (0 T_17 t0000)))
T_17: (in Mem0[0x0804A0D8:word32] : word32)
  Class: Eq_17
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_18: (in 0x0804A0DC : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (struct (0 T_19 t0000)))
T_19: (in Mem0[0x0804A0DC:word32] : word32)
  Class: Eq_19
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_20: (in 0x0804A0E0 : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (struct (0 T_21 t0000)))
T_21: (in Mem0[0x0804A0E0:word32] : word32)
  Class: Eq_21
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_22: (in rLoc1 : real64)
  Class: Eq_22
  DataType: real64
  OrigDataType: real64
T_23: (in eax : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_26 t0000) (4 T_34 t0004) (8 T_42 t0008)))
T_24: (in 0x00000000 : word32)
  Class: Eq_24
  DataType: word32
  OrigDataType: word32
T_25: (in eax + 0x00000000 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in Mem0[eax + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_27: (in edx : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_30 t0000) (4 T_37 t0004) (8 T_45 t0008)))
T_28: (in 0x00000000 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_29: (in edx + 0x00000000 : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_30: (in Mem0[edx + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_31: (in Mem0[eax + 0x00000000:real32] * Mem0[edx + 0x00000000:real32] : word32)
  Class: Eq_31
  DataType: Eq_31
  OrigDataType: (union (real32 u0) (real64 u1))
T_32: (in 0x00000004 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in eax + 0x00000004 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_34: (in Mem0[eax + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real32
T_35: (in 0x00000004 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in edx + 0x00000004 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in Mem0[edx + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real32
T_38: (in Mem0[eax + 0x00000004:real32] * Mem0[edx + 0x00000004:real32] : word32)
  Class: Eq_38
  DataType: Eq_38
  OrigDataType: (union (real32 u0) (real64 u1))
T_39: (in Mem0[eax + 0x00000000:real32] * Mem0[edx + 0x00000000:real32] + Mem0[eax + 0x00000004:real32] * Mem0[edx + 0x00000004:real32] : real64)
  Class: Eq_39
  DataType: real64
  OrigDataType: real64
T_40: (in 0x00000008 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in eax + 0x00000008 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in Mem0[eax + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_43: (in 0x00000008 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in edx + 0x00000008 : word32)
  Class: Eq_44
  DataType: word32
  OrigDataType: word32
T_45: (in Mem0[edx + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_46: (in Mem0[eax + 0x00000008:real32] * Mem0[edx + 0x00000008:real32] : word32)
  Class: Eq_46
  DataType: Eq_46
  OrigDataType: (union (real32 u0) (real64 u1))
T_47: (in Mem0[eax + 0x00000000:real32] * Mem0[edx + 0x00000000:real32] + Mem0[eax + 0x00000004:real32] * Mem0[edx + 0x00000004:real32] + Mem0[eax + 0x00000008:real32] * Mem0[edx + 0x00000008:real32] : real64)
  Class: Eq_47
  DataType: real64
  OrigDataType: real64
T_48: (in rLoc2_7 : real64)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: (union (real32 u0) (real64 u1))
T_49: (in eax : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_73 t0000) (4 T_55 t0004) (8 T_52 t0008)))
T_50: (in 0x00000008 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in eax + 0x00000008 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in Mem0[eax + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_53: (in 0x00000004 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in eax + 0x00000004 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in Mem0[eax + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real32
T_56: (in edx : word32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (struct (0 T_76 t0000) (4 T_63 t0004) (8 T_59 t0008)))
T_57: (in 0x00000008 : word32)
  Class: Eq_57
  DataType: word32
  OrigDataType: word32
T_58: (in edx + 0x00000008 : word32)
  Class: Eq_58
  DataType: word32
  OrigDataType: word32
T_59: (in Mem0[edx + 0x00000008:real32] : real32)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: real32
T_60: (in Mem0[eax + 0x00000004:real32] * Mem0[edx + 0x00000008:real32] : word32)
  Class: Eq_60
  DataType: real32
  OrigDataType: real32
T_61: (in 0x00000004 : word32)
  Class: Eq_61
  DataType: word32
  OrigDataType: word32
T_62: (in edx + 0x00000004 : word32)
  Class: Eq_62
  DataType: word32
  OrigDataType: word32
T_63: (in Mem0[edx + 0x00000004:real32] : real32)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: (union (real32 u0) (real64 u1))
T_64: (in Mem0[edx + 0x00000004:real32] * rLoc2_7 : real64)
  Class: Eq_64
  DataType: real64
  OrigDataType: real64
T_65: (in Mem0[eax + 0x00000004:real32] * Mem0[edx + 0x00000008:real32] - Mem0[edx + 0x00000004:real32] * rLoc2_7 : real64)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: real64
T_66: (in ecx : word32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: (ptr (struct (0 T_69 t0000) (4 T_85 t0004) (8 T_100 t0008)))
T_67: (in 0x00000000 : word32)
  Class: Eq_67
  DataType: word32
  OrigDataType: word32
T_68: (in ecx + 0x00000000 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in Mem14[ecx + 0x00000000:real32] : real32)
  Class: Eq_65
  DataType: Eq_65
  OrigDataType: real32
T_70: (in rLoc2_17 : real64)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real32 u0) (real64 u1))
T_71: (in 0x00000000 : word32)
  Class: Eq_71
  DataType: word32
  OrigDataType: word32
T_72: (in eax + 0x00000000 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in Mem14[eax + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_74: (in 0x00000000 : word32)
  Class: Eq_74
  DataType: word32
  OrigDataType: word32
T_75: (in edx + 0x00000000 : word32)
  Class: Eq_75
  DataType: word32
  OrigDataType: word32
T_76: (in Mem14[edx + 0x00000000:real32] : real32)
  Class: Eq_76
  DataType: real32
  OrigDataType: real32
T_77: (in rLoc2_7 * Mem14[edx + 0x00000000:real32] : word32)
  Class: Eq_77
  DataType: real32
  OrigDataType: real32
T_78: (in 0x00000008 : word32)
  Class: Eq_78
  DataType: word32
  OrigDataType: word32
T_79: (in edx + 0x00000008 : word32)
  Class: Eq_79
  DataType: word32
  OrigDataType: word32
T_80: (in Mem14[edx + 0x00000008:real32] : real32)
  Class: Eq_59
  DataType: Eq_59
  OrigDataType: (union (real32 u0) (real64 u1))
T_81: (in Mem14[edx + 0x00000008:real32] * rLoc2_17 : real64)
  Class: Eq_81
  DataType: real64
  OrigDataType: real64
T_82: (in rLoc2_7 * Mem14[edx + 0x00000000:real32] - Mem14[edx + 0x00000008:real32] * rLoc2_17 : real64)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: real64
T_83: (in 0x00000004 : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in ecx + 0x00000004 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in Mem24[ecx + 0x00000004:real32] : real32)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: real32
T_86: (in 0x00000004 : word32)
  Class: Eq_86
  DataType: word32
  OrigDataType: word32
T_87: (in edx + 0x00000004 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in Mem24[edx + 0x00000004:real32] : real32)
  Class: Eq_63
  DataType: Eq_63
  OrigDataType: real32
T_89: (in rLoc2_17 * Mem24[edx + 0x00000004:real32] : word32)
  Class: Eq_89
  DataType: real32
  OrigDataType: real32
T_90: (in 0x00000004 : word32)
  Class: Eq_90
  DataType: word32
  OrigDataType: word32
T_91: (in eax + 0x00000004 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in Mem24[eax + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real32
T_93: (in 0x00000000 : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in edx + 0x00000000 : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in Mem24[edx + 0x00000000:real32] : real32)
  Class: Eq_76
  DataType: real32
  OrigDataType: real32
T_96: (in Mem24[eax + 0x00000004:real32] * Mem24[edx + 0x00000000:real32] : word32)
  Class: Eq_96
  DataType: real32
  OrigDataType: real32
T_97: (in rLoc2_17 * Mem24[edx + 0x00000004:real32] - Mem24[eax + 0x00000004:real32] * Mem24[edx + 0x00000000:real32] : real64)
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: real64
T_98: (in 0x00000008 : word32)
  Class: Eq_98
  DataType: word32
  OrigDataType: word32
T_99: (in ecx + 0x00000008 : word32)
  Class: Eq_99
  DataType: word32
  OrigDataType: word32
T_100: (in Mem29[ecx + 0x00000008:real32] : real32)
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: real32
T_101: (in eax : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_104 t0000) (4 T_116 t0004) (8 T_126 t0008)))
T_102: (in 0x00000000 : word32)
  Class: Eq_102
  DataType: word32
  OrigDataType: word32
T_103: (in eax + 0x00000000 : word32)
  Class: Eq_103
  DataType: word32
  OrigDataType: word32
T_104: (in Mem0[eax + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_105: (in edx : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_108 t0000) (4 T_119 t0004) (8 T_129 t0008)))
T_106: (in 0x00000000 : word32)
  Class: Eq_106
  DataType: word32
  OrigDataType: word32
T_107: (in edx + 0x00000000 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in Mem0[edx + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_109: (in Mem0[eax + 0x00000000:real32] - Mem0[edx + 0x00000000:real32] : word32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: word32
T_110: (in ecx : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_113 t0000) (4 T_123 t0004) (8 T_133 t0008)))
T_111: (in 0x00000000 : word32)
  Class: Eq_111
  DataType: word32
  OrigDataType: word32
T_112: (in ecx + 0x00000000 : word32)
  Class: Eq_112
  DataType: word32
  OrigDataType: word32
T_113: (in Mem7[ecx + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_114: (in 0x00000004 : word32)
  Class: Eq_114
  DataType: word32
  OrigDataType: word32
T_115: (in eax + 0x00000004 : word32)
  Class: Eq_115
  DataType: word32
  OrigDataType: word32
T_116: (in Mem7[eax + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real32
T_117: (in 0x00000004 : word32)
  Class: Eq_117
  DataType: word32
  OrigDataType: word32
T_118: (in edx + 0x00000004 : word32)
  Class: Eq_118
  DataType: word32
  OrigDataType: word32
T_119: (in Mem7[edx + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real32
T_120: (in Mem7[eax + 0x00000004:real32] - Mem7[edx + 0x00000004:real32] : word32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: word32
T_121: (in 0x00000004 : word32)
  Class: Eq_121
  DataType: word32
  OrigDataType: word32
T_122: (in ecx + 0x00000004 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in Mem11[ecx + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real32
T_124: (in 0x00000008 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in eax + 0x00000008 : word32)
  Class: Eq_125
  DataType: word32
  OrigDataType: word32
T_126: (in Mem11[eax + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_127: (in 0x00000008 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in edx + 0x00000008 : word32)
  Class: Eq_128
  DataType: word32
  OrigDataType: word32
T_129: (in Mem11[edx + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_130: (in Mem11[eax + 0x00000008:real32] - Mem11[edx + 0x00000008:real32] : word32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: word32
T_131: (in 0x00000008 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in ecx + 0x00000008 : word32)
  Class: Eq_132
  DataType: word32
  OrigDataType: word32
T_133: (in Mem14[ecx + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_134: (in rLoc1 : real64)
  Class: Eq_134
  DataType: real64
  OrigDataType: real64
T_135: (in sqrt : ptr32)
  Class: Eq_135
  DataType: (ptr Eq_135)
  OrigDataType: (ptr (fn T_140 (T_139)))
T_136: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_139 (T_138, T_138)))
T_137: (in signature of fn08048438 : void)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: 
T_138: (in eax : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_139: (in fn08048438(eax, eax) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_140: (in sqrt(fn08048438(eax, eax)) : real64)
  Class: Eq_140
  DataType: real64
  OrigDataType: real64
T_141: (in rLoc1_9 : real64)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: (union (real32 u0) (real64 u1))
T_142: (in sqrt : ptr32)
  Class: Eq_142
  DataType: (ptr Eq_142)
  OrigDataType: (ptr (fn T_146 (T_145)))
T_143: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_145 (T_144, T_144)))
T_144: (in eax : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_153 t0000) (4 T_160 t0004) (8 T_167 t0008)))
T_145: (in fn08048438(eax, eax) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_146: (in sqrt(fn08048438(eax, eax)) : real64)
  Class: Eq_141
  DataType: Eq_141
  OrigDataType: real64
T_147: (in 0x08049A00 : ptr32)
  Class: Eq_147
  DataType: (ptr Eq_147)
  OrigDataType: (ptr (struct (0 T_148 t0000)))
T_148: (in Mem0[0x08049A00:real32] : real32)
  Class: Eq_148
  DataType: real32
  OrigDataType: real32
T_149: (in Mem0[0x08049A00:real32] / rLoc1_9 : word32)
  Class: Eq_148
  DataType: real32
  OrigDataType: real32
T_150: (in Mem12[0x08049A00:real32] : real32)
  Class: Eq_148
  DataType: real32
  OrigDataType: real32
T_151: (in 0x00000000 : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in eax + 0x00000000 : word32)
  Class: Eq_152
  DataType: word32
  OrigDataType: word32
T_153: (in Mem12[eax + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real32 u0) (real64 u1))
T_154: (in Mem12[eax + 0x00000000:real32] * rLoc1_9 : real64)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real64
T_155: (in 0x00000000 : word32)
  Class: Eq_155
  DataType: word32
  OrigDataType: word32
T_156: (in eax + 0x00000000 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in Mem15[eax + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_158: (in 0x00000004 : word32)
  Class: Eq_158
  DataType: word32
  OrigDataType: word32
T_159: (in eax + 0x00000004 : word32)
  Class: Eq_159
  DataType: word32
  OrigDataType: word32
T_160: (in Mem15[eax + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: (union (real32 u0) (real64 u1))
T_161: (in Mem15[eax + 0x00000004:real32] * rLoc1_9 : real64)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real64
T_162: (in 0x00000004 : word32)
  Class: Eq_162
  DataType: word32
  OrigDataType: word32
T_163: (in eax + 0x00000004 : word32)
  Class: Eq_163
  DataType: word32
  OrigDataType: word32
T_164: (in Mem18[eax + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real32
T_165: (in 0x00000008 : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in eax + 0x00000008 : word32)
  Class: Eq_166
  DataType: word32
  OrigDataType: word32
T_167: (in Mem18[eax + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_168: (in rLoc1_9 * Mem18[eax + 0x00000008:real32] : word32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_169: (in 0x00000008 : word32)
  Class: Eq_169
  DataType: word32
  OrigDataType: word32
T_170: (in eax + 0x00000008 : word32)
  Class: Eq_170
  DataType: word32
  OrigDataType: word32
T_171: (in Mem20[eax + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_172: (in fn08048398 : ptr32)
  Class: Eq_172
  DataType: (ptr Eq_172)
  OrigDataType: (ptr (fn T_174 ()))
T_173: (in signature of fn08048398 : void)
  Class: Eq_172
  DataType: (ptr Eq_172)
  OrigDataType: 
T_174: (in fn08048398() : void)
  Class: Eq_174
  DataType: void
  OrigDataType: void
T_175: (in edi_10 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_176: (in 0x00000000 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_177: (in edx_eax_43 : int64)
  Class: Eq_177
  DataType: int64
  OrigDataType: int64
T_178: (in (int64) edi_10 : int64)
  Class: Eq_177
  DataType: int64
  OrigDataType: int64
T_179: (in ebx_44 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_180: (in 0x00000064 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_181: (in eax_196 : word32)
  Class: Eq_181
  DataType: int32
  OrigDataType: int32
T_182: (in eax_185 : word32)
  Class: Eq_182
  DataType: int32
  OrigDataType: int32
T_183: (in esi_65 : word32)
  Class: Eq_183
  DataType: (ptr Eq_183)
  OrigDataType: (ptr (struct (0 T_182 t0000)))
T_184: (in eax : word32)
  Class: Eq_184
  DataType: (ptr Eq_184)
  OrigDataType: (ptr (struct (0 (arr T_1597) a0000) (40 (arr T_1598) a0040)))
T_185: (in 0x00000008 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_186: (in edi_10 << 0x00000008 : word32)
  Class: Eq_186
  DataType: ui32
  OrigDataType: ui32
T_187: (in (edi_10 << 0x00000008) + ebx_44 : word32)
  Class: Eq_187
  DataType: ui32
  OrigDataType: ui32
T_188: (in 0x00000004 : word32)
  Class: Eq_188
  DataType: ui32
  OrigDataType: ui32
T_189: (in ((edi_10 << 0x00000008) + ebx_44) * 0x00000004 : word32)
  Class: Eq_189
  DataType: ui32
  OrigDataType: ui32
T_190: (in eax + ((edi_10 << 0x00000008) + ebx_44) * 0x00000004 : word32)
  Class: Eq_183
  DataType: (ptr Eq_183)
  OrigDataType: word32
T_191: (in 0x00FFFFFF : word32)
  Class: Eq_182
  DataType: int32
  OrigDataType: word32
T_192: (in 0x00000000 : word32)
  Class: Eq_192
  DataType: word32
  OrigDataType: word32
T_193: (in esi_65 + 0x00000000 : word32)
  Class: Eq_193
  DataType: word32
  OrigDataType: word32
T_194: (in Mem66[esi_65 + 0x00000000:word32] : word32)
  Class: Eq_182
  DataType: int32
  OrigDataType: word32
T_195: (in edx : word32)
  Class: Eq_195
  DataType: int32
  OrigDataType: word32
T_196: (in (byte) edx : byte)
  Class: Eq_196
  DataType: byte
  OrigDataType: byte
T_197: (in 0x00 : byte)
  Class: Eq_196
  DataType: byte
  OrigDataType: byte
T_198: (in (byte) edx != 0x00 : bool)
  Class: Eq_198
  DataType: bool
  OrigDataType: bool
T_199: (in (byte) edx : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in 0x01 : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_201: (in (byte) edx != 0x01 : bool)
  Class: Eq_201
  DataType: bool
  OrigDataType: bool
T_202: (in 0x00000000 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in ebx_44 + 0x00000000 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in ebx_44 + 0x00000000 ^ edi_10 : word32)
  Class: Eq_181
  DataType: int32
  OrigDataType: word32
T_205: (in 0x00010101 : word32)
  Class: Eq_205
  DataType: int32
  OrigDataType: int32
T_206: (in eax_196 *s 0x00010101 : int32)
  Class: Eq_182
  DataType: int32
  OrigDataType: int32
T_207: (in 0x00000002 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in edx - 0x00000002 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in (byte) (edx - 0x00000002) : byte)
  Class: Eq_209
  DataType: bcu8
  OrigDataType: bcu8
T_210: (in 0x01 : byte)
  Class: Eq_209
  DataType: bcu8
  OrigDataType: bcu8
T_211: (in (byte) (edx - 0x00000002) >u 0x01 : bool)
  Class: Eq_211
  DataType: bool
  OrigDataType: bool
T_212: (in (int64) ebx_44 : int64)
  Class: Eq_212
  DataType: int64
  OrigDataType: int64
T_213: (in 0x00000014 : word32)
  Class: Eq_213
  DataType: word32
  OrigDataType: word32
T_214: (in (int64) ebx_44 % 0x00000014 : int32)
  Class: Eq_214
  DataType: int32
  OrigDataType: int32
T_215: (in 0x00000009 : word32)
  Class: Eq_214
  DataType: int32
  OrigDataType: int32
T_216: (in (int64) ebx_44 % 0x00000014 > 0x00000009 : bool)
  Class: Eq_216
  DataType: bool
  OrigDataType: bool
T_217: (in 0x00FF00FF : word32)
  Class: Eq_182
  DataType: int32
  OrigDataType: word32
T_218: (in 0x00FF0000 : word32)
  Class: Eq_182
  DataType: int32
  OrigDataType: word32
T_219: (in 0x00000014 : word32)
  Class: Eq_219
  DataType: word32
  OrigDataType: word32
T_220: (in edx_eax_43 % 0x00000014 : int32)
  Class: Eq_220
  DataType: int32
  OrigDataType: int32
T_221: (in 0x00000009 : word32)
  Class: Eq_220
  DataType: int32
  OrigDataType: int32
T_222: (in edx_eax_43 % 0x00000014 <= 0x00000009 : bool)
  Class: Eq_222
  DataType: bool
  OrigDataType: bool
T_223: (in 0x00000000 : word32)
  Class: Eq_223
  DataType: word32
  OrigDataType: word32
T_224: (in esi_65 + 0x00000000 : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_225: (in Mem191[esi_65 + 0x00000000:word32] : word32)
  Class: Eq_182
  DataType: int32
  OrigDataType: word32
T_226: (in 0x00000001 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in edi_10 + 0x00000001 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_228: (in 0x00000100 : word32)
  Class: Eq_175
  DataType: word32
  OrigDataType: word32
T_229: (in edi_10 != 0x00000100 : bool)
  Class: Eq_229
  DataType: bool
  OrigDataType: bool
T_230: (in (byte) edx : byte)
  Class: Eq_230
  DataType: byte
  OrigDataType: byte
T_231: (in 0x04 : byte)
  Class: Eq_230
  DataType: byte
  OrigDataType: byte
T_232: (in (byte) edx != 0x04 : bool)
  Class: Eq_232
  DataType: bool
  OrigDataType: bool
T_233: (in ebp_108 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_234: (in 0x00000000 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_235: (in ebx_136 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_236: (in esi_137 : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_237: (in 0x00000000 : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_238: (in edx_147 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_239: (in edi_123 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_240: (in dwLoc20_150 : word32)
  Class: Eq_240
  DataType: word32
  OrigDataType: word32
T_241: (in 0x00000000 : word32)
  Class: Eq_240
  DataType: word32
  OrigDataType: word32
T_242: (in 0x00000001 : word32)
  Class: Eq_242
  DataType: word32
  OrigDataType: word32
T_243: (in ebx_44 + 0x00000001 : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_244: (in 0x0000009C : word32)
  Class: Eq_179
  DataType: word32
  OrigDataType: word32
T_245: (in ebx_44 != 0x0000009C : bool)
  Class: Eq_245
  DataType: bool
  OrigDataType: bool
T_246: (in fn08048418 : ptr32)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: (ptr (fn T_248 ()))
T_247: (in signature of fn08048418 : void)
  Class: Eq_246
  DataType: (ptr Eq_246)
  OrigDataType: 
T_248: (in fn08048418() : void)
  Class: Eq_248
  DataType: void
  OrigDataType: void
T_249: (in edx - 0x00000002 : word32)
  Class: Eq_249
  DataType: word32
  OrigDataType: word32
T_250: (in (int64) (edx - 0x00000002) : int64)
  Class: Eq_250
  DataType: int64
  OrigDataType: int64
T_251: (in 0x00000040 : word32)
  Class: Eq_251
  DataType: word32
  OrigDataType: word32
T_252: (in (int64) (edx - 0x00000002) % 0x00000040 : int32)
  Class: Eq_252
  DataType: int32
  OrigDataType: int32
T_253: (in 0x000000C0 : word32)
  Class: Eq_253
  DataType: word32
  OrigDataType: word32
T_254: (in (int64) (edx - 0x00000002) % 0x00000040 + 0x000000C0 : word32)
  Class: Eq_181
  DataType: int32
  OrigDataType: word32
T_255: (in (byte) edx : byte)
  Class: Eq_255
  DataType: byte
  OrigDataType: byte
T_256: (in 0x02 : byte)
  Class: Eq_255
  DataType: byte
  OrigDataType: byte
T_257: (in (byte) edx != 0x02 : bool)
  Class: Eq_257
  DataType: bool
  OrigDataType: bool
T_258: (in 0x00000008 : word32)
  Class: Eq_258
  DataType: word32
  OrigDataType: word32
T_259: (in eax_196 << 0x00000008 : word32)
  Class: Eq_182
  DataType: int32
  OrigDataType: ui32
T_260: (in 0x00FF0000 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in 0x00000008 : word32)
  Class: Eq_261
  DataType: word32
  OrigDataType: word32
T_262: (in ebx_136 << 0x00000008 : word32)
  Class: Eq_262
  DataType: ui32
  OrigDataType: ui32
T_263: (in (ebx_136 << 0x00000008) + edx_147 : word32)
  Class: Eq_263
  DataType: ui32
  OrigDataType: ui32
T_264: (in 0x00000004 : word32)
  Class: Eq_264
  DataType: ui32
  OrigDataType: ui32
T_265: (in ((ebx_136 << 0x00000008) + edx_147) * 0x00000004 : word32)
  Class: Eq_265
  DataType: ui32
  OrigDataType: ui32
T_266: (in eax[((ebx_136 << 0x00000008) + edx_147) * 0x00000004] : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_267: (in 0x00FF0000 : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_268: (in 0x00000040 : word32)
  Class: Eq_268
  DataType: word32
  OrigDataType: word32
T_269: (in eax + 0x00000040 : word32)
  Class: Eq_269
  DataType: word32
  OrigDataType: word32
T_270: (in 0x00000008 : word32)
  Class: Eq_270
  DataType: word32
  OrigDataType: word32
T_271: (in ebx_136 << 0x00000008 : word32)
  Class: Eq_271
  DataType: ui32
  OrigDataType: ui32
T_272: (in 0x00001000 : word32)
  Class: Eq_272
  DataType: word32
  OrigDataType: word32
T_273: (in (ebx_136 << 0x00000008) + 0x00001000 : word32)
  Class: Eq_273
  DataType: word32
  OrigDataType: word32
T_274: (in (ebx_136 << 0x00000008) + 0x00001000 + edx_147 : word32)
  Class: Eq_274
  DataType: ui32
  OrigDataType: ui32
T_275: (in 0x00000004 : word32)
  Class: Eq_275
  DataType: ui32
  OrigDataType: ui32
T_276: (in ((ebx_136 << 0x00000008) + 0x00001000 + edx_147) * 0x00000004 : word32)
  Class: Eq_276
  DataType: ui32
  OrigDataType: ui32
T_277: (in (eax + 0x00000040)[((ebx_136 << 0x00000008) + 0x00001000 + edx_147) * 0x00000004] : word32)
  Class: Eq_267
  DataType: word32
  OrigDataType: word32
T_278: (in v19_157 : word32)
  Class: Eq_240
  DataType: word32
  OrigDataType: word32
T_279: (in 0x00000001 : word32)
  Class: Eq_279
  DataType: word32
  OrigDataType: word32
T_280: (in dwLoc20_150 + 0x00000001 : word32)
  Class: Eq_240
  DataType: word32
  OrigDataType: word32
T_281: (in 0x00000001 : word32)
  Class: Eq_281
  DataType: word32
  OrigDataType: word32
T_282: (in edx_147 + 0x00000001 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_283: (in 0x00000010 : word32)
  Class: Eq_240
  DataType: word32
  OrigDataType: word32
T_284: (in v19_157 != 0x00000010 : bool)
  Class: Eq_284
  DataType: bool
  OrigDataType: bool
T_285: (in 0x00000001 : word32)
  Class: Eq_285
  DataType: word32
  OrigDataType: word32
T_286: (in esi_137 + 0x00000001 : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_287: (in 0x00000001 : word32)
  Class: Eq_287
  DataType: word32
  OrigDataType: word32
T_288: (in ebx_136 + 0x00000001 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_289: (in 0x00000010 : word32)
  Class: Eq_236
  DataType: word32
  OrigDataType: word32
T_290: (in esi_137 != 0x00000010 : bool)
  Class: Eq_290
  DataType: bool
  OrigDataType: bool
T_291: (in 0x00000020 : word32)
  Class: Eq_291
  DataType: word32
  OrigDataType: word32
T_292: (in edi_123 + 0x00000020 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_293: (in 0x00000100 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_294: (in edi_123 != 0x00000100 : bool)
  Class: Eq_294
  DataType: bool
  OrigDataType: bool
T_295: (in 0x00000020 : word32)
  Class: Eq_295
  DataType: word32
  OrigDataType: word32
T_296: (in ebp_108 + 0x00000020 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_297: (in 0x00000100 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_298: (in ebp_108 == 0x00000100 : bool)
  Class: Eq_298
  DataType: bool
  OrigDataType: bool
T_299: (in 0x00000000 : word32)
  Class: Eq_238
  DataType: word32
  OrigDataType: word32
T_300: (in eax : word32)
  Class: Eq_300
  DataType: word32
  OrigDataType: word32
T_301: (in fn0804844D : ptr32)
  Class: Eq_301
  DataType: (ptr Eq_301)
  OrigDataType: (ptr (fn T_310 (T_305, T_307, T_309)))
T_302: (in signature of fn0804844D : void)
  Class: Eq_301
  DataType: (ptr Eq_301)
  OrigDataType: 
T_303: (in fp : ptr32)
  Class: Eq_303
  DataType: ptr32
  OrigDataType: ptr32
T_304: (in 0x00040044 : word32)
  Class: Eq_304
  DataType: word32
  OrigDataType: word32
T_305: (in fp - 0x00040044 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_306: (in 0x00040050 : word32)
  Class: Eq_306
  DataType: word32
  OrigDataType: word32
T_307: (in fp - 0x00040050 : word32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: word32
T_308: (in 0x0004008C : word32)
  Class: Eq_308
  DataType: word32
  OrigDataType: word32
T_309: (in fp - 0x0004008C : word32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: word32
T_310: (in fn0804844D(fp - 0x00040044, fp - 0x00040050, fp - 0x0004008C) : void)
  Class: Eq_310
  DataType: void
  OrigDataType: void
T_311: (in fn080484CA : ptr32)
  Class: Eq_311
  DataType: (ptr Eq_311)
  OrigDataType: (ptr (fn T_317 (T_314, T_316)))
T_312: (in signature of fn080484CA : void)
  Class: Eq_311
  DataType: (ptr Eq_311)
  OrigDataType: 
T_313: (in 0x0004000C : word32)
  Class: Eq_313
  DataType: word32
  OrigDataType: word32
T_314: (in fp - 0x0004000C : word32)
  Class: Eq_184
  DataType: (ptr Eq_184)
  OrigDataType: word32
T_315: (in bl : byte)
  Class: Eq_315
  DataType: byte
  OrigDataType: byte
T_316: (in (int32) bl : int32)
  Class: Eq_195
  DataType: int32
  OrigDataType: int32
T_317: (in fn080484CA(fp - 0x0004000C, (int32) bl) : void)
  Class: Eq_317
  DataType: void
  OrigDataType: void
T_318: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_320 ()))
T_319: (in signature of fn080483E8 : void)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: 
T_320: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_321: (in fn0804844D : ptr32)
  Class: Eq_301
  DataType: (ptr Eq_301)
  OrigDataType: (ptr (fn T_329 (T_324, T_326, T_328)))
T_322: (in fp : ptr32)
  Class: Eq_322
  DataType: ptr32
  OrigDataType: ptr32
T_323: (in 0x00040044 : word32)
  Class: Eq_323
  DataType: word32
  OrigDataType: word32
T_324: (in fp - 0x00040044 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_325: (in 0x00040050 : word32)
  Class: Eq_325
  DataType: word32
  OrigDataType: word32
T_326: (in fp - 0x00040050 : word32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: word32
T_327: (in 0x00040074 : word32)
  Class: Eq_327
  DataType: word32
  OrigDataType: word32
T_328: (in fp - 0x00040074 : word32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: word32
T_329: (in fn0804844D(fp - 0x00040044, fp - 0x00040050, fp - 0x00040074) : void)
  Class: Eq_310
  DataType: void
  OrigDataType: void
T_330: (in fn080484CA : ptr32)
  Class: Eq_311
  DataType: (ptr Eq_311)
  OrigDataType: (ptr (fn T_335 (T_332, T_334)))
T_331: (in 0x0004000C : word32)
  Class: Eq_331
  DataType: word32
  OrigDataType: word32
T_332: (in fp - 0x0004000C : word32)
  Class: Eq_184
  DataType: (ptr Eq_184)
  OrigDataType: word32
T_333: (in bl : byte)
  Class: Eq_333
  DataType: byte
  OrigDataType: byte
T_334: (in (int32) bl : int32)
  Class: Eq_195
  DataType: int32
  OrigDataType: int32
T_335: (in fn080484CA(fp - 0x0004000C, (int32) bl) : void)
  Class: Eq_317
  DataType: void
  OrigDataType: void
T_336: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_337 ()))
T_337: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_338: (in fn080484CA : ptr32)
  Class: Eq_311
  DataType: (ptr Eq_311)
  OrigDataType: (ptr (fn T_344 (T_341, T_343)))
T_339: (in fp : ptr32)
  Class: Eq_339
  DataType: ptr32
  OrigDataType: ptr32
T_340: (in 0x00040008 : word32)
  Class: Eq_340
  DataType: word32
  OrigDataType: word32
T_341: (in fp - 0x00040008 : word32)
  Class: Eq_184
  DataType: (ptr Eq_184)
  OrigDataType: word32
T_342: (in dl : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_343: (in (int32) dl : int32)
  Class: Eq_195
  DataType: int32
  OrigDataType: int32
T_344: (in fn080484CA(fp - 0x00040008, (int32) dl) : void)
  Class: Eq_317
  DataType: void
  OrigDataType: void
T_345: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_346 ()))
T_346: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_347: (in fn08048775 : ptr32)
  Class: Eq_347
  DataType: (ptr Eq_347)
  OrigDataType: (ptr (fn T_359 (T_353, T_354, T_355, T_356, T_358)))
T_348: (in signature of fn08048775 : void)
  Class: Eq_347
  DataType: (ptr Eq_347)
  OrigDataType: 
T_349: (in dwArg04 : word32)
  Class: Eq_349
  DataType: Eq_349
  OrigDataType: word32
T_350: (in dwArg08 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_351: (in dwArg0C : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: word32
T_352: (in dwArg10 : word32)
  Class: Eq_352
  DataType: Eq_352
  OrigDataType: word32
T_353: (in 0x04 : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_354: (in dwArg00 : word32)
  Class: Eq_349
  DataType: Eq_349
  OrigDataType: word32
T_355: (in dwArg04 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: real32
T_356: (in dwArg08 : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: real32
T_357: (in eax : word32)
  Class: Eq_357
  DataType: int32
  OrigDataType: ui32
T_358: (in (real64) eax : real64)
  Class: Eq_352
  DataType: Eq_352
  OrigDataType: real64
T_359: (in fn08048775(0x04, dwArg00, dwArg04, dwArg08, (real64) eax) : void)
  Class: Eq_359
  DataType: void
  OrigDataType: void
T_360: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_361 ()))
T_361: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_362: (in edi_133 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: int32
T_363: (in dwArg10 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_364: (in edx : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: int32
T_365: (in 0x00000000 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: int32
T_366: (in edx <= 0x00000000 : bool)
  Class: Eq_366
  DataType: bool
  OrigDataType: bool
T_367: (in fn080486BA : ptr32)
  Class: Eq_367
  DataType: (ptr Eq_367)
  OrigDataType: (ptr (fn T_386 (T_379, T_380, T_381, T_382, T_383, T_384, T_385)))
T_368: (in signature of fn080486BA : void)
  Class: Eq_367
  DataType: (ptr Eq_367)
  OrigDataType: 
T_369: (in dwArg04 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_370: (in dwArg08 : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_371: (in dwArg0C : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_372: (in rArg10 : real32)
  Class: Eq_372
  DataType: real32
  OrigDataType: real32
T_373: (in dwArg14 : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_374: (in dwArg18 : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_375: (in 0x00040080 : word32)
  Class: Eq_375
  DataType: int32
  OrigDataType: int32
T_376: (in edi_133 *s 0x00040080 : int32)
  Class: Eq_376
  DataType: int32
  OrigDataType: int32
T_377: (in 0x0944C920 : word32)
  Class: Eq_377
  DataType: word32
  OrigDataType: word32
T_378: (in edi_133 *s 0x00040080 + 0x0944C920 : word32)
  Class: Eq_378
  DataType: word32
  OrigDataType: word32
T_379: (in (byte) (edi_133 *s 0x00040080 + 0x0944C920) : byte)
  Class: Eq_333
  DataType: byte
  OrigDataType: byte
T_380: (in 0x00000000 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_381: (in 0x42200000 : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_382: (in 0x00000000 : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_383: (in 0x00000000 : word32)
  Class: Eq_372
  DataType: real32
  OrigDataType: word32
T_384: (in 0xBF800000 : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_385: (in 0x00000000 : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_386: (in fn080486BA((byte) (edi_133 *s 0x00040080 + 0x0944C920), 0x00000000, 0x42200000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000) : void)
  Class: Eq_386
  DataType: void
  OrigDataType: void
T_387: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_388 ()))
T_388: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_389: (in esi_221 : word32)
  Class: Eq_389
  DataType: word32
  OrigDataType: word32
T_390: (in ecx : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_391: (in 0x00000001 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_392: (in ecx == 0x00000001 : bool)
  Class: Eq_392
  DataType: bool
  OrigDataType: bool
T_393: (in fp : ptr32)
  Class: Eq_393
  DataType: (ptr Eq_393)
  OrigDataType: (ptr (struct (FFFBFF0C T_351 tFFFBFF0C)))
T_394: (in 0x000400F4 : word32)
  Class: Eq_394
  DataType: word32
  OrigDataType: word32
T_395: (in fp - 0x000400F4 : word32)
  Class: Eq_395
  DataType: word32
  OrigDataType: word32
T_396: (in Mem426[fp - 0x000400F4:word32] : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: word32
T_397: (in rLoc1_442 : real64)
  Class: Eq_397
  DataType: Eq_397
  OrigDataType: (union (real32 u0) (real64 u1))
T_398: (in 0x00000003 : word32)
  Class: Eq_398
  DataType: ui32
  OrigDataType: ui32
T_399: (in eax * 0x00000003 : word32)
  Class: Eq_399
  DataType: ui32
  OrigDataType: ui32
T_400: (in (int64) (eax * 0x00000003) : int64)
  Class: Eq_400
  DataType: int64
  OrigDataType: int64
T_401: (in 0x00000002 : word32)
  Class: Eq_401
  DataType: word32
  OrigDataType: word32
T_402: (in (int64) (eax * 0x00000003) % 0x00000002 : int32)
  Class: Eq_402
  DataType: int32
  OrigDataType: int32
T_403: (in eax * 0x00000003 : word32)
  Class: Eq_403
  DataType: ui32
  OrigDataType: ui32
T_404: (in SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) : int64)
  Class: Eq_404
  DataType: int64
  OrigDataType: int64
T_405: (in 0x00000002 : word32)
  Class: Eq_405
  DataType: int32
  OrigDataType: int32
T_406: (in SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002 : int32)
  Class: Eq_406
  DataType: int32
  OrigDataType: int32
T_407: (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) : real64)
  Class: Eq_397
  DataType: Eq_397
  OrigDataType: real64
T_408: (in edx_eax_421 : int64)
  Class: Eq_408
  DataType: int64
  OrigDataType: int64
T_409: (in (int64) eax : int64)
  Class: Eq_409
  DataType: int64
  OrigDataType: int64
T_410: (in 0x00000002 : word32)
  Class: Eq_410
  DataType: word32
  OrigDataType: word32
T_411: (in (int64) eax % 0x00000002 : int32)
  Class: Eq_411
  DataType: int32
  OrigDataType: int32
T_412: (in SEQ((int64) eax % 0x00000002, eax) : int64)
  Class: Eq_408
  DataType: int64
  OrigDataType: int64
T_413: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_430 (T_421, T_422, T_424, T_425, T_426, T_355, T_427, T_429)))
T_414: (in signature of fn0804881D : void)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: 
T_415: (in dwArg00 : word32)
  Class: Eq_415
  DataType: word32
  OrigDataType: word32
T_416: (in dwArg04 : word32)
  Class: Eq_349
  DataType: Eq_349
  OrigDataType: word32
T_417: (in dwArg08 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_418: (in rArg0C : real32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: real32
T_419: (in dwArg10 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_420: (in 0x00000002 : word32)
  Class: Eq_420
  DataType: int32
  OrigDataType: int32
T_421: (in edx_eax_421 / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_422: (in 0x00000001 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_423: (in 0x00000001 : word32)
  Class: Eq_423
  DataType: word32
  OrigDataType: word32
T_424: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_425: (in dwLoc40100 : word32)
  Class: Eq_415
  DataType: word32
  OrigDataType: word32
T_426: (in dwArg04 - rLoc1_442 : real64)
  Class: Eq_349
  DataType: Eq_349
  OrigDataType: real64
T_427: (in 0x00040080 : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: word32
T_428: (in 0x00000001 : word32)
  Class: Eq_428
  DataType: word32
  OrigDataType: word32
T_429: (in dwArg10 + 0x00000001 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_430: (in fn0804881D(edx_eax_421 / 0x00000002, 0x00000001, edx - 0x00000001, dwLoc40100, dwArg04 - rLoc1_442, dwArg04, 0x00040080, dwArg10 + 0x00000001) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_431: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_439 (T_432, T_433, T_434, T_435, T_354, T_436, T_356, T_438)))
T_432: (in edx_eax_421 / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_433: (in 0x00000004 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_434: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_435: (in dwLoc40110 : word32)
  Class: Eq_415
  DataType: word32
  OrigDataType: word32
T_436: (in rLoc1_442 + dwArg08 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: real32
T_437: (in 0x00000002 : word32)
  Class: Eq_437
  DataType: word32
  OrigDataType: word32
T_438: (in dwArg10 + 0x00000002 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_439: (in fn0804881D(edx_eax_421 / 0x00000002, 0x00000004, edx - 0x00000001, dwLoc40110, dwArg00, rLoc1_442 + dwArg08, dwArg08, dwArg10 + 0x00000002) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_440: (in dwArg10 + 0x00000002 : word32)
  Class: Eq_389
  DataType: word32
  OrigDataType: word32
T_441: (in dwArg10 + 0x00000002 : word32)
  Class: Eq_415
  DataType: word32
  OrigDataType: word32
T_442: (in 0x000400F4 : word32)
  Class: Eq_442
  DataType: word32
  OrigDataType: word32
T_443: (in fp - 0x000400F4 : word32)
  Class: Eq_443
  DataType: word32
  OrigDataType: word32
T_444: (in Mem280[fp - 0x000400F4:word32] : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: word32
T_445: (in rLoc1_273 : real64)
  Class: Eq_445
  DataType: Eq_445
  OrigDataType: (union (real32 u0) (real64 u1))
T_446: (in 0x00000003 : word32)
  Class: Eq_446
  DataType: ui32
  OrigDataType: ui32
T_447: (in eax * 0x00000003 : word32)
  Class: Eq_447
  DataType: ui32
  OrigDataType: ui32
T_448: (in (int64) (eax * 0x00000003) : int64)
  Class: Eq_448
  DataType: int64
  OrigDataType: int64
T_449: (in 0x00000002 : word32)
  Class: Eq_449
  DataType: word32
  OrigDataType: word32
T_450: (in (int64) (eax * 0x00000003) % 0x00000002 : int32)
  Class: Eq_450
  DataType: int32
  OrigDataType: int32
T_451: (in eax * 0x00000003 : word32)
  Class: Eq_451
  DataType: ui32
  OrigDataType: ui32
T_452: (in SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) : int64)
  Class: Eq_452
  DataType: int64
  OrigDataType: int64
T_453: (in 0x00000002 : word32)
  Class: Eq_453
  DataType: int32
  OrigDataType: int32
T_454: (in SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002 : int32)
  Class: Eq_454
  DataType: int32
  OrigDataType: int32
T_455: (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) : real64)
  Class: Eq_445
  DataType: Eq_445
  OrigDataType: real64
T_456: (in edx_eax_261 : int64)
  Class: Eq_456
  DataType: int64
  OrigDataType: int64
T_457: (in (int64) eax : int64)
  Class: Eq_457
  DataType: int64
  OrigDataType: int64
T_458: (in 0x00000002 : word32)
  Class: Eq_458
  DataType: word32
  OrigDataType: word32
T_459: (in (int64) eax % 0x00000002 : int32)
  Class: Eq_459
  DataType: int32
  OrigDataType: int32
T_460: (in SEQ((int64) eax % 0x00000002, eax) : int64)
  Class: Eq_456
  DataType: int64
  OrigDataType: int64
T_461: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_469 (T_463, T_464, T_465, T_425, T_466, T_355, T_467, T_468)))
T_462: (in 0x00000002 : word32)
  Class: Eq_462
  DataType: int32
  OrigDataType: int32
T_463: (in edx_eax_261 / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_464: (in 0x00000002 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_465: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_466: (in dwArg04 + rLoc1_273 : word32)
  Class: Eq_349
  DataType: Eq_349
  OrigDataType: real32
T_467: (in 0x00040080 : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: word32
T_468: (in dwArg10 + 0x00000001 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_469: (in fn0804881D(edx_eax_261 / 0x00000002, 0x00000002, edx - 0x00000001, dwLoc40100, dwArg04 + rLoc1_273, dwArg04, 0x00040080, dwArg10 + 0x00000001) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_470: (in 0x00000002 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_471: (in ecx == 0x00000002 : bool)
  Class: Eq_471
  DataType: bool
  OrigDataType: bool
T_472: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_479 (T_473, T_474, T_475, T_425, T_354, T_476, T_356, T_478)))
T_473: (in edx_eax_261 / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_474: (in 0x00000004 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_475: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_476: (in dwArg08 + rLoc1_273 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: real32
T_477: (in 0x00000002 : word32)
  Class: Eq_477
  DataType: word32
  OrigDataType: word32
T_478: (in dwArg10 + 0x00000002 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_479: (in fn0804881D(edx_eax_261 / 0x00000002, 0x00000004, edx - 0x00000001, dwLoc40100, dwArg00, dwArg08 + rLoc1_273, dwArg08, dwArg10 + 0x00000002) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_480: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_487 (T_481, T_482, T_483, T_435, T_354, T_484, T_356, T_486)))
T_481: (in edx_eax_261 / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_482: (in 0x00000003 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_483: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_484: (in dwArg08 - rLoc1_273 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_485: (in 0x00000003 : word32)
  Class: Eq_485
  DataType: word32
  OrigDataType: word32
T_486: (in dwArg10 + 0x00000003 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_487: (in fn0804881D(edx_eax_261 / 0x00000002, 0x00000003, edx - 0x00000001, dwLoc40110, dwArg00, dwArg08 - rLoc1_273, dwArg08, dwArg10 + 0x00000003) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_488: (in dwArg10 + 0x00000003 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_489: (in dwArg10 + 0x00000003 : word32)
  Class: Eq_415
  DataType: word32
  OrigDataType: word32
T_490: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_496 (T_491, T_492, T_493, T_425, T_494, T_355, T_356, T_495)))
T_491: (in edx_eax_261 / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_492: (in 0x00000001 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_493: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_494: (in dwArg04 - rLoc1_273 : word32)
  Class: Eq_349
  DataType: Eq_349
  OrigDataType: word32
T_495: (in dwArg10 + 0x00000002 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_496: (in fn0804881D(edx_eax_261 / 0x00000002, 0x00000001, edx - 0x00000001, dwLoc40100, dwArg04 - rLoc1_273, dwArg04, dwArg08, dwArg10 + 0x00000002) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_497: (in 0x00000003 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_498: (in ecx == 0x00000003 : bool)
  Class: Eq_498
  DataType: bool
  OrigDataType: bool
T_499: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_506 (T_500, T_501, T_502, T_425, T_354, T_503, T_356, T_505)))
T_500: (in edx_eax_261 / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_501: (in 0x00000003 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_502: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_503: (in dwArg08 - rLoc1_273 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_504: (in 0x00000003 : word32)
  Class: Eq_504
  DataType: word32
  OrigDataType: word32
T_505: (in dwArg10 + 0x00000003 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_506: (in fn0804881D(edx_eax_261 / 0x00000002, 0x00000003, edx - 0x00000001, dwLoc40100, dwArg00, dwArg08 - rLoc1_273, dwArg08, dwArg10 + 0x00000003) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_507: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_515 (T_508, T_509, T_510, T_435, T_354, T_355, T_512, T_514)))
T_508: (in edx_eax_261 / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_509: (in 0x00000006 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_510: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_511: (in rArg0C : real32)
  Class: Eq_511
  DataType: real32
  OrigDataType: real32
T_512: (in rArg0C + rLoc1_273 : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: real32
T_513: (in 0x00000004 : word32)
  Class: Eq_513
  DataType: word32
  OrigDataType: word32
T_514: (in dwArg10 + 0x00000004 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_515: (in fn0804881D(edx_eax_261 / 0x00000002, 0x00000006, edx - 0x00000001, dwLoc40110, dwArg00, dwArg04, rArg0C + rLoc1_273, dwArg10 + 0x00000004) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_516: (in dwArg10 + 0x00000004 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_517: (in dwArg10 + 0x00000004 : word32)
  Class: Eq_415
  DataType: word32
  OrigDataType: word32
T_518: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_524 (T_519, T_520, T_521, T_425, T_354, T_522, T_356, T_523)))
T_519: (in edx_eax_261 / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_520: (in 0x00000004 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_521: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_522: (in dwArg08 + rLoc1_273 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: real32
T_523: (in dwArg10 + 0x00000003 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_524: (in fn0804881D(edx_eax_261 / 0x00000002, 0x00000004, edx - 0x00000001, dwLoc40100, dwArg00, dwArg08 + rLoc1_273, dwArg08, dwArg10 + 0x00000003) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_525: (in dwArg10 + 0x00000003 : word32)
  Class: Eq_389
  DataType: word32
  OrigDataType: word32
T_526: (in 0x00000004 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_527: (in ecx == 0x00000004 : bool)
  Class: Eq_527
  DataType: bool
  OrigDataType: bool
T_528: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_535 (T_529, T_530, T_531, T_425, T_354, T_355, T_532, T_534)))
T_529: (in edx_eax_261 / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_530: (in 0x00000006 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_531: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_532: (in rArg0C + rLoc1_273 : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: real32
T_533: (in 0x00000004 : word32)
  Class: Eq_533
  DataType: word32
  OrigDataType: word32
T_534: (in dwArg10 + 0x00000004 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_535: (in fn0804881D(edx_eax_261 / 0x00000002, 0x00000006, edx - 0x00000001, dwLoc40100, dwArg00, dwArg04, rArg0C + rLoc1_273, dwArg10 + 0x00000004) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_536: (in dwArg10 + 0x00000004 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_537: (in 0x00000001 : word32)
  Class: Eq_537
  DataType: word32
  OrigDataType: word32
T_538: (in esi_221 + 0x00000001 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_539: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_559 (T_545, T_546, T_548, T_425, T_354, T_558, T_356, T_362)))
T_540: (in (int64) eax : int64)
  Class: Eq_540
  DataType: int64
  OrigDataType: int64
T_541: (in 0x00000002 : word32)
  Class: Eq_541
  DataType: word32
  OrigDataType: word32
T_542: (in (int64) eax % 0x00000002 : int32)
  Class: Eq_542
  DataType: int32
  OrigDataType: int32
T_543: (in SEQ((int64) eax % 0x00000002, eax) : int64)
  Class: Eq_543
  DataType: int64
  OrigDataType: int64
T_544: (in 0x00000002 : word32)
  Class: Eq_544
  DataType: int32
  OrigDataType: int32
T_545: (in SEQ((int64) eax % 0x00000002, eax) / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_546: (in 0x00000003 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_547: (in 0x00000001 : word32)
  Class: Eq_547
  DataType: word32
  OrigDataType: word32
T_548: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_549: (in 0x00000003 : word32)
  Class: Eq_549
  DataType: ui32
  OrigDataType: ui32
T_550: (in eax * 0x00000003 : word32)
  Class: Eq_550
  DataType: ui32
  OrigDataType: ui32
T_551: (in (int64) (eax * 0x00000003) : int64)
  Class: Eq_551
  DataType: int64
  OrigDataType: int64
T_552: (in 0x00000002 : word32)
  Class: Eq_552
  DataType: word32
  OrigDataType: word32
T_553: (in (int64) (eax * 0x00000003) % 0x00000002 : int32)
  Class: Eq_553
  DataType: int32
  OrigDataType: int32
T_554: (in eax * 0x00000003 : word32)
  Class: Eq_554
  DataType: ui32
  OrigDataType: ui32
T_555: (in SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) : int64)
  Class: Eq_555
  DataType: int64
  OrigDataType: int64
T_556: (in 0x00000002 : word32)
  Class: Eq_556
  DataType: int32
  OrigDataType: int32
T_557: (in SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002 : int32)
  Class: Eq_557
  DataType: int32
  OrigDataType: int32
T_558: (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) : real64)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: real64
T_559: (in fn0804881D(SEQ((int64) eax % 0x00000002, eax) / 0x00000002, 0x00000003, edx - 0x00000001, dwLoc40100, dwArg00, (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002), dwArg08, edi_133) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_560: (in 0x00000005 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_561: (in ecx == 0x00000005 : bool)
  Class: Eq_561
  DataType: bool
  OrigDataType: bool
T_562: (in 0x00000001 : word32)
  Class: Eq_562
  DataType: word32
  OrigDataType: word32
T_563: (in edi_133 + 0x00000001 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_564: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_584 (T_570, T_571, T_573, T_425, T_354, T_355, T_583, T_362)))
T_565: (in (int64) eax : int64)
  Class: Eq_565
  DataType: int64
  OrigDataType: int64
T_566: (in 0x00000002 : word32)
  Class: Eq_566
  DataType: word32
  OrigDataType: word32
T_567: (in (int64) eax % 0x00000002 : int32)
  Class: Eq_567
  DataType: int32
  OrigDataType: int32
T_568: (in SEQ((int64) eax % 0x00000002, eax) : int64)
  Class: Eq_568
  DataType: int64
  OrigDataType: int64
T_569: (in 0x00000002 : word32)
  Class: Eq_569
  DataType: int32
  OrigDataType: int32
T_570: (in SEQ((int64) eax % 0x00000002, eax) / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_571: (in 0x00000005 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_572: (in 0x00000001 : word32)
  Class: Eq_572
  DataType: word32
  OrigDataType: word32
T_573: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_574: (in 0x00000003 : word32)
  Class: Eq_574
  DataType: ui32
  OrigDataType: ui32
T_575: (in eax * 0x00000003 : word32)
  Class: Eq_575
  DataType: ui32
  OrigDataType: ui32
T_576: (in (int64) (eax * 0x00000003) : int64)
  Class: Eq_576
  DataType: int64
  OrigDataType: int64
T_577: (in 0x00000002 : word32)
  Class: Eq_577
  DataType: word32
  OrigDataType: word32
T_578: (in (int64) (eax * 0x00000003) % 0x00000002 : int32)
  Class: Eq_578
  DataType: int32
  OrigDataType: int32
T_579: (in eax * 0x00000003 : word32)
  Class: Eq_579
  DataType: ui32
  OrigDataType: ui32
T_580: (in SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) : int64)
  Class: Eq_580
  DataType: int64
  OrigDataType: int64
T_581: (in 0x00000002 : word32)
  Class: Eq_581
  DataType: int32
  OrigDataType: int32
T_582: (in SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002 : int32)
  Class: Eq_582
  DataType: int32
  OrigDataType: int32
T_583: (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) : real64)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: real64
T_584: (in fn0804881D(SEQ((int64) eax % 0x00000002, eax) / 0x00000002, 0x00000005, edx - 0x00000001, dwLoc40100, dwArg00, dwArg04, (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002), edi_133) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_585: (in 0x00000001 : word32)
  Class: Eq_585
  DataType: word32
  OrigDataType: word32
T_586: (in edi_133 + 0x00000001 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_587: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_608 (T_593, T_594, T_596, T_425, T_354, T_355, T_607, T_362)))
T_588: (in (int64) eax : int64)
  Class: Eq_588
  DataType: int64
  OrigDataType: int64
T_589: (in 0x00000002 : word32)
  Class: Eq_589
  DataType: word32
  OrigDataType: word32
T_590: (in (int64) eax % 0x00000002 : int32)
  Class: Eq_590
  DataType: int32
  OrigDataType: int32
T_591: (in SEQ((int64) eax % 0x00000002, eax) : int64)
  Class: Eq_591
  DataType: int64
  OrigDataType: int64
T_592: (in 0x00000002 : word32)
  Class: Eq_592
  DataType: int32
  OrigDataType: int32
T_593: (in SEQ((int64) eax % 0x00000002, eax) / 0x00000002 : int32)
  Class: Eq_357
  DataType: int32
  OrigDataType: int32
T_594: (in 0x00000006 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_595: (in 0x00000001 : word32)
  Class: Eq_595
  DataType: word32
  OrigDataType: word32
T_596: (in edx - 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_597: (in 0x00000003 : word32)
  Class: Eq_597
  DataType: ui32
  OrigDataType: ui32
T_598: (in eax * 0x00000003 : word32)
  Class: Eq_598
  DataType: ui32
  OrigDataType: ui32
T_599: (in (int64) (eax * 0x00000003) : int64)
  Class: Eq_599
  DataType: int64
  OrigDataType: int64
T_600: (in 0x00000002 : word32)
  Class: Eq_600
  DataType: word32
  OrigDataType: word32
T_601: (in (int64) (eax * 0x00000003) % 0x00000002 : int32)
  Class: Eq_601
  DataType: int32
  OrigDataType: int32
T_602: (in eax * 0x00000003 : word32)
  Class: Eq_602
  DataType: ui32
  OrigDataType: ui32
T_603: (in SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) : int64)
  Class: Eq_603
  DataType: int64
  OrigDataType: int64
T_604: (in 0x00000002 : word32)
  Class: Eq_604
  DataType: int32
  OrigDataType: int32
T_605: (in SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002 : int32)
  Class: Eq_605
  DataType: int32
  OrigDataType: int32
T_606: (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) : real64)
  Class: Eq_606
  DataType: Eq_606
  OrigDataType: (union (real32 u0) (real64 u1))
T_607: (in (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) + rArg0C : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: real32
T_608: (in fn0804881D(SEQ((int64) eax % 0x00000002, eax) / 0x00000002, 0x00000006, edx - 0x00000001, dwLoc40100, dwArg00, dwArg04, (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) + rArg0C, edi_133) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_609: (in 0x00000006 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_610: (in ecx == 0x00000006 : bool)
  Class: Eq_610
  DataType: bool
  OrigDataType: bool
T_611: (in FPUF : byte)
  Class: Eq_611
  DataType: byte
  OrigDataType: byte
T_612: (in edi_19 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (54 T_758 t0054) (58 T_763 t0058) (5C T_753 t005C) (60 T_731 t0060) (64 T_649 t0064) (68 T_668 t0068) (6C T_685 t006C) (7C T_621 t007C)))
T_613: (in eax : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_614: (in edx : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: int32
T_615: (in 0x00040080 : word32)
  Class: Eq_615
  DataType: int32
  OrigDataType: int32
T_616: (in edx *s 0x00040080 : int32)
  Class: Eq_616
  DataType: int32
  OrigDataType: int32
T_617: (in eax + edx *s 0x00040080 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_618: (in al_22 : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_619: (in 0x0000007C : word32)
  Class: Eq_619
  DataType: word32
  OrigDataType: word32
T_620: (in edi_19 + 0x0000007C : word32)
  Class: Eq_620
  DataType: word32
  OrigDataType: word32
T_621: (in Mem0[edi_19 + 0x0000007C:byte] : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_622: (in 0x00 : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_623: (in al_22 != 0x00 : bool)
  Class: Eq_623
  DataType: bool
  OrigDataType: bool
T_624: (in 0x01 : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_625: (in al_22 != 0x01 : bool)
  Class: Eq_625
  DataType: bool
  OrigDataType: bool
T_626: (in rLoc1_126 : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_627: (in rLoc2_125 : real64)
  Class: Eq_627
  DataType: real64
  OrigDataType: real64
T_628: (in rLoc5C_121 : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: (union (real32 u0) (real64 u1))
T_629: (in dwArg08 : word32)
  Class: Eq_629
  DataType: word32
  OrigDataType: word32
T_630: (in 0x00000000 : word32)
  Class: Eq_629
  DataType: word32
  OrigDataType: word32
T_631: (in dwArg08 != 0x00000000 : bool)
  Class: Eq_631
  DataType: bool
  OrigDataType: bool
T_632: (in fn0804847F : ptr32)
  Class: Eq_632
  DataType: (ptr Eq_632)
  OrigDataType: (ptr (fn T_638 (T_612, T_636, T_637)))
T_633: (in signature of fn0804847F : void)
  Class: Eq_632
  DataType: (ptr Eq_632)
  OrigDataType: 
T_634: (in fp : ptr32)
  Class: Eq_634
  DataType: ptr32
  OrigDataType: ptr32
T_635: (in 0x00000028 : word32)
  Class: Eq_635
  DataType: word32
  OrigDataType: word32
T_636: (in fp - 0x00000028 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_637: (in ecx : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_638: (in fn0804847F(edi_19, fp - 0x00000028, ecx) : void)
  Class: Eq_638
  DataType: void
  OrigDataType: void
T_639: (in rLoc1_164 : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_640: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_643 (T_641, T_642)))
T_641: (in fp - 0x00000028 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_642: (in dwArg04 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_643: (in fn08048438(fp - 0x00000028, dwArg04) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_644: (in (word16) FPUF : word16)
  Class: Eq_644
  DataType: word16
  OrigDataType: word16
T_645: (in 8 : int16)
  Class: Eq_645
  DataType: int16
  OrigDataType: int16
T_646: (in (word16) FPUF << 8 : word16)
  Class: Eq_646
  DataType: ui16
  OrigDataType: ui16
T_647: (in 0x00000064 : word32)
  Class: Eq_647
  DataType: word32
  OrigDataType: word32
T_648: (in edi_19 + 0x00000064 : word32)
  Class: Eq_648
  DataType: word32
  OrigDataType: word32
T_649: (in Mem0[edi_19 + 0x00000064:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real32
T_650: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_653 (T_652, T_642)))
T_651: (in 0x00000030 : word32)
  Class: Eq_651
  DataType: word32
  OrigDataType: word32
T_652: (in edi_19 + 0x00000030 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_653: (in fn08048438(edi_19 + 0x00000030, dwArg04) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_654: (in rLoc2 : real64)
  Class: Eq_627
  DataType: real64
  OrigDataType: real64
T_655: (in (word16) FPUF : word16)
  Class: Eq_655
  DataType: word16
  OrigDataType: word16
T_656: (in 8 : int16)
  Class: Eq_656
  DataType: int16
  OrigDataType: int16
T_657: (in (word16) FPUF << 8 : word16)
  Class: Eq_657
  DataType: ui16
  OrigDataType: ui16
T_658: (in rLoc2_130 : real64)
  Class: Eq_658
  DataType: Eq_658
  OrigDataType: real64
T_659: (in rLoc2_125 * rLoc1_126 : real64)
  Class: Eq_659
  DataType: Eq_659
  OrigDataType: (union (real32 u0) (real64 u1))
T_660: (in rLoc2_125 * rLoc1_126 + rLoc5C_121 : word32)
  Class: Eq_658
  DataType: Eq_658
  OrigDataType: real32
T_661: (in 0x02 : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_662: (in al_22 != 0x02 : bool)
  Class: Eq_662
  DataType: bool
  OrigDataType: bool
T_663: (in rLoc1_192 : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: (union (64 u0) (real32 u1) (real64 u2))
T_664: (in 0x00000000 : word32)
  Class: Eq_629
  DataType: word32
  OrigDataType: word32
T_665: (in dwArg08 != 0x00000000 : bool)
  Class: Eq_665
  DataType: bool
  OrigDataType: bool
T_666: (in 0x00000068 : word32)
  Class: Eq_666
  DataType: word32
  OrigDataType: word32
T_667: (in edi_19 + 0x00000068 : word32)
  Class: Eq_667
  DataType: word32
  OrigDataType: word32
T_668: (in Mem0[edi_19 + 0x00000068:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real32
T_669: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_672 (T_671, T_637)))
T_670: (in 0x00000018 : word32)
  Class: Eq_670
  DataType: word32
  OrigDataType: word32
T_671: (in edi_19 + 0x00000018 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_672: (in fn08048438(edi_19 + 0x00000018, ecx) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_673: (in Mem0[edi_19 + 0x00000068:real32] - fn08048438(edi_19 + 0x00000018, ecx) : word32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: word32
T_674: (in 0x00000068 : word32)
  Class: Eq_674
  DataType: word32
  OrigDataType: word32
T_675: (in edi_19 + 0x00000068 : word32)
  Class: Eq_675
  DataType: word32
  OrigDataType: word32
T_676: (in Mem208[edi_19 + 0x00000068:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real32
T_677: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_679 (T_678, T_642)))
T_678: (in edi_19 + 0x00000018 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_679: (in fn08048438(edi_19 + 0x00000018, dwArg04) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_680: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_682 (T_681, T_642)))
T_681: (in edi_19 + 0x00000018 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_682: (in fn08048438(edi_19 + 0x00000018, dwArg04) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_683: (in 0x0000006C : word32)
  Class: Eq_683
  DataType: word32
  OrigDataType: word32
T_684: (in edi_19 + 0x0000006C : word32)
  Class: Eq_684
  DataType: word32
  OrigDataType: word32
T_685: (in Mem0[edi_19 + 0x0000006C:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real32
T_686: (in Mem0[edi_19 + 0x0000006C:real32] / rLoc1_192 : word32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real32
T_687: (in 0x0000006C : word32)
  Class: Eq_687
  DataType: word32
  OrigDataType: word32
T_688: (in edi_19 + 0x0000006C : word32)
  Class: Eq_688
  DataType: word32
  OrigDataType: word32
T_689: (in Mem201[edi_19 + 0x0000006C:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real32
T_690: (in 0x08049A08 : ptr32)
  Class: Eq_690
  DataType: (ptr Eq_690)
  OrigDataType: (ptr (struct (0 T_663 t0000)))
T_691: (in Mem0[0x08049A08:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real32
T_692: (in rLoc1_192 - Mem0[0x08049A08:real32] : word32)
  Class: Eq_692
  DataType: real32
  OrigDataType: real32
T_693: (in cond(rLoc1_192 - Mem0[0x08049A08:real32]) : byte)
  Class: Eq_611
  DataType: byte
  OrigDataType: byte
T_694: (in Mem0[0x08049A08:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: (union (32 u0) (real32 u1))
T_695: (in rLoc1_192 >u Mem0[0x08049A08:real32] : bool)
  Class: Eq_695
  DataType: bool
  OrigDataType: bool
T_696: (in fn0804847F : ptr32)
  Class: Eq_632
  DataType: (ptr Eq_632)
  OrigDataType: (ptr (fn T_699 (T_637, T_698, T_612)))
T_697: (in 0x00000034 : word32)
  Class: Eq_697
  DataType: word32
  OrigDataType: word32
T_698: (in fp - 0x00000034 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_699: (in fn0804847F(ecx, fp - 0x00000034, edi_19) : void)
  Class: Eq_638
  DataType: void
  OrigDataType: void
T_700: (in fn0804844D : ptr32)
  Class: Eq_301
  DataType: (ptr Eq_301)
  OrigDataType: (ptr (fn T_705 (T_642, T_702, T_704)))
T_701: (in 0x00000040 : word32)
  Class: Eq_701
  DataType: word32
  OrigDataType: word32
T_702: (in fp - 0x00000040 : word32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: word32
T_703: (in 0x00000054 : word32)
  Class: Eq_703
  DataType: word32
  OrigDataType: word32
T_704: (in edi_19 + 0x00000054 : word32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: word32
T_705: (in fn0804844D(dwArg04, fp - 0x00000040, edi_19 + 0x00000054) : void)
  Class: Eq_310
  DataType: void
  OrigDataType: void
T_706: (in rLoc1_239 : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: (union (64 u0) (real64 u1))
T_707: (in sqrt : ptr32)
  Class: Eq_707
  DataType: (ptr Eq_707)
  OrigDataType: (ptr (fn T_716 (T_715)))
T_708: (in rLoc40 : real32)
  Class: Eq_708
  DataType: Eq_708
  OrigDataType: (union (real32 u0) (real64 u1))
T_709: (in rLoc40 * rLoc40 : real64)
  Class: Eq_709
  DataType: real64
  OrigDataType: real64
T_710: (in rLoc3C : real32)
  Class: Eq_710
  DataType: Eq_710
  OrigDataType: (union (real32 u0) (real64 u1))
T_711: (in rLoc3C * rLoc3C : real64)
  Class: Eq_711
  DataType: real64
  OrigDataType: real64
T_712: (in rLoc40 * rLoc40 + rLoc3C * rLoc3C : real64)
  Class: Eq_712
  DataType: real64
  OrigDataType: real64
T_713: (in rLoc38 : real32)
  Class: Eq_713
  DataType: Eq_713
  OrigDataType: (union (real32 u0) (real64 u1))
T_714: (in rLoc38 * rLoc38 : real64)
  Class: Eq_714
  DataType: real64
  OrigDataType: real64
T_715: (in rLoc40 * rLoc40 + rLoc3C * rLoc3C + rLoc38 * rLoc38 : real64)
  Class: Eq_715
  DataType: real64
  OrigDataType: real64
T_716: (in sqrt(rLoc40 * rLoc40 + rLoc3C * rLoc3C + rLoc38 * rLoc38) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_717: (in 0x08049A08 : ptr32)
  Class: Eq_717
  DataType: (ptr Eq_717)
  OrigDataType: (ptr (struct (0 T_718 t0000)))
T_718: (in Mem0[0x08049A08:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: (union (32 u0) (real32 u1))
T_719: (in rLoc1_239 >=u Mem0[0x08049A08:real32] : bool)
  Class: Eq_719
  DataType: bool
  OrigDataType: bool
T_720: (in fn080484A2 : ptr32)
  Class: Eq_720
  DataType: (ptr Eq_720)
  OrigDataType: (ptr (fn T_724 (T_723)))
T_721: (in signature of fn080484A2 : void)
  Class: Eq_720
  DataType: (ptr Eq_720)
  OrigDataType: 
T_722: (in 0x00000040 : word32)
  Class: Eq_722
  DataType: word32
  OrigDataType: word32
T_723: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_724: (in fn080484A2(fp - 0x00000040) : void)
  Class: Eq_724
  DataType: void
  OrigDataType: void
T_725: (in rLoc1_248 : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_726: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_730 (T_728, T_729)))
T_727: (in 0x00000034 : word32)
  Class: Eq_727
  DataType: word32
  OrigDataType: word32
T_728: (in fp - 0x00000034 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_729: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_730: (in fn08048438(fp - 0x00000034, fp - 0x00000040) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_731: (in rLoc58_253 : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: (union (32 u0) (real32 u1) (real64 u2))
T_732: (in SLICE(rLoc1_248, byte, 24) : byte)
  Class: Eq_732
  DataType: byte
  OrigDataType: byte
T_733: (in 0x7F : byte)
  Class: Eq_733
  DataType: byte
  OrigDataType: byte
T_734: (in SLICE(rLoc1_248, byte, 24) & 0x7F : byte)
  Class: Eq_734
  DataType: byte
  OrigDataType: byte
T_735: (in DPB(rLoc1_248, SLICE(rLoc1_248, byte, 24) & 0x7F, 24, 8) : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real32
T_736: (in 0x00000060 : word32)
  Class: Eq_736
  DataType: word32
  OrigDataType: word32
T_737: (in edi_19 + 0x00000060 : word32)
  Class: Eq_737
  DataType: word32
  OrigDataType: word32
T_738: (in Mem0[edi_19 + 0x00000060:real32] : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real32
T_739: (in rLoc58_253 - Mem0[edi_19 + 0x00000060:real32] : word32)
  Class: Eq_739
  DataType: real32
  OrigDataType: real32
T_740: (in cond(rLoc58_253 - Mem0[edi_19 + 0x00000060:real32]) : byte)
  Class: Eq_611
  DataType: byte
  OrigDataType: byte
T_741: (in edi_19 + 0x00000060 : word32)
  Class: Eq_741
  DataType: word32
  OrigDataType: word32
T_742: (in Mem0[edi_19 + 0x00000060:real32] : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: (union (32 u0) (real32 u1))
T_743: (in rLoc58_253 >u Mem0[edi_19 + 0x00000060:real32] : bool)
  Class: Eq_743
  DataType: bool
  OrigDataType: bool
T_744: (in rLoc1_298 : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: (union (real32 u0) (real64 u1))
T_745: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_749 (T_747, T_748)))
T_746: (in 0x00000034 : word32)
  Class: Eq_746
  DataType: word32
  OrigDataType: word32
T_747: (in fp - 0x00000034 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_748: (in edi_19 + 0x00000054 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_749: (in fn08048438(fp - 0x00000034, edi_19 + 0x00000054) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_750: (in rLoc3_310 : real64)
  Class: Eq_750
  DataType: Eq_750
  OrigDataType: real64
T_751: (in 0x0000005C : word32)
  Class: Eq_751
  DataType: word32
  OrigDataType: word32
T_752: (in edi_19 + 0x0000005C : word32)
  Class: Eq_752
  DataType: word32
  OrigDataType: word32
T_753: (in Mem0[edi_19 + 0x0000005C:real32] : real32)
  Class: Eq_753
  DataType: real32
  OrigDataType: real32
T_754: (in rLoc1_298 * Mem0[edi_19 + 0x0000005C:real32] : word32)
  Class: Eq_750
  DataType: Eq_750
  OrigDataType: real32
T_755: (in rLoc2_300 : real64)
  Class: Eq_755
  DataType: real64
  OrigDataType: real64
T_756: (in 0x00000054 : word32)
  Class: Eq_756
  DataType: word32
  OrigDataType: word32
T_757: (in edi_19 + 0x00000054 : word32)
  Class: Eq_757
  DataType: word32
  OrigDataType: word32
T_758: (in Mem0[edi_19 + 0x00000054:real32] : real32)
  Class: Eq_758
  DataType: Eq_758
  OrigDataType: (union (real32 u0) (real64 u1))
T_759: (in Mem0[edi_19 + 0x00000054:real32] * rLoc1_298 : real64)
  Class: Eq_755
  DataType: real64
  OrigDataType: real64
T_760: (in rLoc3_304 : real64)
  Class: Eq_760
  DataType: real64
  OrigDataType: real64
T_761: (in 0x00000058 : word32)
  Class: Eq_761
  DataType: word32
  OrigDataType: word32
T_762: (in edi_19 + 0x00000058 : word32)
  Class: Eq_762
  DataType: word32
  OrigDataType: word32
T_763: (in Mem0[edi_19 + 0x00000058:real32] : real32)
  Class: Eq_763
  DataType: Eq_763
  OrigDataType: (union (real32 u0) (real64 u1))
T_764: (in Mem0[edi_19 + 0x00000058:real32] * rLoc1_298 : real64)
  Class: Eq_760
  DataType: real64
  OrigDataType: real64
T_765: (in rLoc2_322 : real64)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: (union (64 u0) (real32 u1) (real64 u2))
T_766: (in rLoc3_310 * rLoc3_310 : real64)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real64
T_767: (in sqrt : ptr32)
  Class: Eq_767
  DataType: (ptr Eq_767)
  OrigDataType: (ptr (fn T_772 (T_771)))
T_768: (in rLoc2_300 * rLoc2_300 : real64)
  Class: Eq_768
  DataType: real64
  OrigDataType: real64
T_769: (in rLoc3_304 * rLoc3_304 : real64)
  Class: Eq_769
  DataType: real64
  OrigDataType: real64
T_770: (in rLoc2_300 * rLoc2_300 + rLoc3_304 * rLoc3_304 : real64)
  Class: Eq_770
  DataType: real64
  OrigDataType: real64
T_771: (in rLoc2_300 * rLoc2_300 + rLoc3_304 * rLoc3_304 + rLoc2_322 : real64)
  Class: Eq_771
  DataType: real64
  OrigDataType: real64
T_772: (in sqrt(rLoc2_300 * rLoc2_300 + rLoc3_304 * rLoc3_304 + rLoc2_322) : real64)
  Class: Eq_772
  DataType: real64
  OrigDataType: real64
T_773: (in 0x00000060 : word32)
  Class: Eq_773
  DataType: word32
  OrigDataType: word32
T_774: (in edi_19 + 0x00000060 : word32)
  Class: Eq_774
  DataType: word32
  OrigDataType: word32
T_775: (in Mem0[edi_19 + 0x00000060:real32] : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real32
T_776: (in rLoc2_322 - Mem0[edi_19 + 0x00000060:real32] : word32)
  Class: Eq_776
  DataType: real32
  OrigDataType: real32
T_777: (in cond(rLoc2_322 - Mem0[edi_19 + 0x00000060:real32]) : byte)
  Class: Eq_611
  DataType: byte
  OrigDataType: byte
T_778: (in edi_19 + 0x00000060 : word32)
  Class: Eq_778
  DataType: word32
  OrigDataType: word32
T_779: (in Mem0[edi_19 + 0x00000060:real32] : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: (union (32 u0) (real32 u1))
T_780: (in rLoc2_322 <=u Mem0[edi_19 + 0x00000060:real32] : bool)
  Class: Eq_780
  DataType: bool
  OrigDataType: bool
T_781: (in fn0804844D : ptr32)
  Class: Eq_301
  DataType: (ptr Eq_301)
  OrigDataType: (ptr (fn T_787 (T_783, T_785, T_786)))
T_782: (in 0x00000034 : word32)
  Class: Eq_782
  DataType: word32
  OrigDataType: word32
T_783: (in fp - 0x00000034 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_784: (in 0x0000004C : word32)
  Class: Eq_784
  DataType: word32
  OrigDataType: word32
T_785: (in fp - 0x0000004C : word32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: word32
T_786: (in edi_19 + 0x00000054 : word32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: word32
T_787: (in fn0804844D(fp - 0x00000034, fp - 0x0000004C, edi_19 + 0x00000054) : void)
  Class: Eq_310
  DataType: void
  OrigDataType: void
T_788: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_792 (T_789, T_791)))
T_789: (in fp - 0x0000004C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_790: (in 0x00000040 : word32)
  Class: Eq_790
  DataType: word32
  OrigDataType: word32
T_791: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_792: (in fn08048438(fp - 0x0000004C, fp - 0x00000040) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_793: (in fn0804844D : ptr32)
  Class: Eq_301
  DataType: (ptr Eq_301)
  OrigDataType: (ptr (fn T_797 (T_794, T_795, T_796)))
T_794: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_795: (in fp - 0x0000004C : word32)
  Class: Eq_66
  DataType: (ptr Eq_66)
  OrigDataType: word32
T_796: (in edi_19 + 0x00000054 : word32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: word32
T_797: (in fn0804844D(fp - 0x00000040, fp - 0x0000004C, edi_19 + 0x00000054) : void)
  Class: Eq_310
  DataType: void
  OrigDataType: void
T_798: (in fn080484A2 : ptr32)
  Class: Eq_720
  DataType: (ptr Eq_720)
  OrigDataType: (ptr (fn T_800 (T_799)))
T_799: (in fp - 0x0000004C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_800: (in fn080484A2(fp - 0x0000004C) : void)
  Class: Eq_724
  DataType: void
  OrigDataType: void
T_801: (in rLoc1_283 : real64)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real64
T_802: (in 0x00000060 : word32)
  Class: Eq_802
  DataType: word32
  OrigDataType: word32
T_803: (in edi_19 + 0x00000060 : word32)
  Class: Eq_803
  DataType: word32
  OrigDataType: word32
T_804: (in Mem0[edi_19 + 0x00000060:real32] : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real32
T_805: (in sqrt : ptr32)
  Class: Eq_805
  DataType: (ptr Eq_805)
  OrigDataType: (ptr (fn T_809 (T_808)))
T_806: (in rLoc1_283 * rLoc1_283 : real64)
  Class: Eq_806
  DataType: real64
  OrigDataType: real64
T_807: (in rLoc58_253 * rLoc58_253 : real64)
  Class: Eq_807
  DataType: real64
  OrigDataType: real64
T_808: (in rLoc1_283 * rLoc1_283 - rLoc58_253 * rLoc58_253 : real64)
  Class: Eq_808
  DataType: real64
  OrigDataType: real64
T_809: (in sqrt(rLoc1_283 * rLoc1_283 - rLoc58_253 * rLoc58_253) : real64)
  Class: Eq_809
  DataType: real64
  OrigDataType: real64
T_810: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_812 (T_642, T_811)))
T_811: (in fp - 0x0000004C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_812: (in fn08048438(dwArg04, fp - 0x0000004C) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_813: (in sqrt : ptr32)
  Class: Eq_813
  DataType: (ptr Eq_813)
  OrigDataType: (ptr (fn T_814 (T_658)))
T_814: (in sqrt(rLoc2_130) : real64)
  Class: Eq_814
  DataType: real64
  OrigDataType: real64
T_815: (in rLoc2_172 : real64)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real64
T_816: (in 0x00000060 : word32)
  Class: Eq_816
  DataType: word32
  OrigDataType: word32
T_817: (in edi_19 + 0x00000060 : word32)
  Class: Eq_817
  DataType: word32
  OrigDataType: word32
T_818: (in Mem0[edi_19 + 0x00000060:real32] : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real32
T_819: (in rLoc2_172 * rLoc2_172 : real64)
  Class: Eq_627
  DataType: real64
  OrigDataType: real64
T_820: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_824 (T_822, T_823)))
T_821: (in 0x00000028 : word32)
  Class: Eq_821
  DataType: word32
  OrigDataType: word32
T_822: (in fp - 0x00000028 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_823: (in fp - 0x00000028 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_824: (in fn08048438(fp - 0x00000028, fp - 0x00000028) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_825: (in FPUF : byte)
  Class: Eq_825
  DataType: byte
  OrigDataType: byte
T_826: (in esi_11 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: int32
T_827: (in esi : word32)
  Class: Eq_827
  DataType: word32
  OrigDataType: word32
T_828: (in 0xFFFFFFFF : word32)
  Class: Eq_828
  DataType: word32
  OrigDataType: word32
T_829: (in esi | 0xFFFFFFFF : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_830: (in ebx_15 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: int32
T_831: (in 0x00000000 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_832: (in rLoc1_23 : real64)
  Class: Eq_832
  DataType: Eq_832
  OrigDataType: (union (64 u0) (real32 u1) (real64 u2))
T_833: (in 0x08049A0C : ptr32)
  Class: Eq_833
  DataType: (ptr Eq_833)
  OrigDataType: (ptr (struct (0 T_834 t0000)))
T_834: (in Mem0[0x08049A0C:real32] : real32)
  Class: Eq_832
  DataType: Eq_832
  OrigDataType: real32
T_835: (in ecx : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: int32
T_836: (in ebx_15 < ecx : bool)
  Class: Eq_836
  DataType: bool
  OrigDataType: bool
T_837: (in rLoc1_322 : real64)
  Class: Eq_832
  DataType: Eq_832
  OrigDataType: (union (64 u0) (real32 u1) (real64 u2))
T_838: (in fn08048C66 : ptr32)
  Class: Eq_838
  DataType: (ptr Eq_838)
  OrigDataType: (ptr (fn T_847 (T_843, T_844, T_830, T_844, T_845, T_846)))
T_839: (in signature of fn08048C66 : void)
  Class: Eq_838
  DataType: (ptr Eq_838)
  OrigDataType: 
T_840: (in dwArg04 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_841: (in dwArg08 : word32)
  Class: Eq_841
  DataType: real32
  OrigDataType: word32
T_842: (in rLoc1Out : ptr32)
  Class: Eq_842
  DataType: (ptr real64)
  OrigDataType: ptr32
T_843: (in edx : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_844: (in dwArg04 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_863 t0000) (4 T_875 t0004) (8 T_887 t0008)))
T_845: (in dwArg10 : word32)
  Class: Eq_841
  DataType: real32
  OrigDataType: word32
T_846: (in out rLoc1_322 : ptr32)
  Class: Eq_842
  DataType: (ptr real64)
  OrigDataType: (ptr real64)
T_847: (in fn08048C66(edx, dwArg04, ebx_15, dwArg04, dwArg10, out rLoc1_322) : byte)
  Class: Eq_825
  DataType: byte
  OrigDataType: byte
T_848: (in rLoc2 : real64)
  Class: Eq_832
  DataType: Eq_832
  OrigDataType: (union (real32 u0) (real64 u1))
T_849: (in 0xFFFFFFFF : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_850: (in esi_11 != 0xFFFFFFFF : bool)
  Class: Eq_850
  DataType: bool
  OrigDataType: bool
T_851: (in edi_83 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_917 t0000) (4 T_928 t0004) (8 T_939 t0008) (C T_867 t000C) (10 T_879 t0010) (14 T_891 t0014) (18 T_925 t0018) (1C T_936 t001C) (20 T_947 t0020) (60 T_921 t0060) (7C T_894 t007C)))
T_852: (in 0x00040080 : word32)
  Class: Eq_852
  DataType: int32
  OrigDataType: int32
T_853: (in esi_11 *s 0x00040080 : int32)
  Class: Eq_853
  DataType: int32
  OrigDataType: int32
T_854: (in edx + esi_11 *s 0x00040080 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_855: (in rLoc2_89 : real64)
  Class: Eq_855
  DataType: Eq_855
  OrigDataType: real64
T_856: (in dwArg08 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct (0 T_859 t0000) (4 T_871 t0004) (8 T_883 t0008)))
T_857: (in 0x00000000 : word32)
  Class: Eq_857
  DataType: word32
  OrigDataType: word32
T_858: (in dwArg08 + 0x00000000 : word32)
  Class: Eq_858
  DataType: word32
  OrigDataType: word32
T_859: (in Mem0[dwArg08 + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_860: (in rLoc2 * Mem0[dwArg08 + 0x00000000:real32] : word32)
  Class: Eq_860
  DataType: real32
  OrigDataType: real32
T_861: (in 0x00000000 : word32)
  Class: Eq_861
  DataType: word32
  OrigDataType: word32
T_862: (in dwArg04 + 0x00000000 : word32)
  Class: Eq_862
  DataType: word32
  OrigDataType: word32
T_863: (in Mem0[dwArg04 + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_864: (in rLoc2 * Mem0[dwArg08 + 0x00000000:real32] + Mem0[dwArg04 + 0x00000000:real32] : word32)
  Class: Eq_855
  DataType: Eq_855
  OrigDataType: real32
T_865: (in 0x0000000C : word32)
  Class: Eq_865
  DataType: word32
  OrigDataType: word32
T_866: (in edi_83 + 0x0000000C : word32)
  Class: Eq_866
  DataType: word32
  OrigDataType: word32
T_867: (in Mem90[edi_83 + 0x0000000C:real32] : real32)
  Class: Eq_855
  DataType: Eq_855
  OrigDataType: real32
T_868: (in rLoc3_93 : real64)
  Class: Eq_868
  DataType: Eq_868
  OrigDataType: real64
T_869: (in 0x00000004 : word32)
  Class: Eq_869
  DataType: word32
  OrigDataType: word32
T_870: (in dwArg08 + 0x00000004 : word32)
  Class: Eq_870
  DataType: word32
  OrigDataType: word32
T_871: (in Mem90[dwArg08 + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: (union (real32 u0) (real64 u1))
T_872: (in Mem90[dwArg08 + 0x00000004:real32] * rLoc1_23 : real64)
  Class: Eq_872
  DataType: Eq_872
  OrigDataType: (union (real32 u0) (real64 u1))
T_873: (in 0x00000004 : word32)
  Class: Eq_873
  DataType: word32
  OrigDataType: word32
T_874: (in dwArg04 + 0x00000004 : word32)
  Class: Eq_874
  DataType: word32
  OrigDataType: word32
T_875: (in Mem90[dwArg04 + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real32
T_876: (in Mem90[dwArg08 + 0x00000004:real32] * rLoc1_23 + Mem90[dwArg04 + 0x00000004:real32] : word32)
  Class: Eq_868
  DataType: Eq_868
  OrigDataType: real32
T_877: (in 0x00000010 : word32)
  Class: Eq_877
  DataType: word32
  OrigDataType: word32
T_878: (in edi_83 + 0x00000010 : word32)
  Class: Eq_878
  DataType: word32
  OrigDataType: word32
T_879: (in Mem94[edi_83 + 0x00000010:real32] : real32)
  Class: Eq_868
  DataType: Eq_868
  OrigDataType: real32
T_880: (in rLoc3_99 : real64)
  Class: Eq_880
  DataType: Eq_880
  OrigDataType: real64
T_881: (in 0x00000008 : word32)
  Class: Eq_881
  DataType: word32
  OrigDataType: word32
T_882: (in dwArg08 + 0x00000008 : word32)
  Class: Eq_882
  DataType: word32
  OrigDataType: word32
T_883: (in Mem94[dwArg08 + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_884: (in rLoc1_23 * Mem94[dwArg08 + 0x00000008:real32] : word32)
  Class: Eq_884
  DataType: real32
  OrigDataType: real32
T_885: (in 0x00000008 : word32)
  Class: Eq_885
  DataType: word32
  OrigDataType: word32
T_886: (in dwArg04 + 0x00000008 : word32)
  Class: Eq_886
  DataType: word32
  OrigDataType: word32
T_887: (in Mem94[dwArg04 + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_888: (in rLoc1_23 * Mem94[dwArg08 + 0x00000008:real32] + Mem94[dwArg04 + 0x00000008:real32] : word32)
  Class: Eq_880
  DataType: Eq_880
  OrigDataType: real32
T_889: (in 0x00000014 : word32)
  Class: Eq_889
  DataType: word32
  OrigDataType: word32
T_890: (in edi_83 + 0x00000014 : word32)
  Class: Eq_890
  DataType: word32
  OrigDataType: word32
T_891: (in Mem100[edi_83 + 0x00000014:real32] : real32)
  Class: Eq_880
  DataType: Eq_880
  OrigDataType: real32
T_892: (in 0x0000007C : word32)
  Class: Eq_892
  DataType: word32
  OrigDataType: word32
T_893: (in edi_83 + 0x0000007C : word32)
  Class: Eq_893
  DataType: word32
  OrigDataType: word32
T_894: (in Mem0[edi_83 + 0x0000007C:byte] : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_895: (in 0x00 : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_896: (in Mem0[edi_83 + 0x0000007C:byte] != 0x00 : bool)
  Class: Eq_896
  DataType: bool
  OrigDataType: bool
T_897: (in 0x00000000 : word32)
  Class: Eq_897
  DataType: word32
  OrigDataType: word32
T_898: (in eax : word32)
  Class: Eq_898
  DataType: (ptr Eq_898)
  OrigDataType: (ptr (struct (0 T_901 t0000) (4 T_905 t0004) (8 T_909 t0008)))
T_899: (in 0x00000000 : word32)
  Class: Eq_899
  DataType: word32
  OrigDataType: word32
T_900: (in eax + 0x00000000 : word32)
  Class: Eq_900
  DataType: word32
  OrigDataType: word32
T_901: (in Mem66[eax + 0x00000000:word32] : word32)
  Class: Eq_897
  DataType: word32
  OrigDataType: word32
T_902: (in 0x00000000 : word32)
  Class: Eq_902
  DataType: word32
  OrigDataType: word32
T_903: (in 0x00000004 : word32)
  Class: Eq_903
  DataType: word32
  OrigDataType: word32
T_904: (in eax + 0x00000004 : word32)
  Class: Eq_904
  DataType: word32
  OrigDataType: word32
T_905: (in Mem67[eax + 0x00000004:word32] : word32)
  Class: Eq_902
  DataType: word32
  OrigDataType: word32
T_906: (in 0x00000000 : word32)
  Class: Eq_906
  DataType: word32
  OrigDataType: word32
T_907: (in 0x00000008 : word32)
  Class: Eq_907
  DataType: word32
  OrigDataType: word32
T_908: (in eax + 0x00000008 : word32)
  Class: Eq_908
  DataType: word32
  OrigDataType: word32
T_909: (in Mem68[eax + 0x00000008:word32] : word32)
  Class: Eq_906
  DataType: word32
  OrigDataType: word32
T_910: (in rLoc1_322 - rLoc1_322 : word32)
  Class: Eq_910
  DataType: real32
  OrigDataType: real32
T_911: (in cond(rLoc1_322 - rLoc1_322) : byte)
  Class: Eq_825
  DataType: byte
  OrigDataType: byte
T_912: (in rLoc1_322 >=u rLoc1_322 : bool)
  Class: Eq_912
  DataType: bool
  OrigDataType: bool
T_913: (in 0x00000001 : word32)
  Class: Eq_913
  DataType: word32
  OrigDataType: word32
T_914: (in ebx_15 + 0x00000001 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_915: (in 0x00000000 : word32)
  Class: Eq_915
  DataType: word32
  OrigDataType: word32
T_916: (in edi_83 + 0x00000000 : word32)
  Class: Eq_916
  DataType: word32
  OrigDataType: word32
T_917: (in Mem100[edi_83 + 0x00000000:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: real32
T_918: (in rLoc2_89 - Mem100[edi_83 + 0x00000000:real32] : word32)
  Class: Eq_918
  DataType: real32
  OrigDataType: real32
T_919: (in 0x00000060 : word32)
  Class: Eq_919
  DataType: word32
  OrigDataType: word32
T_920: (in edi_83 + 0x00000060 : word32)
  Class: Eq_920
  DataType: word32
  OrigDataType: word32
T_921: (in Mem100[edi_83 + 0x00000060:real32] : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real32
T_922: (in (rLoc2_89 - Mem100[edi_83 + 0x00000000:real32]) / Mem100[edi_83 + 0x00000060:real32] : word32)
  Class: Eq_922
  DataType: real32
  OrigDataType: real32
T_923: (in 0x00000018 : word32)
  Class: Eq_923
  DataType: word32
  OrigDataType: word32
T_924: (in edi_83 + 0x00000018 : word32)
  Class: Eq_924
  DataType: word32
  OrigDataType: word32
T_925: (in Mem297[edi_83 + 0x00000018:real32] : real32)
  Class: Eq_922
  DataType: real32
  OrigDataType: real32
T_926: (in 0x00000004 : word32)
  Class: Eq_926
  DataType: word32
  OrigDataType: word32
T_927: (in edi_83 + 0x00000004 : word32)
  Class: Eq_927
  DataType: word32
  OrigDataType: word32
T_928: (in Mem297[edi_83 + 0x00000004:real32] : real32)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: real32
T_929: (in rLoc3_93 - Mem297[edi_83 + 0x00000004:real32] : word32)
  Class: Eq_929
  DataType: real32
  OrigDataType: real32
T_930: (in 0x00000060 : word32)
  Class: Eq_930
  DataType: word32
  OrigDataType: word32
T_931: (in edi_83 + 0x00000060 : word32)
  Class: Eq_931
  DataType: word32
  OrigDataType: word32
T_932: (in Mem297[edi_83 + 0x00000060:real32] : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real32
T_933: (in (rLoc3_93 - Mem297[edi_83 + 0x00000004:real32]) / Mem297[edi_83 + 0x00000060:real32] : word32)
  Class: Eq_933
  DataType: real32
  OrigDataType: real32
T_934: (in 0x0000001C : word32)
  Class: Eq_934
  DataType: word32
  OrigDataType: word32
T_935: (in edi_83 + 0x0000001C : word32)
  Class: Eq_935
  DataType: word32
  OrigDataType: word32
T_936: (in Mem303[edi_83 + 0x0000001C:real32] : real32)
  Class: Eq_933
  DataType: real32
  OrigDataType: real32
T_937: (in 0x00000008 : word32)
  Class: Eq_937
  DataType: word32
  OrigDataType: word32
T_938: (in edi_83 + 0x00000008 : word32)
  Class: Eq_938
  DataType: word32
  OrigDataType: word32
T_939: (in Mem303[edi_83 + 0x00000008:real32] : real32)
  Class: Eq_42
  DataType: Eq_42
  OrigDataType: real32
T_940: (in rLoc3_99 - Mem303[edi_83 + 0x00000008:real32] : word32)
  Class: Eq_940
  DataType: real32
  OrigDataType: real32
T_941: (in 0x00000060 : word32)
  Class: Eq_941
  DataType: word32
  OrigDataType: word32
T_942: (in edi_83 + 0x00000060 : word32)
  Class: Eq_942
  DataType: word32
  OrigDataType: word32
T_943: (in Mem303[edi_83 + 0x00000060:real32] : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real32
T_944: (in (rLoc3_99 - Mem303[edi_83 + 0x00000008:real32]) / Mem303[edi_83 + 0x00000060:real32] : word32)
  Class: Eq_944
  DataType: real32
  OrigDataType: real32
T_945: (in 0x00000020 : word32)
  Class: Eq_945
  DataType: word32
  OrigDataType: word32
T_946: (in edi_83 + 0x00000020 : word32)
  Class: Eq_946
  DataType: word32
  OrigDataType: word32
T_947: (in Mem306[edi_83 + 0x00000020:real32] : real32)
  Class: Eq_944
  DataType: real32
  OrigDataType: real32
T_948: (in 0x0000007C : word32)
  Class: Eq_948
  DataType: word32
  OrigDataType: word32
T_949: (in edi_83 + 0x0000007C : word32)
  Class: Eq_949
  DataType: word32
  OrigDataType: word32
T_950: (in Mem100[edi_83 + 0x0000007C:byte] : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_951: (in 0x02 : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_952: (in Mem100[edi_83 + 0x0000007C:byte] != 0x02 : bool)
  Class: Eq_952
  DataType: bool
  OrigDataType: bool
T_953: (in fn0804847F : ptr32)
  Class: Eq_632
  DataType: (ptr Eq_632)
  OrigDataType: (ptr (fn T_960 (T_954, T_957, T_959)))
T_954: (in 0x0824A500 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_955: (in fp : ptr32)
  Class: Eq_955
  DataType: ptr32
  OrigDataType: ptr32
T_956: (in 0x00000040 : word32)
  Class: Eq_956
  DataType: word32
  OrigDataType: word32
T_957: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_958: (in 0x0000000C : word32)
  Class: Eq_958
  DataType: word32
  OrigDataType: word32
T_959: (in edi_83 + 0x0000000C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_960: (in fn0804847F(0x0824A500, fp - 0x00000040, edi_83 + 0x0000000C) : void)
  Class: Eq_638
  DataType: void
  OrigDataType: void
T_961: (in rLoc1_113 : real64)
  Class: Eq_961
  DataType: Eq_961
  OrigDataType: (union (64 u0) (real64 u1))
T_962: (in fn08048498 : ptr32)
  Class: Eq_962
  DataType: (ptr Eq_962)
  OrigDataType: (ptr (fn T_965 (T_964)))
T_963: (in signature of fn08048498 : void)
  Class: Eq_962
  DataType: (ptr Eq_962)
  OrigDataType: 
T_964: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_965: (in fn08048498(fp - 0x00000040) : real64)
  Class: Eq_961
  DataType: Eq_961
  OrigDataType: real64
T_966: (in fn080484A2 : ptr32)
  Class: Eq_720
  DataType: (ptr Eq_720)
  OrigDataType: (ptr (fn T_968 (T_967)))
T_967: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_968: (in fn080484A2(fp - 0x00000040) : void)
  Class: Eq_724
  DataType: void
  OrigDataType: void
T_969: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_973 (T_971, T_972)))
T_970: (in 0x00000018 : word32)
  Class: Eq_970
  DataType: word32
  OrigDataType: word32
T_971: (in edi_83 + 0x00000018 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_972: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_973: (in fn08048438(edi_83 + 0x00000018, fp - 0x00000040) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_974: (in ebx_118 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: int32
T_975: (in fp - 0x00000040 : word32)
  Class: Eq_975
  DataType: word32
  OrigDataType: word32
T_976: (in fp - 0x00000040 : word32)
  Class: Eq_976
  DataType: word32
  OrigDataType: word32
T_977: (in fp - 0x00000040 ^ fp - 0x00000040 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_978: (in (word16) FPUF : word16)
  Class: Eq_978
  DataType: word16
  OrigDataType: word16
T_979: (in 8 : int16)
  Class: Eq_979
  DataType: int16
  OrigDataType: int16
T_980: (in (word16) FPUF << 8 : word16)
  Class: Eq_980
  DataType: ui16
  OrigDataType: ui16
T_981: (in fn0804847F : ptr32)
  Class: Eq_632
  DataType: (ptr Eq_632)
  OrigDataType: (ptr (fn T_986 (T_983, T_985, T_851)))
T_982: (in 0x0000000C : word32)
  Class: Eq_982
  DataType: word32
  OrigDataType: word32
T_983: (in edi_83 + 0x0000000C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_984: (in 0x00000018 : word32)
  Class: Eq_984
  DataType: word32
  OrigDataType: word32
T_985: (in edi_83 + 0x00000018 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_986: (in fn0804847F(edi_83 + 0x0000000C, edi_83 + 0x00000018, edi_83) : void)
  Class: Eq_638
  DataType: void
  OrigDataType: void
T_987: (in fn080484A2 : ptr32)
  Class: Eq_720
  DataType: (ptr Eq_720)
  OrigDataType: (ptr (fn T_989 (T_988)))
T_988: (in edi_83 + 0x00000018 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_989: (in fn080484A2(edi_83 + 0x00000018) : void)
  Class: Eq_724
  DataType: void
  OrigDataType: void
T_990: (in ebx_118 < ecx : bool)
  Class: Eq_990
  DataType: bool
  OrigDataType: bool
T_991: (in rLoc1_271 : real64)
  Class: Eq_961
  DataType: Eq_961
  OrigDataType: (union (64 u0) (real64 u1))
T_992: (in fn08048C66 : ptr32)
  Class: Eq_838
  DataType: (ptr Eq_838)
  OrigDataType: (ptr (fn T_998 (T_843, T_993, T_974, T_995, T_996, T_997)))
T_993: (in edi_83 + 0x0000000C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_994: (in 0x00000040 : word32)
  Class: Eq_994
  DataType: word32
  OrigDataType: word32
T_995: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_996: (in 1F : real32)
  Class: Eq_841
  DataType: real32
  OrigDataType: real32
T_997: (in out rLoc1_271 : ptr32)
  Class: Eq_842
  DataType: (ptr real64)
  OrigDataType: (ptr real64)
T_998: (in fn08048C66(edx, edi_83 + 0x0000000C, ebx_118, fp - 0x00000040, 1F, out rLoc1_271) : byte)
  Class: Eq_825
  DataType: byte
  OrigDataType: byte
T_999: (in 0x08049A10 : ptr32)
  Class: Eq_999
  DataType: (ptr Eq_999)
  OrigDataType: (ptr (struct (0 T_1000 t0000)))
T_1000: (in Mem100[0x08049A10:real32] : real32)
  Class: Eq_961
  DataType: Eq_961
  OrigDataType: (union (32 u0) (real32 u1))
T_1001: (in rLoc1_271 <=u Mem100[0x08049A10:real32] : bool)
  Class: Eq_1001
  DataType: bool
  OrigDataType: bool
T_1002: (in fn0804847F : ptr32)
  Class: Eq_632
  DataType: (ptr Eq_632)
  OrigDataType: (ptr (fn T_1007 (T_856, T_1004, T_1006)))
T_1003: (in 0x0000004C : word32)
  Class: Eq_1003
  DataType: word32
  OrigDataType: word32
T_1004: (in fp - 0x0000004C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1005: (in 0x00000040 : word32)
  Class: Eq_1005
  DataType: word32
  OrigDataType: word32
T_1006: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1007: (in fn0804847F(dwArg08, fp - 0x0000004C, fp - 0x00000040) : void)
  Class: Eq_638
  DataType: void
  OrigDataType: void
T_1008: (in fn08048498 : ptr32)
  Class: Eq_962
  DataType: (ptr Eq_962)
  OrigDataType: (ptr (fn T_1010 (T_1009)))
T_1009: (in fp - 0x0000004C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1010: (in fn08048498(fp - 0x0000004C) : real64)
  Class: Eq_961
  DataType: Eq_961
  OrigDataType: real64
T_1011: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_1014 (T_1012, T_1013)))
T_1012: (in edi_83 + 0x00000018 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1013: (in fp - 0x00000040 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1014: (in fn08048438(edi_83 + 0x00000018, fp - 0x00000040) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_1015: (in fn08048428 : ptr32)
  Class: Eq_1015
  DataType: (ptr Eq_1015)
  OrigDataType: (ptr (fn T_1017 ()))
T_1016: (in signature of fn08048428 : void)
  Class: Eq_1015
  DataType: (ptr Eq_1015)
  OrigDataType: 
T_1017: (in fn08048428() : void)
  Class: Eq_1017
  DataType: void
  OrigDataType: void
T_1018: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_1022 (T_1019, T_1021)))
T_1019: (in edi_83 + 0x0000000C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1020: (in 0x0000003C : word32)
  Class: Eq_1020
  DataType: word32
  OrigDataType: word32
T_1021: (in edi_83 + 0x0000003C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1022: (in fn08048438(edi_83 + 0x0000000C, edi_83 + 0x0000003C) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_1023: (in rLoc1_155 : real64)
  Class: Eq_1023
  DataType: Eq_1023
  OrigDataType: real64
T_1024: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_1027 (T_1025, T_1026)))
T_1025: (in edi_83 + 0x00000018 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1026: (in edi_83 + 0x0000003C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1027: (in fn08048438(edi_83 + 0x00000018, edi_83 + 0x0000003C) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: (union (64 u0) (real64 u1))
T_1028: (in -fn08048438(edi_83 + 0x00000018, edi_83 + 0x0000003C) : real64)
  Class: Eq_1023
  DataType: Eq_1023
  OrigDataType: 64
T_1029: (in wLoc4E_159 : word16)
  Class: Eq_1029
  DataType: uint16
  OrigDataType: word16
T_1030: (in __fstcw : ptr32)
  Class: Eq_1030
  DataType: (ptr Eq_1030)
  OrigDataType: (ptr (fn T_1031 ()))
T_1031: (in __fstcw() : uint16)
  Class: Eq_1029
  DataType: uint16
  OrigDataType: uint16
T_1032: (in atan : ptr32)
  Class: Eq_1032
  DataType: (ptr Eq_1032)
  OrigDataType: (ptr (fn T_1039 (T_1038, T_1023)))
T_1033: (in sqrt : ptr32)
  Class: Eq_1033
  DataType: (ptr Eq_1033)
  OrigDataType: (ptr (fn T_1038 (T_1037)))
T_1034: (in 1 : real64)
  Class: Eq_1034
  DataType: real64
  OrigDataType: real64
T_1035: (in 1 : real64)
  Class: Eq_1035
  DataType: real64
  OrigDataType: real64
T_1036: (in rLoc1_155 * 1 : real64)
  Class: Eq_1036
  DataType: real64
  OrigDataType: real64
T_1037: (in 1 - rLoc1_155 * 1 : real64)
  Class: Eq_1037
  DataType: real64
  OrigDataType: real64
T_1038: (in sqrt(1 - rLoc1_155 * 1) : real64)
  Class: Eq_1038
  DataType: real64
  OrigDataType: real64
T_1039: (in atan(sqrt(1 - rLoc1_155 * 1), rLoc1_155) : real64)
  Class: Eq_1039
  DataType: real64
  OrigDataType: real64
T_1040: (in __fldcw : ptr32)
  Class: Eq_1040
  DataType: (ptr Eq_1040)
  OrigDataType: (ptr (fn T_1045 (T_1044)))
T_1041: (in SLICE(wLoc4E_159, byte, 8) : byte)
  Class: Eq_1041
  DataType: byte
  OrigDataType: byte
T_1042: (in 0x0C : byte)
  Class: Eq_1042
  DataType: byte
  OrigDataType: byte
T_1043: (in SLICE(wLoc4E_159, byte, 8) | 0x0C : byte)
  Class: Eq_1043
  DataType: byte
  OrigDataType: byte
T_1044: (in DPB(wLoc4E_159, SLICE(wLoc4E_159, byte, 8) | 0x0C, 8, 8) : word16)
  Class: Eq_1044
  DataType: word16
  OrigDataType: word16
T_1045: (in __fldcw(DPB(wLoc4E_159, SLICE(wLoc4E_159, byte, 8) | 0x0C, 8, 8)) : void)
  Class: Eq_1045
  DataType: void
  OrigDataType: void
T_1046: (in __fldcw : ptr32)
  Class: Eq_1046
  DataType: (ptr Eq_1046)
  OrigDataType: (ptr (fn T_1047 (T_1029)))
T_1047: (in __fldcw(wLoc4E_159) : void)
  Class: Eq_1047
  DataType: void
  OrigDataType: void
T_1048: (in 0x0000007C : word32)
  Class: Eq_1048
  DataType: word32
  OrigDataType: word32
T_1049: (in edi_83 + 0x0000007C : word32)
  Class: Eq_1049
  DataType: word32
  OrigDataType: word32
T_1050: (in Mem100[edi_83 + 0x0000007C:byte] : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_1051: (in 0x00 : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_1052: (in Mem100[edi_83 + 0x0000007C:byte] != 0x00 : bool)
  Class: Eq_1052
  DataType: bool
  OrigDataType: bool
T_1053: (in rLoc1_271 <u rLoc1_113 : bool)
  Class: Eq_1053
  DataType: bool
  OrigDataType: bool
T_1054: (in 0x00000001 : word32)
  Class: Eq_1054
  DataType: word32
  OrigDataType: word32
T_1055: (in ebx_118 + 0x00000001 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_1056: (in ebp_123 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: int32
T_1057: (in 0x00000000 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_1058: (in esi_124 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (struct 40080 (60 T_1160 t0060) (64 T_1167 t0064) (68 T_1184 t0068) (6C T_1179 t006C) (7C T_1070 t007C)))
T_1059: (in eax : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1060: (in edx : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: int32
T_1061: (in ebp_123 < edx : bool)
  Class: Eq_1061
  DataType: bool
  OrigDataType: bool
T_1062: (in edi_105 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1063: (in 0x00000030 : word32)
  Class: Eq_1063
  DataType: word32
  OrigDataType: word32
T_1064: (in esi_124 + 0x00000030 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1065: (in fn0804847F : ptr32)
  Class: Eq_632
  DataType: (ptr Eq_632)
  OrigDataType: (ptr (fn T_1067 (T_1058, T_1062, T_1066)))
T_1066: (in 0x0824A50C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1067: (in fn0804847F(esi_124, edi_105, 0x0824A50C) : void)
  Class: Eq_638
  DataType: void
  OrigDataType: void
T_1068: (in 0x0000007C : word32)
  Class: Eq_1068
  DataType: word32
  OrigDataType: word32
T_1069: (in esi_124 + 0x0000007C : word32)
  Class: Eq_1069
  DataType: word32
  OrigDataType: word32
T_1070: (in Mem0[esi_124 + 0x0000007C:byte] : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_1071: (in 0x00 : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_1072: (in Mem0[esi_124 + 0x0000007C:byte] != 0x00 : bool)
  Class: Eq_1072
  DataType: bool
  OrigDataType: bool
T_1073: (in ebx_41 : word32)
  Class: Eq_1073
  DataType: ui32
  OrigDataType: ui32
T_1074: (in 0x00000000 : word32)
  Class: Eq_1073
  DataType: ui32
  OrigDataType: word32
T_1075: (in esi_44 : word32)
  Class: Eq_827
  DataType: word32
  OrigDataType: word32
T_1076: (in 0x0964CD20 : word32)
  Class: Eq_827
  DataType: word32
  OrigDataType: word32
T_1077: (in 0x00000000 : word32)
  Class: Eq_1077
  DataType: word32
  OrigDataType: word32
T_1078: (in fp : ptr32)
  Class: Eq_1078
  DataType: (ptr Eq_1078)
  OrigDataType: (ptr (struct (FFFFFFA4 T_1089 tFFFFFFA4) (FFFFFFAC T_1085 tFFFFFFAC) (FFFFFFB0 T_1081 tFFFFFFB0)))
T_1079: (in 0x00000050 : word32)
  Class: Eq_1079
  DataType: word32
  OrigDataType: word32
T_1080: (in fp - 0x00000050 : word32)
  Class: Eq_1080
  DataType: word32
  OrigDataType: word32
T_1081: (in Mem51[fp - 0x00000050:word32] : word32)
  Class: Eq_1077
  DataType: word32
  OrigDataType: word32
T_1082: (in 0x00000002 : word32)
  Class: Eq_1082
  DataType: word32
  OrigDataType: word32
T_1083: (in 0x00000054 : word32)
  Class: Eq_1083
  DataType: word32
  OrigDataType: word32
T_1084: (in fp - 0x00000054 : word32)
  Class: Eq_1084
  DataType: word32
  OrigDataType: word32
T_1085: (in Mem53[fp - 0x00000054:word32] : word32)
  Class: Eq_1082
  DataType: word32
  OrigDataType: word32
T_1086: (in 0x0824A50C : word32)
  Class: Eq_1086
  DataType: word32
  OrigDataType: word32
T_1087: (in 0x0000005C : word32)
  Class: Eq_1087
  DataType: word32
  OrigDataType: word32
T_1088: (in fp - 0x0000005C : word32)
  Class: Eq_1088
  DataType: word32
  OrigDataType: word32
T_1089: (in Mem59[fp - 0x0000005C:word32] : word32)
  Class: Eq_1086
  DataType: word32
  OrigDataType: word32
T_1090: (in 0x00000018 : word32)
  Class: Eq_1090
  DataType: word32
  OrigDataType: word32
T_1091: (in esi_44 + 0x00000018 : word32)
  Class: Eq_827
  DataType: word32
  OrigDataType: word32
T_1092: (in fn08048EBE : ptr32)
  Class: Eq_1092
  DataType: (ptr Eq_1092)
  OrigDataType: (ptr (fn T_1105 (T_1100, T_1060, T_1059, T_1075, T_1101, T_1075, T_1102, T_1103, T_1104)))
T_1093: (in signature of fn08048EBE : void)
  Class: Eq_1092
  DataType: (ptr Eq_1092)
  OrigDataType: 
T_1094: (in dwArg04 : word32)
  Class: Eq_1094
  DataType: word32
  OrigDataType: word32
T_1095: (in dwArg08 : word32)
  Class: Eq_827
  DataType: word32
  OrigDataType: word32
T_1096: (in dwArg10 : word32)
  Class: Eq_1096
  DataType: word32
  OrigDataType: word32
T_1097: (in rArg0 : real64)
  Class: Eq_1097
  DataType: real64
  OrigDataType: real64
T_1098: (in rArg0Out : ptr32)
  Class: Eq_1098
  DataType: (ptr real64)
  OrigDataType: ptr32
T_1099: (in 0x00000028 : word32)
  Class: Eq_1099
  DataType: word32
  OrigDataType: word32
T_1100: (in fp - 0x00000028 : word32)
  Class: Eq_898
  DataType: (ptr Eq_898)
  OrigDataType: word32
T_1101: (in dwLoc5C : word32)
  Class: Eq_1094
  DataType: word32
  OrigDataType: word32
T_1102: (in dwLoc50 : word32)
  Class: Eq_1096
  DataType: word32
  OrigDataType: word32
T_1103: (in rArg0 : real64)
  Class: Eq_1097
  DataType: real64
  OrigDataType: real64
T_1104: (in out rArg0 : ptr32)
  Class: Eq_1098
  DataType: (ptr real64)
  OrigDataType: (ptr real64)
T_1105: (in fn08048EBE(fp - 0x00000028, edx, eax, esi_44, dwLoc5C, esi_44, dwLoc50, rArg0, out rArg0) : byte)
  Class: Eq_1105
  DataType: byte
  OrigDataType: byte
T_1106: (in wLoc2E_66 : word16)
  Class: Eq_1106
  DataType: uint16
  OrigDataType: word16
T_1107: (in __fstcw : ptr32)
  Class: Eq_1107
  DataType: (ptr Eq_1107)
  OrigDataType: (ptr (fn T_1108 ()))
T_1108: (in __fstcw() : uint16)
  Class: Eq_1106
  DataType: uint16
  OrigDataType: uint16
T_1109: (in ax_72 : word16)
  Class: Eq_1109
  DataType: word16
  OrigDataType: word16
T_1110: (in SLICE(wLoc2E_66, byte, 8) : byte)
  Class: Eq_1110
  DataType: byte
  OrigDataType: byte
T_1111: (in 0x0C : byte)
  Class: Eq_1111
  DataType: byte
  OrigDataType: byte
T_1112: (in SLICE(wLoc2E_66, byte, 8) | 0x0C : byte)
  Class: Eq_1112
  DataType: byte
  OrigDataType: byte
T_1113: (in DPB(wLoc2E_66, SLICE(wLoc2E_66, byte, 8) | 0x0C, 8, 8) : word16)
  Class: Eq_1109
  DataType: word16
  OrigDataType: word16
T_1114: (in __fldcw : ptr32)
  Class: Eq_1114
  DataType: (ptr Eq_1114)
  OrigDataType: (ptr (fn T_1115 (T_1109)))
T_1115: (in __fldcw(ax_72) : void)
  Class: Eq_1115
  DataType: void
  OrigDataType: void
T_1116: (in __fldcw : ptr32)
  Class: Eq_1116
  DataType: (ptr Eq_1116)
  OrigDataType: (ptr (fn T_1117 (T_1106)))
T_1117: (in __fldcw(wLoc2E_66) : void)
  Class: Eq_1117
  DataType: void
  OrigDataType: void
T_1118: (in __fldcw : ptr32)
  Class: Eq_1118
  DataType: (ptr Eq_1118)
  OrigDataType: (ptr (fn T_1119 (T_1109)))
T_1119: (in __fldcw(ax_72) : void)
  Class: Eq_1119
  DataType: void
  OrigDataType: void
T_1120: (in __fldcw : ptr32)
  Class: Eq_1120
  DataType: (ptr Eq_1120)
  OrigDataType: (ptr (fn T_1121 (T_1106)))
T_1121: (in __fldcw(wLoc2E_66) : void)
  Class: Eq_1121
  DataType: void
  OrigDataType: void
T_1122: (in __fldcw : ptr32)
  Class: Eq_1122
  DataType: (ptr Eq_1122)
  OrigDataType: (ptr (fn T_1123 (T_1109)))
T_1123: (in __fldcw(ax_72) : void)
  Class: Eq_1123
  DataType: void
  OrigDataType: void
T_1124: (in __fldcw : ptr32)
  Class: Eq_1124
  DataType: (ptr Eq_1124)
  OrigDataType: (ptr (fn T_1125 (T_1106)))
T_1125: (in __fldcw(wLoc2E_66) : void)
  Class: Eq_1125
  DataType: void
  OrigDataType: void
T_1126: (in ecx_87 : word32)
  Class: Eq_1126
  DataType: word32
  OrigDataType: word32
T_1127: (in rLoc24 : real32)
  Class: Eq_1127
  DataType: real32
  OrigDataType: real32
T_1128: (in (int32) rLoc24 : int32)
  Class: Eq_1128
  DataType: int32
  OrigDataType: int32
T_1129: (in 0x00000008 : word32)
  Class: Eq_1129
  DataType: word32
  OrigDataType: word32
T_1130: (in (int32) rLoc24 << 0x00000008 : word32)
  Class: Eq_1130
  DataType: ui32
  OrigDataType: ui32
T_1131: (in rLoc28 : real32)
  Class: Eq_1131
  DataType: real32
  OrigDataType: real32
T_1132: (in (int32) rLoc28 : int32)
  Class: Eq_1132
  DataType: int32
  OrigDataType: int32
T_1133: (in 0x00000010 : word32)
  Class: Eq_1133
  DataType: word32
  OrigDataType: word32
T_1134: (in (int32) rLoc28 << 0x00000010 : word32)
  Class: Eq_1134
  DataType: ui32
  OrigDataType: ui32
T_1135: (in rLoc20 : real32)
  Class: Eq_1135
  DataType: real32
  OrigDataType: real32
T_1136: (in (int32) rLoc20 : int32)
  Class: Eq_1136
  DataType: int32
  OrigDataType: int32
T_1137: (in ((int32) rLoc28 << 0x00000010) + (int32) rLoc20 : word32)
  Class: Eq_1137
  DataType: word32
  OrigDataType: word32
T_1138: (in ((int32) rLoc24 << 0x00000008) + (((int32) rLoc28 << 0x00000010) + (int32) rLoc20) : word32)
  Class: Eq_1126
  DataType: word32
  OrigDataType: word32
T_1139: (in ecx : word32)
  Class: Eq_1139
  DataType: (ptr Eq_1139)
  OrigDataType: (ptr (struct (0 (arr T_1600) a0000) (4 (arr T_1599) a0004)))
T_1140: (in 0x00000004 : word32)
  Class: Eq_1140
  DataType: word32
  OrigDataType: word32
T_1141: (in ecx + 0x00000004 : word32)
  Class: Eq_1141
  DataType: word32
  OrigDataType: word32
T_1142: (in 0x00000004 : word32)
  Class: Eq_1142
  DataType: ui32
  OrigDataType: ui32
T_1143: (in ebx_41 * 0x00000004 : word32)
  Class: Eq_1143
  DataType: ui32
  OrigDataType: ui32
T_1144: (in (ecx + 0x00000004)[ebx_41 * 0x00000004] : word32)
  Class: Eq_1126
  DataType: word32
  OrigDataType: word32
T_1145: (in 0x00000004 : word32)
  Class: Eq_1145
  DataType: ui32
  OrigDataType: ui32
T_1146: (in ebx_41 * 0x00000004 : word32)
  Class: Eq_1146
  DataType: ui32
  OrigDataType: ui32
T_1147: (in ecx[ebx_41 * 0x00000004] : word32)
  Class: Eq_1126
  DataType: word32
  OrigDataType: word32
T_1148: (in 0x00000002 : word32)
  Class: Eq_1148
  DataType: word32
  OrigDataType: word32
T_1149: (in ebx_41 + 0x00000002 : word32)
  Class: Eq_1073
  DataType: ui32
  OrigDataType: word32
T_1150: (in 0x00030000 : word32)
  Class: Eq_1073
  DataType: ui32
  OrigDataType: word32
T_1151: (in ebx_41 != 0x00030000 : bool)
  Class: Eq_1151
  DataType: bool
  OrigDataType: bool
T_1152: (in 0x0000007C : word32)
  Class: Eq_1152
  DataType: word32
  OrigDataType: word32
T_1153: (in esi_124 + 0x0000007C : word32)
  Class: Eq_1153
  DataType: word32
  OrigDataType: word32
T_1154: (in Mem0[esi_124 + 0x0000007C:byte] : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_1155: (in 0x01 : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_1156: (in Mem0[esi_124 + 0x0000007C:byte] != 0x01 : bool)
  Class: Eq_1156
  DataType: bool
  OrigDataType: bool
T_1157: (in rLoc1_135 : real64)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real64
T_1158: (in 0x00000060 : word32)
  Class: Eq_1158
  DataType: word32
  OrigDataType: word32
T_1159: (in esi_124 + 0x00000060 : word32)
  Class: Eq_1159
  DataType: word32
  OrigDataType: word32
T_1160: (in Mem0[esi_124 + 0x00000060:real32] : real32)
  Class: Eq_731
  DataType: Eq_731
  OrigDataType: real32
T_1161: (in rLoc1_135 * rLoc1_135 : real64)
  Class: Eq_1161
  DataType: real64
  OrigDataType: real64
T_1162: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_1163 (T_1062, T_1062)))
T_1163: (in fn08048438(edi_105, edi_105) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_1164: (in rLoc1_135 * rLoc1_135 - fn08048438(edi_105, edi_105) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_1165: (in 0x00000064 : word32)
  Class: Eq_1165
  DataType: word32
  OrigDataType: word32
T_1166: (in esi_124 + 0x00000064 : word32)
  Class: Eq_1166
  DataType: word32
  OrigDataType: word32
T_1167: (in Mem143[esi_124 + 0x00000064:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real32
T_1168: (in 0x00000001 : word32)
  Class: Eq_1168
  DataType: word32
  OrigDataType: word32
T_1169: (in ebp_123 + 0x00000001 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_1170: (in 0x00040080 : word32)
  Class: Eq_1170
  DataType: word32
  OrigDataType: word32
T_1171: (in esi_124 + 0x00040080 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1172: (in ebx_126 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1173: (in 0x00000018 : word32)
  Class: Eq_1173
  DataType: word32
  OrigDataType: word32
T_1174: (in esi_124 + 0x00000018 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1175: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_1176 (T_1062, T_1172)))
T_1176: (in fn08048438(edi_105, ebx_126) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_1177: (in 0x0000006C : word32)
  Class: Eq_1177
  DataType: word32
  OrigDataType: word32
T_1178: (in esi_124 + 0x0000006C : word32)
  Class: Eq_1178
  DataType: word32
  OrigDataType: word32
T_1179: (in Mem132[esi_124 + 0x0000006C:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real32
T_1180: (in fn08048438 : ptr32)
  Class: Eq_136
  DataType: (ptr Eq_136)
  OrigDataType: (ptr (fn T_1181 (T_1172, T_1058)))
T_1181: (in fn08048438(ebx_126, esi_124) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real64
T_1182: (in 0x00000068 : word32)
  Class: Eq_1182
  DataType: word32
  OrigDataType: word32
T_1183: (in esi_124 + 0x00000068 : word32)
  Class: Eq_1183
  DataType: word32
  OrigDataType: word32
T_1184: (in Mem134[esi_124 + 0x00000068:real32] : real32)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: real32
T_1185: (in fn080483D8 : ptr32)
  Class: Eq_1185
  DataType: (ptr Eq_1185)
  OrigDataType: (ptr (fn T_1187 ()))
T_1186: (in signature of fn080483D8 : void)
  Class: Eq_1185
  DataType: (ptr Eq_1185)
  OrigDataType: 
T_1187: (in fn080483D8() : void)
  Class: Eq_1187
  DataType: void
  OrigDataType: void
T_1188: (in eax_28 : word32)
  Class: Eq_1139
  DataType: (ptr Eq_1139)
  OrigDataType: word32
T_1189: (in eax : word32)
  Class: Eq_1189
  DataType: (ptr Eq_1189)
  OrigDataType: (ptr (struct (14 T_1192 t0014)))
T_1190: (in 0x00000014 : word32)
  Class: Eq_1190
  DataType: word32
  OrigDataType: word32
T_1191: (in eax + 0x00000014 : word32)
  Class: Eq_1191
  DataType: word32
  OrigDataType: word32
T_1192: (in Mem0[eax + 0x00000014:word32] : word32)
  Class: Eq_1139
  DataType: (ptr Eq_1139)
  OrigDataType: word32
T_1193: (in fn080483A8 : ptr32)
  Class: Eq_1193
  DataType: (ptr Eq_1193)
  OrigDataType: (ptr (fn T_1195 ()))
T_1194: (in signature of fn080483A8 : void)
  Class: Eq_1193
  DataType: (ptr Eq_1193)
  OrigDataType: 
T_1195: (in fn080483A8() : void)
  Class: Eq_1195
  DataType: void
  OrigDataType: void
T_1196: (in 0xC2F00000 : word32)
  Class: Eq_1196
  DataType: word32
  OrigDataType: word32
T_1197: (in 0x0824A514 : ptr32)
  Class: Eq_1197
  DataType: (ptr Eq_1197)
  OrigDataType: (ptr (struct (0 T_1198 t0000)))
T_1198: (in Mem35[0x0824A514:word32] : word32)
  Class: Eq_1196
  DataType: word32
  OrigDataType: word32
T_1199: (in ebp_43 : word32)
  Class: Eq_1199
  DataType: int32
  OrigDataType: int32
T_1200: (in 0x00000000 : word32)
  Class: Eq_1199
  DataType: int32
  OrigDataType: word32
T_1201: (in dwLoc400C4_31 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1202: (in 0x0964CD20 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1203: (in dwLoc400C0_32 : word32)
  Class: Eq_1203
  DataType: word32
  OrigDataType: word32
T_1204: (in 0xFFFFFF40 : word32)
  Class: Eq_1203
  DataType: word32
  OrigDataType: word32
T_1205: (in edi_47 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1206: (in esi_48 : word32)
  Class: Eq_1206
  DataType: word32
  OrigDataType: word32
T_1207: (in 0xFFFFFF00 : word32)
  Class: Eq_1206
  DataType: word32
  OrigDataType: word32
T_1208: (in ebx_49 : word32)
  Class: Eq_1208
  DataType: (ptr Eq_1208)
  OrigDataType: (ptr (struct 000C (0 T_1216 t0000) (4 T_1220 t0004) (8 T_1224 t0008)))
T_1209: (in 0x0000000C : word32)
  Class: Eq_1209
  DataType: int32
  OrigDataType: int32
T_1210: (in ebp_43 *s 0x0000000C : int32)
  Class: Eq_1210
  DataType: int32
  OrigDataType: int32
T_1211: (in 0x0964CD20 : word32)
  Class: Eq_1211
  DataType: word32
  OrigDataType: word32
T_1212: (in ebp_43 *s 0x0000000C + 0x0964CD20 : word32)
  Class: Eq_1208
  DataType: (ptr Eq_1208)
  OrigDataType: word32
T_1213: (in (real64) esi_48 : real64)
  Class: Eq_1213
  DataType: Eq_1213
  OrigDataType: real64
T_1214: (in 0x00000000 : word32)
  Class: Eq_1214
  DataType: word32
  OrigDataType: word32
T_1215: (in ebx_49 + 0x00000000 : word32)
  Class: Eq_1215
  DataType: word32
  OrigDataType: word32
T_1216: (in Mem60[ebx_49 + 0x00000000:real32] : real32)
  Class: Eq_1213
  DataType: Eq_1213
  OrigDataType: real32
T_1217: (in (real64) dwLoc400C0_32 : real64)
  Class: Eq_1217
  DataType: Eq_1217
  OrigDataType: real64
T_1218: (in 0x00000004 : word32)
  Class: Eq_1218
  DataType: word32
  OrigDataType: word32
T_1219: (in ebx_49 + 0x00000004 : word32)
  Class: Eq_1219
  DataType: word32
  OrigDataType: word32
T_1220: (in Mem63[ebx_49 + 0x00000004:real32] : real32)
  Class: Eq_1217
  DataType: Eq_1217
  OrigDataType: real32
T_1221: (in 0x44000000 : word32)
  Class: Eq_1221
  DataType: word32
  OrigDataType: word32
T_1222: (in 0x00000008 : word32)
  Class: Eq_1222
  DataType: word32
  OrigDataType: word32
T_1223: (in ebx_49 + 0x00000008 : word32)
  Class: Eq_1223
  DataType: word32
  OrigDataType: word32
T_1224: (in Mem64[ebx_49 + 0x00000008:word32] : word32)
  Class: Eq_1221
  DataType: word32
  OrigDataType: word32
T_1225: (in fn080484A2 : ptr32)
  Class: Eq_720
  DataType: (ptr Eq_720)
  OrigDataType: (ptr (fn T_1226 (T_1205)))
T_1226: (in fn080484A2(edi_47) : void)
  Class: Eq_724
  DataType: void
  OrigDataType: void
T_1227: (in 0x00000001 : word32)
  Class: Eq_1227
  DataType: word32
  OrigDataType: word32
T_1228: (in esi_48 + 0x00000001 : word32)
  Class: Eq_1206
  DataType: word32
  OrigDataType: word32
T_1229: (in 0x0000000C : word32)
  Class: Eq_1229
  DataType: word32
  OrigDataType: word32
T_1230: (in edi_47 + 0x0000000C : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1231: (in 0x0000000C : word32)
  Class: Eq_1231
  DataType: word32
  OrigDataType: word32
T_1232: (in ebx_49 + 0x0000000C : word32)
  Class: Eq_1208
  DataType: (ptr Eq_1208)
  OrigDataType: word32
T_1233: (in 0x00000100 : word32)
  Class: Eq_1206
  DataType: word32
  OrigDataType: word32
T_1234: (in esi_48 != 0x00000100 : bool)
  Class: Eq_1234
  DataType: bool
  OrigDataType: bool
T_1235: (in 0x00000200 : word32)
  Class: Eq_1235
  DataType: word32
  OrigDataType: word32
T_1236: (in ebp_43 + 0x00000200 : word32)
  Class: Eq_1199
  DataType: int32
  OrigDataType: word32
T_1237: (in 0x00001800 : word32)
  Class: Eq_1237
  DataType: word32
  OrigDataType: word32
T_1238: (in dwLoc400C4_31 + 0x00001800 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1239: (in 0x00000001 : word32)
  Class: Eq_1239
  DataType: word32
  OrigDataType: word32
T_1240: (in dwLoc400C0_32 + 0x00000001 : word32)
  Class: Eq_1203
  DataType: word32
  OrigDataType: word32
T_1241: (in 0x00030000 : word32)
  Class: Eq_1199
  DataType: int32
  OrigDataType: word32
T_1242: (in ebp_43 == 0x00030000 : bool)
  Class: Eq_1242
  DataType: bool
  OrigDataType: bool
T_1243: (in dwLoc400D4_103 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: ui32
T_1244: (in 0x00000000 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_1245: (in ebp_136 : word32)
  Class: Eq_1245
  DataType: word32
  OrigDataType: word32
T_1246: (in 0xFFFFFFF6 : word32)
  Class: Eq_1245
  DataType: word32
  OrigDataType: word32
T_1247: (in dwLoc400C8_138 : word32)
  Class: Eq_1247
  DataType: word32
  OrigDataType: word32
T_1248: (in 0x08049A40 : word32)
  Class: Eq_1247
  DataType: word32
  OrigDataType: word32
T_1249: (in dwLoc400CC_102 : word32)
  Class: Eq_1249
  DataType: (ptr Eq_1249)
  OrigDataType: (ptr (struct 0001 (0 T_1252 t0000)))
T_1250: (in 0x00000000 : word32)
  Class: Eq_1250
  DataType: word32
  OrigDataType: word32
T_1251: (in dwLoc400CC_102 + 0x00000000 : word32)
  Class: Eq_1251
  DataType: word32
  OrigDataType: word32
T_1252: (in Mem64[dwLoc400CC_102 + 0x00000000:byte] : byte)
  Class: Eq_1252
  DataType: byte
  OrigDataType: byte
T_1253: (in 0x01 : byte)
  Class: Eq_1252
  DataType: byte
  OrigDataType: byte
T_1254: (in Mem64[dwLoc400CC_102 + 0x00000000:byte] != 0x01 : bool)
  Class: Eq_1254
  DataType: bool
  OrigDataType: bool
T_1255: (in edi_114 : word32)
  Class: Eq_1255
  DataType: word32
  OrigDataType: word32
T_1256: (in 0x00000004 : word32)
  Class: Eq_1256
  DataType: word32
  OrigDataType: word32
T_1257: (in edi_114 + 0x00000004 : word32)
  Class: Eq_1255
  DataType: word32
  OrigDataType: word32
T_1258: (in 0x00000001 : word32)
  Class: Eq_1258
  DataType: word32
  OrigDataType: word32
T_1259: (in dwLoc400CC_102 + 0x00000001 : word32)
  Class: Eq_1249
  DataType: (ptr Eq_1249)
  OrigDataType: word32
T_1260: (in 0x0000002F : word32)
  Class: Eq_1255
  DataType: word32
  OrigDataType: word32
T_1261: (in edi_114 != 0x0000002F : bool)
  Class: Eq_1261
  DataType: bool
  OrigDataType: bool
T_1262: (in fn08048775 : ptr32)
  Class: Eq_347
  DataType: (ptr Eq_347)
  OrigDataType: (ptr (fn T_1267 (T_1263, T_1264, T_1243, T_1265, T_1266)))
T_1263: (in 0x01 : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_1264: (in (real64) edi_114 : real64)
  Class: Eq_349
  DataType: Eq_349
  OrigDataType: real64
T_1265: (in 0xC1C80000 : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: word32
T_1266: (in 0x40000000 : word32)
  Class: Eq_352
  DataType: Eq_352
  OrigDataType: word32
T_1267: (in fn08048775(0x01, (real64) edi_114, dwLoc400D4_103, 0xC1C80000, 0x40000000) : void)
  Class: Eq_359
  DataType: void
  OrigDataType: void
T_1268: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1269 ()))
T_1269: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1270: (in 0x00 : byte)
  Class: Eq_1270
  DataType: byte
  OrigDataType: byte
T_1271: (in 0x0824A59D : word32)
  Class: Eq_1271
  DataType: (ptr Eq_1271)
  OrigDataType: (ptr (struct (0 T_1274 t0000)))
T_1272: (in 0x00040080 : word32)
  Class: Eq_1272
  DataType: ui32
  OrigDataType: ui32
T_1273: (in dwLoc400D4_103 * 0x00040080 : word32)
  Class: Eq_1273
  DataType: ui32
  OrigDataType: ui32
T_1274: (in 0x0824A59D[dwLoc400D4_103 * 0x00040080] : byte)
  Class: Eq_1270
  DataType: byte
  OrigDataType: byte
T_1275: (in 0x00000001 : word32)
  Class: Eq_1275
  DataType: word32
  OrigDataType: word32
T_1276: (in dwLoc400D4_103 + 0x00000001 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_1277: (in 0x00000004 : word32)
  Class: Eq_1277
  DataType: word32
  OrigDataType: word32
T_1278: (in ebp_136 + 0x00000004 : word32)
  Class: Eq_1245
  DataType: word32
  OrigDataType: word32
T_1279: (in 0x00000017 : word32)
  Class: Eq_1279
  DataType: word32
  OrigDataType: word32
T_1280: (in dwLoc400C8_138 + 0x00000017 : word32)
  Class: Eq_1247
  DataType: word32
  OrigDataType: word32
T_1281: (in 0x0000000E : word32)
  Class: Eq_1245
  DataType: word32
  OrigDataType: word32
T_1282: (in ebp_136 != 0x0000000E : bool)
  Class: Eq_1282
  DataType: bool
  OrigDataType: bool
T_1283: (in 0xFFFFFFD3 : word32)
  Class: Eq_1255
  DataType: word32
  OrigDataType: word32
T_1284: (in 0x00000000 : word32)
  Class: Eq_1284
  DataType: word32
  OrigDataType: word32
T_1285: (in dwLoc400C8_138 + 0x00000000 : word32)
  Class: Eq_1249
  DataType: (ptr Eq_1249)
  OrigDataType: word32
T_1286: (in fn080486BA : ptr32)
  Class: Eq_367
  DataType: (ptr Eq_367)
  OrigDataType: (ptr (fn T_1294 (T_1287, T_1288, T_1289, T_1290, T_1291, T_1292, T_1293)))
T_1287: (in 0x00 : byte)
  Class: Eq_333
  DataType: byte
  OrigDataType: byte
T_1288: (in 0x00000000 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_1289: (in 0x00000000 : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_1290: (in 0xC1200000 : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_1291: (in 0x00000000 : word32)
  Class: Eq_372
  DataType: real32
  OrigDataType: word32
T_1292: (in 0x00000000 : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_1293: (in 0xBF800000 : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_1294: (in fn080486BA(0x00, 0x00000000, 0x00000000, 0xC1200000, 0x00000000, 0x00000000, 0xBF800000) : void)
  Class: Eq_386
  DataType: void
  OrigDataType: void
T_1295: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1296 ()))
T_1296: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1297: (in fn08048775 : ptr32)
  Class: Eq_347
  DataType: (ptr Eq_347)
  OrigDataType: (ptr (fn T_1303 (T_1298, T_1299, T_1300, T_1301, T_1302)))
T_1298: (in 0x00 : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_1299: (in 0x00000000 : word32)
  Class: Eq_349
  DataType: Eq_349
  OrigDataType: word32
T_1300: (in 0x41F00000 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_1301: (in 0xC20C0000 : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: word32
T_1302: (in 0x41700000 : word32)
  Class: Eq_352
  DataType: Eq_352
  OrigDataType: word32
T_1303: (in fn08048775(0x00, 0x00000000, 0x41F00000, 0xC20C0000, 0x41700000) : void)
  Class: Eq_359
  DataType: void
  OrigDataType: void
T_1304: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1305 ()))
T_1305: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1306: (in fn0804881D : ptr32)
  Class: Eq_413
  DataType: (ptr Eq_413)
  OrigDataType: (ptr (fn T_1315 (T_1307, T_1308, T_1309, T_1310, T_1311, T_1312, T_1313, T_1314)))
T_1307: (in 0x0000000F : word32)
  Class: Eq_357
  DataType: int32
  OrigDataType: word32
T_1308: (in 0x00000000 : word32)
  Class: Eq_390
  DataType: word32
  OrigDataType: word32
T_1309: (in 0x00000001 : word32)
  Class: Eq_364
  DataType: int32
  OrigDataType: word32
T_1310: (in dwLoc40100 : word32)
  Class: Eq_415
  DataType: word32
  OrigDataType: word32
T_1311: (in 0x00000000 : word32)
  Class: Eq_349
  DataType: Eq_349
  OrigDataType: word32
T_1312: (in 0xC2C80000 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_1313: (in 0xC1F00000 : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: word32
T_1314: (in 0x00000000 : word32)
  Class: Eq_362
  DataType: int32
  OrigDataType: word32
T_1315: (in fn0804881D(0x0000000F, 0x00000000, 0x00000001, dwLoc40100, 0x00000000, 0xC2C80000, 0xC1F00000, 0x00000000) : void)
  Class: Eq_430
  DataType: void
  OrigDataType: void
T_1316: (in fn080486BA : ptr32)
  Class: Eq_367
  DataType: (ptr Eq_367)
  OrigDataType: (ptr (fn T_1324 (T_1317, T_1318, T_1319, T_1320, T_1321, T_1322, T_1323)))
T_1317: (in 0x00 : byte)
  Class: Eq_333
  DataType: byte
  OrigDataType: byte
T_1318: (in 0x00000000 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_1319: (in 0x41F00000 : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_1320: (in 0x00000000 : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_1321: (in 0x00000000 : word32)
  Class: Eq_372
  DataType: real32
  OrigDataType: word32
T_1322: (in 0xBF800000 : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_1323: (in 0x00000000 : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_1324: (in fn080486BA(0x00, 0x00000000, 0x41F00000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000) : void)
  Class: Eq_386
  DataType: void
  OrigDataType: void
T_1325: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1326 ()))
T_1326: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1327: (in fn080486BA : ptr32)
  Class: Eq_367
  DataType: (ptr Eq_367)
  OrigDataType: (ptr (fn T_1335 (T_1328, T_1329, T_1330, T_1331, T_1332, T_1333, T_1334)))
T_1328: (in 0x00 : byte)
  Class: Eq_333
  DataType: byte
  OrigDataType: byte
T_1329: (in 0x00000000 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_1330: (in 0xC1A00000 : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_1331: (in 0x00000000 : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_1332: (in 0x00000000 : word32)
  Class: Eq_372
  DataType: real32
  OrigDataType: word32
T_1333: (in 0x3F800000 : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_1334: (in 0x00000000 : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_1335: (in fn080486BA(0x00, 0x00000000, 0xC1A00000, 0x00000000, 0x00000000, 0x3F800000, 0x00000000) : void)
  Class: Eq_386
  DataType: void
  OrigDataType: void
T_1336: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1337 ()))
T_1337: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1338: (in fn080486BA : ptr32)
  Class: Eq_367
  DataType: (ptr Eq_367)
  OrigDataType: (ptr (fn T_1346 (T_1339, T_1340, T_1341, T_1342, T_1343, T_1344, T_1345)))
T_1339: (in 0x00 : byte)
  Class: Eq_333
  DataType: byte
  OrigDataType: byte
T_1340: (in 0xC2480000 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_1341: (in 0x00000000 : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_1342: (in 0x00000000 : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_1343: (in 0x3F800000 : word32)
  Class: Eq_372
  DataType: real32
  OrigDataType: word32
T_1344: (in 0x00000000 : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_1345: (in 0x00000000 : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_1346: (in fn080486BA(0x00, 0xC2480000, 0x00000000, 0x00000000, 0x3F800000, 0x00000000, 0x00000000) : void)
  Class: Eq_386
  DataType: void
  OrigDataType: void
T_1347: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1348 ()))
T_1348: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1349: (in fn080486BA : ptr32)
  Class: Eq_367
  DataType: (ptr Eq_367)
  OrigDataType: (ptr (fn T_1357 (T_1350, T_1351, T_1352, T_1353, T_1354, T_1355, T_1356)))
T_1350: (in 0x00 : byte)
  Class: Eq_333
  DataType: byte
  OrigDataType: byte
T_1351: (in 0x42480000 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_1352: (in 0x00000000 : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_1353: (in 0x00000000 : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_1354: (in 0xBF800000 : word32)
  Class: Eq_372
  DataType: real32
  OrigDataType: word32
T_1355: (in 0x00000000 : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_1356: (in 0x00000000 : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_1357: (in fn080486BA(0x00, 0x42480000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0x00000000) : void)
  Class: Eq_386
  DataType: void
  OrigDataType: void
T_1358: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1359 ()))
T_1359: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1360: (in fn080486BA : ptr32)
  Class: Eq_367
  DataType: (ptr Eq_367)
  OrigDataType: (ptr (fn T_1368 (T_1361, T_1362, T_1363, T_1364, T_1365, T_1366, T_1367)))
T_1361: (in 0x00 : byte)
  Class: Eq_333
  DataType: byte
  OrigDataType: byte
T_1362: (in 0x00000000 : word32)
  Class: Eq_369
  DataType: word32
  OrigDataType: word32
T_1363: (in 0x00000000 : word32)
  Class: Eq_370
  DataType: word32
  OrigDataType: word32
T_1364: (in 0x42200000 : word32)
  Class: Eq_371
  DataType: word32
  OrigDataType: word32
T_1365: (in 0x00000000 : word32)
  Class: Eq_372
  DataType: real32
  OrigDataType: word32
T_1366: (in 0x00000000 : word32)
  Class: Eq_373
  DataType: word32
  OrigDataType: word32
T_1367: (in 0xBF800000 : word32)
  Class: Eq_374
  DataType: word32
  OrigDataType: word32
T_1368: (in fn080486BA(0x00, 0x00000000, 0x00000000, 0x42200000, 0x00000000, 0x00000000, 0xBF800000) : void)
  Class: Eq_386
  DataType: void
  OrigDataType: void
T_1369: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1370 ()))
T_1370: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1371: (in fn08048775 : ptr32)
  Class: Eq_347
  DataType: (ptr Eq_347)
  OrigDataType: (ptr (fn T_1377 (T_1372, T_1373, T_1374, T_1375, T_1376)))
T_1372: (in 0x04 : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_1373: (in 0x00000000 : word32)
  Class: Eq_349
  DataType: Eq_349
  OrigDataType: word32
T_1374: (in 0x41800000 : word32)
  Class: Eq_350
  DataType: Eq_350
  OrigDataType: word32
T_1375: (in 0xC1A00000 : word32)
  Class: Eq_351
  DataType: Eq_351
  OrigDataType: word32
T_1376: (in 0x41700000 : word32)
  Class: Eq_352
  DataType: Eq_352
  OrigDataType: word32
T_1377: (in fn08048775(0x04, 0x00000000, 0x41800000, 0xC1A00000, 0x41700000) : void)
  Class: Eq_359
  DataType: void
  OrigDataType: void
T_1378: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1379 ()))
T_1379: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1380: (in fn08048613 : ptr32)
  Class: Eq_1380
  DataType: (ptr Eq_1380)
  OrigDataType: (ptr (fn T_1397 (T_1389, T_1390, T_1391, T_1392, T_1393, T_1394, T_1395, T_1396)))
T_1381: (in signature of fn08048613 : void)
  Class: Eq_1380
  DataType: (ptr Eq_1380)
  OrigDataType: 
T_1382: (in rArg04 : real32)
  Class: Eq_1382
  DataType: real32
  OrigDataType: real32
T_1383: (in dwArg08 : word32)
  Class: Eq_1383
  DataType: word32
  OrigDataType: word32
T_1384: (in dwArg0C : word32)
  Class: Eq_1384
  DataType: word32
  OrigDataType: word32
T_1385: (in dwArg10 : word32)
  Class: Eq_1385
  DataType: word32
  OrigDataType: word32
T_1386: (in dwArg14 : word32)
  Class: Eq_1386
  DataType: word32
  OrigDataType: word32
T_1387: (in dwArg18 : word32)
  Class: Eq_1387
  DataType: word32
  OrigDataType: word32
T_1388: (in dwArg1C : word32)
  Class: Eq_1388
  DataType: word32
  OrigDataType: word32
T_1389: (in 0x00 : byte)
  Class: Eq_315
  DataType: byte
  OrigDataType: byte
T_1390: (in 0xC1F00000 : word32)
  Class: Eq_1382
  DataType: real32
  OrigDataType: word32
T_1391: (in 0x41F00000 : word32)
  Class: Eq_1383
  DataType: word32
  OrigDataType: word32
T_1392: (in 0xC1A00000 : word32)
  Class: Eq_1384
  DataType: word32
  OrigDataType: word32
T_1393: (in 0x41200000 : word32)
  Class: Eq_1385
  DataType: word32
  OrigDataType: word32
T_1394: (in 0x00000000 : word32)
  Class: Eq_1386
  DataType: word32
  OrigDataType: word32
T_1395: (in 0xBF800000 : word32)
  Class: Eq_1387
  DataType: word32
  OrigDataType: word32
T_1396: (in 0x00000000 : word32)
  Class: Eq_1388
  DataType: word32
  OrigDataType: word32
T_1397: (in fn08048613(0x00, 0xC1F00000, 0x41F00000, 0xC1A00000, 0x41200000, 0x00000000, 0xBF800000, 0x00000000) : word32)
  Class: Eq_1397
  DataType: word32
  OrigDataType: word32
T_1398: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1399 ()))
T_1399: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1400: (in eax_414 : word32)
  Class: Eq_1397
  DataType: word32
  OrigDataType: word32
T_1401: (in fn08048613 : ptr32)
  Class: Eq_1380
  DataType: (ptr Eq_1380)
  OrigDataType: (ptr (fn T_1410 (T_1402, T_1403, T_1404, T_1405, T_1406, T_1407, T_1408, T_1409)))
T_1402: (in 0x00 : byte)
  Class: Eq_315
  DataType: byte
  OrigDataType: byte
T_1403: (in 0x41F00000 : word32)
  Class: Eq_1382
  DataType: real32
  OrigDataType: word32
T_1404: (in 0x41F00000 : word32)
  Class: Eq_1383
  DataType: word32
  OrigDataType: word32
T_1405: (in 0xC1A00000 : word32)
  Class: Eq_1384
  DataType: word32
  OrigDataType: word32
T_1406: (in 0x41200000 : word32)
  Class: Eq_1385
  DataType: word32
  OrigDataType: word32
T_1407: (in 0x00000000 : word32)
  Class: Eq_1386
  DataType: word32
  OrigDataType: word32
T_1408: (in 0xBF800000 : word32)
  Class: Eq_1387
  DataType: word32
  OrigDataType: word32
T_1409: (in 0x00000000 : word32)
  Class: Eq_1388
  DataType: word32
  OrigDataType: word32
T_1410: (in fn08048613(0x00, 0x41F00000, 0x41F00000, 0xC1A00000, 0x41200000, 0x00000000, 0xBF800000, 0x00000000) : word32)
  Class: Eq_1397
  DataType: word32
  OrigDataType: word32
T_1411: (in fn080483E8 : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_1412 ()))
T_1412: (in fn080483E8() : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_1413: (in 0xC2F00000 : word32)
  Class: Eq_1413
  DataType: Eq_1413
  OrigDataType: word32
T_1414: (in 0x0824A508 : ptr32)
  Class: Eq_1414
  DataType: (ptr Eq_1414)
  OrigDataType: (ptr (struct (0 T_1415 t0000)))
T_1415: (in Mem425[0x0824A508:word32] : word32)
  Class: Eq_1413
  DataType: Eq_1413
  OrigDataType: word32
T_1416: (in fn080483B8 : ptr32)
  Class: Eq_1416
  DataType: (ptr Eq_1416)
  OrigDataType: (ptr (fn T_1418 ()))
T_1417: (in signature of fn080483B8 : void)
  Class: Eq_1416
  DataType: (ptr Eq_1416)
  OrigDataType: 
T_1418: (in fn080483B8() : void)
  Class: Eq_1418
  DataType: void
  OrigDataType: void
T_1419: (in ebx_402 : word32)
  Class: Eq_1419
  DataType: word32
  OrigDataType: word32
T_1420: (in 0x00000000 : word32)
  Class: Eq_1419
  DataType: word32
  OrigDataType: word32
T_1421: (in esi_420 : word32)
  Class: Eq_1421
  DataType: int32
  OrigDataType: int32
T_1422: (in fp : ptr32)
  Class: Eq_1422
  DataType: ptr32
  OrigDataType: ptr32
T_1423: (in 0x000400BC : word32)
  Class: Eq_1423
  DataType: word32
  OrigDataType: word32
T_1424: (in fp - 0x000400BC : word32)
  Class: Eq_1424
  DataType: word32
  OrigDataType: word32
T_1425: (in fp - 0x000400BC : word32)
  Class: Eq_1425
  DataType: word32
  OrigDataType: word32
T_1426: (in fp - 0x000400BC ^ fp - 0x000400BC : word32)
  Class: Eq_1421
  DataType: int32
  OrigDataType: word32
T_1427: (in eax_442 : word32)
  Class: Eq_1397
  DataType: word32
  OrigDataType: word32
T_1428: (in fn080483B8 : ptr32)
  Class: Eq_1416
  DataType: (ptr Eq_1416)
  OrigDataType: (ptr (fn T_1429 ()))
T_1429: (in fn080483B8() : void)
  Class: Eq_1418
  DataType: void
  OrigDataType: void
T_1430: (in eax_446 : word32)
  Class: Eq_1430
  DataType: up32
  OrigDataType: up32
T_1431: (in eax_442 - eax_414 : word32)
  Class: Eq_1430
  DataType: up32
  OrigDataType: word32
T_1432: (in 0x000036AF : word32)
  Class: Eq_1430
  DataType: up32
  OrigDataType: up32
T_1433: (in eax_446 >u 0x000036AF : bool)
  Class: Eq_1433
  DataType: bool
  OrigDataType: bool
T_1434: (in fn080483B8 : ptr32)
  Class: Eq_1416
  DataType: (ptr Eq_1416)
  OrigDataType: (ptr (fn T_1435 ()))
T_1435: (in fn080483B8() : void)
  Class: Eq_1418
  DataType: void
  OrigDataType: void
T_1436: (in ebx_451 : word32)
  Class: Eq_1436
  DataType: ui32
  OrigDataType: word32
T_1437: (in 0x00000002 : word32)
  Class: Eq_1437
  DataType: ui32
  OrigDataType: ui32
T_1438: (in esi_420 * 0x00000002 : word32)
  Class: Eq_1436
  DataType: ui32
  OrigDataType: ui32
T_1439: (in eax_463 : word32)
  Class: Eq_1430
  DataType: up32
  OrigDataType: up32
T_1440: (in bLoc30 : byte)
  Class: Eq_1440
  DataType: byte
  OrigDataType: byte
T_1441: (in 0x02 : byte)
  Class: Eq_1440
  DataType: byte
  OrigDataType: byte
T_1442: (in bLoc30 != 0x02 : bool)
  Class: Eq_1442
  DataType: bool
  OrigDataType: bool
T_1443: (in rLoc1_585 : real64)
  Class: Eq_1443
  DataType: Eq_1443
  OrigDataType: real64
T_1444: (in (real64) ebx_402 : real64)
  Class: Eq_1444
  DataType: Eq_1444
  OrigDataType: (union (real32 u0) (real64 u1))
T_1445: (in 0x08049A34 : ptr32)
  Class: Eq_1445
  DataType: (ptr Eq_1445)
  OrigDataType: (ptr (struct (0 T_1446 t0000)))
T_1446: (in Mem425[0x08049A34:real32] : real32)
  Class: Eq_1446
  DataType: real32
  OrigDataType: real32
T_1447: (in (real64) ebx_402 * Mem425[0x08049A34:real32] : word32)
  Class: Eq_1443
  DataType: Eq_1443
  OrigDataType: real32
T_1448: (in rLoc1_587 : real64)
  Class: Eq_1448
  DataType: real64
  OrigDataType: real64
T_1449: (in cos : ptr32)
  Class: Eq_1449
  DataType: (ptr Eq_1449)
  OrigDataType: (ptr (fn T_1450 (T_1443)))
T_1450: (in cos(rLoc1_585) : real64)
  Class: Eq_1448
  DataType: real64
  OrigDataType: real64
T_1451: (in rLoc2_588 : real64)
  Class: Eq_1451
  DataType: Eq_1451
  OrigDataType: real64
T_1452: (in sin : ptr32)
  Class: Eq_1452
  DataType: (ptr Eq_1452)
  OrigDataType: (ptr (fn T_1453 (T_1443)))
T_1453: (in sin(rLoc1_585) : real64)
  Class: Eq_1451
  DataType: Eq_1451
  OrigDataType: real64
T_1454: (in rLoc3_590 : real64)
  Class: Eq_1454
  DataType: real64
  OrigDataType: real64
T_1455: (in 0x08049A30 : ptr32)
  Class: Eq_1455
  DataType: (ptr Eq_1455)
  OrigDataType: (ptr (struct (0 T_1456 t0000)))
T_1456: (in Mem425[0x08049A30:real32] : real32)
  Class: Eq_1456
  DataType: Eq_1456
  OrigDataType: (union (real32 u0) (real64 u1))
T_1457: (in Mem425[0x08049A30:real32] * rLoc2_588 : real64)
  Class: Eq_1454
  DataType: real64
  OrigDataType: real64
T_1458: (in 0x0824A500 : ptr32)
  Class: Eq_1458
  DataType: (ptr Eq_1458)
  OrigDataType: (ptr (struct (0 T_1459 t0000)))
T_1459: (in Mem594[0x0824A500:real32] : real32)
  Class: Eq_1451
  DataType: Eq_1451
  OrigDataType: real32
T_1460: (in rLoc1_587 * rLoc3_590 : real64)
  Class: Eq_1460
  DataType: Eq_1460
  OrigDataType: real64
T_1461: (in 0x0824A504 : ptr32)
  Class: Eq_1461
  DataType: (ptr Eq_1461)
  OrigDataType: (ptr (struct (0 T_1462 t0000)))
T_1462: (in Mem596[0x0824A504:real32] : real32)
  Class: Eq_1460
  DataType: Eq_1460
  OrigDataType: real32
T_1463: (in 0x00000031 : word32)
  Class: Eq_1421
  DataType: int32
  OrigDataType: int32
T_1464: (in esi_420 > 0x00000031 : bool)
  Class: Eq_1464
  DataType: bool
  OrigDataType: bool
T_1465: (in fn080483B8 : ptr32)
  Class: Eq_1416
  DataType: (ptr Eq_1416)
  OrigDataType: (ptr (fn T_1466 ()))
T_1466: (in fn080483B8() : void)
  Class: Eq_1418
  DataType: void
  OrigDataType: void
T_1467: (in eax_467 : word32)
  Class: Eq_1467
  DataType: up32
  OrigDataType: up32
T_1468: (in eax_463 - eax_446 : word32)
  Class: Eq_1467
  DataType: up32
  OrigDataType: word32
T_1469: (in 0x000036AF : word32)
  Class: Eq_1467
  DataType: up32
  OrigDataType: up32
T_1470: (in eax_467 >u 0x000036AF : bool)
  Class: Eq_1470
  DataType: bool
  OrigDataType: bool
T_1471: (in fn0804938F : ptr32)
  Class: Eq_1471
  DataType: (ptr Eq_1471)
  OrigDataType: (ptr (fn T_1475 (T_1473, T_1188, T_1474)))
T_1472: (in signature of fn0804938F : void)
  Class: Eq_1471
  DataType: (ptr Eq_1471)
  OrigDataType: 
T_1473: (in 0x0940C8A0 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1474: (in 0x00000009 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_1475: (in fn0804938F(0x0940C8A0, eax_28, 0x00000009) : void)
  Class: Eq_1475
  DataType: void
  OrigDataType: void
T_1476: (in fn080483F8 : ptr32)
  Class: Eq_1476
  DataType: (ptr Eq_1476)
  OrigDataType: (ptr (fn T_1478 ()))
T_1477: (in signature of fn080483F8 : void)
  Class: Eq_1476
  DataType: (ptr Eq_1476)
  OrigDataType: 
T_1478: (in fn080483F8() : void)
  Class: Eq_1478
  DataType: void
  OrigDataType: void
T_1479: (in fn080483C8 : ptr32)
  Class: Eq_1479
  DataType: (ptr Eq_1479)
  OrigDataType: (ptr (fn T_1481 ()))
T_1480: (in signature of fn080483C8 : void)
  Class: Eq_1479
  DataType: (ptr Eq_1479)
  OrigDataType: 
T_1481: (in fn080483C8() : void)
  Class: Eq_1481
  DataType: void
  OrigDataType: void
T_1482: (in 0x00000001 : word32)
  Class: Eq_1482
  DataType: word32
  OrigDataType: word32
T_1483: (in esi_420 + 0x00000001 : word32)
  Class: Eq_1421
  DataType: int32
  OrigDataType: word32
T_1484: (in 0x00000004 : word32)
  Class: Eq_1484
  DataType: word32
  OrigDataType: word32
T_1485: (in ebx_402 + 0x00000004 : word32)
  Class: Eq_1419
  DataType: word32
  OrigDataType: word32
T_1486: (in 0x00000030 : word32)
  Class: Eq_1486
  DataType: word32
  OrigDataType: word32
T_1487: (in fp - 0x00000030 : word32)
  Class: Eq_1397
  DataType: word32
  OrigDataType: word32
T_1488: (in eax_620 : word32)
  Class: Eq_1488
  DataType: (ptr Eq_1488)
  OrigDataType: (ptr (struct 40080 (940C8A4 T_1495 t940C8A4)))
T_1489: (in 0x00000000 : word32)
  Class: Eq_1488
  DataType: (ptr Eq_1488)
  OrigDataType: word32
T_1490: (in rLoc1_623 : real64)
  Class: Eq_1490
  DataType: Eq_1490
  OrigDataType: real64
T_1491: (in 0x08049A2C : ptr32)
  Class: Eq_1491
  DataType: (ptr Eq_1491)
  OrigDataType: (ptr (struct (0 T_1492 t0000)))
T_1492: (in Mem596[0x08049A2C:real32] : real32)
  Class: Eq_1490
  DataType: Eq_1490
  OrigDataType: real32
T_1493: (in 0x0940C8A4 : word32)
  Class: Eq_1493
  DataType: word32
  OrigDataType: word32
T_1494: (in eax_620 + 0x0940C8A4 : word32)
  Class: Eq_1494
  DataType: word32
  OrigDataType: word32
T_1495: (in Mem596[eax_620 + 0x0940C8A4:real32] : real32)
  Class: Eq_1495
  DataType: Eq_1495
  OrigDataType: (union (real32 u0) (real64 u1))
T_1496: (in Mem596[eax_620 + 0x0940C8A4:real32] + rLoc1_623 : real64)
  Class: Eq_1495
  DataType: Eq_1495
  OrigDataType: real64
T_1497: (in 0x0940C8A4 : word32)
  Class: Eq_1497
  DataType: word32
  OrigDataType: word32
T_1498: (in eax_620 + 0x0940C8A4 : word32)
  Class: Eq_1498
  DataType: word32
  OrigDataType: word32
T_1499: (in Mem627[eax_620 + 0x0940C8A4:real32] : real32)
  Class: Eq_1495
  DataType: Eq_1495
  OrigDataType: real32
T_1500: (in 0x00040080 : word32)
  Class: Eq_1500
  DataType: word32
  OrigDataType: word32
T_1501: (in eax_620 + 0x00040080 : word32)
  Class: Eq_1488
  DataType: (ptr Eq_1488)
  OrigDataType: word32
T_1502: (in 0x001C0380 : word32)
  Class: Eq_1488
  DataType: (ptr Eq_1488)
  OrigDataType: word32
T_1503: (in eax_620 != 0x001C0380 : bool)
  Class: Eq_1503
  DataType: bool
  OrigDataType: bool
T_1504: (in fn080483B8 : ptr32)
  Class: Eq_1416
  DataType: (ptr Eq_1416)
  OrigDataType: (ptr (fn T_1505 ()))
T_1505: (in fn080483B8() : void)
  Class: Eq_1418
  DataType: void
  OrigDataType: void
T_1506: (in 0xC2F00000 : word32)
  Class: Eq_1413
  DataType: Eq_1413
  OrigDataType: word32
T_1507: (in 0x0824A508 : ptr32)
  Class: Eq_1507
  DataType: (ptr Eq_1507)
  OrigDataType: (ptr (struct (0 T_1508 t0000)))
T_1508: (in Mem474[0x0824A508:word32] : word32)
  Class: Eq_1413
  DataType: Eq_1413
  OrigDataType: word32
T_1509: (in ebx_472 : word32)
  Class: Eq_1509
  DataType: ui32
  OrigDataType: word32
T_1510: (in 0x00000004 : word32)
  Class: Eq_1510
  DataType: ui32
  OrigDataType: ui32
T_1511: (in esi_420 * 0x00000004 : word32)
  Class: Eq_1509
  DataType: ui32
  OrigDataType: ui32
T_1512: (in eax_485 : word32)
  Class: Eq_1467
  DataType: up32
  OrigDataType: up32
T_1513: (in 0x02 : byte)
  Class: Eq_1440
  DataType: byte
  OrigDataType: byte
T_1514: (in bLoc30 != 0x02 : bool)
  Class: Eq_1514
  DataType: bool
  OrigDataType: bool
T_1515: (in rLoc1_548 : real64)
  Class: Eq_1515
  DataType: Eq_1515
  OrigDataType: real64
T_1516: (in (real64) ebx_451 : real64)
  Class: Eq_1516
  DataType: Eq_1516
  OrigDataType: (union (real32 u0) (real64 u1))
T_1517: (in 0x08049A34 : ptr32)
  Class: Eq_1517
  DataType: (ptr Eq_1517)
  OrigDataType: (ptr (struct (0 T_1518 t0000)))
T_1518: (in Mem425[0x08049A34:real32] : real32)
  Class: Eq_1446
  DataType: real32
  OrigDataType: real32
T_1519: (in (real64) ebx_451 * Mem425[0x08049A34:real32] : word32)
  Class: Eq_1515
  DataType: Eq_1515
  OrigDataType: real32
T_1520: (in 0xC1200000 : word32)
  Class: Eq_1460
  DataType: Eq_1460
  OrigDataType: word32
T_1521: (in 0x0824A504 : ptr32)
  Class: Eq_1521
  DataType: (ptr Eq_1521)
  OrigDataType: (ptr (struct (0 T_1522 t0000)))
T_1522: (in Mem554[0x0824A504:word32] : word32)
  Class: Eq_1460
  DataType: Eq_1460
  OrigDataType: word32
T_1523: (in rLoc1_556 : real64)
  Class: Eq_1523
  DataType: real64
  OrigDataType: real64
T_1524: (in cos : ptr32)
  Class: Eq_1524
  DataType: (ptr Eq_1524)
  OrigDataType: (ptr (fn T_1525 (T_1515)))
T_1525: (in cos(rLoc1_548) : real64)
  Class: Eq_1523
  DataType: real64
  OrigDataType: real64
T_1526: (in rLoc2_557 : real64)
  Class: Eq_1451
  DataType: Eq_1451
  OrigDataType: real64
T_1527: (in sin : ptr32)
  Class: Eq_1527
  DataType: (ptr Eq_1527)
  OrigDataType: (ptr (fn T_1528 (T_1515)))
T_1528: (in sin(rLoc1_548) : real64)
  Class: Eq_1451
  DataType: Eq_1451
  OrigDataType: real64
T_1529: (in rLoc3_559 : real64)
  Class: Eq_1529
  DataType: real64
  OrigDataType: real64
T_1530: (in 0x08049A38 : ptr32)
  Class: Eq_1530
  DataType: (ptr Eq_1530)
  OrigDataType: (ptr (struct (0 T_1531 t0000)))
T_1531: (in Mem554[0x08049A38:real32] : real32)
  Class: Eq_1531
  DataType: Eq_1531
  OrigDataType: (union (real32 u0) (real64 u1))
T_1532: (in Mem554[0x08049A38:real32] * rLoc2_557 : real64)
  Class: Eq_1529
  DataType: real64
  OrigDataType: real64
T_1533: (in 0x0824A500 : ptr32)
  Class: Eq_1533
  DataType: (ptr Eq_1533)
  OrigDataType: (ptr (struct (0 T_1534 t0000)))
T_1534: (in Mem563[0x0824A500:real32] : real32)
  Class: Eq_1451
  DataType: Eq_1451
  OrigDataType: real32
T_1535: (in rLoc1_556 * rLoc3_559 : real64)
  Class: Eq_1413
  DataType: Eq_1413
  OrigDataType: real64
T_1536: (in 0x0824A508 : ptr32)
  Class: Eq_1536
  DataType: (ptr Eq_1536)
  OrigDataType: (ptr (struct (0 T_1537 t0000)))
T_1537: (in Mem565[0x0824A508:real32] : real32)
  Class: Eq_1413
  DataType: Eq_1413
  OrigDataType: real32
T_1538: (in fn0804938F : ptr32)
  Class: Eq_1471
  DataType: (ptr Eq_1471)
  OrigDataType: (ptr (fn T_1541 (T_1539, T_1188, T_1540)))
T_1539: (in 0x0804A100 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1540: (in 0x00000008 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_1541: (in fn0804938F(0x0804A100, eax_28, 0x00000008) : void)
  Class: Eq_1475
  DataType: void
  OrigDataType: void
T_1542: (in fn080483F8 : ptr32)
  Class: Eq_1476
  DataType: (ptr Eq_1476)
  OrigDataType: (ptr (fn T_1543 ()))
T_1543: (in fn080483F8() : void)
  Class: Eq_1478
  DataType: void
  OrigDataType: void
T_1544: (in fn080483C8 : ptr32)
  Class: Eq_1479
  DataType: (ptr Eq_1479)
  OrigDataType: (ptr (fn T_1545 ()))
T_1545: (in fn080483C8() : void)
  Class: Eq_1481
  DataType: void
  OrigDataType: void
T_1546: (in 0x00000001 : word32)
  Class: Eq_1546
  DataType: word32
  OrigDataType: word32
T_1547: (in esi_420 + 0x00000001 : word32)
  Class: Eq_1421
  DataType: int32
  OrigDataType: word32
T_1548: (in 0x00000002 : word32)
  Class: Eq_1548
  DataType: word32
  OrigDataType: word32
T_1549: (in ebx_451 + 0x00000002 : word32)
  Class: Eq_1436
  DataType: ui32
  OrigDataType: word32
T_1550: (in 0x00000030 : word32)
  Class: Eq_1550
  DataType: word32
  OrigDataType: word32
T_1551: (in fp - 0x00000030 : word32)
  Class: Eq_1430
  DataType: up32
  OrigDataType: word32
T_1552: (in fn080483B8 : ptr32)
  Class: Eq_1416
  DataType: (ptr Eq_1416)
  OrigDataType: (ptr (fn T_1553 ()))
T_1553: (in fn080483B8() : void)
  Class: Eq_1418
  DataType: void
  OrigDataType: void
T_1554: (in eax_485 - eax_467 : word32)
  Class: Eq_1554
  DataType: up32
  OrigDataType: up32
T_1555: (in 0x000036AF : word32)
  Class: Eq_1554
  DataType: up32
  OrigDataType: up32
T_1556: (in eax_485 - eax_467 >u 0x000036AF : bool)
  Class: Eq_1556
  DataType: bool
  OrigDataType: bool
T_1557: (in fn08048408 : ptr32)
  Class: Eq_1557
  DataType: (ptr Eq_1557)
  OrigDataType: (ptr (fn T_1559 ()))
T_1558: (in signature of fn08048408 : void)
  Class: Eq_1557
  DataType: (ptr Eq_1557)
  OrigDataType: 
T_1559: (in fn08048408() : void)
  Class: Eq_1559
  DataType: void
  OrigDataType: void
T_1560: (in __syscall : ptr32)
  Class: Eq_1560
  DataType: (ptr Eq_1560)
  OrigDataType: (ptr (fn T_1562 (T_1561)))
T_1561: (in 0x80 : byte)
  Class: Eq_1561
  DataType: byte
  OrigDataType: byte
T_1562: (in __syscall(0x80) : void)
  Class: Eq_1562
  DataType: void
  OrigDataType: void
T_1563: (in 0x02 : byte)
  Class: Eq_1440
  DataType: byte
  OrigDataType: byte
T_1564: (in bLoc30 != 0x02 : bool)
  Class: Eq_1564
  DataType: bool
  OrigDataType: bool
T_1565: (in rLoc1_513 : real64)
  Class: Eq_1565
  DataType: Eq_1565
  OrigDataType: real64
T_1566: (in (real64) ebx_472 : real64)
  Class: Eq_1566
  DataType: Eq_1566
  OrigDataType: (union (real32 u0) (real64 u1))
T_1567: (in 0x08049A34 : ptr32)
  Class: Eq_1567
  DataType: (ptr Eq_1567)
  OrigDataType: (ptr (struct (0 T_1568 t0000)))
T_1568: (in Mem474[0x08049A34:real32] : real32)
  Class: Eq_1446
  DataType: real32
  OrigDataType: real32
T_1569: (in (real64) ebx_472 * Mem474[0x08049A34:real32] : word32)
  Class: Eq_1565
  DataType: Eq_1565
  OrigDataType: real32
T_1570: (in rLoc1_519 : real64)
  Class: Eq_1570
  DataType: real64
  OrigDataType: real64
T_1571: (in cos : ptr32)
  Class: Eq_1571
  DataType: (ptr Eq_1571)
  OrigDataType: (ptr (fn T_1572 (T_1565)))
T_1572: (in cos(rLoc1_513) : real64)
  Class: Eq_1570
  DataType: real64
  OrigDataType: real64
T_1573: (in rLoc2_520 : real64)
  Class: Eq_1451
  DataType: Eq_1451
  OrigDataType: real64
T_1574: (in sin : ptr32)
  Class: Eq_1574
  DataType: (ptr Eq_1574)
  OrigDataType: (ptr (fn T_1575 (T_1565)))
T_1575: (in sin(rLoc1_513) : real64)
  Class: Eq_1451
  DataType: Eq_1451
  OrigDataType: real64
T_1576: (in rLoc3_522 : real64)
  Class: Eq_1576
  DataType: real64
  OrigDataType: real64
T_1577: (in 0x08049A30 : ptr32)
  Class: Eq_1577
  DataType: (ptr Eq_1577)
  OrigDataType: (ptr (struct (0 T_1578 t0000)))
T_1578: (in Mem474[0x08049A30:real32] : real32)
  Class: Eq_1456
  DataType: Eq_1456
  OrigDataType: (union (real32 u0) (real64 u1))
T_1579: (in Mem474[0x08049A30:real32] * rLoc2_520 : real64)
  Class: Eq_1576
  DataType: real64
  OrigDataType: real64
T_1580: (in 0x0824A500 : ptr32)
  Class: Eq_1580
  DataType: (ptr Eq_1580)
  OrigDataType: (ptr (struct (0 T_1581 t0000)))
T_1581: (in Mem526[0x0824A500:real32] : real32)
  Class: Eq_1451
  DataType: Eq_1451
  OrigDataType: real32
T_1582: (in rLoc1_519 * rLoc3_522 : real64)
  Class: Eq_1460
  DataType: Eq_1460
  OrigDataType: real64
T_1583: (in 0x0824A504 : ptr32)
  Class: Eq_1583
  DataType: (ptr Eq_1583)
  OrigDataType: (ptr (struct (0 T_1584 t0000)))
T_1584: (in Mem528[0x0824A504:real32] : real32)
  Class: Eq_1460
  DataType: Eq_1460
  OrigDataType: real32
T_1585: (in fn0804938F : ptr32)
  Class: Eq_1471
  DataType: (ptr Eq_1471)
  OrigDataType: (ptr (fn T_1588 (T_1586, T_1188, T_1587)))
T_1586: (in 0x0824A520 : word32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: word32
T_1587: (in 0x00000047 : word32)
  Class: Eq_614
  DataType: int32
  OrigDataType: word32
T_1588: (in fn0804938F(0x0824A520, eax_28, 0x00000047) : void)
  Class: Eq_1475
  DataType: void
  OrigDataType: void
T_1589: (in fn080483F8 : ptr32)
  Class: Eq_1476
  DataType: (ptr Eq_1476)
  OrigDataType: (ptr (fn T_1590 ()))
T_1590: (in fn080483F8() : void)
  Class: Eq_1478
  DataType: void
  OrigDataType: void
T_1591: (in fn080483C8 : ptr32)
  Class: Eq_1479
  DataType: (ptr Eq_1479)
  OrigDataType: (ptr (fn T_1592 ()))
T_1592: (in fn080483C8() : void)
  Class: Eq_1481
  DataType: void
  OrigDataType: void
T_1593: (in 0x00000004 : word32)
  Class: Eq_1593
  DataType: word32
  OrigDataType: word32
T_1594: (in ebx_472 + 0x00000004 : word32)
  Class: Eq_1509
  DataType: ui32
  OrigDataType: word32
T_1595: (in 0x00000030 : word32)
  Class: Eq_1595
  DataType: word32
  OrigDataType: word32
T_1596: (in fp - 0x00000030 : word32)
  Class: Eq_1467
  DataType: up32
  OrigDataType: word32
T_1597:
  Class: Eq_1597
  DataType: Eq_1597
  OrigDataType: (struct 0004 (0 T_266 t0000))
T_1598:
  Class: Eq_1598
  DataType: Eq_1598
  OrigDataType: (struct 0004 (0 T_277 t0000))
T_1599:
  Class: Eq_1599
  DataType: Eq_1599
  OrigDataType: (struct 0004 (0 T_1144 t0000))
T_1600:
  Class: Eq_1600
  DataType: Eq_1600
  OrigDataType: (struct 0004 (0 T_1147 t0000))
T_1601:
  Class: Eq_1601
  DataType: Eq_1601
  OrigDataType: (struct 40080 (0 T_1495 t0000))
T_1602:
  Class: Eq_1601
  DataType: Eq_1601
  OrigDataType: (struct 40080 (0 T_1499 t0000))
*/
typedef  Eq_1 Eq_1 Eq_1 Eq_1 Eq_1 Eq_1 Eq_1code Eq_1code Eq_1code Eq_1code Eq_1code Eq_1code Eq_1code Eq_1code Eq_1code Eq_1code Eq_1 Eq_1 Eq_1 Eq_1 Eq_1 Eq_1 Eq_1 Eq_1 Eq_1[8]struct Globals {
	 t1C0380;	// 1C0380
	real32 r8049A00;	// 8049A00
	 t8049A08;	// 8049A08
	 t8049A0C;	// 8049A0C
	 t8049A10;	// 8049A10
	 t8049A2C;	// 8049A2C
	 t8049A30;	// 8049A30
	real32 r8049A34;	// 8049A34
	 t8049A38;	// 8049A38
	code * ptr804A0BC;	// 804A0BC
	code * ptr804A0C0;	// 804A0C0
	code * ptr804A0C4;	// 804A0C4
	code * ptr804A0C8;	// 804A0C8
	code * ptr804A0CC;	// 804A0CC
	code * ptr804A0D0;	// 804A0D0
	code * ptr804A0D4;	// 804A0D4
	code * ptr804A0D8;	// 804A0D8
	code * ptr804A0DC;	// 804A0DC
	code * ptr804A0E0;	// 804A0E0
	 t804A100;	// 804A100
	 t824A500;	// 824A500
	 t824A504;	// 824A504
	 t824A508;	// 824A508
	 t824A50C;	// 824A50C
	word32 dw824A514;	// 824A514
	 t824A520;	// 824A520
	byte b824A59D;	// 824A59D
	 t940C8A0;	// 940C8A0
	 a940C8A4[8];	// 940C8A4
	 t964CD20;	// 964CD20
} Eq_1;

typedef code * Eq_2;

typedef code * Eq_4;

typedef code * Eq_6;

typedef code * Eq_8;

typedef code * Eq_10;

typedef code * Eq_12;

typedef code * Eq_14;

typedef code * Eq_16;

typedef code * Eq_18;

typedef code * Eq_20;

typedef  Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23 Eq_23struct  {	// size: 262272 40080
	 t0000;	// 0
	 t0004;	// 4
	 t0008;	// 8
	 t000C;	// C
	 t000C;	// C
	 t0010;	// 10
	 t0014;	// 14
	 t0018;	// 18
	real32 r0018;	// 18
	real32 r001C;	// 1C
	real32 r0020;	// 20
	 t0030;	// 30
	 t003C;	// 3C
	 t0054;	// 54
	 t0054;	// 54
	 t0054;	// 54
	 t0054;	// 54
	 t0058;	// 58
	real32 r005C;	// 5C
	 t0060;	// 60
	 t0064;	// 64
	 t0068;	// 68
	 t006C;	// 6C
	byte b007C;	// 7C
	 t1800;	// 1800
	 t40080;	// 40080
} Eq_23;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_26;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_31;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_34;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_38;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_42;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_46;

typedef  Eq_56 Eq_56struct  {
	real32 r0000;	// 0
	 t0004;	// 4
	 t0008;	// 8
} Eq_56;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_59;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_63;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_65;

typedef  Eq_66 Eq_66 Eq_66struct  {
	 t0000;	// 0
	 t0004;	// 4
	 t0008;	// 8
} Eq_66;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_82;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_97;

typedef real64 (Eq_135)();

typedef  (Eq_136)( *,  *);

typedef union  {
	32 u0;
	64 u1;
	real32 u2;
	real64 u3;
} Eq_139;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_141;

typedef  (Eq_142)();

typedef struct  {
	real32 r0000;	// 0
} Eq_147;

typedef void (Eq_172)();

typedef struct  {
	int32 dw0000;	// 0
} Eq_183;

typedef  Eq_184[][]struct  {
	 a0000[];	// 0
	 a0040[];	// 40
} Eq_184;

typedef void (Eq_246)();

typedef void (Eq_301)( *,  *,  *);

typedef void (Eq_311)( *, int32);

typedef void (Eq_318)();

typedef void (Eq_347)(byte, , , , );

typedef union  {
	real64 u0;
	real32 u1;
} Eq_349;

typedef union  {
	ui32 u0;
	real32 u1;
	real64 u2;
} Eq_350;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_351;

typedef union  {
	real64 u0;
	word32 u1;
} Eq_352;

typedef void (Eq_367)(byte, word32, word32, word32, real32, word32, word32);

typedef  Eq_393struct  {
	 tFFFBFF0C;	// FFFBFF0C
} Eq_393;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_397;

typedef void (Eq_413)(int32, word32, int32, word32, , , , int32);

typedef union  {
	real32 u0;
	real64 u1;
} Eq_445;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_606;

typedef void (Eq_632)( *,  *,  *);

typedef union  {
	real32 u0;
	real64 u1;
} Eq_658;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_659;

typedef  Eq_690struct  {
	 t0000;	// 0
} Eq_690;

typedef  (Eq_707)(real64);

typedef union  {
	real32 u0;
	real64 u1;
} Eq_708;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_710;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_713;

typedef  Eq_717struct  {
	 t0000;	// 0
} Eq_717;

typedef void (Eq_720)( *);

typedef union  {
	32 u0;
	64 u1;
	real32 u2;
	real64 u3;
} Eq_731;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_750;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_758;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_763;

typedef real64 (Eq_767)(real64);

typedef real64 (Eq_805)(real64);

typedef real64 (Eq_813)();

typedef union  {
	64 u0;
	real32 u1;
	real64 u2;
} Eq_832;

typedef  Eq_833struct  {
	 t0000;	// 0
} Eq_833;

typedef byte (Eq_838)( *,  *, int32,  *, real32, real64 *);

typedef union  {
	real32 u0;
	real64 u1;
} Eq_855;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_868;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_872;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_880;

typedef struct  {
	word32 dw0000;	// 0
	word32 dw0004;	// 4
	word32 dw0008;	// 8
} Eq_898;

typedef union  {
	32 u0;
	64 u1;
	real32 u2;
	real64 u3;
} Eq_961;

typedef  (Eq_962)( *);

typedef  Eq_999struct  {
	 t0000;	// 0
} Eq_999;

typedef void (Eq_1015)();

typedef union  {
	64 u0;
	real64 u1;
} Eq_1023;

typedef uint16 (Eq_1030)();

typedef real64 (Eq_1032)(real64, );

typedef real64 (Eq_1033)(real64);

typedef void (Eq_1040)(word16);

typedef void (Eq_1046)(uint16);

typedef struct  {
	word32 dwFFFFFFA4;	// FFFFFFA4
	word32 dwFFFFFFAC;	// FFFFFFAC
	word32 dwFFFFFFB0;	// FFFFFFB0
} Eq_1078;

typedef byte (Eq_1092)( *, int32,  *, word32, word32, word32, word32, real64, real64 *);

typedef uint16 (Eq_1107)();

typedef void (Eq_1114)(word16);

typedef void (Eq_1116)(uint16);

typedef void (Eq_1118)(word16);

typedef void (Eq_1120)(uint16);

typedef void (Eq_1122)(word16);

typedef void (Eq_1124)(uint16);

typedef  Eq_1139[][]struct  {
	 a0000[];	// 0
	 a0004[];	// 4
} Eq_1139;

typedef void (Eq_1185)();

typedef  Eq_1189struct  {
	 * ptr0014;	// 14
} Eq_1189;

typedef void (Eq_1193)();

typedef struct  {
	word32 dw0000;	// 0
} Eq_1197;

typedef  Eq_1208 Eq_1208 Eq_1208struct  {	// size: 12 C
	 t0000;	// 0
	 t0004;	// 4
	word32 dw0008;	// 8
	 t000C;	// C
} Eq_1208;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1213;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1217;

typedef  Eq_1249struct  {	// size: 1 1
	byte b0000;	// 0
	 t0001;	// 1
} Eq_1249;

typedef struct  {
	byte b0000;	// 0
} Eq_1271;

typedef word32 (Eq_1380)(byte, real32, word32, word32, word32, word32, word32, word32);

typedef union  {
	real64 u0;
	real32 u1;
} Eq_1413;

typedef  Eq_1414struct  {
	 t0000;	// 0
} Eq_1414;

typedef void (Eq_1416)();

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1443;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1444;

typedef struct  {
	real32 r0000;	// 0
} Eq_1445;

typedef real64 (Eq_1449)();

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1451;

typedef  (Eq_1452)();

typedef  Eq_1455struct  {
	 t0000;	// 0
} Eq_1455;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1456;

typedef  Eq_1458struct  {
	 t0000;	// 0
} Eq_1458;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1460;

typedef  Eq_1461struct  {
	 t0000;	// 0
} Eq_1461;

typedef void (Eq_1471)( *,  *, int32);

typedef void (Eq_1476)();

typedef void (Eq_1479)();

typedef  Eq_1488 Eq_1488struct  {	// size: 262272 40080
	 t40080;	// 40080
	 t940C8A4;	// 940C8A4
} Eq_1488;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1490;

typedef  Eq_1491struct  {
	 t0000;	// 0
} Eq_1491;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1495;

typedef  Eq_1507struct  {
	 t0000;	// 0
} Eq_1507;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1515;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1516;

typedef struct  {
	real32 r0000;	// 0
} Eq_1517;

typedef  Eq_1521struct  {
	 t0000;	// 0
} Eq_1521;

typedef real64 (Eq_1524)();

typedef  (Eq_1527)();

typedef  Eq_1530struct  {
	 t0000;	// 0
} Eq_1530;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1531;

typedef  Eq_1533struct  {
	 t0000;	// 0
} Eq_1533;

typedef  Eq_1536struct  {
	 t0000;	// 0
} Eq_1536;

typedef void (Eq_1557)();

typedef void (Eq_1560)(byte);

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1565;

typedef union  {
	real32 u0;
	real64 u1;
} Eq_1566;

typedef struct  {
	real32 r0000;	// 0
} Eq_1567;

typedef real64 (Eq_1571)();

typedef  (Eq_1574)();

typedef  Eq_1577struct  {
	 t0000;	// 0
} Eq_1577;

typedef  Eq_1580struct  {
	 t0000;	// 0
} Eq_1580;

typedef  Eq_1583struct  {
	 t0000;	// 0
} Eq_1583;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_1597;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_1598;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_1599;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_1600;

typedef  Eq_1601struct  {	// size: 262272 40080
	 t0000;	// 0
} Eq_1601;

