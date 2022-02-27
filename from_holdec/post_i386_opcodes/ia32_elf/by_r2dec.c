/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049050 */
#include <stdint.h>
 
uint32_t entry0 (void) {
    /* [13] -r-x section size 58037 named .text */
    __asm ("endbr32");
    ebp = 0;
    ecx = esp;
    fcn_08049087 ();
    ebx += 0x10f9c;
    eax = main;
    return libc_start_main (eax, esi, ecx, ebx - 0x2d60, ebx - 0x2d00);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049087 */
#include <stdint.h>
 
void fcn_08049087 (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049040 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80490b0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = obj.completed.6843;
    if (eax != obj.completed.6843) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.completed.6843);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80490f0 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    eax = obj.completed.6843;
    eax -= obj.completed.6843;
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
        void (*edx)(uint32_t, uint32_t) (obj.completed.6843, eax);
        return eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049130 */
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
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049160 */
#include <stdint.h>
 
void entry_init0 (void) {
    __asm ("endbr32");
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80543ce */
#include <stdint.h>
 
int32_t fcn_080543ce (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al != 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ef93 */
#include <stdint.h>
 
int32_t fcn_0804ef93 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (? == ?) {
        ax = *((ebx + 0xc));
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e292 */
#include <stdint.h>
 
int32_t cmov1_mv_plain (void) {
    if (? == ?) {
        ax = bx;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8057300 */
#include <stdint.h>
 
void libc_csu_fini (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ae08 */
#include <stdint.h>
 
int32_t fcn_0804ae08 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cpuid");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b654 */
#include <stdint.h>
 
int32_t fcn_0804b654 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("wbinvd");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051e5b */
#include <stdint.h>
 
int32_t cmov_w_with_code_b_mv_plain (void) {
    __asm ("cmovnp bx, ax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c15e */
#include <stdint.h>
 
int32_t xadd3_plain (void) {
    __asm ("xadd ebx, eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804de00 */
#include <stdint.h>
 
int32_t fcn_0804de00 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("rdmsr");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80498c3 */
#include <stdint.h>
 
int32_t cmpxchg2_mv_plain (void) {
    __asm ("cmpxchg bx, ax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052d68 */
#include <stdint.h>
 
int32_t fcn_08052d68 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al > 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804db43 */
#include <stdint.h>
 
int32_t fcn_0804db43 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("rdmsr");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a034 */
#include <stdint.h>
 
int32_t fcn_0804a034 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmpxchg dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805389d */
#include <stdint.h>
 
int32_t fcn_0805389d (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al < 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051328 */
#include <stdint.h>
 
int32_t fcn_08051328 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovs bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c9bc */
#include <stdint.h>
 
int32_t fcn_0804c9bc (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("xadd al, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805141d */
#include <stdint.h>
 
int32_t fcn_0805141d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovs bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050ab1 */
#include <stdint.h>
 
int32_t fcn_08050ab1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al != 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805321b */
#include <stdint.h>
 
int32_t fcn_0805321b (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovo ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055580 */
#include <stdint.h>
 
int32_t fcn_08055580 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovns ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80561a6 */
#include <stdint.h>
 
int32_t fcn_080561a6 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al >= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e652 */
#include <stdint.h>
 
int32_t fcn_0804e652 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (? == ?) {
        eax = ebx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055ddf */
#include <stdint.h>
 
int32_t cmov_l_with_code_c_mv_plain (void) {
    if (al < 2) {
        ebx = eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050247 */
#include <stdint.h>
 
int32_t fcn_08050247 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al >= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049e5c */
#include <stdint.h>
 
int32_t fcn_08049e5c (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmpxchg ecx, ebx");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d96e */
#include <stdint.h>
 
int32_t fcn_0804d96e (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("rdtsc");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054e0a */
#include <stdint.h>
 
int32_t fcn_08054e0a (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al > 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055c0d */
#include <stdint.h>
 
int32_t fcn_08055c0d (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovnp ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80490a0 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80519b1 */
#include <stdint.h>
 
int32_t fcn_080519b1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovns bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052228 */
#include <stdint.h>
 
int32_t fcn_08052228 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al < 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80551c5 */
#include <stdint.h>
 
int32_t fcn_080551c5 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovs ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804edb6 */
#include <stdint.h>
 
int32_t fcn_0804edb6 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (? == ?) {
        ax = *((ebx + 0xc));
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80516e8 */
#include <stdint.h>
 
int32_t fcn_080516e8 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovns bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804cc71 */
#include <stdint.h>
 
int32_t xadd_locked_mv_plain (void) {
    __asm ("lock xadd dword [ebx], eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049512 */
#include <stdint.h>
 
int32_t cmpxchg1_mv_plain (void) {
    __asm ("cmpxchg bl, al");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051c87 */
#include <stdint.h>
 
int32_t fcn_08051c87 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovp bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a3e5 */
#include <stdint.h>
 
int32_t fcn_0804a3e5 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmpxchg al, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f528 */
#include <stdint.h>
 
int32_t fcn_0804f528 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovo bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056555 */
#include <stdint.h>
 
int32_t cmov_l_with_code_e_mv_plain (void) {
    if (al <= 2) {
        ebx = eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e29d */
#include <stdint.h>
 
int32_t fcn_0804e29d (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (? == ?) {
        ax = bx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050e71 */
#include <stdint.h>
 
int32_t fcn_08050e71 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al <= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054013 */
#include <stdint.h>
 
int32_t fcn_08054013 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al == 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80534e2 */
#include <stdint.h>
 
int32_t fcn_080534e2 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovno ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804aa5a */
#include <stdint.h>
 
int32_t fcn_0804aa5a (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("lock cmpxchg dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056655 */
#include <stdint.h>
 
int32_t fcn_08056655 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al <= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055a24 */
#include <stdint.h>
 
int32_t cmov_l_with_code_b_mv_plain (void) {
    __asm ("cmovnp ebx, eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805311b */
#include <stdint.h>
 
int32_t cmov_l_with_code_0_plain (void) {
    __asm ("cmovo ebx, eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053f1e */
#include <stdint.h>
 
int32_t fcn_08053f1e (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al >= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80496f5 */
#include <stdint.h>
 
int32_t fcn_080496f5 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmpxchg bl, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80533ed */
#include <stdint.h>
 
int32_t fcn_080533ed (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovo ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052c71 */
#include <stdint.h>
 
int32_t fcn_08052c71 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al <= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804aeee */
#include <stdint.h>
 
int32_t invd_plain (void) {
    __asm ("invd");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ea03 */
#include <stdint.h>
 
int32_t fcn_0804ea03 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (? == ?) {
        eax = ebx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056be2 */
#include <stdint.h>
 
int32_t fcn_08056be2 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al > 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d2f1 */
#include <stdint.h>
 
int32_t fcn_0804d2f1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmpxchg8b qword [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804eeaa */
#include <stdint.h>
 
int32_t fcn_0804eeaa (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (? == ?) {
        ax = *((ebx + 0xc));
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805646c */
#include <stdint.h>
 
int32_t fcn_0805646c (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al >= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052047 */
#include <stdint.h>
 
int32_t fcn_08052047 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovnp bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ce57 */
#include <stdint.h>
 
int32_t fcn_0804ce57 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("lock xadd dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805299b */
#include <stdint.h>
 
int32_t cmov_w_with_code_e_mv_plain (void) {
    if (al <= 2) {
        bx = ax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e478 */
#include <stdint.h>
 
int32_t fcn_0804e478 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (? == ?) {
        ax = bx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052d5b */
#include <stdint.h>
 
int32_t cmov_w_with_code_f_mv_plain (void) {
    if (al > 2) {
        bx = ax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b396 */
#include <stdint.h>
 
int32_t fcn_0804b396 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("invlpg byte [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d3d8 */
#include <stdint.h>
 
int32_t cmpxchg8b_locked_mv_plain (void) {
    __asm ("lock cmpxchg8b qword [eax]");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a20d */
#include <stdint.h>
 
int32_t fcn_0804a20d (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmpxchg dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80529a8 */
#include <stdint.h>
 
int32_t fcn_080529a8 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al <= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056ccb */
#include <stdint.h>
 
void callAll (void) {
    bswap_plain ();
    bswap_allregs ();
    bswap_constant_simple ();
    bswap_constant_complex1 ();
    bswap_constant_complex2 ();
    cmpxchg1_mv_plain ();
    cmpxchg1_mv_allregs ();
    cmpxchg1_mv_constant_simple ();
    cmpxchg1_mv_constant_complex1 ();
    cmpxchg1_mv_constant_complex2 ();
    cmpxchg2_mv_plain ();
    cmpxchg2_mv_allregs ();
    cmpxchg2_mv_constant_simple ();
    cmpxchg2_mv_constant_complex1 ();
    cmpxchg2_mv_constant_complex2 ();
    cmpxchg3_plain ();
    cmpxchg3_allregs ();
    cmpxchg3_constant_simple ();
    cmpxchg3_constant_complex1 ();
    cmpxchg3_constant_complex2 ();
    cmpxchg4_mv_plain ();
    cmpxchg4_mv_allregs ();
    cmpxchg4_mv_constant_simple ();
    cmpxchg4_mv_constant_complex1 ();
    cmpxchg4_mv_constant_complex2 ();
    cmpxchg5_mv_plain ();
    cmpxchg5_mv_allregs ();
    cmpxchg5_mv_constant_simple ();
    cmpxchg5_mv_constant_complex1 ();
    cmpxchg5_mv_constant_complex2 ();
    cmpxchg_locked_mv_plain ();
    cmpxchg_locked_mv_allregs ();
    cmpxchg_locked_mv_constant_simple ();
    cmpxchg_locked_mv_constant_complex1 ();
    cmpxchg_locked_mv_constant_complex2 ();
    cpuid_plain ();
    cpuid_allregs ();
    cpuid_constant_simple ();
    cpuid_constant_complex1 ();
    cpuid_constant_complex2 ();
    invd_plain ();
    invd_allregs ();
    invd_constant_simple ();
    invd_constant_complex1 ();
    invd_constant_complex2 ();
    invlpg_plain ();
    invlpg_allregs ();
    invlpg_constant_simple ();
    invlpg_constant_complex1 ();
    invlpg_constant_complex2 ();
    wbinvd_plain ();
    wbinvd_allregs ();
    wbinvd_constant_simple ();
    wbinvd_constant_complex1 ();
    wbinvd_constant_complex2 ();
    xadd1_mv_plain ();
    xadd1_mv_allregs ();
    xadd1_mv_constant_simple ();
    xadd1_mv_constant_complex1 ();
    xadd1_mv_constant_complex2 ();
    xadd2_mv_plain ();
    xadd2_mv_allregs ();
    xadd2_mv_constant_simple ();
    xadd2_mv_constant_complex1 ();
    xadd2_mv_constant_complex2 ();
    xadd3_plain ();
    xadd3_allregs ();
    xadd3_constant_simple ();
    xadd3_constant_complex1 ();
    xadd3_constant_complex2 ();
    xadd4_mv_plain ();
    xadd4_mv_allregs ();
    xadd4_mv_constant_simple ();
    xadd4_mv_constant_complex1 ();
    xadd4_mv_constant_complex2 ();
    xadd5_mv_plain ();
    xadd5_mv_allregs ();
    xadd5_mv_constant_simple ();
    xadd5_mv_constant_complex1 ();
    xadd5_mv_constant_complex2 ();
    xadd_locked_mv_plain ();
    xadd_locked_mv_allregs ();
    xadd_locked_mv_constant_simple ();
    xadd_locked_mv_constant_complex1 ();
    xadd_locked_mv_constant_complex2 ();
    cmpxchg8b_plain ();
    cmpxchg8b_allregs ();
    cmpxchg8b_constant_simple ();
    cmpxchg8b_constant_complex1 ();
    cmpxchg8b_constant_complex2 ();
    cmpxchg8b_locked_mv_plain ();
    cmpxchg8b_locked_mv_allregs ();
    cmpxchg8b_locked_mv_constant_simple ();
    cmpxchg8b_locked_mv_constant_complex1 ();
    cmpxchg8b_locked_mv_constant_complex2 ();
    rdtsc_plain ();
    rdtsc_allregs ();
    rdtsc_constant_simple ();
    rdtsc_constant_complex1 ();
    rdtsc_constant_complex2 ();
    rdmsr_plain ();
    rdmsr_allregs ();
    rdmsr_constant_simple ();
    rdmsr_constant_complex1 ();
    rdmsr_constant_complex2 ();
    wrmsr_plain ();
    wrmsr_allregs ();
    wrmsr_constant_simple ();
    wrmsr_constant_complex1 ();
    wrmsr_constant_complex2 ();
    cmov1_mv_plain ();
    cmov1_mv_allregs ();
    cmov1_mv_constant_simple ();
    cmov1_mv_constant_complex1 ();
    cmov1_mv_constant_complex2 ();
    cmov2_mv_plain ();
    cmov2_mv_allregs ();
    cmov2_mv_constant_simple ();
    cmov2_mv_constant_complex1 ();
    cmov2_mv_constant_complex2 ();
    cmov3_plain ();
    cmov3_allregs ();
    cmov3_constant_simple ();
    cmov3_constant_complex1 ();
    cmov3_constant_complex2 ();
    cmov4_mv_plain ();
    cmov4_mv_allregs ();
    cmov4_mv_constant_simple ();
    cmov4_mv_constant_complex1 ();
    cmov4_mv_constant_complex2 ();
    cmov5_mv_plain ();
    cmov5_mv_allregs ();
    cmov5_mv_constant_simple ();
    cmov5_mv_constant_complex1 ();
    cmov5_mv_constant_complex2 ();
    cmov_w_with_code_0_plain ();
    cmov_w_with_code_0_allregs ();
    cmov_w_with_code_0_constant_simple ();
    cmov_w_with_code_0_constant_complex1 ();
    cmov_w_with_code_0_constant_complex2 ();
    cmov_w_with_code_1_mv_plain ();
    cmov_w_with_code_1_mv_allregs ();
    cmov_w_with_code_1_mv_constant_simple ();
    cmov_w_with_code_1_mv_constant_complex1 ();
    cmov_w_with_code_1_mv_constant_complex2 ();
    cmov_w_with_code_2_mv_plain ();
    cmov_w_with_code_2_mv_allregs ();
    cmov_w_with_code_2_mv_constant_simple ();
    cmov_w_with_code_2_mv_constant_complex1 ();
    cmov_w_with_code_2_mv_constant_complex2 ();
    cmov_w_with_code_3_mv_plain ();
    cmov_w_with_code_3_mv_allregs ();
    cmov_w_with_code_3_mv_constant_simple ();
    cmov_w_with_code_3_mv_constant_complex1 ();
    cmov_w_with_code_3_mv_constant_complex2 ();
    cmov_w_with_code_4_mv_plain ();
    cmov_w_with_code_4_mv_allregs ();
    cmov_w_with_code_4_mv_constant_simple ();
    cmov_w_with_code_4_mv_constant_complex1 ();
    cmov_w_with_code_4_mv_constant_complex2 ();
    cmov_w_with_code_5_mv_plain ();
    cmov_w_with_code_5_mv_allregs ();
    cmov_w_with_code_5_mv_constant_simple ();
    cmov_w_with_code_5_mv_constant_complex1 ();
    cmov_w_with_code_5_mv_constant_complex2 ();
    cmov_w_with_code_6_mv_plain ();
    cmov_w_with_code_6_mv_allregs ();
    cmov_w_with_code_6_mv_constant_simple ();
    cmov_w_with_code_6_mv_constant_complex1 ();
    cmov_w_with_code_6_mv_constant_complex2 ();
    cmov_w_with_code_7_mv_plain ();
    cmov_w_with_code_7_mv_allregs ();
    cmov_w_with_code_7_mv_constant_simple ();
    cmov_w_with_code_7_mv_constant_complex1 ();
    cmov_w_with_code_7_mv_constant_complex2 ();
    cmov_w_with_code_8_mv_plain ();
    cmov_w_with_code_8_mv_allregs ();
    cmov_w_with_code_8_mv_constant_simple ();
    cmov_w_with_code_8_mv_constant_complex1 ();
    cmov_w_with_code_8_mv_constant_complex2 ();
    cmov_w_with_code_9_mv_plain ();
    cmov_w_with_code_9_mv_allregs ();
    cmov_w_with_code_9_mv_constant_simple ();
    cmov_w_with_code_9_mv_constant_complex1 ();
    cmov_w_with_code_9_mv_constant_complex2 ();
    cmov_w_with_code_a_mv_plain ();
    cmov_w_with_code_a_mv_allregs ();
    cmov_w_with_code_a_mv_constant_simple ();
    cmov_w_with_code_a_mv_constant_complex1 ();
    cmov_w_with_code_a_mv_constant_complex2 ();
    cmov_w_with_code_b_mv_plain ();
    cmov_w_with_code_b_mv_allregs ();
    cmov_w_with_code_b_mv_constant_simple ();
    cmov_w_with_code_b_mv_constant_complex1 ();
    cmov_w_with_code_b_mv_constant_complex2 ();
    cmov_w_with_code_c_mv_plain ();
    cmov_w_with_code_c_mv_allregs ();
    cmov_w_with_code_c_mv_constant_simple ();
    cmov_w_with_code_c_mv_constant_complex1 ();
    cmov_w_with_code_c_mv_constant_complex2 ();
    cmov_w_with_code_d_mv_plain ();
    cmov_w_with_code_d_mv_allregs ();
    cmov_w_with_code_d_mv_constant_simple ();
    cmov_w_with_code_d_mv_constant_complex1 ();
    cmov_w_with_code_d_mv_constant_complex2 ();
    cmov_w_with_code_e_mv_plain ();
    cmov_w_with_code_e_mv_allregs ();
    cmov_w_with_code_e_mv_constant_simple ();
    cmov_w_with_code_e_mv_constant_complex1 ();
    cmov_w_with_code_e_mv_constant_complex2 ();
    cmov_w_with_code_f_mv_plain ();
    cmov_w_with_code_f_mv_allregs ();
    cmov_w_with_code_f_mv_constant_simple ();
    cmov_w_with_code_f_mv_constant_complex1 ();
    cmov_w_with_code_f_mv_constant_complex2 ();
    cmov_l_with_code_0_plain ();
    cmov_l_with_code_0_allregs ();
    cmov_l_with_code_0_constant_simple ();
    cmov_l_with_code_0_constant_complex1 ();
    cmov_l_with_code_0_constant_complex2 ();
    cmov_l_with_code_1_mv_plain ();
    cmov_l_with_code_1_mv_allregs ();
    cmov_l_with_code_1_mv_constant_simple ();
    cmov_l_with_code_1_mv_constant_complex1 ();
    cmov_l_with_code_1_mv_constant_complex2 ();
    cmov_l_with_code_2_mv_plain ();
    cmov_l_with_code_2_mv_allregs ();
    cmov_l_with_code_2_mv_constant_simple ();
    cmov_l_with_code_2_mv_constant_complex1 ();
    cmov_l_with_code_2_mv_constant_complex2 ();
    cmov_l_with_code_3_mv_plain ();
    cmov_l_with_code_3_mv_allregs ();
    cmov_l_with_code_3_mv_constant_simple ();
    cmov_l_with_code_3_mv_constant_complex1 ();
    cmov_l_with_code_3_mv_constant_complex2 ();
    cmov_l_with_code_4_mv_plain ();
    cmov_l_with_code_4_mv_allregs ();
    cmov_l_with_code_4_mv_constant_simple ();
    cmov_l_with_code_4_mv_constant_complex1 ();
    cmov_l_with_code_4_mv_constant_complex2 ();
    cmov_l_with_code_5_mv_plain ();
    cmov_l_with_code_5_mv_allregs ();
    cmov_l_with_code_5_mv_constant_simple ();
    cmov_l_with_code_5_mv_constant_complex1 ();
    cmov_l_with_code_5_mv_constant_complex2 ();
    cmov_l_with_code_6_mv_plain ();
    cmov_l_with_code_6_mv_allregs ();
    cmov_l_with_code_6_mv_constant_simple ();
    cmov_l_with_code_6_mv_constant_complex1 ();
    cmov_l_with_code_6_mv_constant_complex2 ();
    cmov_l_with_code_7_mv_plain ();
    cmov_l_with_code_7_mv_allregs ();
    cmov_l_with_code_7_mv_constant_simple ();
    cmov_l_with_code_7_mv_constant_complex1 ();
    cmov_l_with_code_7_mv_constant_complex2 ();
    cmov_l_with_code_8_mv_plain ();
    cmov_l_with_code_8_mv_allregs ();
    cmov_l_with_code_8_mv_constant_simple ();
    cmov_l_with_code_8_mv_constant_complex1 ();
    cmov_l_with_code_8_mv_constant_complex2 ();
    cmov_l_with_code_9_mv_plain ();
    cmov_l_with_code_9_mv_allregs ();
    cmov_l_with_code_9_mv_constant_simple ();
    cmov_l_with_code_9_mv_constant_complex1 ();
    cmov_l_with_code_9_mv_constant_complex2 ();
    cmov_l_with_code_a_mv_plain ();
    cmov_l_with_code_a_mv_allregs ();
    cmov_l_with_code_a_mv_constant_simple ();
    cmov_l_with_code_a_mv_constant_complex1 ();
    cmov_l_with_code_a_mv_constant_complex2 ();
    cmov_l_with_code_b_mv_plain ();
    cmov_l_with_code_b_mv_allregs ();
    cmov_l_with_code_b_mv_constant_simple ();
    cmov_l_with_code_b_mv_constant_complex1 ();
    cmov_l_with_code_b_mv_constant_complex2 ();
    cmov_l_with_code_c_mv_plain ();
    cmov_l_with_code_c_mv_allregs ();
    cmov_l_with_code_c_mv_constant_simple ();
    cmov_l_with_code_c_mv_constant_complex1 ();
    cmov_l_with_code_c_mv_constant_complex2 ();
    cmov_l_with_code_d_mv_plain ();
    cmov_l_with_code_d_mv_allregs ();
    cmov_l_with_code_d_mv_constant_simple ();
    cmov_l_with_code_d_mv_constant_complex1 ();
    cmov_l_with_code_d_mv_constant_complex2 ();
    cmov_l_with_code_e_mv_plain ();
    cmov_l_with_code_e_mv_allregs ();
    cmov_l_with_code_e_mv_constant_simple ();
    cmov_l_with_code_e_mv_constant_complex1 ();
    cmov_l_with_code_e_mv_constant_complex2 ();
    cmov_l_with_code_f_mv_plain ();
    cmov_l_with_code_f_mv_allregs ();
    cmov_l_with_code_f_mv_constant_simple ();
    cmov_l_with_code_f_mv_constant_complex1 ();
    return cmov_l_with_code_f_mv_constant_complex2 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049166 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t bswap_plain (void) {
    eax = SWAP32 (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804916f */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t fcn_0804916f (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    eax = SWAP32 (eax);
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049260 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t fcn_08049260 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    eax = SWAP32 (eax);
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049346 */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t fcn_08049346 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    eax = SWAP32 (eax);
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804942c */
#include <stdint.h>
 
#define SWAP32(n) ((uint32_t) (((n & 0x000000ff) << 24) | \
                               ((n & 0x0000ff00) <<  8) | \
                               ((n & 0x00ff0000) >>  8) | \
                               ((n & 0xff000000) >> 24)))
 
int32_t fcn_0804942c (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    eax = SWAP32 (eax);
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804951c */
#include <stdint.h>
 
int32_t fcn_0804951c (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmpxchg bl, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804960e */
#include <stdint.h>
 
int32_t fcn_0804960e (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmpxchg bl, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80496f4 */
#include <stdint.h>
 
void cmpxchg1_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80497dc */
#include <stdint.h>
 
int32_t fcn_080497dc (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmpxchg bl, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80498ce */
#include <stdint.h>
 
int32_t fcn_080498ce (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmpxchg bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80499c1 */
#include <stdint.h>
 
int32_t fcn_080499c1 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmpxchg bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049aa9 */
#include <stdint.h>
 
int32_t fcn_08049aa9 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmpxchg bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049b91 */
#include <stdint.h>
 
int32_t fcn_08049b91 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmpxchg bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049c79 */
#include <stdint.h>
 
int32_t cmpxchg3_plain (void) {
    __asm ("cmpxchg ecx, ebx");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049c83 */
#include <stdint.h>
 
int32_t fcn_08049c83 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmpxchg ecx, ebx");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049d75 */
#include <stdint.h>
 
int32_t fcn_08049d75 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmpxchg ecx, ebx");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049e5b */
#include <stdint.h>
 
void cmpxchg3_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049f43 */
#include <stdint.h>
 
int32_t fcn_08049f43 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmpxchg ecx, ebx");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a02a */
#include <stdint.h>
 
int32_t cmpxchg4_mv_plain (void) {
    __asm ("cmpxchg dword [ebx], eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a033 */
#include <stdint.h>
 
void cmpxchg4_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a126 */
#include <stdint.h>
 
int32_t fcn_0804a126 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmpxchg dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a20c */
#include <stdint.h>
 
void cmpxchg4_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a2f4 */
#include <stdint.h>
 
int32_t fcn_0804a2f4 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmpxchg dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a3db */
#include <stdint.h>
 
int32_t cmpxchg5_mv_plain (void) {
    __asm ("cmpxchg al, al");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a3e4 */
#include <stdint.h>
 
void cmpxchg5_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a4d7 */
#include <stdint.h>
 
int32_t fcn_0804a4d7 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmpxchg al, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a5be */
#include <stdint.h>
 
int32_t fcn_0804a5be (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmpxchg al, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a6a5 */
#include <stdint.h>
 
int32_t fcn_0804a6a5 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmpxchg al, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a78c */
#include <stdint.h>
 
int32_t cmpxchg_locked_mv_plain (void) {
    __asm ("lock cmpxchg dword [ebx], eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a797 */
#include <stdint.h>
 
int32_t fcn_0804a797 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("lock cmpxchg dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a88a */
#include <stdint.h>
 
int32_t fcn_0804a88a (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("lock cmpxchg dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a972 */
#include <stdint.h>
 
int32_t fcn_0804a972 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("lock cmpxchg dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804aa59 */
#include <stdint.h>
 
void cmpxchg_locked_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ab42 */
#include <stdint.h>
 
int32_t cpuid_plain (void) {
    __asm ("cpuid");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ab4b */
#include <stdint.h>
 
int32_t fcn_0804ab4b (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cpuid");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ac3c */
#include <stdint.h>
 
int32_t fcn_0804ac3c (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cpuid");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ad22 */
#include <stdint.h>
 
int32_t fcn_0804ad22 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cpuid");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ae07 */
#include <stdint.h>
 
void cpuid_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804aef7 */
#include <stdint.h>
 
int32_t fcn_0804aef7 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("invd");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804afe8 */
#include <stdint.h>
 
int32_t fcn_0804afe8 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("invd");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b0ce */
#include <stdint.h>
 
int32_t fcn_0804b0ce (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("invd");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b1b4 */
#include <stdint.h>
 
int32_t fcn_0804b1b4 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("invd");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b29a */
#include <stdint.h>
 
int32_t invlpg_plain (void) {
    __asm ("invlpg byte [eax]");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b2a4 */
#include <stdint.h>
 
int32_t fcn_0804b2a4 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("invlpg byte [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b395 */
#include <stdint.h>
 
void invlpg_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b47d */
#include <stdint.h>
 
int32_t fcn_0804b47d (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("invlpg byte [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b564 */
#include <stdint.h>
 
int32_t fcn_0804b564 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("invlpg byte [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b64b */
#include <stdint.h>
 
int32_t wbinvd_plain (void) {
    __asm ("wbinvd");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b653 */
#include <stdint.h>
 
void wbinvd_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b745 */
#include <stdint.h>
 
int32_t fcn_0804b745 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("wbinvd");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b82b */
#include <stdint.h>
 
int32_t fcn_0804b82b (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("wbinvd");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b911 */
#include <stdint.h>
 
int32_t fcn_0804b911 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("wbinvd");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b9f7 */
#include <stdint.h>
 
int32_t xadd1_mv_plain (void) {
    __asm ("xadd bl, al");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ba01 */
#include <stdint.h>
 
int32_t fcn_0804ba01 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("xadd bl, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804baf3 */
#include <stdint.h>
 
int32_t fcn_0804baf3 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("xadd bl, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bbda */
#include <stdint.h>
 
int32_t fcn_0804bbda (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("xadd bl, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bcc1 */
#include <stdint.h>
 
int32_t fcn_0804bcc1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("xadd bl, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bda8 */
#include <stdint.h>
 
int32_t xadd2_mv_plain (void) {
    __asm ("xadd bx, ax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bdb3 */
#include <stdint.h>
 
int32_t fcn_0804bdb3 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("xadd bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bea6 */
#include <stdint.h>
 
int32_t fcn_0804bea6 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("xadd bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bf8e */
#include <stdint.h>
 
int32_t fcn_0804bf8e (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("xadd bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c076 */
#include <stdint.h>
 
int32_t fcn_0804c076 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("xadd bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c168 */
#include <stdint.h>
 
int32_t fcn_0804c168 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("xadd ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c25a */
#include <stdint.h>
 
int32_t fcn_0804c25a (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("xadd ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c341 */
#include <stdint.h>
 
int32_t fcn_0804c341 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("xadd ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c428 */
#include <stdint.h>
 
int32_t fcn_0804c428 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("xadd ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c50f */
#include <stdint.h>
 
int32_t xadd4_mv_plain (void) {
    __asm ("xadd dword [ebx], eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c519 */
#include <stdint.h>
 
int32_t fcn_0804c519 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("xadd dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c60b */
#include <stdint.h>
 
int32_t fcn_0804c60b (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("xadd dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c6f2 */
#include <stdint.h>
 
int32_t fcn_0804c6f2 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("xadd dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c7d9 */
#include <stdint.h>
 
int32_t fcn_0804c7d9 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("xadd dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c8c0 */
#include <stdint.h>
 
int32_t xadd5_mv_plain (void) {
    __asm ("xadd al, al");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c8ca */
#include <stdint.h>
 
int32_t fcn_0804c8ca (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("xadd al, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c9bb */
#include <stdint.h>
 
void xadd5_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804caa3 */
#include <stdint.h>
 
int32_t fcn_0804caa3 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("xadd al, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804cb8a */
#include <stdint.h>
 
int32_t fcn_0804cb8a (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("xadd al, al");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804cc7c */
#include <stdint.h>
 
int32_t fcn_0804cc7c (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("lock xadd dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804cd6f */
#include <stdint.h>
 
int32_t fcn_0804cd6f (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("lock xadd dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ce56 */
#include <stdint.h>
 
void xadd_locked_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804cf3f */
#include <stdint.h>
 
int32_t fcn_0804cf3f (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("lock xadd dword [ebx], eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d027 */
#include <stdint.h>
 
int32_t cmpxchg8b_plain (void) {
    __asm ("cmpxchg8b qword [eax]");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d031 */
#include <stdint.h>
 
int32_t fcn_0804d031 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmpxchg8b qword [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d123 */
#include <stdint.h>
 
int32_t fcn_0804d123 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmpxchg8b qword [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d20a */
#include <stdint.h>
 
int32_t fcn_0804d20a (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmpxchg8b qword [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d2f0 */
#include <stdint.h>
 
void cmpxchg8b_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d3e3 */
#include <stdint.h>
 
int32_t fcn_0804d3e3 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("lock cmpxchg8b qword [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d4d6 */
#include <stdint.h>
 
int32_t fcn_0804d4d6 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("lock cmpxchg8b qword [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d5be */
#include <stdint.h>
 
int32_t fcn_0804d5be (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("lock cmpxchg8b qword [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d6a6 */
#include <stdint.h>
 
int32_t fcn_0804d6a6 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("lock cmpxchg8b qword [eax]");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d78e */
#include <stdint.h>
 
int32_t rdtsc_plain (void) {
    __asm ("rdtsc");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d797 */
#include <stdint.h>
 
int32_t fcn_0804d797 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("rdtsc");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d888 */
#include <stdint.h>
 
int32_t fcn_0804d888 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("rdtsc");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d96d */
#include <stdint.h>
 
void rdtsc_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804da54 */
#include <stdint.h>
 
int32_t fcn_0804da54 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("rdtsc");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804db3a */
#include <stdint.h>
 
int32_t rdmsr_plain (void) {
    __asm ("rdmsr");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804db42 */
#include <stdint.h>
 
void rdmsr_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804dc34 */
#include <stdint.h>
 
int32_t fcn_0804dc34 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("rdmsr");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804dd1a */
#include <stdint.h>
 
int32_t fcn_0804dd1a (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("rdmsr");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ddff */
#include <stdint.h>
 
void rdmsr_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804dee6 */
#include <stdint.h>
 
int32_t wrmsr_plain (void) {
    __asm ("wrmsr");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804deef */
#include <stdint.h>
 
int32_t fcn_0804deef (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("wrmsr");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804dfe0 */
#include <stdint.h>
 
int32_t fcn_0804dfe0 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("wrmsr");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e0c6 */
#include <stdint.h>
 
int32_t fcn_0804e0c6 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("wrmsr");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e1ac */
#include <stdint.h>
 
int32_t fcn_0804e1ac (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("wrmsr");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e29c */
#include <stdint.h>
 
void cmov1_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e390 */
#include <stdint.h>
 
int32_t fcn_0804e390 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (? == ?) {
        ax = bx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e477 */
#include <stdint.h>
 
void cmov1_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e560 */
#include <stdint.h>
 
int32_t fcn_0804e560 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (? == ?) {
        ax = bx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e648 */
#include <stdint.h>
 
int32_t cmov2_mv_plain (void) {
    if (? == ?) {
        eax = ebx;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e651 */
#include <stdint.h>
 
void cmov2_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e744 */
#include <stdint.h>
 
int32_t fcn_0804e744 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (? == ?) {
        eax = ebx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e82b */
#include <stdint.h>
 
int32_t fcn_0804e82b (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (? == ?) {
        eax = ebx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e912 */
#include <stdint.h>
 
int32_t fcn_0804e912 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (? == ?) {
        eax = ebx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e9f9 */
#include <stdint.h>
 
int32_t cmov3_plain (void) {
    if (? == ?) {
        eax = ebx;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ea02 */
#include <stdint.h>
 
void cmov3_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804eaf5 */
#include <stdint.h>
 
int32_t fcn_0804eaf5 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (? == ?) {
        eax = ebx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ebdc */
#include <stdint.h>
 
int32_t fcn_0804ebdc (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (? == ?) {
        eax = ebx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ecc3 */
#include <stdint.h>
 
int32_t fcn_0804ecc3 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (? == ?) {
        eax = ebx;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804edaa */
#include <stdint.h>
 
int32_t cmov4_mv_plain (void) {
    if (? == ?) {
        ax = *((ebx + 0xc));
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804edb5 */
#include <stdint.h>
 
void cmov4_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804eea9 */
#include <stdint.h>
 
void cmov4_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ef92 */
#include <stdint.h>
 
void cmov4_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f07c */
#include <stdint.h>
 
int32_t fcn_0804f07c (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (? == ?) {
        ax = *((ebx + 0xc));
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f165 */
#include <stdint.h>
 
int32_t cmov5_mv_plain (void) {
    if (? == ?) {
        eax = *((ebx + 0x22));
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f170 */
#include <stdint.h>
 
int32_t fcn_0804f170 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (? == ?) {
        eax = *((ebx + 0x22));
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f263 */
#include <stdint.h>
 
int32_t fcn_0804f263 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (? == ?) {
        eax = *((ebx + 0x22));
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f34b */
#include <stdint.h>
 
int32_t fcn_0804f34b (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (? == ?) {
        eax = *((ebx + 0x22));
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f433 */
#include <stdint.h>
 
int32_t fcn_0804f433 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (? == ?) {
        eax = *((ebx + 0x22));
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (? < ?) ? 1 : 0;
    0x2203 = (? >= ?) ? 1 : 0;
    0x2204 = (? == ?) ? 1 : 0;
    0x2205 = (? != ?) ? 1 : 0;
    0x2206 = (? <= ?) ? 1 : 0;
    0x2207 = (? > ?) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (? < ?) ? 1 : 0;
    0x220d = (? >= ?) ? 1 : 0;
    0x220e = (? <= ?) ? 1 : 0;
    0x220f = (? > ?) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f51b */
#include <stdint.h>
 
int32_t cmov_w_with_code_0_plain (void) {
    __asm ("cmovo bx, ax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f527 */
#include <stdint.h>
 
void cmov_w_with_code_0_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f61d */
#include <stdint.h>
 
int32_t fcn_0804f61d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovo bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f707 */
#include <stdint.h>
 
int32_t fcn_0804f707 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovo bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f7f1 */
#include <stdint.h>
 
int32_t fcn_0804f7f1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovo bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f8db */
#include <stdint.h>
 
int32_t cmov_w_with_code_1_mv_plain (void) {
    __asm ("cmovno bx, ax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f8e8 */
#include <stdint.h>
 
int32_t fcn_0804f8e8 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovno bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f9dd */
#include <stdint.h>
 
int32_t fcn_0804f9dd (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovno bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fac7 */
#include <stdint.h>
 
int32_t fcn_0804fac7 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovno bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fbb1 */
#include <stdint.h>
 
int32_t fcn_0804fbb1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovno bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fc9b */
#include <stdint.h>
 
int32_t cmov_w_with_code_2_mv_plain (void) {
    if (al < 2) {
        bx = ax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fca8 */
#include <stdint.h>
 
int32_t fcn_0804fca8 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al < 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fd9d */
#include <stdint.h>
 
int32_t fcn_0804fd9d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al < 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fe87 */
#include <stdint.h>
 
int32_t fcn_0804fe87 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al < 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ff71 */
#include <stdint.h>
 
int32_t fcn_0804ff71 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al < 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805005b */
#include <stdint.h>
 
int32_t cmov_w_with_code_3_mv_plain (void) {
    if (al >= 2) {
        bx = ax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050068 */
#include <stdint.h>
 
int32_t fcn_08050068 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al >= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805015d */
#include <stdint.h>
 
int32_t fcn_0805015d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al >= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050246 */
#include <stdint.h>
 
void cmov_w_with_code_3_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050331 */
#include <stdint.h>
 
int32_t fcn_08050331 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al >= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805041b */
#include <stdint.h>
 
int32_t cmov_w_with_code_4_mv_plain (void) {
    if (al == 2) {
        bx = ax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050428 */
#include <stdint.h>
 
int32_t fcn_08050428 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al == 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805051d */
#include <stdint.h>
 
int32_t fcn_0805051d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al == 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050607 */
#include <stdint.h>
 
int32_t fcn_08050607 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al == 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80506f1 */
#include <stdint.h>
 
int32_t fcn_080506f1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al == 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80507db */
#include <stdint.h>
 
int32_t cmov_w_with_code_5_mv_plain (void) {
    if (al != 2) {
        bx = ax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80507e8 */
#include <stdint.h>
 
int32_t fcn_080507e8 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al != 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80508dd */
#include <stdint.h>
 
int32_t fcn_080508dd (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al != 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80509c7 */
#include <stdint.h>
 
int32_t fcn_080509c7 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al != 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050ab0 */
#include <stdint.h>
 
void cmov_w_with_code_5_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050b9b */
#include <stdint.h>
 
int32_t cmov_w_with_code_6_mv_plain (void) {
    if (al <= 2) {
        bx = ax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050ba8 */
#include <stdint.h>
 
int32_t fcn_08050ba8 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al <= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050c9d */
#include <stdint.h>
 
int32_t fcn_08050c9d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al <= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050d87 */
#include <stdint.h>
 
int32_t fcn_08050d87 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al <= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050e70 */
#include <stdint.h>
 
void cmov_w_with_code_6_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050f5b */
#include <stdint.h>
 
int32_t cmov_w_with_code_7_mv_plain (void) {
    if (al > 2) {
        bx = ax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050f68 */
#include <stdint.h>
 
int32_t fcn_08050f68 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al > 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805105d */
#include <stdint.h>
 
int32_t fcn_0805105d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al > 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051147 */
#include <stdint.h>
 
int32_t fcn_08051147 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al > 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051231 */
#include <stdint.h>
 
int32_t fcn_08051231 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al > 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805131b */
#include <stdint.h>
 
int32_t cmov_w_with_code_8_mv_plain (void) {
    __asm ("cmovs bx, ax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051327 */
#include <stdint.h>
 
void cmov_w_with_code_8_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805141c */
#include <stdint.h>
 
void cmov_w_with_code_8_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051507 */
#include <stdint.h>
 
int32_t fcn_08051507 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovs bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80515f1 */
#include <stdint.h>
 
int32_t fcn_080515f1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovs bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80516db */
#include <stdint.h>
 
int32_t cmov_w_with_code_9_mv_plain (void) {
    __asm ("cmovns bx, ax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80516e7 */
#include <stdint.h>
 
void cmov_w_with_code_9_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80517dd */
#include <stdint.h>
 
int32_t fcn_080517dd (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovns bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80518c7 */
#include <stdint.h>
 
int32_t fcn_080518c7 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovns bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80519b0 */
#include <stdint.h>
 
void cmov_w_with_code_9_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051a9b */
#include <stdint.h>
 
int32_t cmov_w_with_code_a_mv_plain (void) {
    __asm ("cmovp bx, ax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051aa8 */
#include <stdint.h>
 
int32_t fcn_08051aa8 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovp bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051b9d */
#include <stdint.h>
 
int32_t fcn_08051b9d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovp bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051c86 */
#include <stdint.h>
 
void cmov_w_with_code_a_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051d71 */
#include <stdint.h>
 
int32_t fcn_08051d71 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovp bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051e68 */
#include <stdint.h>
 
int32_t fcn_08051e68 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovnp bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051f5d */
#include <stdint.h>
 
int32_t fcn_08051f5d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovnp bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052046 */
#include <stdint.h>
 
void cmov_w_with_code_b_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052131 */
#include <stdint.h>
 
int32_t fcn_08052131 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovnp bx, ax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805221b */
#include <stdint.h>
 
int32_t cmov_w_with_code_c_mv_plain (void) {
    if (al < 2) {
        bx = ax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052227 */
#include <stdint.h>
 
void cmov_w_with_code_c_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805231d */
#include <stdint.h>
 
int32_t fcn_0805231d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al < 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052407 */
#include <stdint.h>
 
int32_t fcn_08052407 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al < 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80524f1 */
#include <stdint.h>
 
int32_t fcn_080524f1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al < 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80525db */
#include <stdint.h>
 
int32_t cmov_w_with_code_d_mv_plain (void) {
    if (al >= 2) {
        bx = ax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80525e8 */
#include <stdint.h>
 
int32_t fcn_080525e8 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al >= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80526dd */
#include <stdint.h>
 
int32_t fcn_080526dd (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al >= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80527c7 */
#include <stdint.h>
 
int32_t fcn_080527c7 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al >= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80528b1 */
#include <stdint.h>
 
int32_t fcn_080528b1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al >= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80529a7 */
#include <stdint.h>
 
void cmov_w_with_code_e_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052a9d */
#include <stdint.h>
 
int32_t fcn_08052a9d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al <= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052b87 */
#include <stdint.h>
 
int32_t fcn_08052b87 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al <= 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052c70 */
#include <stdint.h>
 
void cmov_w_with_code_e_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052d67 */
#include <stdint.h>
 
void cmov_w_with_code_f_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052e5d */
#include <stdint.h>
 
int32_t fcn_08052e5d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al > 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052f47 */
#include <stdint.h>
 
int32_t fcn_08052f47 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al > 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053031 */
#include <stdint.h>
 
int32_t fcn_08053031 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al > 2) {
        bx = ax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053127 */
#include <stdint.h>
 
int32_t fcn_08053127 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovo ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805321a */
#include <stdint.h>
 
void cmov_l_with_code_0_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053304 */
#include <stdint.h>
 
int32_t fcn_08053304 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovo ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80533ec */
#include <stdint.h>
 
void cmov_l_with_code_0_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80534d6 */
#include <stdint.h>
 
int32_t cmov_l_with_code_1_mv_plain (void) {
    __asm ("cmovno ebx, eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80534e1 */
#include <stdint.h>
 
void cmov_l_with_code_1_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80535d6 */
#include <stdint.h>
 
int32_t fcn_080535d6 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovno ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80536bf */
#include <stdint.h>
 
int32_t fcn_080536bf (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovno ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80537a8 */
#include <stdint.h>
 
int32_t fcn_080537a8 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovno ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053891 */
#include <stdint.h>
 
int32_t cmov_l_with_code_2_mv_plain (void) {
    if (al < 2) {
        ebx = eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805389c */
#include <stdint.h>
 
void cmov_l_with_code_2_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053991 */
#include <stdint.h>
 
int32_t fcn_08053991 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al < 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053a7a */
#include <stdint.h>
 
int32_t fcn_08053a7a (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al < 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053b63 */
#include <stdint.h>
 
int32_t fcn_08053b63 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al < 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053c4c */
#include <stdint.h>
 
int32_t cmov_l_with_code_3_mv_plain (void) {
    if (al >= 2) {
        ebx = eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053c58 */
#include <stdint.h>
 
int32_t fcn_08053c58 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al >= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053d4c */
#include <stdint.h>
 
int32_t fcn_08053d4c (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al >= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053e35 */
#include <stdint.h>
 
int32_t fcn_08053e35 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al >= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053f1d */
#include <stdint.h>
 
void cmov_l_with_code_3_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054007 */
#include <stdint.h>
 
int32_t cmov_l_with_code_4_mv_plain (void) {
    if (al == 2) {
        ebx = eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054012 */
#include <stdint.h>
 
void cmov_l_with_code_4_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054107 */
#include <stdint.h>
 
int32_t fcn_08054107 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al == 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80541f0 */
#include <stdint.h>
 
int32_t fcn_080541f0 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al == 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80542d9 */
#include <stdint.h>
 
int32_t fcn_080542d9 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al == 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80543c2 */
#include <stdint.h>
 
int32_t cmov_l_with_code_5_mv_plain (void) {
    if (al != 2) {
        ebx = eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80543cd */
#include <stdint.h>
 
void cmov_l_with_code_5_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80544c2 */
#include <stdint.h>
 
int32_t fcn_080544c2 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al != 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80545ab */
#include <stdint.h>
 
int32_t fcn_080545ab (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al != 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054694 */
#include <stdint.h>
 
int32_t fcn_08054694 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al != 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805477d */
#include <stdint.h>
 
int32_t cmov_l_with_code_6_mv_plain (void) {
    if (al <= 2) {
        ebx = eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054789 */
#include <stdint.h>
 
int32_t fcn_08054789 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al <= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805487d */
#include <stdint.h>
 
int32_t fcn_0805487d (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al <= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054966 */
#include <stdint.h>
 
int32_t fcn_08054966 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al <= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054a4f */
#include <stdint.h>
 
int32_t fcn_08054a4f (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al <= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054b38 */
#include <stdint.h>
 
int32_t cmov_l_with_code_7_mv_plain (void) {
    if (al > 2) {
        ebx = eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054b44 */
#include <stdint.h>
 
int32_t fcn_08054b44 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al > 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054c38 */
#include <stdint.h>
 
int32_t fcn_08054c38 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al > 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054d21 */
#include <stdint.h>
 
int32_t fcn_08054d21 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al > 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054e09 */
#include <stdint.h>
 
void cmov_l_with_code_7_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054ef3 */
#include <stdint.h>
 
int32_t cmov_l_with_code_8_mv_plain (void) {
    __asm ("cmovs ebx, eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054eff */
#include <stdint.h>
 
int32_t fcn_08054eff (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovs ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054ff3 */
#include <stdint.h>
 
int32_t fcn_08054ff3 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovs ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80550dc */
#include <stdint.h>
 
int32_t fcn_080550dc (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovs ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80551c4 */
#include <stdint.h>
 
void cmov_l_with_code_8_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80552ae */
#include <stdint.h>
 
int32_t cmov_l_with_code_9_mv_plain (void) {
    __asm ("cmovns ebx, eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80552ba */
#include <stdint.h>
 
int32_t fcn_080552ba (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovns ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80553ae */
#include <stdint.h>
 
int32_t fcn_080553ae (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovns ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055497 */
#include <stdint.h>
 
int32_t fcn_08055497 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovns ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805557f */
#include <stdint.h>
 
void cmov_l_with_code_9_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055669 */
#include <stdint.h>
 
int32_t cmov_l_with_code_a_mv_plain (void) {
    __asm ("cmovp ebx, eax");
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055675 */
#include <stdint.h>
 
int32_t fcn_08055675 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovp ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055769 */
#include <stdint.h>
 
int32_t fcn_08055769 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovp ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055852 */
#include <stdint.h>
 
int32_t fcn_08055852 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    __asm ("cmovp ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805593b */
#include <stdint.h>
 
int32_t fcn_0805593b (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovp ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055a30 */
#include <stdint.h>
 
int32_t fcn_08055a30 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    __asm ("cmovnp ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055b24 */
#include <stdint.h>
 
int32_t fcn_08055b24 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    __asm ("cmovnp ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055c0c */
#include <stdint.h>
 
void cmov_l_with_code_b_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055cf6 */
#include <stdint.h>
 
int32_t fcn_08055cf6 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    __asm ("cmovnp ebx, eax");
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055deb */
#include <stdint.h>
 
int32_t fcn_08055deb (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al < 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055edf */
#include <stdint.h>
 
int32_t fcn_08055edf (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al < 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055fc8 */
#include <stdint.h>
 
int32_t fcn_08055fc8 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al < 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80560b1 */
#include <stdint.h>
 
int32_t fcn_080560b1 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al < 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805619a */
#include <stdint.h>
 
int32_t cmov_l_with_code_d_mv_plain (void) {
    if (al >= 2) {
        ebx = eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80561a5 */
#include <stdint.h>
 
void cmov_l_with_code_d_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805629a */
#include <stdint.h>
 
int32_t fcn_0805629a (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al >= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056383 */
#include <stdint.h>
 
int32_t fcn_08056383 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al >= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805646b */
#include <stdint.h>
 
void cmov_l_with_code_d_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056561 */
#include <stdint.h>
 
int32_t fcn_08056561 (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al <= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056654 */
#include <stdint.h>
 
void cmov_l_with_code_e_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805673e */
#include <stdint.h>
 
int32_t fcn_0805673e (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al <= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056827 */
#include <stdint.h>
 
int32_t fcn_08056827 (void) {
    __asm ("popf");
    eax = 0x313ec0e8;
    ebx = 0x496e81c3;
    ecx = 0x1e3f6cb2;
    edx = 0x4e6925b3;
    esi = 0x2f37a4a5;
    edi = 0x91a917b4;
    *(0x2050) = esp;
    if (al <= 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0xfeff;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056910 */
#include <stdint.h>
 
int32_t cmov_l_with_code_f_mv_plain (void) {
    if (al > 2) {
        ebx = eax;
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805691c */
#include <stdint.h>
 
int32_t fcn_0805691c (void) {
    ax = *(0x1100);
    __asm ("popf");
    eax = *(0x1000);
    ebx = *(0x1004);
    ecx = *(0x1008);
    edx = *(0x100c);
    ebp = *(0x1010);
    esi = *(0x1014);
    edi = *(0x1018);
    *(0x2050) = esp;
    if (al > 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056a10 */
#include <stdint.h>
 
int32_t fcn_08056a10 (void) {
    __asm ("popf");
    eax = 2;
    ebx = 3;
    ecx = 4;
    edx = 5;
    esi = 7;
    edi = 8;
    *(0x2050) = esp;
    if (al > 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056af9 */
#include <stdint.h>
 
int32_t fcn_08056af9 (void) {
    __asm ("popf");
    eax = 0xa3b17984;
    ebx = 0x6671ad7;
    ecx = 0x46685248;
    edx = 0x392456c4;
    esi = 0xad3c2d78;
    edi = 0xe465e152;
    *(0x2050) = esp;
    if (al > 2) {
        ebx = eax;
    }
    *(0x2000) = eax;
    *(0x2004) = ebx;
    *(0x2008) = ecx;
    *(0x200c) = edx;
    *(0x2010) = ebp;
    *(0x2014) = esi;
    *(0x2018) = edi;
    __asm ("seto byte [0x2200]");
    __asm ("setno byte [0x2201]");
    0x2202 = (al < 2) ? 1 : 0;
    0x2203 = (al >= 2) ? 1 : 0;
    0x2204 = (al == 2) ? 1 : 0;
    0x2205 = (al != 2) ? 1 : 0;
    0x2206 = (al <= 2) ? 1 : 0;
    0x2207 = (al > 2) ? 1 : 0;
    __asm ("sets byte [0x2208]");
    __asm ("setns byte [0x2209]");
    __asm ("setp byte [0x220a]");
    __asm ("setnp byte [0x220b]");
    0x220c = (al < 2) ? 1 : 0;
    0x220d = (al >= 2) ? 1 : 0;
    0x220e = (al <= 2) ? 1 : 0;
    0x220f = (al > 2) ? 1 : 0;
    __asm ("pushf");
    ax = 0;
    *(0x2100) = ax;
    eax = *(0x2050);
    eax -= esp;
    *(0x2020) = eax;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056be1 */
#include <stdint.h>
 
void cmov_l_with_code_f_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804caa2 */
#include <stdint.h>
 
void xadd5_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e743 */
#include <stdint.h>
 
void cmov2_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b1b3 */
#include <stdint.h>
 
void invd_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050c9c */
#include <stdint.h>
 
void cmov_w_with_code_6_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049aa8 */
#include <stdint.h>
 
void cmpxchg2_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80508dc */
#include <stdint.h>
 
void cmov_w_with_code_5_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056299 */
#include <stdint.h>
 
void cmov_l_with_code_d_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055a2f */
#include <stdint.h>
 
void cmov_l_with_code_b_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052f46 */
#include <stdint.h>
 
void cmov_w_with_code_f_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804eaf4 */
#include <stdint.h>
 
void cmov3_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80542d8 */
#include <stdint.h>
 
void cmov_l_with_code_4_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8057308 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 24 named .fini */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x2ceb;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054efe */
#include <stdint.h>
 
void cmov_l_with_code_8_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bcc0 */
#include <stdint.h>
 
void xadd1_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d122 */
#include <stdint.h>
 
void cmpxchg8b_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80536be */
#include <stdint.h>
 
void cmov_l_with_code_1_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fca7 */
#include <stdint.h>
 
void cmov_w_with_code_2_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804951b */
#include <stdint.h>
 
void cmpxchg1_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f61c */
#include <stdint.h>
 
void cmov_w_with_code_0_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c340 */
#include <stdint.h>
 
void xadd3_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b910 */
#include <stdint.h>
 
void wbinvd_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055b23 */
#include <stdint.h>
 
void cmov_l_with_code_b_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a889 */
#include <stdint.h>
 
void cmpxchg_locked_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80552b9 */
#include <stdint.h>
 
void cmov_l_with_code_9_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d5bd */
#include <stdint.h>
 
void cmpxchg8b_locked_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c075 */
#include <stdint.h>
 
void xadd2_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fe86 */
#include <stdint.h>
 
void cmov_w_with_code_2_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a125 */
#include <stdint.h>
 
void cmpxchg4_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805593a */
#include <stdint.h>
 
void cmov_l_with_code_a_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c6f1 */
#include <stdint.h>
 
void xadd4_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80507e7 */
#include <stdint.h>
 
void cmov_w_with_code_5_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051146 */
#include <stdint.h>
 
void cmov_w_with_code_7_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050f67 */
#include <stdint.h>
 
void cmov_w_with_code_7_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053d4b */
#include <stdint.h>
 
void cmov_l_with_code_3_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80528b0 */
#include <stdint.h>
 
void cmov_w_with_code_d_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e911 */
#include <stdint.h>
 
void cmov2_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d4d5 */
#include <stdint.h>
 
void cmpxchg8b_locked_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056826 */
#include <stdint.h>
 
void cmov_l_with_code_e_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052a9c */
#include <stdint.h>
 
void cmov_w_with_code_e_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055fc7 */
#include <stdint.h>
 
void cmov_l_with_code_c_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80506f0 */
#include <stdint.h>
 
void cmov_w_with_code_4_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805015c */
#include <stdint.h>
 
void cmov_w_with_code_3_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e1ab */
#include <stdint.h>
 
void wrmsr_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055674 */
#include <stdint.h>
 
void cmov_l_with_code_a_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fbb0 */
#include <stdint.h>
 
void cmov_w_with_code_1_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80499c0 */
#include <stdint.h>
 
void cmpxchg2_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050067 */
#include <stdint.h>
 
void cmov_w_with_code_3_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80526dc */
#include <stdint.h>
 
void cmov_w_with_code_d_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80498cd */
#include <stdint.h>
 
void cmpxchg2_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051e67 */
#include <stdint.h>
 
void cmov_w_with_code_b_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a6a4 */
#include <stdint.h>
 
void cmpxchg5_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f432 */
#include <stdint.h>
 
void cmov5_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054693 */
#include <stdint.h>
 
void cmov_l_with_code_5_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053126 */
#include <stdint.h>
 
void cmov_l_with_code_0_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049345 */
#include <stdint.h>
 
void bswap_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ba00 */
#include <stdint.h>
 
void xadd1_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ebdb */
#include <stdint.h>
 
void cmov3_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80515f0 */
#include <stdint.h>
 
void cmov_w_with_code_8_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049c82 */
#include <stdint.h>
 
void cmpxchg3_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804cd6e */
#include <stdint.h>
 
void xadd_locked_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055dea */
#include <stdint.h>
 
void cmov_l_with_code_c_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f7f0 */
#include <stdint.h>
 
void cmov_w_with_code_0_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052130 */
#include <stdint.h>
 
void cmov_w_with_code_b_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b47c */
#include <stdint.h>
 
void invlpg_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053b62 */
#include <stdint.h>
 
void cmov_l_with_code_2_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80535d5 */
#include <stdint.h>
 
void cmov_l_with_code_1_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80524f0 */
#include <stdint.h>
 
void cmov_w_with_code_c_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051f5c */
#include <stdint.h>
 
void cmov_w_with_code_b_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ac3b */
#include <stdint.h>
 
void cpuid_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f07b */
#include <stdint.h>
 
void cmov4_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f9dc */
#include <stdint.h>
 
void cmov_w_with_code_1_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f16f */
#include <stdint.h>
 
void cmov5_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804dd19 */
#include <stdint.h>
 
void rdmsr_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ad21 */
#include <stdint.h>
 
void cpuid_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050ba7 */
#include <stdint.h>
 
void cmov_w_with_code_6_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b2a3 */
#include <stdint.h>
 
void invlpg_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054965 */
#include <stdint.h>
 
void cmov_l_with_code_6_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053c57 */
#include <stdint.h>
 
void cmov_l_with_code_3_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f262 */
#include <stdint.h>
 
void cmov5_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049f42 */
#include <stdint.h>
 
void cmpxchg3_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804da53 */
#include <stdint.h>
 
void rdtsc_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d030 */
#include <stdint.h>
 
void cmpxchg8b_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055cf5 */
#include <stdint.h>
 
void cmov_l_with_code_b_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054d20 */
#include <stdint.h>
 
void cmov_l_with_code_7_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050330 */
#include <stdint.h>
 
void cmov_w_with_code_3_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804afe7 */
#include <stdint.h>
 
void invd_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80572a0 */
#include <stdint.h>
 
uint32_t loc_annobin_elf_init_c (int32_t arg_2ch_2, int32_t arg_2ch, int32_t arg_28h) {
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x2d53;
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
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050427 */
#include <stdint.h>
 
void cmov_w_with_code_4_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d796 */
#include <stdint.h>
 
void rdtsc_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80550db */
#include <stdint.h>
 
void cmov_l_with_code_8_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c167 */
#include <stdint.h>
 
void xadd3_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050d86 */
#include <stdint.h>
 
void cmov_w_with_code_6_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051d70 */
#include <stdint.h>
 
void cmov_w_with_code_a_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c60a */
#include <stdint.h>
 
void xadd4_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055ede */
#include <stdint.h>
 
void cmov_l_with_code_c_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051aa7 */
#include <stdint.h>
 
void cmov_w_with_code_a_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80517dc */
#include <stdint.h>
 
void cmov_w_with_code_9_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80509c6 */
#include <stdint.h>
 
void cmov_w_with_code_5_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049090 */
#include <stdint.h>
 
void loc_annobin_static_reloc_c (void) {
    __asm ("endbr32");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a971 */
#include <stdint.h>
 
void cmpxchg_locked_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052e5c */
#include <stdint.h>
 
void cmov_w_with_code_f_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053e34 */
#include <stdint.h>
 
void cmov_l_with_code_3_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053990 */
#include <stdint.h>
 
void cmov_l_with_code_2_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805105c */
#include <stdint.h>
 
void cmov_w_with_code_7_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804deee */
#include <stdint.h>
 
void wrmsr_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d3e2 */
#include <stdint.h>
 
void cmpxchg8b_locked_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054a4e */
#include <stdint.h>
 
void cmov_l_with_code_6_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804dc33 */
#include <stdint.h>
 
void rdmsr_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054106 */
#include <stdint.h>
 
void cmov_l_with_code_4_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054b43 */
#include <stdint.h>
 
void cmov_l_with_code_7_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053303 */
#include <stdint.h>
 
void cmov_l_with_code_0_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c518 */
#include <stdint.h>
 
void xadd4_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052b86 */
#include <stdint.h>
 
void cmov_w_with_code_e_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d209 */
#include <stdint.h>
 
void cmpxchg8b_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056af8 */
#include <stdint.h>
 
void cmov_l_with_code_f_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055496 */
#include <stdint.h>
 
void cmov_l_with_code_9_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e55f */
#include <stdint.h>
 
void cmov1_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805691b */
#include <stdint.h>
 
void cmov_l_with_code_f_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055768 */
#include <stdint.h>
 
void cmov_l_with_code_a_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804cf3e */
#include <stdint.h>
 
void xadd_locked_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ab4a */
#include <stdint.h>
 
void cpuid_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056382 */
#include <stdint.h>
 
void cmov_l_with_code_d_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80497db */
#include <stdint.h>
 
void cmpxchg1_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a2f3 */
#include <stdint.h>
 
void cmpxchg4_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805487c */
#include <stdint.h>
 
void cmov_l_with_code_6_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054788 */
#include <stdint.h>
 
void cmov_l_with_code_6_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805728e */
#include <stdint.h>
 
int32_t main (void) {
    callAll ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804cb89 */
#include <stdint.h>
 
void xadd5_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b0cd */
#include <stdint.h>
 
void invd_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049b90 */
#include <stdint.h>
 
void cmpxchg2_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053030 */
#include <stdint.h>
 
void cmov_w_with_code_f_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80541ef */
#include <stdint.h>
 
void cmov_l_with_code_4_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051230 */
#include <stdint.h>
 
void cmov_w_with_code_7_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a4d6 */
#include <stdint.h>
 
void cmpxchg5_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bbd9 */
#include <stdint.h>
 
void xadd1_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c8c9 */
#include <stdint.h>
 
void xadd5_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80537a7 */
#include <stdint.h>
 
void cmov_l_with_code_1_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b82a */
#include <stdint.h>
 
void wbinvd_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049d74 */
#include <stdint.h>
 
void cmpxchg3_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804916e */
#include <stdint.h>
 
void bswap_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c427 */
#include <stdint.h>
 
void xadd3_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80525e7 */
#include <stdint.h>
 
void cmov_w_with_code_d_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e38f */
#include <stdint.h>
 
void cmov1_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804925f */
#include <stdint.h>
 
void bswap_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d6a5 */
#include <stdint.h>
 
void cmpxchg8b_locked_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bf8d */
#include <stdint.h>
 
void xadd2_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a796 */
#include <stdint.h>
 
void cmpxchg_locked_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80518c6 */
#include <stdint.h>
 
void cmov_w_with_code_9_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c7d8 */
#include <stdint.h>
 
void xadd4_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ff70 */
#include <stdint.h>
 
void cmov_w_with_code_2_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8055851 */
#include <stdint.h>
 
void cmov_l_with_code_a_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bdb2 */
#include <stdint.h>
 
void xadd2_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e82a */
#include <stdint.h>
 
void cmov2_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b744 */
#include <stdint.h>
 
void wbinvd_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805673d */
#include <stdint.h>
 
void cmov_l_with_code_e_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056560 */
#include <stdint.h>
 
void cmov_l_with_code_e_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80527c6 */
#include <stdint.h>
 
void cmov_w_with_code_d_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804d887 */
#include <stdint.h>
 
void rdtsc_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8050606 */
#include <stdint.h>
 
void cmov_w_with_code_4_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8053a79 */
#include <stdint.h>
 
void cmov_l_with_code_2_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8056a0f */
#include <stdint.h>
 
void cmov_l_with_code_f_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80560b0 */
#include <stdint.h>
 
void cmov_l_with_code_c_mv_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804baf2 */
#include <stdint.h>
 
void xadd1_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051b9c */
#include <stdint.h>
 
void cmov_w_with_code_a_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fac6 */
#include <stdint.h>
 
void cmov_w_with_code_1_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804b563 */
#include <stdint.h>
 
void invlpg_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804cc7b */
#include <stdint.h>
 
void xadd_locked_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804a5bd */
#include <stdint.h>
 
void cmpxchg5_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f34a */
#include <stdint.h>
 
void cmov5_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804fd9c */
#include <stdint.h>
 
void cmov_w_with_code_2_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805051c */
#include <stdint.h>
 
void cmov_w_with_code_4_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804e0c5 */
#include <stdint.h>
 
void wrmsr_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80545aa */
#include <stdint.h>
 
void cmov_l_with_code_5_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804dfdf */
#include <stdint.h>
 
void wrmsr_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80544c1 */
#include <stdint.h>
 
void cmov_l_with_code_5_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804942b */
#include <stdint.h>
 
void bswap_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x80553ad */
#include <stdint.h>
 
void cmov_l_with_code_9_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804c259 */
#include <stdint.h>
 
void xadd3_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804960d */
#include <stdint.h>
 
void cmpxchg1_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804ecc2 */
#include <stdint.h>
 
void cmov3_constant_complex2 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804bea5 */
#include <stdint.h>
 
void xadd2_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8051506 */
#include <stdint.h>
 
void cmov_w_with_code_8_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8049000 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 36 named .init */
    __asm ("endbr32");
    x86_get_pc_thunk_bx (ebx);
    ebx += 0x10ff3;
    eax = *((ebx - 4));
    if (eax != 0) {
        void (*eax)() ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f706 */
#include <stdint.h>
 
void cmov_w_with_code_0_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804f8e7 */
#include <stdint.h>
 
void cmov_w_with_code_1_mv_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054ff2 */
#include <stdint.h>
 
void cmov_l_with_code_8_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x804aef6 */
#include <stdint.h>
 
void invd_allregs (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8052406 */
#include <stdint.h>
 
void cmov_w_with_code_c_mv_constant_complex1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x805231c */
#include <stdint.h>
 
void cmov_w_with_code_c_mv_constant_simple (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/post_i386_opcodes/ia32_elf/subject.exe @ 0x8054c37 */
#include <stdint.h>
 
void cmov_l_with_code_7_mv_constant_simple (void) {
}
