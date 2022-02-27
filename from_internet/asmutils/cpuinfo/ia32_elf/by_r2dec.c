/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cpuinfo/ia32_elf/subject.exe @ 0x804807f */
#include <stdint.h>
 
void entry0 (int32_t arg_9h, int32_t arg_bh, int32_t arg_4h) {
    esi = 0x804804c;
    ebp = esp + eax*4 + 4;
    edi = *(esp);
    eax = fcn_08048060 ();
    eax--;
    *((ebp + 0xb)) = al;
    if (eax > 0) {
        eax = *(eax);
        if (ax != 0x742d) {
            if (eax != 0x69742d2d) {
                goto label_1;
            }
        }
        ebp + 0xb = -ebp + 0xb;
    }
label_1:
    __asm ("pushfd");
    ebx = eax;
    eax ^= 0x200000;
    __asm ("popfd");
    __asm ("pushfd");
    if (eax == ebx) {
        goto label_2;
    }
    eax = 0;
    if (al > *((ebp + 0xb))) {
        goto label_3;
    }
    __asm ("cpuid");
    fcn_08048142 ();
    eax = 0x80000000;
    __asm ("cpuid");
    if (eax < 0) {
        fcn_08048142 ();
    }
    if (eax < 2) {
        goto label_0;
    }
    al = 2;
    __asm ("cpuid");
    al--;
    if (al <= 0) {
        goto label_0;
    }
    eax = (int32_t) al;
    eax |= 0x10000000;
    fcn_08048142 ();
    do {
label_0:
        ebx = 0;
        eax = 1;
        eax = sys_exit (ebx);
label_2:
        ecx = esi + 8;
        eax = fcn_080481c8 ();
    } while (1);
label_3:
    __asm ("rdtsc");
    ecx = ebp;
    ebx = 0x804804c;
    eax = 0;
    al = 0xa2;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    __asm ("rdtsc");
    edx = eax;
    eax -= edx;
    eax >>= 1;
    ebx = 0;
    bl = 0xa;
    ecx = ebp + 9;
    *(ecx) = bx;
    do {
        ecx--;
        edx = 0;
        eax = edx:eax / ebx;
        edx = edx:eax % ebx;
        dl |= 0x30;
        *(ecx) = dl;
    } while (eax != 0);
    fcn_080481c8 ();
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cpuinfo/ia32_elf/subject.exe @ 0x8048060 */
#include <stdint.h>
 
void fcn_08048060 (void) {
    eax = 0;
    ecx = eax - 1;
    __asm ("repne scasb al, byte es:[edi]");
    if (*((edi - 5)) == 0x64656570) {
        if (*((edi - 9)) != 0x73757063) {
            goto label_0;
        }
        *(esp) = eax;
    }
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cpuinfo/ia32_elf/subject.exe @ 0x8048142 */
#include <stdint.h>
 
void fcn_08048142 (void) {
    ax = 0;
    edi = eax;
    do {
        fcn_08048157 (eax);
        edi++;
    } while (edi >= 0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cpuinfo/ia32_elf/subject.exe @ 0x8048157 */
#include <stdint.h>
 
uint32_t rotate_left32 (uint32_t value, uint32_t count) {
    const uint32_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t fcn_08048157 (int32_t arg_1h, int32_t arg_bh) {
    ebx = eax;
    eax = rotate_left32 (eax, 8);
    al |= ah;
    fcn_08048203 ();
    eax = ebx;
    eax &= 0xefffffff;
    __asm ("cpuid");
    eax = fcn_080481de ();
    tmp_0 = eax;
    eax = ebx;
    ebx = tmp_0;
    eax = fcn_080481de ();
    tmp_1 = eax;
    eax = ecx;
    ecx = tmp_1;
    eax = fcn_080481de ();
    tmp_2 = eax;
    eax = edx;
    edx = tmp_2;
    eax = fcn_080481de ();
    if ((*((ebp + 0xb)) & 0xff) > 0) {
        if (di == 0) {
            tmp_3 = eax;
            eax = edx;
            edx = tmp_3;
        }
        ecx = ebp + 1;
        *(ecx) = 0x2720;
        fcn_080481c8 ();
        ecx--;
        *(ecx) = ebx;
        fcn_080481c8 ();
        fcn_080481c8 ();
        *(ecx) = edx;
        eax = fcn_080481c8 ();
        *(ecx) = eax;
        fcn_080481c8 ();
        *(ecx) = 0x27;
        fcn_080481c8 ();
    }
    ecx = esi + 0x12;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cpuinfo/ia32_elf/subject.exe @ 0x80481c8 */
#include <stdint.h>
 
void fcn_080481c8 (void) {
    __asm ("pushal");
    edx = ecx;
    edx--;
    do {
        edx++;
    } while (*(edx) >= 9);
    edx -= ecx;
    ebx = 1;
    eax = 4;
    eax = sys_write (0x1, ecx, edx);
    __asm ("popal");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cpuinfo/ia32_elf/subject.exe @ 0x8048203 */
#include <stdint.h>
 
int32_t fcn_08048203 (int32_t arg_8h) {
label_0:
    edx = eax;
    eax = 0;
    ecx = ebp + 8;
    *(ecx) = 0x20;
    do {
        al = 0xf;
        al &= dl;
        edx >>= 4;
        ecx--;
        al -= 0x69;
        __asm ("das");
        *(ecx) = al;
        ebx--;
    } while (ebx > 0);
    edx = ebx;
    edx++;
    void (*0x80481d4)() ();
    __asm ("pushal");
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/cpuinfo/ia32_elf/subject.exe @ 0x80481de */
#include <stdint.h>
 
void fcn_080481de (int32_t arg_8h) {
    __asm ("pushal");
}
