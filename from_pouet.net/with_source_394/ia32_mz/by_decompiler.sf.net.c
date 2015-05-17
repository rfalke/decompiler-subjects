// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_394/ia32_mz/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn1676_0061()
{
	bios_video_set_mode(0x13);
	return;
}

void fn1676_0068()
{
	bios_video_set_mode(0x03);
	return;
}

void fn1676_006F()
{
	bios_video_set_block_of_DAC_registers(0x0000, 0x00FF, 0x0800, 0xD5C0);
	return;
}

Eq_21 * fn1676_0084()
{
	byte Eq_14::*si_10 = Eq_14::a08C0;
	byte Eq_31::*di_11 = Eq_31::a3200;
	word16 cx_12 = 0x9100;
	while (cx_12 != 0x0000)
	{
		0xA000->*di_11 = 0x0800->*si_10;
		si_10 = si_10 + 1;
		di_11 = di_11 + 1;
		cx_12 = cx_12 - 0x0001;
	}
	return 0x0800;
}

void fn1676_009B()
{
	byte Eq_14::*bx_12 = 0x0800->wDB62 + 0x08C0 + (word16) ((0x0800->wDB64 - 0x0028) *u 0x0140);
	byte Eq_31::*bx_21 = 0x0800->wDB62 + (word16) (0x0800->wDB64 *u 0x0140);
	0x0800->ptrDB6C = bx_12;
	0x0800->ptrDB6E = bx_21;
	0x0800->wDB5E = 0x0000;
	byte Eq_14::*si_13 = bx_12;
	byte Eq_31::*di_23 = bx_21;
	do
	{
		word16 cx_35 = 0x0039;
		while (cx_35 != 0x0000)
		{
			0xA000->*di_23 = 0x0800->*si_13;
			si_13 = si_13 + 1;
			di_23 = di_23 + 1;
			cx_35 = cx_35 - 0x0001;
		}
		0x0800->wDB5E = 0x0800->wDB5E + 0x0001;
		word16 ax_49 = (word16) (0x0800->wDB5E *u 0x0140);
		si_13 = Mem45[0x0800:0xDB6C:word16] + ax_49;
		di_23 = Mem45[0x0800:0xDB6E:word16] + ax_49;
	} while (0x0800->wDB5E != 0x0006);
	0x0800->wDB5E = 0x0000;
	return;
}

Eq_114 * fn1676_0104()
{
	byte Eq_31::*bx_13 = 0x0800->wDB62 + (word16) (0x0800->wDB64 *u 0x0140);
	0x0800->ptrDB6C = &Eq_14::b0000;
	0x0800->ptrDB6E = bx_13;
	0x0800->wDB5E = 0x0000;
	byte Eq_14::*si_27 = &Eq_14::b0000;
	byte Eq_31::*di_15 = bx_13;
	do
	{
		word16 cx_31 = 0x0039;
		do
		{
			byte al_38 = 0x0800->*si_27;
			if (al_38 != 0x00)
				0xA000->*di_15 = al_38;
			si_27 = si_27 + 1;
			di_15 = di_15 + 1;
			cx_31 = cx_31 - 0x0001;
		} while (cx_31 != 0x0000);
		0x0800->wDB5E = 0x0800->wDB5E + 0x0001;
		word16 ax_52 = (word16) (0x0800->wDB5E *u 0x0140);
		si_27 = Mem48[0x0800:0xDB6C:word16] + ax_52;
		di_15 = Mem48[0x0800:0xDB6E:word16] + ax_52;
	} while (0x0800->wDB5E != 0x0006);
	0x0800->wDB5E = 0x0000;
	return 0x0800;
}

void fn1676_0165()
{
	byte Eq_31::*di_21 = &Eq_31::bFFFFD840;
	byte Eq_31::*si_20 = &Eq_31::bFFFFD842;
	byte ah_11 = 0x08;
	do
	{
		word16 cx_22 = 0x013E;
		while (cx_22 != 0x0000)
		{
			0xA000->*di_21 = 0xA000->*si_20;
			si_20 = si_20 + 1;
			di_21 = di_21 + 1;
			cx_22 = cx_22 - 0x0001;
		}
		di_21 = di_21 + 2;
		si_20 = si_20 + 2;
		ah_11 = ah_11 - 0x01;
	} while (ah_11 != 0x00);
	fn1676_0186();
}

void fn1676_0186()
{
	ax.u0 = 0x0800;
	ds = 0x0800;
	si = &Eq_14::uFFFFE055;
	si = 0xE055 + 0x0800->wDB6A;
	ax = Mem0[0x0800:si + 0x0000:word16];
	dx_ax = SEQ(dx, ax);
	al = (byte) ax;
	SCZO = cond(al - 0x00);
	Z = SCZO;
	if (Test(EQ,Z))
	{
		fn1676_0198(ds);
		return;
	}
	else
	{
		SCZO = cond(al - 0x20);
		Z = SCZO;
		if (Test(EQ,Z))
			bx.u0 = 0x0A00;
		else
		{
			SCZO = cond(al - 0x30);
			Z = SCZO;
			if (Test(EQ,Z))
				bx.u0 = 0x00D0;
			else
			{
				SCZO = cond(al - 0x31);
				Z = SCZO;
				if (Test(EQ,Z))
					bx.u0 = 0x00D8;
				else
				{
					SCZO = cond(al - 0x32);
					Z = SCZO;
					if (Test(EQ,Z))
						bx.u0 = 0x00E0;
					else
					{
						SCZO = cond(al - 0x33);
						Z = SCZO;
						if (Test(EQ,Z))
							bx.u0 = 0x00E8;
						else
						{
							SCZO = cond(al - 0x34);
							Z = SCZO;
							if (Test(EQ,Z))
								bx.u0 = 0x00F0;
							else
							{
								SCZO = cond(al - 0x35);
								Z = SCZO;
								if (Test(EQ,Z))
									bx.u0 = 0x00F8;
								else
								{
									SCZO = cond(al - 0x36);
									Z = SCZO;
									if (Test(EQ,Z))
										bx.u0 = 0x0100;
									else
									{
										SCZO = cond(al - 0x37);
										Z = SCZO;
										if (Test(EQ,Z))
											bx.u0 = 0x0108;
										else
										{
											SCZO = cond(al - 0x38);
											Z = SCZO;
											if (Test(EQ,Z))
												bx.u0 = 0x0110;
											else
											{
												SCZO = cond(al - 0x39);
												Z = SCZO;
												if (Test(EQ,Z))
													bx.u0 = 0x0118;
												else
												{
													SCZO = cond(al - 0x3F);
													Z = SCZO;
													if (Test(EQ,Z))
														bx.u0 = 0x0120;
													else
													{
														SCZO = cond(al - 0x21);
														Z = SCZO;
														if (Test(EQ,Z))
															bx.u0 = 0x0128;
														else
														{
															SCZO = cond(al - 0x2E);
															Z = SCZO;
															if (Test(EQ,Z))
																bx.u0 = 0x0130;
															else
															{
																SCZO = cond(al - 0x2C);
																Z = SCZO;
																if (Test(EQ,Z))
																	bx.u0 = 0x0138;
																else
																{
																	ax = ax - 0x0041;
																	ah = 0x00;
																	ax = DPB(ax, ah, 8, 8);
																	dx = 0x0008;
																	dx_ax = 0x0008 *u ax;
																	ax = (word16) dx_ax;
																	SCZO = cond(dx_ax);
																	bx = ax;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		ax.u0 = 0x0800;
		ds = 0x0800;
		si = &Eq_14::uFFFF99C0;
		si = 0x99C0 + 0x0800->wDB60;
		si = si + bx;
		SCZO = cond(si);
		ax.u0 = 0xA000;
		es = 0xA000;
		di = &Eq_31::uFFFFD97E;
		al = 0x00;
		ax = DPB(ax, al, 0, 8);
		cx = si;
		dx = 0xD97E;
		dx_ax = SEQ(dx, ax);
		while (true)
		{
			ah = 0x08;
			ax = DPB(ax, ah, 8, 8);
			dx_ax = DPB(dx_ax, ah, 8, 8);
			do
			{
				v14 = Mem0[0x0800:si + 0x0000:byte];
				Mem0[0xA000:di + 0x0000:byte] = v14;
				si = PTRADD(si,1);
				di = PTRADD(di,1);
				si = PTRADD(si,319);
				di = PTRADD(di,319);
				SCZO = cond(di);
				ah = ah - 0x01;
				ax = DPB(ax, ah, 8, 8);
				dx_ax = DPB(dx_ax, ah, 8, 8);
				SZO = cond(ah);
				Z = SZO;
			} while (Test(NE,Z));
			si = cx;
			di = &Eq_31::uFFFFD97E;
			si = PTRADD(si,1);
			di = &Eq_31::uFFFFD97F;
			SCZO = cond(al - 0x01);
			Z = SCZO;
			if (Test(EQ,Z))
			{
				fn1676_0287();
				return;
			}
			si = cx;
			si = PTRADD(si,1);
			SZO = cond(si);
			fn1676_0287();
			al = al + 0x01;
			ax = DPB(ax, al, 0, 8);
			dx_ax = DPB(dx_ax, al, 0, 8);
			SZO = cond(al);
		}
	}
fn1676_0186_exit:
}

void fn1676_0198(Eq_215 * ds)
{
	sp = fp;
	ds->wDB60 = 0x0000;
	ds->wDB6A = 0x0000;
	ds->wDB60 = 0x0000;
	ds->wDB6A = 0x0000;
	fn1676_0186();
	return;
}

void fn1676_0287()
{
fn1676_0287_entry:
l1676_0287:
fn1676_0287_exit:
}

void fn1676_029E(Eq_409 * ds)
{
	while (true)
	{
		if (ds->bDB5D == 0x01)
		{
			__outb(0x03C8, 0xFE);
			byte al_28 = ds->bDB5C;
			__outb(0x03C9, al_28);
			__outb(0x03C9, al_28);
			__outb(0x03C9, al_28);
			if (ds->bDB5C != 0x0F)
			{
				ds->bDB5C = ds->bDB5C - 0x01;
				return;
			}
			else
			{
				ds->bDB5D = 0x00;
				continue;
			}
fn1676_029E_exit:
		}
		__outb(0x03C8, 0xFE);
		byte al_18 = ds->bDB5C;
		__outb(0x03C9, al_18);
		__outb(0x03C9, al_18);
		__outb(0x03C9, al_18);
		if (ds->bDB5C != 0x3F)
		{
			ds->bDB5C = ds->bDB5C + 0x01;
			return;
		}
		ds->bDB5D = 0x01;
	}
}

void fn1676_02E7()
{
	0x0800->wDB64 = (0x0800->*0x0800->ptrDB68).wFFFFD8C0 + 0x0064;
	0x0800->wDB62 = (0x0800->*0x0800->ptrDB66).wFFFFD920 + 0x0044;
	if (0x0800->ptrDB68 == &Eq_14::t005E)
		0x0800->ptrDB68 = &Eq_14::b0000;
	else
	{
		Mem31[0x0800:0xDB68:word16] = Mem14[0x0800:0xDB68:word16] + 0x0001;
		Mem33[0x0800:0xDB68:word16] = Mem31[0x0800:0xDB68:word16] + 0x0001;
	}
	if (0x0800->ptrDB66 == &Eq_14::t00FE)
	{
		0x0800->ptrDB66 = &Eq_14::b0000;
		return;
	}
	else
	{
		Mem23[0x0800:0xDB66:word16] = Mem14[0x0800:0xDB66:word16] + 0x0001;
		Mem25[0x0800:0xDB66:word16] = Mem23[0x0800:0xDB66:word16] + 0x0001;
		0x0800->wDB72 = 0x0000;
		return;
	}
}

void fn1676_0340()
{
	fn1676_0061();
	fn1676_006F();
	fn1676_0198(fn1676_0084());
	0x0800->ptrDB66 = &Eq_14::b0000;
	0x0800->ptrDB68 = &Eq_14::b0000;
	__outb(0x03C8, 0xFE);
	__outb(0x03C9, 0x00);
	__outb(0x03C9, 0x00);
	__outb(0x03C9, 0x00);
	return;
}

void fn1676_0365()
{
	do
		;
	while ((__inb(0x03DA) & 0x08) == 0x00);
	return;
}

void fn1676_036E(Eq_570 * ds)
{
	__outb(0x03C8, 0xFD);
	byte al_8 = ds->bDB7C;
	__outb(0x03C9, al_8);
	__outb(0x03C9, al_8);
	__outb(0x03C9, al_8);
	return;
}

Eq_570 * fn1676_037C(Eq_570 * ds)
{
	if (ds->bDB77 == 0x01)
		if (ds->bDB7C != 0x00)
		{
			fn1676_036E(ds);
			ds->bDB7C = ds->bDB7C - 0x01;
			return ds;
		}
		else
			return fn1676_03BF();
	else if (ds->bDB7C != 0x3F)
	{
		ds->bDB7C = ds->bDB7C + 0x01;
		fn1676_036E(ds);
		return ds;
	}
	else if (ds->bDB76 != 0xFF)
	{
		ds->bDB76 = ds->bDB76 + 0x01;
		return ds;
	}
	else
	{
		ds->bDB77 = 0x01;
		ds->bDB76 = 0x00;
		return ds;
	}
}

Eq_628 * fn1676_03BF()
{
	word16 bx_15;
	word16 ax_7 = Mem0[0x0800:Mem0[0x0800:0xDB78:word16] + 0xDB7D:word16];
	if ((byte) ax_7 == 0x20)
		bx_15 = 0x1400;
	else
		bx_15 = DPB(ax_7 - 0x0001, 0x00, 8, 8);
	byte Eq_14::*si_20 = bx_15 + 0xADC0;
	byte Eq_31::*di_30 = (word16) (DPB(0xA000, 0x0800->bDB7B, 0, 8) *u 0x0008) + 0x0F00;
	word16 dx_32 = 0x0010;
	do
	{
		word16 cx_41 = 0x0008;
		while (cx_41 != 0x0000)
		{
			0xA000->*di_30 = 0x0800->*si_20;
			si_20 = si_20 + 1;
			di_30 = di_30 + 1;
			cx_41 = cx_41 - 0x0001;
		}
		si_20 = si_20 + 312;
		di_30 = di_30 + 312;
		dx_32 = dx_32 - 0x0001;
	} while (dx_32 != 0x0000);
	if (0x0800->bDB7B != 0x27)
	{
		0x0800->bDB7B = 0x0800->bDB7B + 0x01;
		Mem64[0x0800:0xDB78:word16] = Mem62[0x0800:0xDB78:word16] + 0x0001;
		return 0x0800;
	}
	else
	{
		0x0800->bDB7B = 0x00;
		0x0800->bDB77 = 0x00;
		if (0x0800->tDB78 <= 0x04B0)
		{
			Mem71[0x0800:0xDB78:word16] = Mem67[0x0800:0xDB78:word16] + 0x0001;
			return 0x0800;
		}
		else
		{
			0x0800->tDB78.u0 = 0x0000;
			return 0x0800;
		}
	}
}

void fn1676_0442(Eq_718 * es)
{
	word16 bx_5;
	msdos_resize_memory_block(es, 0x186A, out bx_5);
	fn1676_0068();
	word16 cx_10 = 0x0064;
	do
	{
		fn1676_0365();
		cx_10 = cx_10 - 0x0001;
	} while (cx_10 != 0x0000);
	fn1676_0068();
	fn1676_0340();
	__outb(0x21, 0x5E);
	do
	{
		fn1676_02E7();
		Eq_570 * ds_21 = fn1676_0104();
		fn1676_0365();
		fn1676_0165();
		fn1676_029E(fn1676_037C(ds_21));
		fn1676_009B();
	} while (__inb(0x60) != 0x01);
	__outb(0x21, 0x00);
	fn1676_0068();
	msdos_display_string(0x0800, 0xE6B4);
	msdos_terminate(0x00);
}

