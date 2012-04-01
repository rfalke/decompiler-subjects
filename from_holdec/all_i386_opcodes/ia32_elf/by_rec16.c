/*	This file was automatically created by
 *	Reverse Engineering Compiler 1.6 (C) Giampiero Caprino (Mar 31 2002)
 *	Input file: './from_holdec/all_i386_opcodes/ia32_elf/subject.exe'
 */

/*	Procedure: 0x080482CC - 0x080482FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_init()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L080482d8();
    (restore)ebx;
    if(*(ebx + 9388 + -4) != 0) {
        L0804830C();
    }
    frame_dummy();
    __do_global_ctors_aux();
    (restore)eax;
}

/*	Procedure: 0x080482FC - 0x0804830B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080482FC()
{



    (save) *L0804A788;
    goto ( *L0804a78c);
    *eax = *eax + al;
    *eax = *eax + al;
}

/* DEST BLOCK NOT FOUND: 08048317 -> 080482fc */
/*	Procedure: 0x0804830C - 0x0804831B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804830C()
{



    goto ( *L0804a790);
    (save)0;
    goto L080482FC;
}

/* DEST BLOCK NOT FOUND: 08048327 -> 080482fc */
/*	Procedure: 0x0804831C - 0x0804832B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804831C()
{



    goto ( *L0804a794);
    (save)8;
    goto L080482FC;
}

/* DEST BLOCK NOT FOUND: 08048337 -> 080482fc */
/*	Procedure: 0x0804832C - 0x0804833B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L0804832C()
{



    goto ( *L0804a798);
    (save)16;
    goto L080482FC;
}

/*	Procedure: 0x08048340 - 0x0804836F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_start()
{



    ebp = 0;
    (restore)esi;
    ecx = esp;
    esp = esp & -16;
    (save)eax;
    (save)esp;
    (save)edx;
    (save)__libc_csu_fini;
    (save)__libc_csu_init;
    (save)ecx;
    (save)esi;
    (save)main;
    L0804831C();
    asm("hlt");
}

/*	Procedure: 0x08048370 - 0x080483C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_dtors_aux()
{
	/* unknown */ void  ebx;



    if(completed.5978 == 0) {
        eax = dtor_idx.5980;
        ebx = (__DTOR_END__ - __DTOR_LIST__ >> 2) - 1;
        do {
            eax = eax + 1;
            dtor_idx.5980 = eax;
            *(dtor_idx.5980 * 4 + __DTOR_LIST__)();
            eax = dtor_idx.5980;
        } while(dtor_idx.5980 < ebx);
        completed.5978 = 1;
    }
}

/*	Procedure: 0x080483C5 - 0x080483CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483C5()
{



}

/*	Procedure: 0x080483D0 - 0x080483F2
 *	Argument size: -24
 *	Local size: 24
 *	Save regs size: 0
 */

frame_dummy()
{



    eax = __JCR_LIST__;
    if(__JCR_LIST__ != 0) {
        eax = 0;
        if(0 != 0) {
            *esp = __JCR_LIST__;
            eax = *L00000000();
        }
    }
}

/*	Procedure: 0x080483F3 - 0x080483F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080483F3()
{



}

/*	Procedure: 0x080483F4 - 0x080483F5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

aaa()
{



    asm("aaa");
}

/*	Procedure: 0x080483F6 - 0x080483F8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

aad1()
{



    asm("aad");
}

/*	Procedure: 0x080483F9 - 0x080483FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

aad2()
{



    asm("aad 0xf");
}

/*	Procedure: 0x080483FC - 0x080483FE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

aam1()
{



    asm("aam");
}

/*	Procedure: 0x080483FF - 0x08048401
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

aam2()
{



    asm("aam 0xf");
}

/*	Procedure: 0x08048402 - 0x08048403
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

aas()
{



    asm("aas");
}

/*	Procedure: 0x08048404 - 0x08048406
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

adc1()
{



    asm("adc al,0x10");
}

/*	Procedure: 0x08048407 - 0x08048409
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

adc1a()
{



    asm("adc al,0x10");
}

/*	Procedure: 0x0804840A - 0x0804840E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

adc2()
{



    asm("adc ax,+0x10");
}

/*	Procedure: 0x0804840F - 0x08048413
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

adc2a()
{



    asm("adc ax,0x10");
}

/*	Procedure: 0x08048414 - 0x08048417
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

adc3()
{



    asm("adc eax,+0x10");
}

/*	Procedure: 0x08048418 - 0x0804841D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

adc3a()
{



    asm("adc eax,0x10");
}

/*	Procedure: 0x0804841E - 0x08048421
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

adc4()
{



    asm("adc eax,[ebp+0x8]");
}

/*	Procedure: 0x08048422 - 0x08048424
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

add1()
{



    return(al + 2);
}

/*	Procedure: 0x08048425 - 0x08048427
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

add2()
{



    return(al + 254);
}

/*	Procedure: 0x08048428 - 0x0804842C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

add3()
{



    return(ax + 2);
}

/*	Procedure: 0x0804842D - 0x08048431
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

add4()
{



    return(ax + 65534);
}

/*	Procedure: 0x08048432 - 0x08048437
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

add5()
{



    return(eax + 2);
}

/*	Procedure: 0x08048438 - 0x0804843D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

add6()
{



    return(eax + -2);
}

/*	Procedure: 0x0804843E - 0x08048441
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

add7()
{



    return(eax + *(ebp + 8));
}

/*	Procedure: 0x08048442 - 0x08048444
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

and1()
{



    return(al & 2);
}

/*	Procedure: 0x08048445 - 0x08048447
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

and2()
{



    return(al & 254);
}

/*	Procedure: 0x08048448 - 0x0804844C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

and3()
{



    return(ax & 2);
}

/*	Procedure: 0x0804844D - 0x08048451
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

and4()
{



    return(ax & 65534);
}

/*	Procedure: 0x08048452 - 0x08048457
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

and5()
{



    return(eax & 2);
}

/*	Procedure: 0x08048458 - 0x0804845D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

and6()
{



    return(eax & -2);
}

/*	Procedure: 0x0804845E - 0x08048461
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

and7()
{



    return(eax & *(ebp + 8));
}

/*	Procedure: 0x08048462 - 0x08048464
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

arpl()
{



    asm("arpl bx,ax");
}

/*	Procedure: 0x08048465 - 0x08048469
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bound1()
{



    asm("bound ax,[bx]");
}

/*	Procedure: 0x0804846A - 0x0804846C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bound2()
{



    asm("bound eax,[ebx]");
}

/*	Procedure: 0x0804846D - 0x08048472
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bsf1()
{



    asm("bsf ax,[bx]");
}

/*	Procedure: 0x08048473 - 0x08048476
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bsf2()
{



    asm("bsf eax,[ebx]");
}

/*	Procedure: 0x08048477 - 0x0804847B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bsf3()
{



    asm("bsf eax,[bx]");
}

/*	Procedure: 0x0804847C - 0x08048480
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bsf4()
{



    asm("bsf ax,[ebx]");
}

/*	Procedure: 0x08048481 - 0x08048486
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bsr1()
{



    asm("bsr ax,[bx]");
}

/*	Procedure: 0x08048487 - 0x0804848A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bsr2()
{



    asm("bsr eax,[ebx]");
}

/*	Procedure: 0x0804848B - 0x0804848F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bsr3()
{



    asm("bsr eax,[bx]");
}

/*	Procedure: 0x08048490 - 0x08048494
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bsr4()
{



    asm("bsr ax,[ebx]");
}

/*	Procedure: 0x08048495 - 0x0804849A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bt1()
{



    asm("bt ax,0x4");
}

/*	Procedure: 0x0804849B - 0x0804849F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bt2()
{



    asm("bt ax,bx");
}

/*	Procedure: 0x080484A0 - 0x080484A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bt3()
{



    asm("bt eax,0x1f");
}

/*	Procedure: 0x080484A5 - 0x080484A8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bt4()
{



    asm("bt eax,ebx");
}

/*	Procedure: 0x080484A9 - 0x080484AC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bt5()
{



    asm("bt [eax],ebx");
}

/*	Procedure: 0x080484AD - 0x080484B2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

btc1()
{



    asm("btc ax,0x4");
}

/*	Procedure: 0x080484B3 - 0x080484B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

btc2()
{



    asm("btc ax,bx");
}

/*	Procedure: 0x080484B8 - 0x080484BC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

btc3()
{



    asm("btc eax,0x1f");
}

/*	Procedure: 0x080484BD - 0x080484C0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

btc4()
{



    asm("btc eax,ebx");
}

/*	Procedure: 0x080484C1 - 0x080484C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

btc5()
{



    asm("btc [eax],ebx");
}

/*	Procedure: 0x080484C5 - 0x080484CA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

btr1()
{



    asm("btr ax,0x4");
}

/*	Procedure: 0x080484CB - 0x080484CF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

btr2()
{



    asm("btr ax,bx");
}

/*	Procedure: 0x080484D0 - 0x080484D4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

btr3()
{



    asm("btr eax,0x1f");
}

/*	Procedure: 0x080484D5 - 0x080484D8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

btr4()
{



    asm("btr eax,ebx");
}

/*	Procedure: 0x080484D9 - 0x080484DC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

btr5()
{



    asm("btr [eax],ebx");
}

/*	Procedure: 0x080484DD - 0x080484E2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bts1()
{



    asm("bts ax,0x4");
}

/*	Procedure: 0x080484E3 - 0x080484E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bts2()
{



    asm("bts ax,bx");
}

/*	Procedure: 0x080484E8 - 0x080484EC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bts3()
{



    asm("bts eax,0x1f");
}

/*	Procedure: 0x080484ED - 0x080484F0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bts4()
{



    asm("bts eax,ebx");
}

/*	Procedure: 0x080484F1 - 0x080484F4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

bts5()
{



    asm("bts [eax],ebx");
}

/*	Procedure: 0x080484F5 - 0x080484FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call1()
{



    return(call1());
}

/*	Procedure: 0x080484FB - 0x08048500
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call2()
{



    return(call2());
}

/*	Procedure: 0x08048501 - 0x08048506
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call3()
{



    return(L0804832C());
}

/*	Procedure: 0x08048507 - 0x0804850C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call4()
{



    return(L00001234());
}

/*	Procedure: 0x0804850D - 0x0804850F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call5()
{



    return(*eax());
}

/*	Procedure: 0x08048510 - 0x08048512
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

call6()
{



    return(*eax());
}

/*	Procedure: 0x08048513 - 0x08048514
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cbw1()
{



    asm("cwde");
}

/*	Procedure: 0x08048515 - 0x08048517
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cbw2()
{



    asm("cbw");
}

/*	Procedure: 0x08048518 - 0x08048519
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

clc()
{



    asm("clc");
}

/*	Procedure: 0x0804851A - 0x0804851B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cld()
{



    asm("cld");
}

/*	Procedure: 0x0804851C - 0x0804851D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cli()
{



    asm("cli");
}

/*	Procedure: 0x0804851E - 0x08048520
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

clts()
{



    asm("clts");
}

/*	Procedure: 0x08048521 - 0x08048522
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmc()
{



    asm("cmc");
}

/*	Procedure: 0x08048523 - 0x08048525
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmp1()
{



    al :: 2;
}

/*	Procedure: 0x08048526 - 0x08048528
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmp2()
{



    al :: 254;
}

/*	Procedure: 0x08048529 - 0x0804852D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmp3()
{



    ax :: 2;
}

/*	Procedure: 0x0804852E - 0x08048532
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmp4()
{



    ax :: 65534;
}

/*	Procedure: 0x08048533 - 0x08048538
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmp5()
{



    eax :: 2;
}

/*	Procedure: 0x08048539 - 0x0804853E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmp6()
{



    eax :: -2;
}

/*	Procedure: 0x0804853F - 0x08048542
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmp7()
{



    eax :: *(ebp + 8);
}

/*	Procedure: 0x08048543 - 0x08048548
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmp8()
{



    *(eax + ebp + 7) :: 100;
}

/*	Procedure: 0x08048549 - 0x0804854A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmps1()
{



    asm("cmpsb");
}

/*	Procedure: 0x0804854B - 0x0804854D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmps2()
{



    asm("a16 cmpsb");
}

/*	Procedure: 0x0804854E - 0x0804854F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmps3()
{



    asm("cmpsd");
}

/*	Procedure: 0x08048550 - 0x08048552
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmps4()
{



    asm("cmpsw");
}

/*	Procedure: 0x08048553 - 0x08048556
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmps5()
{



    asm("a16 cmpsw");
}

/*	Procedure: 0x08048557 - 0x08048559
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cmps6()
{



    asm("a16 cmpsd");
}

/*	Procedure: 0x0804855A - 0x0804855B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cwd1()
{



    asm("cdq");
}

/*	Procedure: 0x0804855C - 0x0804855E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

cwd2()
{



    asm("cwd");
}

/*	Procedure: 0x0804855F - 0x08048560
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

daa()
{



    asm("daa");
}

/*	Procedure: 0x08048561 - 0x08048562
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

das()
{



    asm("das");
}

/*	Procedure: 0x08048563 - 0x08048565
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

dec1()
{



    return(al - 1);
}

/*	Procedure: 0x08048566 - 0x08048568
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

dec2()
{



    return(ax - 1);
}

/*	Procedure: 0x08048569 - 0x0804856B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

dec3()
{



    return(ah - 1);
}

/*	Procedure: 0x0804856C - 0x0804856D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

dec4()
{



    return(eax - 1);
}

/*	Procedure: 0x0804856E - 0x08048570
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

dec5b()
{



    *eax = *eax - 1;
}

/*	Procedure: 0x08048571 - 0x08048574
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

dec5w()
{



    *eax = *eax - 1;
}

/*	Procedure: 0x08048575 - 0x08048577
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

dec5l()
{



    *eax = *eax - 1;
}

/*	Procedure: 0x08048578 - 0x0804857A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

div1()
{



    edx = bl / bl % bl / bl;
}

/*	Procedure: 0x0804857B - 0x0804857E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

div2()
{



    dx = bx / bx % bx / bx;
}

/*	Procedure: 0x0804857F - 0x08048581
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

div3()
{



    edx = ebx / ebx % ebx / ebx;
}

/*	Procedure: 0x08048582 - 0x08048586
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

enter1()
{



    asm("enter 0x1234,0x0");
}

/*	Procedure: 0x08048587 - 0x0804858B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

enter2()
{



    asm("enter 0x1234,0x1");
}

/*	Procedure: 0x0804858C - 0x08048590
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

enter3()
{



    asm("enter 0x1234,0x55");
}

/*	Procedure: 0x08048591 - 0x08048592
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

hlt()
{



    asm("hlt");
}

/*	Procedure: 0x08048593 - 0x08048595
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

idiv1()
{



    edx = bl / bl % bl / bl;
}

/*	Procedure: 0x08048596 - 0x08048599
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

idiv2()
{



    dx = bx / bx % bx / bx;
}

/*	Procedure: 0x0804859A - 0x0804859C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

idiv3()
{



    edx = ebx / ebx % ebx / ebx;
}

/*	Procedure: 0x0804859D - 0x0804859F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

imul_one_op1()
{



    asm("imul bl");
}

/*	Procedure: 0x080485A0 - 0x080485A3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

imul_one_op2()
{



    asm("imul bx");
}

/*	Procedure: 0x080485A4 - 0x080485A6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

imul_one_op3()
{



    asm("imul ebx");
}

/*	Procedure: 0x080485A7 - 0x080485AA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

imul_one_op4()
{



    asm("imul word [ebx]");
}

/*	Procedure: 0x080485AB - 0x080485AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

imul_two_op1()
{



    bx = bx * cx;
}

/*	Procedure: 0x080485B0 - 0x080485B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

imul_two_op2()
{



    ebx = ebx * ecx;
}

/*	Procedure: 0x080485B4 - 0x080485B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

imul_two_op3()
{



    *ebx = *ebx * ecx;
}

/*	Procedure: 0x080485B8 - 0x080485BC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

imul_three_op1()
{



    10 = bx * cx;
}

/*	Procedure: 0x080485BD - 0x080485C0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

imul_three_op2()
{



    10 = ebx * ecx;
}

/*	Procedure: 0x080485C1 - 0x080485C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

imul_three_op3()
{



    10 = *ebx * ecx;
}

/*	Procedure: 0x080485C5 - 0x080485C7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

in1()
{



    asm("in al,0x12");
}

/*	Procedure: 0x080485C8 - 0x080485CB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

in2()
{



    asm("in ax,0x12");
}

/*	Procedure: 0x080485CC - 0x080485CE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

in3()
{



    asm("in eax,0x12");
}

/*	Procedure: 0x080485CF - 0x080485D0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

in4()
{



    asm("in al,dx");
}

/*	Procedure: 0x080485D1 - 0x080485D3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

in5()
{



    asm("in ax,dx");
}

/*	Procedure: 0x080485D4 - 0x080485D5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

in6()
{



    asm("in eax,dx");
}

/*	Procedure: 0x080485D6 - 0x080485D8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

inc1()
{



    return(al + 1);
}

/*	Procedure: 0x080485D9 - 0x080485DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

inc2()
{



    return(ax + 1);
}

/*	Procedure: 0x080485DC - 0x080485DE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

inc3()
{



    return(ah + 1);
}

/*	Procedure: 0x080485DF - 0x080485E0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

inc4()
{



    return(eax + 1);
}

/*	Procedure: 0x080485E1 - 0x080485E3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

inc5b()
{



    *eax = *eax + 1;
}

/*	Procedure: 0x080485E4 - 0x080485E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

inc5w()
{



    *eax = *eax + 1;
}

/*	Procedure: 0x080485E8 - 0x080485EA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

inc5l()
{



    *eax = *eax + 1;
}

/*	Procedure: 0x080485EB - 0x080485EC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ins1()
{



    asm("insb");
}

/*	Procedure: 0x080485ED - 0x080485EF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ins2()
{



    asm("insw");
}

/*	Procedure: 0x080485F0 - 0x080485F1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ins3()
{



    asm("insd");
}

/*	Procedure: 0x080485F2 - 0x080485F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

int1()
{



    asm("int3");
}

/*	Procedure: 0x080485F4 - 0x080485F6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

int2()
{



    asm("int 0x12");
}

/*	Procedure: 0x080485F7 - 0x080485F8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

int3()
{



    asm("into");
}

/*	Procedure: 0x080485F9 - 0x080485F9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

iret1()
{



    asm("iret");
}

/*	Procedure: 0x080485FA - 0x080485FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485FA()
{



}

/*	Procedure: 0x080485FB - 0x080485FC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

iret2()
{



    asm("iretw");
}

/*	Procedure: 0x080485FD - 0x080485FD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080485FD()
{



}

/*	Procedure: 0x080485FE - 0x08048604
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_0()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x08048605 - 0x0804860B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_1()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x0804860C - 0x08048612
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_2()
{



    if(al >= 2) {
    }
}

/*	Procedure: 0x08048613 - 0x08048619
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_3()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x0804861A - 0x08048620
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_4()
{



    if(al != 2) {
    }
}

/*	Procedure: 0x08048621 - 0x08048627
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_5()
{



    if(al == 2) {
    }
}

/*	Procedure: 0x08048628 - 0x0804862E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_6()
{



    if(al > 2) {
    }
}

/*	Procedure: 0x0804862F - 0x08048635
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_7()
{



    if(al <= 2) {
    }
}

/*	Procedure: 0x08048636 - 0x0804863C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_8()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x0804863D - 0x08048643
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_9()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x08048644 - 0x0804864A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_a()
{



    al :: 2;
    asm("jpe 0x8048649");
}

/*	Procedure: 0x0804864B - 0x08048651
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_b()
{



    al :: 2;
    asm("jpo 0x8048650");
}

/*	Procedure: 0x08048652 - 0x08048658
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_c()
{



    if(al >= 2) {
    }
}

/*	Procedure: 0x08048659 - 0x0804865F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_d()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x08048660 - 0x08048666
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_e()
{



    if(al > 2) {
    }
}

/*	Procedure: 0x08048667 - 0x0804866D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_short_with_code_f()
{



    if(al <= 2) {
    }
}

/*	Procedure: 0x0804866E - 0x08048678
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_0()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x08048679 - 0x08048683
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_1()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x08048684 - 0x0804868E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_2()
{



    if(al >= 2) {
    }
}

/*	Procedure: 0x0804868F - 0x08048699
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_3()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x0804869A - 0x080486A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_4()
{



    if(al != 2) {
    }
}

/*	Procedure: 0x080486A5 - 0x080486AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_5()
{



    if(al == 2) {
    }
}

/*	Procedure: 0x080486B0 - 0x080486BA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_6()
{



    if(al > 2) {
    }
}

/*	Procedure: 0x080486BB - 0x080486C5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_7()
{



    if(al <= 2) {
    }
}

/*	Procedure: 0x080486C6 - 0x080486D0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_8()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x080486D1 - 0x080486DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_9()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x080486DC - 0x080486E6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_a()
{



    al :: 2;
    asm("jpe 0x80486e5");
}

/*	Procedure: 0x080486E7 - 0x080486F1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_b()
{



    al :: 2;
    asm("jpo 0x80486f0");
}

/*	Procedure: 0x080486F2 - 0x080486FC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_c()
{



    if(al >= 2) {
    }
}

/*	Procedure: 0x080486FD - 0x08048707
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_d()
{



    if(al < 2) {
    }
}

/*	Procedure: 0x08048708 - 0x08048712
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_e()
{



    if(al > 2) {
    }
}

/*	Procedure: 0x08048713 - 0x0804871D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcc_long_with_code_f()
{



    if(al <= 2) {
    }
}

/*	Procedure: 0x0804871E - 0x08048723
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jcxz()
{



    asm("a16 jecxz 0x8048722");
}

/*	Procedure: 0x08048724 - 0x08048728
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jecxz()
{



    asm("jecxz 0x8048727");
}

/*	Procedure: 0x08048729 - 0x0804872D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jmp1()
{



}

/*	Procedure: 0x0804872E - 0x08048735
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jmp2()
{



}

/*	Procedure: 0x08048736 - 0x08048738
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

jmp3()
{



    goto ( *ebx);
}

/*	Procedure: 0x08048739 - 0x0804873A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lahf()
{



    asm("lahf");
}

/*	Procedure: 0x0804873B - 0x0804873E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lar()
{



    asm("lar ebx,eax");
}

/*	Procedure: 0x0804873F - 0x08048742
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lea1()
{



    return(ebx + 66);
}

/*	Procedure: 0x08048743 - 0x08048747
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lea2()
{



    return(ebx + 66);
}

/*	Procedure: 0x08048748 - 0x08048749
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

leave1()
{



    esp = ebp;
    (restore)ebp;
}

/*	Procedure: 0x0804874A - 0x0804874C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

leave2()
{



    asm("o16 leave");
}

/*	Procedure: 0x0804874D - 0x08048750
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lgdtl()
{



    asm("lgdt [eax]");
}

/*	Procedure: 0x08048751 - 0x08048754
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lidtl()
{



    asm("lidt [eax]");
}

/*	Procedure: 0x08048755 - 0x08048757
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lds1()
{



    asm("lds edx,[ecx]");
}

/*	Procedure: 0x08048758 - 0x0804875B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lds2()
{



    asm("lds dx,[ecx]");
}

/*	Procedure: 0x0804875C - 0x0804875E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

les1()
{



    asm("les edx,[ecx]");
}

/*	Procedure: 0x0804875F - 0x08048762
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

les2()
{



    asm("les dx,[ecx]");
}

/*	Procedure: 0x08048763 - 0x08048766
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lfs1()
{



    asm("lfs edx,[ecx]");
}

/*	Procedure: 0x08048767 - 0x0804876B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lfs2()
{



    asm("lfs dx,[ecx]");
}

/*	Procedure: 0x0804876C - 0x0804876F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lgs1()
{



    asm("lgs edx,[ecx]");
}

/*	Procedure: 0x08048770 - 0x08048774
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lgs2()
{



    asm("lgs dx,[ecx]");
}

/*	Procedure: 0x08048775 - 0x08048778
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lss1()
{



    asm("lss edx,[ecx]");
}

/*	Procedure: 0x08048779 - 0x0804877D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lss2()
{



    asm("lss dx,[ecx]");
}

/*	Procedure: 0x0804877E - 0x08048781
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lldt()
{



    asm("lldt [eax]");
}

/*	Procedure: 0x08048782 - 0x08048785
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lmsw()
{



    asm("lmsw [eax]");
}

/*	Procedure: 0x08048786 - 0x08048787
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lods1()
{



    al = *esi;
    esi = esi + 1;
}

/*	Procedure: 0x08048788 - 0x0804878A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lods2()
{



    eax = *esi;
    esi = esi + 4;
}

/*	Procedure: 0x0804878B - 0x0804878C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lods3()
{



    asm("lodsd");
}

/*	Procedure: 0x0804878D - 0x08048790
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

loop_type_0()
{



    asm("loopne 0x804878d");
}

/*	Procedure: 0x08048791 - 0x08048795
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

loop_type_0w()
{



    asm("loopne 0x8048791,cx");
}

/*	Procedure: 0x08048796 - 0x08048799
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

loop_type_1()
{



    asm("loope 0x8048796");
}

/*	Procedure: 0x0804879A - 0x0804879E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

loop_type_1w()
{



    asm("loope 0x804879a,cx");
}

/*	Procedure: 0x0804879F - 0x080487A2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

loop_type_2()
{



    asm("loop 0x804879f");
}

/*	Procedure: 0x080487A3 - 0x080487A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

loop_type_2w()
{



    asm("loop 0x80487a3,cx");
}

/*	Procedure: 0x080487A8 - 0x080487AB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

lsl()
{



    ebx = ebx << *eax;
}

/*	Procedure: 0x080487AC - 0x080487AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ltr()
{



    asm("ltr bx");
}

/*	Procedure: 0x080487B0 - 0x080487B2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_b1()
{



    cl = bh;
}

/*	Procedure: 0x080487B3 - 0x080487B5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_b2()
{



    cl = al;
}

/*	Procedure: 0x080487B6 - 0x080487B8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_b3()
{



    return(cl);
}

/*	Procedure: 0x080487B9 - 0x080487BB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_b4()
{



    cl = 16;
}

/*	Procedure: 0x080487BC - 0x080487BE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_b5()
{



    return(16);
}

/*	Procedure: 0x080487BF - 0x080487C1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_b6()
{



    *ebx = ah;
}

/*	Procedure: 0x080487C2 - 0x080487C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_b7()
{



    return(*ebx);
}

/*	Procedure: 0x080487C5 - 0x080487C8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_w1()
{



    cx = ax;
}

/*	Procedure: 0x080487C9 - 0x080487CD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_w2()
{



    return(16);
}

/*	Procedure: 0x080487CE - 0x080487D1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_w3()
{



    *ebx = ax;
}

/*	Procedure: 0x080487D2 - 0x080487D5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_w4()
{



    return(*ebx);
}

/*	Procedure: 0x080487D6 - 0x080487D8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_l1()
{



    ecx = eax;
}

/*	Procedure: 0x080487D9 - 0x080487DE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_l2()
{



    return(16);
}

/*	Procedure: 0x080487DF - 0x080487E1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_l3()
{



    *ebx = eax;
}

/*	Procedure: 0x080487E2 - 0x080487E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_l4()
{



    return(*ebx);
}

/*	Procedure: 0x080487E5 - 0x080487E8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_from_cr()
{



    return(cr4);
}

/*	Procedure: 0x080487E9 - 0x080487EC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_to_cr()
{



    cr4 = eax;
}

/*	Procedure: 0x080487ED - 0x080487F0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_from_dr()
{



    asm("Unknown opcode 0x0f");
    return(eax & esp);
}

/*	Procedure: 0x080487F1 - 0x080487F4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_to_dr()
{



    asm("Unknown opcode 0x0f");
    esp = esp & eax;
}

/*	Procedure: 0x080487F5 - 0x080487F8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_from_tr()
{



    return(tr6);
}

/*	Procedure: 0x080487F9 - 0x080487FC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mov_to_tr()
{



    tr6 = eax;
}

/*	Procedure: 0x080487FD - 0x080487FE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

movs1()
{



    *edi = *esi;
    edi = edi + 1;
    esi = esi + 1;
}

/*	Procedure: 0x080487FF - 0x08048801
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

movs2()
{



    *edi = *esi;
    edi = edi + 4;
    esi = esi + 4;
}

/*	Procedure: 0x08048802 - 0x08048803
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

movs3()
{



    *edi = *esi;
    edi = edi + 4;
    esi = esi + 4;
}

/*	Procedure: 0x08048804 - 0x08048808
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

movsx1()
{



    cx = al;
}

/*	Procedure: 0x08048809 - 0x0804880C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

movsx2()
{



    ecx = ax;
}

/*	Procedure: 0x0804880D - 0x08048810
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

movsx3()
{



    ecx = al;
}

/*	Procedure: 0x08048811 - 0x08048815
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

movzx1()
{



    cx = al & 255;
}

/*	Procedure: 0x08048816 - 0x08048819
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

movzx2()
{



    ecx = ax & 65535;
}

/*	Procedure: 0x0804881A - 0x0804881D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

movzx3()
{



    ecx = al & 255;
}

/*	Procedure: 0x0804881E - 0x08048820
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mul1()
{



    asm("mul bl");
}

/*	Procedure: 0x08048821 - 0x08048824
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mul2()
{



    asm("mul bx");
}

/*	Procedure: 0x08048825 - 0x08048827
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

mul3()
{



    asm("mul ebx");
}

/*	Procedure: 0x08048828 - 0x0804882A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

neg1()
{



    bl = ~bl;
}

/*	Procedure: 0x0804882B - 0x0804882E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

neg2()
{



    bx = ~bx;
}

/*	Procedure: 0x0804882F - 0x08048831
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

neg3()
{



    ebx = ~ebx;
}

/*	Procedure: 0x08048832 - 0x08048833
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

nop1()
{



}

/*	Procedure: 0x08048834 - 0x08048836
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

nop2()
{



    asm("o16 nop");
}

/*	Procedure: 0x08048837 - 0x0804883A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

nop3()
{



    asm("Unknown opcode 0x0f");
    (restore)ds;
    bl = bl + al;
}

/*	Procedure: 0x0804883B - 0x0804883F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

nop4()
{



    asm("Unknown opcode 0x0f");
    (restore)ds;
    bl = bl + eax + 1;
}

stack space not deallocated on return
/*	Procedure: 0x08048840 - 0x08048845
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

nop5()
{



    asm("Unknown opcode 0x0f");
    (restore)ds;
    esp = esp + 1;
    *eax = *eax + al;
}

stack space not deallocated on return
/*	Procedure: 0x08048846 - 0x0804884C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

nop6()
{



    asm("Unknown opcode 0x66");
    asm("Unknown opcode 0x0f");
    (restore)ds;
    esp = esp + 1;
    *eax = *eax + al;
}

stack space not deallocated on return
/*	Procedure: 0x0804884D - 0x08048854
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

nop7()
{



    asm("Unknown opcode 0x0f");
    (restore)ds;
    *eax = *eax + al;
}

/*	Procedure: 0x08048855 - 0x08048857
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

not1()
{



    bl = !bl;
}

/*	Procedure: 0x08048858 - 0x0804885B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

not2()
{



    bx = !bx;
}

/*	Procedure: 0x0804885C - 0x0804885E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

not3()
{



    ebx = !ebx;
}

/*	Procedure: 0x0804885F - 0x08048861
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

or1()
{



    return(al | 2);
}

/*	Procedure: 0x08048862 - 0x08048864
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

or2()
{



    return(al | 254);
}

/*	Procedure: 0x08048865 - 0x08048869
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

or3()
{



    return(ax | 2);
}

/*	Procedure: 0x0804886A - 0x0804886E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

or4()
{



    return(ax | 65534);
}

/*	Procedure: 0x0804886F - 0x08048874
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

or5()
{



    return(eax | 2);
}

/*	Procedure: 0x08048875 - 0x0804887A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

or6()
{



    return(eax | -2);
}

/*	Procedure: 0x0804887B - 0x0804887E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

or7()
{



    return(eax | *(ebp + 8));
}

/*	Procedure: 0x0804887F - 0x08048882
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

or8()
{



    return(eax | 2);
}

/*	Procedure: 0x08048883 - 0x08048888
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

or9()
{



    return(eax | 242);
}

/*	Procedure: 0x08048889 - 0x0804888B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

out1()
{



    asm("out 0x12,al");
}

/*	Procedure: 0x0804888C - 0x0804888F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

out2()
{



    asm("out 0x12,ax");
}

/*	Procedure: 0x08048890 - 0x08048892
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

out3()
{



    asm("out 0x12,eax");
}

/*	Procedure: 0x08048893 - 0x08048894
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

out4()
{



    asm("out dx,al");
}

/*	Procedure: 0x08048895 - 0x08048897
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

out5()
{



    asm("out dx,ax");
}

/*	Procedure: 0x08048898 - 0x08048899
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

out6()
{



    asm("out dx,eax");
}

/*	Procedure: 0x0804889A - 0x0804889B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

outs1()
{



    asm("outsb");
}

/*	Procedure: 0x0804889C - 0x0804889E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

outs2()
{



    asm("outsw");
}

/*	Procedure: 0x0804889F - 0x080488A0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

outs3()
{



    asm("outsd");
}

stack space not deallocated on return
/*	Procedure: 0x080488A1 - 0x080488A4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pop1()
{



    (restore) *eax;
}

stack space not deallocated on return
/*	Procedure: 0x080488A5 - 0x080488A7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pop2()
{



    (restore) *eax;
}

stack space not deallocated on return
/*	Procedure: 0x080488A8 - 0x080488AA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pop3()
{



    (restore)ax;
}

stack space not deallocated on return
/*	Procedure: 0x080488AB - 0x080488AC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pop4()
{



    (restore)eax;
}

stack space not deallocated on return
/*	Procedure: 0x080488AD - 0x080488AE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pop_seg1()
{



    (restore)ds;
}

stack space not deallocated on return
/*	Procedure: 0x080488AF - 0x080488B0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pop_seg2()
{



    (restore)es;
}

stack space not deallocated on return
/*	Procedure: 0x080488B1 - 0x080488B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pop_seg3()
{



    (restore)fs;
}

stack space not deallocated on return
/*	Procedure: 0x080488B4 - 0x080488B6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pop_seg4()
{



    (restore)gs;
}

stack space not deallocated on return
/*	Procedure: 0x080488B7 - 0x080488B8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pop_seg5()
{



    (restore)ss;
}

/*	Procedure: 0x080488B9 - 0x080488BA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

popa1()
{



    asm("popa");
}

/*	Procedure: 0x080488BB - 0x080488BD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

popa2()
{



    asm("popaw");
}

/*	Procedure: 0x080488BE - 0x080488BF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

popf1()
{



    asm("popf");
}

/*	Procedure: 0x080488C0 - 0x080488C2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

popf2()
{



    asm("popfw");
}

stack space not deallocated on return
/*	Procedure: 0x080488C3 - 0x080488C6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push1()
{



    (save) *eax;
}

stack space not deallocated on return
/*	Procedure: 0x080488C7 - 0x080488C9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push2()
{



    (save) *eax;
}

stack space not deallocated on return
/*	Procedure: 0x080488CA - 0x080488CC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push3()
{



    (save)ax;
}

stack space not deallocated on return
/*	Procedure: 0x080488CD - 0x080488CE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push4()
{



    (save)eax;
}

stack space not deallocated on return
/*	Procedure: 0x080488CF - 0x080488D1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push5()
{



    (save)17;
}

stack space not deallocated on return
/*	Procedure: 0x080488D2 - 0x080488D7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push6()
{



    (save)4386;
}

stack space not deallocated on return
/*	Procedure: 0x080488D8 - 0x080488DD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push7()
{



    (save)287454020;
}

stack space not deallocated on return
/*	Procedure: 0x080488DE - 0x080488DF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push_seg1()
{



    (save)ds;
}

stack space not deallocated on return
/*	Procedure: 0x080488E0 - 0x080488E1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push_seg2()
{



    (save)es;
}

stack space not deallocated on return
/*	Procedure: 0x080488E2 - 0x080488E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push_seg3()
{



    (save)fs;
}

stack space not deallocated on return
/*	Procedure: 0x080488E5 - 0x080488E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push_seg4()
{



    (save)gs;
}

stack space not deallocated on return
/*	Procedure: 0x080488E8 - 0x080488E9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

push_seg5()
{



    (save)ss;
}

/*	Procedure: 0x080488EA - 0x080488EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pusha1()
{



    asm("pusha");
}

/*	Procedure: 0x080488EC - 0x080488EE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pusha2()
{



    asm("pushaw");
}

/*	Procedure: 0x080488EF - 0x080488F0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pushf1()
{



    asm("pushf");
}

/*	Procedure: 0x080488F1 - 0x080488F3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

pushf2()
{



    asm("pushfw");
}

/*	Procedure: 0x080488F4 - 0x080488F6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_rol_b()
{



    asm("rol byte [eax],1");
}

/*	Procedure: 0x080488F7 - 0x080488FA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_rol_w()
{



    asm("rol word [eax],1");
}

/*	Procedure: 0x080488FB - 0x080488FD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_rol_l()
{



    asm("rol dword [eax],1");
}

/*	Procedure: 0x080488FE - 0x08048900
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_ror_b()
{



    asm("ror byte [eax],1");
}

/*	Procedure: 0x08048901 - 0x08048904
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_ror_w()
{



    asm("ror word [eax],1");
}

/*	Procedure: 0x08048905 - 0x08048907
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_ror_l()
{



    asm("ror dword [eax],1");
}

/*	Procedure: 0x08048908 - 0x0804890A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_rcl_b()
{



    asm("rcl byte [eax],1");
}

/*	Procedure: 0x0804890B - 0x0804890E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_rcl_w()
{



    asm("rcl word [eax],1");
}

/*	Procedure: 0x0804890F - 0x08048911
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_rcl_l()
{



    asm("rcl dword [eax],1");
}

/*	Procedure: 0x08048912 - 0x08048914
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_rcr_b()
{



    asm("rcr byte [eax],1");
}

/*	Procedure: 0x08048915 - 0x08048918
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_rcr_w()
{



    asm("rcr word [eax],1");
}

/*	Procedure: 0x08048919 - 0x0804891B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_rcr_l()
{



    asm("rcr dword [eax],1");
}

/*	Procedure: 0x0804891C - 0x0804891E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_shl_b()
{



    *eax = *eax << 1;
}

/*	Procedure: 0x0804891F - 0x08048922
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_shl_w()
{



    *eax = *eax << 1;
}

/*	Procedure: 0x08048923 - 0x08048925
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_shl_l()
{



    *eax = *eax << 1;
}

/*	Procedure: 0x08048926 - 0x08048928
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_shr_b()
{



    *eax = *eax >> 1;
}

/*	Procedure: 0x08048929 - 0x0804892C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_shr_w()
{



    *eax = *eax >> 1;
}

/*	Procedure: 0x0804892D - 0x0804892F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_shr_l()
{



    *eax = *eax >> 1;
}

/*	Procedure: 0x08048930 - 0x08048932
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_sar_b()
{



    *eax = *eax >> 1;
}

/*	Procedure: 0x08048933 - 0x08048936
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_sar_w()
{



    *eax = *eax >> 1;
}

/*	Procedure: 0x08048937 - 0x08048939
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_once_sar_l()
{



    *eax = *eax >> 1;
}

/*	Procedure: 0x0804893A - 0x0804893C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_rol_b()
{



    asm("rol byte [eax],cl");
}

/*	Procedure: 0x0804893D - 0x08048940
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_rol_w()
{



    asm("rol word [eax],cl");
}

/*	Procedure: 0x08048941 - 0x08048943
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_rol_l()
{



    asm("rol dword [eax],cl");
}

/*	Procedure: 0x08048944 - 0x08048946
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_ror_b()
{



    asm("ror byte [eax],cl");
}

/*	Procedure: 0x08048947 - 0x0804894A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_ror_w()
{



    asm("ror word [eax],cl");
}

/*	Procedure: 0x0804894B - 0x0804894D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_ror_l()
{



    asm("ror dword [eax],cl");
}

/*	Procedure: 0x0804894E - 0x08048950
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_rcl_b()
{



    asm("rcl byte [eax],cl");
}

/*	Procedure: 0x08048951 - 0x08048954
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_rcl_w()
{



    asm("rcl word [eax],cl");
}

/*	Procedure: 0x08048955 - 0x08048957
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_rcl_l()
{



    asm("rcl dword [eax],cl");
}

/*	Procedure: 0x08048958 - 0x0804895A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_rcr_b()
{



    asm("rcr byte [eax],cl");
}

/*	Procedure: 0x0804895B - 0x0804895E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_rcr_w()
{



    asm("rcr word [eax],cl");
}

/*	Procedure: 0x0804895F - 0x08048961
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_rcr_l()
{



    asm("rcr dword [eax],cl");
}

/*	Procedure: 0x08048962 - 0x08048964
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_shl_b()
{



    *eax = *eax << cl;
}

/*	Procedure: 0x08048965 - 0x08048968
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_shl_w()
{



    *eax = *eax << cl;
}

/*	Procedure: 0x08048969 - 0x0804896B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_shl_l()
{



    *eax = *eax << cl;
}

/*	Procedure: 0x0804896C - 0x0804896E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_shr_b()
{



    *eax = *eax >> cl;
}

/*	Procedure: 0x0804896F - 0x08048972
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_shr_w()
{



    *eax = *eax >> cl;
}

/*	Procedure: 0x08048973 - 0x08048975
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_shr_l()
{



    *eax = *eax >> cl;
}

/*	Procedure: 0x08048976 - 0x08048978
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_sar_b()
{



    *eax = *eax >> cl;
}

/*	Procedure: 0x08048979 - 0x0804897C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_sar_w()
{



    *eax = *eax >> cl;
}

/*	Procedure: 0x0804897D - 0x0804897F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_cl_controlled_sar_l()
{



    *eax = *eax >> cl;
}

/*	Procedure: 0x08048980 - 0x08048983
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_rol_b()
{



    asm("rol byte [eax],0x4");
}

/*	Procedure: 0x08048984 - 0x08048988
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_rol_w()
{



    asm("rol word [eax],0x4");
}

/*	Procedure: 0x08048989 - 0x0804898C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_rol_l()
{



    asm("rol dword [eax],0x4");
}

/*	Procedure: 0x0804898D - 0x08048990
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_ror_b()
{



    asm("ror byte [eax],0x4");
}

/*	Procedure: 0x08048991 - 0x08048995
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_ror_w()
{



    asm("ror word [eax],0x4");
}

/*	Procedure: 0x08048996 - 0x08048999
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_ror_l()
{



    asm("ror dword [eax],0x4");
}

/*	Procedure: 0x0804899A - 0x0804899D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_rcl_b()
{



    asm("rcl byte [eax],0x4");
}

/*	Procedure: 0x0804899E - 0x080489A2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_rcl_w()
{



    asm("rcl word [eax],0x4");
}

/*	Procedure: 0x080489A3 - 0x080489A6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_rcl_l()
{



    asm("rcl dword [eax],0x4");
}

/*	Procedure: 0x080489A7 - 0x080489AA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_rcr_b()
{



    asm("rcr byte [eax],0x4");
}

/*	Procedure: 0x080489AB - 0x080489AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_rcr_w()
{



    asm("rcr word [eax],0x4");
}

/*	Procedure: 0x080489B0 - 0x080489B3
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_rcr_l()
{



    asm("rcr dword [eax],0x4");
}

/*	Procedure: 0x080489B4 - 0x080489B7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_shl_b()
{



    *eax = *eax << 4;
}

/*	Procedure: 0x080489B8 - 0x080489BC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_shl_w()
{



    *eax = *eax << 4;
}

/*	Procedure: 0x080489BD - 0x080489C0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_shl_l()
{



    *eax = *eax << 4;
}

/*	Procedure: 0x080489C1 - 0x080489C4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_shr_b()
{



    *eax = *eax >> 4;
}

/*	Procedure: 0x080489C5 - 0x080489C9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_shr_w()
{



    *eax = *eax >> 4;
}

/*	Procedure: 0x080489CA - 0x080489CD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_shr_l()
{



    *eax = *eax >> 4;
}

/*	Procedure: 0x080489CE - 0x080489D1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_sar_b()
{



    *eax = *eax >> 4;
}

/*	Procedure: 0x080489D2 - 0x080489D6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_sar_w()
{



    *eax = *eax >> 4;
}

/*	Procedure: 0x080489D7 - 0x080489DA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rotate_imm8_sar_l()
{



    *eax = *eax >> 4;
}

/*	Procedure: 0x080489DB - 0x080489DD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_ins1b()
{



    asm("repne insb");
}

/*	Procedure: 0x080489DE - 0x080489E1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_ins1w()
{



    asm("repne insw");
}

/*	Procedure: 0x080489E2 - 0x080489E4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_ins1l()
{



    asm("repne insd");
}

/*	Procedure: 0x080489E5 - 0x080489E7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_ins2b()
{



    asm("rep insb");
}

/*	Procedure: 0x080489E8 - 0x080489EB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_ins2w()
{



    asm("rep insw");
}

/*	Procedure: 0x080489EC - 0x080489EE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_ins2l()
{



    asm("rep insd");
}

/*	Procedure: 0x080489EF - 0x080489F1
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_movs1b()
{



    asm("repne movsb");
}

/*	Procedure: 0x080489F2 - 0x080489F5
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_movs1w()
{



    asm("repne movsw");
}

/*	Procedure: 0x080489F6 - 0x080489F8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_movs1l()
{



    asm("repne movsd");
}

/*	Procedure: 0x080489F9 - 0x080489FB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_movs2b()
{



    asm("rep movsb");
}

/*	Procedure: 0x080489FC - 0x080489FF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_movs2w()
{



    asm("rep movsw");
}

/*	Procedure: 0x08048A00 - 0x08048A02
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_movs2l()
{



    asm("rep movsd");
}

/*	Procedure: 0x08048A03 - 0x08048A05
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_outs1b()
{



    asm("repne outsb");
}

/*	Procedure: 0x08048A06 - 0x08048A09
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_outs1w()
{



    asm("repne outsw");
}

/*	Procedure: 0x08048A0A - 0x08048A0C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_outs1l()
{



    asm("repne outsd");
}

/*	Procedure: 0x08048A0D - 0x08048A0F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_outs2b()
{



    asm("rep outsb");
}

/*	Procedure: 0x08048A10 - 0x08048A13
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_outs2w()
{



    asm("rep outsw");
}

/*	Procedure: 0x08048A14 - 0x08048A16
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_outs2l()
{



    asm("rep outsd");
}

/*	Procedure: 0x08048A17 - 0x08048A19
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_stos1b()
{



    asm("repne stosb");
}

/*	Procedure: 0x08048A1A - 0x08048A1D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_stos1w()
{



    asm("repne stosw");
}

/*	Procedure: 0x08048A1E - 0x08048A20
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_stos1l()
{



    asm("repne stosd");
}

/*	Procedure: 0x08048A21 - 0x08048A23
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_stos2b()
{



    asm("rep stosb");
}

/*	Procedure: 0x08048A24 - 0x08048A27
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_stos2w()
{



    asm("rep stosw");
}

/*	Procedure: 0x08048A28 - 0x08048A2A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_stos2l()
{



    asm("rep stosd");
}

/*	Procedure: 0x08048A2B - 0x08048A2D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_cmps1b()
{



    asm("repne cmpsb");
}

/*	Procedure: 0x08048A2E - 0x08048A31
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_cmps1w()
{



    asm("repne cmpsw");
}

/*	Procedure: 0x08048A32 - 0x08048A34
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_cmps1l()
{



    asm("repne cmpsd");
}

/*	Procedure: 0x08048A35 - 0x08048A37
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_cmps2b()
{



    asm("repe cmpsb");
}

/*	Procedure: 0x08048A38 - 0x08048A3B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_cmps2w()
{



    asm("repe cmpsw");
}

/*	Procedure: 0x08048A3C - 0x08048A3E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_cmps2l()
{



    asm("repe cmpsd");
}

/*	Procedure: 0x08048A3F - 0x08048A41
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_scas1b()
{



    asm("repne scasb");
}

/*	Procedure: 0x08048A42 - 0x08048A45
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_scas1w()
{



    asm("repne scasw");
}

/*	Procedure: 0x08048A46 - 0x08048A48
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_scas1l()
{



    asm("repne scasd");
}

/*	Procedure: 0x08048A49 - 0x08048A4B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_scas2b()
{



    asm("repe scasb");
}

/*	Procedure: 0x08048A4C - 0x08048A4F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_scas2w()
{



    asm("repe scasw");
}

/*	Procedure: 0x08048A50 - 0x08048A52
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

rep_scas2l()
{



    asm("repe scasd");
}

/*	Procedure: 0x08048A53 - 0x08048A53
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ret1()
{



}

/*	Procedure: 0x08048A54 - 0x08048A54
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048A54()
{



}

/*	Procedure: 0x08048A55 - 0x08048A57
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ret2()
{



    asm("o16 ret");
}

/*	Procedure: 0x08048A58 - 0x08048A58
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ret3()
{



    asm("retf");
}

/*	Procedure: 0x08048A59 - 0x08048A59
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048A59()
{



}

/*	Procedure: 0x08048A5A - 0x08048A5C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ret4()
{



    asm("o16 retf");
}

/*	Procedure: 0x08048A5D - 0x08048A5F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ret_pop1()
{



}

/*	Procedure: 0x08048A60 - 0x08048A60
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048A60()
{



}

/*	Procedure: 0x08048A61 - 0x08048A65
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ret_pop2()
{



    asm("o16 ret 0x1234");
}

/*	Procedure: 0x08048A66 - 0x08048A68
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ret_pop3()
{



    asm("retf 0x1234");
}

/*	Procedure: 0x08048A69 - 0x08048A69
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08048A69()
{



}

/*	Procedure: 0x08048A6A - 0x08048A6E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

ret_pop4()
{



    asm("o16 retf 0x1234");
}

/*	Procedure: 0x08048A6F - 0x08048A70
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sahf()
{



    asm("sahf");
}

/*	Procedure: 0x08048A71 - 0x08048A73
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sbb1()
{



    asm("sbb al,0xe8");
}

/*	Procedure: 0x08048A74 - 0x08048A78
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sbb2()
{



    asm("sbb ax,0xe8");
}

/*	Procedure: 0x08048A79 - 0x08048A7E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sbb3()
{



    asm("sbb eax,0xe8");
}

/*	Procedure: 0x08048A7F - 0x08048A82
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sbb4()
{



    asm("sbb byte [eax],0xe8");
}

/*	Procedure: 0x08048A83 - 0x08048A88
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sbb5()
{



    asm("sbb word [eax],0xe8");
}

/*	Procedure: 0x08048A89 - 0x08048A8F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sbb6()
{



    asm("sbb dword [eax],0xe8");
}

/*	Procedure: 0x08048A90 - 0x08048A93
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sbb7()
{



    asm("sbb bx,ax");
}

/*	Procedure: 0x08048A94 - 0x08048A95
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

scas1()
{



    asm("scasb");
}

/*	Procedure: 0x08048A96 - 0x08048A98
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

scas2()
{



    asm("scasw");
}

/*	Procedure: 0x08048A99 - 0x08048A9A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

scas3()
{



    asm("scasd");
}

/*	Procedure: 0x08048A9B - 0x08048A9E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_0()
{



    *ecx ? : ;
}

/*	Procedure: 0x08048A9F - 0x08048AA2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_1()
{



    *ecx ? : ;
}

/*	Procedure: 0x08048AA3 - 0x08048AA6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_2()
{



    asm("setc [ecx]");
}

/*	Procedure: 0x08048AA7 - 0x08048AAA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_3()
{



    asm("setnc [ecx]");
}

/*	Procedure: 0x08048AAB - 0x08048AAE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_4()
{



    *ecx ? : ;
}

/*	Procedure: 0x08048AAF - 0x08048AB2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_5()
{



    *ecx ? : ;
}

/*	Procedure: 0x08048AB3 - 0x08048AB6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_6()
{



    asm("setna [ecx]");
}

/*	Procedure: 0x08048AB7 - 0x08048ABA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_7()
{



    *ecx ? : ;
}

/*	Procedure: 0x08048ABB - 0x08048ABE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_8()
{



    *ecx ? : ;
}

/*	Procedure: 0x08048ABF - 0x08048AC2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_9()
{



    *ecx ? : ;
}

/*	Procedure: 0x08048AC3 - 0x08048AC6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_a()
{



    asm("setpe [ecx]");
}

/*	Procedure: 0x08048AC7 - 0x08048ACA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_b()
{



    asm("setpo [ecx]");
}

/*	Procedure: 0x08048ACB - 0x08048ACE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_c()
{



    *ecx ? : ;
}

/*	Procedure: 0x08048ACF - 0x08048AD2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_d()
{



    asm("setnl [ecx]");
}

/*	Procedure: 0x08048AD3 - 0x08048AD6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_e()
{



    asm("setng [ecx]");
}

/*	Procedure: 0x08048AD7 - 0x08048ADA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

setcc_with_code_f()
{



    *ecx ? : ;
}

/*	Procedure: 0x08048ADB - 0x08048ADE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sgdt()
{



    asm("sgdt [eax]");
}

/*	Procedure: 0x08048ADF - 0x08048AE2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sidt()
{



    asm("sidt [eax]");
}

/*	Procedure: 0x08048AE3 - 0x08048AE8
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

shld1()
{



    asm("shld bx,ax,0x4");
}

/*	Procedure: 0x08048AE9 - 0x08048AED
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

shld2()
{



    asm("shld ebx,eax,0x4");
}

/*	Procedure: 0x08048AEE - 0x08048AF2
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

shld3()
{



    asm("shld bx,ax,cl");
}

/*	Procedure: 0x08048AF3 - 0x08048AF6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

shld4()
{



    asm("shld ebx,eax,cl");
}

/*	Procedure: 0x08048AF7 - 0x08048AFC
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

shrd1()
{



    asm("shrd bx,ax,0x4");
}

/*	Procedure: 0x08048AFD - 0x08048B01
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

shrd2()
{



    asm("shrd ebx,eax,0x4");
}

/*	Procedure: 0x08048B02 - 0x08048B06
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

shrd3()
{



    asm("shrd bx,ax,cl");
}

/*	Procedure: 0x08048B07 - 0x08048B0A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

shrd4()
{



    asm("shrd ebx,eax,cl");
}

/*	Procedure: 0x08048B0B - 0x08048B0E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sldt()
{



    asm("sldt [eax]");
}

/*	Procedure: 0x08048B0F - 0x08048B12
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

smsw()
{



    asm("smsw [eax]");
}

/*	Procedure: 0x08048B13 - 0x08048B14
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

stc()
{



    asm("stc");
}

/*	Procedure: 0x08048B15 - 0x08048B16
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

std()
{



    asm("std");
}

/*	Procedure: 0x08048B17 - 0x08048B18
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sti()
{



    asm("sti");
}

/*	Procedure: 0x08048B19 - 0x08048B1A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

stos1()
{



    *edi = al;
    edi = edi + 1;
}

/*	Procedure: 0x08048B1B - 0x08048B1D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

stos2()
{



    *edi = eax;
    edi = edi + 4;
}

/*	Procedure: 0x08048B1E - 0x08048B1F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

stos3()
{



    *edi = eax;
    edi = edi + 4;
}

/*	Procedure: 0x08048B20 - 0x08048B23
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

str()
{



    asm("str [eax]");
}

/*	Procedure: 0x08048B24 - 0x08048B26
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sub1()
{



    return(al - 2);
}

/*	Procedure: 0x08048B27 - 0x08048B29
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sub2()
{



    return(al - 254);
}

/*	Procedure: 0x08048B2A - 0x08048B2E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sub3()
{



    return(ax - 2);
}

/*	Procedure: 0x08048B2F - 0x08048B33
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sub4()
{



    return(ax - 65534);
}

/*	Procedure: 0x08048B34 - 0x08048B39
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sub5()
{



    return(eax - 2);
}

/*	Procedure: 0x08048B3A - 0x08048B3F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sub6()
{



    return(eax - -2);
}

/*	Procedure: 0x08048B40 - 0x08048B43
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

sub7()
{



    return(eax - *(ebp + 8));
}

/*	Procedure: 0x08048B44 - 0x08048B46
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test1()
{



    al & 66;
}

/*	Procedure: 0x08048B47 - 0x08048B4B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test2()
{



    ax & 66;
}

/*	Procedure: 0x08048B4C - 0x08048B51
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test3()
{



    eax & 66;
}

/*	Procedure: 0x08048B52 - 0x08048B55
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test4()
{



    *ecx & 66;
}

/*	Procedure: 0x08048B56 - 0x08048B5B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test5()
{



    *ecx & 66;
}

/*	Procedure: 0x08048B5C - 0x08048B62
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test6()
{



    *ecx & 66;
}

/*	Procedure: 0x08048B63 - 0x08048B65
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test7()
{



    *ecx & bl;
}

/*	Procedure: 0x08048B66 - 0x08048B69
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test8()
{



    *ecx & bx;
}

/*	Procedure: 0x08048B6A - 0x08048B6C
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

test9()
{



    *ecx & ebx;
}

/*	Procedure: 0x08048B6D - 0x08048B70
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

verr()
{



    asm("verr [eax]");
}

/*	Procedure: 0x08048B71 - 0x08048B74
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

verw()
{



    asm("verw [eax]");
}

/*	Procedure: 0x08048B75 - 0x08048B76
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

wait()
{



    asm("wait");
}

/*	Procedure: 0x08048B77 - 0x08048B79
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xchg1()
{



    asm("xchg ax,bx");
}

/*	Procedure: 0x08048B7A - 0x08048B7B
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xchg2()
{



    asm("xchg eax,ebx");
}

/*	Procedure: 0x08048B7C - 0x08048B7E
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xchg3()
{



    asm("xchg bl,[ecx]");
}

/*	Procedure: 0x08048B7F - 0x08048B82
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xchg4()
{



    asm("xchg bx,[ecx]");
}

/*	Procedure: 0x08048B83 - 0x08048B85
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xchg5()
{



    asm("xchg ebx,[ecx]");
}

/*	Procedure: 0x08048B86 - 0x08048B87
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xlat1()
{



    asm("xlatb");
}

/*	Procedure: 0x08048B88 - 0x08048B8A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xlat2()
{



    asm("a16 xlatb");
}

/*	Procedure: 0x08048B8B - 0x08048B8D
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xor1()
{



    return(al ^ 2);
}

/*	Procedure: 0x08048B8E - 0x08048B90
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xor2()
{



    return(al ^ 254);
}

/*	Procedure: 0x08048B91 - 0x08048B95
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xor3()
{



    return(ax ^ 2);
}

/*	Procedure: 0x08048B96 - 0x08048B9A
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xor4()
{



    return(ax ^ 65534);
}

/*	Procedure: 0x08048B9B - 0x08048BA0
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xor5()
{



    return(eax ^ 2);
}

/*	Procedure: 0x08048BA1 - 0x08048BA6
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xor6()
{



    return(eax ^ -2);
}

/*	Procedure: 0x08048BA7 - 0x08048BAA
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xor7()
{



    return(eax ^ *(ebp + 8));
}

/*	Procedure: 0x08048BAB - 0x08048BAE
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xor8()
{



    return(eax ^ 2);
}

/*	Procedure: 0x08048BAF - 0x08048BB4
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

xor9()
{



    return(eax ^ 242);
}

/*	Procedure: 0x08048BB5 - 0x0804953F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

main()
{



    aaa();
    aad1();
    aad2();
    aam1();
    aam2();
    aas();
    adc1();
    adc1a();
    adc2();
    adc2a();
    adc3();
    adc3a();
    adc4();
    add1();
    add2();
    add3();
    add4();
    add5();
    add6();
    add7();
    and1();
    and2();
    and3();
    and4();
    and5();
    and6();
    and7();
    arpl();
    bound1();
    bound2();
    bsf1();
    bsf2();
    bsf3();
    bsf4();
    bsr1();
    bsr2();
    bsr3();
    bsr4();
    bt1();
    bt2();
    bt3();
    bt4();
    bt5();
    btc1();
    btc2();
    btc3();
    btc4();
    btc5();
    btr1();
    btr2();
    btr3();
    btr4();
    btr5();
    bts1();
    bts2();
    bts3();
    bts4();
    bts5();
    call1();
    call2();
    call3();
    call4();
    call5();
    call6();
    cbw1();
    cbw2();
    clc();
    cld();
    cli();
    clts();
    cmc();
    cmp1();
    cmp2();
    cmp3();
    cmp4();
    cmp5();
    cmp6();
    cmp7();
    cmp8();
    cmps1();
    cmps2();
    cmps3();
    cmps4();
    cmps5();
    cmps6();
    cwd1();
    cwd2();
    daa();
    das();
    dec1();
    dec2();
    dec3();
    dec4();
    dec5b();
    dec5w();
    dec5l();
    div1();
    div2();
    div3();
    enter1();
    enter2();
    enter3();
    hlt();
    idiv1();
    idiv2();
    idiv3();
    imul_one_op1();
    imul_one_op2();
    imul_one_op3();
    imul_one_op4();
    imul_two_op1();
    imul_two_op2();
    imul_two_op3();
    imul_three_op1();
    imul_three_op2();
    imul_three_op3();
    in1();
    in2();
    in3();
    in4();
    in5();
    in6();
    inc1();
    inc2();
    inc3();
    inc4();
    inc5b();
    inc5w();
    inc5l();
    ins1();
    ins2();
    ins3();
    int1();
    int2();
    int3();
    iret1();
    iret2();
    jcc_short_with_code_0();
    jcc_short_with_code_1();
    jcc_short_with_code_2();
    jcc_short_with_code_3();
    jcc_short_with_code_4();
    jcc_short_with_code_5();
    jcc_short_with_code_6();
    jcc_short_with_code_7();
    jcc_short_with_code_8();
    jcc_short_with_code_9();
    jcc_short_with_code_a();
    jcc_short_with_code_b();
    jcc_short_with_code_c();
    jcc_short_with_code_d();
    jcc_short_with_code_e();
    jcc_short_with_code_f();
    jcc_long_with_code_0();
    jcc_long_with_code_1();
    jcc_long_with_code_2();
    jcc_long_with_code_3();
    jcc_long_with_code_4();
    jcc_long_with_code_5();
    jcc_long_with_code_6();
    jcc_long_with_code_7();
    jcc_long_with_code_8();
    jcc_long_with_code_9();
    jcc_long_with_code_a();
    jcc_long_with_code_b();
    jcc_long_with_code_c();
    jcc_long_with_code_d();
    jcc_long_with_code_e();
    jcc_long_with_code_f();
    jcxz();
    jecxz();
    jmp1();
    jmp2();
    jmp3();
    lahf();
    lar();
    lea1();
    lea2();
    leave1();
    leave2();
    lgdtl();
    lidtl();
    lds1();
    lds2();
    les1();
    les2();
    lfs1();
    lfs2();
    lgs1();
    lgs2();
    lss1();
    lss2();
    lldt();
    lmsw();
    lods1();
    lods2();
    lods3();
    loop_type_0();
    loop_type_0w();
    loop_type_1();
    loop_type_1w();
    loop_type_2();
    loop_type_2w();
    lsl();
    ltr();
    mov_b1();
    mov_b2();
    mov_b3();
    mov_b4();
    mov_b5();
    mov_b6();
    mov_b7();
    mov_w1();
    mov_w2();
    mov_w3();
    mov_w4();
    mov_l1();
    mov_l2();
    mov_l3();
    mov_l4();
    mov_from_cr();
    mov_to_cr();
    mov_from_dr();
    mov_to_dr();
    mov_from_tr();
    mov_to_tr();
    movs1();
    movs2();
    movs3();
    movsx1();
    movsx2();
    movsx3();
    movzx1();
    movzx2();
    movzx3();
    mul1();
    mul2();
    mul3();
    neg1();
    neg2();
    neg3();
    nop1();
    nop2();
    nop3();
    nop4();
    nop5();
    nop6();
    nop7();
    not1();
    not2();
    not3();
    or1();
    or2();
    or3();
    or4();
    or5();
    or6();
    or7();
    or8();
    or9();
    out1();
    out2();
    out3();
    out4();
    out5();
    out6();
    outs1();
    outs2();
    outs3();
    pop1();
    pop2();
    pop3();
    pop4();
    pop_seg1();
    pop_seg2();
    pop_seg3();
    pop_seg4();
    pop_seg5();
    popa1();
    popa2();
    popf1();
    popf2();
    push1();
    push2();
    push3();
    push4();
    push5();
    push6();
    push7();
    push_seg1();
    push_seg2();
    push_seg3();
    push_seg4();
    push_seg5();
    pusha1();
    pusha2();
    pushf1();
    pushf2();
    rotate_once_rol_b();
    rotate_once_rol_w();
    rotate_once_rol_l();
    rotate_once_ror_b();
    rotate_once_ror_w();
    rotate_once_ror_l();
    rotate_once_rcl_b();
    rotate_once_rcl_w();
    rotate_once_rcl_l();
    rotate_once_rcr_b();
    rotate_once_rcr_w();
    rotate_once_rcr_l();
    rotate_once_shl_b();
    rotate_once_shl_w();
    rotate_once_shl_l();
    rotate_once_shr_b();
    rotate_once_shr_w();
    rotate_once_shr_l();
    rotate_once_sar_b();
    rotate_once_sar_w();
    rotate_once_sar_l();
    rotate_cl_controlled_rol_b();
    rotate_cl_controlled_rol_w();
    rotate_cl_controlled_rol_l();
    rotate_cl_controlled_ror_b();
    rotate_cl_controlled_ror_w();
    rotate_cl_controlled_ror_l();
    rotate_cl_controlled_rcl_b();
    rotate_cl_controlled_rcl_w();
    rotate_cl_controlled_rcl_l();
    rotate_cl_controlled_rcr_b();
    rotate_cl_controlled_rcr_w();
    rotate_cl_controlled_rcr_l();
    rotate_cl_controlled_shl_b();
    rotate_cl_controlled_shl_w();
    rotate_cl_controlled_shl_l();
    rotate_cl_controlled_shr_b();
    rotate_cl_controlled_shr_w();
    rotate_cl_controlled_shr_l();
    rotate_cl_controlled_sar_b();
    rotate_cl_controlled_sar_w();
    rotate_cl_controlled_sar_l();
    rotate_imm8_rol_b();
    rotate_imm8_rol_w();
    rotate_imm8_rol_l();
    rotate_imm8_ror_b();
    rotate_imm8_ror_w();
    rotate_imm8_ror_l();
    rotate_imm8_rcl_b();
    rotate_imm8_rcl_w();
    rotate_imm8_rcl_l();
    rotate_imm8_rcr_b();
    rotate_imm8_rcr_w();
    rotate_imm8_rcr_l();
    rotate_imm8_shl_b();
    rotate_imm8_shl_w();
    rotate_imm8_shl_l();
    rotate_imm8_shr_b();
    rotate_imm8_shr_w();
    rotate_imm8_shr_l();
    rotate_imm8_sar_b();
    rotate_imm8_sar_w();
    rotate_imm8_sar_l();
    rep_ins1b();
    rep_ins1w();
    rep_ins1l();
    rep_ins2b();
    rep_ins2w();
    rep_ins2l();
    rep_movs1b();
    rep_movs1w();
    rep_movs1l();
    rep_movs2b();
    rep_movs2w();
    rep_movs2l();
    rep_outs1b();
    rep_outs1w();
    rep_outs1l();
    rep_outs2b();
    rep_outs2w();
    rep_outs2l();
    rep_stos1b();
    rep_stos1w();
    rep_stos1l();
    rep_stos2b();
    rep_stos2w();
    rep_stos2l();
    rep_cmps1b();
    rep_cmps1w();
    rep_cmps1l();
    rep_cmps2b();
    rep_cmps2w();
    rep_cmps2l();
    rep_scas1b();
    rep_scas1w();
    rep_scas1l();
    rep_scas2b();
    rep_scas2w();
    rep_scas2l();
    ret1();
    ret2();
    ret3();
    ret4();
    ret_pop1();
    ret_pop2();
    ret_pop3();
    ret_pop4();
    sahf();
    sbb1();
    sbb2();
    sbb3();
    sbb4();
    sbb5();
    sbb6();
    sbb7();
    scas1();
    scas2();
    scas3();
    setcc_with_code_0();
    setcc_with_code_1();
    setcc_with_code_2();
    setcc_with_code_3();
    setcc_with_code_4();
    setcc_with_code_5();
    setcc_with_code_6();
    setcc_with_code_7();
    setcc_with_code_8();
    setcc_with_code_9();
    setcc_with_code_a();
    setcc_with_code_b();
    setcc_with_code_c();
    setcc_with_code_d();
    setcc_with_code_e();
    setcc_with_code_f();
    sgdt();
    sidt();
    shld1();
    shld2();
    shld3();
    shld4();
    shrd1();
    shrd2();
    shrd3();
    shrd4();
    sldt();
    smsw();
    stc();
    std();
    sti();
    stos1();
    stos2();
    stos3();
    str();
    sub1();
    sub2();
    sub3();
    sub4();
    sub5();
    sub6();
    sub7();
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    verr();
    verw();
    wait();
    xchg1();
    xchg2();
    xchg3();
    xchg4();
    xchg5();
    xlat1();
    xlat2();
    xor1();
    xor2();
    xor3();
    xor4();
    xor5();
    xor6();
    xor7();
    xor8();
    xor9();
}

/*	Procedure: 0x08049540 - 0x08049544
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__libc_csu_fini()
{



}

/*	Procedure: 0x08049545 - 0x0804954F
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L08049545()
{



}

/*	Procedure: 0x08049550 - 0x080495A9
 *	Argument size: 12
 *	Local size: 0
 *	Save regs size: 12
 */

__libc_csu_init(A8, Ac, A10)
/* unknown */ void  A8;
/* unknown */ void  Ac;
/* unknown */ void  A10;
{
	/* unknown */ void  ebx;
	/* unknown */ void  esi;
	/* unknown */ void  edi;
	/* unknown */ void  Vffffffe4;
	/* unknown */ void  Vffffffe8;



    __i686.get_pc_thunk.bx();
    ebx = ebx + 4649;
    esp = esp - 28;
    _init();
    edi = ebx + -224;
    eax = ebx + -224;
    edi = edi - eax >> 2;
    if(edi != 0) {
        esi = 0;
        do {
            Vffffffe8 = A10;
            Vffffffe4 = Ac;
            *esp = A8;
            eax = *(ebx + esi * 4 + -224)();
            esi = esi + 1;
        } while(esi < edi);
    }
    esp = esp + 28;
}

/*	Procedure: 0x080495AA - 0x080495AD
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

__i686.get_pc_thunk.bx()
{



    ebx = *esp;
}

/*	Procedure: 0x080495AE - 0x080495AF
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080495AE()
{



}

/*	Procedure: 0x080495B0 - 0x080495D9
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

__do_global_ctors_aux()
{
	/* unknown */ void  ebx;



    eax = __CTOR_LIST__;
    if(__CTOR_LIST__ != -1) {
        ebx = __CTOR_LIST__;
        asm("o16 nop");
        do {
            ebx = ebx - 4;
            *eax();
            eax = *ebx;
        } while(eax != -1);
    }
}

/*	Procedure: 0x080495DA - 0x080495DB
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

L080495DA()
{



}

/*	Procedure: 0x080495DC - 0x080495F7
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 4
 */

_fini()
{
	/* unknown */ void  ebx;



    esp = esp - 4;
    L080495e8();
    (restore)ebx;
    ebx = ebx + 4508;
    (restore)ecx;
    return(__do_global_dtors_aux());
}

/*	Procedure: 0x080495F8 - 0x00000000
 *	Argument size: 0
 *	Local size: 0
 *	Save regs size: 0
 */

_fp_hw()
{



}

/* address  size  */
/* 0x00000000       0 */ /* unknown */ void 	__libc_start_main;
/* 0x00000000 134513356 */ /* unknown */ void 	malloc;
/* 0x080482cc     116 */ /* unknown */ void 	_init;
/* 0x08048340      48 */ /* unknown */ void 	_start;
/* 0x08048370      96 */ /* unknown */ void 	__do_global_dtors_aux;
/* 0x080483d0      36 */ /* unknown */ void 	frame_dummy;
/* 0x080483f4       2 */ /* unknown */ void 	aaa;
/* 0x080483f6       3 */ /* unknown */ void 	aad1;
/* 0x080483f9       3 */ /* unknown */ void 	aad2;
/* 0x080483fc       3 */ /* unknown */ void 	aam1;
/* 0x080483ff       3 */ /* unknown */ void 	aam2;
/* 0x08048402       2 */ /* unknown */ void 	aas;
/* 0x08048404       3 */ /* unknown */ void 	adc1;
/* 0x08048407       3 */ /* unknown */ void 	adc1a;
/* 0x0804840a       5 */ /* unknown */ void 	adc2;
/* 0x0804840f       5 */ /* unknown */ void 	adc2a;
/* 0x08048414       4 */ /* unknown */ void 	adc3;
/* 0x08048418       6 */ /* unknown */ void 	adc3a;
/* 0x0804841e       4 */ /* unknown */ void 	adc4;
/* 0x08048422       3 */ /* unknown */ void 	add1;
/* 0x08048425       3 */ /* unknown */ void 	add2;
/* 0x08048428       5 */ /* unknown */ void 	add3;
/* 0x0804842d       5 */ /* unknown */ void 	add4;
/* 0x08048432       6 */ /* unknown */ void 	add5;
/* 0x08048438       6 */ /* unknown */ void 	add6;
/* 0x0804843e       4 */ /* unknown */ void 	add7;
/* 0x08048442       3 */ /* unknown */ void 	and1;
/* 0x08048445       3 */ /* unknown */ void 	and2;
/* 0x08048448       5 */ /* unknown */ void 	and3;
/* 0x0804844d       5 */ /* unknown */ void 	and4;
/* 0x08048452       6 */ /* unknown */ void 	and5;
/* 0x08048458       6 */ /* unknown */ void 	and6;
/* 0x0804845e       4 */ /* unknown */ void 	and7;
/* 0x08048462       3 */ /* unknown */ void 	arpl;
/* 0x08048465       5 */ /* unknown */ void 	bound1;
/* 0x0804846a       3 */ /* unknown */ void 	bound2;
/* 0x0804846d       6 */ /* unknown */ void 	bsf1;
/* 0x08048473       4 */ /* unknown */ void 	bsf2;
/* 0x08048477       5 */ /* unknown */ void 	bsf3;
/* 0x0804847c       5 */ /* unknown */ void 	bsf4;
/* 0x08048481       6 */ /* unknown */ void 	bsr1;
/* 0x08048487       4 */ /* unknown */ void 	bsr2;
/* 0x0804848b       5 */ /* unknown */ void 	bsr3;
/* 0x08048490       5 */ /* unknown */ void 	bsr4;
/* 0x08048495       6 */ /* unknown */ void 	bt1;
/* 0x0804849b       5 */ /* unknown */ void 	bt2;
/* 0x080484a0       5 */ /* unknown */ void 	bt3;
/* 0x080484a5       4 */ /* unknown */ void 	bt4;
/* 0x080484a9       4 */ /* unknown */ void 	bt5;
/* 0x080484ad       6 */ /* unknown */ void 	btc1;
/* 0x080484b3       5 */ /* unknown */ void 	btc2;
/* 0x080484b8       5 */ /* unknown */ void 	btc3;
/* 0x080484bd       4 */ /* unknown */ void 	btc4;
/* 0x080484c1       4 */ /* unknown */ void 	btc5;
/* 0x080484c5       6 */ /* unknown */ void 	btr1;
/* 0x080484cb       5 */ /* unknown */ void 	btr2;
/* 0x080484d0       5 */ /* unknown */ void 	btr3;
/* 0x080484d5       4 */ /* unknown */ void 	btr4;
/* 0x080484d9       4 */ /* unknown */ void 	btr5;
/* 0x080484dd       6 */ /* unknown */ void 	bts1;
/* 0x080484e3       5 */ /* unknown */ void 	bts2;
/* 0x080484e8       5 */ /* unknown */ void 	bts3;
/* 0x080484ed       4 */ /* unknown */ void 	bts4;
/* 0x080484f1       4 */ /* unknown */ void 	bts5;
/* 0x080484f5       6 */ /* unknown */ void 	call1;
/* 0x080484fb       6 */ /* unknown */ void 	call2;
/* 0x08048501       6 */ /* unknown */ void 	call3;
/* 0x08048507       6 */ /* unknown */ void 	call4;
/* 0x0804850d       3 */ /* unknown */ void 	call5;
/* 0x08048510       3 */ /* unknown */ void 	call6;
/* 0x08048513       2 */ /* unknown */ void 	cbw1;
/* 0x08048515       3 */ /* unknown */ void 	cbw2;
/* 0x08048518       2 */ /* unknown */ void 	clc;
/* 0x0804851a       2 */ /* unknown */ void 	cld;
/* 0x0804851c       2 */ /* unknown */ void 	cli;
/* 0x0804851e       3 */ /* unknown */ void 	clts;
/* 0x08048521       2 */ /* unknown */ void 	cmc;
/* 0x08048523       3 */ /* unknown */ void 	cmp1;
/* 0x08048526       3 */ /* unknown */ void 	cmp2;
/* 0x08048529       5 */ /* unknown */ void 	cmp3;
/* 0x0804852e       5 */ /* unknown */ void 	cmp4;
/* 0x08048533       6 */ /* unknown */ void 	cmp5;
/* 0x08048539       6 */ /* unknown */ void 	cmp6;
/* 0x0804853f       4 */ /* unknown */ void 	cmp7;
/* 0x08048543       6 */ /* unknown */ void 	cmp8;
/* 0x08048549       2 */ /* unknown */ void 	cmps1;
/* 0x0804854b       3 */ /* unknown */ void 	cmps2;
/* 0x0804854e       2 */ /* unknown */ void 	cmps3;
/* 0x08048550       3 */ /* unknown */ void 	cmps4;
/* 0x08048553       4 */ /* unknown */ void 	cmps5;
/* 0x08048557       3 */ /* unknown */ void 	cmps6;
/* 0x0804855a       2 */ /* unknown */ void 	cwd1;
/* 0x0804855c       3 */ /* unknown */ void 	cwd2;
/* 0x0804855f       2 */ /* unknown */ void 	daa;
/* 0x08048561       2 */ /* unknown */ void 	das;
/* 0x08048563       3 */ /* unknown */ void 	dec1;
/* 0x08048566       3 */ /* unknown */ void 	dec2;
/* 0x08048569       3 */ /* unknown */ void 	dec3;
/* 0x0804856c       2 */ /* unknown */ void 	dec4;
/* 0x0804856e       3 */ /* unknown */ void 	dec5b;
/* 0x08048571       4 */ /* unknown */ void 	dec5w;
/* 0x08048575       3 */ /* unknown */ void 	dec5l;
/* 0x08048578       3 */ /* unknown */ void 	div1;
/* 0x0804857b       4 */ /* unknown */ void 	div2;
/* 0x0804857f       3 */ /* unknown */ void 	div3;
/* 0x08048582       5 */ /* unknown */ void 	enter1;
/* 0x08048587       5 */ /* unknown */ void 	enter2;
/* 0x0804858c       5 */ /* unknown */ void 	enter3;
/* 0x08048591       2 */ /* unknown */ void 	hlt;
/* 0x08048593       3 */ /* unknown */ void 	idiv1;
/* 0x08048596       4 */ /* unknown */ void 	idiv2;
/* 0x0804859a       3 */ /* unknown */ void 	idiv3;
/* 0x0804859d       3 */ /* unknown */ void 	imul_one_op1;
/* 0x080485a0       4 */ /* unknown */ void 	imul_one_op2;
/* 0x080485a4       3 */ /* unknown */ void 	imul_one_op3;
/* 0x080485a7       4 */ /* unknown */ void 	imul_one_op4;
/* 0x080485ab       5 */ /* unknown */ void 	imul_two_op1;
/* 0x080485b0       4 */ /* unknown */ void 	imul_two_op2;
/* 0x080485b4       4 */ /* unknown */ void 	imul_two_op3;
/* 0x080485b8       5 */ /* unknown */ void 	imul_three_op1;
/* 0x080485bd       4 */ /* unknown */ void 	imul_three_op2;
/* 0x080485c1       4 */ /* unknown */ void 	imul_three_op3;
/* 0x080485c5       3 */ /* unknown */ void 	in1;
/* 0x080485c8       4 */ /* unknown */ void 	in2;
/* 0x080485cc       3 */ /* unknown */ void 	in3;
/* 0x080485cf       2 */ /* unknown */ void 	in4;
/* 0x080485d1       3 */ /* unknown */ void 	in5;
/* 0x080485d4       2 */ /* unknown */ void 	in6;
/* 0x080485d6       3 */ /* unknown */ void 	inc1;
/* 0x080485d9       3 */ /* unknown */ void 	inc2;
/* 0x080485dc       3 */ /* unknown */ void 	inc3;
/* 0x080485df       2 */ /* unknown */ void 	inc4;
/* 0x080485e1       3 */ /* unknown */ void 	inc5b;
/* 0x080485e4       4 */ /* unknown */ void 	inc5w;
/* 0x080485e8       3 */ /* unknown */ void 	inc5l;
/* 0x080485eb       2 */ /* unknown */ void 	ins1;
/* 0x080485ed       3 */ /* unknown */ void 	ins2;
/* 0x080485f0       2 */ /* unknown */ void 	ins3;
/* 0x080485f2       2 */ /* unknown */ void 	int1;
/* 0x080485f4       3 */ /* unknown */ void 	int2;
/* 0x080485f7       2 */ /* unknown */ void 	int3;
/* 0x080485f9       2 */ /* unknown */ void 	iret1;
/* 0x080485fb       3 */ /* unknown */ void 	iret2;
/* 0x080485fe       7 */ /* unknown */ void 	jcc_short_with_code_0;
/* 0x08048605       7 */ /* unknown */ void 	jcc_short_with_code_1;
/* 0x0804860c       7 */ /* unknown */ void 	jcc_short_with_code_2;
/* 0x08048613       7 */ /* unknown */ void 	jcc_short_with_code_3;
/* 0x0804861a       7 */ /* unknown */ void 	jcc_short_with_code_4;
/* 0x08048621       7 */ /* unknown */ void 	jcc_short_with_code_5;
/* 0x08048628       7 */ /* unknown */ void 	jcc_short_with_code_6;
/* 0x0804862f       7 */ /* unknown */ void 	jcc_short_with_code_7;
/* 0x08048636       7 */ /* unknown */ void 	jcc_short_with_code_8;
/* 0x0804863d       7 */ /* unknown */ void 	jcc_short_with_code_9;
/* 0x08048644       7 */ /* unknown */ void 	jcc_short_with_code_a;
/* 0x0804864b       7 */ /* unknown */ void 	jcc_short_with_code_b;
/* 0x08048652       7 */ /* unknown */ void 	jcc_short_with_code_c;
/* 0x08048659       7 */ /* unknown */ void 	jcc_short_with_code_d;
/* 0x08048660       7 */ /* unknown */ void 	jcc_short_with_code_e;
/* 0x08048667       7 */ /* unknown */ void 	jcc_short_with_code_f;
/* 0x0804866e      11 */ /* unknown */ void 	jcc_long_with_code_0;
/* 0x08048679      11 */ /* unknown */ void 	jcc_long_with_code_1;
/* 0x08048684      11 */ /* unknown */ void 	jcc_long_with_code_2;
/* 0x0804868f      11 */ /* unknown */ void 	jcc_long_with_code_3;
/* 0x0804869a      11 */ /* unknown */ void 	jcc_long_with_code_4;
/* 0x080486a5      11 */ /* unknown */ void 	jcc_long_with_code_5;
/* 0x080486b0      11 */ /* unknown */ void 	jcc_long_with_code_6;
/* 0x080486bb      11 */ /* unknown */ void 	jcc_long_with_code_7;
/* 0x080486c6      11 */ /* unknown */ void 	jcc_long_with_code_8;
/* 0x080486d1      11 */ /* unknown */ void 	jcc_long_with_code_9;
/* 0x080486dc      11 */ /* unknown */ void 	jcc_long_with_code_a;
/* 0x080486e7      11 */ /* unknown */ void 	jcc_long_with_code_b;
/* 0x080486f2      11 */ /* unknown */ void 	jcc_long_with_code_c;
/* 0x080486fd      11 */ /* unknown */ void 	jcc_long_with_code_d;
/* 0x08048708      11 */ /* unknown */ void 	jcc_long_with_code_e;
/* 0x08048713      11 */ /* unknown */ void 	jcc_long_with_code_f;
/* 0x0804871e       6 */ /* unknown */ void 	jcxz;
/* 0x08048724       5 */ /* unknown */ void 	jecxz;
/* 0x08048729       5 */ /* unknown */ void 	jmp1;
/* 0x0804872e       8 */ /* unknown */ void 	jmp2;
/* 0x08048736       3 */ /* unknown */ void 	jmp3;
/* 0x08048739       2 */ /* unknown */ void 	lahf;
/* 0x0804873b       4 */ /* unknown */ void 	lar;
/* 0x0804873f       4 */ /* unknown */ void 	lea1;
/* 0x08048743       5 */ /* unknown */ void 	lea2;
/* 0x08048748       2 */ /* unknown */ void 	leave1;
/* 0x0804874a       3 */ /* unknown */ void 	leave2;
/* 0x0804874d       4 */ /* unknown */ void 	lgdtl;
/* 0x08048751       4 */ /* unknown */ void 	lidtl;
/* 0x08048755       3 */ /* unknown */ void 	lds1;
/* 0x08048758       4 */ /* unknown */ void 	lds2;
/* 0x0804875c       3 */ /* unknown */ void 	les1;
/* 0x0804875f       4 */ /* unknown */ void 	les2;
/* 0x08048763       4 */ /* unknown */ void 	lfs1;
/* 0x08048767       5 */ /* unknown */ void 	lfs2;
/* 0x0804876c       4 */ /* unknown */ void 	lgs1;
/* 0x08048770       5 */ /* unknown */ void 	lgs2;
/* 0x08048775       4 */ /* unknown */ void 	lss1;
/* 0x08048779       5 */ /* unknown */ void 	lss2;
/* 0x0804877e       4 */ /* unknown */ void 	lldt;
/* 0x08048782       4 */ /* unknown */ void 	lmsw;
/* 0x08048786       2 */ /* unknown */ void 	lods1;
/* 0x08048788       3 */ /* unknown */ void 	lods2;
/* 0x0804878b       2 */ /* unknown */ void 	lods3;
/* 0x0804878d       4 */ /* unknown */ void 	loop_type_0;
/* 0x08048791       5 */ /* unknown */ void 	loop_type_0w;
/* 0x08048796       4 */ /* unknown */ void 	loop_type_1;
/* 0x0804879a       5 */ /* unknown */ void 	loop_type_1w;
/* 0x0804879f       4 */ /* unknown */ void 	loop_type_2;
/* 0x080487a3       5 */ /* unknown */ void 	loop_type_2w;
/* 0x080487a8       4 */ /* unknown */ void 	lsl;
/* 0x080487ac       4 */ /* unknown */ void 	ltr;
/* 0x080487b0       3 */ /* unknown */ void 	mov_b1;
/* 0x080487b3       3 */ /* unknown */ void 	mov_b2;
/* 0x080487b6       3 */ /* unknown */ void 	mov_b3;
/* 0x080487b9       3 */ /* unknown */ void 	mov_b4;
/* 0x080487bc       3 */ /* unknown */ void 	mov_b5;
/* 0x080487bf       3 */ /* unknown */ void 	mov_b6;
/* 0x080487c2       3 */ /* unknown */ void 	mov_b7;
/* 0x080487c5       4 */ /* unknown */ void 	mov_w1;
/* 0x080487c9       5 */ /* unknown */ void 	mov_w2;
/* 0x080487ce       4 */ /* unknown */ void 	mov_w3;
/* 0x080487d2       4 */ /* unknown */ void 	mov_w4;
/* 0x080487d6       3 */ /* unknown */ void 	mov_l1;
/* 0x080487d9       6 */ /* unknown */ void 	mov_l2;
/* 0x080487df       3 */ /* unknown */ void 	mov_l3;
/* 0x080487e2       3 */ /* unknown */ void 	mov_l4;
/* 0x080487e5       4 */ /* unknown */ void 	mov_from_cr;
/* 0x080487e9       4 */ /* unknown */ void 	mov_to_cr;
/* 0x080487ed       4 */ /* unknown */ void 	mov_from_dr;
/* 0x080487f1       4 */ /* unknown */ void 	mov_to_dr;
/* 0x080487f5       4 */ /* unknown */ void 	mov_from_tr;
/* 0x080487f9       4 */ /* unknown */ void 	mov_to_tr;
/* 0x080487fd       2 */ /* unknown */ void 	movs1;
/* 0x080487ff       3 */ /* unknown */ void 	movs2;
/* 0x08048802       2 */ /* unknown */ void 	movs3;
/* 0x08048804       5 */ /* unknown */ void 	movsx1;
/* 0x08048809       4 */ /* unknown */ void 	movsx2;
/* 0x0804880d       4 */ /* unknown */ void 	movsx3;
/* 0x08048811       5 */ /* unknown */ void 	movzx1;
/* 0x08048816       4 */ /* unknown */ void 	movzx2;
/* 0x0804881a       4 */ /* unknown */ void 	movzx3;
/* 0x0804881e       3 */ /* unknown */ void 	mul1;
/* 0x08048821       4 */ /* unknown */ void 	mul2;
/* 0x08048825       3 */ /* unknown */ void 	mul3;
/* 0x08048828       3 */ /* unknown */ void 	neg1;
/* 0x0804882b       4 */ /* unknown */ void 	neg2;
/* 0x0804882f       3 */ /* unknown */ void 	neg3;
/* 0x08048832       2 */ /* unknown */ void 	nop1;
/* 0x08048834       3 */ /* unknown */ void 	nop2;
/* 0x08048837       4 */ /* unknown */ void 	nop3;
/* 0x0804883b       5 */ /* unknown */ void 	nop4;
/* 0x08048840       6 */ /* unknown */ void 	nop5;
/* 0x08048846       7 */ /* unknown */ void 	nop6;
/* 0x0804884d       8 */ /* unknown */ void 	nop7;
/* 0x08048855       3 */ /* unknown */ void 	not1;
/* 0x08048858       4 */ /* unknown */ void 	not2;
/* 0x0804885c       3 */ /* unknown */ void 	not3;
/* 0x0804885f       3 */ /* unknown */ void 	or1;
/* 0x08048862       3 */ /* unknown */ void 	or2;
/* 0x08048865       5 */ /* unknown */ void 	or3;
/* 0x0804886a       5 */ /* unknown */ void 	or4;
/* 0x0804886f       6 */ /* unknown */ void 	or5;
/* 0x08048875       6 */ /* unknown */ void 	or6;
/* 0x0804887b       4 */ /* unknown */ void 	or7;
/* 0x0804887f       4 */ /* unknown */ void 	or8;
/* 0x08048883       6 */ /* unknown */ void 	or9;
/* 0x08048889       3 */ /* unknown */ void 	out1;
/* 0x0804888c       4 */ /* unknown */ void 	out2;
/* 0x08048890       3 */ /* unknown */ void 	out3;
/* 0x08048893       2 */ /* unknown */ void 	out4;
/* 0x08048895       3 */ /* unknown */ void 	out5;
/* 0x08048898       2 */ /* unknown */ void 	out6;
/* 0x0804889a       2 */ /* unknown */ void 	outs1;
/* 0x0804889c       3 */ /* unknown */ void 	outs2;
/* 0x0804889f       2 */ /* unknown */ void 	outs3;
/* 0x080488a1       4 */ /* unknown */ void 	pop1;
/* 0x080488a5       3 */ /* unknown */ void 	pop2;
/* 0x080488a8       3 */ /* unknown */ void 	pop3;
/* 0x080488ab       2 */ /* unknown */ void 	pop4;
/* 0x080488ad       2 */ /* unknown */ void 	pop_seg1;
/* 0x080488af       2 */ /* unknown */ void 	pop_seg2;
/* 0x080488b1       3 */ /* unknown */ void 	pop_seg3;
/* 0x080488b4       3 */ /* unknown */ void 	pop_seg4;
/* 0x080488b7       2 */ /* unknown */ void 	pop_seg5;
/* 0x080488b9       2 */ /* unknown */ void 	popa1;
/* 0x080488bb       3 */ /* unknown */ void 	popa2;
/* 0x080488be       2 */ /* unknown */ void 	popf1;
/* 0x080488c0       3 */ /* unknown */ void 	popf2;
/* 0x080488c3       4 */ /* unknown */ void 	push1;
/* 0x080488c7       3 */ /* unknown */ void 	push2;
/* 0x080488ca       3 */ /* unknown */ void 	push3;
/* 0x080488cd       2 */ /* unknown */ void 	push4;
/* 0x080488cf       3 */ /* unknown */ void 	push5;
/* 0x080488d2       6 */ /* unknown */ void 	push6;
/* 0x080488d8       6 */ /* unknown */ void 	push7;
/* 0x080488de       2 */ /* unknown */ void 	push_seg1;
/* 0x080488e0       2 */ /* unknown */ void 	push_seg2;
/* 0x080488e2       3 */ /* unknown */ void 	push_seg3;
/* 0x080488e5       3 */ /* unknown */ void 	push_seg4;
/* 0x080488e8       2 */ /* unknown */ void 	push_seg5;
/* 0x080488ea       2 */ /* unknown */ void 	pusha1;
/* 0x080488ec       3 */ /* unknown */ void 	pusha2;
/* 0x080488ef       2 */ /* unknown */ void 	pushf1;
/* 0x080488f1       3 */ /* unknown */ void 	pushf2;
/* 0x080488f4       3 */ /* unknown */ void 	rotate_once_rol_b;
/* 0x080488f7       4 */ /* unknown */ void 	rotate_once_rol_w;
/* 0x080488fb       3 */ /* unknown */ void 	rotate_once_rol_l;
/* 0x080488fe       3 */ /* unknown */ void 	rotate_once_ror_b;
/* 0x08048901       4 */ /* unknown */ void 	rotate_once_ror_w;
/* 0x08048905       3 */ /* unknown */ void 	rotate_once_ror_l;
/* 0x08048908       3 */ /* unknown */ void 	rotate_once_rcl_b;
/* 0x0804890b       4 */ /* unknown */ void 	rotate_once_rcl_w;
/* 0x0804890f       3 */ /* unknown */ void 	rotate_once_rcl_l;
/* 0x08048912       3 */ /* unknown */ void 	rotate_once_rcr_b;
/* 0x08048915       4 */ /* unknown */ void 	rotate_once_rcr_w;
/* 0x08048919       3 */ /* unknown */ void 	rotate_once_rcr_l;
/* 0x0804891c       3 */ /* unknown */ void 	rotate_once_shl_b;
/* 0x0804891f       4 */ /* unknown */ void 	rotate_once_shl_w;
/* 0x08048923       3 */ /* unknown */ void 	rotate_once_shl_l;
/* 0x08048926       3 */ /* unknown */ void 	rotate_once_shr_b;
/* 0x08048929       4 */ /* unknown */ void 	rotate_once_shr_w;
/* 0x0804892d       3 */ /* unknown */ void 	rotate_once_shr_l;
/* 0x08048930       3 */ /* unknown */ void 	rotate_once_sar_b;
/* 0x08048933       4 */ /* unknown */ void 	rotate_once_sar_w;
/* 0x08048937       3 */ /* unknown */ void 	rotate_once_sar_l;
/* 0x0804893a       3 */ /* unknown */ void 	rotate_cl_controlled_rol_b;
/* 0x0804893d       4 */ /* unknown */ void 	rotate_cl_controlled_rol_w;
/* 0x08048941       3 */ /* unknown */ void 	rotate_cl_controlled_rol_l;
/* 0x08048944       3 */ /* unknown */ void 	rotate_cl_controlled_ror_b;
/* 0x08048947       4 */ /* unknown */ void 	rotate_cl_controlled_ror_w;
/* 0x0804894b       3 */ /* unknown */ void 	rotate_cl_controlled_ror_l;
/* 0x0804894e       3 */ /* unknown */ void 	rotate_cl_controlled_rcl_b;
/* 0x08048951       4 */ /* unknown */ void 	rotate_cl_controlled_rcl_w;
/* 0x08048955       3 */ /* unknown */ void 	rotate_cl_controlled_rcl_l;
/* 0x08048958       3 */ /* unknown */ void 	rotate_cl_controlled_rcr_b;
/* 0x0804895b       4 */ /* unknown */ void 	rotate_cl_controlled_rcr_w;
/* 0x0804895f       3 */ /* unknown */ void 	rotate_cl_controlled_rcr_l;
/* 0x08048962       3 */ /* unknown */ void 	rotate_cl_controlled_shl_b;
/* 0x08048965       4 */ /* unknown */ void 	rotate_cl_controlled_shl_w;
/* 0x08048969       3 */ /* unknown */ void 	rotate_cl_controlled_shl_l;
/* 0x0804896c       3 */ /* unknown */ void 	rotate_cl_controlled_shr_b;
/* 0x0804896f       4 */ /* unknown */ void 	rotate_cl_controlled_shr_w;
/* 0x08048973       3 */ /* unknown */ void 	rotate_cl_controlled_shr_l;
/* 0x08048976       3 */ /* unknown */ void 	rotate_cl_controlled_sar_b;
/* 0x08048979       4 */ /* unknown */ void 	rotate_cl_controlled_sar_w;
/* 0x0804897d       3 */ /* unknown */ void 	rotate_cl_controlled_sar_l;
/* 0x08048980       4 */ /* unknown */ void 	rotate_imm8_rol_b;
/* 0x08048984       5 */ /* unknown */ void 	rotate_imm8_rol_w;
/* 0x08048989       4 */ /* unknown */ void 	rotate_imm8_rol_l;
/* 0x0804898d       4 */ /* unknown */ void 	rotate_imm8_ror_b;
/* 0x08048991       5 */ /* unknown */ void 	rotate_imm8_ror_w;
/* 0x08048996       4 */ /* unknown */ void 	rotate_imm8_ror_l;
/* 0x0804899a       4 */ /* unknown */ void 	rotate_imm8_rcl_b;
/* 0x0804899e       5 */ /* unknown */ void 	rotate_imm8_rcl_w;
/* 0x080489a3       4 */ /* unknown */ void 	rotate_imm8_rcl_l;
/* 0x080489a7       4 */ /* unknown */ void 	rotate_imm8_rcr_b;
/* 0x080489ab       5 */ /* unknown */ void 	rotate_imm8_rcr_w;
/* 0x080489b0       4 */ /* unknown */ void 	rotate_imm8_rcr_l;
/* 0x080489b4       4 */ /* unknown */ void 	rotate_imm8_shl_b;
/* 0x080489b8       5 */ /* unknown */ void 	rotate_imm8_shl_w;
/* 0x080489bd       4 */ /* unknown */ void 	rotate_imm8_shl_l;
/* 0x080489c1       4 */ /* unknown */ void 	rotate_imm8_shr_b;
/* 0x080489c5       5 */ /* unknown */ void 	rotate_imm8_shr_w;
/* 0x080489ca       4 */ /* unknown */ void 	rotate_imm8_shr_l;
/* 0x080489ce       4 */ /* unknown */ void 	rotate_imm8_sar_b;
/* 0x080489d2       5 */ /* unknown */ void 	rotate_imm8_sar_w;
/* 0x080489d7       4 */ /* unknown */ void 	rotate_imm8_sar_l;
/* 0x080489db       3 */ /* unknown */ void 	rep_ins1b;
/* 0x080489de       4 */ /* unknown */ void 	rep_ins1w;
/* 0x080489e2       3 */ /* unknown */ void 	rep_ins1l;
/* 0x080489e5       3 */ /* unknown */ void 	rep_ins2b;
/* 0x080489e8       4 */ /* unknown */ void 	rep_ins2w;
/* 0x080489ec       3 */ /* unknown */ void 	rep_ins2l;
/* 0x080489ef       3 */ /* unknown */ void 	rep_movs1b;
/* 0x080489f2       4 */ /* unknown */ void 	rep_movs1w;
/* 0x080489f6       3 */ /* unknown */ void 	rep_movs1l;
/* 0x080489f9       3 */ /* unknown */ void 	rep_movs2b;
/* 0x080489fc       4 */ /* unknown */ void 	rep_movs2w;
/* 0x08048a00       3 */ /* unknown */ void 	rep_movs2l;
/* 0x08048a03       3 */ /* unknown */ void 	rep_outs1b;
/* 0x08048a06       4 */ /* unknown */ void 	rep_outs1w;
/* 0x08048a0a       3 */ /* unknown */ void 	rep_outs1l;
/* 0x08048a0d       3 */ /* unknown */ void 	rep_outs2b;
/* 0x08048a10       4 */ /* unknown */ void 	rep_outs2w;
/* 0x08048a14       3 */ /* unknown */ void 	rep_outs2l;
/* 0x08048a17       3 */ /* unknown */ void 	rep_stos1b;
/* 0x08048a1a       4 */ /* unknown */ void 	rep_stos1w;
/* 0x08048a1e       3 */ /* unknown */ void 	rep_stos1l;
/* 0x08048a21       3 */ /* unknown */ void 	rep_stos2b;
/* 0x08048a24       4 */ /* unknown */ void 	rep_stos2w;
/* 0x08048a28       3 */ /* unknown */ void 	rep_stos2l;
/* 0x08048a2b       3 */ /* unknown */ void 	rep_cmps1b;
/* 0x08048a2e       4 */ /* unknown */ void 	rep_cmps1w;
/* 0x08048a32       3 */ /* unknown */ void 	rep_cmps1l;
/* 0x08048a35       3 */ /* unknown */ void 	rep_cmps2b;
/* 0x08048a38       4 */ /* unknown */ void 	rep_cmps2w;
/* 0x08048a3c       3 */ /* unknown */ void 	rep_cmps2l;
/* 0x08048a3f       3 */ /* unknown */ void 	rep_scas1b;
/* 0x08048a42       4 */ /* unknown */ void 	rep_scas1w;
/* 0x08048a46       3 */ /* unknown */ void 	rep_scas1l;
/* 0x08048a49       3 */ /* unknown */ void 	rep_scas2b;
/* 0x08048a4c       4 */ /* unknown */ void 	rep_scas2w;
/* 0x08048a50       3 */ /* unknown */ void 	rep_scas2l;
/* 0x08048a53       2 */ /* unknown */ void 	ret1;
/* 0x08048a55       3 */ /* unknown */ void 	ret2;
/* 0x08048a58       2 */ /* unknown */ void 	ret3;
/* 0x08048a5a       3 */ /* unknown */ void 	ret4;
/* 0x08048a5d       4 */ /* unknown */ void 	ret_pop1;
/* 0x08048a61       5 */ /* unknown */ void 	ret_pop2;
/* 0x08048a66       4 */ /* unknown */ void 	ret_pop3;
/* 0x08048a6a       5 */ /* unknown */ void 	ret_pop4;
/* 0x08048a6f       2 */ /* unknown */ void 	sahf;
/* 0x08048a71       3 */ /* unknown */ void 	sbb1;
/* 0x08048a74       5 */ /* unknown */ void 	sbb2;
/* 0x08048a79       6 */ /* unknown */ void 	sbb3;
/* 0x08048a7f       4 */ /* unknown */ void 	sbb4;
/* 0x08048a83       6 */ /* unknown */ void 	sbb5;
/* 0x08048a89       7 */ /* unknown */ void 	sbb6;
/* 0x08048a90       4 */ /* unknown */ void 	sbb7;
/* 0x08048a94       2 */ /* unknown */ void 	scas1;
/* 0x08048a96       3 */ /* unknown */ void 	scas2;
/* 0x08048a99       2 */ /* unknown */ void 	scas3;
/* 0x08048a9b       4 */ /* unknown */ void 	setcc_with_code_0;
/* 0x08048a9f       4 */ /* unknown */ void 	setcc_with_code_1;
/* 0x08048aa3       4 */ /* unknown */ void 	setcc_with_code_2;
/* 0x08048aa7       4 */ /* unknown */ void 	setcc_with_code_3;
/* 0x08048aab       4 */ /* unknown */ void 	setcc_with_code_4;
/* 0x08048aaf       4 */ /* unknown */ void 	setcc_with_code_5;
/* 0x08048ab3       4 */ /* unknown */ void 	setcc_with_code_6;
/* 0x08048ab7       4 */ /* unknown */ void 	setcc_with_code_7;
/* 0x08048abb       4 */ /* unknown */ void 	setcc_with_code_8;
/* 0x08048abf       4 */ /* unknown */ void 	setcc_with_code_9;
/* 0x08048ac3       4 */ /* unknown */ void 	setcc_with_code_a;
/* 0x08048ac7       4 */ /* unknown */ void 	setcc_with_code_b;
/* 0x08048acb       4 */ /* unknown */ void 	setcc_with_code_c;
/* 0x08048acf       4 */ /* unknown */ void 	setcc_with_code_d;
/* 0x08048ad3       4 */ /* unknown */ void 	setcc_with_code_e;
/* 0x08048ad7       4 */ /* unknown */ void 	setcc_with_code_f;
/* 0x08048adb       4 */ /* unknown */ void 	sgdt;
/* 0x08048adf       4 */ /* unknown */ void 	sidt;
/* 0x08048ae3       6 */ /* unknown */ void 	shld1;
/* 0x08048ae9       5 */ /* unknown */ void 	shld2;
/* 0x08048aee       5 */ /* unknown */ void 	shld3;
/* 0x08048af3       4 */ /* unknown */ void 	shld4;
/* 0x08048af7       6 */ /* unknown */ void 	shrd1;
/* 0x08048afd       5 */ /* unknown */ void 	shrd2;
/* 0x08048b02       5 */ /* unknown */ void 	shrd3;
/* 0x08048b07       4 */ /* unknown */ void 	shrd4;
/* 0x08048b0b       4 */ /* unknown */ void 	sldt;
/* 0x08048b0f       4 */ /* unknown */ void 	smsw;
/* 0x08048b13       2 */ /* unknown */ void 	stc;
/* 0x08048b15       2 */ /* unknown */ void 	std;
/* 0x08048b17       2 */ /* unknown */ void 	sti;
/* 0x08048b19       2 */ /* unknown */ void 	stos1;
/* 0x08048b1b       3 */ /* unknown */ void 	stos2;
/* 0x08048b1e       2 */ /* unknown */ void 	stos3;
/* 0x08048b20       4 */ /* unknown */ void 	str;
/* 0x08048b24       3 */ /* unknown */ void 	sub1;
/* 0x08048b27       3 */ /* unknown */ void 	sub2;
/* 0x08048b2a       5 */ /* unknown */ void 	sub3;
/* 0x08048b2f       5 */ /* unknown */ void 	sub4;
/* 0x08048b34       6 */ /* unknown */ void 	sub5;
/* 0x08048b3a       6 */ /* unknown */ void 	sub6;
/* 0x08048b40       4 */ /* unknown */ void 	sub7;
/* 0x08048b44       3 */ /* unknown */ void 	test1;
/* 0x08048b47       5 */ /* unknown */ void 	test2;
/* 0x08048b4c       6 */ /* unknown */ void 	test3;
/* 0x08048b52       4 */ /* unknown */ void 	test4;
/* 0x08048b56       6 */ /* unknown */ void 	test5;
/* 0x08048b5c       7 */ /* unknown */ void 	test6;
/* 0x08048b63       3 */ /* unknown */ void 	test7;
/* 0x08048b66       4 */ /* unknown */ void 	test8;
/* 0x08048b6a       3 */ /* unknown */ void 	test9;
/* 0x08048b6d       4 */ /* unknown */ void 	verr;
/* 0x08048b71       4 */ /* unknown */ void 	verw;
/* 0x08048b75       2 */ /* unknown */ void 	wait;
/* 0x08048b77       3 */ /* unknown */ void 	xchg1;
/* 0x08048b7a       2 */ /* unknown */ void 	xchg2;
/* 0x08048b7c       3 */ /* unknown */ void 	xchg3;
/* 0x08048b7f       4 */ /* unknown */ void 	xchg4;
/* 0x08048b83       3 */ /* unknown */ void 	xchg5;
/* 0x08048b86       2 */ /* unknown */ void 	xlat1;
/* 0x08048b88       3 */ /* unknown */ void 	xlat2;
/* 0x08048b8b       3 */ /* unknown */ void 	xor1;
/* 0x08048b8e       3 */ /* unknown */ void 	xor2;
/* 0x08048b91       5 */ /* unknown */ void 	xor3;
/* 0x08048b96       5 */ /* unknown */ void 	xor4;
/* 0x08048b9b       6 */ /* unknown */ void 	xor5;
/* 0x08048ba1       6 */ /* unknown */ void 	xor6;
/* 0x08048ba7       4 */ /* unknown */ void 	xor7;
/* 0x08048bab       4 */ /* unknown */ void 	xor8;
/* 0x08048baf       6 */ /* unknown */ void 	xor9;
/* 0x08048bb5    2443 */ /* unknown */ void 	main;
/* 0x08049540      16 */ /* unknown */ void 	__libc_csu_fini;
/* 0x08049550      90 */ /* unknown */ void 	__libc_csu_init;
/* 0x080495aa       6 */ /* unknown */ void 	__i686.get_pc_thunk.bx;
/* 0x080495b0      44 */ /* unknown */ void 	__do_global_ctors_aux;
/* 0x080495dc       0 */ /* unknown */ void 	_fini;
/* 0x080495f8       4 */ /* unknown */ void 	_fp_hw;
/* 0x080495fc       4 */ /* unknown */ void 	_IO_stdin_used;
/* 0x08049600       0 */ /* unknown */ void 	__dso_handle;
/* 0x080496a0       0 */ /* unknown */ void 	__FRAME_END__;
/* 0x0804a6a4       0 */ /* unknown */ void 	__CTOR_LIST__;
/* 0x0804a6a4       0 */ /* unknown */ void 	__init_array_end;
/* 0x0804a6a4       0 */ /* unknown */ void 	__init_array_start;
/* 0x0804a6a8       0 */ /* unknown */ void 	__CTOR_END__;
/* 0x0804a6ac       0 */ /* unknown */ void 	__DTOR_LIST__;
/* 0x0804a6b0       0 */ /* unknown */ void 	__DTOR_END__;
/* 0x0804a6b4       0 */ /* unknown */ void 	__JCR_LIST__;
/* 0x0804a6b4       0 */ /* unknown */ void 	__JCR_END__;
/* 0x0804a6b8       0 */ /* unknown */ void 	_DYNAMIC;
/* 0x0804a784       0 */ /* unknown */ void 	_GLOBAL_OFFSET_TABLE_;
/* 0x0804a79c       0 */ /* unknown */ void 	data_start;
/* 0x0804a79c       0 */ /* unknown */ void 	__data_start;
/* 0x0804a7a0       1 */ /* unknown */ void 	completed.5978;
/* 0x0804a7a4       4 */ /* unknown */ void 	dtor_idx.5980;
#if 0 /* auxiliary information */
# Current option values:
option: +asmflush
option: -compactcalls
option: +compactexprs
option: +compactifs
option: +compset
option: -dfoproc
option: -disasmonly
option: -displaylabels
option: +doblocks
option: +docase
option: +dofor
option: +doifs
option: +dointrinsics
option: +doloops
option: +donullgotos
option: +dopackloops
option: +dopackstmt
option: +doremlabs
option: +dosimplify
option: -dosort
option: +dostmts
option: +doswitch
option: +dowhile
option: -dumpaddrs
option: -dumpcall
option: -dumpcomments
option: -dumpdfo
option: +dumpdoms
option: -dumpsblocks
option: -dumpsets
option: -dumpsizes
option: -dumpstmtid
option: +fatcase
option: -flag16
option: +fullscreen
option: -genpattern
option: -help
option: -hexconst
option: -html
option: +insertlabels
option: -int16
option: +int32
option: -interactive
option: -isvb5
option: +locals
option: -nohtmltabs
option: -nostackoffs
option: -objdump
option: -okclone
option: -outprocs
option: -outrefs
option: -overrule
option: +rdonly
option: -showblocks
option: -showjump
option: -showlabel
option: -showprotosym
option: -showreg
option: -showstring
option: -silent
option: +simplifyexprs
option: -stackalign16
option: -stackalign4
option: -stackalign8
option: -strallregions
option: -traceall
option: -tracesets
option: +types
option: +usesymtab
option: -validatebr
option: -validatereg
option: +validatestr
#endif
