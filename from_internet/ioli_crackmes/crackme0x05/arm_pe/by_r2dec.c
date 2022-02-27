/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11000 */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11050 */
#include <stdint.h>
 
void parell (char * arg1) {
    char * s;
    int32_t var_10h;
    int32_t var_sp_14h;
    int32_t var_4h;
    r0 = arg1;
    *((fp - 0x14)) = r0;
    r3 = fp - 0x10;
    r0 = *((fp - 0x14));
    r1 = *(0x1109c);
    r2 = r3;
    sscanf ();
    r3 = *((fp - 0x10));
    r3 &= 1;
    if (r3 == 0) {
        r0 = "_d";
        puts ("_d");
        r0 = 0;
        exit (r0);
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11744 */
#include <stdint.h>
 
void sscanf () {
    ip = *(0x11744);
    pc = *(0x11744);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x1172c */
#include <stdint.h>
 
void puts () {
    ip = puts;
    pc = puts;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x1137c */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x110a8 */
#include <stdint.h>
 
void check (char * arg1) {
    char * var_24h;
    char * s;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_4h;
    r0 = arg1;
    *((fp - 0x24)) = r0;
    r3 = 0;
    *((fp - 0x18)) = r3;
    r3 = 0;
    *((fp - 0x14)) = r3;
    while (r4 <= r3) {
        r3 = *((fp - 0x14));
        r2 = r3;
        r3 = *((fp - 0x24));
        r3 = r2 + r3;
        r3 = *(r3);
        *((fp - 0x1d)) = r3;
        r3 = fp - 0x1d;
        r2 = fp - 0x1c;
        r0 = r3;
        r1 = *(0x11150);
        sscanf ();
        r2 = *((fp - 0x1c));
        r3 = *((fp - 0x18));
        r3 += r2;
        *((fp - 0x18)) = r3;
        r3 = *((fp - 0x18));
        if (r3 == 0x10) {
            r0 = *((fp - 0x24));
            parell ();
        }
        r3 = *((fp - 0x14));
        r3++;
        *((fp - 0x14)) = r3;
        r4 = *((fp - 0x14));
        r0 = *((fp - 0x24));
        r0 = strlen ();
        r3 = r0;
    }
    r0 = "_d";
    puts ("_d");
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x1115c */
#include <stdint.h>
 
int32_t main () {
    int32_t var_70h;
    int32_t var_sp_70h;
    int32_t var_ch;
    int32_t var_4h;
    gccmain ();
    r0 = *(0x111a8);
    puts (r0);
    r0 = "IOLI_Crackme_Level_0x05";
    printf ("IOLI_Crackme_Level_0x05");
    r3 = fp - 0x70;
    r0 = "Password:_";
    r1 = r3;
    scanf ("Password:_", r1, r2, r3);
    r3 = fp - 0x70;
    r0 = r3;
    check ();
    r3 = 0;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x1147c */
#include <stdint.h>
 
void gccmain () {
    r2 = *(0x1149c);
    r3 = *(0x1149c);
    r3++;
    *(r2) = r3;
    do_global_ctors ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11414 */
#include <stdint.h>
 
void do_global_ctors () {
    r3 = *(0x11470);
    r2 = *(0x11470);
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
    r3 = *(0x11470);
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11738 */
#include <stdint.h>
 
void printf () {
    ip = printf;
    pc = printf;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11714 */
#include <stdint.h>
 
void scanf () {
    ip = *(0x11714);
    pc = *(0x11714);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x111b8 */
#include <stdint.h>
 
void pei386_runtime_relocator () {
    r0 = *(0x111ec);
    if (r0 < lr) {
    }
    ip = *(0x000111f8);
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x111fc */
#include <stdint.h>
 
void atexit_first (int32_t arg2) {
    r1 = arg2;
    r3 = *(0x00011208);
    r0 = *(r3);
    pc = lr;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return r4 = r1 & r0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11780 */
#include <stdint.h>
 
void fcloseall () {
    ip = _fcloseall;
    pc = _fcloseall;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x1120c */
#include <stdint.h>
 
void closeall_streams () {
    fcloseall ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11218 */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11230 */
#include <stdint.h>
 
void c_exit () {
    closeall_streams ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x1123c */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x112b0 */
#include <stdint.h>
 
void onexit (int32_t arg1) {
    r0 = arg1;
    r1 = *(0x000112c4);
    r2 = *(0x000112c8);
    dllonexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x112cc */
#include <stdint.h>
 
void atexit (int32_t arg1) {
    r0 = arg1;
    r1 = *(0x112e8);
    r2 = *(0x112ec);
    r0 = dllonexit ();
    if (r0 == 0) {
        r0 = 0;
    }
    if (r0 != 0) {
        r0 = ~0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x112f4 */
#include <stdint.h>
 
void dll_exit () {
    r3 = *(0x11360);
    r0 = *(0x11360);
    if (r0 == 0) {
        goto label_0;
    }
    r3 = *(0x11364);
    r2 = *(0x11364);
    r3 = r2 - 4;
    if (r0 > r3) {
        goto label_1;
    }
    r4 = r2 - 8;
    r6 = *(0x11360);
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
    fcn_0001175c ();
    r2 = 0;
    r3 = *(0x11360);
    *(r3) = r2;
label_0:
    r0 = 0;
    fflush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x1136c */
#include <stdint.h>
 
void cexit () {
    dll_exit ();
    closeall_streams ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11394 */
#include <stdint.h>
 
void atexit_init () {
    r0 = 0x80;
    malloc ();
    r3 = *(0x113c4);
    *(r3) = r0;
    r3 = 0;
    *(r0) = r3;
    r3 = *(0x113c8);
    *(r3) = r0;
    r0 = 1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11750 */
#include <stdint.h>
 
void malloc () {
    ip = *(0x11750);
    pc = *(0x11750);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x113d0 */
#include <stdint.h>
 
void do_global_dtors () {
    r3 = *(0x1140c);
    r4 = *(0x1140c);
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x114a4 */
#include <stdint.h>
 
void WinMain () {
    LPWSTR lpFilename;
    int32_t var_1h;
    int32_t var_400h;
    r7 = r2;
    r0 = 0;
    r3 = *(0x116e4);
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
    r3 = *(0x116e8);
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
    r2 = *(0x116ec);
    r3 = *(0x116ec);
    r3++;
    *(r2) = r3;
    if (r6 <= 0) {
        goto label_2;
    }
    r3 = *(0x116e8);
    r4 = *(0x116e8);
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
    r1 = *(0x116f0);
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
    r1 = *(0x116f0);
    r0 = strcspn ();
    r4 = r6 + r0;
label_8:
    r3 = 0;
    *(r4) = r3;
    sl++;
    r7 = *(0x116e8);
    r5 = sl << 2;
    r0 = *(0x116e8);
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
    r3 = *(0x116ec);
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
        r3 = *(0x116ec);
        *(r3) = r2;
    } while (1);
label_3:
    r2 = 1;
    r3 = *(0x116ec);
    *(r3) = r2;
label_2:
    ip = *(0x116ec);
    r2 = *(0x116e8);
    r3 = 0;
    offset_0 = ip << 2;
    *((r2 + offset_0)) = r3;
    r0 = *(0x116ec);
    r1 = *(0x116e8);
    main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x117bc */
#include <stdint.h>
 
void wcslen () {
    ip = wcslen;
    pc = wcslen;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x117b0 */
#include <stdint.h>
 
void GetModuleFileNameW () {
    ip = GetModuleFileNameW;
    pc = GetModuleFileNameW;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11708 */
#include <stdint.h>
 
void TerminateProcess () {
    ip = TerminateProcess;
    pc = TerminateProcess;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x117c8 */
#include <stdint.h>
 
void wcstombs () {
    ip = *(0x117c8);
    pc = *(0x117c8);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11768 */
#include <stdint.h>
 
void fflush () {
    ip = *(0x11768);
    pc = *(0x11768);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x116fc */
#include <stdint.h>
 
void fpreset () {
    ip = _fpreset;
    pc = _fpreset;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11774 */
#include <stdint.h>
 
void realloc () {
    ip = *(0x11774);
    pc = *(0x11774);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x117a4 */
#include <stdint.h>
 
void strcspn () {
    ip = strcspn;
    pc = strcspn;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x1178c */
#include <stdint.h>
 
void strspn () {
    ip = *(0x1178c);
    pc = *(0x1178c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11720 */
#include <stdint.h>
 
void strlen () {
    ip = *(0x11720);
    pc = *(0x11720);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x11798 */
#include <stdint.h>
 
void strchr () {
    ip = *(0x11798);
    pc = *(0x11798);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x05/arm_pe/subject.exe @ 0x1175c */
#include <stdint.h>
 
void fcn_0001175c () {
    ip = *(0x1175c);
    pc = *(0x1175c);
}
