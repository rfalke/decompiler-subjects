/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11000 */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11050 */
#include <stdint.h>
 
void dummy (int32_t arg1, int32_t arg2) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_sp_1ch;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    *((fp - 0x14)) = r0;
    *((fp - 0x18)) = r1;
    r3 = 0;
    *((fp - 0x10)) = r3;
    while (r3 != 0) {
        r3 = *((fp - 0x10));
        r3 <<= 2;
        r2 = r3;
        r3 = *((fp - 0x18));
        r3 = r2 + r3;
        r2 = *(r3);
        r3 = *((fp - 0x10));
        r3++;
        *((fp - 0x10)) = r3;
        r0 = r2;
        r1 = *(0x110f4);
        r2 = 3;
        r0 = strncmp (r0, r1, r2);
        r3 = r0;
        if (r3 == 0) {
            r3 = 1;
            *((fp - 0x1c)) = r3;
            goto label_0;
        }
        r3 = *((fp - 0x10));
        r3 <<= 2;
        r2 = r3;
        r3 = *((fp - 0x18));
        r3 = r2 + r3;
        r3 = *(r3);
    }
    r3 = 0;
    *((fp - 0x1c)) = r3;
label_0:
    r3 = *((fp - 0x1c));
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11858 */
#include <stdint.h>
 
void strncmp () {
    ip = *(0x11858);
    pc = *(0x11858);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x110fc */
#include <stdint.h>
 
void parell (char * arg1, int32_t arg2) {
    int32_t var_1ch;
    char * s;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_sp_1ch;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    *((fp - 0x18)) = r0;
    *((fp - 0x1c)) = r1;
    r3 = fp - 0x14;
    r0 = *((fp - 0x18));
    r1 = *(0x1118c);
    r2 = r3;
    sscanf ();
    r3 = *((fp - 0x14));
    r0 = r3;
    r1 = *((fp - 0x1c));
    r0 = dummy ();
    r3 = r0;
    if (r3 == 0) {
        goto label_0;
    }
    r3 = 0;
    *((fp - 0x10)) = r3;
    while (r3 <= 9) {
        r3 = *((fp - 0x14));
        r3 &= 1;
        if (r3 == 0) {
            r0 = "_d";
            puts ("_d");
            r0 = 0;
            exit (r0);
        }
        r3 = *((fp - 0x10));
        r3++;
        *((fp - 0x10)) = r3;
        r3 = *((fp - 0x10));
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11198 */
#include <stdint.h>
 
void check (char * arg1, int32_t arg2) {
    int32_t var_28h;
    char * var_24h;
    char * s;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_4h;
    r0 = arg1;
    r1 = arg2;
    *((fp - 0x24)) = r0;
    *((fp - 0x28)) = r1;
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
        r1 = *(0x11248);
        sscanf ();
        r2 = *((fp - 0x1c));
        r3 = *((fp - 0x18));
        r3 += r2;
        *((fp - 0x18)) = r3;
        r3 = *((fp - 0x18));
        if (r3 == 0x10) {
            r0 = *((fp - 0x24));
            r1 = *((fp - 0x28));
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11254 */
#include <stdint.h>
 
int32_t main (int32_t argc, char ** argv) {
    int32_t var_7ch;
    char ** var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_sp_7ch;
    int32_t var_ch;
    int32_t var_4h;
    r0 = argc;
    r1 = argv;
    *((fp - 0x74)) = r0;
    *((fp - 0x78)) = r1;
    *((fp - 0x7c)) = r2;
    gccmain ();
    r0 = *(0x112b0);
    puts (r0);
    r0 = "IOLI_Crackme_Level_0x06";
    printf ("IOLI_Crackme_Level_0x06");
    r3 = fp - 0x70;
    r0 = "Password:_";
    r1 = r3;
    scanf ("Password:_", r1, r2, r3);
    r3 = fp - 0x70;
    r0 = r3;
    r1 = *((fp - 0x7c));
    check ();
    r3 = 0;
    r0 = r3;
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11584 */
#include <stdint.h>
 
void gccmain () {
    r2 = *(0x115a4);
    r3 = *(0x115a4);
    r3++;
    *(r2) = r3;
    do_global_ctors ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x1151c */
#include <stdint.h>
 
void do_global_ctors () {
    r3 = *(0x11578);
    r2 = *(0x11578);
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
    r3 = *(0x11578);
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11834 */
#include <stdint.h>
 
void puts () {
    ip = puts;
    pc = puts;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11840 */
#include <stdint.h>
 
void printf () {
    ip = printf;
    pc = printf;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x1181c */
#include <stdint.h>
 
void scanf () {
    ip = *(0x1181c);
    pc = *(0x1181c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x112c0 */
#include <stdint.h>
 
void pei386_runtime_relocator () {
    r0 = *(0x112f4);
    if (r0 < lr) {
    }
    ip = *(0x00011300);
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11304 */
#include <stdint.h>
 
void atexit_first (int32_t arg2) {
    r1 = arg2;
    r3 = *(0x00011310);
    r0 = *(r3);
    pc = lr;
    /* Beware that this jump is a conditional jump.
     * r2dec transformed it as a return, due being the
     * last instruction. Please, check 'pdda' output
     * for more hints. */
    return r4 = r1 & r0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11894 */
#include <stdint.h>
 
void fcloseall () {
    ip = _fcloseall;
    pc = _fcloseall;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11314 */
#include <stdint.h>
 
void closeall_streams () {
    fcloseall ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11320 */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11338 */
#include <stdint.h>
 
void c_exit () {
    closeall_streams ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11344 */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x113b8 */
#include <stdint.h>
 
void onexit (int32_t arg1) {
    r0 = arg1;
    r1 = *(0x000113cc);
    r2 = *(0x000113d0);
    dllonexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x113d4 */
#include <stdint.h>
 
void atexit (int32_t arg1) {
    r0 = arg1;
    r1 = *(0x113f0);
    r2 = *(0x113f4);
    r0 = dllonexit ();
    if (r0 == 0) {
        r0 = 0;
    }
    if (r0 != 0) {
        r0 = ~0;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x113fc */
#include <stdint.h>
 
void dll_exit () {
    r3 = *(0x11468);
    r0 = *(0x11468);
    if (r0 == 0) {
        goto label_0;
    }
    r3 = *(0x1146c);
    r2 = *(0x1146c);
    r3 = r2 - 4;
    if (r0 > r3) {
        goto label_1;
    }
    r4 = r2 - 8;
    r6 = *(0x11468);
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
    fcn_00011870 ();
    r2 = 0;
    r3 = *(0x11468);
    *(r3) = r2;
label_0:
    r0 = 0;
    fflush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11474 */
#include <stdint.h>
 
void cexit () {
    dll_exit ();
    closeall_streams ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11484 */
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x1149c */
#include <stdint.h>
 
void atexit_init () {
    r0 = 0x80;
    malloc ();
    r3 = *(0x114cc);
    *(r3) = r0;
    r3 = 0;
    *(r0) = r3;
    r3 = *(0x114d0);
    *(r3) = r0;
    r0 = 1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11864 */
#include <stdint.h>
 
void malloc () {
    ip = malloc;
    pc = malloc;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x114d8 */
#include <stdint.h>
 
void do_global_dtors () {
    r3 = *(0x11514);
    r4 = *(0x11514);
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
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x115ac */
#include <stdint.h>
 
void WinMain () {
    LPWSTR lpFilename;
    int32_t var_1h;
    int32_t var_400h;
    r7 = r2;
    r0 = 0;
    r3 = *(0x117ec);
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
    r3 = *(0x117f0);
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
    r2 = *(0x117f4);
    r3 = *(0x117f4);
    r3++;
    *(r2) = r3;
    if (r6 <= 0) {
        goto label_2;
    }
    r3 = *(0x117f0);
    r4 = *(0x117f0);
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
    r1 = *(0x117f8);
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
    r1 = *(0x117f8);
    r0 = strcspn ();
    r4 = r6 + r0;
label_8:
    r3 = 0;
    *(r4) = r3;
    sl++;
    r7 = *(0x117f0);
    r5 = sl << 2;
    r0 = *(0x117f0);
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
    r3 = *(0x117f4);
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
        r3 = *(0x117f4);
        *(r3) = r2;
    } while (1);
label_3:
    r2 = 1;
    r3 = *(0x117f4);
    *(r3) = r2;
label_2:
    ip = *(0x117f4);
    r2 = *(0x117f0);
    r3 = 0;
    offset_0 = ip << 2;
    *((r2 + offset_0)) = r3;
    r0 = *(0x117f4);
    r1 = *(0x117f0);
    main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x118d0 */
#include <stdint.h>
 
void wcslen () {
    ip = wcslen;
    pc = wcslen;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x118c4 */
#include <stdint.h>
 
void GetModuleFileNameW () {
    ip = GetModuleFileNameW;
    pc = GetModuleFileNameW;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11810 */
#include <stdint.h>
 
void TerminateProcess () {
    ip = TerminateProcess;
    pc = TerminateProcess;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x118dc */
#include <stdint.h>
 
void wcstombs () {
    ip = *(0x118dc);
    pc = *(0x118dc);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x1187c */
#include <stdint.h>
 
void fflush () {
    ip = *(0x1187c);
    pc = *(0x1187c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11804 */
#include <stdint.h>
 
void fpreset () {
    ip = _fpreset;
    pc = _fpreset;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11888 */
#include <stdint.h>
 
void realloc () {
    ip = *(0x11888);
    pc = *(0x11888);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x1184c */
#include <stdint.h>
 
void sscanf () {
    ip = *(0x1184c);
    pc = *(0x1184c);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x118b8 */
#include <stdint.h>
 
void strcspn () {
    ip = strcspn;
    pc = strcspn;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x118a0 */
#include <stdint.h>
 
void strspn () {
    ip = *(0x118a0);
    pc = *(0x118a0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11828 */
#include <stdint.h>
 
void strlen () {
    ip = *(0x11828);
    pc = *(0x11828);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x118ac */
#include <stdint.h>
 
void strchr () {
    ip = *(0x118ac);
    pc = *(0x118ac);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/ioli_crackmes/crackme0x06/arm_pe/subject.exe @ 0x11870 */
#include <stdint.h>
 
void fcn_00011870 () {
    ip = *(0x11870);
    pc = *(0x11870);
}
