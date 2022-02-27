/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11000 */
#include <stdint.h>
 
void entry0 (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    /* [00] -r-x section size 4096 named .text */
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r7 = r3;
    fpreset ();
    pei386_runtime_relocator ();
    atexit_init ();
    gccmain ();
    r0 = r4;
    r1 = r5;
    r2 = r6;
    r3 = r7;
    r0 = WinMain ();
    r4 = r0;
    cexit ();
    r0 = 0x42;
    r1 = r4;
    TerminateProcess ();
    while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11050 */
#include <stdint.h>
 
int32_t main () {
    int32_t var_16h;
    char * s1;
    int32_t var_ch;
    int32_t var_4h;
    gccmain ();
    r0 = *(0x110c0);
    puts (r0);
    r0 = "IOLI_Crackme_Level_0x00";
    printf ("IOLI_Crackme_Level_0x00");
    r3 = fp - 0x16;
    r0 = "Password:_";
    r1 = r3;
    scanf ("Password:_", r1, r2, r3);
    r3 = fp - 0x16;
    r0 = r3;
    r1 = "_s";
    r0 = strcmp (r0, "_s");
    r3 = r0;
    if (r3 != 0) {
        r0 = "_50382";
        puts ("_50382");
    } else {
        r0 = "Invalid_Password_";
        puts ("Invalid_Password_");
    }
    r3 = 0;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x110dc */
#include <stdint.h>
 
void pei386_runtime_relocator () {
    r0 = *(0x11110);
    if (r0 < lr) {
    }
    ip = *(0x0001111c);
    do {
        r3 = *((r0 + 4));
        r2 = *((r3 + ip));
        r1 = *(r0);
        r0 += 8;
        r2 += r1;
        *((r3 + ip)) = r2;
    } while (r0 <= lr);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11120 */
#include <stdint.h>
 
void atexit_first (int32_t arg2) {
    r1 = arg2;
    r3 = *(0x0001112c);
    r0 = *(r3);
    pc = lr;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return r4 = r1 & r0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11698 */
#include <stdint.h>
 
void fcloseall () {
    ip = _fcloseall;
    pc = _fcloseall;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11130 */
#include <stdint.h>
 
void closeall_streams () {
    fcloseall ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x1113c */
#include <stdint.h>
 
void exit (int32_t arg1) {
    r0 = arg1;
    r4 = r0;
    closeall_streams ();
    r0 = 0x42;
    r1 = r4;
    TerminateProcess ();
    while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11154 */
#include <stdint.h>
 
void c_exit () {
    closeall_streams ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11160 */
#include <stdint.h>
 
void dllonexit (int32_t arg1, int32_t arg2) {
    r0 = arg1;
    r1 = arg2;
    r4 = r0;
    r5 = r2;
    r6 = r1 - 0;
    if (r6 != r1) {
        r0 = *(r6);
        __asm ("cmpne r0, 0");
        if (r2 == 0) {
            goto label_0;
        }
        r3 = *(r2);
        if (r3 == 0) {
            goto label_0;
        }
        r3 -= r0;
        r3 >>= 2;
        r1 = r3 + 1;
        if (r1 <= 0) {
            goto label_0;
        }
        r7 = r1 << 2;
        r1 = r7;
        r0 = realloc ();
        if (r0 == 0) {
            *(r6) = r0;
        }
        if (r0 == 0) {
            r3 = r0 + r7;
        }
        if (r0 == 0) {
            *(r5) = r3;
        }
        if (r0 == 0) {
            *((r3 - 4)) = r4;
        }
        if (r0 != 0) {
            goto label_1;
        }
    }
label_0:
    r4 = 0;
label_1:
    r0 = r4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x111d4 */
#include <stdint.h>
 
void onexit (int32_t arg1) {
    r0 = arg1;
    r1 = *(0x000111e8);
    r2 = *(0x000111ec);
    dllonexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x111f0 */
#include <stdint.h>
 
void atexit (int32_t arg1) {
    r0 = arg1;
    r1 = *(0x1120c);
    r2 = *(0x11210);
    r0 = dllonexit ();
    if (r0 == 0) {
        r0 = 0;
    }
    if (r0 != 0) {
        r0 = ~0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11218 */
#include <stdint.h>
 
void dll_exit () {
    r3 = *(0x11284);
    r0 = *(0x11284);
    if (r0 == 0) {
        goto label_0;
    }
    r3 = *(0x11288);
    r2 = *(0x11288);
    r3 = r2 - 4;
    if (r0 > r3) {
        goto label_1;
    }
    r4 = r2 - 8;
    r6 = *(0x11284);
    do {
        r5 = r4;
        r3 = *((r4 + 4));
        if (r3 == 0) {
            lr = pc;
        }
        if (r3 == 0) {
            pc = r3;
        }
        r0 = *(r6);
        r4 -= 4;
    } while (r0 < r5);
label_1:
    fcn_00011674 ();
    r2 = 0;
    r3 = *(0x11284);
    *(r3) = r2;
label_0:
    r0 = 0;
    fflush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11290 */
#include <stdint.h>
 
void cexit () {
    dll_exit ();
    closeall_streams ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x112a0 */
#include <stdint.h>
 
void exit (int32_t arg1) {
    r0 = arg1;
    r4 = r0;
    cexit ();
    r0 = 0x42;
    r1 = r4;
    TerminateProcess ();
    while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x112b8 */
#include <stdint.h>
 
void atexit_init () {
    r0 = 0x80;
    malloc ();
    r3 = *(0x112e8);
    *(r3) = r0;
    r3 = 0;
    *(r0) = r3;
    r3 = *(0x112ec);
    *(r3) = r0;
    r0 = 1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11668 */
#include <stdint.h>
 
void malloc () {
    ip = *(0x11668);
    pc = *(0x11668);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x112f4 */
#include <stdint.h>
 
void do_global_dtors () {
    r3 = *(0x11330);
    r4 = *(0x11330);
    do {
        lr = pc;
        pc = r3;
        r2 = *(r4);
        r3 = r2 + 4;
        *(r4) = r3;
        r3 = *((r2 + 4));
    } while (r3 != 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11338 */
#include <stdint.h>
 
void do_global_ctors () {
    r3 = *(0x11394);
    r2 = *(0x11394);
    if (r2 != 1) {
        goto label_0;
    }
    r0 = r3;
    r2++;
    do {
        r1 = r2 + 1;
        r3 = *((r0 += 4));
        if (r3 == 0) {
            r2 = r1;
        }
    } while (r3 != 0);
label_0:
    if (r2 == 0) {
        goto label_1;
    }
    r3 = *(0x11394);
    r5 = r3 + (r2 << 2);
    r4 = r2;
    do {
        lr = pc;
        pc = *(r5);
        r5 += -4;
        r4--;
    } while (r4 != r4);
label_1:
    r0 = sym.__do_global_dtors;
    atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x113a0 */
#include <stdint.h>
 
void gccmain () {
    r2 = *(0x113c0);
    r3 = *(0x113c0);
    r3++;
    *(r2) = r3;
    do_global_ctors ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x113c8 */
#include <stdint.h>
 
void WinMain () {
    LPWSTR lpFilename;
    int32_t var_1h;
    int32_t var_400h;
    r7 = r2;
    r0 = 0;
    r3 = *(0x11608);
    r2 = sp + 0x400;
    *((r2 + r3)) = r0;
    r1 = sp;
    r2 = 0x200;
    r0 = GetModuleFileNameW ();
    r4 = r0;
    if (r7 != 0) {
        r6 = r7;
    }
    if (r7 != 0) {
        r0 = r7;
        r0 = wcslen ();
        r6 = r0;
    }
    r0 = r6 + 2;
    r0 = r4 + r0;
    r0 = malloc ();
    r5 = r0 - 0;
    if (r5 != r0) {
        goto label_1;
    }
    r0 += 0x42;
    r1 = ~0;
    TerminateProcess ();
    while (1);
label_1:
    r0 = 4;
    malloc ();
    r3 = *(0x1160c);
    *(r3) = r0;
    if (r0 == 0) {
        r0 += 0x42;
        r1 = ~0;
        TerminateProcess ();
    }
    *(r0) = r5;
    r4 = sp;
    r0 = sp;
    r0 = wcslen ();
    r2 = r0 + 1;
    r0 = r5;
    r1 = sp;
    wcstombs ();
    r2 = *(0x11610);
    r3 = *(0x11610);
    r3++;
    *(r2) = r3;
    if (r6 <= 0) {
        goto label_2;
    }
    r3 = *(0x1160c);
    r4 = *(0x1160c);
    r0 = r4;
    r0 = strlen ();
    r4 += r0;
    r4++;
    r0 = r4;
    r1 = r7;
    r2 = r6 + 1;
    wcstombs ();
    while (1);
    r0 = r4;
    r0 = strlen ();
    r8 = r4 + r0;
    if (r4 == 0) {
        goto label_3;
    }
    sl = 1;
label_0:
    r0 = r4;
    r1 = *(0x11614);
    r0 = strspn ();
    r6 = r4 + r0;
    r0 = *((r4 + r0));
    if (r0 == 0) {
        goto label_4;
    }
    r2 = "_";
    r3 = *(r2);
    if (r3 == 0) {
        goto label_5;
    }
    if (r0 == r3) {
        r3 = r0 << 0x18;
    }
    __asm ("asrne ip, r3, 0x18");
    if (r0 != r3) {
        goto label_6;
    }
    goto label_7;
    do {
        r2++;
        r3 <<= 0x18;
        if (ip == r3) {
            goto label_7;
        }
label_6:
        r3 = *((r2 + 1));
    } while (r3 != 0);
    goto label_5;
label_7:
    r6++;
    r1 = r0 << 0x18;
    r0 = r6;
    r1 >>= 0x18;
    r0 = strchr ();
    r4 = r0 - 0;
    if (r4 != r0) {
        r4 = r8;
    }
    goto label_8;
label_5:
    r0 = r6;
    r1 = *(0x11614);
    r0 = strcspn ();
    r4 = r6 + r0;
label_8:
    r3 = 0;
    *(r4) = r3;
    sl++;
    r7 = *(0x1160c);
    r5 = sl << 2;
    r0 = *(0x1160c);
    r1 = r5;
    r0 = realloc ();
    if (r0 == 0) {
        goto label_9;
    }
    *(r7) = r0;
    r3 = r5 + r0;
    *((r3 - 4)) = r6;
    if (r4 != r8) {
        r4++;
        goto label_10;
    }
    if (r4 != r8) {
label_10:
        goto label_0;
    }
label_4:
    r3 = *(0x11610);
    *(r3) = sl;
    if (sl >= 0) {
        goto label_2;
    }
    do {
        r0 = 0x42;
        r1 = ~0;
        TerminateProcess ();
label_9:
        r2 = ~0;
        r3 = *(0x11610);
        *(r3) = r2;
    } while (1);
label_3:
    r2 = 1;
    r3 = *(0x11610);
    *(r3) = r2;
label_2:
    ip = *(0x11610);
    r2 = *(0x1160c);
    r3 = 0;
    offset_0 = ip << 2;
    *((r2 + offset_0)) = r3;
    r0 = *(0x11610);
    r1 = *(0x1160c);
    main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x1165c */
#include <stdint.h>
 
void printf () {
    ip = printf;
    pc = printf;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x116d4 */
#include <stdint.h>
 
void wcslen () {
    ip = wcslen;
    pc = wcslen;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x116c8 */
#include <stdint.h>
 
void GetModuleFileNameW () {
    ip = GetModuleFileNameW;
    pc = GetModuleFileNameW;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11638 */
#include <stdint.h>
 
void puts () {
    ip = puts;
    pc = puts;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x1162c */
#include <stdint.h>
 
void TerminateProcess () {
    ip = TerminateProcess;
    pc = TerminateProcess;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x116ec */
#include <stdint.h>
 
void wcstombs () {
    ip = *(0x116ec);
    pc = *(0x116ec);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11680 */
#include <stdint.h>
 
void fflush () {
    ip = *(0x11680);
    pc = *(0x11680);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11620 */
#include <stdint.h>
 
void fpreset () {
    ip = _fpreset;
    pc = _fpreset;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x1168c */
#include <stdint.h>
 
void realloc () {
    ip = *(0x1168c);
    pc = *(0x1168c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11644 */
#include <stdint.h>
 
void strcmp () {
    ip = *(0x11644);
    pc = *(0x11644);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x116bc */
#include <stdint.h>
 
void strcspn () {
    ip = strcspn;
    pc = strcspn;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11650 */
#include <stdint.h>
 
void scanf () {
    ip = *(0x11650);
    pc = *(0x11650);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x116a4 */
#include <stdint.h>
 
void strspn () {
    ip = *(0x116a4);
    pc = *(0x116a4);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x116e0 */
#include <stdint.h>
 
void strlen () {
    ip = *(0x116e0);
    pc = *(0x116e0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x116b0 */
#include <stdint.h>
 
void strchr () {
    ip = *(0x116b0);
    pc = *(0x116b0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x00/arm_pe/subject.exe @ 0x11674 */
#include <stdint.h>
 
void fcn_00011674 () {
    ip = *(0x11674);
    pc = *(0x11674);
}
