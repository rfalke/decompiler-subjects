// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_206/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, selector ds)
{
fn0C00_0100_entry:
l0C00_0100:
	sp = fp
	es_bx = Mem0[ds:bx + 0x0000:segptr32]
	es = SLICE(es_bx, selector, 16) (alias)
	__cli()
	sp = fp - 0x0002
	wLoc02 = cs
	ax = wLoc02
	sp = fp
	ax = ax + 0x1F90
	SCZO = cond(ax)
	sp = fp - 0x0002
	wLoc02 = ax
	ss = wLoc02
	sp = 0x00C8
	ax = 0x0013
	al = (byte) ax (alias)
	bios_video_set_mode(al)
	al = 0xFF
	Mem0[es:0x7DA0:byte] = 0xFF
	cx = 0x00FF
	cl = (byte) cx (alias)
l0C00_011C:
	dx = 0x03C8
	al = cl
	__outb(0x03C8, al)
	dx = 0x03C9
	al = 0x00
	__outb(0x03C9, 0x00)
	al = cl
	al = al >>u 0x03
	__outb(0x03C9, al)
	al = 0x00
	SZO = cond(0x00)
	C = false
	__outb(0x03C9, 0x00)
	cx = cx - 0x0001
	cl = (byte) cx (alias)
	branch cx != 0x0000 l0C00_011C
l0C00_0131:
	cx = 0x0100
l0C00_0134:
	sp = 0x00C6
	Mem0[ss:0x00C6:word16] = 0x0100
	sp = 0x00C4
	Mem0[ss:0x00C4:word16] = cs
	ax = Mem0[ss:0x00C4:word16]
	sp = 0x00C6
	ax = ax + 0x0FF0
	ah = SLICE(ax, byte, 8) (alias)
	es = ax
	es_bx = SEQ(es, bx) (alias)
	sp = 0x00C4
	Mem0[ss:0x00C4:word16] = 0xA000
	ds = Mem0[ss:0x00C4:selector]
	sp = 0x00C6
	si = 0x0000
	SZO = cond(0x0000)
	C = false
	di = 0x01F6
	cx = 0x3E80
	cl = (byte) cx (alias)
l0C00_0148:
	v19 = Mem0[ds:si + 0x0000:word32]
	Mem0[es:di + 0x0000:word32] = v19
	si = si + 0x0004
	di = di + 0x0004
	cx = cx - 0x0001
	cl = (byte) cx (alias)
	branch cx != 0x0000 l0C00_0148
l0C00_014C:
	sp = 0x00C4
	Mem0[ss:0x00C4:word16] = cs
	ds = Mem0[ss:0x00C4:selector]
	sp = 0x00C6
	cx = 0xFA00
	si = 0x01F6
	di = 0x01F6
l0C00_0156:
	C = false
	al = Mem0[es:0x00B6:byte]
	ax = DPB(ax, al, 0, 8) (alias)
	bx = ax
	al = Mem0[es:0x01F5:byte]
	ax = DPB(ax, al, 0, 8) (alias)
	bx = bx + ax + C
	SCZO = cond(bx)
	C = SCZO (alias)
	al = Mem0[es:0x01F7:byte]
	ax = DPB(ax, al, 0, 8) (alias)
	bx = bx + ax + C
	SCZO = cond(bx)
	C = SCZO (alias)
	al = Mem0[es:0x0336:byte]
	ax = DPB(ax, al, 0, 8) (alias)
	bx = bx + ax + C
	SCZO = cond(bx)
	C = SCZO (alias)
	al = Mem0[es:0x00B5:byte]
	ax = DPB(ax, al, 0, 8) (alias)
	bx = bx + ax + C
	SCZO = cond(bx)
	C = SCZO (alias)
	al = Mem0[es:0x00B7:byte]
	ax = DPB(ax, al, 0, 8) (alias)
	bx = bx + ax + C
	SCZO = cond(bx)
	C = SCZO (alias)
	al = Mem0[es:0x0335:byte]
	ax = DPB(ax, al, 0, 8) (alias)
	bx = bx + ax + C
	SCZO = cond(bx)
	C = SCZO (alias)
	al = Mem0[es:0x0337:byte]
	ax = DPB(ax, al, 0, 8) (alias)
	bx = bx + ax + C
	bx = bx + 0x0004
	bx = bx >>u 0x0003
	bx = bx + 0x0002
	SCZO = cond(bx)
l0C00_0198:
l0C00_019A:
	Mem0[ds:si + 0x0000:byte] = bl
	si = si + 0x0001
	di = di + 0x0001
	SZO = cond(di)
	cx = cx - 0x0001
	branch cx != 0x0000 l0C00_0156
l0C00_01A1:
	sp = sp - 0x0002
	Mem0[ss:sp + 0x0000:word16] = 0xA000
	es = Mem0[ss:sp + 0x0000:selector]
	es_bx = SEQ(es, bx) (alias)
	sp = sp + 0x0002
	di = 0x0000
	SZO = cond(0x0000)
	C = false
	cx = 0x3E80
	cl = (byte) cx (alias)
	si = 0x01F6
l0C00_01AD:
	v21 = Mem0[ds:si + 0x0000:word32]
	Mem0[es:di + 0x0000:word32] = v21
	si = si + 0x0004
	di = di + 0x0004
	cx = cx - 0x0001
	cl = (byte) cx (alias)
	branch cx != 0x0000 l0C00_01AD
l0C00_01B1:
	al = 0x00
	ax = DPB(ax, al, 0, 8) (alias)
	cx = 0x0140
	cl = (byte) cx (alias)
	di = 0x0000
	SZO = cond(0x0000)
	C = false
l0C00_01B8:
	Mem0[es:di - 0x0740:byte] = al
	Mem0[es:di + 0xF780:byte] = al
	Mem0[es:di + 0x0000:byte] = al
	di = di + 0x0001
	cx = cx - 0x0001
	cl = (byte) cx (alias)
	branch cx != 0x0000 l0C00_01B8
l0C00_01C5:
	cx = 0x00C8
	cl = (byte) cx (alias)
	di = 0x0000
	SZO = cond(0x0000)
	C = false
l0C00_01CA:
	Mem0[es:di + 0x013F:byte] = al
	Mem0[es:di + 0x0000:byte] = al
	di = di + 0x0001
	di = di + 0x013F
	SCZO = cond(di)
	SZO = SCZO (alias)
	Z = SCZO (alias)
	C = SCZO (alias)
	cx = cx - 0x0001
	cl = (byte) cx (alias)
	branch cx != 0x0000 l0C00_01CA
l0C00_01D6:
	al = 0xC8
	Mem0[es:0x7DA0:byte] = 0xC8
	ah = bios_kbd_check_keystroke(out al)
	ax = DPB(ax, ah, 8, 8) (alias)
	branch Test(EQ,Z) l0C00_01F0
l0C00_01E2:
	ax = 0x0000
	al = (byte) ax (alias)
	SZO = cond(0x0000)
	C = false
	ah = bios_kbd_get_keystroke(out al)
	bios_video_set_mode(al)
	ax = 0x4C00
	msdos_terminate(0x00)
	goto fn0C00_0100_exit
l0C00_01F0:
	cx = Mem0[ss:sp + 0x0000:word16]
	sp = sp + 0x0002
	cx = cx - 0x0001
	cl = (byte) cx (alias)
	branch cx != 0x0000 l0C00_0198
l0C00_01F3:
	goto l0C00_0131
fn0C00_0100_exit:
}

