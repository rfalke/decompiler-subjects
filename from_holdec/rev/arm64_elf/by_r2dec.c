/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0x1460 */
#include <stdint.h>
 
void entry0 (int64_t argc, char ** ubp_av, func rtld_fini) {
    x0 = rtld_fini;
    x29 = 0x0;
    x30 = 0x0;
    x5 = x0;
    x1 = *(sp);
    x2 = sp + 8;
    x6 = sp;
    x0 = .text;
    x3 = *(0x1ffe0);
    x4 = *(0x1ff98);
    libc_start_main (x0, x1, x2, x3, x4, x5, x6);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xe70 */
#include <stdint.h>
 
void libc_start_main () {
    x17 = *(0x1fee8);
    x16 = 0x1fee8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xdc0 */
#include <stdint.h>
 
void exit () {
    x16 = 0x1f000;
    x17 = *(0x1f000);
    x16 += sym.imp.wcslen;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xdd0 */
#include <stdint.h>
 
void fputs () {
    x17 = *(0x1fe98);
    x16 = 0x1fe98;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xde0 */
#include <stdint.h>
 
void exit () {
    x16 = 0x1f000;
    x17 = *(0x1f000);
    x16 += sym.imp.realloc;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xdf0 */
#include <stdint.h>
 
void cxa_finalize () {
    x17 = *(0x1fea8);
    x16 = 0x1fea8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xe00 */
#include <stdint.h>
 
void cxa_atexit () {
    x17 = *(0x1feb0);
    x16 = 0x1feb0;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xe10 */
#include <stdint.h>
 
void fputc () {
    x17 = *(0x1feb8);
    x16 = 0x1feb8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xe20 */
#include <stdint.h>
 
void fpending () {
    x16 = 0x1f000;
    x17 = *(0x1f0ab);
    x16 += sym.imp.abort;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xe30 */
#include <stdint.h>
 
void signal () {
    x17 = *(0x1fec8);
    x16 = 0x1fec8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xe40 */
#include <stdint.h>
 
void fclose () {
    x16 = 0x1f000;
    x17 = *(0x1f0fe);
    x16 += sym.imp.feof;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xe50 */
#include <stdint.h>
 
void malloc () {
    x17 = *(0x1fed8);
    x16 = 0x1fed8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xe60 */
#include <stdint.h>
 
void bindtextdomain () {
    x16 = 0x1f000;
    x17 = *(0x1f000);
    x16 += sym.imp.textdomain;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xe80 */
#include <stdint.h>
 
void printf_chk () {
    x16 = 0x1f000;
    x17 = *(0x1f000);
    x16 += sym.imp.getopt_long;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xe90 */
#include <stdint.h>
 
void wcslen () {
    x17 = *(0x1fef8);
    x16 = 0x1fef8;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xea0 */
#include <stdint.h>
 
void realloc () {
    x16 = 0x1f000;
    x17 = *(0x1f00f);
    x16 += sym.imp.__fprintf_chk;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xec0 */
#include <stdint.h>
 
void abort () {
    x16 = 0x1f000;
    x17 = *(0x1f000);
    x16 += sym.imp.warn;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xed0 */
#include <stdint.h>
 
void feof () {
    x17 = *(0x1ff18);
    x16 = 0x1ff18;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xee0 */
#include <stdint.h>
 
void textdomain () {
    x16 = 0x1f000;
    x17 = *(0x1f00f);
    x16 += sym.imp.free;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xef0 */
#include <stdint.h>
 
void getopt_long () {
    x17 = *(0x1ff28);
    x16 = 0x1ff28;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xf00 */
#include <stdint.h>
 
void fprintf_chk () {
    x16 = 0x1f000;
    x17 = *(0x1f00f);
    x16 += sym.imp.fopen64;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xf10 */
#include <stdint.h>
 
void warn () {
    x17 = *(0x1ff38);
    x16 = 0x1ff38;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xf20 */
#include <stdint.h>
 
void free () {
    x16 = 0x1f000;
    x17 = *(0x1f000);
    x16 += sym.imp.warnx;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xf30 */
#include <stdint.h>
 
void fopen64 () {
    x17 = *(0x1ff48);
    x16 = 0x1ff48;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xf40 */
#include <stdint.h>
 
void warnx () {
    x16 = 0x1f000;
    x17 = *(0x1f00f);
    x16 += sym.imp.fputws;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xf50 */
#include <stdint.h>
 
void fputws () {
    x17 = *(0x1ff58);
    x16 = 0x1ff58;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xf60 */
#include <stdint.h>
 
void dcgettext () {
    x16 = 0x1f000;
    x17 = *(0x1fdc0);
    x16 += sym.imp.dcgettext;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xf70 */
#include <stdint.h>
 
void errno_location () {
    x17 = *(0x1ff68);
    x16 = 0x1ff68;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xf80 */
#include <stdint.h>
 
void err () {
    x16 = 0x1f000;
    x17 = *(0x1f000);
    x16 += sym.imp.__errno_location;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xf90 */
#include <stdint.h>
 
void setlocale () {
    x17 = *(0x1ff78);
    x16 = 0x1ff78;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xfa0 */
#include <stdint.h>
 
void ferror () {
    x16 = 0x1f000;
    x17 = *(0x1f00e);
    x16 += sym.imp.err;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xfb0 */
#include <stdint.h>
 
void fgetws () {
    x17 = *(0x1ff88);
    x16 = 0x1ff88;
    return uint64_t (*x17)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0x1568 */
#include <stdint.h>
 
void entry_init0 () {
    do {
        x0 = .data;
        x0 += 8;
        x1 = .data;
        x1 += 8;
        x1 -= x0;
        x1 >>= 3;
        x1 += (x1 >> 63);
        x1 >>= 1;
        if (x1 != 0) {
            x2 = imp._ITM_deregisterTMCloneTable;
            if (x2 == 0) {
                goto label_0;
            }
            uint64_t (*x2)() ();
        }
label_0:
        return;
    } while (1);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0x1520 */
#include <stdint.h>
 
void entry_fini0 () {
    int64_t var_20h;
    int64_t var_20h_2;
    int64_t var_10h;
    *((sp + -0x20)) = x29;
    *((sp + -0x20 + 8)) = x30;
    x29 = sp;
    *((sp + 0x10)) = x19;
    x19 = .data;
    w0 = *((x19 + 8));
    if (w0 == 0) {
        x0 = imp._ITM_deregisterTMCloneTable;
        if (x0 != 0) {
            x0 = 0x1fc20;
            cxa_finalize ();
        }
        deregister_tm_clones ();
        w0 = 0x1;
        *((x19 + 8)) = w0;
    }
    x19 = *((sp + 0x10));
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0x14b0 */
#include <stdint.h>
 
void deregister_tm_clones () {
    x0 = .data;
    x0 += 8;
    x1 = .data;
    x1 += 8;
    if (x1 != x0) {
        x1 = *(0x1f0fe);
        if (x1 == 0) {
            goto label_0;
        }
        uint64_t (*x1)() ();
    }
label_0:
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0x1498 */
#include <stdint.h>
 
void call_weak_fn () {
    x0 = imp._ITM_deregisterTMCloneTable;
    if (x0 != 0) {
        void (*0xeb0)() ();
    }
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0x1740 */
#include <stdint.h>
 
void atexit () {
    x2 = 0x0;
    x1 = *(0x1ffd8);
    if (x1 != 0) {
        x2 = *(x1);
    }
    x1 = 0x0;
    return void (*0xe00)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xd88 */
#include <stdint.h>
 
void _init () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [11] -r-x section size 20 named .init */
    *((sp + -0x10)) = x29;
    *((sp + -0x10 + 8)) = x30;
    x29 = sp;
    call_weak_fn ();
    x29 = *(sp);
    x30 = *((sp + 8));
    return;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/rev/arm64_elf/subject.exe @ 0xda0 */
#include <stdint.h>
 
void _plt () {
    int64_t var_10h;
    int64_t var_10h_2;
    /* [12] -r-x section size 544 named .plt */
    *((sp + -0x10)) = x16;
    *((sp + -0x10 + 8)) = x30;
    x17 = imp._ITM_deregisterTMCloneTable;
    x16 = 0x1fe88;
    return uint64_t (*x17)() ();
}
