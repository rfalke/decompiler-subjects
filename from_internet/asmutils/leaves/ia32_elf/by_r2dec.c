/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/leaves/ia32_elf/subject.exe @ 0x8048117 */
#include <stdint.h>
 
uint8_t rotate_left8 (uint8_t value, uint32_t count) {
    const uint8_t mask = (CHAR_BIT * sizeof (value)) - 1;
    count &= mask;
    return (value << count) | (value >> (-count & mask));
}
 
int32_t entry0 (int32_t arg_24h, int32_t arg_2ch) {
    ebx = ebp + 0x2c;
    ecx = 2;
    eax = 5;
    eax = syscall_80h (ebx, ecx, edx, esi, edi, edp);
    ecx = 0x4b000;
    eax = 0x5a;
    eax = sys_old_mmap (0xe);
    esi = eax;
    edi = eax;
    eax = 0;
    do {
        *(es:edi) = al;
        ecx--;
        es:edi++;
    } while (ecx != 0);
    edi = ebp + 0x24;
    fcn_0804805c (eax);
    eax = 1;
    eax = sys_exit (ebx);
    esi ^= *(ebx);
    edi ^= *(edi);
    eax = syscall_cch (eax, ebx, ecx, edx, esi, edi, edp);
    *(ds:eax) += al;
    *(edi) += bh;
    __asm ("lcall 0x4000");
    *(eax) = rotate_left8 (*(eax), 0);
    ah += bl;
    ebx++;
    *((eax + 0x43e2)) += al;
    __asm ("loopne 0x80481bc");
    *(eax) += al;
    al += *(eax);
    *(edx) += al;
    al |= *(edx);
    __asm ("das");
    if (al <= 0) {
        void (*0x80481b6)() ();
    }
    __asm ("bound si, dword [eax]");
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/leaves/ia32_elf/subject.exe @ 0x804804c */
#include <stdint.h>
 
void fcn_0804804c (int32_t arg_8h) {
    edx = ebx * 5;
    edx <<= 7;
    edx += *((esp + 8));
    *((edx + esi)) = al;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/asmutils/leaves/ia32_elf/subject.exe @ 0x804805c */
#include <stdint.h>
 
int32_t fcn_0804805c (int32_t arg_ch) {
label_0:
    ecx = *((esp + 0xc));
    if (cl == 0) {
        void (*0x804805b)() ();
    }
    *(fp_stack--) = *((ebp + 0x10));
    *((esp - 0xd)) = cl;
    eax = *(edi);
    *(fp_stack--) = fp_stack[0];
    *(fp_stack--) = fp_stack[0];
    edx = esp;
    fp_stack[0] *= *((edx + 0x10));
    fp_stack[0] += *((ebp + 0x18));
    *(edx) = fp_stack[0];
    fp_stack--;
    ebx = *(edx);
    fp_stack[0] *= *((edx + 0x14));
    *((ebp + 0x14)) -= fp_stack[0];
    *(edx) = fp_stack[0];
    fp_stack--;
    fcn_0804804c (ecx);
    fp_stack[0] *= *((edx + 0x14));
    fp_stack[0] += *((ebp + 0x1c));
    *(edx) = fp_stack[0];
    fp_stack--;
    fcn_0804804c ();
    edi++;
    if (edi >= 0x8048182) {
        edi -= 8;
    }
    *(fp_stack--) = *((ebp + 4));
    *(fp_stack--) = *(ebp);
    *(fp_stack--) = fp_stack[1];
    *(fp_stack--) = fp_stack[1];
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[0] *= *((edx + 0x10));
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack[0] *= *((edx + 0x14));
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    *((edx - 8)) = fp_stack[0];
    fp_stack--;
    fp_stack[0] *= *((edx + 0x10));
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    fp_stack[0] *= *((edx + 0x14));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    ecx--;
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_0804805c (ecx);
    goto label_0;
    edx = esp;
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((edx + 0x1c));
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0x20));
    fp_stack[2] -= fp_stack[0];
    *(fp_stack--) = fp_stack[3];
    *(fp_stack--) = fp_stack[2];
    fp_tmp_3 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    fp_stack[0] *= fp_stack[4];
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    fp_stack[0] *= *((edx + 0x20));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((edx - 8)) = fp_stack[0];
    fp_stack--;
    fp_tmp_5 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_5;
    fp_stack[0] *= fp_stack[2];
    fp_stack++;
    fp_tmp_6 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    fp_stack[0] *= *((edx + 0x20));
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(esp) = fp_stack[0];
    fp_stack--;
    fcn_0804805c (ecx);
    goto label_0;
    return eax;
}
