/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x804856d */
#include <stdint.h>
 
void entry0 (void) {
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048490 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80485a0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804b053;
    eax -= obj.completed.6532;
    if (eax > 6) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6532);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80485d0 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6532;
    eax -= obj.completed.6532;
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
        void (*edx)(uint32_t, uint32_t) (obj.completed.6532, eax);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048610 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6532) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6532) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048630 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = obj.__JCR_LIST__;
    edx = *(eax);
    while (edx == 0) {
        void (*0x80485d0)() ();
        edx = 0;
    }
    void (*edx)(uint32_t) (eax);
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048c70 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048b50 */
#include <stdint.h>
 
void advanced_10_int_literal_in_char_context (char * s) {
    char * var_dh;
    int32_t var_1ah;
    int32_t var_fh;
    putchar (0x31);
    eax = strchr (*((esp + 0x2c)), 0x31);
    if (eax != 0) {
        puts ("contains a '1');
    }
    *((esp + 0xd)) = 0x61;
    *((esp + 0xf)) = 0;
    *((esp + 0x1a)) = 0x31;
    eax = puts (esp + 0x19);
    eax = 0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80484b0 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048480 */
#include <stdint.h>
 
void strchr (void) {
    strchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048470 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80489d0 */
#include <stdint.h>
 
int32_t intermediate_10_int_literal_in_bit_context (int32_t c) {
    ebx = *((esp + 0x1c));
    eax = *((esp + 0x1c));
    eax &= 0xf0f0;
    putchar (eax);
    eax = ebx;
    eax |= 0xff0000;
    putchar (eax);
    eax = ebx;
    eax ^= 3;
    putchar (eax);
    eax = ebx;
    eax &= 0x2a;
    putchar (eax);
    eax = ebx;
    ebx ^= 0x12d591;
    eax |= 0x3e7;
    putchar (eax);
    eax = putchar (ebx);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048590 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048920 */
#include <stdint.h>
 
int32_t intermediate_1_for_loop_name (int32_t arg_10h) {
    eax = *((esp + 0x10));
    if (eax <= 0) {
        goto label_0;
    }
    esi = eax + 0x30;
    ebx = 0x30;
    do {
        ebx++;
        eax = putchar (ebx);
    } while (ebx != esi);
label_0:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80488f0 */
#include <stdint.h>
 
int32_t basic_10_result_var_name (int32_t arg_10h) {
    eax = *((esp + 0x10));
    if (eax > 5) {
        eax <<= 2;
        return eax;
    }
    eax = time (0);
    eax += 0xa;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048430 */
#include <stdint.h>
 
void time (void) {
    time ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048c74 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x2383;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048ba0 */
#include <stdint.h>
 
void advanced_11_printf_type_related (void) {
    printf ("as char %c\n");
    printf ("as int %d\n");
    printf ("as pointer %p\n");
    printf ("as octal %o\n");
    printf ("as hex %x\n");
    printf ("as unsigned %u\n");
    eax = printf ("as signed %d\n");
    eax = 0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048420 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048960 */
#include <stdint.h>
 
int32_t intermediate_2_parameter_names (int32_t arg_10h) {
    eax = *((esp + 0x10));
    if (eax == 1) {
        goto label_0;
    }
    ecx = 0x80491e0;
    eax = 0x80491de;
    edx = "/is/something/else";
    __asm ("cmovs eax, ecx");
    do {
        eax = fopen (edx, eax);
        if (eax == 0) {
            goto label_1;
        }
        eax = 0;
        return eax;
label_0:
        edx = "/is/a/1";
        eax = 0x80491de;
    } while (1);
label_1:
    eax = puts ("failed");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048ae0 */
#include <stdint.h>
 
void advanced_2_naming_enums (int32_t arg_14h) {
    esi = *((esp + 0x14));
    eax = fseek (esi, 0, 0);
    ebx = eax;
    eax = fseek (esi, 0, 1);
    ebx += eax;
    eax = fseek (esi, 0, 2);
    ebx += eax;
    eax = chmod ("/some/path", 0x24);
    eax += ebx;
    if (eax > 4) {
        eax = puts ("something");
    }
    eax = 0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048450 */
#include <stdint.h>
 
void fseek (void) {
    fseek ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80484c0 */
#include <stdint.h>
 
void chmod (void) {
    chmod ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048c10 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_20h, int32_t arg_2ch) {
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x23e7;
    ebp = *((esp + 0x20));
    esi = ebx - 0xf4;
    _init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    edi = 0;
    do {
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t*) (ebp, *((esp + 0x2c)));
        edi++;
    } while (esi != edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048800 */
#include <stdint.h>
 
uint32_t basic_3_string_literals_high_chars (void) {
    puts ("hex=0xf0 dec=240 char=");
    puts ("hex=0xf1 dec=241 char=");
    puts ("hex=0xf2 dec=242 char=");
    puts ("hex=0xf3 dec=243 char=");
    puts ("hex=0xf4 dec=244 char=");
    puts ("hex=0xf5 dec=245 char=");
    puts ("hex=0xf6 dec=246 char=");
    puts ("hex=0xf7 dec=247 char=");
    puts ("hex=0xf8 dec=248 char=");
    puts ("hex=0xf9 dec=249 char=");
    puts ("hex=0xfa dec=250 char=");
    puts ("hex=0xfb dec=251 char=");
    puts ("hex=0xfc dec=252 char=");
    puts ("hex=0xfd dec=253 char=");
    puts ("hex=0xfe dec=254 char=");
    eax = puts ("hex=0xff dec=255 char=");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80484e0 */
#include <stdint.h>
 
int32_t main (char ** argv) {
    int32_t var_ch;
    /* [14] -r-x section size 1938 named .text */
    ecx = esp + 4;
    ebx = *(ecx);
    esi = *((ecx + 4));
    basic_1_string_literals_quoting (ecx, ebx, esi, ebp);
    basic_2_string_literals_low_chars ();
    basic_3_string_literals_high_chars ();
    basic_4_readonly_vs_modifiable ();
    basic_10_result_var_name (ebx);
    intermediate_1_for_loop_name (ebx);
    intermediate_2_parameter_names (ebx);
    intermediate_10_int_literal_in_bit_context (ebx);
    intermediate_11_int_literal_in_arithm_context (ebx);
    advanced_1_null_bytes_with_fixed_length (0);
    advanced_2_naming_enums (0);
    advanced_10_int_literal_in_char_context (*(esi));
    advanced_11_printf_type_related ();
    eax = *(esi);
    eax = *(eax);
    esp = ebp - 0xc;
    esp = ecx - 4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048660 */
#include <stdint.h>
 
uint32_t basic_1_string_literals_quoting (void) {
    puts ("with ' single quote");
    eax = puts ("with \" double quote");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048680 */
#include <stdint.h>
 
uint32_t basic_2_string_literals_low_chars (void) {
    puts ("hex=0x01 dec=1 char=");
    puts ("hex=0x02 dec=2 char=");
    puts ("hex=0x03 dec=3 char=");
    puts ("hex=0x04 dec=4 char=");
    puts ("hex=0x05 dec=5 char=");
    puts ("hex=0x06 dec=6 char=");
    puts ("hex=0x07 dec=7 char=\aFINI");
    puts ("hex=0x08 dec=8 char=\bFINI");
    puts ("hex=0x09 dec=9 char=\tFINI");
    puts ("hex=0x0a dec=10 char=\nFINI");
    puts ("hex=0x0b dec=11 char=\vFINI");
    puts ("hex=0x0c dec=12 char=\fFINI");
    puts ("hex=0x0d dec=13 char=\rFINI");
    puts ("hex=0x0e dec=14 char=");
    puts ("hex=0x0f dec=15 char=");
    puts ("hex=0x10 dec=16 char=");
    puts ("hex=0x11 dec=17 char=");
    puts ("hex=0x12 dec=18 char=");
    puts ("hex=0x13 dec=19 char=");
    puts ("hex=0x14 dec=20 char=");
    puts ("hex=0x15 dec=21 char=");
    puts ("hex=0x16 dec=22 char=");
    puts ("hex=0x17 dec=23 char=");
    puts ("hex=0x18 dec=24 char=");
    puts ("hex=0x19 dec=25 char=");
    puts ("hex=0x1a dec=26 char=");
    puts ("hex=0x1b dec=27 char=\eFINI");
    puts ("hex=0x1c dec=28 char=");
    puts ("hex=0x1d dec=29 char=");
    puts ("hex=0x1e dec=30 char=");
    eax = puts ("hex=0x1f dec=31 char=");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80488d0 */
#include <stdint.h>
 
uint32_t basic_4_readonly_vs_modifiable (void) {
    puts ("a read only string");
    eax = puts ("a modifiable string");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048a40 */
#include <stdint.h>
 
uint32_t intermediate_11_int_literal_in_arithm_context (int32_t arg_1ch) {
    ebx = *((esp + 0x1c));
    putchar (ebx + 0xf0f0);
    eax = ebx - 0xff0000;
    putchar (eax);
    eax = ebx * 3;
    putchar (eax);
    eax = ebx + 0x2a;
    putchar (eax);
    eax = ebx - 0x3e7;
    ebx *= 0x12d591;
    putchar (eax);
    eax = putchar (ebx);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048aa0 */
#include <stdint.h>
 
void advanced_1_null_bytes_with_fixed_length (int32_t arg_10h) {
    ebx = *((esp + 0x10));
    fwrite ("with null byte ", 0x11, 1, ebx);
    fwrite ("with null byte ", 1, 0x11, ebx);
    memcmp (ebx, "with null byte ", 0x11);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048460 */
#include <stdint.h>
 
void fwrite (void) {
    fwrite ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x8048440 */
#include <stdint.h>
 
void memcmp (void) {
    memcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80483e8 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x2c0f;
    eax = *((ebx - 4));
    if (eax != 0) {
        _plt_got ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80484d0 */
#include <stdint.h>
 
void _plt_got (void) {
    /* [13] -r-x section size 8 named .plt.got */
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/dmi/output/ia32_elf/subject.exe @ 0x80484a0 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
