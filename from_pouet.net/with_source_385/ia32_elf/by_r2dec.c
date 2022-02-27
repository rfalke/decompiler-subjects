/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x80489a4 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 1092 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym._init, sym._fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x80488b4 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x80487fc */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 23 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x80489c8 */
#include <stdint.h>
 
int32_t call_gmon_start (void) {
    int32_t var_4h;
    void (*0x80489d4)(uint32_t) (ebx);
    ebx += 0x1a84;
    eax = *((ebx + 0x6c));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048a28 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        _comment (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048dc4 */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    eax = .ctors;
    ebx = .ctors;
    if (eax == -1) {
        goto label_0;
    }
    do {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    } while (eax != -1);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048de8 */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h;
    /* [13] -r-x section size 29 named .fini */
    void (*0x8048df4)(uint32_t) (ebx);
    ebx += 0x1664;
    _do_global_dtors_aux ();
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x80489ec */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.1) != 0) {
        goto label_0;
    }
    eax = *(obj.p.0);
    edx = *(eax);
    if (edx == 0) {
        goto label_1;
    }
    do {
        eax += 4;
        *(obj.p.0) = eax;
        void (*edx)() ();
        eax = *(obj.p.0);
        edx = *(eax);
    } while (edx != 0);
label_1:
    *(obj.completed.1) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048c0c */
#include <stdint.h>
 
uint32_t MikmodInit (void) {
    uint32_t var_4h;
    MikMod_RegisterAllDrivers ();
    MikMod_RegisterAllLoaders ();
    eax = MikMod_Init ();
    if (eax != 0) {
        eax = MikMod_strerror ();
        fprintf (*(obj.stderr), "MikMod: %s\n");
        exit (1);
    }
    eax = Player_Load ();
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        eax = MikMod_strerror ();
        printf ("MikMod Error: %s\n");
        exit (1);
    }
    Player_Start ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x80488e4 */
#include <stdint.h>
 
void MikMod_RegisterAllDrivers (void) {
    MikMod_RegisterAllDrivers ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048844 */
#include <stdint.h>
 
void MikMod_RegisterAllLoaders (void) {
    MikMod_RegisterAllLoaders ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x80488f4 */
#include <stdint.h>
 
void MikMod_Init (void) {
    MikMod_Init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048884 */
#include <stdint.h>
 
void MikMod_strerror (void) {
    MikMod_strerror ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048854 */
#include <stdint.h>
 
void fprintf (void) {
    fprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048924 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048964 */
#include <stdint.h>
 
void Player_Load (void) {
    Player_Load ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x80488d4 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048944 */
#include <stdint.h>
 
void Player_Start (void) {
    Player_Start ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048a98 */
#include <stdint.h>
 
int32_t XPrint (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, char * s) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_12h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((ebp - 8)) = eax;
    *((ebp - 4)) = edx;
    eax = *((ebp + 0x10));
    edx = *((ebp + 0x14));
    *((ebp - 0x10)) = eax;
    *((ebp - 0xc)) = edx;
    eax = strlen (*((ebp + 0x18)));
    *(fp_stack--) = *((ebp - 0x10));
    ax = *((ebp - 0x12));
    ah = 0xc;
    *((ebp - 0x14)) = ax;
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x18));
    *(fp_stack--) = *((ebp - 8));
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x18));
    XDrawString ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048894 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048824 */
#include <stdint.h>
 
void XDrawString (void) {
    XDrawString ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048b14 */
#include <stdint.h>
 
uint32_t init (int32_t arg_8h, int32_t arg_ch) {
    eax = XOpenDisplay ();
    *(obj.dis) = eax;
    eax = dis;
    eax = *((eax + 0x8c));
    eax = dis;
    eax = *((eax + 0x8c));
    eax = XCreateSimpleWindow ();
    *(obj.win) = eax;
    XMapWindow ();
    eax = dis;
    eax = *((eax + 0x8c));
    eax = *((eax + 0x30));
    *(obj.colormap) = eax;
    eax = XCreateGC ();
    *(obj.green_gc) = eax;
    XParseColor ();
    XAllocColor ();
    XSetForeground ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048994 */
#include <stdint.h>
 
void XOpenDisplay (void) {
    XOpenDisplay ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048864 */
#include <stdint.h>
 
void XCreateSimpleWindow (void) {
    XCreateSimpleWindow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048834 */
#include <stdint.h>
 
void XMapWindow (void) {
    XMapWindow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048984 */
#include <stdint.h>
 
void XCreateGC (void) {
    XCreateGC ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x80488a4 */
#include <stdint.h>
 
void XParseColor (void) {
    XParseColor ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048904 */
#include <stdint.h>
 
void XAllocColor (void) {
    XAllocColor ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048874 */
#include <stdint.h>
 
void XSetForeground (void) {
    XSetForeground ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048cbe */
#include <stdint.h>
 
int32_t main (void) {
    eax = 0;
    init (0x12c, 0x64);
    FontInit ("12x24");
    MikmodInit ();
    do {
        *(fp_stack--) = *(obj.rut);
        *(fp_stack--) = *(0x8048e40);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        sin ("Hello everyone, this is a long boring scroller brought to you by **** l33t kru, we have no idea what to write in here, so lets have a technical description of the production. We spent 2 hours making this masterpiece, it is so advanced and all that, bla bla. Let's get to the fun part of this scroller <insert random german stuff here>. Fr09 is here to make you happy, and the product and all that, i like the speakers! And they have girls? What. Okey, seriously, this is a stupid production, we don't know why we made it, but we did, so there, hah! If you enjoy stuff like this you are our friend, at least not our enemy.                                             Seriously: this production sucks, it depends xlib, we had no idea how to make the window doublebuffer and we didn't bother googling for the answer, so we made some stupid stuff which would not make it flimmer that much, by not clearing the screen every frame, hah. Okey. This should not take a fast machine to run, but since we don't have a timing routine of some sort it will not run independent of the framerate, which means if you have a fast computer this scroller will almost be unreadable, haha, which also means you are clearly owned by this scroller. There is so much interresting information here that I think you would like to read, but then again, no. Why am I writing this stuff? Probably because I am bored, and i think there is a lot of spiellieng missteiks as well so if you feel like whining send all your whine requests to a random SCO email. This production was made possible thanks to the following people: ... oh wait. We choose to stay anonymous. We greet everyone, because we are so nice and all that. We are SUPER. Okey, not really. THE END.                                            Hah, tricked you which scrollers always do. Do you feel like continue reading? Okey, well, we do have a few more things to say. Blizzard recently shut down the freecraft project, damn Blizzard for this, you can read more about this in a slashdot article, or something li");
        *(fp_stack--) = *(0x8048e48);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *(0x8048e50);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(obj.rut);
        *(fp_stack--) = *(0x8048e58);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *(0x8048e5c);
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        esp = esp - 8;
        *(esp) = fp_stack[0];
        fp_stack--;
        ax = XPrint ();
        *(fp_stack--) = *(obj.rut);
        *(fp_stack--) = *(0x8048e60);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(obj.rut) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(obj.tim);
        *(fp_stack--) = 1.0;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(obj.tim) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *(obj.tim);
        *(fp_stack--) = *(0x8048e68);
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        if ((ah & 0x45) != 0) {
        } else {
            XClearWindow ();
            eax = 0;
            *(obj.tim) = eax;
        }
        MikMod_Update ();
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048a54 */
#include <stdint.h>
 
int32_t FontInit (int32_t arg_8h) {
    int32_t var_8h;
    int32_t var_4h;
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = XLoadQueryFont ();
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    XSetFont ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x80488c4 */
#include <stdint.h>
 
void XLoadQueryFont (void) {
    XLoadQueryFont ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048914 */
#include <stdint.h>
 
void XSetFont (void) {
    XSetFont ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048934 */
#include <stdint.h>
 
void MikMod_Update (void) {
    MikMod_Update ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048954 */
#include <stdint.h>
 
void XClearWindow (void) {
    XClearWindow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048974 */
#include <stdint.h>
 
void sin (void) {
    sin ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_pouet.net/with_source_385/ia32_elf/subject.exe @ 0x8048702 */
#include <stdint.h>
 
int32_t fcn_08048702 (int32_t arg_4h, int32_t arg_c070804h, int32_t arg_f070804h, int32_t arg_12070804h, int32_t arg_15070804h, int32_t arg_1a070804h, int32_t arg_22070804h) {
    *(eax) += al;
    *(eax) += eax;
    *(eax) += eax;
    al = *(ecx);
    do {
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
        *(eax) += al;
label_0:
        *(eax) += al;
        *((ecx + 0x69)) += ch;
        eax |= 0x20000;
        al = void (*0x8048722)() ();
        *(eax) += al;
        ah += al;
        /* [08] -r-- section size 24 named .rel.dyn */
        __asm ("les esp, [esp + eax + 0x240608]");
        al += ah;
        *(es:edi) = *(esi);
        esi++;
        es:edi++;
        al += 8;
        eax += 0xe4000009;
        *(es:edi) = *(esi);
        esi++;
        es:edi++;
        al += 8;
        eax += 0x64000014;
        /* [09] -r-- section size 192 named .rel.plt */
        *(es:edi) = *(fs:esi);
        fs:esi++;
        es:edi++;
        al += 8;
        *(eax) += eax;
        *((eax - 0x5c)) += ch;
        al += 8;
        al += *(eax);
        *(edi) |= al;
        al += 0;
        *((eax - 0x5c)) += dh;
        al += 8;
        eax += 0xa4740000;
        al += 8;
        *(eax) += al;
    } while (*(eax) < 0);
    al += 8;
    *(eax) += al;
    if (*(eax) < 0) {
        goto label_0;
    }
    al += 8;
    al |= *(eax);
    *((eax + 0x70804a4)) += al;
    eax |= *(eax);
    *(eax) += al;
    *((esp + eax + 0xe0708)) = ah;
    *(eax) += al;
    *(es:edi) = *(esi);
    esi++;
    es:edi++;
    al += 8;
    *(eax) += al;
    *(eax) += al;
    eax = (int32_t) ax;
    *(es:edi) = *(esi);
    esi++;
    es:edi++;
    al += 8;
    eax += *(eax);
    *(eax) += al;
    al = *(0x70804a4);
    *(eax) += al;
    *(es:edi) = *(esi);
    esi++;
    es:edi++;
    *(es:edi) = *(esi);
    esi++;
    es:edi++;
    al += 8;
    es = ss;
    *(eax) += al;
    al += 8;
    es = ss;
    *(eax) -= al;
    *(eax) += al;
    al = 0xa4;
    al += 8;
    eax -= 0xa4b40000;
    al += 8;
    *(eax) += al;
    eax = 0x70804a4;
    *(eax) &= al;
    *(eax) += al;
}
