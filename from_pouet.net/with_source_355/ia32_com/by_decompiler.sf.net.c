// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_355/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
fn0C00_0100_entry:
l0C00_0100:
	word16 bp_2
	word16 ax_3 = fn0C00_035B(out bp_2)
	selector ds_4 = fn0C00_060B(ax_3, bp_2)
	word16 ax_9 = DPB(cs, SLICE(cs, byte, 8) + 0x30, 8, 8)
	Mem13[ss:fp - 0x0002:word16] = ax_9
	word16 bx_15
	word16 ax_16 = fn0C00_0334(ax_9, out bx_15)
	Mem18[ss:fp - 0x0004:word16] = cs
	word16 bp_196 = fn0C00_0371(ax_16, 0x1000, bx_15, 0x2B26, Mem18[ss:fp - 0x0004:selector])
	bios_video_set_mode(0x13)
	fn0C00_0715(ds_4)
	fn0C00_0840()
	Mem32[ss:fp + 0xFFFA:word16] = 0xA000
	word16 bx_200 = 0x0000
	selector es_33 = Mem32[ss:fp + 0xFFFA:selector]
	selector ds_35 = Mem32[ss:fp + 0xFFFC:selector]
	word16 sp_101 = fp + 0xFFFE
	word16 si_37 = 0x0000
	word16 di_102 = 0x0000
	word16 dx_43 = 0x00C7
l0C00_0135:
	word16 cx_104 = 0x00A0
l0C00_0138:
	branch cx_104 == 0x0000 l0C00_013A
l0C00_0138_1:
	Mem70[es_33:di_102 + 0x0000:word16] = Mem32[ds_35:si_37 + 0x0000:word16]
	si_37 = si_37 + 0x0002
	di_102 = di_102 + 0x0002
	cx_104 = cx_104 - 0x0001
	goto l0C00_0138
l0C00_013A:
	si_37 = si_37 - 0x0040
	dx_43 = dx_43 - 0x0001
	branch dx_43 != 0x0000 l0C00_0135
l0C00_0141:
	word16 sp_108 = sp_101 - 0x0002
	Mem109[ss:sp_108 + 0x0000:word16] = cs
	Mem111[ss:sp_108 - 0x0002:word16] = cs
	selector es_112 = Mem111[ss:sp_108 - 0x0002:selector]
	selector ds_114 = Mem111[ss:sp_108 + 0x0000:selector]
	Mem117[ss:sp_108 + 0x0000:word16] = dx_43
	Mem119[ds_114:0x0147:word16] = 0x091F
	word16 ax_122 = (word16) Mem119[ds_114:0x091F:byte]
	word16 si_123 = 0x0920
	branch ax_122 << 0x0002 <=u Mem119[ds_114:0x0870:word16] l0C00_015F
l0C00_015C:
	goto l0C00_01D2
l0C00_015F:
	Mem834[ds_114:0x0154:word16] = ax_122 << 0x0002
	Mem836[ss:sp_108 - 0x0002:word16] = 0x0149
	byte al_837 = Mem836[ds_114:0x0920:byte]
	word16 ax_838 = DPB(ax_122 << 0x0002, al_837, 0, 8)
	word16 si_840 = 0x0921
	branch al_837 >=u 0x01 l0C00_016F
l0C00_016A:
	Mem849[ds_114:0x0254:word16] = Mem836[ds_114:0x0921:word16]
	return
l0C00_016F:
	branch al_837 != 0x01 l0C00_017B
l0C00_0171:
	Mem850[ds_114:0x0269:word16] = 0x0921
l0C00_0175:
	si_840 = si_1089 + 0x0001
	word16 si_1089 = si_840
	branch Mem850[ds_114:si_1089 + 0x0000:byte] != 0x00 l0C00_0175
l0C00_017A:
	return
l0C00_017B:
	branch al_837 >=u 0x03 l0C00_0197
l0C00_017F:
	Mem875[ss:sp_108 - 0x0004:word16] = 0x0300
	word16 di_863 = 0x1260
	word16 cx_870 = 0x0300
l0C00_0188:
	branch cx_870 == 0x0000 l0C00_018A
l0C00_0188_1:
	Mem882[es_112:di_863 + 0x0000:byte] = 0x00
	di_863 = di_863 + 0x0001
	cx_870 = cx_870 - 0x0001
	goto l0C00_0188
l0C00_018A:
	Mem892[ds_114:0x08F1:byte] = Mem875[ds_114:0x08F1:byte] ^ 0x08
	Mem895[ds_114:0x08D1:word16] = 0x0040
	return
l0C00_0197:
	branch al_837 != 0x03 l0C00_019C
l0C00_0199:
	goto l0C00_02E9
l0C00_019C:
	branch al_837 >=u 0x05 l0C00_01A6
l0C00_01A0:
	Mem984[ss:sp_108 + 0x0000:word16] = DPB(Mem836[ss:sp_108 + 0x0000:word16], Mem836[ds_114:0x0921:byte], 0, 8)
l0C00_01A6:
	branch al_837 != 0x05 l0C00_01B4
l0C00_01A8:
	byte al_986 = Mem836[ds_114:0x0921:byte]
	word16 ax_987 = (word16) al_986
	Mem992[ss:sp_108 - 0x0004:word16] = ax_987 + 0x0922
	Mem994[ss:sp_108 - 0x0006:word16] = ax_987 + 0x0922
	Mem996[ss:sp_108 - 0x0008:word16] = cx_104
	Mem998[ss:sp_108 - 0x000A:word16] = dx_43
	Mem1000[ss:sp_108 - 0x000C:word16] = bx_200
	Mem1002[ss:sp_108 - 0x000E:word16] = sp_108 - 0x000E
	Mem1004[ss:sp_108 - 0x0010:word16] = bp_196
	Mem1006[ss:sp_108 - 0x0012:word16] = 0x0922
	Mem1008[ss:sp_108 - 0x0014:word16] = di_102
	call SEQ(cs, 0x0922) (retsize: 2; depth: 2)
	return
l0C00_01B4:
	branch al_837 >=u 0x07 l0C00_01CD
l0C00_01B8:
	Mem1036[ss:sp_108 - 0x0004:word16] = ax_838
	Mem1038[ss:sp_108 - 0x0006:word16] = cx_104
	Mem1040[ss:sp_108 - 0x0008:word16] = dx_43
	Mem1042[ss:sp_108 - 0x000A:word16] = bx_200
	Mem1044[ss:sp_108 - 0x000C:word16] = sp_108 - 0x000C
	Mem1046[ss:sp_108 - 0x000E:word16] = bp_196
	Mem1048[ss:sp_108 - 0x0010:word16] = 0x0921
	Mem1050[ss:sp_108 - 0x0012:word16] = di_102
	Mem1052[ss:sp_108 - 0x0014:word16] = ds_114
	word16 ax_1056 = DPB(cs, SLICE(cs, byte, 8) + 0x30, 8, 8)
	word16 si_1058 = 0x0000
l0C00_01C3:
	Mem1063[ax_1056:si_1058 + 0x0000:word16] = ~Mem1052[ax_1056:si_1058 + 0x0000:word16]
	word16 si_1064 = si_1058 + 0x0001
	si_1058 = si_1064 + 0x0001
	branch si_1064 != 0x0001 l0C00_01C3
l0C00_01C9:
	return
l0C00_01CD:
	goto l0C00_02DE
l0C00_01D2:
	word16 dx_189 = Mem119[ss:sp_108 + 0x0000:word16]
	byte dl_190 = (byte) dx_189
	word16 sp_192 = sp_108 + 0x0002
	branch (dl_190 & 0x02) == 0x00 l0C00_01E6
l0C00_01D8:
	Mem797[ss:sp_108 + 0x0000:word16] = ax_122 << 0x0002
	Mem799[ss:sp_108 - 0x0002:word16] = cx_104
	Mem801[ss:sp_108 - 0x0004:word16] = dx_189
	Mem803[ss:sp_108 - 0x0006:word16] = bx_200
	Mem805[ss:sp_108 - 0x0008:word16] = sp_108 - 0x0008
	Mem807[ss:sp_108 - 0x000A:word16] = bp_196
	Mem809[ss:sp_108 - 0x000C:word16] = 0x0920
	Mem811[ss:sp_108 - 0x000E:word16] = di_102
	fn0C00_0395(0x0005, es_112, ds_114)
	dx_189 = Mem811[ss:sp_108 - 0x0004:word16]
	si_123 = Mem811[ss:sp_108 - 0x000C:word16]
	bp_196 = Mem811[ss:sp_108 - 0x000A:word16]
	bx_200 = Mem811[ss:sp_108 - 0x0006:word16]
	dl_190 = (byte) dx_189 (alias)
	sp_192 = sp_108 + 0x0002
l0C00_01E6:
	word16 ax_208 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8)
	selector es_209 = ax_208
	word16 di_210 = 0xBE00
	word16 ax_215 = DPB(ax_208, 0x00, 0, 8)
	word16 cx_218 = 0x0500
l0C00_01F9:
	branch cx_218 == 0x0000 l0C00_01FB
l0C00_01F9_1:
	Mem228[ax_208:di_210 + 0x0000:byte] = 0x00
	di_210 = di_210 + 0x0001
	cx_218 = cx_218 - 0x0001
	goto l0C00_01F9
l0C00_01FB:
	branch (dl_190 & 0x01) == 0x00 l0C00_0211
l0C00_0200:
	word16 sp_729 = sp_192 - 0x0002
	Mem730[ss:sp_729 + 0x0000:word16] = ax_215
	Mem732[ss:sp_729 - 0x0002:word16] = cx_218
	Mem734[ss:sp_729 - 0x0004:word16] = dx_189
	Mem736[ss:sp_729 - 0x0006:word16] = bx_200
	Mem738[ss:sp_729 - 0x0008:word16] = sp_729 - 0x0008
	Mem740[ss:sp_729 - 0x000A:word16] = bp_196
	Mem742[ss:sp_729 - 0x000C:word16] = si_123
	Mem744[ss:sp_729 - 0x000E:word16] = di_210
	word16 di_746 = 0x0000
	word16 cx_748 = 0x4000
l0C00_020D:
	branch cx_748 == 0x0000 l0C00_0210
l0C00_020D_1:
	Mem763[ax_208:di_746 + 0x0000:word32] = 0x00000000
	di_746 = di_746 + 0x0004
	cx_748 = cx_748 - 0x0001
	goto l0C00_020D
l0C00_0210:
	dx_189 = Mem744[ss:sp_729 - 0x0004:word16]
	di_210 = Mem744[ss:sp_729 - 0x000E:word16]
	si_123 = Mem744[ss:sp_729 - 0x000C:word16]
	bp_196 = Mem744[ss:sp_729 - 0x000A:word16]
	bx_200 = Mem744[ss:sp_729 - 0x0006:word16]
	dl_190 = (byte) dx_189 (alias)
	cx_218 = Mem744[ss:sp_729 - 0x0002:word16]
	ax_215 = Mem744[ss:sp_729 + 0x0000:word16]
	sp_192 = sp_729 + 0x0002
l0C00_0211:
	branch (dl_190 & 0x20) == 0x00 l0C00_021B
l0C00_0216:
	word16 sp_687 = sp_192 - 0x0002
	Mem688[ss:sp_687 + 0x0000:word16] = ax_215
	Mem690[ss:sp_687 - 0x0002:word16] = cx_218
	Mem692[ss:sp_687 - 0x0004:word16] = dx_189
	Mem694[ss:sp_687 - 0x0006:word16] = bx_200
	Mem696[ss:sp_687 - 0x0008:word16] = sp_687 - 0x0008
	Mem698[ss:sp_687 - 0x000A:word16] = bp_196
	Mem700[ss:sp_687 - 0x000C:word16] = si_123
	Mem702[ss:sp_687 - 0x000E:word16] = di_210
	fn0C00_0695()
	dx_189 = Mem702[ss:sp_687 - 0x0004:word16]
	di_210 = Mem702[ss:sp_687 - 0x000E:word16]
	si_123 = Mem702[ss:sp_687 - 0x000C:word16]
	bp_196 = Mem702[ss:sp_687 - 0x000A:word16]
	bx_200 = Mem702[ss:sp_687 - 0x0006:word16]
	dl_190 = (byte) dx_189 (alias)
	cx_218 = Mem702[ss:sp_687 - 0x0002:word16]
	ax_215 = Mem702[ss:sp_687 + 0x0000:word16]
	sp_192 = sp_687 + 0x0002
l0C00_021B:
	branch (dl_190 & 0x08) == 0x00 l0C00_022C
l0C00_0220:
	word16 sp_639 = sp_192 - 0x0002
	Mem640[ss:sp_639 + 0x0000:word16] = ax_215
	Mem642[ss:sp_639 - 0x0002:word16] = cx_218
	Mem644[ss:sp_639 - 0x0004:word16] = dx_189
	Mem646[ss:sp_639 - 0x0006:word16] = bx_200
	Mem648[ss:sp_639 - 0x0008:word16] = sp_639 - 0x0008
	Mem650[ss:sp_639 - 0x000A:word16] = bp_196
	Mem652[ss:sp_639 - 0x000C:word16] = si_123
	Mem654[ss:sp_639 - 0x000E:word16] = di_210
	word16 ax_658 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8)
	fn0C00_0402(ax_658, ds_114)
	dx_189 = Mem654[ss:sp_639 - 0x0004:word16]
	es_209 = ax_658
	di_210 = Mem654[ss:sp_639 - 0x000E:word16]
	si_123 = Mem654[ss:sp_639 - 0x000C:word16]
	bp_196 = Mem654[ss:sp_639 - 0x000A:word16]
	bx_200 = Mem654[ss:sp_639 - 0x0006:word16]
	dl_190 = (byte) dx_189 (alias)
	cx_218 = Mem654[ss:sp_639 - 0x0002:word16]
	ax_215 = Mem654[ss:sp_639 + 0x0000:word16]
	sp_192 = sp_639 + 0x0002
l0C00_022C:
	branch (dl_190 & 0x04) == 0x00 l0C00_024B
l0C00_0231:
	word16 sp_585 = sp_192 - 0x0002
	Mem586[ss:sp_585 + 0x0000:word16] = ax_215
	Mem588[ss:sp_585 - 0x0002:word16] = cx_218
	Mem590[ss:sp_585 - 0x0004:word16] = dx_189
	Mem592[ss:sp_585 - 0x0006:word16] = bx_200
	Mem594[ss:sp_585 - 0x0008:word16] = sp_585 - 0x0008
	Mem596[ss:sp_585 - 0x000A:word16] = bp_196
	Mem598[ss:sp_585 - 0x000C:word16] = si_123
	Mem600[ss:sp_585 - 0x000E:word16] = di_210
	fn0C00_0539(Mem600[ds_114:0x0870:word16] << 0x0001, 0x8000, es_209, ds_114, DPB(cs, SLICE(cs, byte, 8) + 0x30, 8, 8))
	dx_189 = Mem600[ss:sp_585 - 0x0004:word16]
	di_210 = Mem600[ss:sp_585 - 0x000E:word16]
	si_123 = Mem600[ss:sp_585 - 0x000C:word16]
	bp_196 = Mem600[ss:sp_585 - 0x000A:word16]
	bx_200 = Mem600[ss:sp_585 - 0x0006:word16]
	cx_218 = Mem600[ss:sp_585 - 0x0002:word16]
	ax_215 = Mem600[ss:sp_585 + 0x0000:word16]
	sp_192 = sp_585 + 0x0002
	branch ((byte) dx_189 & 0x10) == 0x00 l0C00_024B
l0C00_024B:
	word16 sp_326 = sp_192 - 0x0002
	Mem327[ss:sp_326 + 0x0000:word16] = ax_215
	Mem329[ss:sp_326 - 0x0002:word16] = cx_218
	Mem331[ss:sp_326 - 0x0004:word16] = dx_189
	Mem333[ss:sp_326 - 0x0006:word16] = bx_200
	Mem335[ss:sp_326 - 0x0008:word16] = sp_326 - 0x0008
	Mem337[ss:sp_326 - 0x000A:word16] = bp_196
	Mem339[ss:sp_326 - 0x000C:word16] = si_123
	Mem341[ss:sp_326 - 0x000E:word16] = di_210
	word16 ax_345 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8)
	word16 cx_351 = 0x0000
	branch 0x0000 == 0x0000 l0C00_0260
l0C00_025A:
	word16 di_564 = 0x0000
l0C00_025E:
	branch cx_351 == 0x0000 l0C00_0260
l0C00_025E_1:
	Mem578[ax_345:di_564 + 0x0000:word16] = 0x0000
	di_564 = di_564 + 0x0002
	cx_351 = cx_351 - 0x0001
	goto l0C00_025E
l0C00_0260:
	word16 di_360 = Mem341[ss:sp_326 - 0x000E:word16]
	word16 si_362 = Mem341[ss:sp_326 - 0x000C:word16]
	word16 bp_364 = Mem341[ss:sp_326 - 0x000A:word16]
	word16 bx_367 = Mem341[ss:sp_326 - 0x0006:word16]
	word16 dx_369 = Mem341[ss:sp_326 - 0x0004:word16]
	word16 cx_372 = Mem341[ss:sp_326 - 0x0002:word16]
	Mem377[ss:sp_326 + 0x0000:word16] = Mem341[ss:sp_326 + 0x0000:word16]
	Mem379[ss:sp_326 - 0x0002:word16] = cx_372
	Mem381[ss:sp_326 - 0x0004:word16] = dx_369
	Mem383[ss:sp_326 - 0x0006:word16] = bx_367
	Mem385[ss:sp_326 - 0x0008:word16] = sp_326 - 0x0008
	Mem387[ss:sp_326 - 0x000A:word16] = bp_364
	Mem389[ss:sp_326 - 0x000C:word16] = si_362
	Mem391[ss:sp_326 - 0x000E:word16] = di_360
	Mem393[ss:sp_326 - 0x0010:word16] = ds_114
	Mem395[ss:sp_326 - 0x0012:word16] = ax_345
	Mem397[ss:sp_326 - 0x0014:word16] = ax_345
	selector ds_398 = Mem397[ss:sp_326 - 0x0014:selector]
	__syscall(0x10)
	word16 sp_399 = sp_326 - 0x0012
	word16 di_400 = 0x0000
	word16 si_404 = 0x091F
l0C00_0272:
	word16 ax_420 = (int16) Mem397[ds_398:si_404 + 0x0000:byte]
	si_404 = si_404 + 0x0001
	byte al_423 = (byte) ax_420
	branch al_423 == 0x00 l0C00_02CD
l0C00_0279:
	branch al_423 >= 0x00 l0C00_0288
l0C00_027B:
	word16 ax_430 = -ax_420
	di_400 = di_400 + DPB(ax_430 << 0x0004, SLICE(ax_430 << 0x0004, byte, 8) << 0x04, 8, 8)
	goto l0C00_0272
l0C00_0288:
	word16 sp_439 = sp_399 - 0x0002
	Mem440[ss:sp_439 + 0x0000:word16] = si_404
	Mem442[ss:sp_439 - 0x0002:word16] = di_400
	word16 sp_441 = sp_439 - 0x0002
	word16 si_444 = (ax_420 << 0x0004) + bp_364
	byte dl_448 = 0x10
l0C00_0296:
	word16 sp_466 = sp_441 - 0x0002
	Mem467[ss:sp_466 + 0x0000:word16] = di_400
	byte al_468 = Mem467[ds_398:si_444 + 0x0000:byte]
	si_444 = si_444 + 0x0001
l0C00_0299:
	word16 ax_477 = (int16) al_468
	byte ah_478 = SLICE(ax_477, byte, 8)
	Mem482[ds_398:di_400 + 0x0000:byte] = Mem467[ds_398:di_400 + 0x0000:byte] | ah_478 & 0xBF
	word16 di_484 = di_400 + 0x0001
	Mem486[ds_398:di_484 + 0x0000:byte] = Mem482[ds_398:di_484 + 0x0000:byte] | ah_478 & 0xBF
	Mem491[ds_398:di_484 + 0x0001:byte] = Mem486[ds_398:di_484 + 0x0001:byte] | ah_478 & 0xBF
	bx_367 = DPB(bx_367, ah_478 & 0xBF & 0xAF, 8, 8) (alias)
	Mem498[ds_398:di_484 + 0x00FF:word16] = Mem491[ds_398:di_484 + 0x00FF:word16] | bx_367
	word16 ax_480 = DPB(ax_477, ah_478 & 0xBF, 8, 8)
	di_400 = di_484 + 0x0001
	al_468 = (byte) (ax_480 << 0x0001) (alias)
	branch ax_480 << 0x0001 != 0x0000 l0C00_0299
l0C00_02B4:
	word16 di_505 = Mem498[ss:sp_466 + 0x0000:word16]
	sp_441 = sp_466 + 0x0002
	di_400 = di_505 + 0x0101
	branch dl_448 <u 0x09 l0C00_02C0
l0C00_02BE:
	di_400 = di_505 + 0x00FF
l0C00_02C0:
	dl_448 = dl_448 - 0x01
	branch dl_448 != 0x00 l0C00_0296
l0C00_02C4:
	si_404 = Mem498[ss:sp_466 + 0x0004:word16]
	sp_399 = sp_466 + 0x0006
	di_400 = Mem498[ss:sp_466 + 0x0002:word16] + 0x0010
	goto l0C00_0272
l0C00_02CD:
	word16 sp_529 = sp_399 + 0x0002
	Mem533[ss:sp_529 + 0x0000:word16] = Mem397[ss:sp_399 + 0x0000:selector]
	fn0C00_030F(Mem533[ss:sp_529 + 0x0000:selector])
	di_102 = Mem533[ss:sp_529 + 0x0002:word16]
	bp_196 = Mem533[ss:sp_529 + 0x0006:word16]
	bx_200 = Mem533[ss:sp_529 + 0x000A:word16]
	dx_43 = Mem533[ss:sp_529 + 0x000C:word16]
	cx_104 = Mem533[ss:sp_529 + 0x000E:word16]
	sp_101 = sp_529 + 0x0012
	branch (int16) __inb(0x60) == 0x0001 l0C00_02DE
l0C00_02DB:
	goto l0C00_0141
l0C00_02DE:
	selector ds_187 = fn0C00_090C()
	bios_video_set_mode(0x03)
l0C00_02E6_thunk_fn0C00_0715:
	fn0C00_0715(ds_187)
	return
l0C00_02E9:
	word16 di_896 = 0x0F60
	word16 cx_904 = 0x0300
l0C00_02F1:
	branch cx_904 == 0x0000 l0C00_02F3
l0C00_02F1_1:
	Mem914[es_112:di_896 + 0x0000:word16] = 0x0000
	di_896 = di_896 + 0x0002
	cx_904 = cx_904 - 0x0001
	goto l0C00_02F1
l0C00_02F3:
	cx_904 = DPB(cx_904, 0x00, 8, 8) (alias)
	branch cx_904 == 0x0000 l0C00_030E
l0C00_02F9:
	word16 bx_947 = 0x0003
l0C00_02FC:
	Mem956[es_112:di_896 + 0x0000:byte] = Mem836[ds_114:di_896 - 0x0003:byte] + Mem836[ds_114:bx_947 + si_840:byte]
	di_896 = di_896 + 0x0001
	bx_947 = bx_947 - 0x0001
	branch bx_947 != 0x0000 l0C00_02FC
l0C00_0305:
	cx_904 = cx_904 - 0x0001
	branch cx_904 != 0x0000 l0C00_02F9
l0C00_0307:
	si_840 = si_840 + 0x0004
	goto l0C00_02F3
l0C00_030E:
	return
fn0C00_0100_exit:
}

void fn0C00_030F(selector ds)
{
	word16 si_11 = 0x1C00;
	word16 cx_13 = 0x00C7;
	word16 di_15 = 0x0020;
	do
	{
		word16 cx_27 = 0x0040;
		while (cx_27 != 0x0000)
		{
			Mem38[0xA000:di_15 + 0x0000:word32] = Mem0[ds:si_11 + 0x0000:word32];
			si_11 = si_11 + 0x0004;
			di_15 = di_15 + 0x0004;
			cx_27 = cx_27 - 0x0001;
		}
		di_15 = di_15 + 0x0040;
		cx_13 = cx_13 - 0x0001;
	} while (cx_13 != 0x0000);
	return;
}

word16 fn0C00_0334(selector es, ptr16 bxOut)
{
	word16 cx_2 = 0x0000;
	word16 di_3 = 0x0000;
	do
	{
		word16 dx_14 = (DPB(cx_2, (byte) cx_2 + SLICE(cx_2, byte, 8), 0, 8) << 0x0001) - cx_2;
		byte dh_16 = SLICE(dx_14, byte, 8);
		byte dl_15 = (byte) dx_14;
		word16 bx_23 = dh_16 *s dh_16 + dl_15 *s dl_15;
		*bxOut = bx_23;
		byte al_25;
		byte dl_26;
		fn0C00_037B(bx_23, out al_25, out dl_26);
		word16 ax_29 = (int16) (al_25 ^ dl_26);
		word16 ax_33 = DPB(ax_29, (byte) ax_29 ^ SLICE(ax_29, byte, 8), 0, 8);
		Mem39[es:di_3 + 0x0000:byte] = (byte) (ax_33 + 0x0001);
		di_3 = di_3 + 0x0001;
		cx_2 = cx_2 - 0x0001;
	} while (cx_2 != 0x0000);
	return ax_33 + 0x0001;
}

word16 fn0C00_035B(ptr16 bpOut)
{
	word16 cx_16 = 0x0200;
	word16 si_15 = 0x0000;
	word16 bx_11 = 0x7FFF;
	word16 di_12 = 0x0B26;
	do
	{
		Mem18[cs:di_12 + 0x0000:word16] = si_15;
		di_12 = di_12 + 0x0002;
		word16 bp_21;
		word16 ax_23 = fn0C00_03E0(bx_11, si_15, out bx_11, out bp_21, out si_15);
		cx_16 = cx_16 - 0x0001;
	} while (cx_16 != 0x0000);
	return ax_23;
}

word16 fn0C00_0371(word16 ax, word16 cx, word16 bx, word16 di, selector es)
{
	do
	{
		word16 ax_8 = ax - cx;
		ax = __ror(DPB(ax_8, SLICE(ax_8, byte, 8) ^ (byte) ax_8, 8, 8), 0x03);
		Mem19[es:di + 0x0000:word16] = ax;
		di = di + 0x0002;
		cx = cx - 0x0001;
	} while (cx != 0x0000);
	byte al_24;
	byte dl_25;
}

word16 fn0C00_037B(word16 bx, ptr16 alOut, ptr16 dlOut)
{
	word16 cx_12 = 0x0007;
	word16 bp_10 = 0x0001;
	do
	{
		int32 dx_ax_17 = (int32) bx;
		word16 ax_18 = (word16) dx_ax_17;
		byte al_20;
		*alOut = (byte) dx_ax_17;
		if (bp_10 != 0x0000)
		{
			ax_18 = SEQ(dx_ax_17 % bp_10, ax_18) /u bp_10;
			byte al_43;
			*alOut = (byte) ax_18;
		}
		word16 bp_31 = bp_10 + ax_18;
		byte dl_29;
		*dlOut = (byte) dx;
		bp_10 = bp_31 >> 0x0001;
		cx_12 = cx_12 - 0x0001;
	} while (cx_12 != 0x0000);
	return bp_31 >> 0x0001;
}

void fn0C00_0395(word16 cx, selector es, selector ds)
{
	word16 sp_1 = fp;
	word16 si_2 = 0x0B14;
	word16 di_3 = 0x2F26;
	do
	{
		word16 sp_9 = sp_1 - 0x0002;
		Mem10[ss:sp_9 + 0x0000:word16] = cx;
		word16 si_14 = si_2 + 0x0002;
		word16 ax_13 = Mem10[ds:si_2 + 0x0000:word16];
		word16 ax_16 = Mem10[ds:si_14 + 0x0000:word16];
		word16 ax_19 = Mem10[ds:si_14 + 0x0002:word16];
		Mem22[ss:sp_9 - 0x0002:word16] = si_14 + 0x0004;
		Mem25[ss:sp_9 - 0x0004:word16] = di_3;
		word16 di_27;
		word16 si_28 = fn0C00_03CA(ax_13, ax_19, 0x8408, ds, out di_27);
		word16 di_33;
		word16 si_34 = fn0C00_03CA(si_28, ax_13, di_27, ds, out di_33);
		word16 di_39;
		word16 si_40 = fn0C00_03CA(si_28, ax_16, di_33, ds, out di_39);
		word16 di_42 = Mem25[ss:sp_9 - 0x000A:word16];
		Mem48[es:di_42 + 0x0000:word16] = DPB(si_34, SLICE(si_34, byte, 8) + 0x80, 8, 8);
		word16 ax_54 = DPB(si_40, SLICE(si_40, byte, 8) + 0x80, 8, 8);
		Mem56[es:di_42 + 0x0002:word16] = ax_54;
		Mem58[es:di_42 + 0x0004:word16] = ax_54;
		word16 cx_62 = Mem58[ss:sp_9 - 0x0006:word16];
		di_3 = di_42 + 0x0006;
		si_2 = Mem58[ss:sp_9 - 0x0008:word16];
		sp_1 = sp_9 - 0x0004;
		cx = cx_62 - 0x0001;
	} while (cx_62 != 0x0001);
	return;
}

word16 fn0C00_03CA(word16 bx, word16 si, word16 di, selector ds, ptr16 diOut)
{
	word16 bx_8 = (word16) Mem0[ds:di + 0x0000:byte];
	Mem12[ds:0x03F0:word16] = SEQ(ds, 0x0BA6)[bx_8 * 0x0002];
	Mem14[ds:0x03F7:word16] = SEQ(ds, 0x0B26)[bx_8 * 0x0002];
	word16 di_17;
	*diOut = di + 0x0001;
	word16 bx_20;
	word16 bp_21;
	word16 si_22;
	fn0C00_03E0(bx, si, out bx_20, out bp_21, out si_22);
	return si_22;
}

word16 fn0C00_03E0(word16 bx, word16 si, ptr16 bxOut, ptr16 bpOut, ptr16 siOut)
{
	word16 dx_4;
	word16 bx_5;
	word16 bp_6;
	fn0C00_03EF(bx, si, out dx_4, out bx_5, out bp_6);
	word16 bp_16 = bp_14 - dx_12;
	*bpOut = bp_16;
	word16 bx_18;
	*bxOut = bp_16;
	word16 si_19;
	*siOut = bp_6 + dx_4;
	word16 dx_12;
	word16 bx_13;
	word16 bp_14;
	return fn0C00_03EF(bx_5, si, out dx_12, out bx_13, out bp_14);
}

word16 fn0C00_03EF(word16 bx, word16 si, ptr16 dxOut, ptr16 bxOut, ptr16 bpOut)
{
	word16 bx_13;
	*bxOut = si;
	word16 bp_15;
	*bpOut = SLICE(si *s 0x7FF5, word16, 16) * 0x0002;
	word16 dx_16;
	*dxOut = SLICE(bx *s 0x0324, word16, 16) * 0x0002;
	return (word16) (bx *s 0x0324);
}

void fn0C00_0402(selector es, selector ds)
{
	word16 sp_1 = fp;
	word16 si_19 = 0x2F26;
	word16 di_20 = 0x0459;
	word16 cx_22 = 0x0004;
	do
	{
		Mem11[es:di_20 + 0x0000:word16] = Mem0[ds:si_19 + 0x0000:word16];
		word16 si_13 = si_19 + 0x0002;
		word16 di_14 = di_20 + 0x0002;
		Mem16[es:di_14 + 0x0000:word16] = Mem11[ds:si_13 + 0x0000:word16];
		si_19 = si_13 + 0x0006;
		di_20 = di_14 + 0x0006;
		cx_22 = cx_22 - 0x0001;
	} while (cx_22 != 0x0000);
	word16 bx_23 = Mem16[ds:0x0459:word16];
	word16 si_25 = Mem16[ds:0x045B:word16];
	word16 di_26 = 0x2B26;
	word16 cx_27 = 0x07D0;
	do
	{
		word16 sp_33 = sp_1 - 0x0002;
		Mem34[ss:sp_33 + 0x0000:word16] = di_26;
		word16 di_38 = (Mem34[ds:di_26 + 0x0000:word16] & 0x0018) + 0x0457;
		Mem40[ss:sp_33 - 0x0002:word16] = si_25;
		word16 si_41 = si_25 - Mem40[ds:di_38 + 0x0002:word16];
		Mem44[ss:sp_33 - 0x0004:word16] = bx_23;
		word16 bx_45 = bx_23 - Mem44[ds:di_38 + 0x0004:word16];
		word16 di_48;
		word16 si_49 = fn0C00_03CA(bx_45 >> 0x0001, si_41 >> 0x0001, di_38, ds, out di_48);
		bx_23 = (bx_45 >> 0x0001) + Mem44[ss:sp_33 - 0x0006:word16];
		si_25 = si_49 + Mem44[ss:sp_33 - 0x0004:word16];
		Mem62[es:si_25 + 0x0000:byte] = 0x7F;
		Mem64[es:si_25 + 0x0001:byte] = 0x7F;
		Mem67[es:si_25 + 0x0002:byte] = 0x70;
		sp_1 = sp_33;
		di_26 = Mem67[ss:sp_33 - 0x0002:word16] + 0x0001;
		cx_27 = cx_27 - 0x0001;
	} while (cx_27 != 0x0000);
	return;
}

void fn0C00_0477(word16 ax, word16 di, selector es, word16 wArg00, word16 wArg02, word16 wArg04, word16 wArg06)
{
	if (di != 0x0000)
	{
		word16 cx_29;
		word16 dx_30;
		fn0C00_0480(ax, wArg04, wArg02, wArg06, di, es, out cx_29, out dx_30);
		return;
	}
	else
	{
		fn0C00_04A6(ax, wArg04, wArg02, wArg06, es);
		return;
	}
}

void fn0C00_047C(word16 ax, word16 cx, word16 dx, word16 bx, word16 di, selector es)
{
	if (di != 0x0000)
	{
		word16 cx_14;
		word16 dx_15;
		word16 ax_16 = fn0C00_0480(ax, cx, dx, bx, di, es, out cx_14, out dx_15);
	}
}

word16 fn0C00_0480(word16 ax, word16 cx, word16 dx, word16 bx, word16 di, selector es, ptr16 cxOut, ptr16 dxOut)
{
	SCZO = cond(di - 0x0003);
	C = SCZO;
	if (Test(UGE,C))
	{
		v6 = dx;
		dx = bx;
		dl = (byte) dx;
		dh = SLICE(dx, byte, 8);
		bx = v6;
	}
	bp = 0x0002;
	do
	{
		sp = fp - 0x0002;
		wLoc02 = ax;
		sp = fp - 0x0004;
		wLoc04 = cx;
		sp = fp - 0x0006;
		wLoc06 = dx;
		sp = fp - 0x0008;
		wLoc08 = bx;
		sp = fp - 0x000A;
		wLoc0A = fp - 0x000A;
		sp = fp - 0x000C;
		wLoc0C = bp;
		sp = fp - 0x000E;
		wLoc0E = si;
		sp = fp - 0x0010;
		wLoc10 = di;
		sp = fp - 0x0012;
		wLoc12 = bx;
		sp = fp - 0x0014;
		wLoc14 = dx;
		dl = dl + cl;
		SCZO = cond(dl);
		v16 = (dl & 0x02) != 0x00;
		dl = __rcr(dl, 0x01, C);
		dh = dh + ch;
		SCZO = cond(dh);
		v19 = (dh & 0x02) != 0x00;
		dh = __rcr(dh, 0x01, C);
		C = v19;
		bx = wLoc14;
		sp = fp - 0x0012;
		cx = wLoc12;
		sp = fp - 0x0010;
		di = di - 0x0001;
		SZO = cond(di);
		fn0C00_047C(ax, cx, dx, bx, di, es);
		di = wLoc10;
		sp = fp - 0x000E;
		si = wLoc0E;
		sp = fp - 0x000C;
		bp = wLoc0C;
		sp = fp - 0x000A;
		sp = fp - 0x0008;
		bx = wLoc08;
		sp = fp - 0x0006;
		dx = wLoc06;
		sp = fp - 0x0004;
		cx = wLoc04;
		sp = fp - 0x0002;
		ax = wLoc02;
		sp = fp;
		v24 = dx;
		dx = cx;
		cx = v24;
		ax = ax + 0x0001;
		v25 = ah;
		ah = al;
		al = v25;
		bp = bp - 0x0001;
		SZO = cond(bp);
	} while (Test(NE,Z));
	return ax;
}

void fn0C00_04A6(word16 ax, word16 cx, word16 dx, word16 bx, selector es)
{
	if (bx >=u cx)
	{
		cx = bx;
		ch = SLICE(bx, byte, 8);
		bx = cx;
		bh = SLICE(cx, byte, 8);
		bl = (byte) cx;
	}
	if (bx >=u dx)
	{
		dx = bx;
		dh = SLICE(bx, byte, 8);
		bh = SLICE(dx, byte, 8);
		bl = (byte) dx;
	}
	if (cx >=u dx)
	{
		dx = cx;
		dh = SLICE(cx, byte, 8);
		cx = dx;
		ch = SLICE(dx, byte, 8);
	}
	word16 dx_40 = DPB(dx, dh + 0x01, 8, 8);
	word16 cx_38 = DPB(cx, ch + 0x01, 8, 8);
	byte ch_47;
	byte dh_48;
	word16 ax_49 = fn0C00_0527((byte) dx_40 - bl, SLICE(dx_40, byte, 8) - bh, out ch_47, out dh_48);
	byte ch_62;
	byte dh_63;
	word16 ax_64 = fn0C00_0527((byte) cx_38 - bl, SLICE(cx_38, byte, 8) - bh, out ch_62, out dh_63);
	byte cl_75;
	byte ch_76;
	word16 si_77 = fn0C00_04FE(ax_64, DPB(dx_40, 0x00, 0, 8), ax_49, (byte) ax, ch_62, bl, bh, es, out cl_75, out ch_76);
	word16 ax_82 = DPB(ax, SLICE(dx_40, byte, 8), 8, 8);
	byte ch_91;
	byte dh_92;
	word16 ax_93 = fn0C00_0527((byte) dx_40 - cl_75, SLICE(dx_40, byte, 8) - ch_76, out ch_91, out dh_92);
	byte ah_96 = SLICE(ax_82, byte, 8);
	byte al_97 = (byte) ax_82;
	byte bh_100 = SLICE(cx_38, byte, 8);
	byte cl_101;
	byte ch_102;
	fn0C00_04FE(ax_93, si_77, ax_49, al_97, ah_96, dh_92, bh_100, es, out cl_101, out ch_102);
	return;
}

word16 fn0C00_04FE(word16 bp, word16 si, word16 di, byte al, byte ah, byte dh, byte bh, selector es, ptr16 clOut, ptr16 chOut)
{
	while (bh != ah)
	{
		dx = dx + di;
		si = si + bp;
		byte dh_37 = SLICE(dx, byte, 8);
		byte ch_45 = SLICE(si, byte, 8) - dh_37;
		word16 cx_46 = DPB(si, ch_45, 8, 8);
		if (ch_45 <u 0x00)
			cx_46 = -cx_46;
		word16 bx_55 = DPB(bx, dh_37, 0, 8);
		word16 di_58 = bx_55;
		word16 cx_62 = DPB(cx_46, 0x00, 8, 8) + 0x0001;
		while (cx_62 != 0x0000)
		{
			Mem71[es:di_58 + 0x0000:byte] = al;
			di_58 = di_58 + 0x0001;
			cx_62 = cx_62 - 0x0001;
		}
		bh = bh + 0x01;
		bx = DPB(bx_55, bh, 8, 8);
	}
	byte ch_89;
	*chOut = SLICE(cx, byte, 8);
	byte cl_90;
	*clOut = (byte) cx;
	return si;
}

word16 fn0C00_0527(byte al, byte ah, ptr16 chOut, ptr16 dhOut)
{
	int32 dx_ax_17 = (int32) DPB(ax, 0x00, 0, 8);
	word16 cx_16 = DPB(cx, 0x00, 8, 8);
	word16 ax_21 = (word16) dx_ax_17;
	if (cx_16 != 0x0000)
		ax_21 = SEQ(dx_ax_17 % cx_16, ax_21) / cx_16;
	byte dh_30;
	*dhOut = SLICE(dx, byte, 8);
	byte ch_33;
	*chOut = SLICE(cx, byte, 8);
	return ax_21;
}

void fn0C00_0539(word16 bx, word16 di, selector es, selector ds, selector fs)
{
	Mem8[ds:0x058B:word16] = Mem0[ds:(bx & 0x01FE) + 0x0B26:word16];
	word16 bx_9 = (bx & 0x01FE) + 0x0080;
	Mem12[ds:0x05A2:word16] = Mem8[ds:(bx_9 & 0x01FE) + 0x0B26:word16];
	word16 bx_13 = (bx_9 & 0x01FE) + 0x0030;
	Mem16[ds:0x05BA:word16] = Mem12[ds:(bx_13 & 0x01FE) + 0x0B26:word16];
	word16 bx_17 = (bx_13 & 0x01FE) + 0x0080;
	Mem20[ds:0x05D1:word16] = Mem16[ds:(bx_17 & 0x01FE) + 0x0B26:word16];
	word16 bx_18 = bx_17 & 0x01FE;
	word16 cx_21 = 0x0180;
	while (cx_21 != 0x0000)
	{
		Mem39[es:di + 0x0000:word16] = 0x0000;
		di = di + 0x0002;
		cx_21 = cx_21 - 0x0001;
	}
	word32 esi_163 = 0x00000008;
	word16 si_162 = 0x0008;
	while (true)
	{
		word16 si_57 = si_162 + 0x0001;
		word32 esi_58 = DPB(esi_163, si_57, 0, 16);
		word32 eax_66 = SEQ(0x000000001DCD6500 % esi_58, 0x1DCD6500) / esi_58;
		__shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18);
		bx_18 = DPB(bx_18, SLICE((word16) __shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18), byte, 8), 8, 8);
		word32 eax_103 = __shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18);
		Mem105[ds:0x05ED:word16] = (word16) eax_103;
		Mem108[ds:0x05F1:byte] = (byte) (eax_103 >>u 0x00000010);
		word32 eax_113 = __shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18);
		Mem115[ds:0x05F4:word16] = (word16) eax_113;
		Mem119[ds:0x05F8:byte] = (byte) (eax_113 >>u 0x00000010);
		word16 bp_126 = 0x0100;
		do
		{
			Mem156[es:di + 0x0000:byte] = Mem119[fs:bx_18 + 0x0000:byte];
			di = di + 0x0001;
			bp_126 = bp_126 - 0x0001;
		} while (bp_126 != 0x0000);
		si_162 = si_57;
		esi_163 = DPB(esi_163, si_57, 0, 16);
		if (si_57 == 0x0084)
			return;
	}
}

selector fn0C00_060B(word16 ax, word16 bp)
{
	word16 ax_35 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8);
	word16 sp_116 = fp - 0x0014;
	word16 di_100 = 0x0000;
	word16 cx_117 = 0x0100;
	byte cl_118 = 0x00;
	word16 bx_107 = 0xFE77;
	word16 si_102 = 0x0B26;
	do
	{
		word16 si_64 = si_102 + 0x0002;
		word16 ax_62 = Mem0[cs:si_102 + 0x0000:word16];
		word16 bx_67 = DPB(bx_107, Mem0[cs:si_64 + 0x007F:byte], 8, 8);
		word16 sp_70 = sp_116 - 0x0002;
		Mem71[ss:sp_70 + 0x0000:word16] = ax_62;
		Mem74[ss:sp_70 - 0x0002:word16] = cx_117;
		Mem76[ss:sp_70 - 0x0004:word16] = bp;
		Mem78[ss:sp_70 - 0x0006:word16] = bx_67 + 0x8080;
		Mem80[ss:sp_70 - 0x0008:word16] = sp_70 - 0x0008;
		Mem82[ss:sp_70 - 0x000A:word16] = bx_107;
		Mem84[ss:sp_70 - 0x000C:word16] = si_64;
		Mem86[ss:sp_70 - 0x000E:word16] = di_100;
		Mem92[ss:sp_70 - 0x0010:word16] = bx_67 + 0x8080;
		Mem94[ss:sp_70 - 0x0012:word16] = bp;
		Mem96[ss:sp_70 - 0x0014:word16] = 0x8080;
		fn0C00_0477(DPB(ax_62, cl_118, 0, 8), 0x0001, ax_35, ax, wArg00, wArg02, wArg04);
		word16 cx_113 = Mem96[ss:sp_70 - 0x0008:word16];
		di_100 = Mem96[ss:sp_70 - 0x0014:word16];
		si_102 = Mem96[ss:sp_70 - 0x0012:word16];
		bp = Mem96[ss:sp_70 - 0x0010:word16];
		bx_107 = Mem96[ss:sp_70 - 0x000C:word16];
		sp_116 = sp_70 - 0x0004;
		cx_117 = cx_113 - 0x0001;
		cl_118 = (byte) (cx_113 - 0x0001);
		byte ch_119 = SLICE(cx_113 - 0x0001, byte, 8);
	} while (cx_113 != 0x0001);
	Mem121[ss:sp_70 - 0x0006:word16] = ax_35;
	selector ds_122 = Mem121[ss:sp_70 - 0x0006:selector];
	word16 ax_127 = DPB(cs, SLICE(cs, byte, 8) + 0x40, 8, 8);
	word16 si_130 = 0x4040;
	do
	{
		byte al_140 = cl_118 - 0x80;
		byte al_144 = ch_119 - 0x80;
		word16 bx_146 = al_140 *s al_140 + al_144 *s al_144;
		if (bx_146 != 0x0000 && bx_146 >= 0x0000)
		{
			byte al_226;
			byte dl_227;
			bp = fn0C00_037B(bx_146, out al_226, out dl_227);
		}
		Mem159[ax_127:di_100 + 0x0000:byte] = Mem121[ds_122:si_130 + 0x0000:byte];
		word16 di_161 = di_100 + 0x0001;
		Mem162[ax_127:di_161 + 0x0000:byte] = (byte) bp;
		byte ch_164 = ch_119 - 0x01;
		si_130 = si_130 + 0x0001;
		di_100 = di_161 + 0x0001;
		cx_117 = DPB(cx_117, ch_164, 8, 8);
		if (ch_164 != 0x00)
		{
			ch_119 = ch_164 - 0x01;
			cx_117 = DPB(cx_117, ch_164 - 0x01, 8, 8);
			if (ch_164 != 0x01)
				continue;
		}
l0C00_0674:
		si_130 = si_130 + 0x0080;
		if ((cl_118 & 0x01) != 0x00)
			si_130 = si_130 - 0x0080;
		cx_117 = cx_117 - 0x0001;
		cl_118 = (byte) cx_117;
		ch_119 = SLICE(cx_117, byte, 8);
	} while (cx_117 != 0x0000);
	word16 ax_182 = DPB(cs, SLICE(cs, byte, 8) + 0x50, 8, 8);
	word16 cx_189 = 0x8000;
	while (cx_189 != 0x0000)
	{
		Mem196[ax_182:di_100 + 0x0000:word16] = 0x0000;
		di_100 = di_100 + 0x0002;
		cx_189 = cx_189 - 0x0001;
	}
	return Mem162[ss:sp_70 - 0x0002:selector];
}

void fn0C00_0695()
{
	byte ah_33 = SLICE(cs, byte, 8);
	word16 ax_35 = DPB(cs, ah_33 + 0x30, 8, 8);
	word16 ax_38 = DPB(cs, ah_33 + 0x50, 8, 8);
	word16 di_113 = 0x0000;
	word16 cx_41 = 0x0300;
	while (cx_41 != 0x0000)
	{
		Mem50[ax_38:di_113 + 0x0000:word16] = 0x0000;
		di_113 = di_113 + 0x0002;
		cx_41 = cx_41 - 0x0001;
	}
	word16 bx_100 = 0x7FFF;
	word16 bp_106 = 0x0001;
	do
	{
		Mem72[ss:fp - 0x0016:word16] = 0x0000;
		word16 bx_70 = bx_100 - (bx_100 >> 0x0005);
		word16 bx_78 = DPB(bx_70 * 0x0002, 0x00, 0, 8);
		word16 si_195 = bx_78;
		if (bx_78 >=u 0xFEFF)
			si_195 = bx_78 - 0xFF00;
		word16 cx_86 = 0x0080;
		byte ch_87 = 0x00;
		while (cx_86 != 0x0000)
		{
			Mem94[ax_38:di_113 + 0x0000:word16] = Mem72[ax_35:si_195 + 0x0000:word16];
			cx_86 = cx_86 - 0x0001;
			si_195 = si_195 + 0x0002;
			di_113 = di_113 + 0x0002;
			ch_87 = SLICE(cx_86, byte, 8);
		}
		bx_100 = bx_70;
		word16 si_103 = 0x0000;
		bp_106 = bp_106 - 0x0001;
	} while (bp_106 != 0x0000);
	word16 cx_110 = DPB(cx_86, ch_87 + 0x01, 8, 8);
	while (cx_110 != 0x0000)
	{
		Mem116[ax_38:di_113 + 0x0000:word16] = 0xC0C0;
		di_113 = di_113 + 0x0002;
		cx_110 = cx_110 - 0x0001;
	}
	word16 cx_121 = 0xF800 - di_113;
	if (cx_121 >=u 0x0000)
	{
		word16 cx_183 = cx_121 >>u 0x0001;
		while (cx_183 != 0x0000)
		{
			Mem191[ax_38:di_113 + 0x0000:word16] = 0x0000;
			di_113 = di_113 + 0x0002;
			cx_183 = cx_183 - 0x0001;
		}
	}
	Mem128[ss:fp - 0x0016:word16] = ax_38;
	byte ah_132 = SLICE(cs, byte, 8);
	word16 ax_134 = DPB(cs, ah_132 + 0x10, 8, 8);
	word16 ax_137 = DPB(cs, ah_132 + 0x40, 8, 8);
	word16 bx_139 = 0x0000;
	word16 di_143 = 0xFFFE;
	do
	{
		Mem148[ax_134:di_143 + 0x0000:word16] = Mem128[0x0000:si_103 + 0x0000:word16];
		word32 esi_151 = Mem148[ax_137:bx_139 + 0x0000:word32];
		word16 si_152 = (word16) esi_151;
		word16 di_150 = di_143 + 0x0002;
		Mem154[ax_134:di_150 + 0x0000:word16] = Mem148[0x0000:si_152 + 0x0000:word16];
		di_143 = di_150 + 0x0002;
		si_103 = (word16) (DPB(esi_151, si_152 + 0x0002, 0, 16) >>u 0x00000010);
		bx_139 = bx_139 + 0x0004;
	} while (bx_139 != 0x0000);
	return;
}

void fn0C00_0715(selector ds)
{
	do
		SEQ(cs, 0x07CD)();
	while (true);
	SEQ(cs, 0x07CD)();
	do
	{
		SEQ(cs, 0x07CD)();
		SEQ(cs, 0x07CD)();
		SEQ(cs, 0x07CD)();
	} while (true);
	return;
}

void fn0C00_0840()
{
	msdos_terminate_program();
}

void fn0C00_0852(word16 dx, byte ah, selector ds)
{
	__cli();
	__outb(0x43, 0x36);
	__outb(0x40, 0x00);
	__outb(0x40, ah);
	msdos_set_interrupt_vector(0x08, ds_dx);
	return;
}

selector fn0C00_090C()
{
	ptr32 ds_dx_8 = Mem0[cs:0x0907:segptr32];
	selector ds_9 = SLICE(ds_dx_8, selector, 16);
	fn0C00_0852((word16) ds_dx_8, 0x00, ds_9);
	bios_video_set_mode(0x03);
	return ds_9;
}

