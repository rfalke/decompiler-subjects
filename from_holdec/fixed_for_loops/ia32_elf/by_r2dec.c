/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80490a0 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_080490d7 ();
    ebx += 0x20f4c;
    eax = .text;
    return libc_start_main (eax, esi, ecx, ebx - 0x13170, ebx - 0x13110);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80490d7 */
#include <stdint.h>
 
void fcn_080490d7 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049100 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = stdout;
    if (eax != obj.stdout) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.stdout);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049140 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = stdout;
    eax -= obj.stdout;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    if (eax != 0) {
        edx = 0;
        if (edx == 0) {
            goto label_0;
        }
        void (*edx)(uint32_t, uint32_t) (obj.stdout, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049180 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    __asm ("endbr32");
    if (*(obj.completed.6843) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6843) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80491b0 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f03f */
#include <stdint.h>
 
int32_t var0365_empty (void) {
    fputs ("0365 signed start:16, iter:0, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0xe) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804df1b */
#include <stdint.h>
 
uint32_t var0299_0 (void) {
    fputs ("0299 signed start:0, iter:1, inc:+1, order:jub cmp:<=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx > -1) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c880 */
#include <stdint.h>
 
int32_t var0213_0 (void) {
    fputs ("0213 signed start:16, iter:1, inc:+2, order:bju cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx > 0xe) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e2d5 */
#include <stdint.h>
 
uint32_t var0313_0 (void) {
    fputs ("0313 signed start:10, iter:1, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx <= 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054ff6 */
#include <stdint.h>
 
uint32_t var0733_empty (void) {
    fputs ("0733 unsign start:57, iter:0, inc:-1, order:ujb cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx <= 0x39) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8056ef0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e3e9 */
#include <stdint.h>
 
uint32_t var0317_0 (void) {
    fputs ("0317 signed start:10, iter:1, inc:-1, order:jub cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx < 0xb) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bf57 */
#include <stdint.h>
 
uint32_t var0177_0 (void) {
    fputs ("0177 signed start:48, iter:1, inc:+1, order:ujb cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx == 0x31) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a39a */
#include <stdint.h>
 
uint32_t var0070_9876543210 (void) {
    fputs ("0070 signed start:57, iter:10, inc:-1, order:bju cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx <= 0x30) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c302 */
#include <stdint.h>
 
int32_t var0192_0 (void) {
    fputs ("0192 signed start:0, iter:1, inc:+1, order:ubj cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (ebx != 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049070 */
#include <stdint.h>
 
void fputs (void) {
    fputs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049060 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053f5c */
#include <stdint.h>
 
int32_t var0670_9 (void) {
    fputs ("0670 unsign start:100, iter:1, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x66) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80535a3 */
#include <stdint.h>
 
uint32_t var0633_9 (void) {
    fputs ("0633 unsign start:57, iter:1, inc:-1, order:ujb cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx == 0x38) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80523d5 */
#include <stdint.h>
 
uint32_t var0563_0 (void) {
    fputs ("0563 unsign start:48, iter:1, inc:+1, order:buj cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx < 0x31);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e06e */
#include <stdint.h>
 
uint32_t var0304_0 (void) {
    fputs ("0304 signed start:10, iter:1, inc:-1, order:bju cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx <= 0xa) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053e44 */
#include <stdint.h>
 
int32_t var0666_9 (void) {
    fputs ("0666 unsign start:100, iter:1, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x63) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e5f4 */
#include <stdint.h>
 
int32_t var0325_0 (void) {
    fputs ("0325 signed start:-20, iter:1, inc:+1, order:ubj cmp:< 0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (ebx < 0xffffffec);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052b6a */
#include <stdint.h>
 
int32_t var0594_0 (void) {
    fputs ("0594 unsign start:16, iter:1, inc:+2, order:buj cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx != 0x12);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c04b */
#include <stdint.h>
 
uint32_t var0181_0 (void) {
    fputs ("0181 signed start:48, iter:1, inc:+1, order:jbu cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx >= 0x31) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bd3e */
#include <stdint.h>
 
uint32_t var0168_0 (void) {
    fputs ("0168 signed start:48, iter:1, inc:+1, order:buj cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx != 0x31);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805338a */
#include <stdint.h>
 
uint32_t var0624_9 (void) {
    fputs ("0624 unsign start:57, iter:1, inc:-1, order:buj cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx != 0x38);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805266a */
#include <stdint.h>
 
uint32_t var0574_0 (void) {
    fputs ("0574 unsign start:48, iter:1, inc:+1, order:jbu cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx == 0x31) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b74d */
#include <stdint.h>
 
uint32_t var0145_0123456789 (void) {
    fputs ("0145 signed start:10, iter:10, inc:-1, order:jbu cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx <= 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80505cc */
#include <stdint.h>
 
int32_t var0449_0123456789 (void) {
    fputs ("0449 unsign start:0, iter:10, inc:+1, order:jbu cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx >= 0xa) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049634 */
#include <stdint.h>
 
int32_t var0019_0123456789 (void) {
    fputs ("0019 signed start:0, iter:10, inc:+1, order:buj cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx < 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053c5a */
#include <stdint.h>
 
int32_t var0659_9 (void) {
    fputs ("0659 unsign start:100, iter:1, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x62) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805563d */
#include <stdint.h>
 
uint32_t var0757_empty (void) {
    fputs ("0757 unsign start:0, iter:0, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx >= 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055164 */
#include <stdint.h>
 
uint32_t var0739_empty (void) {
    fputs ("0739 unsign start:57, iter:0, inc:-1, order:jub cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx <= 0x3a) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805291c */
#include <stdint.h>
 
int32_t var0585_0 (void) {
    fputs ("0585 unsign start:0, iter:1, inc:+1, order:ubj cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (ebx != 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bdb4 */
#include <stdint.h>
 
uint32_t var0170_0 (void) {
    fputs ("0170 signed start:48, iter:1, inc:+1, order:buj cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx <= 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c382 */
#include <stdint.h>
 
int32_t var0194_0 (void) {
    fputs ("0194 signed start:0, iter:1, inc:+1, order:ubj cmp:<=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (ebx <= -1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053a7a */
#include <stdint.h>
 
int32_t var0652_9 (void) {
    fputs ("0652 unsign start:100, iter:1, inc:-2, order:ubj cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx != 0x64);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050a10 */
#include <stdint.h>
 
int32_t var0465_0123456789 (void) {
    fputs ("0465 unsign start:16, iter:10, inc:+2, order:ubj cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx <= 0x21);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80500a0 */
#include <stdint.h>
 
uint32_t var0428_0123456789 (void) {
    fputs ("0428 unsign start:48, iter:10, inc:+1, order:ubj cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx <= 0x38);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049a4a */
#include <stdint.h>
 
int32_t var0035_0123456789 (void) {
    fputs ("0035 signed start:0, iter:10, inc:+1, order:jub cmp:<=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx > 8) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053962 */
#include <stdint.h>
 
int32_t var0648_9 (void) {
    fputs ("0648 unsign start:100, iter:1, inc:-2, order:bju cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx <= 0x65) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052bf2 */
#include <stdint.h>
 
int32_t var0596_0 (void) {
    fputs ("0596 unsign start:16, iter:1, inc:+2, order:buj cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx < 0x11);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c0c5 */
#include <stdint.h>
 
uint32_t var0183_0 (void) {
    fputs ("0183 signed start:48, iter:1, inc:+1, order:jub cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx == 0x30) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805378b */
#include <stdint.h>
 
uint32_t var0641_9 (void) {
    fputs ("0641 unsign start:57, iter:1, inc:-1, order:jub cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx < 0x3a) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050548 */
#include <stdint.h>
 
int32_t var0447_0123456789 (void) {
    fputs ("0447 unsign start:0, iter:10, inc:+1, order:ujb cmp:<=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx > 9) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80495b7 */
#include <stdint.h>
 
uint32_t var0017_0123456789 (void) {
    fputs ("0017 signed start:48, iter:10, inc:+1, order:jub cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx > 0x38) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050e6c */
#include <stdint.h>
 
int32_t var0481_0123456789 (void) {
    fputs ("0481 unsign start:16, iter:10, inc:+2, order:jub cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0x20) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049e92 */
#include <stdint.h>
 
int32_t var0051_0123456789 (void) {
    fputs ("0051 signed start:16, iter:10, inc:+2, order:ujb cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx == 0x24) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a4c5 */
#include <stdint.h>
 
uint32_t var0075_9876543210 (void) {
    fputs ("0075 signed start:57, iter:10, inc:-1, order:ujb cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx == 0x2f) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ecb9 */
#include <stdint.h>
 
int32_t var0352_empty (void) {
    fputs ("0352 signed start:0, iter:0, inc:+1, order:jub cmp:< 0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx >= -1) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cf9c */
#include <stdint.h>
 
uint32_t var0240_9 (void) {
    fputs ("0240 signed start:57, iter:1, inc:-1, order:ubj cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx != 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80555b2 */
#include <stdint.h>
 
int32_t var0755_empty (void) {
    fputs ("0755 unsign start:100, iter:0, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x67) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805299c */
#include <stdint.h>
 
int32_t var0587_0 (void) {
    fputs ("0587 unsign start:0, iter:1, inc:+1, order:ujb cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx == 1) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804be2c */
#include <stdint.h>
 
uint32_t var0172_0 (void) {
    fputs ("0172 signed start:48, iter:1, inc:+1, order:bju cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx >= 0x30) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055796 */
#include <stdint.h>
 
uint32_t var0762_empty (void) {
    fputs ("0762 unsign start:10, iter:0, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx < 0xb) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054dcf */
#include <stdint.h>
 
int32_t var0725_empty (void) {
    fputs ("0725 unsign start:16, iter:0, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0xf) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055382 */
#include <stdint.h>
 
int32_t var0747_empty (void) {
    fputs ("0747 unsign start:100, iter:0, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x65) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f288 */
#include <stdint.h>
 
uint32_t var0374_empty (void) {
    fputs ("0374 signed start:57, iter:0, inc:-1, order:jbu cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx < 0x3a) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054cb7 */
#include <stdint.h>
 
int32_t var0721_empty (void) {
    fputs ("0721 unsign start:16, iter:0, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0xe) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80551a1 */
#include <stdint.h>
 
uint32_t var0740_empty (void) {
    fputs ("0740 unsign start:57, iter:0, inc:-1, order:jub cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx < 0x3b) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80541c1 */
#include <stdint.h>
 
uint32_t var0679_0 (void) {
    fputs ("0679 unsign start:0, iter:1, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx == 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805020c */
#include <stdint.h>
 
uint32_t var0434_0123456789 (void) {
    fputs ("0434 unsign start:48, iter:10, inc:+1, order:jbu cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx > 0x39) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80492a4 */
#include <stdint.h>
 
uint32_t var0004_0123456789 (void) {
    fputs ("0004 signed start:48, iter:10, inc:+1, order:bju cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx >= 0x39) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805556c */
#include <stdint.h>
 
int32_t var0754_empty (void) {
    fputs ("0754 unsign start:100, iter:0, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x68) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054c2b */
#include <stdint.h>
 
int32_t var0719_empty (void) {
    fputs ("0719 unsign start:16, iter:0, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0xf) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80550ad */
#include <stdint.h>
 
uint32_t var0736_empty (void) {
    fputs ("0736 unsign start:57, iter:0, inc:-1, order:jbu cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx <= 0x39) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c768 */
#include <stdint.h>
 
int32_t var0209_0 (void) {
    fputs ("0209 signed start:16, iter:1, inc:+2, order:bju cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx == 0x10) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a5f6 */
#include <stdint.h>
 
uint32_t var0080_9876543210 (void) {
    fputs ("0080 signed start:57, iter:10, inc:-1, order:jbu cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx < 0x30) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805361d */
#include <stdint.h>
 
uint32_t var0635_9 (void) {
    fputs ("0635 unsign start:57, iter:1, inc:-1, order:ujb cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx < 0x39) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a44f */
#include <stdint.h>
 
uint32_t var0073_9876543210 (void) {
    fputs ("0073 signed start:57, iter:10, inc:-1, order:ubj cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx > 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805482d */
#include <stdint.h>
 
uint32_t var0703_0 (void) {
    fputs ("0703 unsign start:10, iter:1, inc:-1, order:jub cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx < 0xb) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805435f */
#include <stdint.h>
 
uint32_t var0685_0 (void) {
    fputs ("0685 unsign start:0, iter:1, inc:+1, order:jub cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx == 0) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f5ac */
#include <stdint.h>
 
int32_t var0386_empty (void) {
    fputs ("0386 signed start:100, iter:0, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x66) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f44e */
#include <stdint.h>
 
int32_t var0381_empty (void) {
    fputs ("0381 signed start:100, iter:0, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x66) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050d9a */
#include <stdint.h>
 
int32_t var0478_0123456789 (void) {
    fputs ("0478 unsign start:16, iter:10, inc:+2, order:jub cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0x22) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049dc6 */
#include <stdint.h>
 
int32_t var0048_0123456789 (void) {
    fputs ("0048 signed start:16, iter:10, inc:+2, order:ubj cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx < 0x21);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804eff9 */
#include <stdint.h>
 
int32_t var0364_empty (void) {
    fputs ("0364 signed start:16, iter:0, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx == 0xe) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ef6d */
#include <stdint.h>
 
int32_t var0362_empty (void) {
    fputs ("0362 signed start:16, iter:0, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0xf) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053ce6 */
#include <stdint.h>
 
int32_t var0661_9 (void) {
    fputs ("0661 unsign start:100, iter:1, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x63) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053400 */
#include <stdint.h>
 
uint32_t var0626_9 (void) {
    fputs ("0626 unsign start:57, iter:1, inc:-1, order:buj cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx >= 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f520 */
#include <stdint.h>
 
int32_t var0384_empty (void) {
    fputs ("0384 signed start:100, iter:0, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x65) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80545c2 */
#include <stdint.h>
 
uint32_t var0694_0 (void) {
    fputs ("0694 unsign start:10, iter:1, inc:-1, order:ubj cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx >= 0xb);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cc90 */
#include <stdint.h>
 
int32_t var0228_0 (void) {
    fputs ("0228 signed start:16, iter:1, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ec35 */
#include <stdint.h>
 
int32_t var0350_empty (void) {
    fputs ("0350 signed start:0, iter:0, inc:+1, order:jbu cmp:<=0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx > -1) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80490f0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d3c6 */
#include <stdint.h>
 
int32_t var0257_9 (void) {
    fputs ("0257 signed start:100, iter:1, inc:-2, order:bju cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx == 0x64) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805549a */
#include <stdint.h>
 
int32_t var0751_empty (void) {
    fputs ("0751 unsign start:100, iter:0, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx == 0x66) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054b5d */
#include <stdint.h>
 
int32_t var0716_empty (void) {
    fputs ("0716 unsign start:0, iter:0, inc:+1, order:jbu cmp:< 0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx >= 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b27f */
#include <stdint.h>
 
uint32_t var0127_0123456789 (void) {
    fputs ("0127 signed start:0, iter:10, inc:+1, order:jbu cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx >= 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053b02 */
#include <stdint.h>
 
int32_t var0654_9 (void) {
    fputs ("0654 unsign start:100, iter:1, inc:-2, order:ubj cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx > 0x64);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bcba */
#include <stdint.h>
 
int32_t var0166_0123456789 (void) {
    fputs ("0166 signed start:-20, iter:10, inc:+1, order:jub cmp:< 0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        if (ebx >= 0xfffffff5) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c992 */
#include <stdint.h>
 
int32_t var0217_0 (void) {
    fputs ("0217 signed start:16, iter:1, inc:+2, order:ubj cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx <= 0xf);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80552f6 */
#include <stdint.h>
 
int32_t var0745_empty (void) {
    fputs ("0745 unsign start:100, iter:0, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x65) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054966 */
#include <stdint.h>
 
uint32_t var0708_empty (void) {
    fputs ("0708 unsign start:48, iter:0, inc:+1, order:jbu cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx >= 0x30) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d634 */
#include <stdint.h>
 
int32_t var0266_9 (void) {
    fputs ("0266 signed start:100, iter:1, inc:-2, order:ubj cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx >= 0x65);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805380c */
#include <stdint.h>
 
int32_t var0643_9 (void) {
    fputs ("0643 unsign start:100, iter:1, inc:-2, order:buj cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx > 0x63);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f820 */
#include <stdint.h>
 
uint32_t var0395_empty (void) {
    fputs ("0395 signed start:0, iter:0, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx > -1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80516b2 */
#include <stdint.h>
 
int32_t var0514_9876543210 (void) {
    fputs ("0514 unsign start:100, iter:10, inc:-2, order:ubj cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx >= 0x53);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ab7c */
#include <stdint.h>
 
int32_t var0101_9876543210 (void) {
    fputs ("0101 signed start:100, iter:10, inc:-2, order:ujb cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x50) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c404 */
#include <stdint.h>
 
int32_t var0196_0 (void) {
    fputs ("0196 signed start:0, iter:1, inc:+1, order:ujb cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx >= 1) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80511bf */
#include <stdint.h>
 
uint32_t var0495_9876543210 (void) {
    fputs ("0495 unsign start:57, iter:10, inc:-1, order:jbu cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx <= 0x2f) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d9c0 */
#include <stdint.h>
 
int32_t var0279_9 (void) {
    fputs ("0279 signed start:100, iter:1, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x64) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ad20 */
#include <stdint.h>
 
int32_t var0107_9876543210 (void) {
    fputs ("0107 signed start:100, iter:10, inc:-2, order:jbu cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x52) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b52b */
#include <stdint.h>
 
uint32_t var0137_0123456789 (void) {
    fputs ("0137 signed start:10, iter:10, inc:-1, order:bju cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx < 2) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805189a */
#include <stdint.h>
 
int32_t var0521_9876543210 (void) {
    fputs ("0521 unsign start:100, iter:10, inc:-2, order:jbu cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x51) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f194 */
#include <stdint.h>
 
uint32_t var0370_empty (void) {
    fputs ("0370 signed start:57, iter:0, inc:-1, order:ujb cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx <= 0x39) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054a5a */
#include <stdint.h>
 
uint32_t var0712_empty (void) {
    fputs ("0712 unsign start:48, iter:0, inc:+1, order:jub cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx > 0x2e) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c13f */
#include <stdint.h>
 
uint32_t var0185_0 (void) {
    fputs ("0185 signed start:48, iter:1, inc:+1, order:jub cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx > 0x2f) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052c7a */
#include <stdint.h>
 
int32_t var0598_0 (void) {
    fputs ("0598 unsign start:16, iter:1, inc:+2, order:buj cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx <= 0x10);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054719 */
#include <stdint.h>
 
uint32_t var0699_0 (void) {
    fputs ("0699 unsign start:10, iter:1, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx <= 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e206 */
#include <stdint.h>
 
uint32_t var0310_0 (void) {
    fputs ("0310 signed start:10, iter:1, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx <= 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055865 */
#include <stdint.h>
 
uint32_t var0765_empty (void) {
    fputs ("0765 unsign start:10, iter:0, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx < 0xb) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054ea1 */
#include <stdint.h>
 
int32_t var0728_empty (void) {
    fputs ("0728 unsign start:16, iter:0, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0xe) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80534f2 */
#include <stdint.h>
 
uint32_t var0630_9 (void) {
    fputs ("0630 unsign start:57, iter:1, inc:-1, order:ubj cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx != 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80509cc */
#include <stdint.h>
 
int32_t var0464_0123456789 (void) {
    fputs ("0464 unsign start:16, iter:10, inc:+2, order:ubj cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx < 0x21);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050065 */
#include <stdint.h>
 
uint32_t var0427_0123456789 (void) {
    fputs ("0427 unsign start:48, iter:10, inc:+1, order:ubj cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx < 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049a08 */
#include <stdint.h>
 
int32_t var0034_0123456789 (void) {
    fputs ("0034 signed start:0, iter:10, inc:+1, order:jub cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx >= 9) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052a20 */
#include <stdint.h>
 
int32_t var0589_0 (void) {
    fputs ("0589 unsign start:0, iter:1, inc:+1, order:ujb cmp:<=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx > 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bea6 */
#include <stdint.h>
 
uint32_t var0174_0 (void) {
    fputs ("0174 signed start:48, iter:1, inc:+1, order:ubj cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx != 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f6c4 */
#include <stdint.h>
 
int32_t var0390_empty (void) {
    fputs ("0390 signed start:100, iter:0, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x66) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052241 */
#include <stdint.h>
 
uint32_t var0557_0123456789 (void) {
    fputs ("0557 unsign start:10, iter:10, inc:-1, order:jbu cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx <= 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dfa3 */
#include <stdint.h>
 
uint32_t var0301_0 (void) {
    fputs ("0301 signed start:10, iter:1, inc:-1, order:buj cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx > 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bbb2 */
#include <stdint.h>
 
int32_t var0162_0123456789 (void) {
    fputs ("0162 signed start:-20, iter:10, inc:+1, order:jbu cmp:!=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        if (ebx == 0xfffffff6) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051ecc */
#include <stdint.h>
 
uint32_t var0544_0123456789 (void) {
    fputs ("0544 unsign start:10, iter:10, inc:-1, order:buj cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx != 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d452 */
#include <stdint.h>
 
int32_t var0259_9 (void) {
    fputs ("0259 signed start:100, iter:1, inc:-2, order:bju cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx <= 0x64) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80513bc */
#include <stdint.h>
 
int32_t var0503_9876543210 (void) {
    fputs ("0503 unsign start:100, iter:10, inc:-2, order:buj cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx >= 0x52);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d1f8 */
#include <stdint.h>
 
uint32_t var0250_9 (void) {
    fputs ("0250 signed start:57, iter:1, inc:-1, order:jub cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx <= 0x39) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80522cb */
#include <stdint.h>
 
uint32_t var0559_0123456789 (void) {
    fputs ("0559 unsign start:10, iter:10, inc:-1, order:jub cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx == 1) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d6be */
#include <stdint.h>
 
int32_t var0268_9 (void) {
    fputs ("0268 signed start:100, iter:1, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x63) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f24b */
#include <stdint.h>
 
uint32_t var0373_empty (void) {
    fputs ("0373 signed start:57, iter:0, inc:-1, order:jbu cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx <= 0x39) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80527d8 */
#include <stdint.h>
 
int32_t var0580_0 (void) {
    fputs ("0580 unsign start:0, iter:1, inc:+1, order:buj cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx != 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f0cb */
#include <stdint.h>
 
int32_t var0367_empty (void) {
    fputs ("0367 signed start:16, iter:0, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0xd) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049f64 */
#include <stdint.h>
 
int32_t var0054_0123456789 (void) {
    fputs ("0054 signed start:16, iter:10, inc:+2, order:ujb cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0x23) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d7d6 */
#include <stdint.h>
 
int32_t var0272_9 (void) {
    fputs ("0272 signed start:100, iter:1, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx == 0x62) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80512b3 */
#include <stdint.h>
 
uint32_t var0499_9876543210 (void) {
    fputs ("0499 unsign start:57, iter:10, inc:-1, order:jub cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx < 0x31) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a35d */
#include <stdint.h>
 
uint32_t var0069_9876543210 (void) {
    fputs ("0069 signed start:57, iter:10, inc:-1, order:bju cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx == 0x30) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a83e */
#include <stdint.h>
 
int32_t var0089_9876543210 (void) {
    fputs ("0089 signed start:100, iter:10, inc:-2, order:bju cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx == 0x52) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804da4c */
#include <stdint.h>
 
int32_t var0281_9 (void) {
    fputs ("0281 signed start:100, iter:1, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x65) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805475e */
#include <stdint.h>
 
uint32_t var0700_0 (void) {
    fputs ("0700 unsign start:10, iter:1, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx < 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ca1a */
#include <stdint.h>
 
int32_t var0219_0 (void) {
    fputs ("0219 signed start:16, iter:1, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx == 0x12) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fcf4 */
#include <stdint.h>
 
int32_t var0413_empty (void) {
    fputs ("0413 signed start:-20, iter:0, inc:+1, order:ujb cmp:<=0 exp:+68       expected=''    >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        if (ebx > 0xffffffeb) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055682 */
#include <stdint.h>
 
uint32_t var0758_empty (void) {
    fputs ("0758 unsign start:0, iter:0, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx == 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b639 */
#include <stdint.h>
 
uint32_t var0141_0123456789 (void) {
    fputs ("0141 signed start:10, iter:10, inc:-1, order:ujb cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx == 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f302 */
#include <stdint.h>
 
uint32_t var0376_empty (void) {
    fputs ("0376 signed start:57, iter:0, inc:-1, order:jub cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx <= 0x3a) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804de4c */
#include <stdint.h>
 
uint32_t var0296_0 (void) {
    fputs ("0296 signed start:0, iter:1, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx > 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c7ae */
#include <stdint.h>
 
int32_t var0210_0 (void) {
    fputs ("0210 signed start:16, iter:1, inc:+2, order:bju cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx >= 0x10) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fc70 */
#include <stdint.h>
 
int32_t var0411_empty (void) {
    fputs ("0411 signed start:-20, iter:0, inc:+1, order:ujb cmp:!=0 exp:+68       expected=''    >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        if (ebx == 0xffffffec) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a670 */
#include <stdint.h>
 
uint32_t var0082_9876543210 (void) {
    fputs ("0082 signed start:57, iter:10, inc:-1, order:jub cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx <= 0x30) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050872 */
#include <stdint.h>
 
int32_t var0459_0123456789 (void) {
    fputs ("0459 unsign start:16, iter:10, inc:+2, order:bju cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx >= 0x21) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80498be */
#include <stdint.h>
 
int32_t var0029_0123456789 (void) {
    fputs ("0029 signed start:0, iter:10, inc:+1, order:ujb cmp:<=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx > 9) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804caa6 */
#include <stdint.h>
 
int32_t var0221_0 (void) {
    fputs ("0221 signed start:16, iter:1, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0x11) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b708 */
#include <stdint.h>
 
uint32_t var0144_0123456789 (void) {
    fputs ("0144 signed start:10, iter:10, inc:-1, order:jbu cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx == 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c69c */
#include <stdint.h>
 
int32_t var0206_0 (void) {
    fputs ("0206 signed start:16, iter:1, inc:+2, order:buj cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx < 0x11);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ee0f */
#include <stdint.h>
 
int32_t var0357_empty (void) {
    fputs ("0357 signed start:16, iter:0, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0xf) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cda8 */
#include <stdint.h>
 
int32_t var0232_0 (void) {
    fputs ("0232 signed start:16, iter:1, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0xf) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c590 */
#include <stdint.h>
 
int32_t var0202_0 (void) {
    fputs ("0202 signed start:0, iter:1, inc:+1, order:jub cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx >= 0) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fd78 */
#include <stdint.h>
 
int32_t var0415_empty (void) {
    fputs ("0415 signed start:-20, iter:0, inc:+1, order:jbu cmp:< 0 exp:+68       expected=''    >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        if (ebx >= 0xffffffec) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f67e */
#include <stdint.h>
 
int32_t var0389_empty (void) {
    fputs ("0389 signed start:100, iter:0, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x67) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cbbe */
#include <stdint.h>
 
int32_t var0225_0 (void) {
    fputs ("0225 signed start:16, iter:1, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0x12) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050444 */
#include <stdint.h>
 
int32_t var0443_0123456789 (void) {
    fputs ("0443 unsign start:0, iter:10, inc:+1, order:ubj cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (ebx != 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80494c3 */
#include <stdint.h>
 
uint32_t var0013_0123456789 (void) {
    fputs ("0013 signed start:48, iter:10, inc:+1, order:jbu cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx >= 0x3a) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804eb2d */
#include <stdint.h>
 
int32_t var0346_empty (void) {
    fputs ("0346 signed start:0, iter:0, inc:+1, order:ujb cmp:< 0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx >= 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054f2d */
#include <stdint.h>
 
int32_t var0730_empty (void) {
    fputs ("0730 unsign start:16, iter:0, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0xd) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f750 */
#include <stdint.h>
 
int32_t var0392_empty (void) {
    fputs ("0392 signed start:100, iter:0, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x67) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054c71 */
#include <stdint.h>
 
int32_t var0720_empty (void) {
    fputs ("0720 unsign start:16, iter:0, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0xf) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c8c6 */
#include <stdint.h>
 
int32_t var0214_0 (void) {
    fputs ("0214 signed start:16, iter:1, inc:+2, order:ubj cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx != 0x10);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055070 */
#include <stdint.h>
 
uint32_t var0735_empty (void) {
    fputs ("0735 unsign start:57, iter:0, inc:-1, order:jbu cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx == 0x39) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805464a */
#include <stdint.h>
 
uint32_t var0696_0 (void) {
    fputs ("0696 unsign start:10, iter:1, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx <= 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e97d */
#include <stdint.h>
 
uint32_t var0339_empty (void) {
    fputs ("0339 signed start:48, iter:0, inc:+1, order:jbu cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx == 0x30) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80551de */
#include <stdint.h>
 
int32_t var0741_empty (void) {
    fputs ("0741 unsign start:100, iter:0, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx == 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054872 */
#include <stdint.h>
 
uint32_t var0704_empty (void) {
    fputs ("0704 unsign start:48, iter:0, inc:+1, order:ujb cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx == 0x30) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ef27 */
#include <stdint.h>
 
int32_t var0361_empty (void) {
    fputs ("0361 signed start:16, iter:0, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0xf) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051b10 */
#include <stdint.h>
 
uint32_t var0530_0123456789 (void) {
    fputs ("0530 unsign start:0, iter:10, inc:+1, order:buj cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx != 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050b24 */
#include <stdint.h>
 
int32_t var0469_0123456789 (void) {
    fputs ("0469 unsign start:16, iter:10, inc:+2, order:ujb cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0x23) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049b58 */
#include <stdint.h>
 
int32_t var0039_0123456789 (void) {
    fputs ("0039 signed start:16, iter:10, inc:+2, order:buj cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx <= 0x23);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054a97 */
#include <stdint.h>
 
int32_t var0713_empty (void) {
    fputs ("0713 unsign start:0, iter:0, inc:+1, order:ujb cmp:!=0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx == 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80543e7 */
#include <stdint.h>
 
uint32_t var0687_0 (void) {
    fputs ("0687 unsign start:10, iter:1, inc:-1, order:buj cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx > 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054cfd */
#include <stdint.h>
 
int32_t var0722_empty (void) {
    fputs ("0722 unsign start:16, iter:0, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx == 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805180e */
#include <stdint.h>
 
int32_t var0519_9876543210 (void) {
    fputs ("0519 unsign start:100, iter:10, inc:-2, order:ujb cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x51) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804acda */
#include <stdint.h>
 
int32_t var0106_9876543210 (void) {
    fputs ("0106 signed start:100, iter:10, inc:-2, order:jbu cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x50) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b393 */
#include <stdint.h>
 
uint32_t var0131_0123456789 (void) {
    fputs ("0131 signed start:0, iter:10, inc:+1, order:jub cmp:<=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx > 8) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051d73 */
#include <stdint.h>
 
uint32_t var0539_0123456789 (void) {
    fputs ("0539 unsign start:0, iter:10, inc:+1, order:ujb cmp:<=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx > 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b23a */
#include <stdint.h>
 
uint32_t var0126_0123456789 (void) {
    fputs ("0126 signed start:0, iter:10, inc:+1, order:jbu cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx == 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80547e8 */
#include <stdint.h>
 
uint32_t var0702_0 (void) {
    fputs ("0702 unsign start:10, iter:1, inc:-1, order:jub cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx <= 0xa) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051854 */
#include <stdint.h>
 
int32_t var0520_9876543210 (void) {
    fputs ("0520 unsign start:100, iter:10, inc:-2, order:jbu cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx == 0x50) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e9f7 */
#include <stdint.h>
 
uint32_t var0341_empty (void) {
    fputs ("0341 signed start:48, iter:0, inc:+1, order:jbu cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx > 0x2f) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f8ef */
#include <stdint.h>
 
uint32_t var0398_empty (void) {
    fputs ("0398 signed start:0, iter:0, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx > -1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a036 */
#include <stdint.h>
 
int32_t var0057_0123456789 (void) {
    fputs ("0057 signed start:16, iter:10, inc:+2, order:jbu cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0x24) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053ca0 */
#include <stdint.h>
 
int32_t var0660_9 (void) {
    fputs ("0660 unsign start:100, iter:1, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80533c5 */
#include <stdint.h>
 
uint32_t var0625_9 (void) {
    fputs ("0625 unsign start:57, iter:1, inc:-1, order:buj cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx > 0x38);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c724 */
#include <stdint.h>
 
int32_t var0208_0 (void) {
    fputs ("0208 signed start:16, iter:1, inc:+2, order:buj cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx <= 0x10);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051b53 */
#include <stdint.h>
 
uint32_t var0531_0123456789 (void) {
    fputs ("0531 unsign start:0, iter:10, inc:+1, order:buj cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx < 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805406e */
#include <stdint.h>
 
uint32_t var0674_0 (void) {
    fputs ("0674 unsign start:0, iter:1, inc:+1, order:buj cmp:<=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx <= 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053fa2 */
#include <stdint.h>
 
int32_t var0671_9 (void) {
    fputs ("0671 unsign start:100, iter:1, inc:-2, order:jub cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x65) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80535e0 */
#include <stdint.h>
 
uint32_t var0634_9 (void) {
    fputs ("0634 unsign start:57, iter:1, inc:-1, order:ujb cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx <= 0x38) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80496f6 */
#include <stdint.h>
 
int32_t var0022_0123456789 (void) {
    fputs ("0022 signed start:0, iter:10, inc:+1, order:bju cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        if (ebx >= 9) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050692 */
#include <stdint.h>
 
int32_t var0452_0123456789 (void) {
    fputs ("0452 unsign start:16, iter:10, inc:+2, order:buj cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx != 0x24);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fa03 */
#include <stdint.h>
 
uint32_t var0402_empty (void) {
    fputs ("0402 signed start:10, iter:0, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx == 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80519f8 */
#include <stdint.h>
 
int32_t var0526_9876543210 (void) {
    fputs ("0526 unsign start:100, iter:10, inc:-2, order:jub cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x53) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ae38 */
#include <stdint.h>
 
int32_t var0111_9876543210 (void) {
    fputs ("0111 signed start:100, iter:10, inc:-2, order:jub cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x52) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054206 */
#include <stdint.h>
 
uint32_t var0680_0 (void) {
    fputs ("0680 unsign start:0, iter:1, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx >= 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051055 */
#include <stdint.h>
 
uint32_t var0489_9876543210 (void) {
    fputs ("0489 unsign start:57, iter:10, inc:-1, order:ubj cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx > 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804aa24 */
#include <stdint.h>
 
int32_t var0096_9876543210 (void) {
    fputs ("0096 signed start:100, iter:10, inc:-2, order:ubj cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx > 0x52);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80508b8 */
#include <stdint.h>
 
int32_t var0460_0123456789 (void) {
    fputs ("0460 unsign start:16, iter:10, inc:+2, order:bju cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx > 0x21) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ff73 */
#include <stdint.h>
 
uint32_t var0423_0123456789 (void) {
    fputs ("0423 unsign start:48, iter:10, inc:+1, order:bju cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx == 0x39) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049900 */
#include <stdint.h>
 
int32_t var0030_0123456789 (void) {
    fputs ("0030 signed start:0, iter:10, inc:+1, order:jbu cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx == 0xa) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8056ef8 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x130fb;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80537c8 */
#include <stdint.h>
 
int32_t var0642_9 (void) {
    fputs ("0642 unsign start:100, iter:1, inc:-2, order:buj cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx != 0x62);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050118 */
#include <stdint.h>
 
uint32_t var0430_0123456789 (void) {
    fputs ("0430 unsign start:48, iter:10, inc:+1, order:ujb cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx >= 0x3a) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80491b6 */
#include <stdint.h>
 
uint32_t var0000_0123456789 (void) {
    fputs ("0000 signed start:48, iter:10, inc:+1, order:buj cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx != 0x3a);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050f63 */
#include <stdint.h>
 
uint32_t var0485_9876543210 (void) {
    fputs ("0485 unsign start:57, iter:10, inc:-1, order:bju cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx == 0x30) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a910 */
#include <stdint.h>
 
int32_t var0092_9876543210 (void) {
    fputs ("0092 signed start:100, iter:10, inc:-2, order:bju cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx < 0x54) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cc4a */
#include <stdint.h>
 
int32_t var0227_0 (void) {
    fputs ("0227 signed start:16, iter:1, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0x11) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805322c */
#include <stdint.h>
 
int32_t var0619_0 (void) {
    fputs ("0619 unsign start:16, iter:1, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx == 0x10) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bc78 */
#include <stdint.h>
 
int32_t var0165_0123456789 (void) {
    fputs ("0165 signed start:-20, iter:10, inc:+1, order:jub cmp:!=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        if (ebx == 0xfffffff5) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053abe */
#include <stdint.h>
 
int32_t var0653_9 (void) {
    fputs ("0653 unsign start:100, iter:1, inc:-2, order:ubj cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx > 0x65);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051516 */
#include <stdint.h>
 
int32_t var0508_9876543210 (void) {
    fputs ("0508 unsign start:100, iter:10, inc:-2, order:bju cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx < 0x54) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c94e */
#include <stdint.h>
 
int32_t var0216_0 (void) {
    fputs ("0216 signed start:16, iter:1, inc:+2, order:ubj cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx < 0xf);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b5b3 */
#include <stdint.h>
 
uint32_t var0139_0123456789 (void) {
    fputs ("0139 signed start:10, iter:10, inc:-1, order:ubj cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx > 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dad5 */
#include <stdint.h>
 
uint32_t var0283_0 (void) {
    fputs ("0283 signed start:0, iter:1, inc:+1, order:buj cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx < 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b9ea */
#include <stdint.h>
 
int32_t var0155_0123456789 (void) {
    fputs ("0155 signed start:-20, iter:10, inc:+1, order:bju cmp:<=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        if (ebx > 0xfffffff4) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053344 */
#include <stdint.h>
 
int32_t var0623_0 (void) {
    fputs ("0623 unsign start:16, iter:1, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0xe) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805173c */
#include <stdint.h>
 
int32_t var0516_9876543210 (void) {
    fputs ("0516 unsign start:100, iter:10, inc:-2, order:ujb cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x51) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ac08 */
#include <stdint.h>
 
int32_t var0103_9876543210 (void) {
    fputs ("0103 signed start:100, iter:10, inc:-2, order:ujb cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x51) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80546d4 */
#include <stdint.h>
 
uint32_t var0698_0 (void) {
    fputs ("0698 unsign start:10, iter:1, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx == 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050402 */
#include <stdint.h>
 
int32_t var0442_0123456789 (void) {
    fputs ("0442 unsign start:0, iter:10, inc:+1, order:bju cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        if (ebx >= 9) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049486 */
#include <stdint.h>
 
uint32_t var0012_0123456789 (void) {
    fputs ("0012 signed start:48, iter:10, inc:+1, order:jbu cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx == 0x3a) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80525b3 */
#include <stdint.h>
 
uint32_t var0571_0 (void) {
    fputs ("0571 unsign start:48, iter:1, inc:+1, order:ujb cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx == 0x31) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f4da */
#include <stdint.h>
 
int32_t var0383_empty (void) {
    fputs ("0383 signed start:100, iter:0, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx == 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805446d */
#include <stdint.h>
 
uint32_t var0689_0 (void) {
    fputs ("0689 unsign start:10, iter:1, inc:-1, order:bju cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx == 0xa) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a0c2 */
#include <stdint.h>
 
int32_t var0059_0123456789 (void) {
    fputs ("0059 signed start:16, iter:10, inc:+2, order:jbu cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0x23) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804940c */
#include <stdint.h>
 
uint32_t var0010_0123456789 (void) {
    fputs ("0010 signed start:48, iter:10, inc:+1, order:ujb cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx >= 0x3a) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050380 */
#include <stdint.h>
 
int32_t var0440_0123456789 (void) {
    fputs ("0440 unsign start:0, iter:10, inc:+1, order:buj cmp:<=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx <= 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e800 */
#include <stdint.h>
 
int32_t var0333_0 (void) {
    fputs ("0333 signed start:-20, iter:1, inc:+1, order:jub cmp:!=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        if (ebx == 0xffffffec) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cfd7 */
#include <stdint.h>
 
uint32_t var0241_9 (void) {
    fputs ("0241 signed start:57, iter:1, inc:-1, order:ubj cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx > 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052e60 */
#include <stdint.h>
 
int32_t var0605_0 (void) {
    fputs ("0605 unsign start:16, iter:1, inc:+2, order:ubj cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx < 0x10);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a3d7 */
#include <stdint.h>
 
uint32_t var0071_9876543210 (void) {
    fputs ("0071 signed start:57, iter:10, inc:-1, order:bju cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx < 0x31) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e530 */
#include <stdint.h>
 
int32_t var0322_0 (void) {
    fputs ("0322 signed start:-20, iter:1, inc:+1, order:bju cmp:< 0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        if (ebx >= 0xffffffec) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d141 */
#include <stdint.h>
 
uint32_t var0247_9 (void) {
    fputs ("0247 signed start:57, iter:1, inc:-1, order:jbu cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx <= 0x38) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051c63 */
#include <stdint.h>
 
uint32_t var0535_0123456789 (void) {
    fputs ("0535 unsign start:0, iter:10, inc:+1, order:ubj cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        putchar (esi);
        esi++;
    } while (ebx != 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b128 */
#include <stdint.h>
 
uint32_t var0122_0123456789 (void) {
    fputs ("0122 signed start:0, iter:10, inc:+1, order:ubj cmp:<=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        putchar (esi);
        esi++;
    } while (ebx <= 8);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fefd */
#include <stdint.h>
 
uint32_t var0421_0123456789 (void) {
    fputs ("0421 unsign start:48, iter:10, inc:+1, order:buj cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx < 0x3a);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80530ce */
#include <stdint.h>
 
int32_t var0614_0 (void) {
    fputs ("0614 unsign start:16, iter:1, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx == 0x12) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c23c */
#include <stdint.h>
 
int32_t var0189_0 (void) {
    fputs ("0189 signed start:0, iter:1, inc:+1, order:bju cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        if (ebx == 0) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051378 */
#include <stdint.h>
 
int32_t var0502_9876543210 (void) {
    fputs ("0502 unsign start:100, iter:10, inc:-2, order:buj cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx > 0x50);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e31a */
#include <stdint.h>
 
uint32_t var0314_0 (void) {
    fputs ("0314 signed start:10, iter:1, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx < 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ceaa */
#include <stdint.h>
 
uint32_t var0236_9 (void) {
    fputs ("0236 signed start:57, iter:1, inc:-1, order:buj cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx >= 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053711 */
#include <stdint.h>
 
uint32_t var0639_9 (void) {
    fputs ("0639 unsign start:57, iter:1, inc:-1, order:jub cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx == 0x39) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bf94 */
#include <stdint.h>
 
uint32_t var0178_0 (void) {
    fputs ("0178 signed start:48, iter:1, inc:+1, order:ujb cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx >= 0x31) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b966 */
#include <stdint.h>
 
int32_t var0153_0123456789 (void) {
    fputs ("0153 signed start:-20, iter:10, inc:+1, order:bju cmp:!=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        if (ebx == 0xfffffff5) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e0b3 */
#include <stdint.h>
 
uint32_t var0305_0 (void) {
    fputs ("0305 signed start:10, iter:1, inc:-1, order:bju cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx < 0xb) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80556c7 */
#include <stdint.h>
 
uint32_t var0759_empty (void) {
    fputs ("0759 unsign start:0, iter:0, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx >= 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805148a */
#include <stdint.h>
 
int32_t var0506_9876543210 (void) {
    fputs ("0506 unsign start:100, iter:10, inc:-2, order:bju cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx <= 0x53) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80508fe */
#include <stdint.h>
 
int32_t var0461_0123456789 (void) {
    fputs ("0461 unsign start:16, iter:10, inc:+2, order:bju cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx > 0x20) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ffb0 */
#include <stdint.h>
 
uint32_t var0424_0123456789 (void) {
    fputs ("0424 unsign start:48, iter:10, inc:+1, order:bju cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx >= 0x39) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049942 */
#include <stdint.h>
 
int32_t var0031_0123456789 (void) {
    fputs ("0031 signed start:0, iter:10, inc:+1, order:jbu cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx >= 0xa) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053dfe */
#include <stdint.h>
 
int32_t var0665_9 (void) {
    fputs ("0665 unsign start:100, iter:1, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a108 */
#include <stdint.h>
 
int32_t var0060_0123456789 (void) {
    fputs ("0060 signed start:16, iter:10, inc:+2, order:jbu cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0x22) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b018 */
#include <stdint.h>
 
uint32_t var0118_0123456789 (void) {
    fputs ("0118 signed start:0, iter:10, inc:+1, order:bju cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx >= 9) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053c14 */
#include <stdint.h>
 
int32_t var0658_9 (void) {
    fputs ("0658 unsign start:100, iter:1, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x63) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049f1e */
#include <stdint.h>
 
int32_t var0053_0123456789 (void) {
    fputs ("0053 signed start:16, iter:10, inc:+2, order:ujb cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0x23) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052488 */
#include <stdint.h>
 
uint32_t var0566_0 (void) {
    fputs ("0566 unsign start:48, iter:1, inc:+1, order:bju cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx >= 0x30) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e6b6 */
#include <stdint.h>
 
int32_t var0328_0 (void) {
    fputs ("0328 signed start:-20, iter:1, inc:+1, order:ujb cmp:< 0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        if (ebx >= 0xffffffed) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ed3d */
#include <stdint.h>
 
int32_t var0354_empty (void) {
    fputs ("0354 signed start:16, iter:0, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx == 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a53f */
#include <stdint.h>
 
uint32_t var0077_9876543210 (void) {
    fputs ("0077 signed start:57, iter:10, inc:-1, order:ujb cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx < 0x30) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805391c */
#include <stdint.h>
 
int32_t var0647_9 (void) {
    fputs ("0647 unsign start:100, iter:1, inc:-2, order:bju cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx == 0x64) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052721 */
#include <stdint.h>
 
uint32_t var0577_0 (void) {
    fputs ("0577 unsign start:48, iter:1, inc:+1, order:jub cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx == 0x30) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804af4d */
#include <stdint.h>
 
uint32_t var0115_0123456789 (void) {
    fputs ("0115 signed start:0, iter:10, inc:+1, order:buj cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx < 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804db5b */
#include <stdint.h>
 
uint32_t var0285_0 (void) {
    fputs ("0285 signed start:0, iter:1, inc:+1, order:bju cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx == 0) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dcf3 */
#include <stdint.h>
 
uint32_t var0291_0 (void) {
    fputs ("0291 signed start:0, iter:1, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx == 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f638 */
#include <stdint.h>
 
int32_t var0388_empty (void) {
    fputs ("0388 signed start:100, iter:0, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx == 0x66) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051334 */
#include <stdint.h>
 
int32_t var0501_9876543210 (void) {
    fputs ("0501 unsign start:100, iter:10, inc:-2, order:buj cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx > 0x51);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80520ea */
#include <stdint.h>
 
uint32_t var0552_0123456789 (void) {
    fputs ("0552 unsign start:10, iter:10, inc:-1, order:ubj cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx >= 2);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052d04 */
#include <stdint.h>
 
int32_t var0600_0 (void) {
    fputs ("0600 unsign start:16, iter:1, inc:+2, order:bju cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx >= 0x10) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80507a2 */
#include <stdint.h>
 
int32_t var0456_0123456789 (void) {
    fputs ("0456 unsign start:16, iter:10, inc:+2, order:buj cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx <= 0x22);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80497fa */
#include <stdint.h>
 
int32_t var0026_0123456789 (void) {
    fputs ("0026 signed start:0, iter:10, inc:+1, order:ubj cmp:<=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (ebx <= 8);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804aaf0 */
#include <stdint.h>
 
int32_t var0099_9876543210 (void) {
    fputs ("0099 signed start:100, iter:10, inc:-2, order:ujb cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx == 0x50) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050340 */
#include <stdint.h>
 
int32_t var0439_0123456789 (void) {
    fputs ("0439 unsign start:0, iter:10, inc:+1, order:buj cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx < 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80493cf */
#include <stdint.h>
 
uint32_t var0009_0123456789 (void) {
    fputs ("0009 signed start:48, iter:10, inc:+1, order:ujb cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx == 0x3a) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051f95 */
#include <stdint.h>
 
uint32_t var0547_0123456789 (void) {
    fputs ("0547 unsign start:10, iter:10, inc:-1, order:bju cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx == 1) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805196c */
#include <stdint.h>
 
int32_t var0524_9876543210 (void) {
    fputs ("0524 unsign start:100, iter:10, inc:-2, order:jbu cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x51) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052172 */
#include <stdint.h>
 
uint32_t var0554_0123456789 (void) {
    fputs ("0554 unsign start:10, iter:10, inc:-1, order:ujb cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx <= 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050b6a */
#include <stdint.h>
 
int32_t var0470_0123456789 (void) {
    fputs ("0470 unsign start:16, iter:10, inc:+2, order:ujb cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0x23) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049b9c */
#include <stdint.h>
 
int32_t var0040_0123456789 (void) {
    fputs ("0040 signed start:16, iter:10, inc:+2, order:buj cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx <= 0x22);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dbe5 */
#include <stdint.h>
 
uint32_t var0287_0 (void) {
    fputs ("0287 signed start:0, iter:1, inc:+1, order:bju cmp:<=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx > -1) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052064 */
#include <stdint.h>
 
uint32_t var0550_0123456789 (void) {
    fputs ("0550 unsign start:10, iter:10, inc:-1, order:ubj cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx != 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b861 */
#include <stdint.h>
 
uint32_t var0149_0123456789 (void) {
    fputs ("0149 signed start:10, iter:10, inc:-1, order:jub cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx < 2) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e8c6 */
#include <stdint.h>
 
uint32_t var0336_empty (void) {
    fputs ("0336 signed start:48, iter:0, inc:+1, order:ujb cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx == 0x30) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053e8a */
#include <stdint.h>
 
int32_t var0667_9 (void) {
    fputs ("0667 unsign start:100, iter:1, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx == 0x64) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f085 */
#include <stdint.h>
 
int32_t var0366_empty (void) {
    fputs ("0366 signed start:16, iter:0, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0xd) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b8a6 */
#include <stdint.h>
 
int32_t var0150_0123456789 (void) {
    fputs ("0150 signed start:-20, iter:10, inc:+1, order:buj cmp:!=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (ebx != 0xfffffff6);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fa8d */
#include <stdint.h>
 
uint32_t var0404_empty (void) {
    fputs ("0404 signed start:10, iter:0, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx < 0xb) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051db8 */
#include <stdint.h>
 
uint32_t var0540_0123456789 (void) {
    fputs ("0540 unsign start:0, iter:10, inc:+1, order:jbu cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx == 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fad2 */
#include <stdint.h>
 
uint32_t var0405_empty (void) {
    fputs ("0405 signed start:10, iter:0, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx == 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bb70 */
#include <stdint.h>
 
int32_t var0161_0123456789 (void) {
    fputs ("0161 signed start:-20, iter:10, inc:+1, order:ujb cmp:<=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        if (ebx > 0xfffffff5) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fc2b */
#include <stdint.h>
 
uint32_t var0410_empty (void) {
    fputs ("0410 signed start:10, iter:0, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx < 0xc) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f8aa */
#include <stdint.h>
 
uint32_t var0397_empty (void) {
    fputs ("0397 signed start:0, iter:0, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx >= 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ea71 */
#include <stdint.h>
 
uint32_t var0343_empty (void) {
    fputs ("0343 signed start:48, iter:0, inc:+1, order:jub cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx >= 0x2f) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fe80 */
#include <stdint.h>
 
int32_t var0419_empty (void) {
    fputs ("0419 signed start:-20, iter:0, inc:+1, order:jub cmp:<=0 exp:+68       expected=''    >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        if (ebx > 0xffffffea) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b41b */
#include <stdint.h>
 
uint32_t var0133_0123456789 (void) {
    fputs ("0133 signed start:10, iter:10, inc:-1, order:buj cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx > 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80539a8 */
#include <stdint.h>
 
int32_t var0649_9 (void) {
    fputs ("0649 unsign start:100, iter:1, inc:-2, order:bju cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx <= 0x64) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bd79 */
#include <stdint.h>
 
uint32_t var0169_0 (void) {
    fputs ("0169 signed start:48, iter:1, inc:+1, order:buj cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx < 0x31);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b7d7 */
#include <stdint.h>
 
uint32_t var0147_0123456789 (void) {
    fputs ("0147 signed start:10, iter:10, inc:-1, order:jub cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx == 1) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fdfc */
#include <stdint.h>
 
int32_t var0417_empty (void) {
    fputs ("0417 signed start:-20, iter:0, inc:+1, order:jub cmp:!=0 exp:+68       expected=''    >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        if (ebx == 0xffffffeb) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c3c2 */
#include <stdint.h>
 
int32_t var0195_0 (void) {
    fputs ("0195 signed start:0, iter:1, inc:+1, order:ujb cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx == 1) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051d2e */
#include <stdint.h>
 
uint32_t var0538_0123456789 (void) {
    fputs ("0538 unsign start:0, iter:10, inc:+1, order:ujb cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx >= 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b1f5 */
#include <stdint.h>
 
uint32_t var0125_0123456789 (void) {
    fputs ("0125 signed start:0, iter:10, inc:+1, order:ujb cmp:<=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx > 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a1da */
#include <stdint.h>
 
int32_t var0063_0123456789 (void) {
    fputs ("0063 signed start:16, iter:10, inc:+2, order:jub cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0x21) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052c36 */
#include <stdint.h>
 
int32_t var0597_0 (void) {
    fputs ("0597 unsign start:16, iter:1, inc:+2, order:buj cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx <= 0x11);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c102 */
#include <stdint.h>
 
uint32_t var0184_0 (void) {
    fputs ("0184 signed start:48, iter:1, inc:+1, order:jub cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx >= 0x30) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bb2e */
#include <stdint.h>
 
int32_t var0160_0123456789 (void) {
    fputs ("0160 signed start:-20, iter:10, inc:+1, order:ujb cmp:< 0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        if (ebx >= 0xfffffff6) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80529de */
#include <stdint.h>
 
int32_t var0588_0 (void) {
    fputs ("0588 unsign start:0, iter:1, inc:+1, order:ujb cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx >= 1) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804be69 */
#include <stdint.h>
 
uint32_t var0173_0 (void) {
    fputs ("0173 signed start:48, iter:1, inc:+1, order:bju cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx > 0x2f) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d012 */
#include <stdint.h>
 
uint32_t var0242_9 (void) {
    fputs ("0242 signed start:57, iter:1, inc:-1, order:ubj cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx >= 0x3a);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80549e0 */
#include <stdint.h>
 
uint32_t var0710_empty (void) {
    fputs ("0710 unsign start:48, iter:0, inc:+1, order:jub cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx == 0x2f) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d40c */
#include <stdint.h>
 
int32_t var0258_9 (void) {
    fputs ("0258 signed start:100, iter:1, inc:-2, order:bju cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx <= 0x65) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805212d */
#include <stdint.h>
 
uint32_t var0553_0123456789 (void) {
    fputs ("0553 unsign start:10, iter:10, inc:-1, order:ujb cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx == 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805365a */
#include <stdint.h>
 
uint32_t var0636_9 (void) {
    fputs ("0636 unsign start:57, iter:1, inc:-1, order:jbu cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx == 0x38) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804df60 */
#include <stdint.h>
 
uint32_t var0300_0 (void) {
    fputs ("0300 signed start:10, iter:1, inc:-1, order:buj cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx != 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a7b6 */
#include <stdint.h>
 
int32_t var0087_9876543210 (void) {
    fputs ("0087 signed start:100, iter:10, inc:-2, order:buj cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx >= 0x52);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805468f */
#include <stdint.h>
 
uint32_t var0697_0 (void) {
    fputs ("0697 unsign start:10, iter:1, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx < 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050d0e */
#include <stdint.h>
 
int32_t var0476_0123456789 (void) {
    fputs ("0476 unsign start:16, iter:10, inc:+2, order:jbu cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0x22) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049d3e */
#include <stdint.h>
 
int32_t var0046_0123456789 (void) {
    fputs ("0046 signed start:16, iter:10, inc:+2, order:ubj cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx != 0x22);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d678 */
#include <stdint.h>
 
int32_t var0267_9 (void) {
    fputs ("0267 signed start:100, iter:1, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx == 0x62) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fba1 */
#include <stdint.h>
 
uint32_t var0408_empty (void) {
    fputs ("0408 signed start:10, iter:0, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx == 0xb) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051f0f */
#include <stdint.h>
 
uint32_t var0545_0123456789 (void) {
    fputs ("0545 unsign start:10, iter:10, inc:-1, order:buj cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx > 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053d2c */
#include <stdint.h>
 
int32_t var0662_9 (void) {
    fputs ("0662 unsign start:100, iter:1, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx == 0x62) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805343b */
#include <stdint.h>
 
uint32_t var0627_9 (void) {
    fputs ("0627 unsign start:57, iter:1, inc:-1, order:bju cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx == 0x39) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804eb6f */
#include <stdint.h>
 
int32_t var0347_empty (void) {
    fputs ("0347 signed start:0, iter:0, inc:+1, order:ujb cmp:<=0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx > -1) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805442a */
#include <stdint.h>
 
uint32_t var0688_0 (void) {
    fputs ("0688 unsign start:10, iter:1, inc:-1, order:buj cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx >= 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804da92 */
#include <stdint.h>
 
uint32_t var0282_0 (void) {
    fputs ("0282 signed start:0, iter:1, inc:+1, order:buj cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx != 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053b46 */
#include <stdint.h>
 
int32_t var0655_9 (void) {
    fputs ("0655 unsign start:100, iter:1, inc:-2, order:ubj cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx >= 0x66);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805155c */
#include <stdint.h>
 
int32_t var0509_9876543210 (void) {
    fputs ("0509 unsign start:100, iter:10, inc:-2, order:bju cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx < 0x53) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c27e */
#include <stdint.h>
 
int32_t var0190_0 (void) {
    fputs ("0190 signed start:0, iter:1, inc:+1, order:bju cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        if (ebx >= 0) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f2c5 */
#include <stdint.h>
 
uint32_t var0375_empty (void) {
    fputs ("0375 signed start:57, iter:0, inc:-1, order:jub cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx == 0x3a) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b6c3 */
#include <stdint.h>
 
uint32_t var0143_0123456789 (void) {
    fputs ("0143 signed start:10, iter:10, inc:-1, order:ujb cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx < 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ee55 */
#include <stdint.h>
 
int32_t var0358_empty (void) {
    fputs ("0358 signed start:16, iter:0, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0xe) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053850 */
#include <stdint.h>
 
int32_t var0644_9 (void) {
    fputs ("0644 unsign start:100, iter:1, inc:-2, order:buj cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx > 0x62);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fa48 */
#include <stdint.h>
 
uint32_t var0403_empty (void) {
    fputs ("0403 signed start:10, iter:0, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx <= 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051145 */
#include <stdint.h>
 
uint32_t var0493_9876543210 (void) {
    fputs ("0493 unsign start:57, iter:10, inc:-1, order:ujb cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx < 0x30) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052ae6 */
#include <stdint.h>
 
int32_t var0592_0 (void) {
    fputs ("0592 unsign start:0, iter:1, inc:+1, order:jbu cmp:<=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx > 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805166e */
#include <stdint.h>
 
int32_t var0513_9876543210 (void) {
    fputs ("0513 unsign start:100, iter:10, inc:-2, order:ubj cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx >= 0x54);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ab36 */
#include <stdint.h>
 
int32_t var0100_9876543210 (void) {
    fputs ("0100 signed start:100, iter:10, inc:-2, order:ujb cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x51) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d2b6 */
#include <stdint.h>
 
int32_t var0253_9 (void) {
    fputs ("0253 signed start:100, iter:1, inc:-2, order:buj cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx > 0x63);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050944 */
#include <stdint.h>
 
int32_t var0462_0123456789 (void) {
    fputs ("0462 unsign start:16, iter:10, inc:+2, order:ubj cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx != 0x22);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ffed */
#include <stdint.h>
 
uint32_t var0425_0123456789 (void) {
    fputs ("0425 unsign start:48, iter:10, inc:+1, order:bju cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx > 0x38) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049984 */
#include <stdint.h>
 
int32_t var0032_0123456789 (void) {
    fputs ("0032 signed start:0, iter:10, inc:+1, order:jbu cmp:<=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx > 9) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055820 */
#include <stdint.h>
 
uint32_t var0764_empty (void) {
    fputs ("0764 unsign start:10, iter:0, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx <= 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054e5b */
#include <stdint.h>
 
int32_t var0727_empty (void) {
    fputs ("0727 unsign start:16, iter:0, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx == 0xe) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052898 */
#include <stdint.h>
 
int32_t var0583_0 (void) {
    fputs ("0583 unsign start:0, iter:1, inc:+1, order:bju cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        if (ebx == 0) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d524 */
#include <stdint.h>
 
int32_t var0262_9 (void) {
    fputs ("0262 signed start:100, iter:1, inc:-2, order:ubj cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx != 0x64);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804af90 */
#include <stdint.h>
 
uint32_t var0116_0123456789 (void) {
    fputs ("0116 signed start:0, iter:10, inc:+1, order:buj cmp:<=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx <= 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804de07 */
#include <stdint.h>
 
uint32_t var0295_0 (void) {
    fputs ("0295 signed start:0, iter:1, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx >= 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055526 */
#include <stdint.h>
 
int32_t var0753_empty (void) {
    fputs ("0753 unsign start:100, iter:0, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x66) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054be5 */
#include <stdint.h>
 
int32_t var0718_empty (void) {
    fputs ("0718 unsign start:16, iter:0, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050de0 */
#include <stdint.h>
 
int32_t var0479_0123456789 (void) {
    fputs ("0479 unsign start:16, iter:10, inc:+2, order:jub cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0x21) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049e0a */
#include <stdint.h>
 
int32_t var0049_0123456789 (void) {
    fputs ("0049 signed start:16, iter:10, inc:+2, order:ubj cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx <= 0x21);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804afd3 */
#include <stdint.h>
 
uint32_t var0117_0123456789 (void) {
    fputs ("0117 signed start:0, iter:10, inc:+1, order:bju cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx == 9) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d8a8 */
#include <stdint.h>
 
int32_t var0275_9 (void) {
    fputs ("0275 signed start:100, iter:1, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ca60 */
#include <stdint.h>
 
int32_t var0220_0 (void) {
    fputs ("0220 signed start:16, iter:1, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0x12) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050bf6 */
#include <stdint.h>
 
int32_t var0472_0123456789 (void) {
    fputs ("0472 unsign start:16, iter:10, inc:+2, order:jbu cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx == 0x24) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049c26 */
#include <stdint.h>
 
int32_t var0042_0123456789 (void) {
    fputs ("0042 signed start:16, iter:10, inc:+2, order:bju cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx >= 0x22) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805533c */
#include <stdint.h>
 
int32_t var0746_empty (void) {
    fputs ("0746 unsign start:100, iter:0, inc:-2, order:jbu cmp:!=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx == 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80549a3 */
#include <stdint.h>
 
uint32_t var0709_empty (void) {
    fputs ("0709 unsign start:48, iter:0, inc:+1, order:jbu cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx > 0x2f) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050bb0 */
#include <stdint.h>
 
int32_t var0471_0123456789 (void) {
    fputs ("0471 unsign start:16, iter:10, inc:+2, order:ujb cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0x22) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049be0 */
#include <stdint.h>
 
int32_t var0041_0123456789 (void) {
    fputs ("0041 signed start:16, iter:10, inc:+2, order:bju cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx == 0x22) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80536d4 */
#include <stdint.h>
 
uint32_t var0638_9 (void) {
    fputs ("0638 unsign start:57, iter:1, inc:-1, order:jbu cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx < 0x39) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c54e */
#include <stdint.h>
 
int32_t var0201_0 (void) {
    fputs ("0201 signed start:0, iter:1, inc:+1, order:jub cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx == 0) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053db8 */
#include <stdint.h>
 
int32_t var0664_9 (void) {
    fputs ("0664 unsign start:100, iter:1, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x62) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80534b5 */
#include <stdint.h>
 
uint32_t var0629_9 (void) {
    fputs ("0629 unsign start:57, iter:1, inc:-1, order:bju cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx < 0x3a) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050c3c */
#include <stdint.h>
 
int32_t var0473_0123456789 (void) {
    fputs ("0473 unsign start:16, iter:10, inc:+2, order:jbu cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0x24) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049c6c */
#include <stdint.h>
 
int32_t var0043_0123456789 (void) {
    fputs ("0043 signed start:16, iter:10, inc:+2, order:bju cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx >= 0x21) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a266 */
#include <stdint.h>
 
int32_t var0065_0123456789 (void) {
    fputs ("0065 signed start:16, iter:10, inc:+2, order:jub cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0x20) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805082c */
#include <stdint.h>
 
int32_t var0458_0123456789 (void) {
    fputs ("0458 unsign start:16, iter:10, inc:+2, order:bju cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx >= 0x22) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804987c */
#include <stdint.h>
 
int32_t var0028_0123456789 (void) {
    fputs ("0028 signed start:0, iter:10, inc:+1, order:ujb cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx >= 0xa) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805101a */
#include <stdint.h>
 
uint32_t var0488_9876543210 (void) {
    fputs ("0488 unsign start:57, iter:10, inc:-1, order:ubj cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx != 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a9e0 */
#include <stdint.h>
 
int32_t var0095_9876543210 (void) {
    fputs ("0095 signed start:100, iter:10, inc:-2, order:ubj cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx > 0x53);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053bce */
#include <stdint.h>
 
int32_t var0657_9 (void) {
    fputs ("0657 unsign start:100, iter:1, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx == 0x62) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80511fc */
#include <stdint.h>
 
uint32_t var0496_9876543210 (void) {
    fputs ("0496 unsign start:57, iter:10, inc:-1, order:jbu cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx < 0x30) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a2ac */
#include <stdint.h>
 
uint32_t var0066_9876543210 (void) {
    fputs ("0066 signed start:57, iter:10, inc:-1, order:buj cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx != 0x2f);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fcb2 */
#include <stdint.h>
 
int32_t var0412_empty (void) {
    fputs ("0412 signed start:-20, iter:0, inc:+1, order:ujb cmp:< 0 exp:+68       expected=''    >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        if (ebx >= 0xffffffec) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051090 */
#include <stdint.h>
 
uint32_t var0490_9876543210 (void) {
    fputs ("0490 unsign start:57, iter:10, inc:-1, order:ubj cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx >= 0x31);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80538d8 */
#include <stdint.h>
 
int32_t var0646_9 (void) {
    fputs ("0646 unsign start:100, iter:1, inc:-2, order:buj cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx >= 0x63);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80515a2 */
#include <stdint.h>
 
int32_t var0510_9876543210 (void) {
    fputs ("0510 unsign start:100, iter:10, inc:-2, order:ubj cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx != 0x52);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053f16 */
#include <stdint.h>
 
int32_t var0669_9 (void) {
    fputs ("0669 unsign start:100, iter:1, inc:-2, order:jub cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x64) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b570 */
#include <stdint.h>
 
uint32_t var0138_0123456789 (void) {
    fputs ("0138 signed start:10, iter:10, inc:-1, order:ubj cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx != 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ed83 */
#include <stdint.h>
 
int32_t var0355_empty (void) {
    fputs ("0355 signed start:16, iter:0, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bfd1 */
#include <stdint.h>
 
uint32_t var0179_0 (void) {
    fputs ("0179 signed start:48, iter:1, inc:+1, order:ujb cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx > 0x30) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a14e */
#include <stdint.h>
 
int32_t var0061_0123456789 (void) {
    fputs ("0061 signed start:16, iter:10, inc:+2, order:jub cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx == 0x22) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051a3e */
#include <stdint.h>
 
int32_t var0527_9876543210 (void) {
    fputs ("0527 unsign start:100, iter:10, inc:-2, order:jub cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x52) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ae7e */
#include <stdint.h>
 
int32_t var0112_9876543210 (void) {
    fputs ("0112 signed start:100, iter:10, inc:-2, order:jub cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x54) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050300 */
#include <stdint.h>
 
int32_t var0438_0123456789 (void) {
    fputs ("0438 unsign start:0, iter:10, inc:+1, order:buj cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx != 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049394 */
#include <stdint.h>
 
uint32_t var0008_0123456789 (void) {
    fputs ("0008 signed start:48, iter:10, inc:+1, order:ubj cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx <= 0x38);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e0f8 */
#include <stdint.h>
 
uint32_t var0306_0 (void) {
    fputs ("0306 signed start:10, iter:1, inc:-1, order:ubj cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx != 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80502c3 */
#include <stdint.h>
 
uint32_t var0437_0123456789 (void) {
    fputs ("0437 unsign start:48, iter:10, inc:+1, order:jub cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx > 0x38) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049359 */
#include <stdint.h>
 
uint32_t var0007_0123456789 (void) {
    fputs ("0007 signed start:48, iter:10, inc:+1, order:ubj cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx < 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805201f */
#include <stdint.h>
 
uint32_t var0549_0123456789 (void) {
    fputs ("0549 unsign start:10, iter:10, inc:-1, order:bju cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx < 2) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a220 */
#include <stdint.h>
 
int32_t var0064_0123456789 (void) {
    fputs ("0064 signed start:16, iter:10, inc:+2, order:jub cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0x21) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e9ba */
#include <stdint.h>
 
uint32_t var0340_empty (void) {
    fputs ("0340 signed start:48, iter:0, inc:+1, order:jbu cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx >= 0x30) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051b96 */
#include <stdint.h>
 
uint32_t var0532_0123456789 (void) {
    fputs ("0532 unsign start:0, iter:10, inc:+1, order:buj cmp:<=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx <= 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e35f */
#include <stdint.h>
 
uint32_t var0315_0 (void) {
    fputs ("0315 signed start:10, iter:1, inc:-1, order:jub cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx == 0xa) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051c1e */
#include <stdint.h>
 
uint32_t var0534_0123456789 (void) {
    fputs ("0534 unsign start:0, iter:10, inc:+1, order:bju cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx >= 9) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b0e5 */
#include <stdint.h>
 
uint32_t var0121_0123456789 (void) {
    fputs ("0121 signed start:0, iter:10, inc:+1, order:ubj cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        putchar (esi);
        esi++;
    } while (ebx < 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80497ba */
#include <stdint.h>
 
int32_t var0025_0123456789 (void) {
    fputs ("0025 signed start:0, iter:10, inc:+1, order:ubj cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (ebx < 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805075e */
#include <stdint.h>
 
int32_t var0455_0123456789 (void) {
    fputs ("0455 unsign start:16, iter:10, inc:+2, order:buj cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx <= 0x23);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804de91 */
#include <stdint.h>
 
uint32_t var0297_0 (void) {
    fputs ("0297 signed start:0, iter:1, inc:+1, order:jub cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx == 0) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c7f4 */
#include <stdint.h>
 
int32_t var0211_0 (void) {
    fputs ("0211 signed start:16, iter:1, inc:+2, order:bju cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx >= 0xf) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80547a3 */
#include <stdint.h>
 
uint32_t var0701_0 (void) {
    fputs ("0701 unsign start:10, iter:1, inc:-1, order:jub cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx == 0xa) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e572 */
#include <stdint.h>
 
int32_t var0323_0 (void) {
    fputs ("0323 signed start:-20, iter:1, inc:+1, order:bju cmp:<=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        if (ebx > 0xffffffeb) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805413b */
#include <stdint.h>
 
uint32_t var0677_0 (void) {
    fputs ("0677 unsign start:0, iter:1, inc:+1, order:ubj cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        putchar (esi);
        esi++;
    } while (ebx != 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80525f0 */
#include <stdint.h>
 
uint32_t var0572_0 (void) {
    fputs ("0572 unsign start:48, iter:1, inc:+1, order:ujb cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx >= 0x31) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c6e0 */
#include <stdint.h>
 
int32_t var0207_0 (void) {
    fputs ("0207 signed start:16, iter:1, inc:+2, order:buj cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx <= 0x11);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804caec */
#include <stdint.h>
 
int32_t var0222_0 (void) {
    fputs ("0222 signed start:16, iter:1, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0x11) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e842 */
#include <stdint.h>
 
int32_t var0334_0 (void) {
    fputs ("0334 signed start:-20, iter:1, inc:+1, order:jub cmp:< 0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        if (ebx >= 0xffffffec) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a48a */
#include <stdint.h>
 
uint32_t var0074_9876543210 (void) {
    fputs ("0074 signed start:57, iter:10, inc:-1, order:ubj cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx >= 0x31);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dcb0 */
#include <stdint.h>
 
uint32_t var0290_0 (void) {
    fputs ("0290 signed start:0, iter:1, inc:+1, order:ubj cmp:<=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        putchar (esi);
        esi++;
    } while (ebx <= -1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80542d5 */
#include <stdint.h>
 
uint32_t var0683_0 (void) {
    fputs ("0683 unsign start:0, iter:1, inc:+1, order:jbu cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx >= 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cdee */
#include <stdint.h>
 
int32_t var0233_0 (void) {
    fputs ("0233 signed start:16, iter:1, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0xe) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050249 */
#include <stdint.h>
 
uint32_t var0435_0123456789 (void) {
    fputs ("0435 unsign start:48, iter:10, inc:+1, order:jub cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx == 0x39) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80492e1 */
#include <stdint.h>
 
uint32_t var0005_0123456789 (void) {
    fputs ("0005 signed start:48, iter:10, inc:+1, order:bju cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx > 0x38) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80510cb */
#include <stdint.h>
 
uint32_t var0491_9876543210 (void) {
    fputs ("0491 unsign start:57, iter:10, inc:-1, order:ujb cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx == 0x2f) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f408 */
#include <stdint.h>
 
int32_t var0380_empty (void) {
    fputs ("0380 signed start:100, iter:0, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050f28 */
#include <stdint.h>
 
uint32_t var0484_9876543210 (void) {
    fputs ("0484 unsign start:57, iter:10, inc:-1, order:buj cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx >= 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a8ca */
#include <stdint.h>
 
int32_t var0091_9876543210 (void) {
    fputs ("0091 signed start:100, iter:10, inc:-2, order:bju cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx <= 0x52) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805453c */
#include <stdint.h>
 
uint32_t var0692_0 (void) {
    fputs ("0692 unsign start:10, iter:1, inc:-1, order:ubj cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx != 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cc04 */
#include <stdint.h>
 
int32_t var0226_0 (void) {
    fputs ("0226 signed start:16, iter:1, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0x11) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c5d2 */
#include <stdint.h>
 
int32_t var0203_0 (void) {
    fputs ("0203 signed start:0, iter:1, inc:+1, order:jub cmp:<=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx > -1) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c90a */
#include <stdint.h>
 
int32_t var0215_0 (void) {
    fputs ("0215 signed start:16, iter:1, inc:+2, order:ubj cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx < 0x10);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dd38 */
#include <stdint.h>
 
uint32_t var0292_0 (void) {
    fputs ("0292 signed start:0, iter:1, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx >= 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80507e6 */
#include <stdint.h>
 
int32_t var0457_0123456789 (void) {
    fputs ("0457 unsign start:16, iter:10, inc:+2, order:bju cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx == 0x22) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804983a */
#include <stdint.h>
 
int32_t var0027_0123456789 (void) {
    fputs ("0027 signed start:0, iter:10, inc:+1, order:ujb cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx == 0xa) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dba0 */
#include <stdint.h>
 
uint32_t var0286_0 (void) {
    fputs ("0286 signed start:0, iter:1, inc:+1, order:bju cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx >= 0) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804baac */
#include <stdint.h>
 
int32_t var0158_0123456789 (void) {
    fputs ("0158 signed start:-20, iter:10, inc:+1, order:ubj cmp:<=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (ebx <= 0xfffffff4);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a6ea */
#include <stdint.h>
 
int32_t var0084_9876543210 (void) {
    fputs ("0084 signed start:100, iter:10, inc:-2, order:buj cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx != 0x50);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b4a1 */
#include <stdint.h>
 
uint32_t var0135_0123456789 (void) {
    fputs ("0135 signed start:10, iter:10, inc:-1, order:bju cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx == 1) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054d43 */
#include <stdint.h>
 
int32_t var0723_empty (void) {
    fputs ("0723 unsign start:16, iter:0, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805570c */
#include <stdint.h>
 
uint32_t var0760_empty (void) {
    fputs ("0760 unsign start:10, iter:0, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx == 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dc2a */
#include <stdint.h>
 
uint32_t var0288_0 (void) {
    fputs ("0288 signed start:0, iter:1, inc:+1, order:ubj cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        putchar (esi);
        esi++;
    } while (ebx != 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055224 */
#include <stdint.h>
 
int32_t var0742_empty (void) {
    fputs ("0742 unsign start:100, iter:0, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x65) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80548af */
#include <stdint.h>
 
uint32_t var0705_empty (void) {
    fputs ("0705 unsign start:48, iter:0, inc:+1, order:ujb cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx >= 0x30) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80532fe */
#include <stdint.h>
 
int32_t var0622_0 (void) {
    fputs ("0622 unsign start:16, iter:1, inc:+2, order:jub cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0xf) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d104 */
#include <stdint.h>
 
uint32_t var0246_9 (void) {
    fputs ("0246 signed start:57, iter:1, inc:-1, order:jbu cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx == 0x38) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a502 */
#include <stdint.h>
 
uint32_t var0076_9876543210 (void) {
    fputs ("0076 signed start:57, iter:10, inc:-1, order:ujb cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx <= 0x2f) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ba6c */
#include <stdint.h>
 
int32_t var0157_0123456789 (void) {
    fputs ("0157 signed start:-20, iter:10, inc:+1, order:ubj cmp:< 0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (ebx < 0xfffffff5);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b4e6 */
#include <stdint.h>
 
uint32_t var0136_0123456789 (void) {
    fputs ("0136 signed start:10, iter:10, inc:-1, order:bju cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx <= 1) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051f52 */
#include <stdint.h>
 
uint32_t var0546_0123456789 (void) {
    fputs ("0546 unsign start:10, iter:10, inc:-1, order:buj cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx >= 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ce6f */
#include <stdint.h>
 
uint32_t var0235_9 (void) {
    fputs ("0235 signed start:57, iter:1, inc:-1, order:buj cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx > 0x38);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051926 */
#include <stdint.h>
 
int32_t var0523_9876543210 (void) {
    fputs ("0523 unsign start:100, iter:10, inc:-2, order:jbu cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x52) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050eb2 */
#include <stdint.h>
 
uint32_t var0482_9876543210 (void) {
    fputs ("0482 unsign start:57, iter:10, inc:-1, order:buj cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx != 0x2f);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054ad9 */
#include <stdint.h>
 
int32_t var0714_empty (void) {
    fputs ("0714 unsign start:0, iter:0, inc:+1, order:ujb cmp:< 0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx >= 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80506d6 */
#include <stdint.h>
 
int32_t var0453_0123456789 (void) {
    fputs ("0453 unsign start:16, iter:10, inc:+2, order:buj cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx < 0x24);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049738 */
#include <stdint.h>
 
int32_t var0023_0123456789 (void) {
    fputs ("0023 signed start:0, iter:10, inc:+1, order:bju cmp:<=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        if (ebx > 8) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a6ad */
#include <stdint.h>
 
uint32_t var0083_9876543210 (void) {
    fputs ("0083 signed start:57, iter:10, inc:-1, order:jub cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx < 0x31) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052e1c */
#include <stdint.h>
 
int32_t var0604_0 (void) {
    fputs ("0604 unsign start:16, iter:1, inc:+2, order:ubj cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx != 0x10);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d74a */
#include <stdint.h>
 
int32_t var0270_9 (void) {
    fputs ("0270 signed start:100, iter:1, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8056e90 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x13163;
    ebp = *((esp + 0x28));
    _init ();
    esi = ebx - 0xf0;
    eax = ebx - 0xf4;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf4)(uint32_t*, uint32_t*) (*((esp + 0x2c)), *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e46e */
#include <stdint.h>
 
int32_t var0319_0 (void) {
    fputs ("0319 signed start:-20, iter:1, inc:+1, order:buj cmp:< 0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (ebx < 0xffffffed);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053088 */
#include <stdint.h>
 
int32_t var0613_0 (void) {
    fputs ("0613 unsign start:16, iter:1, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805244b */
#include <stdint.h>
 
uint32_t var0565_0 (void) {
    fputs ("0565 unsign start:48, iter:1, inc:+1, order:bju cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx == 0x30) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fd36 */
#include <stdint.h>
 
int32_t var0414_empty (void) {
    fputs ("0414 signed start:-20, iter:0, inc:+1, order:jbu cmp:!=0 exp:+68       expected=''    >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        if (ebx == 0xffffffec) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fb5c */
#include <stdint.h>
 
uint32_t var0407_empty (void) {
    fputs ("0407 signed start:10, iter:0, inc:-1, order:jbu cmp:<=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx < 0xb) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b792 */
#include <stdint.h>
 
uint32_t var0146_0123456789 (void) {
    fputs ("0146 signed start:10, iter:10, inc:-1, order:jbu cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx < 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e674 */
#include <stdint.h>
 
int32_t var0327_0 (void) {
    fputs ("0327 signed start:-20, iter:1, inc:+1, order:ujb cmp:!=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        if (ebx == 0xffffffed) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053ed0 */
#include <stdint.h>
 
int32_t var0668_9 (void) {
    fputs ("0668 unsign start:100, iter:1, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x65) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051444 */
#include <stdint.h>
 
int32_t var0505_9876543210 (void) {
    fputs ("0505 unsign start:100, iter:10, inc:-2, order:bju cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx == 0x52) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80526e4 */
#include <stdint.h>
 
uint32_t var0576_0 (void) {
    fputs ("0576 unsign start:48, iter:1, inc:+1, order:jbu cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx > 0x30) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fdba */
#include <stdint.h>
 
int32_t var0416_empty (void) {
    fputs ("0416 signed start:-20, iter:0, inc:+1, order:jbu cmp:<=0 exp:+68       expected=''    >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        if (ebx > 0xffffffeb) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80521b7 */
#include <stdint.h>
 
uint32_t var0555_0123456789 (void) {
    fputs ("0555 unsign start:10, iter:10, inc:-1, order:ujb cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx < 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ebf3 */
#include <stdint.h>
 
int32_t var0349_empty (void) {
    fputs ("0349 signed start:0, iter:0, inc:+1, order:jbu cmp:< 0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx >= 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051fda */
#include <stdint.h>
 
uint32_t var0548_0123456789 (void) {
    fputs ("0548 unsign start:10, iter:10, inc:-1, order:bju cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx <= 1) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ddc2 */
#include <stdint.h>
 
uint32_t var0294_0 (void) {
    fputs ("0294 signed start:0, iter:1, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx == 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a772 */
#include <stdint.h>
 
int32_t var0086_9876543210 (void) {
    fputs ("0086 signed start:100, iter:10, inc:-2, order:buj cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx > 0x50);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804af0a */
#include <stdint.h>
 
uint32_t var0114_0123456789 (void) {
    fputs ("0114 signed start:0, iter:10, inc:+1, order:buj cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx != 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80518e0 */
#include <stdint.h>
 
int32_t var0522_9876543210 (void) {
    fputs ("0522 unsign start:100, iter:10, inc:-2, order:jbu cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x50) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051182 */
#include <stdint.h>
 
uint32_t var0494_9876543210 (void) {
    fputs ("0494 unsign start:57, iter:10, inc:-1, order:jbu cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx == 0x2f) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052ea4 */
#include <stdint.h>
 
int32_t var0606_0 (void) {
    fputs ("0606 unsign start:16, iter:1, inc:+2, order:ubj cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx < 0xf);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c50c */
#include <stdint.h>
 
int32_t var0200_0 (void) {
    fputs ("0200 signed start:0, iter:1, inc:+1, order:jbu cmp:<=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx > 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b3d8 */
#include <stdint.h>
 
uint32_t var0132_0123456789 (void) {
    fputs ("0132 signed start:10, iter:10, inc:-1, order:buj cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx != 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053114 */
#include <stdint.h>
 
int32_t var0615_0 (void) {
    fputs ("0615 unsign start:16, iter:1, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0x12) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b9a8 */
#include <stdint.h>
 
int32_t var0154_0123456789 (void) {
    fputs ("0154 signed start:-20, iter:10, inc:+1, order:bju cmp:< 0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        if (ebx >= 0xfffffff5) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80490e0 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f157 */
#include <stdint.h>
 
uint32_t var0369_empty (void) {
    fputs ("0369 signed start:57, iter:0, inc:-1, order:ujb cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx == 0x39) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a57c */
#include <stdint.h>
 
uint32_t var0078_9876543210 (void) {
    fputs ("0078 signed start:57, iter:10, inc:-1, order:jbu cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx == 0x2f) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053d72 */
#include <stdint.h>
 
int32_t var0663_9 (void) {
    fputs ("0663 unsign start:100, iter:1, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x63) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053478 */
#include <stdint.h>
 
uint32_t var0628_9 (void) {
    fputs ("0628 unsign start:57, iter:1, inc:-1, order:bju cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx <= 0x39) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805162a */
#include <stdint.h>
 
int32_t var0512_9876543210 (void) {
    fputs ("0512 unsign start:100, iter:10, inc:-2, order:ubj cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx > 0x52);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e6f8 */
#include <stdint.h>
 
int32_t var0329_0 (void) {
    fputs ("0329 signed start:-20, iter:1, inc:+1, order:ujb cmp:<=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        if (ebx > 0xffffffec) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053697 */
#include <stdint.h>
 
uint32_t var0637_9 (void) {
    fputs ("0637 unsign start:57, iter:1, inc:-1, order:jbu cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx <= 0x38) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80524c5 */
#include <stdint.h>
 
uint32_t var0567_0 (void) {
    fputs ("0567 unsign start:48, iter:1, inc:+1, order:bju cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx > 0x2f) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052d4a */
#include <stdint.h>
 
int32_t var0601_0 (void) {
    fputs ("0601 unsign start:16, iter:1, inc:+2, order:bju cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx >= 0xf) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051bd9 */
#include <stdint.h>
 
uint32_t var0533_0123456789 (void) {
    fputs ("0533 unsign start:0, iter:10, inc:+1, order:bju cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx == 9) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b0a2 */
#include <stdint.h>
 
uint32_t var0120_0123456789 (void) {
    fputs ("0120 signed start:0, iter:10, inc:+1, order:ubj cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        putchar (esi);
        esi++;
    } while (ebx != 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d04d */
#include <stdint.h>
 
uint32_t var0243_9 (void) {
    fputs ("0243 signed start:57, iter:1, inc:-1, order:ujb cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx == 0x38) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051ca6 */
#include <stdint.h>
 
uint32_t var0536_0123456789 (void) {
    fputs ("0536 unsign start:0, iter:10, inc:+1, order:ubj cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        putchar (esi);
        esi++;
    } while (ebx < 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b16b */
#include <stdint.h>
 
uint32_t var0123_0123456789 (void) {
    fputs ("0123 signed start:0, iter:10, inc:+1, order:ujb cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx == 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053894 */
#include <stdint.h>
 
int32_t var0645_9 (void) {
    fputs ("0645 unsign start:100, iter:1, inc:-2, order:buj cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx >= 0x64);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f37c */
#include <stdint.h>
 
int32_t var0378_empty (void) {
    fputs ("0378 signed start:100, iter:0, inc:-2, order:ujb cmp:!=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx == 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805275e */
#include <stdint.h>
 
uint32_t var0578_0 (void) {
    fputs ("0578 unsign start:48, iter:1, inc:+1, order:jub cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx >= 0x30) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804adac */
#include <stdint.h>
 
int32_t var0109_9876543210 (void) {
    fputs ("0109 signed start:100, iter:10, inc:-2, order:jub cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx == 0x52) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052fb6 */
#include <stdint.h>
 
int32_t var0610_0 (void) {
    fputs ("0610 unsign start:16, iter:1, inc:+2, order:ujb cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0x12) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053fe8 */
#include <stdint.h>
 
uint32_t var0672_0 (void) {
    fputs ("0672 unsign start:0, iter:1, inc:+1, order:buj cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx != 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e77c */
#include <stdint.h>
 
int32_t var0331_0 (void) {
    fputs ("0331 signed start:-20, iter:1, inc:+1, order:jbu cmp:< 0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        if (ebx >= 0xffffffed) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053b8a */
#include <stdint.h>
 
int32_t var0656_9 (void) {
    fputs ("0656 unsign start:100, iter:1, inc:-2, order:ubj cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx >= 0x65);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054f73 */
#include <stdint.h>
 
int32_t var0731_empty (void) {
    fputs ("0731 unsign start:16, iter:0, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0xc) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049ff0 */
#include <stdint.h>
 
int32_t var0056_0123456789 (void) {
    fputs ("0056 signed start:16, iter:10, inc:+2, order:jbu cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx == 0x24) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c488 */
#include <stdint.h>
 
int32_t var0198_0 (void) {
    fputs ("0198 signed start:0, iter:1, inc:+1, order:jbu cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx == 1) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804abc2 */
#include <stdint.h>
 
int32_t var0102_9876543210 (void) {
    fputs ("0102 signed start:100, iter:10, inc:-2, order:ujb cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x52) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80516f6 */
#include <stdint.h>
 
int32_t var0515_9876543210 (void) {
    fputs ("0515 unsign start:100, iter:10, inc:-2, order:ujb cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx == 0x50) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e4ae */
#include <stdint.h>
 
int32_t var0320_0 (void) {
    fputs ("0320 signed start:-20, iter:1, inc:+1, order:buj cmp:<=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (ebx <= 0xffffffec);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052f2c */
#include <stdint.h>
 
int32_t var0608_0 (void) {
    fputs ("0608 unsign start:16, iter:1, inc:+2, order:ubj cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx <= 0xe);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050cc8 */
#include <stdint.h>
 
int32_t var0475_0123456789 (void) {
    fputs ("0475 unsign start:16, iter:10, inc:+2, order:jbu cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0x23) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049cf8 */
#include <stdint.h>
 
int32_t var0045_0123456789 (void) {
    fputs ("0045 signed start:16, iter:10, inc:+2, order:bju cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx > 0x20) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c1bc */
#include <stdint.h>
 
int32_t var0187_0 (void) {
    fputs ("0187 signed start:0, iter:1, inc:+1, order:buj cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx < 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d17e */
#include <stdint.h>
 
uint32_t var0248_9 (void) {
    fputs ("0248 signed start:57, iter:1, inc:-1, order:jbu cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx < 0x39) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e290 */
#include <stdint.h>
 
uint32_t var0312_0 (void) {
    fputs ("0312 signed start:10, iter:1, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx == 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80531a0 */
#include <stdint.h>
 
int32_t var0617_0 (void) {
    fputs ("0617 unsign start:16, iter:1, inc:+2, order:jbu cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0x11) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e13b */
#include <stdint.h>
 
uint32_t var0307_0 (void) {
    fputs ("0307 signed start:10, iter:1, inc:-1, order:ubj cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx > 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bf1c */
#include <stdint.h>
 
uint32_t var0176_0 (void) {
    fputs ("0176 signed start:48, iter:1, inc:+1, order:ubj cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx <= 0x2f);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80512f0 */
#include <stdint.h>
 
int32_t var0500_9876543210 (void) {
    fputs ("0500 unsign start:100, iter:10, inc:-2, order:buj cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx != 0x50);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e029 */
#include <stdint.h>
 
uint32_t var0303_0 (void) {
    fputs ("0303 signed start:10, iter:1, inc:-1, order:bju cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx == 0xa) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cee5 */
#include <stdint.h>
 
uint32_t var0237_9 (void) {
    fputs ("0237 signed start:57, iter:1, inc:-1, order:bju cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx == 0x39) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e3a4 */
#include <stdint.h>
 
uint32_t var0316_0 (void) {
    fputs ("0316 signed start:10, iter:1, inc:-1, order:jub cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx <= 0xa) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805253d */
#include <stdint.h>
 
uint32_t var0569_0 (void) {
    fputs ("0569 unsign start:48, iter:1, inc:+1, order:ubj cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx < 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805239a */
#include <stdint.h>
 
uint32_t var0562_0 (void) {
    fputs ("0562 unsign start:48, iter:1, inc:+1, order:buj cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx != 0x31);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d272 */
#include <stdint.h>
 
int32_t var0252_9 (void) {
    fputs ("0252 signed start:100, iter:1, inc:-2, order:buj cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx != 0x62);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e5b4 */
#include <stdint.h>
 
int32_t var0324_0 (void) {
    fputs ("0324 signed start:-20, iter:1, inc:+1, order:ubj cmp:!=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (ebx != 0xffffffec);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805071a */
#include <stdint.h>
 
int32_t var0454_0123456789 (void) {
    fputs ("0454 unsign start:16, iter:10, inc:+2, order:buj cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx < 0x23);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804977a */
#include <stdint.h>
 
int32_t var0024_0123456789 (void) {
    fputs ("0024 signed start:0, iter:10, inc:+1, order:ubj cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (ebx != 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051aca */
#include <stdint.h>
 
int32_t var0529_9876543210 (void) {
    fputs ("0529 unsign start:100, iter:10, inc:-2, order:jub cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x53) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805262d */
#include <stdint.h>
 
uint32_t var0573_0 (void) {
    fputs ("0573 unsign start:48, iter:1, inc:+1, order:ujb cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx > 0x30) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d4de */
#include <stdint.h>
 
int32_t var0261_9 (void) {
    fputs ("0261 signed start:100, iter:1, inc:-2, order:bju cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx < 0x65) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f979 */
#include <stdint.h>
 
uint32_t var0400_empty (void) {
    fputs ("0400 signed start:0, iter:0, inc:+1, order:jub cmp:< 0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx >= -1) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ee9b */
#include <stdint.h>
 
int32_t var0359_empty (void) {
    fputs ("0359 signed start:16, iter:0, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx == 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e884 */
#include <stdint.h>
 
int32_t var0335_0 (void) {
    fputs ("0335 signed start:-20, iter:1, inc:+1, order:jub cmp:<=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        if (ebx > 0xffffffeb) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cf5f */
#include <stdint.h>
 
uint32_t var0239_9 (void) {
    fputs ("0239 signed start:57, iter:1, inc:-1, order:bju cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx < 0x3a) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051dfd */
#include <stdint.h>
 
uint32_t var0541_0123456789 (void) {
    fputs ("0541 unsign start:0, iter:10, inc:+1, order:jbu cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx >= 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f566 */
#include <stdint.h>
 
int32_t var0385_empty (void) {
    fputs ("0385 signed start:100, iter:0, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d862 */
#include <stdint.h>
 
int32_t var0274_9 (void) {
    fputs ("0274 signed start:100, iter:1, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x62) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80532b8 */
#include <stdint.h>
 
int32_t var0621_0 (void) {
    fputs ("0621 unsign start:16, iter:1, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0xf) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f7db */
#include <stdint.h>
 
uint32_t var0394_empty (void) {
    fputs ("0394 signed start:0, iter:0, inc:+1, order:ujb cmp:< 0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx >= 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80499c6 */
#include <stdint.h>
 
int32_t var0033_0123456789 (void) {
    fputs ("0033 signed start:0, iter:10, inc:+1, order:jub cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx == 9) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050988 */
#include <stdint.h>
 
int32_t var0463_0123456789 (void) {
    fputs ("0463 unsign start:16, iter:10, inc:+2, order:ubj cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx < 0x22);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805002a */
#include <stdint.h>
 
uint32_t var0426_0123456789 (void) {
    fputs ("0426 unsign start:48, iter:10, inc:+1, order:ubj cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx != 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804aa68 */
#include <stdint.h>
 
int32_t var0097_9876543210 (void) {
    fputs ("0097 signed start:100, iter:10, inc:-2, order:ubj cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx >= 0x54);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051a84 */
#include <stdint.h>
 
int32_t var0528_9876543210 (void) {
    fputs ("0528 unsign start:100, iter:10, inc:-2, order:jub cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x54) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804aec4 */
#include <stdint.h>
 
int32_t var0113_9876543210 (void) {
    fputs ("0113 signed start:100, iter:10, inc:-2, order:jub cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x53) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b926 */
#include <stdint.h>
 
int32_t var0152_0123456789 (void) {
    fputs ("0152 signed start:-20, iter:10, inc:+1, order:buj cmp:<=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (ebx <= 0xfffffff5);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049080 */
#include <stdint.h>
 
int32_t main (char ** argv, char ** envp) {
    int32_t var_4h;
    /* [13] -r-x section size 56949 named .text */
    eax = *((ebp + 0xc));
    eax = *(eax);
    ebx = *(eax);
    ebx += *((ebp + 8));
    eax = call_all (ebx);
    eax += ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055979 */
#include <stdint.h>
 
uint32_t call_all (void) {
    int32_t var_4h;
    ebx = 0;
    eax = var0000_0123456789 (ebx);
    ebx += eax;
    eax = var0001_0123456789 ();
    ebx += eax;
    eax = var0002_0123456789 ();
    ebx += eax;
    eax = var0003_0123456789 ();
    ebx += eax;
    eax = var0004_0123456789 ();
    ebx += eax;
    eax = var0005_0123456789 ();
    ebx += eax;
    eax = var0006_0123456789 ();
    ebx += eax;
    eax = var0007_0123456789 ();
    ebx += eax;
    eax = var0008_0123456789 ();
    ebx += eax;
    eax = var0009_0123456789 ();
    ebx += eax;
    eax = var0010_0123456789 ();
    ebx += eax;
    eax = var0011_0123456789 ();
    ebx += eax;
    eax = var0012_0123456789 ();
    ebx += eax;
    eax = var0013_0123456789 ();
    ebx += eax;
    eax = var0014_0123456789 ();
    ebx += eax;
    eax = var0015_0123456789 ();
    ebx += eax;
    eax = var0016_0123456789 ();
    ebx += eax;
    eax = var0017_0123456789 ();
    ebx += eax;
    eax = var0018_0123456789 ();
    ebx += eax;
    eax = var0019_0123456789 ();
    ebx += eax;
    eax = var0020_0123456789 ();
    ebx += eax;
    eax = var0021_0123456789 ();
    ebx += eax;
    eax = var0022_0123456789 ();
    ebx += eax;
    eax = var0023_0123456789 ();
    ebx += eax;
    eax = var0024_0123456789 ();
    ebx += eax;
    eax = var0025_0123456789 ();
    ebx += eax;
    eax = var0026_0123456789 ();
    ebx += eax;
    eax = var0027_0123456789 ();
    ebx += eax;
    eax = var0028_0123456789 ();
    ebx += eax;
    eax = var0029_0123456789 ();
    ebx += eax;
    eax = var0030_0123456789 ();
    ebx += eax;
    eax = var0031_0123456789 ();
    ebx += eax;
    eax = var0032_0123456789 ();
    ebx += eax;
    eax = var0033_0123456789 ();
    ebx += eax;
    eax = var0034_0123456789 ();
    ebx += eax;
    eax = var0035_0123456789 ();
    ebx += eax;
    eax = var0036_0123456789 ();
    ebx += eax;
    eax = var0037_0123456789 ();
    ebx += eax;
    eax = var0038_0123456789 ();
    ebx += eax;
    eax = var0039_0123456789 ();
    ebx += eax;
    eax = var0040_0123456789 ();
    ebx += eax;
    eax = var0041_0123456789 ();
    ebx += eax;
    eax = var0042_0123456789 ();
    ebx += eax;
    eax = var0043_0123456789 ();
    ebx += eax;
    eax = var0044_0123456789 ();
    ebx += eax;
    eax = var0045_0123456789 ();
    ebx += eax;
    eax = var0046_0123456789 ();
    ebx += eax;
    eax = var0047_0123456789 ();
    ebx += eax;
    eax = var0048_0123456789 ();
    ebx += eax;
    eax = var0049_0123456789 ();
    ebx += eax;
    eax = var0050_0123456789 ();
    ebx += eax;
    eax = var0051_0123456789 ();
    ebx += eax;
    eax = var0052_0123456789 ();
    ebx += eax;
    eax = var0053_0123456789 ();
    ebx += eax;
    eax = var0054_0123456789 ();
    ebx += eax;
    eax = var0055_0123456789 ();
    ebx += eax;
    eax = var0056_0123456789 ();
    ebx += eax;
    eax = var0057_0123456789 ();
    ebx += eax;
    eax = var0058_0123456789 ();
    ebx += eax;
    eax = var0059_0123456789 ();
    ebx += eax;
    eax = var0060_0123456789 ();
    ebx += eax;
    eax = var0061_0123456789 ();
    ebx += eax;
    eax = var0062_0123456789 ();
    ebx += eax;
    eax = var0063_0123456789 ();
    ebx += eax;
    eax = var0064_0123456789 ();
    ebx += eax;
    eax = var0065_0123456789 ();
    ebx += eax;
    eax = var0066_9876543210 ();
    ebx += eax;
    eax = var0067_9876543210 ();
    ebx += eax;
    eax = var0068_9876543210 ();
    ebx += eax;
    eax = var0069_9876543210 ();
    ebx += eax;
    eax = var0070_9876543210 ();
    ebx += eax;
    eax = var0071_9876543210 ();
    ebx += eax;
    eax = var0072_9876543210 ();
    ebx += eax;
    eax = var0073_9876543210 ();
    ebx += eax;
    eax = var0074_9876543210 ();
    ebx += eax;
    eax = var0075_9876543210 ();
    ebx += eax;
    eax = var0076_9876543210 ();
    ebx += eax;
    eax = var0077_9876543210 ();
    ebx += eax;
    eax = var0078_9876543210 ();
    ebx += eax;
    eax = var0079_9876543210 ();
    ebx += eax;
    eax = var0080_9876543210 ();
    ebx += eax;
    eax = var0081_9876543210 ();
    ebx += eax;
    eax = var0082_9876543210 ();
    ebx += eax;
    eax = var0083_9876543210 ();
    ebx += eax;
    eax = var0084_9876543210 ();
    ebx += eax;
    eax = var0085_9876543210 ();
    ebx += eax;
    eax = var0086_9876543210 ();
    ebx += eax;
    eax = var0087_9876543210 ();
    ebx += eax;
    eax = var0088_9876543210 ();
    ebx += eax;
    eax = var0089_9876543210 ();
    ebx += eax;
    eax = var0090_9876543210 ();
    ebx += eax;
    eax = var0091_9876543210 ();
    ebx += eax;
    eax = var0092_9876543210 ();
    ebx += eax;
    eax = var0093_9876543210 ();
    ebx += eax;
    eax = var0094_9876543210 ();
    ebx += eax;
    eax = var0095_9876543210 ();
    ebx += eax;
    eax = var0096_9876543210 ();
    ebx += eax;
    eax = var0097_9876543210 ();
    ebx += eax;
    eax = var0098_9876543210 ();
    ebx += eax;
    eax = var0099_9876543210 ();
    ebx += eax;
    eax = var0100_9876543210 ();
    ebx += eax;
    eax = var0101_9876543210 ();
    ebx += eax;
    eax = var0102_9876543210 ();
    ebx += eax;
    eax = var0103_9876543210 ();
    ebx += eax;
    eax = var0104_9876543210 ();
    ebx += eax;
    eax = var0105_9876543210 ();
    ebx += eax;
    eax = var0106_9876543210 ();
    ebx += eax;
    eax = var0107_9876543210 ();
    ebx += eax;
    eax = var0108_9876543210 ();
    ebx += eax;
    eax = var0109_9876543210 ();
    ebx += eax;
    eax = var0110_9876543210 ();
    ebx += eax;
    eax = var0111_9876543210 ();
    ebx += eax;
    eax = var0112_9876543210 ();
    ebx += eax;
    eax = var0113_9876543210 ();
    ebx += eax;
    eax = var0114_0123456789 ();
    ebx += eax;
    eax = var0115_0123456789 ();
    ebx += eax;
    eax = var0116_0123456789 ();
    ebx += eax;
    eax = var0117_0123456789 ();
    ebx += eax;
    eax = var0118_0123456789 ();
    ebx += eax;
    eax = var0119_0123456789 ();
    ebx += eax;
    eax = var0120_0123456789 ();
    ebx += eax;
    eax = var0121_0123456789 ();
    ebx += eax;
    eax = var0122_0123456789 ();
    ebx += eax;
    eax = var0123_0123456789 ();
    ebx += eax;
    eax = var0124_0123456789 ();
    ebx += eax;
    eax = var0125_0123456789 ();
    ebx += eax;
    eax = var0126_0123456789 ();
    ebx += eax;
    eax = var0127_0123456789 ();
    ebx += eax;
    eax = var0128_0123456789 ();
    ebx += eax;
    eax = var0129_0123456789 ();
    ebx += eax;
    eax = var0130_0123456789 ();
    ebx += eax;
    eax = var0131_0123456789 ();
    ebx += eax;
    eax = var0132_0123456789 ();
    ebx += eax;
    eax = var0133_0123456789 ();
    ebx += eax;
    eax = var0134_0123456789 ();
    ebx += eax;
    eax = var0135_0123456789 ();
    ebx += eax;
    eax = var0136_0123456789 ();
    ebx += eax;
    eax = var0137_0123456789 ();
    ebx += eax;
    eax = var0138_0123456789 ();
    ebx += eax;
    eax = var0139_0123456789 ();
    ebx += eax;
    eax = var0140_0123456789 ();
    ebx += eax;
    eax = var0141_0123456789 ();
    ebx += eax;
    eax = var0142_0123456789 ();
    ebx += eax;
    eax = var0143_0123456789 ();
    ebx += eax;
    eax = var0144_0123456789 ();
    ebx += eax;
    eax = var0145_0123456789 ();
    ebx += eax;
    eax = var0146_0123456789 ();
    ebx += eax;
    eax = var0147_0123456789 ();
    ebx += eax;
    eax = var0148_0123456789 ();
    ebx += eax;
    eax = var0149_0123456789 ();
    ebx += eax;
    eax = var0150_0123456789 ();
    ebx += eax;
    eax = var0151_0123456789 ();
    ebx += eax;
    eax = var0152_0123456789 ();
    ebx += eax;
    eax = var0153_0123456789 ();
    ebx += eax;
    eax = var0154_0123456789 ();
    ebx += eax;
    eax = var0155_0123456789 ();
    ebx += eax;
    eax = var0156_0123456789 ();
    ebx += eax;
    eax = var0157_0123456789 ();
    ebx += eax;
    eax = var0158_0123456789 ();
    ebx += eax;
    eax = var0159_0123456789 ();
    ebx += eax;
    eax = var0160_0123456789 ();
    ebx += eax;
    eax = var0161_0123456789 ();
    ebx += eax;
    eax = var0162_0123456789 ();
    ebx += eax;
    eax = var0163_0123456789 ();
    ebx += eax;
    eax = var0164_0123456789 ();
    ebx += eax;
    eax = var0165_0123456789 ();
    ebx += eax;
    eax = var0166_0123456789 ();
    ebx += eax;
    eax = var0167_0123456789 ();
    ebx += eax;
    eax = var0168_0 ();
    ebx += eax;
    eax = var0169_0 ();
    ebx += eax;
    eax = var0170_0 ();
    ebx += eax;
    eax = var0171_0 ();
    ebx += eax;
    eax = var0172_0 ();
    ebx += eax;
    eax = var0173_0 ();
    ebx += eax;
    eax = var0174_0 ();
    ebx += eax;
    eax = var0175_0 ();
    ebx += eax;
    eax = var0176_0 ();
    ebx += eax;
    eax = var0177_0 ();
    ebx += eax;
    eax = var0178_0 ();
    ebx += eax;
    eax = var0179_0 ();
    ebx += eax;
    eax = var0180_0 ();
    ebx += eax;
    eax = var0181_0 ();
    ebx += eax;
    eax = var0182_0 ();
    ebx += eax;
    eax = var0183_0 ();
    ebx += eax;
    eax = var0184_0 ();
    ebx += eax;
    eax = var0185_0 ();
    ebx += eax;
    eax = var0186_0 ();
    ebx += eax;
    eax = var0187_0 ();
    ebx += eax;
    eax = var0188_0 ();
    ebx += eax;
    eax = var0189_0 ();
    ebx += eax;
    eax = var0190_0 ();
    ebx += eax;
    eax = var0191_0 ();
    ebx += eax;
    eax = var0192_0 ();
    ebx += eax;
    eax = var0193_0 ();
    ebx += eax;
    eax = var0194_0 ();
    ebx += eax;
    eax = var0195_0 ();
    ebx += eax;
    eax = var0196_0 ();
    ebx += eax;
    eax = var0197_0 ();
    ebx += eax;
    eax = var0198_0 ();
    ebx += eax;
    eax = var0199_0 ();
    ebx += eax;
    eax = var0200_0 ();
    ebx += eax;
    eax = var0201_0 ();
    ebx += eax;
    eax = var0202_0 ();
    ebx += eax;
    eax = var0203_0 ();
    ebx += eax;
    eax = var0204_0 ();
    ebx += eax;
    eax = var0205_0 ();
    ebx += eax;
    eax = var0206_0 ();
    ebx += eax;
    eax = var0207_0 ();
    ebx += eax;
    eax = var0208_0 ();
    ebx += eax;
    eax = var0209_0 ();
    ebx += eax;
    eax = var0210_0 ();
    ebx += eax;
    eax = var0211_0 ();
    ebx += eax;
    eax = var0212_0 ();
    ebx += eax;
    eax = var0213_0 ();
    ebx += eax;
    eax = var0214_0 ();
    ebx += eax;
    eax = var0215_0 ();
    ebx += eax;
    eax = var0216_0 ();
    ebx += eax;
    eax = var0217_0 ();
    ebx += eax;
    eax = var0218_0 ();
    ebx += eax;
    eax = var0219_0 ();
    ebx += eax;
    eax = var0220_0 ();
    ebx += eax;
    eax = var0221_0 ();
    ebx += eax;
    eax = var0222_0 ();
    ebx += eax;
    eax = var0223_0 ();
    ebx += eax;
    eax = var0224_0 ();
    ebx += eax;
    eax = var0225_0 ();
    ebx += eax;
    eax = var0226_0 ();
    ebx += eax;
    eax = var0227_0 ();
    ebx += eax;
    eax = var0228_0 ();
    ebx += eax;
    eax = var0229_0 ();
    ebx += eax;
    eax = var0230_0 ();
    ebx += eax;
    eax = var0231_0 ();
    ebx += eax;
    eax = var0232_0 ();
    ebx += eax;
    eax = var0233_0 ();
    ebx += eax;
    eax = var0234_9 ();
    ebx += eax;
    eax = var0235_9 ();
    ebx += eax;
    eax = var0236_9 ();
    ebx += eax;
    eax = var0237_9 ();
    ebx += eax;
    eax = var0238_9 ();
    ebx += eax;
    eax = var0239_9 ();
    ebx += eax;
    eax = var0240_9 ();
    ebx += eax;
    eax = var0241_9 ();
    ebx += eax;
    eax = var0242_9 ();
    ebx += eax;
    eax = var0243_9 ();
    ebx += eax;
    eax = var0244_9 ();
    ebx += eax;
    eax = var0245_9 ();
    ebx += eax;
    eax = var0246_9 ();
    ebx += eax;
    eax = var0247_9 ();
    ebx += eax;
    eax = var0248_9 ();
    ebx += eax;
    eax = var0249_9 ();
    ebx += eax;
    eax = var0250_9 ();
    ebx += eax;
    eax = var0251_9 ();
    ebx += eax;
    eax = var0252_9 ();
    ebx += eax;
    eax = var0253_9 ();
    ebx += eax;
    eax = var0254_9 ();
    ebx += eax;
    eax = var0255_9 ();
    ebx += eax;
    eax = var0256_9 ();
    ebx += eax;
    eax = var0257_9 ();
    ebx += eax;
    eax = var0258_9 ();
    ebx += eax;
    eax = var0259_9 ();
    ebx += eax;
    eax = var0260_9 ();
    ebx += eax;
    eax = var0261_9 ();
    ebx += eax;
    eax = var0262_9 ();
    ebx += eax;
    eax = var0263_9 ();
    ebx += eax;
    eax = var0264_9 ();
    ebx += eax;
    eax = var0265_9 ();
    ebx += eax;
    eax = var0266_9 ();
    ebx += eax;
    eax = var0267_9 ();
    ebx += eax;
    eax = var0268_9 ();
    ebx += eax;
    eax = var0269_9 ();
    ebx += eax;
    eax = var0270_9 ();
    ebx += eax;
    eax = var0271_9 ();
    ebx += eax;
    eax = var0272_9 ();
    ebx += eax;
    eax = var0273_9 ();
    ebx += eax;
    eax = var0274_9 ();
    ebx += eax;
    eax = var0275_9 ();
    ebx += eax;
    eax = var0276_9 ();
    ebx += eax;
    eax = var0277_9 ();
    ebx += eax;
    eax = var0278_9 ();
    ebx += eax;
    eax = var0279_9 ();
    ebx += eax;
    eax = var0280_9 ();
    ebx += eax;
    eax = var0281_9 ();
    ebx += eax;
    eax = var0282_0 ();
    ebx += eax;
    eax = var0283_0 ();
    ebx += eax;
    eax = var0284_0 ();
    ebx += eax;
    eax = var0285_0 ();
    ebx += eax;
    eax = var0286_0 ();
    ebx += eax;
    eax = var0287_0 ();
    ebx += eax;
    eax = var0288_0 ();
    ebx += eax;
    eax = var0289_0 ();
    ebx += eax;
    eax = var0290_0 ();
    ebx += eax;
    eax = var0291_0 ();
    ebx += eax;
    eax = var0292_0 ();
    ebx += eax;
    eax = var0293_0 ();
    ebx += eax;
    eax = var0294_0 ();
    ebx += eax;
    eax = var0295_0 ();
    ebx += eax;
    eax = var0296_0 ();
    ebx += eax;
    eax = var0297_0 ();
    ebx += eax;
    eax = var0298_0 ();
    ebx += eax;
    eax = var0299_0 ();
    ebx += eax;
    eax = var0300_0 ();
    ebx += eax;
    eax = var0301_0 ();
    ebx += eax;
    eax = var0302_0 ();
    ebx += eax;
    eax = var0303_0 ();
    ebx += eax;
    eax = var0304_0 ();
    ebx += eax;
    eax = var0305_0 ();
    ebx += eax;
    eax = var0306_0 ();
    ebx += eax;
    eax = var0307_0 ();
    ebx += eax;
    eax = var0308_0 ();
    ebx += eax;
    eax = var0309_0 ();
    ebx += eax;
    eax = var0310_0 ();
    ebx += eax;
    eax = var0311_0 ();
    ebx += eax;
    eax = var0312_0 ();
    ebx += eax;
    eax = var0313_0 ();
    ebx += eax;
    eax = var0314_0 ();
    ebx += eax;
    eax = var0315_0 ();
    ebx += eax;
    eax = var0316_0 ();
    ebx += eax;
    eax = var0317_0 ();
    ebx += eax;
    eax = var0318_0 ();
    ebx += eax;
    eax = var0319_0 ();
    ebx += eax;
    eax = var0320_0 ();
    ebx += eax;
    eax = var0321_0 ();
    ebx += eax;
    eax = var0322_0 ();
    ebx += eax;
    eax = var0323_0 ();
    ebx += eax;
    eax = var0324_0 ();
    ebx += eax;
    eax = var0325_0 ();
    ebx += eax;
    eax = var0326_0 ();
    ebx += eax;
    eax = var0327_0 ();
    ebx += eax;
    eax = var0328_0 ();
    ebx += eax;
    eax = var0329_0 ();
    ebx += eax;
    eax = var0330_0 ();
    ebx += eax;
    eax = var0331_0 ();
    ebx += eax;
    eax = var0332_0 ();
    ebx += eax;
    eax = var0333_0 ();
    ebx += eax;
    eax = var0334_0 ();
    ebx += eax;
    eax = var0335_0 ();
    ebx += eax;
    eax = var0336_empty ();
    ebx += eax;
    eax = var0337_empty ();
    ebx += eax;
    eax = var0338_empty ();
    ebx += eax;
    eax = var0339_empty ();
    ebx += eax;
    eax = var0340_empty ();
    ebx += eax;
    eax = var0341_empty ();
    ebx += eax;
    eax = var0342_empty ();
    ebx += eax;
    eax = var0343_empty ();
    ebx += eax;
    eax = var0344_empty ();
    ebx += eax;
    eax = var0345_empty ();
    ebx += eax;
    eax = var0346_empty ();
    ebx += eax;
    eax = var0347_empty ();
    ebx += eax;
    eax = var0348_empty ();
    ebx += eax;
    eax = var0349_empty ();
    ebx += eax;
    eax = var0350_empty ();
    ebx += eax;
    eax = var0351_empty ();
    ebx += eax;
    eax = var0352_empty ();
    ebx += eax;
    eax = var0353_empty ();
    ebx += eax;
    eax = var0354_empty ();
    ebx += eax;
    eax = var0355_empty ();
    ebx += eax;
    eax = var0356_empty ();
    ebx += eax;
    eax = var0357_empty ();
    ebx += eax;
    eax = var0358_empty ();
    ebx += eax;
    eax = var0359_empty ();
    ebx += eax;
    eax = var0360_empty ();
    ebx += eax;
    eax = var0361_empty ();
    ebx += eax;
    eax = var0362_empty ();
    ebx += eax;
    eax = var0363_empty ();
    ebx += eax;
    eax = var0364_empty ();
    ebx += eax;
    eax = var0365_empty ();
    ebx += eax;
    eax = var0366_empty ();
    ebx += eax;
    eax = var0367_empty ();
    ebx += eax;
    eax = var0368_empty ();
    ebx += eax;
    eax = var0369_empty ();
    ebx += eax;
    eax = var0370_empty ();
    ebx += eax;
    eax = var0371_empty ();
    ebx += eax;
    eax = var0372_empty ();
    ebx += eax;
    eax = var0373_empty ();
    ebx += eax;
    eax = var0374_empty ();
    ebx += eax;
    eax = var0375_empty ();
    ebx += eax;
    eax = var0376_empty ();
    ebx += eax;
    eax = var0377_empty ();
    ebx += eax;
    eax = var0378_empty ();
    ebx += eax;
    eax = var0379_empty ();
    ebx += eax;
    eax = var0380_empty ();
    ebx += eax;
    eax = var0381_empty ();
    ebx += eax;
    eax = var0382_empty ();
    ebx += eax;
    eax = var0383_empty ();
    ebx += eax;
    eax = var0384_empty ();
    ebx += eax;
    eax = var0385_empty ();
    ebx += eax;
    eax = var0386_empty ();
    ebx += eax;
    eax = var0387_empty ();
    ebx += eax;
    eax = var0388_empty ();
    ebx += eax;
    eax = var0389_empty ();
    ebx += eax;
    eax = var0390_empty ();
    ebx += eax;
    eax = var0391_empty ();
    ebx += eax;
    eax = var0392_empty ();
    ebx += eax;
    eax = var0393_empty ();
    ebx += eax;
    eax = var0394_empty ();
    ebx += eax;
    eax = var0395_empty ();
    ebx += eax;
    eax = var0396_empty ();
    ebx += eax;
    eax = var0397_empty ();
    ebx += eax;
    eax = var0398_empty ();
    ebx += eax;
    eax = var0399_empty ();
    ebx += eax;
    eax = var0400_empty ();
    ebx += eax;
    eax = var0401_empty ();
    ebx += eax;
    eax = var0402_empty ();
    ebx += eax;
    eax = var0403_empty ();
    ebx += eax;
    eax = var0404_empty ();
    ebx += eax;
    eax = var0405_empty ();
    ebx += eax;
    eax = var0406_empty ();
    ebx += eax;
    eax = var0407_empty ();
    ebx += eax;
    eax = var0408_empty ();
    ebx += eax;
    eax = var0409_empty ();
    ebx += eax;
    eax = var0410_empty ();
    ebx += eax;
    eax = var0411_empty ();
    ebx += eax;
    eax = var0412_empty ();
    ebx += eax;
    eax = var0413_empty ();
    ebx += eax;
    eax = var0414_empty ();
    ebx += eax;
    eax = var0415_empty ();
    ebx += eax;
    eax = var0416_empty ();
    ebx += eax;
    eax = var0417_empty ();
    ebx += eax;
    eax = var0418_empty ();
    ebx += eax;
    eax = var0419_empty ();
    ebx += eax;
    eax = var0420_0123456789 ();
    ebx += eax;
    eax = var0421_0123456789 ();
    ebx += eax;
    eax = var0422_0123456789 ();
    ebx += eax;
    eax = var0423_0123456789 ();
    ebx += eax;
    eax = var0424_0123456789 ();
    ebx += eax;
    eax = var0425_0123456789 ();
    ebx += eax;
    eax = var0426_0123456789 ();
    ebx += eax;
    eax = var0427_0123456789 ();
    ebx += eax;
    eax = var0428_0123456789 ();
    ebx += eax;
    eax = var0429_0123456789 ();
    ebx += eax;
    eax = var0430_0123456789 ();
    ebx += eax;
    eax = var0431_0123456789 ();
    ebx += eax;
    eax = var0432_0123456789 ();
    ebx += eax;
    eax = var0433_0123456789 ();
    ebx += eax;
    eax = var0434_0123456789 ();
    ebx += eax;
    eax = var0435_0123456789 ();
    ebx += eax;
    eax = var0436_0123456789 ();
    ebx += eax;
    eax = var0437_0123456789 ();
    ebx += eax;
    eax = var0438_0123456789 ();
    ebx += eax;
    eax = var0439_0123456789 ();
    ebx += eax;
    eax = var0440_0123456789 ();
    ebx += eax;
    eax = var0441_0123456789 ();
    ebx += eax;
    eax = var0442_0123456789 ();
    ebx += eax;
    eax = var0443_0123456789 ();
    ebx += eax;
    eax = var0444_0123456789 ();
    ebx += eax;
    eax = var0445_0123456789 ();
    ebx += eax;
    eax = var0446_0123456789 ();
    ebx += eax;
    eax = var0447_0123456789 ();
    ebx += eax;
    eax = var0448_0123456789 ();
    ebx += eax;
    eax = var0449_0123456789 ();
    ebx += eax;
    eax = var0450_0123456789 ();
    ebx += eax;
    eax = var0451_0123456789 ();
    ebx += eax;
    eax = var0452_0123456789 ();
    ebx += eax;
    eax = var0453_0123456789 ();
    ebx += eax;
    eax = var0454_0123456789 ();
    ebx += eax;
    eax = var0455_0123456789 ();
    ebx += eax;
    eax = var0456_0123456789 ();
    ebx += eax;
    eax = var0457_0123456789 ();
    ebx += eax;
    eax = var0458_0123456789 ();
    ebx += eax;
    eax = var0459_0123456789 ();
    ebx += eax;
    eax = var0460_0123456789 ();
    ebx += eax;
    eax = var0461_0123456789 ();
    ebx += eax;
    eax = var0462_0123456789 ();
    ebx += eax;
    eax = var0463_0123456789 ();
    ebx += eax;
    eax = var0464_0123456789 ();
    ebx += eax;
    eax = var0465_0123456789 ();
    ebx += eax;
    eax = var0466_0123456789 ();
    ebx += eax;
    eax = var0467_0123456789 ();
    ebx += eax;
    eax = var0468_0123456789 ();
    ebx += eax;
    eax = var0469_0123456789 ();
    ebx += eax;
    eax = var0470_0123456789 ();
    ebx += eax;
    eax = var0471_0123456789 ();
    ebx += eax;
    eax = var0472_0123456789 ();
    ebx += eax;
    eax = var0473_0123456789 ();
    ebx += eax;
    eax = var0474_0123456789 ();
    ebx += eax;
    eax = var0475_0123456789 ();
    ebx += eax;
    eax = var0476_0123456789 ();
    ebx += eax;
    eax = var0477_0123456789 ();
    ebx += eax;
    eax = var0478_0123456789 ();
    ebx += eax;
    eax = var0479_0123456789 ();
    ebx += eax;
    eax = var0480_0123456789 ();
    ebx += eax;
    eax = var0481_0123456789 ();
    ebx += eax;
    eax = var0482_9876543210 ();
    ebx += eax;
    eax = var0483_9876543210 ();
    ebx += eax;
    eax = var0484_9876543210 ();
    ebx += eax;
    eax = var0485_9876543210 ();
    ebx += eax;
    eax = var0486_9876543210 ();
    ebx += eax;
    eax = var0487_9876543210 ();
    ebx += eax;
    eax = var0488_9876543210 ();
    ebx += eax;
    eax = var0489_9876543210 ();
    ebx += eax;
    eax = var0490_9876543210 ();
    ebx += eax;
    eax = var0491_9876543210 ();
    ebx += eax;
    eax = var0492_9876543210 ();
    ebx += eax;
    eax = var0493_9876543210 ();
    ebx += eax;
    eax = var0494_9876543210 ();
    ebx += eax;
    eax = var0495_9876543210 ();
    ebx += eax;
    eax = var0496_9876543210 ();
    ebx += eax;
    eax = var0497_9876543210 ();
    ebx += eax;
    eax = var0498_9876543210 ();
    ebx += eax;
    eax = var0499_9876543210 ();
    ebx += eax;
    eax = var0500_9876543210 ();
    ebx += eax;
    eax = var0501_9876543210 ();
    ebx += eax;
    eax = var0502_9876543210 ();
    ebx += eax;
    eax = var0503_9876543210 ();
    ebx += eax;
    eax = var0504_9876543210 ();
    ebx += eax;
    eax = var0505_9876543210 ();
    ebx += eax;
    eax = var0506_9876543210 ();
    ebx += eax;
    eax = var0507_9876543210 ();
    ebx += eax;
    eax = var0508_9876543210 ();
    ebx += eax;
    eax = var0509_9876543210 ();
    ebx += eax;
    eax = var0510_9876543210 ();
    ebx += eax;
    eax = var0511_9876543210 ();
    ebx += eax;
    eax = var0512_9876543210 ();
    ebx += eax;
    eax = var0513_9876543210 ();
    ebx += eax;
    eax = var0514_9876543210 ();
    ebx += eax;
    eax = var0515_9876543210 ();
    ebx += eax;
    eax = var0516_9876543210 ();
    ebx += eax;
    eax = var0517_9876543210 ();
    ebx += eax;
    eax = var0518_9876543210 ();
    ebx += eax;
    eax = var0519_9876543210 ();
    ebx += eax;
    eax = var0520_9876543210 ();
    ebx += eax;
    eax = var0521_9876543210 ();
    ebx += eax;
    eax = var0522_9876543210 ();
    ebx += eax;
    eax = var0523_9876543210 ();
    ebx += eax;
    eax = var0524_9876543210 ();
    ebx += eax;
    eax = var0525_9876543210 ();
    ebx += eax;
    eax = var0526_9876543210 ();
    ebx += eax;
    eax = var0527_9876543210 ();
    ebx += eax;
    eax = var0528_9876543210 ();
    ebx += eax;
    eax = var0529_9876543210 ();
    ebx += eax;
    eax = var0530_0123456789 ();
    ebx += eax;
    eax = var0531_0123456789 ();
    ebx += eax;
    eax = var0532_0123456789 ();
    ebx += eax;
    eax = var0533_0123456789 ();
    ebx += eax;
    eax = var0534_0123456789 ();
    ebx += eax;
    eax = var0535_0123456789 ();
    ebx += eax;
    eax = var0536_0123456789 ();
    ebx += eax;
    eax = var0537_0123456789 ();
    ebx += eax;
    eax = var0538_0123456789 ();
    ebx += eax;
    eax = var0539_0123456789 ();
    ebx += eax;
    eax = var0540_0123456789 ();
    ebx += eax;
    eax = var0541_0123456789 ();
    ebx += eax;
    eax = var0542_0123456789 ();
    ebx += eax;
    eax = var0543_0123456789 ();
    ebx += eax;
    eax = var0544_0123456789 ();
    ebx += eax;
    eax = var0545_0123456789 ();
    ebx += eax;
    eax = var0546_0123456789 ();
    ebx += eax;
    eax = var0547_0123456789 ();
    ebx += eax;
    eax = var0548_0123456789 ();
    ebx += eax;
    eax = var0549_0123456789 ();
    ebx += eax;
    eax = var0550_0123456789 ();
    ebx += eax;
    eax = var0551_0123456789 ();
    ebx += eax;
    eax = var0552_0123456789 ();
    ebx += eax;
    eax = var0553_0123456789 ();
    ebx += eax;
    eax = var0554_0123456789 ();
    ebx += eax;
    eax = var0555_0123456789 ();
    ebx += eax;
    eax = var0556_0123456789 ();
    ebx += eax;
    eax = var0557_0123456789 ();
    ebx += eax;
    eax = var0558_0123456789 ();
    ebx += eax;
    eax = var0559_0123456789 ();
    ebx += eax;
    eax = var0560_0123456789 ();
    ebx += eax;
    eax = var0561_0123456789 ();
    ebx += eax;
    eax = var0562_0 ();
    ebx += eax;
    eax = var0563_0 ();
    ebx += eax;
    eax = var0564_0 ();
    ebx += eax;
    eax = var0565_0 ();
    ebx += eax;
    eax = var0566_0 ();
    ebx += eax;
    eax = var0567_0 ();
    ebx += eax;
    eax = var0568_0 ();
    ebx += eax;
    eax = var0569_0 ();
    ebx += eax;
    eax = var0570_0 ();
    ebx += eax;
    eax = var0571_0 ();
    ebx += eax;
    eax = var0572_0 ();
    ebx += eax;
    eax = var0573_0 ();
    ebx += eax;
    eax = var0574_0 ();
    ebx += eax;
    eax = var0575_0 ();
    ebx += eax;
    eax = var0576_0 ();
    ebx += eax;
    eax = var0577_0 ();
    ebx += eax;
    eax = var0578_0 ();
    ebx += eax;
    eax = var0579_0 ();
    ebx += eax;
    eax = var0580_0 ();
    ebx += eax;
    eax = var0581_0 ();
    ebx += eax;
    eax = var0582_0 ();
    ebx += eax;
    eax = var0583_0 ();
    ebx += eax;
    eax = var0584_0 ();
    ebx += eax;
    eax = var0585_0 ();
    ebx += eax;
    eax = var0586_0 ();
    ebx += eax;
    eax = var0587_0 ();
    ebx += eax;
    eax = var0588_0 ();
    ebx += eax;
    eax = var0589_0 ();
    ebx += eax;
    eax = var0590_0 ();
    ebx += eax;
    eax = var0591_0 ();
    ebx += eax;
    eax = var0592_0 ();
    ebx += eax;
    eax = var0593_0 ();
    ebx += eax;
    eax = var0594_0 ();
    ebx += eax;
    eax = var0595_0 ();
    ebx += eax;
    eax = var0596_0 ();
    ebx += eax;
    eax = var0597_0 ();
    ebx += eax;
    eax = var0598_0 ();
    ebx += eax;
    eax = var0599_0 ();
    ebx += eax;
    eax = var0600_0 ();
    ebx += eax;
    eax = var0601_0 ();
    ebx += eax;
    eax = var0602_0 ();
    ebx += eax;
    eax = var0603_0 ();
    ebx += eax;
    eax = var0604_0 ();
    ebx += eax;
    eax = var0605_0 ();
    ebx += eax;
    eax = var0606_0 ();
    ebx += eax;
    eax = var0607_0 ();
    ebx += eax;
    eax = var0608_0 ();
    ebx += eax;
    eax = var0609_0 ();
    ebx += eax;
    eax = var0610_0 ();
    ebx += eax;
    eax = var0611_0 ();
    ebx += eax;
    eax = var0612_0 ();
    ebx += eax;
    eax = var0613_0 ();
    ebx += eax;
    eax = var0614_0 ();
    ebx += eax;
    eax = var0615_0 ();
    ebx += eax;
    eax = var0616_0 ();
    ebx += eax;
    eax = var0617_0 ();
    ebx += eax;
    eax = var0618_0 ();
    ebx += eax;
    eax = var0619_0 ();
    ebx += eax;
    eax = var0620_0 ();
    ebx += eax;
    eax = var0621_0 ();
    ebx += eax;
    eax = var0622_0 ();
    ebx += eax;
    eax = var0623_0 ();
    ebx += eax;
    eax = var0624_9 ();
    ebx += eax;
    eax = var0625_9 ();
    ebx += eax;
    eax = var0626_9 ();
    ebx += eax;
    eax = var0627_9 ();
    ebx += eax;
    eax = var0628_9 ();
    ebx += eax;
    eax = var0629_9 ();
    ebx += eax;
    eax = var0630_9 ();
    ebx += eax;
    eax = var0631_9 ();
    ebx += eax;
    eax = var0632_9 ();
    ebx += eax;
    eax = var0633_9 ();
    ebx += eax;
    eax = var0634_9 ();
    ebx += eax;
    eax = var0635_9 ();
    ebx += eax;
    eax = var0636_9 ();
    ebx += eax;
    eax = var0637_9 ();
    ebx += eax;
    eax = var0638_9 ();
    ebx += eax;
    eax = var0639_9 ();
    ebx += eax;
    eax = var0640_9 ();
    ebx += eax;
    eax = var0641_9 ();
    ebx += eax;
    eax = var0642_9 ();
    ebx += eax;
    eax = var0643_9 ();
    ebx += eax;
    eax = var0644_9 ();
    ebx += eax;
    eax = var0645_9 ();
    ebx += eax;
    eax = var0646_9 ();
    ebx += eax;
    eax = var0647_9 ();
    ebx += eax;
    eax = var0648_9 ();
    ebx += eax;
    eax = var0649_9 ();
    ebx += eax;
    eax = var0650_9 ();
    ebx += eax;
    eax = var0651_9 ();
    ebx += eax;
    eax = var0652_9 ();
    ebx += eax;
    eax = var0653_9 ();
    ebx += eax;
    eax = var0654_9 ();
    ebx += eax;
    eax = var0655_9 ();
    ebx += eax;
    eax = var0656_9 ();
    ebx += eax;
    eax = var0657_9 ();
    ebx += eax;
    eax = var0658_9 ();
    ebx += eax;
    eax = var0659_9 ();
    ebx += eax;
    eax = var0660_9 ();
    ebx += eax;
    eax = var0661_9 ();
    ebx += eax;
    eax = var0662_9 ();
    ebx += eax;
    eax = var0663_9 ();
    ebx += eax;
    eax = var0664_9 ();
    ebx += eax;
    eax = var0665_9 ();
    ebx += eax;
    eax = var0666_9 ();
    ebx += eax;
    eax = var0667_9 ();
    ebx += eax;
    eax = var0668_9 ();
    ebx += eax;
    eax = var0669_9 ();
    ebx += eax;
    eax = var0670_9 ();
    ebx += eax;
    eax = var0671_9 ();
    ebx += eax;
    eax = var0672_0 ();
    ebx += eax;
    eax = var0673_0 ();
    ebx += eax;
    eax = var0674_0 ();
    ebx += eax;
    eax = var0675_0 ();
    ebx += eax;
    eax = var0676_0 ();
    ebx += eax;
    eax = var0677_0 ();
    ebx += eax;
    eax = var0678_0 ();
    ebx += eax;
    eax = var0679_0 ();
    ebx += eax;
    eax = var0680_0 ();
    ebx += eax;
    eax = var0681_0 ();
    ebx += eax;
    eax = var0682_0 ();
    ebx += eax;
    eax = var0683_0 ();
    ebx += eax;
    eax = var0684_0 ();
    ebx += eax;
    eax = var0685_0 ();
    ebx += eax;
    eax = var0686_0 ();
    ebx += eax;
    eax = var0687_0 ();
    ebx += eax;
    eax = var0688_0 ();
    ebx += eax;
    eax = var0689_0 ();
    ebx += eax;
    eax = var0690_0 ();
    ebx += eax;
    eax = var0691_0 ();
    ebx += eax;
    eax = var0692_0 ();
    ebx += eax;
    eax = var0693_0 ();
    ebx += eax;
    eax = var0694_0 ();
    ebx += eax;
    eax = var0695_0 ();
    ebx += eax;
    eax = var0696_0 ();
    ebx += eax;
    eax = var0697_0 ();
    ebx += eax;
    eax = var0698_0 ();
    ebx += eax;
    eax = var0699_0 ();
    ebx += eax;
    eax = var0700_0 ();
    ebx += eax;
    eax = var0701_0 ();
    ebx += eax;
    eax = var0702_0 ();
    ebx += eax;
    eax = var0703_0 ();
    ebx += eax;
    eax = var0704_empty ();
    ebx += eax;
    eax = var0705_empty ();
    ebx += eax;
    eax = var0706_empty ();
    ebx += eax;
    eax = var0707_empty ();
    ebx += eax;
    eax = var0708_empty ();
    ebx += eax;
    eax = var0709_empty ();
    ebx += eax;
    eax = var0710_empty ();
    ebx += eax;
    eax = var0711_empty ();
    ebx += eax;
    eax = var0712_empty ();
    ebx += eax;
    eax = var0713_empty ();
    ebx += eax;
    eax = var0714_empty ();
    ebx += eax;
    eax = var0715_empty ();
    ebx += eax;
    eax = var0716_empty ();
    ebx += eax;
    eax = var0717_empty ();
    ebx += eax;
    eax = var0718_empty ();
    ebx += eax;
    eax = var0719_empty ();
    ebx += eax;
    eax = var0720_empty ();
    ebx += eax;
    eax = var0721_empty ();
    ebx += eax;
    eax = var0722_empty ();
    ebx += eax;
    eax = var0723_empty ();
    ebx += eax;
    eax = var0724_empty ();
    ebx += eax;
    eax = var0725_empty ();
    ebx += eax;
    eax = var0726_empty ();
    ebx += eax;
    eax = var0727_empty ();
    ebx += eax;
    eax = var0728_empty ();
    ebx += eax;
    eax = var0729_empty ();
    ebx += eax;
    eax = var0730_empty ();
    ebx += eax;
    eax = var0731_empty ();
    ebx += eax;
    eax = var0732_empty ();
    ebx += eax;
    eax = var0733_empty ();
    ebx += eax;
    eax = var0734_empty ();
    ebx += eax;
    eax = var0735_empty ();
    ebx += eax;
    eax = var0736_empty ();
    ebx += eax;
    eax = var0737_empty ();
    ebx += eax;
    eax = var0738_empty ();
    ebx += eax;
    eax = var0739_empty ();
    ebx += eax;
    eax = var0740_empty ();
    ebx += eax;
    eax = var0741_empty ();
    ebx += eax;
    eax = var0742_empty ();
    ebx += eax;
    eax = var0743_empty ();
    ebx += eax;
    eax = var0744_empty ();
    ebx += eax;
    eax = var0745_empty ();
    ebx += eax;
    eax = var0746_empty ();
    ebx += eax;
    eax = var0747_empty ();
    ebx += eax;
    eax = var0748_empty ();
    ebx += eax;
    eax = var0749_empty ();
    ebx += eax;
    eax = var0750_empty ();
    ebx += eax;
    eax = var0751_empty ();
    ebx += eax;
    eax = var0752_empty ();
    ebx += eax;
    eax = var0753_empty ();
    ebx += eax;
    eax = var0754_empty ();
    ebx += eax;
    eax = var0755_empty ();
    ebx += eax;
    eax = var0756_empty ();
    ebx += eax;
    eax = var0757_empty ();
    ebx += eax;
    eax = var0758_empty ();
    ebx += eax;
    eax = var0759_empty ();
    ebx += eax;
    eax = var0760_empty ();
    ebx += eax;
    eax = var0761_empty ();
    ebx += eax;
    eax = var0762_empty ();
    ebx += eax;
    eax = var0763_empty ();
    ebx += eax;
    eax = var0764_empty ();
    ebx += eax;
    eax = var0765_empty ();
    ebx += eax;
    eax = var0766_empty ();
    ebx += eax;
    eax = var0767_empty ();
    ebx += eax;
    eax = var0768_empty ();
    ebx += eax;
    eax = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80491f1 */
#include <stdint.h>
 
uint32_t var0001_0123456789 (void) {
    fputs ("0001 signed start:48, iter:10, inc:+1, order:buj cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx < 0x3a);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804922c */
#include <stdint.h>
 
uint32_t var0002_0123456789 (void) {
    fputs ("0002 signed start:48, iter:10, inc:+1, order:buj cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx <= 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049267 */
#include <stdint.h>
 
uint32_t var0003_0123456789 (void) {
    fputs ("0003 signed start:48, iter:10, inc:+1, order:bju cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx == 0x39) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804931e */
#include <stdint.h>
 
uint32_t var0006_0123456789 (void) {
    fputs ("0006 signed start:48, iter:10, inc:+1, order:ubj cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx != 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049449 */
#include <stdint.h>
 
uint32_t var0011_0123456789 (void) {
    fputs ("0011 signed start:48, iter:10, inc:+1, order:ujb cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx > 0x39) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049500 */
#include <stdint.h>
 
uint32_t var0014_0123456789 (void) {
    fputs ("0014 signed start:48, iter:10, inc:+1, order:jbu cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx > 0x39) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804953d */
#include <stdint.h>
 
uint32_t var0015_0123456789 (void) {
    fputs ("0015 signed start:48, iter:10, inc:+1, order:jub cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx == 0x39) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804957a */
#include <stdint.h>
 
uint32_t var0016_0123456789 (void) {
    fputs ("0016 signed start:48, iter:10, inc:+1, order:jub cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx >= 0x39) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80495f4 */
#include <stdint.h>
 
int32_t var0018_0123456789 (void) {
    fputs ("0018 signed start:0, iter:10, inc:+1, order:buj cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx != 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049674 */
#include <stdint.h>
 
int32_t var0020_0123456789 (void) {
    fputs ("0020 signed start:0, iter:10, inc:+1, order:buj cmp:<=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx <= 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80496b4 */
#include <stdint.h>
 
int32_t var0021_0123456789 (void) {
    fputs ("0021 signed start:0, iter:10, inc:+1, order:bju cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        if (ebx == 9) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049a8c */
#include <stdint.h>
 
int32_t var0036_0123456789 (void) {
    fputs ("0036 signed start:16, iter:10, inc:+2, order:buj cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx != 0x24);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049ad0 */
#include <stdint.h>
 
int32_t var0037_0123456789 (void) {
    fputs ("0037 signed start:16, iter:10, inc:+2, order:buj cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx < 0x24);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049b14 */
#include <stdint.h>
 
int32_t var0038_0123456789 (void) {
    fputs ("0038 signed start:16, iter:10, inc:+2, order:buj cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx < 0x23);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049cb2 */
#include <stdint.h>
 
int32_t var0044_0123456789 (void) {
    fputs ("0044 signed start:16, iter:10, inc:+2, order:bju cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx > 0x21) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049d82 */
#include <stdint.h>
 
int32_t var0047_0123456789 (void) {
    fputs ("0047 signed start:16, iter:10, inc:+2, order:ubj cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx < 0x22);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049e4e */
#include <stdint.h>
 
int32_t var0050_0123456789 (void) {
    fputs ("0050 signed start:16, iter:10, inc:+2, order:ubj cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx <= 0x20);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049ed8 */
#include <stdint.h>
 
int32_t var0052_0123456789 (void) {
    fputs ("0052 signed start:16, iter:10, inc:+2, order:ujb cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0x24) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049faa */
#include <stdint.h>
 
int32_t var0055_0123456789 (void) {
    fputs ("0055 signed start:16, iter:10, inc:+2, order:ujb cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0x22) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a07c */
#include <stdint.h>
 
int32_t var0058_0123456789 (void) {
    fputs ("0058 signed start:16, iter:10, inc:+2, order:jbu cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0x23) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a194 */
#include <stdint.h>
 
int32_t var0062_0123456789 (void) {
    fputs ("0062 signed start:16, iter:10, inc:+2, order:jub cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0x22) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a2e7 */
#include <stdint.h>
 
uint32_t var0067_9876543210 (void) {
    fputs ("0067 signed start:57, iter:10, inc:-1, order:buj cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx > 0x2f);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a322 */
#include <stdint.h>
 
uint32_t var0068_9876543210 (void) {
    fputs ("0068 signed start:57, iter:10, inc:-1, order:buj cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx >= 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a414 */
#include <stdint.h>
 
uint32_t var0072_9876543210 (void) {
    fputs ("0072 signed start:57, iter:10, inc:-1, order:ubj cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx != 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a5b9 */
#include <stdint.h>
 
uint32_t var0079_9876543210 (void) {
    fputs ("0079 signed start:57, iter:10, inc:-1, order:jbu cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx <= 0x2f) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a633 */
#include <stdint.h>
 
uint32_t var0081_9876543210 (void) {
    fputs ("0081 signed start:57, iter:10, inc:-1, order:jub cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx == 0x30) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a72e */
#include <stdint.h>
 
int32_t var0085_9876543210 (void) {
    fputs ("0085 signed start:100, iter:10, inc:-2, order:buj cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx > 0x51);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a7fa */
#include <stdint.h>
 
int32_t var0088_9876543210 (void) {
    fputs ("0088 signed start:100, iter:10, inc:-2, order:buj cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx >= 0x51);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a884 */
#include <stdint.h>
 
int32_t var0090_9876543210 (void) {
    fputs ("0090 signed start:100, iter:10, inc:-2, order:bju cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx <= 0x53) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a956 */
#include <stdint.h>
 
int32_t var0093_9876543210 (void) {
    fputs ("0093 signed start:100, iter:10, inc:-2, order:bju cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx < 0x53) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804a99c */
#include <stdint.h>
 
int32_t var0094_9876543210 (void) {
    fputs ("0094 signed start:100, iter:10, inc:-2, order:ubj cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx != 0x52);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804aaac */
#include <stdint.h>
 
int32_t var0098_9876543210 (void) {
    fputs ("0098 signed start:100, iter:10, inc:-2, order:ubj cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx >= 0x53);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ac4e */
#include <stdint.h>
 
int32_t var0104_9876543210 (void) {
    fputs ("0104 signed start:100, iter:10, inc:-2, order:jbu cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx == 0x50) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ac94 */
#include <stdint.h>
 
int32_t var0105_9876543210 (void) {
    fputs ("0105 signed start:100, iter:10, inc:-2, order:jbu cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x51) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ad66 */
#include <stdint.h>
 
int32_t var0108_9876543210 (void) {
    fputs ("0108 signed start:100, iter:10, inc:-2, order:jbu cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x51) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804adf2 */
#include <stdint.h>
 
int32_t var0110_9876543210 (void) {
    fputs ("0110 signed start:100, iter:10, inc:-2, order:jub cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x53) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b05d */
#include <stdint.h>
 
uint32_t var0119_0123456789 (void) {
    fputs ("0119 signed start:0, iter:10, inc:+1, order:bju cmp:<=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx > 8) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b1b0 */
#include <stdint.h>
 
uint32_t var0124_0123456789 (void) {
    fputs ("0124 signed start:0, iter:10, inc:+1, order:ujb cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx >= 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b2c4 */
#include <stdint.h>
 
uint32_t var0128_0123456789 (void) {
    fputs ("0128 signed start:0, iter:10, inc:+1, order:jbu cmp:<=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx > 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b309 */
#include <stdint.h>
 
uint32_t var0129_0123456789 (void) {
    fputs ("0129 signed start:0, iter:10, inc:+1, order:jub cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx == 9) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b34e */
#include <stdint.h>
 
uint32_t var0130_0123456789 (void) {
    fputs ("0130 signed start:0, iter:10, inc:+1, order:jub cmp:< 0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx >= 9) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b45e */
#include <stdint.h>
 
uint32_t var0134_0123456789 (void) {
    fputs ("0134 signed start:10, iter:10, inc:-1, order:buj cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx >= 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b5f6 */
#include <stdint.h>
 
uint32_t var0140_0123456789 (void) {
    fputs ("0140 signed start:10, iter:10, inc:-1, order:ubj cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx >= 2);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b67e */
#include <stdint.h>
 
uint32_t var0142_0123456789 (void) {
    fputs ("0142 signed start:10, iter:10, inc:-1, order:ujb cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx <= 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b81c */
#include <stdint.h>
 
uint32_t var0148_0123456789 (void) {
    fputs ("0148 signed start:10, iter:10, inc:-1, order:jub cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx <= 1) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804b8e6 */
#include <stdint.h>
 
int32_t var0151_0123456789 (void) {
    fputs ("0151 signed start:-20, iter:10, inc:+1, order:buj cmp:< 0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (ebx < 0xfffffff6);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ba2c */
#include <stdint.h>
 
int32_t var0156_0123456789 (void) {
    fputs ("0156 signed start:-20, iter:10, inc:+1, order:ubj cmp:!=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (ebx != 0xfffffff5);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804baec */
#include <stdint.h>
 
int32_t var0159_0123456789 (void) {
    fputs ("0159 signed start:-20, iter:10, inc:+1, order:ujb cmp:!=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        if (ebx == 0xfffffff6) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bbf4 */
#include <stdint.h>
 
int32_t var0163_0123456789 (void) {
    fputs ("0163 signed start:-20, iter:10, inc:+1, order:jbu cmp:< 0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        if (ebx >= 0xfffffff6) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bc36 */
#include <stdint.h>
 
int32_t var0164_0123456789 (void) {
    fputs ("0164 signed start:-20, iter:10, inc:+1, order:jbu cmp:<=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        if (ebx > 0xfffffff5) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bcfc */
#include <stdint.h>
 
int32_t var0167_0123456789 (void) {
    fputs ("0167 signed start:-20, iter:10, inc:+1, order:jub cmp:<=0 exp:+68      expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        if (ebx > 0xfffffff4) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bdef */
#include <stdint.h>
 
uint32_t var0171_0 (void) {
    fputs ("0171 signed start:48, iter:1, inc:+1, order:bju cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        if (ebx == 0x30) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804bee1 */
#include <stdint.h>
 
uint32_t var0175_0 (void) {
    fputs ("0175 signed start:48, iter:1, inc:+1, order:ubj cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx < 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c00e */
#include <stdint.h>
 
uint32_t var0180_0 (void) {
    fputs ("0180 signed start:48, iter:1, inc:+1, order:jbu cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx == 0x31) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c088 */
#include <stdint.h>
 
uint32_t var0182_0 (void) {
    fputs ("0182 signed start:48, iter:1, inc:+1, order:jbu cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx > 0x30) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c17c */
#include <stdint.h>
 
int32_t var0186_0 (void) {
    fputs ("0186 signed start:0, iter:1, inc:+1, order:buj cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx != 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c1fc */
#include <stdint.h>
 
int32_t var0188_0 (void) {
    fputs ("0188 signed start:0, iter:1, inc:+1, order:buj cmp:<=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx <= 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c2c0 */
#include <stdint.h>
 
int32_t var0191_0 (void) {
    fputs ("0191 signed start:0, iter:1, inc:+1, order:bju cmp:<=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        if (ebx > -1) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c342 */
#include <stdint.h>
 
int32_t var0193_0 (void) {
    fputs ("0193 signed start:0, iter:1, inc:+1, order:ubj cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (ebx < 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c446 */
#include <stdint.h>
 
int32_t var0197_0 (void) {
    fputs ("0197 signed start:0, iter:1, inc:+1, order:ujb cmp:<=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx > 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c4ca */
#include <stdint.h>
 
int32_t var0199_0 (void) {
    fputs ("0199 signed start:0, iter:1, inc:+1, order:jbu cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx >= 1) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c614 */
#include <stdint.h>
 
int32_t var0204_0 (void) {
    fputs ("0204 signed start:16, iter:1, inc:+2, order:buj cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx != 0x12);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c658 */
#include <stdint.h>
 
int32_t var0205_0 (void) {
    fputs ("0205 signed start:16, iter:1, inc:+2, order:buj cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx < 0x12);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c83a */
#include <stdint.h>
 
int32_t var0212_0 (void) {
    fputs ("0212 signed start:16, iter:1, inc:+2, order:bju cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx > 0xf) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804c9d6 */
#include <stdint.h>
 
int32_t var0218_0 (void) {
    fputs ("0218 signed start:16, iter:1, inc:+2, order:ubj cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx <= 0xe);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cb32 */
#include <stdint.h>
 
int32_t var0223_0 (void) {
    fputs ("0223 signed start:16, iter:1, inc:+2, order:ujb cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cb78 */
#include <stdint.h>
 
int32_t var0224_0 (void) {
    fputs ("0224 signed start:16, iter:1, inc:+2, order:jbu cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx == 0x12) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ccd6 */
#include <stdint.h>
 
int32_t var0229_0 (void) {
    fputs ("0229 signed start:16, iter:1, inc:+2, order:jub cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx == 0x10) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cd1c */
#include <stdint.h>
 
int32_t var0230_0 (void) {
    fputs ("0230 signed start:16, iter:1, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0x10) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cd62 */
#include <stdint.h>
 
int32_t var0231_0 (void) {
    fputs ("0231 signed start:16, iter:1, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0xf) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ce34 */
#include <stdint.h>
 
uint32_t var0234_9 (void) {
    fputs ("0234 signed start:57, iter:1, inc:-1, order:buj cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx != 0x38);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804cf22 */
#include <stdint.h>
 
uint32_t var0238_9 (void) {
    fputs ("0238 signed start:57, iter:1, inc:-1, order:bju cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx <= 0x39) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d08a */
#include <stdint.h>
 
uint32_t var0244_9 (void) {
    fputs ("0244 signed start:57, iter:1, inc:-1, order:ujb cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx <= 0x38) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d0c7 */
#include <stdint.h>
 
uint32_t var0245_9 (void) {
    fputs ("0245 signed start:57, iter:1, inc:-1, order:ujb cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx < 0x39) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d1bb */
#include <stdint.h>
 
uint32_t var0249_9 (void) {
    fputs ("0249 signed start:57, iter:1, inc:-1, order:jub cmp:!=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx == 0x39) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d235 */
#include <stdint.h>
 
uint32_t var0251_9 (void) {
    fputs ("0251 signed start:57, iter:1, inc:-1, order:jub cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx < 0x3a) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d2fa */
#include <stdint.h>
 
int32_t var0254_9 (void) {
    fputs ("0254 signed start:100, iter:1, inc:-2, order:buj cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx > 0x62);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d33e */
#include <stdint.h>
 
int32_t var0255_9 (void) {
    fputs ("0255 signed start:100, iter:1, inc:-2, order:buj cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx >= 0x64);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d382 */
#include <stdint.h>
 
int32_t var0256_9 (void) {
    fputs ("0256 signed start:100, iter:1, inc:-2, order:buj cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx >= 0x63);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d498 */
#include <stdint.h>
 
int32_t var0260_9 (void) {
    fputs ("0260 signed start:100, iter:1, inc:-2, order:bju cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx < 0x66) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d568 */
#include <stdint.h>
 
int32_t var0263_9 (void) {
    fputs ("0263 signed start:100, iter:1, inc:-2, order:ubj cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx > 0x65);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d5ac */
#include <stdint.h>
 
int32_t var0264_9 (void) {
    fputs ("0264 signed start:100, iter:1, inc:-2, order:ubj cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx > 0x64);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d5f0 */
#include <stdint.h>
 
int32_t var0265_9 (void) {
    fputs ("0265 signed start:100, iter:1, inc:-2, order:ubj cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx >= 0x66);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d704 */
#include <stdint.h>
 
int32_t var0269_9 (void) {
    fputs ("0269 signed start:100, iter:1, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x62) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d790 */
#include <stdint.h>
 
int32_t var0271_9 (void) {
    fputs ("0271 signed start:100, iter:1, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x63) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d81c */
#include <stdint.h>
 
int32_t var0273_9 (void) {
    fputs ("0273 signed start:100, iter:1, inc:-2, order:jbu cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x63) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d8ee */
#include <stdint.h>
 
int32_t var0276_9 (void) {
    fputs ("0276 signed start:100, iter:1, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x63) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d934 */
#include <stdint.h>
 
int32_t var0277_9 (void) {
    fputs ("0277 signed start:100, iter:1, inc:-2, order:jub cmp:!=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx == 0x64) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804d97a */
#include <stdint.h>
 
int32_t var0278_9 (void) {
    fputs ("0278 signed start:100, iter:1, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x65) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804da06 */
#include <stdint.h>
 
int32_t var0280_9 (void) {
    fputs ("0280 signed start:100, iter:1, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x66) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804db18 */
#include <stdint.h>
 
uint32_t var0284_0 (void) {
    fputs ("0284 signed start:0, iter:1, inc:+1, order:buj cmp:<=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx <= 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dc6d */
#include <stdint.h>
 
uint32_t var0289_0 (void) {
    fputs ("0289 signed start:0, iter:1, inc:+1, order:ubj cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        putchar (esi);
        esi++;
    } while (ebx < 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dd7d */
#include <stdint.h>
 
uint32_t var0293_0 (void) {
    fputs ("0293 signed start:0, iter:1, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx > 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ded6 */
#include <stdint.h>
 
uint32_t var0298_0 (void) {
    fputs ("0298 signed start:0, iter:1, inc:+1, order:jub cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx >= 0) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804dfe6 */
#include <stdint.h>
 
uint32_t var0302_0 (void) {
    fputs ("0302 signed start:10, iter:1, inc:-1, order:buj cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx >= 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e17e */
#include <stdint.h>
 
uint32_t var0308_0 (void) {
    fputs ("0308 signed start:10, iter:1, inc:-1, order:ubj cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx >= 0xb);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e1c1 */
#include <stdint.h>
 
uint32_t var0309_0 (void) {
    fputs ("0309 signed start:10, iter:1, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx == 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e24b */
#include <stdint.h>
 
uint32_t var0311_0 (void) {
    fputs ("0311 signed start:10, iter:1, inc:-1, order:ujb cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx < 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e42e */
#include <stdint.h>
 
int32_t var0318_0 (void) {
    fputs ("0318 signed start:-20, iter:1, inc:+1, order:buj cmp:!=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (ebx != 0xffffffed);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e4ee */
#include <stdint.h>
 
int32_t var0321_0 (void) {
    fputs ("0321 signed start:-20, iter:1, inc:+1, order:bju cmp:!=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        eax = 0xffffffec;
        eax += 0x44;
        putchar (eax);
        if (ebx == 0xffffffec) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e634 */
#include <stdint.h>
 
int32_t var0326_0 (void) {
    fputs ("0326 signed start:-20, iter:1, inc:+1, order:ubj cmp:<=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (ebx <= 0xffffffeb);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e73a */
#include <stdint.h>
 
int32_t var0330_0 (void) {
    fputs ("0330 signed start:-20, iter:1, inc:+1, order:jbu cmp:!=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        if (ebx == 0xffffffed) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e7be */
#include <stdint.h>
 
int32_t var0332_0 (void) {
    fputs ("0332 signed start:-20, iter:1, inc:+1, order:jbu cmp:<=0 exp:+68       expected='0'   >", *(obj.stdout));
    ebx = 0xffffffec;
    do {
        if (ebx > 0xffffffec) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x44;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e903 */
#include <stdint.h>
 
uint32_t var0337_empty (void) {
    fputs ("0337 signed start:48, iter:0, inc:+1, order:ujb cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx >= 0x30) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804e940 */
#include <stdint.h>
 
uint32_t var0338_empty (void) {
    fputs ("0338 signed start:48, iter:0, inc:+1, order:ujb cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx > 0x2f) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ea34 */
#include <stdint.h>
 
uint32_t var0342_empty (void) {
    fputs ("0342 signed start:48, iter:0, inc:+1, order:jub cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx == 0x2f) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804eaae */
#include <stdint.h>
 
uint32_t var0344_empty (void) {
    fputs ("0344 signed start:48, iter:0, inc:+1, order:jub cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx > 0x2e) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804eaeb */
#include <stdint.h>
 
int32_t var0345_empty (void) {
    fputs ("0345 signed start:0, iter:0, inc:+1, order:ujb cmp:!=0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx == 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ebb1 */
#include <stdint.h>
 
int32_t var0348_empty (void) {
    fputs ("0348 signed start:0, iter:0, inc:+1, order:jbu cmp:!=0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx == 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ec77 */
#include <stdint.h>
 
int32_t var0351_empty (void) {
    fputs ("0351 signed start:0, iter:0, inc:+1, order:jub cmp:!=0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx == -1) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ecfb */
#include <stdint.h>
 
int32_t var0353_empty (void) {
    fputs ("0353 signed start:0, iter:0, inc:+1, order:jub cmp:<=0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx > 0xfffffffe) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804edc9 */
#include <stdint.h>
 
int32_t var0356_empty (void) {
    fputs ("0356 signed start:16, iter:0, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0xf) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804eee1 */
#include <stdint.h>
 
int32_t var0360_empty (void) {
    fputs ("0360 signed start:16, iter:0, inc:+2, order:jbu cmp:< 0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804efb3 */
#include <stdint.h>
 
int32_t var0363_empty (void) {
    fputs ("0363 signed start:16, iter:0, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0xe) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f111 */
#include <stdint.h>
 
int32_t var0368_empty (void) {
    fputs ("0368 signed start:16, iter:0, inc:+2, order:jub cmp:<=1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0xc) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f1d1 */
#include <stdint.h>
 
uint32_t var0371_empty (void) {
    fputs ("0371 signed start:57, iter:0, inc:-1, order:ujb cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx < 0x3a) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f20e */
#include <stdint.h>
 
uint32_t var0372_empty (void) {
    fputs ("0372 signed start:57, iter:0, inc:-1, order:jbu cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx == 0x39) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f33f */
#include <stdint.h>
 
uint32_t var0377_empty (void) {
    fputs ("0377 signed start:57, iter:0, inc:-1, order:jub cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx < 0x3b) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f3c2 */
#include <stdint.h>
 
int32_t var0379_empty (void) {
    fputs ("0379 signed start:100, iter:0, inc:-2, order:ujb cmp:< -1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x65) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f494 */
#include <stdint.h>
 
int32_t var0382_empty (void) {
    fputs ("0382 signed start:100, iter:0, inc:-2, order:ujb cmp:<=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x65) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f5f2 */
#include <stdint.h>
 
int32_t var0387_empty (void) {
    fputs ("0387 signed start:100, iter:0, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x65) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f70a */
#include <stdint.h>
 
int32_t var0391_empty (void) {
    fputs ("0391 signed start:100, iter:0, inc:-2, order:jub cmp:<=-1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx < 0x68) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f796 */
#include <stdint.h>
 
uint32_t var0393_empty (void) {
    fputs ("0393 signed start:0, iter:0, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx == 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f865 */
#include <stdint.h>
 
uint32_t var0396_empty (void) {
    fputs ("0396 signed start:0, iter:0, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx == 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f934 */
#include <stdint.h>
 
uint32_t var0399_empty (void) {
    fputs ("0399 signed start:0, iter:0, inc:+1, order:jub cmp:!=0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx == -1) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804f9be */
#include <stdint.h>
 
uint32_t var0401_empty (void) {
    fputs ("0401 signed start:0, iter:0, inc:+1, order:jub cmp:<=0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx > 0xfffffffe) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fb17 */
#include <stdint.h>
 
uint32_t var0406_empty (void) {
    fputs ("0406 signed start:10, iter:0, inc:-1, order:jbu cmp:< 0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx <= 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fbe6 */
#include <stdint.h>
 
uint32_t var0409_empty (void) {
    fputs ("0409 signed start:10, iter:0, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx <= 0xb) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fe3e */
#include <stdint.h>
 
int32_t var0418_empty (void) {
    fputs ("0418 signed start:-20, iter:0, inc:+1, order:jub cmp:< 0 exp:+68       expected=''    >", *(obj.stdout));
    ebx = 0xffffffeb;
    do {
        if (ebx >= 0xffffffeb) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x44;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804fec2 */
#include <stdint.h>
 
uint32_t var0420_0123456789 (void) {
    fputs ("0420 unsign start:48, iter:10, inc:+1, order:buj cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx != 0x3a);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x804ff38 */
#include <stdint.h>
 
uint32_t var0422_0123456789 (void) {
    fputs ("0422 unsign start:48, iter:10, inc:+1, order:buj cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx <= 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80500db */
#include <stdint.h>
 
uint32_t var0429_0123456789 (void) {
    fputs ("0429 unsign start:48, iter:10, inc:+1, order:ujb cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx == 0x3a) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050155 */
#include <stdint.h>
 
uint32_t var0431_0123456789 (void) {
    fputs ("0431 unsign start:48, iter:10, inc:+1, order:ujb cmp:<=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx > 0x39) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050192 */
#include <stdint.h>
 
uint32_t var0432_0123456789 (void) {
    fputs ("0432 unsign start:48, iter:10, inc:+1, order:jbu cmp:!=0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx == 0x3a) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80501cf */
#include <stdint.h>
 
uint32_t var0433_0123456789 (void) {
    fputs ("0433 unsign start:48, iter:10, inc:+1, order:jbu cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx >= 0x3a) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050286 */
#include <stdint.h>
 
uint32_t var0436_0123456789 (void) {
    fputs ("0436 unsign start:48, iter:10, inc:+1, order:jub cmp:< 0               expected='0123456789' >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx >= 0x39) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80503c0 */
#include <stdint.h>
 
int32_t var0441_0123456789 (void) {
    fputs ("0441 unsign start:0, iter:10, inc:+1, order:bju cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        if (ebx == 9) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050484 */
#include <stdint.h>
 
int32_t var0444_0123456789 (void) {
    fputs ("0444 unsign start:0, iter:10, inc:+1, order:ubj cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (ebx < 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80504c4 */
#include <stdint.h>
 
int32_t var0445_0123456789 (void) {
    fputs ("0445 unsign start:0, iter:10, inc:+1, order:ujb cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx == 0xa) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050506 */
#include <stdint.h>
 
int32_t var0446_0123456789 (void) {
    fputs ("0446 unsign start:0, iter:10, inc:+1, order:ujb cmp:< 0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        if (ebx >= 0xa) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805058a */
#include <stdint.h>
 
int32_t var0448_0123456789 (void) {
    fputs ("0448 unsign start:0, iter:10, inc:+1, order:jbu cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx == 0xa) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805060e */
#include <stdint.h>
 
int32_t var0450_0123456789 (void) {
    fputs ("0450 unsign start:0, iter:10, inc:+1, order:jbu cmp:<=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx > 9) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050650 */
#include <stdint.h>
 
int32_t var0451_0123456789 (void) {
    fputs ("0451 unsign start:0, iter:10, inc:+1, order:jub cmp:!=0 exp:+48        expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx == 9) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050a54 */
#include <stdint.h>
 
int32_t var0466_0123456789 (void) {
    fputs ("0466 unsign start:16, iter:10, inc:+2, order:ubj cmp:<=1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx <= 0x20);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050a98 */
#include <stdint.h>
 
int32_t var0467_0123456789 (void) {
    fputs ("0467 unsign start:16, iter:10, inc:+2, order:ujb cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx == 0x24) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050ade */
#include <stdint.h>
 
int32_t var0468_0123456789 (void) {
    fputs ("0468 unsign start:16, iter:10, inc:+2, order:ujb cmp:< 0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0x24) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050c82 */
#include <stdint.h>
 
int32_t var0474_0123456789 (void) {
    fputs ("0474 unsign start:16, iter:10, inc:+2, order:jbu cmp:< 1 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0x23) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050d54 */
#include <stdint.h>
 
int32_t var0477_0123456789 (void) {
    fputs ("0477 unsign start:16, iter:10, inc:+2, order:jub cmp:!=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx == 0x22) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050e26 */
#include <stdint.h>
 
int32_t var0480_0123456789 (void) {
    fputs ("0480 unsign start:16, iter:10, inc:+2, order:jub cmp:<=0 exp:/2 +40    expected='0123456789' >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx > 0x21) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050eed */
#include <stdint.h>
 
uint32_t var0483_9876543210 (void) {
    fputs ("0483 unsign start:57, iter:10, inc:-1, order:buj cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        ebx--;
    } while (ebx > 0x2f);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050fa0 */
#include <stdint.h>
 
uint32_t var0486_9876543210 (void) {
    fputs ("0486 unsign start:57, iter:10, inc:-1, order:bju cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx <= 0x30) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8050fdd */
#include <stdint.h>
 
uint32_t var0487_9876543210 (void) {
    fputs ("0487 unsign start:57, iter:10, inc:-1, order:bju cmp:<=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x39;
    do {
        putchar (ebx);
        if (ebx < 0x31) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051108 */
#include <stdint.h>
 
uint32_t var0492_9876543210 (void) {
    fputs ("0492 unsign start:57, iter:10, inc:-1, order:ujb cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx <= 0x2f) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051239 */
#include <stdint.h>
 
uint32_t var0497_9876543210 (void) {
    fputs ("0497 unsign start:57, iter:10, inc:-1, order:jub cmp:!=0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx == 0x30) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051276 */
#include <stdint.h>
 
uint32_t var0498_9876543210 (void) {
    fputs ("0498 unsign start:57, iter:10, inc:-1, order:jub cmp:< 0               expected='9876543210' >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx <= 0x30) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051400 */
#include <stdint.h>
 
int32_t var0504_9876543210 (void) {
    fputs ("0504 unsign start:100, iter:10, inc:-2, order:buj cmp:<=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (ebx >= 0x51);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80514d0 */
#include <stdint.h>
 
int32_t var0507_9876543210 (void) {
    fputs ("0507 unsign start:100, iter:10, inc:-2, order:bju cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx <= 0x52) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80515e6 */
#include <stdint.h>
 
int32_t var0511_9876543210 (void) {
    fputs ("0511 unsign start:100, iter:10, inc:-2, order:ubj cmp:< -1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (ebx > 0x53);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051782 */
#include <stdint.h>
 
int32_t var0517_9876543210 (void) {
    fputs ("0517 unsign start:100, iter:10, inc:-2, order:ujb cmp:< 0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x50) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80517c8 */
#include <stdint.h>
 
int32_t var0518_9876543210 (void) {
    fputs ("0518 unsign start:100, iter:10, inc:-2, order:ujb cmp:<=-1 exp:/2 +7   expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x52) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80519b2 */
#include <stdint.h>
 
int32_t var0525_9876543210 (void) {
    fputs ("0525 unsign start:100, iter:10, inc:-2, order:jub cmp:!=0 exp:/2 +7    expected='9876543210' >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx == 0x52) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051ce9 */
#include <stdint.h>
 
uint32_t var0537_0123456789 (void) {
    fputs ("0537 unsign start:0, iter:10, inc:+1, order:ujb cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx == 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051e42 */
#include <stdint.h>
 
uint32_t var0542_0123456789 (void) {
    fputs ("0542 unsign start:0, iter:10, inc:+1, order:jbu cmp:<=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx > 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8051e87 */
#include <stdint.h>
 
uint32_t var0543_0123456789 (void) {
    fputs ("0543 unsign start:0, iter:10, inc:+1, order:jub cmp:!=0 second:=48 +1  expected='0123456789' >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        if (ebx == 9) {
            goto label_0;
        }
        ebx++;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80520a7 */
#include <stdint.h>
 
uint32_t var0551_0123456789 (void) {
    fputs ("0551 unsign start:10, iter:10, inc:-1, order:ubj cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx > 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80521fc */
#include <stdint.h>
 
uint32_t var0556_0123456789 (void) {
    fputs ("0556 unsign start:10, iter:10, inc:-1, order:jbu cmp:!=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx == 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052286 */
#include <stdint.h>
 
uint32_t var0558_0123456789 (void) {
    fputs ("0558 unsign start:10, iter:10, inc:-1, order:jbu cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx < 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052310 */
#include <stdint.h>
 
uint32_t var0560_0123456789 (void) {
    fputs ("0560 unsign start:10, iter:10, inc:-1, order:jub cmp:< 0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx <= 1) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052355 */
#include <stdint.h>
 
uint32_t var0561_0123456789 (void) {
    fputs ("0561 unsign start:10, iter:10, inc:-1, order:jub cmp:<=0 second:=48 +1 expected='0123456789' >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx < 2) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052410 */
#include <stdint.h>
 
uint32_t var0564_0 (void) {
    fputs ("0564 unsign start:48, iter:1, inc:+1, order:buj cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        putchar (ebx);
        ebx++;
    } while (ebx <= 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052502 */
#include <stdint.h>
 
uint32_t var0568_0 (void) {
    fputs ("0568 unsign start:48, iter:1, inc:+1, order:ubj cmp:!=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx != 0x30);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052578 */
#include <stdint.h>
 
uint32_t var0570_0 (void) {
    fputs ("0570 unsign start:48, iter:1, inc:+1, order:ubj cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        putchar (ebx);
    } while (ebx <= 0x2f);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80526a7 */
#include <stdint.h>
 
uint32_t var0575_0 (void) {
    fputs ("0575 unsign start:48, iter:1, inc:+1, order:jbu cmp:< 0                expected='0'   >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx >= 0x31) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805279b */
#include <stdint.h>
 
uint32_t var0579_0 (void) {
    fputs ("0579 unsign start:48, iter:1, inc:+1, order:jub cmp:<=0                expected='0'   >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx > 0x2f) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052818 */
#include <stdint.h>
 
int32_t var0581_0 (void) {
    fputs ("0581 unsign start:0, iter:1, inc:+1, order:buj cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx < 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052858 */
#include <stdint.h>
 
int32_t var0582_0 (void) {
    fputs ("0582 unsign start:0, iter:1, inc:+1, order:buj cmp:<=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (ebx <= 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80528da */
#include <stdint.h>
 
int32_t var0584_0 (void) {
    fputs ("0584 unsign start:0, iter:1, inc:+1, order:bju cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        eax = 0;
        eax += 0x30;
        putchar (eax);
        if (ebx >= 0) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805295c */
#include <stdint.h>
 
int32_t var0586_0 (void) {
    fputs ("0586 unsign start:0, iter:1, inc:+1, order:ubj cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (ebx < 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052a62 */
#include <stdint.h>
 
int32_t var0590_0 (void) {
    fputs ("0590 unsign start:0, iter:1, inc:+1, order:jbu cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx == 1) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052aa4 */
#include <stdint.h>
 
int32_t var0591_0 (void) {
    fputs ("0591 unsign start:0, iter:1, inc:+1, order:jbu cmp:< 0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx >= 1) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052b28 */
#include <stdint.h>
 
int32_t var0593_0 (void) {
    fputs ("0593 unsign start:0, iter:1, inc:+1, order:jub cmp:!=0 exp:+48         expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    do {
        if (ebx == 0) {
            goto label_0;
        }
        ebx++;
        eax = ebx;
        eax += 0x30;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052bae */
#include <stdint.h>
 
int32_t var0595_0 (void) {
    fputs ("0595 unsign start:16, iter:1, inc:+2, order:buj cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (ebx < 0x12);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052cbe */
#include <stdint.h>
 
int32_t var0599_0 (void) {
    fputs ("0599 unsign start:16, iter:1, inc:+2, order:bju cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx == 0x10) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052d90 */
#include <stdint.h>
 
int32_t var0602_0 (void) {
    fputs ("0602 unsign start:16, iter:1, inc:+2, order:bju cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx > 0xf) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052dd6 */
#include <stdint.h>
 
int32_t var0603_0 (void) {
    fputs ("0603 unsign start:16, iter:1, inc:+2, order:bju cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        eax = 0x10;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        if (ebx > 0xe) {
            goto label_0;
        }
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052ee8 */
#include <stdint.h>
 
int32_t var0607_0 (void) {
    fputs ("0607 unsign start:16, iter:1, inc:+2, order:ubj cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (ebx <= 0xf);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052f70 */
#include <stdint.h>
 
int32_t var0609_0 (void) {
    fputs ("0609 unsign start:16, iter:1, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx == 0x12) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8052ffc */
#include <stdint.h>
 
int32_t var0611_0 (void) {
    fputs ("0611 unsign start:16, iter:1, inc:+2, order:ujb cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx >= 0x11) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053042 */
#include <stdint.h>
 
int32_t var0612_0 (void) {
    fputs ("0612 unsign start:16, iter:1, inc:+2, order:ujb cmp:<=0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx > 0x11) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805315a */
#include <stdint.h>
 
int32_t var0616_0 (void) {
    fputs ("0616 unsign start:16, iter:1, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0x11) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80531e6 */
#include <stdint.h>
 
int32_t var0618_0 (void) {
    fputs ("0618 unsign start:16, iter:1, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053272 */
#include <stdint.h>
 
int32_t var0620_0 (void) {
    fputs ("0620 unsign start:16, iter:1, inc:+2, order:jub cmp:< 0 exp:/2 +40     expected='0'   >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0x10) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805352d */
#include <stdint.h>
 
uint32_t var0631_9 (void) {
    fputs ("0631 unsign start:57, iter:1, inc:-1, order:ubj cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx > 0x39);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053568 */
#include <stdint.h>
 
uint32_t var0632_9 (void) {
    fputs ("0632 unsign start:57, iter:1, inc:-1, order:ubj cmp:<=0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        putchar (ebx);
    } while (ebx >= 0x3a);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805374e */
#include <stdint.h>
 
uint32_t var0640_9 (void) {
    fputs ("0640 unsign start:57, iter:1, inc:-1, order:jub cmp:< 0                expected='9'   >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx <= 0x39) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80539ee */
#include <stdint.h>
 
int32_t var0650_9 (void) {
    fputs ("0650 unsign start:100, iter:1, inc:-2, order:bju cmp:<=-1 exp:/2 +7    expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx < 0x66) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8053a34 */
#include <stdint.h>
 
int32_t var0651_9 (void) {
    fputs ("0651 unsign start:100, iter:1, inc:-2, order:bju cmp:<=0 exp:/2 +7     expected='9'   >", *(obj.stdout));
    ebx = 0x64;
    do {
        eax = 0x64;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        if (ebx < 0x65) {
            goto label_0;
        }
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805402b */
#include <stdint.h>
 
uint32_t var0673_0 (void) {
    fputs ("0673 unsign start:0, iter:1, inc:+1, order:buj cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx++;
    } while (ebx < 1);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80540b1 */
#include <stdint.h>
 
uint32_t var0675_0 (void) {
    fputs ("0675 unsign start:0, iter:1, inc:+1, order:bju cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx == 0) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80540f6 */
#include <stdint.h>
 
uint32_t var0676_0 (void) {
    fputs ("0676 unsign start:0, iter:1, inc:+1, order:bju cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx >= 0) {
            goto label_0;
        }
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805417e */
#include <stdint.h>
 
uint32_t var0678_0 (void) {
    fputs ("0678 unsign start:0, iter:1, inc:+1, order:ubj cmp:< 0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        putchar (esi);
        esi++;
    } while (ebx < 0);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805424b */
#include <stdint.h>
 
uint32_t var0681_0 (void) {
    fputs ("0681 unsign start:0, iter:1, inc:+1, order:ujb cmp:<=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx > 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054290 */
#include <stdint.h>
 
uint32_t var0682_0 (void) {
    fputs ("0682 unsign start:0, iter:1, inc:+1, order:jbu cmp:!=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx == 1) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805431a */
#include <stdint.h>
 
uint32_t var0684_0 (void) {
    fputs ("0684 unsign start:0, iter:1, inc:+1, order:jbu cmp:<=0 second:=48 +1   expected='0'   >", *(obj.stdout));
    ebx = 0;
    esi = 0x30;
    do {
        if (ebx > 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80543a4 */
#include <stdint.h>
 
uint32_t var0686_0 (void) {
    fputs ("0686 unsign start:10, iter:1, inc:-1, order:buj cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        ebx--;
    } while (ebx != 9);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80544b2 */
#include <stdint.h>
 
uint32_t var0690_0 (void) {
    fputs ("0690 unsign start:10, iter:1, inc:-1, order:bju cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx <= 0xa) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80544f7 */
#include <stdint.h>
 
uint32_t var0691_0 (void) {
    fputs ("0691 unsign start:10, iter:1, inc:-1, order:bju cmp:<=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        putchar (esi);
        esi++;
        if (ebx < 0xb) {
            goto label_0;
        }
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805457f */
#include <stdint.h>
 
uint32_t var0693_0 (void) {
    fputs ("0693 unsign start:10, iter:1, inc:-1, order:ubj cmp:< 0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        putchar (esi);
        esi++;
    } while (ebx > 0xa);
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054605 */
#include <stdint.h>
 
uint32_t var0695_0 (void) {
    fputs ("0695 unsign start:10, iter:1, inc:-1, order:ujb cmp:!=0 second:=48 +1  expected='0'   >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx == 9) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80548ec */
#include <stdint.h>
 
uint32_t var0706_empty (void) {
    fputs ("0706 unsign start:48, iter:0, inc:+1, order:ujb cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        ebx++;
        if (ebx > 0x2f) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054929 */
#include <stdint.h>
 
uint32_t var0707_empty (void) {
    fputs ("0707 unsign start:48, iter:0, inc:+1, order:jbu cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x30;
    do {
        if (ebx == 0x30) {
            goto label_0;
        }
        putchar (ebx);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054a1d */
#include <stdint.h>
 
uint32_t var0711_empty (void) {
    fputs ("0711 unsign start:48, iter:0, inc:+1, order:jub cmp:< 0                expected=''    >", *(obj.stdout));
    ebx = 0x2f;
    do {
        if (ebx >= 0x2f) {
            goto label_0;
        }
        ebx++;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054b1b */
#include <stdint.h>
 
int32_t var0715_empty (void) {
    fputs ("0715 unsign start:0, iter:0, inc:+1, order:jbu cmp:!=0 exp:+48         expected=''    >", *(obj.stdout));
    ebx = 0;
    do {
        if (ebx == 0) {
            goto label_0;
        }
        eax = ebx;
        eax += 0x30;
        putchar (eax);
        ebx++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054b9f */
#include <stdint.h>
 
int32_t var0717_empty (void) {
    fputs ("0717 unsign start:16, iter:0, inc:+2, order:ujb cmp:!=0 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        ebx += 2;
        if (ebx == 0x10) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054d89 */
#include <stdint.h>
 
int32_t var0724_empty (void) {
    fputs ("0724 unsign start:16, iter:0, inc:+2, order:jbu cmp:< 1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx >= 0xf) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054e15 */
#include <stdint.h>
 
int32_t var0726_empty (void) {
    fputs ("0726 unsign start:16, iter:0, inc:+2, order:jbu cmp:<=1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0x10;
    do {
        if (ebx > 0xe) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
        ebx += 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054ee7 */
#include <stdint.h>
 
int32_t var0729_empty (void) {
    fputs ("0729 unsign start:16, iter:0, inc:+2, order:jub cmp:< 1 exp:/2 +40     expected=''    >", *(obj.stdout));
    ebx = 0xe;
    do {
        if (ebx >= 0xd) {
            goto label_0;
        }
        ebx += 2;
        eax = ebx;
        eax >>= 1;
        eax += 0x28;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8054fb9 */
#include <stdint.h>
 
uint32_t var0732_empty (void) {
    fputs ("0732 unsign start:57, iter:0, inc:-1, order:ujb cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx == 0x39) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055033 */
#include <stdint.h>
 
uint32_t var0734_empty (void) {
    fputs ("0734 unsign start:57, iter:0, inc:-1, order:ujb cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        ebx--;
        if (ebx < 0x3a) {
            goto label_0;
        }
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80550ea */
#include <stdint.h>
 
uint32_t var0737_empty (void) {
    fputs ("0737 unsign start:57, iter:0, inc:-1, order:jbu cmp:<=0                expected=''    >", *(obj.stdout));
    ebx = 0x39;
    do {
        if (ebx < 0x3a) {
            goto label_0;
        }
        putchar (ebx);
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055127 */
#include <stdint.h>
 
uint32_t var0738_empty (void) {
    fputs ("0738 unsign start:57, iter:0, inc:-1, order:jub cmp:!=0                expected=''    >", *(obj.stdout));
    ebx = 0x3a;
    do {
        if (ebx == 0x3a) {
            goto label_0;
        }
        ebx--;
        putchar (ebx);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805526a */
#include <stdint.h>
 
int32_t var0743_empty (void) {
    fputs ("0743 unsign start:100, iter:0, inc:-2, order:ujb cmp:< 0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx <= 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80552b0 */
#include <stdint.h>
 
int32_t var0744_empty (void) {
    fputs ("0744 unsign start:100, iter:0, inc:-2, order:ujb cmp:<=-1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        ebx -= 2;
        if (ebx < 0x66) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80553c8 */
#include <stdint.h>
 
int32_t var0748_empty (void) {
    fputs ("0748 unsign start:100, iter:0, inc:-2, order:jbu cmp:< 0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx <= 0x64) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x805540e */
#include <stdint.h>
 
int32_t var0749_empty (void) {
    fputs ("0749 unsign start:100, iter:0, inc:-2, order:jbu cmp:<=-1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x66) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055454 */
#include <stdint.h>
 
int32_t var0750_empty (void) {
    fputs ("0750 unsign start:100, iter:0, inc:-2, order:jbu cmp:<=0 exp:/2 +7     expected=''    >", *(obj.stdout));
    ebx = 0x64;
    do {
        if (ebx < 0x65) {
            goto label_0;
        }
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
        ebx -= 2;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80554e0 */
#include <stdint.h>
 
int32_t var0752_empty (void) {
    fputs ("0752 unsign start:100, iter:0, inc:-2, order:jub cmp:< -1 exp:/2 +7    expected=''    >", *(obj.stdout));
    ebx = 0x66;
    do {
        if (ebx <= 0x67) {
            goto label_0;
        }
        ebx -= 2;
        eax = ebx;
        eax >>= 1;
        eax += 7;
        putchar (eax);
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80555f8 */
#include <stdint.h>
 
uint32_t var0756_empty (void) {
    fputs ("0756 unsign start:0, iter:0, inc:+1, order:ujb cmp:!=0 second:=48 +1   expected=''    >", *(obj.stdout));
    ebx = 0xffffffff;
    esi = 0x30;
    do {
        ebx++;
        if (ebx == 0) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055751 */
#include <stdint.h>
 
uint32_t var0761_empty (void) {
    fputs ("0761 unsign start:10, iter:0, inc:-1, order:ujb cmp:< 0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        ebx--;
        if (ebx <= 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80557db */
#include <stdint.h>
 
uint32_t var0763_empty (void) {
    fputs ("0763 unsign start:10, iter:0, inc:-1, order:jbu cmp:!=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xa;
    esi = 0x30;
    do {
        if (ebx == 0xa) {
            goto label_0;
        }
        putchar (esi);
        esi++;
        ebx--;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80558aa */
#include <stdint.h>
 
uint32_t var0766_empty (void) {
    fputs ("0766 unsign start:10, iter:0, inc:-1, order:jub cmp:!=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx == 0xb) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x80558ef */
#include <stdint.h>
 
uint32_t var0767_empty (void) {
    fputs ("0767 unsign start:10, iter:0, inc:-1, order:jub cmp:< 0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx <= 0xb) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8055934 */
#include <stdint.h>
 
uint32_t var0768_empty (void) {
    fputs ("0768 unsign start:10, iter:0, inc:-1, order:jub cmp:<=0 second:=48 +1  expected=''    >", *(obj.stdout));
    ebx = 0xb;
    esi = 0x30;
    do {
        if (ebx < 0xc) {
            goto label_0;
        }
        ebx--;
        putchar (esi);
        esi++;
    } while (1);
label_0:
    eax = puts (0x805706b);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/fixed_for_loops/ia32_elf/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x20ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
