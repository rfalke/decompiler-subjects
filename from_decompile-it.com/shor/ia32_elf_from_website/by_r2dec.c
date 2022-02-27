/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048a30 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 47132 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80488b4 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048a60 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.6635) != 0) {
        goto label_0;
    }
    edx = dtor_idx.6637;
    eax = obj.__DTOR_END__;
    eax -= obj.__DTOR_LIST__;
    eax >>= 2;
    ebx = eax - 1;
    if (edx >= ebx) {
        goto label_1;
    }
    do {
        eax = edx + 1;
        *(obj.dtor_idx.6637) = eax;
        uint32_t (*eax*4 + obj.__DTOR_LIST__)() ();
        edx = dtor_idx.6637;
    } while (edx < ebx);
label_1:
    *(obj.completed.6635) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048ac0 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8054220 */
#include <stdint.h>
 
int32_t do_global_ctors_aux (void) {
    eax = .ctors;
    if (eax == -1) {
        goto label_0;
    }
    ebx = .ctors;
    do {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    } while (eax != -1);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048d63 */
#include <stdint.h>
 
uint32_t quantum_real (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048d7c */
#include <stdint.h>
 
uint32_t quantum_imag (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax += 4;
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048dbe */
#include <stdint.h>
 
int32_t quantum_prob_inline (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_real (eax, eax);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_imag (eax, eax);
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
    fp_stack[0] *= *((ebp - 4));
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] *= *((ebp - 8));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804966a */
#include <stdint.h>
 
int32_t quantum_prob_inline_1 (int32_t arg_8h, size_t arg_ch) {
    size_t var_4h;
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_real (eax, eax);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_imag (eax, eax);
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
    fp_stack[0] *= *((ebp - 4));
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] *= *((ebp - 8));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80496aa */
#include <stdint.h>
 
uint32_t quantum_real_1 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80496c3 */
#include <stdint.h>
 
uint32_t quantum_imag_1 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax += 4;
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049996 */
#include <stdint.h>
 
int32_t quantum_reconstruct_hash (int32_t arg_8h) {
    int32_t var_4h;
    int32_t var_sp_4h;
    int32_t var_8h;
    int32_t var_ch;
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 8));
        edx = *((eax + 0x10));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
        *(eax) = 0;
        *((ebp - 4))++;
        eax = *((ebp + 8));
        ecx = *((eax + 8));
        eax = 1;
        eax <<= cl;
    }
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 8));
        edx = *((eax + 0xc));
        eax = *((ebp - 4));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 8));
        ecx = *((eax + 0xc));
        eax = *((ebp + 8));
        eax = *((ebp - 4));
        quantum_add_hash (eax, ecx, eax);
        *((ebp - 4))++;
        eax = *((ebp + 8));
        eax = *((eax + 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049afa */
#include <stdint.h>
 
int32_t quantum_get_state (int32_t arg_8h, int32_t arg_ch, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_bp_4h;
    int32_t var_4h;
    int32_t var_8h;
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0x18));
    if (eax == 0) {
        eax = *((ebp - 0x18));
        *((ebp - 0x1c)) = eax;
        goto label_0;
    }
    eax = *((ebp + 0x18));
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    eax = quantum_hash64 (eax, edx, eax);
    *((ebp - 4)) = eax;
    while (eax != 0) {
        ecx = *((ebp + 0x1c));
        edx = *((ebp + 0x20));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
        edx = *(eax);
        eax = 1;
        eax -= edx;
        eax <<= 4;
        eax = -eax;
        eax = ecx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = edx;
        ecx ^= *((ebp - 0x14));
        eax ^= *((ebp - 0x18));
        eax |= ecx;
        if (eax == 0) {
            edx = *((ebp + 0x20));
            eax = *((ebp - 4));
            eax <<= 2;
            eax = edx + eax;
            eax--;
            *((ebp - 0x1c)) = eax;
            goto label_0;
        }
        *((ebp - 4))++;
        ecx = *((ebp + 0x18));
        eax = 1;
        eax <<= cl;
        if (eax == *((ebp - 4))) {
            *((ebp - 4)) = 0;
        }
        edx = *((ebp + 0x20));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
    }
    *((ebp - 0x1c)) = 0xffffffff;
label_0:
    eax = *((ebp - 0x1c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049a19 */
#include <stdint.h>
 
int32_t quantum_add_hash (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_8h;
    uint32_t var_bp_4h;
    int32_t var_4h;
    int32_t var_sp_8h;
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *((ebp - 8)) = 0;
    eax = *((ebp + 0x14));
    eax = *((eax + 8));
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    eax = quantum_hash64 (eax, edx, eax);
    *((ebp - 4)) = eax;
    while (eax != 0) {
        *((ebp - 4))++;
        eax = *((ebp + 0x14));
        ecx = *((eax + 8));
        eax = 1;
        eax <<= cl;
        if (eax == *((ebp - 4))) {
            if (*((ebp - 8)) == 0) {
                *((ebp - 4)) = 0;
                *((ebp - 8)) = 1;
            } else {
                *(esp) = 5;
                quantum_error ();
            }
        }
        eax = *((ebp + 0x14));
        edx = *((eax + 0x10));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
    }
    eax = *((ebp + 0x14));
    edx = *((eax + 0x10));
    eax = *((ebp - 4));
    eax <<= 2;
    edx += eax;
    eax = *((ebp + 0x10));
    eax++;
    *(edx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049ab8 */
#include <stdint.h>
 
int32_t quantum_hash64 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_4h;
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    ecx = *((ebp - 0x18));
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    eax = *((ebp - 0x14));
    edx = 0;
    eax ^= ecx;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax *= 0x9e370001;
    *((ebp - 4)) = eax;
    eax = 0x20;
    ecx = 0x20;
    ecx -= *((ebp + 0x10));
    *((ebp - 4)) >>= cl;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804b509 */
#include <stdint.h>
 
int32_t quantum_reconstruct_hash_1 (int32_t arg_8h) {
    int32_t var_4h;
    int32_t var_sp_4h;
    int32_t var_8h;
    int32_t var_ch;
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 8));
        edx = *((eax + 0x10));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
        *(eax) = 0;
        *((ebp - 4))++;
        eax = *((ebp + 8));
        ecx = *((eax + 8));
        eax = 1;
        eax <<= cl;
    }
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 8));
        edx = *((eax + 0xc));
        eax = *((ebp - 4));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 8));
        ecx = *((eax + 0xc));
        eax = *((ebp + 8));
        eax = *((ebp - 4));
        quantum_add_hash (eax, ecx, eax);
        *((ebp - 4))++;
        eax = *((ebp + 8));
        eax = *((eax + 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804b66d */
#include <stdint.h>
 
int32_t quantum_get_state_1 (int32_t arg_8h, int32_t arg_ch, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_bp_4h;
    int32_t var_4h;
    int32_t var_8h;
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0x18));
    if (eax == 0) {
        eax = *((ebp - 0x18));
        *((ebp - 0x1c)) = eax;
        goto label_0;
    }
    eax = *((ebp + 0x18));
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    eax = quantum_hash64 (eax, edx, eax);
    *((ebp - 4)) = eax;
    while (eax != 0) {
        ecx = *((ebp + 0x1c));
        edx = *((ebp + 0x20));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
        edx = *(eax);
        eax = 1;
        eax -= edx;
        eax <<= 4;
        eax = -eax;
        eax = ecx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = edx;
        ecx ^= *((ebp - 0x14));
        eax ^= *((ebp - 0x18));
        eax |= ecx;
        if (eax == 0) {
            edx = *((ebp + 0x20));
            eax = *((ebp - 4));
            eax <<= 2;
            eax = edx + eax;
            eax--;
            *((ebp - 0x1c)) = eax;
            goto label_0;
        }
        *((ebp - 4))++;
        ecx = *((ebp + 0x18));
        eax = 1;
        eax <<= cl;
        if (eax == *((ebp - 4))) {
            *((ebp - 4)) = 0;
        }
        edx = *((ebp + 0x20));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
    }
    *((ebp - 0x1c)) = 0xffffffff;
label_0:
    eax = *((ebp - 0x1c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804b733 */
#include <stdint.h>
 
int32_t quantum_prob_inline_2 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_real (eax, eax);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_imag (eax, eax);
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
    fp_stack[0] *= *((ebp - 4));
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] *= *((ebp - 8));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804b773 */
#include <stdint.h>
 
uint32_t quantum_real_2 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804b78c */
#include <stdint.h>
 
uint32_t quantum_imag_2 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax += 4;
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804b58c */
#include <stdint.h>
 
int32_t quantum_add_hash_1 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_18h;
    int32_t var_14h;
    uint32_t var_8h;
    uint32_t var_bp_4h;
    int32_t var_4h;
    int32_t var_sp_8h;
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *((ebp - 8)) = 0;
    eax = *((ebp + 0x14));
    eax = *((eax + 8));
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    eax = quantum_hash64 (eax, edx, eax);
    *((ebp - 4)) = eax;
    while (eax != 0) {
        *((ebp - 4))++;
        eax = *((ebp + 0x14));
        ecx = *((eax + 8));
        eax = 1;
        eax <<= cl;
        if (eax == *((ebp - 4))) {
            if (*((ebp - 8)) == 0) {
                *((ebp - 4)) = 0;
                *((ebp - 8)) = 1;
            } else {
                *(esp) = 5;
                quantum_error ();
            }
        }
        eax = *((ebp + 0x14));
        edx = *((eax + 0x10));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
    }
    eax = *((ebp + 0x14));
    edx = *((eax + 0x10));
    eax = *((ebp - 4));
    eax <<= 2;
    edx += eax;
    eax = *((ebp + 0x10));
    eax++;
    *(edx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804b62b */
#include <stdint.h>
 
int32_t quantum_hash64_1 (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_4h;
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    ecx = *((ebp - 0x18));
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    eax = *((ebp - 0x14));
    edx = 0;
    eax ^= ecx;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax *= 0x9e370001;
    *((ebp - 4)) = eax;
    eax = 0x20;
    ecx = 0x20;
    ecx -= *((ebp + 0x10));
    *((ebp - 4)) >>= cl;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804c059 */
#include <stdint.h>
 
int32_t dbg_quantum_bitmask (int32_t arg_8h, int32_t arg_ch) {
    long long unsigned int a;
    int32_t var_14h;
    int32_t mask;
    int32_t i;
    int32_t width;
    int * bits;
    /* int quantum_bitmask(long long unsigned int a,int width,int * bits); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *((ebp - 8)) = 0;
    *((ebp - 4)) = 0;
    while (eax < *((ebp + 0x10))) {
        eax = *((ebp - 4));
        eax <<= 2;
        eax += *((ebp + 0x14));
        ecx = *(eax);
        eax = *((ebp - 0x18));
        edx = *((ebp - 0x14));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            ecx = *((ebp - 4));
            eax = 1;
            eax <<= cl;
            *((ebp - 8)) += eax;
        }
        *((ebp - 4))++;
        eax = *((ebp - 4));
    }
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804cd85 */
#include <stdint.h>
 
uint32_t quantum_imag_3 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax += 4;
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804cda1 */
#include <stdint.h>
 
uint32_t quantum_real_3 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804cfe0 */
#include <stdint.h>
 
int32_t quantum_prob_inline_3 (int32_t arg_8h, void * arg_ch) {
    void * var_4h;
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_real (eax, eax);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_imag (eax, eax);
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
    fp_stack[0] *= *((ebp - 4));
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] *= *((ebp - 8));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804d020 */
#include <stdint.h>
 
uint32_t quantum_real_4 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804d039 */
#include <stdint.h>
 
uint32_t quantum_imag_4 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax += 4;
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8050b0e */
#include <stdint.h>
 
uint32_t quantum_real_5 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8050b27 */
#include <stdint.h>
 
uint32_t quantum_imag_5 (int32_t arg_8h) {
    int32_t var_14h;
    int32_t var_4h;
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax += 4;
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x805126a */
#include <stdint.h>
 
int32_t dbg_quantum_prob_inline (int32_t arg_ch) {
    float i;
    float r;
    complex float a;
    int32_t var_4h;
    /* float quantum_prob_inline(complex float a); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    quantum_real ();
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    quantum_imag ();
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
    fp_stack[0] *= *((ebp - 4));
    *(fp_stack--) = *((ebp - 8));
    fp_stack[0] *= *((ebp - 8));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80512c6 */
#include <stdint.h>
 
uint32_t dbg_quantum_real (void) {
    int32_t var_14h;
    float * p;
    complex float a;
    /* float quantum_real(complex float a); */
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80512aa */
#include <stdint.h>
 
uint32_t dbg_quantum_imag (void) {
    int32_t var_14h;
    float * p;
    complex float a;
    /* float quantum_imag(complex float a); */
    eax = ebp + 8;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax += 4;
    eax = *(eax);
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8051af8 */
#include <stdint.h>
 
int32_t dbg_quantum_reconstruct_hash (void) {
    int32_t i;
    quantum_reg * reg;
    int32_t var_sp_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void quantum_reconstruct_hash(quantum_reg * reg); */
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 8));
        edx = *((eax + 0x10));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
        *(eax) = 0;
        *((ebp - 4))++;
        eax = *((ebp + 8));
        ecx = *((eax + 8));
        eax = 1;
        eax <<= cl;
    }
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 8));
        edx = *((eax + 0xc));
        eax = *((ebp - 4));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 8));
        ecx = *((eax + 0xc));
        eax = *((ebp + 8));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 4));
        *((esp + 8)) = eax;
        quantum_add_hash (edx, ecx);
        *((ebp - 4))++;
        eax = *((ebp + 8));
        eax = *((eax + 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8051c5c */
#include <stdint.h>
 
int32_t dbg_quantum_get_state (int32_t arg_8h, size_t arg_ch, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h) {
    int32_t var_1ch;
    long long unsigned int a;
    size_t var_14h;
    int32_t i;
    quantum_reg reg;
    int32_t var_4h;
    int32_t var_8h;
    /* int quantum_get_state(long long unsigned int a,quantum_reg reg); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0x18));
    if (eax == 0) {
        eax = *((ebp - 0x18));
        *((ebp - 0x1c)) = eax;
        goto label_0;
    }
    eax = *((ebp + 0x18));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    eax = quantum_hash64 (eax, edx);
    *((ebp - 4)) = eax;
    while (eax != 0) {
        ecx = *((ebp + 0x1c));
        edx = *((ebp + 0x20));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
        edx = *(eax);
        eax = 1;
        eax -= edx;
        eax <<= 4;
        eax = -eax;
        eax = ecx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = edx;
        ecx ^= *((ebp - 0x14));
        eax ^= *((ebp - 0x18));
        eax |= ecx;
        if (eax == 0) {
            edx = *((ebp + 0x20));
            eax = *((ebp - 4));
            eax <<= 2;
            eax = edx + eax;
            eax--;
            *((ebp - 0x1c)) = eax;
            goto label_0;
        }
        *((ebp - 4))++;
        ecx = *((ebp + 0x18));
        eax = 1;
        eax <<= cl;
        if (eax == *((ebp - 4))) {
            *((ebp - 4)) = 0;
        }
        edx = *((ebp + 0x20));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
    }
    *((ebp - 0x1c)) = 0xffffffff;
label_0:
    eax = *((ebp - 0x1c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8051b7b */
#include <stdint.h>
 
int32_t dbg_quantum_add_hash (int32_t arg_8h, int32_t arg_ch) {
    long long unsigned int a;
    int32_t var_14h;
    int32_t mark;
    int32_t i;
    int32_t pos;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_sp_8h;
    /* void quantum_add_hash(long long unsigned int a,int pos,quantum_reg * reg); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    *((ebp - 8)) = 0;
    eax = *((ebp + 0x14));
    eax = *((eax + 8));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    eax = quantum_hash64 (eax, edx);
    *((ebp - 4)) = eax;
    while (eax != 0) {
        *((ebp - 4))++;
        eax = *((ebp + 0x14));
        ecx = *((eax + 8));
        eax = 1;
        eax <<= cl;
        if (eax == *((ebp - 4))) {
            if (*((ebp - 8)) == 0) {
                *((ebp - 4)) = 0;
                *((ebp - 8)) = 1;
            } else {
                *(esp) = 5;
                quantum_error ();
            }
        }
        eax = *((ebp + 0x14));
        edx = *((eax + 0x10));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
    }
    eax = *((ebp + 0x14));
    edx = *((eax + 0x10));
    eax = *((ebp - 4));
    eax <<= 2;
    edx += eax;
    eax = *((ebp + 0x10));
    eax++;
    *(edx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8051c1a */
#include <stdint.h>
 
int32_t dbg_quantum_hash64 (int32_t arg_8h, int32_t arg_ch) {
    long long unsigned int key;
    int32_t var_14h;
    uint32_t k32;
    int32_t width;
    /* unsigned int quantum_hash64(long long unsigned int key,int width); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    ecx = *((ebp - 0x18));
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    eax = *((ebp - 0x14));
    edx = 0;
    eax ^= ecx;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax *= 0x9e370001;
    *((ebp - 4)) = eax;
    eax = 0x20;
    ecx = 0x20;
    ecx -= *((ebp + 0x10));
    *((ebp - 4)) >>= cl;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804d1a8 */
#include <stdint.h>
 
int32_t dbg_quantum_bmeasure_bitpreserve (void) {
    int32_t var_84h;
    uint32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    quantum_reg out;
    int32_t var_48h;
    int32_t var_44h;
    void * var_40h;
    int32_t var_3ch;
    long long unsigned int pos2;
    int32_t var_34h;
    double r;
    double pa;
    double d;
    int32_t result;
    size_t nmeb;
    int32_t j;
    int32_t i;
    int32_t pos;
    quantum_reg * reg;
    size_t size;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* int quantum_bmeasure_bitpreserve(int pos,quantum_reg * reg); */
    *((ebp - 0x14)) = 0;
    *((ebp - 0x18)) = 0;
    *(fp_stack--) = 0.0;
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (0x82, eax);
    if (eax != 0) {
        *((ebp - 0x70)) = 0;
        goto label_0;
    }
    ecx = *((ebp + 8));
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    *((ebp - 0x38)) = eax;
    *((ebp - 0x34)) = edx;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        eax = ecx;
        eax &= *((ebp - 0x38));
        edx = ebx;
        edx &= *((ebp - 0x34));
        eax |= edx;
        if (eax == 0) {
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            edx += eax;
            eax = *(edx);
            eax = *((edx + 4));
            quantum_prob_inline (eax, eax);
            *(fp_stack--) = *((ebp - 0x28));
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            *((ebp - 0x28)) = fp_stack[0];
            fp_stack--;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
    }
    ax = quantum_frand ();
    *((ebp - 0x30)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x30));
    *(fp_stack--) = *((ebp - 0x28));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (eax > *((ebp - 0xc))) {
        *((ebp - 0x18)) = 1;
    }
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        eax = ecx;
        eax &= *((ebp - 0x38));
        edx = ebx;
        edx &= *((ebp - 0x34));
        eax |= edx;
        if (eax != 0) {
            if (*((ebp - 0x18)) == 0) {
                eax = *((ebp + 0xc));
                edx = *((eax + 0xc));
                eax = *((ebp - 0xc));
                eax <<= 4;
                edx += eax;
                eax = 0;
                *(edx) = eax;
                eax = 0;
                *((edx + 4)) = eax;
            } else {
                eax = *((ebp + 0xc));
            }
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            edx += eax;
            eax = *(edx);
            eax = *((edx + 4));
            quantum_prob_inline (eax, eax);
            *(fp_stack--) = *((ebp - 0x20));
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            *((ebp - 0x20)) = fp_stack[0];
            fp_stack--;
            *((ebp - 0x14))++;
        } else {
            if (*((ebp - 0x18)) != 0) {
                eax = *((ebp + 0xc));
                edx = *((eax + 0xc));
                eax = *((ebp - 0xc));
                eax <<= 4;
                edx += eax;
                eax = 0;
                *(edx) = eax;
                eax = 0;
                *((edx + 4)) = eax;
            } else {
                eax = *((ebp + 0xc));
                edx = *((eax + 0xc));
                eax = *((ebp - 0xc));
                eax <<= 4;
                edx += eax;
                eax = *(edx);
                eax = *((edx + 4));
                quantum_prob_inline (eax, eax);
                *(fp_stack--) = *((ebp - 0x20));
                fp_stack[0] += fp_stack[1];
                fp_stack++;
                *((ebp - 0x20)) = fp_stack[0];
                fp_stack--;
                *((ebp - 0x14))++;
            }
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
    }
    eax = *((ebp - 0x14));
    *((ebp - 0x48)) = eax;
    eax = *((ebp - 0x14));
    eax = calloc (eax, 0x10);
    *((ebp - 0x40)) = eax;
    eax = *((ebp - 0x40));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp - 0x14));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    *((ebp - 0x44)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 0x10));
    *((ebp - 0x3c)) = eax;
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 0x4c)) = eax;
    *((ebp - 0xc)) = 0;
    *((ebp - 0x10)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        *((ebp - 0x6c)) = eax;
        *((ebp - 0x84)) = edx;
        *(fp_stack--) = *((ebp - 0x84));
        *(fp_stack--) = 0.0;
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (eax == 0) {
            if (eax == 0) {
                goto label_1;
            }
            *(fp_stack--) = *((ebp - 0x6c));
            *(fp_stack--) = 0.0;
            fp_tmp_2 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_2;
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (eax == 0) {
                goto label_1;
            }
            if (eax == 0) {
                goto label_2;
            }
        }
label_1:
        edx = *((ebp - 0x40));
        eax = *((ebp - 0x10));
        eax <<= 4;
        ecx = edx + eax;
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        *((ecx + 8)) = eax;
        *((ecx + 0xc)) = edx;
        edx = *((ebp - 0x40));
        eax = *((ebp - 0x10));
        eax <<= 4;
        edx += eax;
        *((ebp - 0x68)) = edx;
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        *(fp_stack--) = *(eax);
        *((ebp - 0x60)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((eax + 4));
        *((ebp - 0x64)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x20));
        fp_stack[0] = sqrt(fp_stack[0]);
        *((ebp - 0x80)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x80));
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        ax = fp_status;
        __asm ("sahf");
        if (eax != 0) {
            if (eax == 0) {
                goto label_3;
            }
        }
        *(fp_stack--) = *((ebp - 0x20));
        *(esp) = fp_stack[0];
        fp_stack--;
        sqrt ();
        *((ebp - 0x80)) = fp_stack[0];
        fp_stack--;
label_3:
        *(fp_stack--) = *((ebp - 0x80));
        *((ebp - 0x5c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x5c));
        *((ebp - 0x84)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x84));
        ecx = 0;
        esi = *((ebp - 0x60));
        ebx = *((ebp - 0x64));
        edx = eax;
        eax = ecx;
        eax = _divsc3 (eax, ebx, edx);
        ecx = eax;
        ebx = edx;
        eax = ecx;
        edx = ebx;
        ecx = *((ebp - 0x68));
        *(ecx) = eax;
        eax = *((ebp - 0x68));
        *((eax + 4)) = edx;
        *((ebp - 0x10))++;
label_2:
        *((ebp - 0xc))++;
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0xc));
    *(esp) = eax;
    quantum_delete_qureg_hashpreserve ();
    edx = *((ebp + 0xc));
    eax = *((ebp - 0x4c));
    *(edx) = eax;
    eax = *((ebp - 0x48));
    *((edx + 4)) = eax;
    eax = *((ebp - 0x44));
    *((edx + 8)) = eax;
    eax = *((ebp - 0x40));
    *((edx + 0xc)) = eax;
    eax = *((ebp - 0x3c));
    *((edx + 0x10)) = eax;
    ecx = *((ebp - 0x18));
    *((ebp - 0x70)) = ecx;
label_0:
    eax = *((ebp - 0x70));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8053d00 */
#include <stdint.h>
 
uint32_t divdc3 (int32_t arg_8h) {
    ecx = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 0x14));
    *(fp_stack--) = *((ebp + 0x1c));
    *(fp_stack--) = *((ebp + 0x24));
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] = abs(fp_stack[0]);
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] = abs(fp_stack[0]);
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    ax = _i686_get_pc_thunk_bx (ebx);
    ebx += 0x22cd;
    __asm ("sahf");
    if (ebx <= 0) {
        goto label_17;
    }
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] /= fp_stack[1];
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] *= fp_stack[1];
    fp_stack[0] += fp_stack[2];
    *(fp_stack--) = fp_stack[5];
    fp_stack[0] *= fp_stack[2];
    fp_stack[0] += fp_stack[5];
    fp_stack[0] /= fp_stack[1];
    *(fp_stack--) = fp_stack[5];
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_tmp_0 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[0] -= fp_stack[6];
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    do {
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if (ebx == 0) {
            goto label_18;
        }
        if (ebx != 0) {
            goto label_19;
        }
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        fp_stack++;
        goto label_1;
label_0:
        fp_stack[5] = fp_stack[0];
        fp_stack--;
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        fp_stack++;
        goto label_1;
label_2:
        fp_stack++;
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_3:
        fp_stack++;
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_4:
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_5:
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_6:
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_7:
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_8:
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
label_1:
        *(ecx) = fp_stack[0];
        fp_stack--;
        eax = ecx;
        *((ecx + 8)) = fp_stack[0];
        fp_stack--;
        return eax;
label_17:
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] /= fp_stack[2];
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += fp_stack[3];
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[6];
        fp_stack[0] /= fp_stack[1];
        fp_tmp_2 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack[0] *= fp_stack[6];
        *(fp_stack--) = fp_stack[5];
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
    } while (1);
label_18:
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    goto label_20;
label_19:
    fp_tmp_5 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_5;
label_20:
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (ebx == 0) {
        goto label_21;
    }
    if (ebx == 0) {
        goto label_0;
    }
label_21:
    *(fp_stack--) = 0.0;
    fp_tmp_6 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    __asm ("fucom st(4)");
    ax = fp_status;
    __asm ("sahf");
    if (ebx == 0) {
        if (ebx == 0) {
            goto label_22;
        }
        fp_tmp_7 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_7;
        __asm ("fucom st(4)");
        ax = fp_status;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        __asm ("sahf");
        if (ebx != 0) {
            goto label_10;
        }
        goto label_23;
    }
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_tmp_8 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    fp_tmp_9 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_9;
    fp_tmp_10 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_10;
    goto label_10;
label_22:
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_tmp_11 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_11;
    fp_tmp_12 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_12;
    fp_tmp_13 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_13;
label_10:
    *(fp_stack--) = fp_stack[5];
    fp_stack[0] -= fp_stack[6];
    *((ebp - 0x10)) = fp_stack[0];
    fp_tmp_14 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_14;
    __asm ("fucom st(0)");
    ax = fp_status;
    fp_tmp_15 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_15;
    __asm ("sahf");
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("setnp dl");
    __asm ("sahf");
    __asm ("setp al");
    dl &= al;
    if (dl == 0) {
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] -= fp_stack[5];
        fp_tmp_16 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_16;
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if (dl != 0) {
            goto label_24;
        }
        if (dl == 0) {
            goto label_25;
        }
        fp_tmp_17 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_17;
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        ax = fp_status;
        __asm ("sahf");
        if (dl == 0) {
            goto label_26;
        }
        if (dl == 0) {
            goto label_27;
        }
    }
label_26:
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] -= fp_stack[3];
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        if (dl != 0) {
            *(fp_stack--) = fp_stack[4];
            fp_stack[0] -= fp_stack[5];
            fp_status = fp_compare(fp_stack[0], fp_stack[0]);
            fp_stack++;
            ax = fp_status;
            __asm ("sahf");
            if (dl == 0) {
                if (dl != 0) {
                    fp_stack++;
                    fp_stack++;
                    fp_stack++;
                    if (dl != 0) {
                        goto label_28;
                    }
                    *(fp_stack--) = 0.0;
                    fp_tmp_18 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_18;
label_16:
                    __asm ("fxam");
                    ax = fp_status;
                    fp_stack++;
                    fp_tmp_19 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_19;
                    fp_stack[0] = abs(fp_stack[0]);
                    if ((ah & 2) != 0) {
                        fp_stack[0] = -fp_stack[0];
                    }
                    *(fp_stack--) = fp_stack[2];
                    fp_stack[0] -= fp_stack[3];
                    fp_tmp_20 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_20;
                    __asm ("fucom st(0)");
                    ax = fp_status;
                    __asm ("sahf");
                    if ((ah & 2) != 0) {
                        goto label_29;
                    }
                    if ((ah & 2) == 0) {
                        goto label_30;
                    }
                    fp_tmp_21 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_21;
                    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
                    fp_stack++;
                    ax = fp_status;
                    __asm ("sahf");
                    if ((ah & 2) != 0) {
                        if ((ah & 2) == 0) {
                            goto label_31;
                        }
                    }
                    *(fp_stack--) = 1.0;
                    fp_tmp_22 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_22;
label_15:
                    __asm ("fxam");
                    ax = fp_status;
                    fp_stack++;
                    fp_tmp_23 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_23;
                    fp_stack[0] = abs(fp_stack[0]);
                    if ((ah & 2) != 0) {
                        fp_stack[0] = -fp_stack[0];
                    }
                    *(fp_stack--) = fp_stack[2];
                    fp_stack[0] *= fp_stack[4];
                    *(fp_stack--) = fp_stack[1];
                    fp_stack[0] *= fp_stack[3];
                    fp_stack[0] += fp_stack[1];
                    fp_stack++;
                    *(fp_stack--) = *((ebx - 0x1a18));
                    fp_stack[1] *= fp_stack[0];
                    fp_tmp_24 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_24;
                    fp_stack[0] *= fp_stack[5];
                    fp_stack++;
                    fp_tmp_25 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_25;
                    fp_stack[0] *= fp_stack[2];
                    fp_stack++;
                    fp_tmp_26 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_26;
                    fp_stack[1] -= fp_stack[0];
                    fp_stack++;
                    fp_stack[0] *= fp_stack[2];
                    fp_stack++;
                    goto label_1;
label_11:
                    fp_tmp_27 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_27;
                    goto label_32;
label_12:
                    fp_tmp_28 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_28;
label_32:
                    __asm ("fucom st(0)");
                    ax = fp_status;
                    __asm ("sahf");
                    if ((ah & 2) == 0) {
                        if ((ah & 2) != 0) {
                            goto label_33;
                        }
                    }
                    *(fp_stack--) = fp_stack[4];
                    fp_stack[0] -= fp_stack[5];
                    *((ebp - 0x10)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = fp_stack[2];
                    fp_stack[0] -= fp_stack[3];
                    fp_tmp_29 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_29;
                    fp_tmp_30 = fp_stack[5];
                    fp_stack[5] = fp_stack[0];
                    fp_stack[0] = fp_tmp_30;
                    fp_tmp_31 = fp_stack[6];
                    fp_stack[6] = fp_stack[0];
                    fp_stack[0] = fp_tmp_31;
                    fp_tmp_32 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_32;
                    fp_tmp_33 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_33;
                    fp_tmp_34 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_34;
                    fp_tmp_35 = fp_stack[5];
                    fp_stack[5] = fp_stack[0];
                    fp_stack[0] = fp_tmp_35;
                    fp_tmp_36 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_36;
                    fp_tmp_37 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_37;
                    fp_tmp_38 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_38;
                    fp_tmp_39 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_39;
                    fp_tmp_40 = fp_stack[5];
                    fp_stack[5] = fp_stack[0];
                    fp_stack[0] = fp_tmp_40;
                    fp_tmp_41 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_41;
                    fp_tmp_42 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_42;
                    fp_tmp_43 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_43;
                    fp_tmp_44 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_44;
                    fp_tmp_45 = fp_stack[5];
                    fp_stack[5] = fp_stack[0];
                    fp_stack[0] = fp_tmp_45;
                    fp_tmp_46 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_46;
                    fp_tmp_47 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_47;
                    fp_tmp_48 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_48;
                } else {
                } else {
                } else {
                } else {
                    fp_tmp_49 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_49;
                    fp_tmp_50 = fp_stack[5];
                    fp_stack[5] = fp_stack[0];
                    fp_stack[0] = fp_tmp_50;
                    fp_tmp_51 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_51;
                    fp_tmp_52 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_52;
                    fp_tmp_53 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_53;
                }
            }
        }
    }
label_9:
    __asm ("fucom st(0)");
    ax = fp_status;
    fp_tmp_54 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_54;
    __asm ("sahf");
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("setnp dl");
    __asm ("sahf");
    __asm ("setp al");
    dl &= al;
    if (dl != 0) {
        goto label_34;
    }
    *(fp_stack--) = fp_stack[4];
    fp_stack[0] -= fp_stack[5];
    fp_tmp_55 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_55;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (dl != 0) {
        goto label_2;
    }
    if (dl == 0) {
        goto label_3;
    }
    fp_tmp_56 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_56;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        goto label_34;
    }
    if (dl == 0) {
        goto label_4;
    }
label_34:
    *(fp_stack--) = *((ebp - 0x10));
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl != 0) {
        goto label_5;
    }
    if (dl == 0) {
        goto label_6;
    }
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] -= fp_stack[1];
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl != 0) {
        goto label_7;
    }
    if (dl == 0) {
        goto label_8;
    }
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    if (dl != 0) {
        goto label_35;
    }
    *(fp_stack--) = 0.0;
    fp_tmp_57 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_57;
label_14:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    fp_tmp_58 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_58;
    fp_stack[0] = abs(fp_stack[0]);
    if ((ah & 2) != 0) {
        fp_stack[0] = -fp_stack[0];
    }
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] -= fp_stack[3];
    fp_tmp_59 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_59;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        goto label_36;
    }
    if ((ah & 2) == 0) {
        goto label_37;
    }
    fp_tmp_60 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_60;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        if ((ah & 2) == 0) {
            goto label_38;
        }
    }
    *(fp_stack--) = 1.0;
    fp_tmp_61 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_61;
label_13:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    fp_tmp_62 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_62;
    fp_stack[0] = abs(fp_stack[0]);
    if ((ah & 2) != 0) {
        fp_stack[0] = -fp_stack[0];
    }
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[3];
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] *= fp_stack[2];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 0.0;
    fp_stack[1] *= fp_stack[0];
    fp_tmp_63 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_63;
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_tmp_64 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_64;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_tmp_65 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_65;
    goto label_1;
label_24:
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_tmp_66 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_66;
    fp_tmp_67 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_67;
    fp_tmp_68 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_68;
    fp_tmp_69 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_69;
    goto label_39;
label_25:
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_tmp_70 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_70;
    fp_tmp_71 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_71;
    fp_tmp_72 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_72;
    fp_tmp_73 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_73;
    goto label_39;
label_27:
    fp_tmp_74 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_74;
    fp_tmp_75 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_75;
    fp_tmp_76 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_76;
    fp_tmp_77 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_77;
label_39:
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] -= fp_stack[4];
    fp_tmp_78 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_78;
    goto label_9;
    if ((ah & 2) == 0) {
label_23:
        goto label_10;
    }
    fp_tmp_79 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_79;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) == 0) {
        goto label_11;
    }
    if ((ah & 2) != 0) {
        goto label_12;
    }
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    goto label_40;
label_33:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_80 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_80;
    fp_tmp_81 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_81;
label_40:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = *((ebx - 0x1a18));
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = *((ebx - 0x1a14));
    }
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_tmp_82 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_82;
    goto label_1;
label_36:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_83 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_83;
    fp_tmp_84 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_84;
    goto label_41;
label_37:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_85 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_85;
    fp_tmp_86 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_86;
    goto label_41;
label_38:
    fp_tmp_87 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_87;
    fp_tmp_88 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_88;
label_41:
    *(fp_stack--) = 0.0;
    fp_tmp_89 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_89;
    fp_tmp_90 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_90;
    fp_tmp_91 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_91;
    goto label_13;
label_35:
    *(fp_stack--) = 1.0;
    fp_tmp_92 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_92;
    goto label_14;
label_29:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_93 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_93;
    fp_tmp_94 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_94;
    goto label_42;
label_30:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_95 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_95;
    fp_tmp_96 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_96;
    goto label_42;
label_31:
    fp_tmp_97 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_97;
    fp_tmp_98 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_98;
label_42:
    *(fp_stack--) = 0.0;
    fp_tmp_99 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_99;
    fp_tmp_100 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_100;
    fp_tmp_101 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_101;
    goto label_15;
label_28:
    *(fp_stack--) = 1.0;
    fp_tmp_102 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_102;
    goto label_16;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804cb9a */
#include <stdint.h>
 
int32_t dbg_quantum_gate_counter (void) {
    int32_t inc;
    /* int quantum_gate_counter(int inc); */
    if (*((ebp + 8)) > 0) {
        eax = counter.4541;
        eax += *((ebp + 8));
        *(obj.counter.4541) = eax;
    } else {
        if (*((ebp + 8)) >= 0) {
            goto label_0;
        }
        *(obj.counter.4541) = 0;
    }
label_0:
    eax = counter.4541;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80519b9 */
#include <stdint.h>
 
int32_t dbg_quantum_dot_product (void) {
    int32_t var_1ch;
    complex float f;
    int32_t var_14h;
    int32_t j;
    int32_t i;
    quantum_reg * reg1;
    quantum_reg * reg2;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_10h;
    int32_t var_sp_14h;
    int32_t var_sp_18h;
    /* complex float quantum_dot_product(quantum_reg * reg1,quantum_reg * reg2); */
    eax = 0;
    *((ebp - 0x18)) = eax;
    eax = 0;
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax != 0) {
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_reconstruct_hash ();
    }
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 8));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        edx = *((ebp + 0xc));
        eax = *(edx);
        *((esp + 8)) = eax;
        eax = *((edx + 4));
        *((esp + 0xc)) = eax;
        eax = *((edx + 8));
        eax = *((edx + 0xc));
        eax = *((edx + 0x10));
        eax = quantum_get_state (eax, ebx);
        *((ebp - 0x10)) = eax;
        if (*((ebp - 0x10)) >= 0) {
            eax = *((ebp + 8));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            edx += eax;
            eax = *(edx);
            *(esp) = eax;
            eax = *((edx + 4));
            eax = quantum_conj (eax);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            ecx = eax;
            ebx = edx;
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x10));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            esi = ecx;
            ecx = ebx;
            eax = _mulsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *((ebp - 0x1c)) = eax;
            *(fp_stack--) = *((ebp - 0x1c));
            *((ebp - 0x1c)) = edx;
            *(fp_stack--) = *((ebp - 0x1c));
            *(fp_stack--) = *((ebp - 0x18));
            *(fp_stack--) = *((ebp - 0x14));
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] += fp_stack[3];
            fp_stack++;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            *((ebp - 0x1c)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x1c));
            *((ebp - 0x1c)) = fp_stack[0];
            fp_stack--;
            edx = *((ebp - 0x1c));
            *((ebp - 0x18)) = eax;
            *((ebp - 0x14)) = edx;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 8));
        eax = *((eax + 4));
    }
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804aa4b */
#include <stdint.h>
 
int32_t dbg_quantum_swaptheleads_omuln_controlled (void) {
    int32_t i;
    int32_t control;
    int32_t width;
    quantum_reg * reg;
    int32_t var_sp_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void quantum_swaptheleads_omuln_controlled(int control,int width,quantum_reg * reg); */
    *((ebp - 4)) = 0;
    while (eax < *((ebp + 0xc))) {
        eax = *((ebp + 0xc));
        eax += eax;
        eax += *((ebp - 4));
        ecx = eax + 2;
        edx = *((ebp - 4));
        eax = *((ebp + 0xc));
        edx = eax + edx;
        eax = *((ebp + 0x10));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = ecx;
        *((esp + 4)) = edx;
        eax = *((ebp + 8));
        *(esp) = eax;
        quantum_toffoli ();
        edx = *((ebp - 4));
        eax = *((ebp + 0xc));
        ecx = eax + edx;
        eax = *((ebp + 0xc));
        eax += eax;
        eax += *((ebp - 4));
        edx = eax + 2;
        eax = *((ebp + 0x10));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = ecx;
        *((esp + 4)) = edx;
        eax = *((ebp + 8));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0xc));
        eax += eax;
        eax += *((ebp - 4));
        ecx = eax + 2;
        edx = *((ebp - 4));
        eax = *((ebp + 0xc));
        edx = eax + edx;
        eax = *((ebp + 0x10));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = ecx;
        *((esp + 4)) = edx;
        eax = *((ebp + 8));
        *(esp) = eax;
        quantum_toffoli ();
        *((ebp - 4))++;
        eax = *((ebp - 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8050b44 */
#include <stdint.h>
 
int32_t dbg_quantum_matrix2qureg (void * arg_8h) {
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    quantum_reg reg;
    int32_t var_1ch;
    int32_t var_18h;
    void * var_14h;
    void * var_10h;
    size_t nmeb;
    int32_t j;
    int32_t i;
    quantum_matrix * m;
    int32_t width;
    size_t size;
    /* quantum_reg quantum_matrix2qureg(quantum_matrix * m,int width); */
    *((ebp - 0xc)) = 0;
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    if (eax != 1) {
        *(esp) = 0x10000;
        quantum_error ();
    }
    eax = *((ebp + 0x10));
    *((ebp - 0x20)) = eax;
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 8));
        eax = *((ebp - 4));
        eax <<= 3;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        *((ebp - 0x28)) = eax;
        *((ebp - 0x2c)) = edx;
        *(fp_stack--) = *((ebp - 0x2c));
        *(fp_stack--) = 0.0;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (eax == 0) {
            if (eax == 0) {
                goto label_0;
            }
            *(fp_stack--) = *((ebp - 0x28));
            *(fp_stack--) = 0.0;
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (eax == 0) {
                goto label_0;
            }
            if (eax == 0) {
                goto label_1;
            }
        }
label_0:
        *((ebp - 0xc))++;
label_1:
        *((ebp - 4))++;
        eax = *((ebp + 0xc));
        eax = *(eax);
    }
    eax = *((ebp - 0xc));
    *((ebp - 0x1c)) = eax;
    eax = *((ebp + 0x10));
    eax += 2;
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0xc));
    eax = calloc (eax, 0x10);
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x14));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp - 0xc));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    ecx = *((ebp - 0x18));
    eax = 1;
    eax <<= cl;
    eax = calloc (eax, 4);
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    ecx = *((ebp - 0x18));
    eax = 4;
    eax <<= cl;
    *(esp) = eax;
    quantum_memman ();
    *((ebp - 4)) = 0;
    *((ebp - 8)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 8));
        eax = *((ebp - 4));
        eax <<= 3;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        *((ebp - 0x24)) = eax;
        *((ebp - 0x2c)) = edx;
        *(fp_stack--) = *((ebp - 0x2c));
        *(fp_stack--) = 0.0;
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (eax == 0) {
            if (eax == 0) {
                goto label_2;
            }
            *(fp_stack--) = *((ebp - 0x24));
            *(fp_stack--) = 0.0;
            fp_tmp_3 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_3;
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (eax == 0) {
                goto label_2;
            }
            if (eax == 0) {
                goto label_3;
            }
        }
label_2:
        edx = *((ebp - 0x14));
        eax = *((ebp - 8));
        eax <<= 4;
        ecx = edx + eax;
        eax = *((ebp - 4));
        edx = *((ebp - 4));
        edx >>= 0x1f;
        *((ecx + 8)) = eax;
        *((ecx + 0xc)) = edx;
        edx = *((ebp - 0x14));
        eax = *((ebp - 8));
        eax <<= 4;
        ecx = edx + eax;
        eax = *((ebp + 0xc));
        edx = *((eax + 8));
        eax = *((ebp - 4));
        eax <<= 3;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        *(ecx) = edx;
        *((ecx + 4)) = eax;
        *((ebp - 8))++;
label_3:
        *((ebp - 4))++;
        eax = *((ebp + 0xc));
        eax = *(eax);
    }
    eax = *((ebp - 0x20));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0x1c));
    edx = *((ebp + 8));
    *((edx + 4)) = eax;
    eax = *((ebp - 0x18));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp - 0x14));
    edx = *((ebp + 8));
    *((edx + 0xc)) = eax;
    eax = *((ebp - 0x10));
    edx = *((ebp + 8));
    *((edx + 0x10)) = eax;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80522d8 */
#include <stdint.h>
 
int32_t dbg_quantum_matrix_qureg (size_t arg_8h, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    double t;
    int32_t var_3ch;
    quantum_reg tmp;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    quantum_reg reg2;
    size_t nmeb;
    int32_t var_1ch;
    void * var_18h;
    int32_t var_14h;
    long long unsigned int i;
    void * var_ch;
    int32_t var_bp_8h;
    quantum_reg (*)() A;
    quantum_reg * reg;
    int32_t var_4h_2;
    size_t size;
    int32_t var_8h;
    /* quantum_reg quantum_matrix_qureg(quantum_reg (*)() A,double t,quantum_reg * reg); */
    eax = *((ebp + 0x10));
    *((ebp - 0x40)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x3c)) = eax;
    eax = *((ebp + 0x18));
    eax = *(eax);
    *((ebp - 0x24)) = eax;
    ecx = *((ebp - 0x24));
    eax = 1;
    eax <<= cl;
    *((ebp - 0x20)) = eax;
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x14)) = 0;
    eax = *((ebp - 0x20));
    eax = calloc (eax, 0x10);
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0x18));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp - 0x20));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    *((ebp - 0x10)) = 0;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
label_0:
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x10));
        eax <<= 4;
        ecx = edx + eax;
        eax = *((ebp - 0x10));
        edx = *((ebp - 0xc));
        *((ecx + 8)) = eax;
        *((ecx + 0xc)) = edx;
        ecx = ebp - 0x68;
        *(fp_stack--) = *((ebp - 0x40));
        *((esp + 0xc)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x10));
        edx = *((ebp - 0xc));
        eax = *((ebp + 0xc));
        void (*eax)(uint32_t, uint32_t, uint32_t) (ecx, eax, edx);
        eax = *((ebp - 0x68));
        *((ebp - 0x38)) = eax;
        eax = *((ebp - 0x64));
        *((ebp - 0x34)) = eax;
        eax = *((ebp - 0x60));
        *((ebp - 0x30)) = eax;
        eax = *((ebp - 0x5c));
        *((ebp - 0x2c)) = eax;
        eax = *((ebp - 0x58));
        *((ebp - 0x28)) = eax;
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x10));
        eax <<= 4;
        esi = edx + eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = ebp - 0x38;
        *(esp) = eax;
        eax = quantum_dot_product_noconj ();
        ecx = eax;
        ebx = edx;
        eax = ecx;
        edx = ebx;
        *(esi) = eax;
        *((esi + 4)) = edx;
        eax = ebp - 0x38;
        *(esp) = eax;
        quantum_delete_qureg ();
        *((ebp - 0x10))++;
        *((ebp - 0xc)) += 0;
        eax = *((ebp + 0x18));
        ecx = *(eax);
        eax = 1;
        eax <<= cl;
        *((ebp - 0x70)) = eax;
        edx = eax;
        edx >>= 0x1f;
        *((ebp - 0x6c)) = edx;
        eax = *((ebp - 0x6c));
    }
    edx = *((ebp - 0x6c));
    if (edx < *((ebp - 0xc))) {
        goto label_1;
    }
    eax = *((ebp - 0x70));
    if (eax > *((ebp - 0x10))) {
        goto label_0;
    }
label_1:
    eax = *((ebp - 0x24));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0x20));
    edx = *((ebp + 8));
    *((edx + 4)) = eax;
    eax = *((ebp - 0x1c));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp - 0x18));
    edx = *((ebp + 8));
    *((edx + 0xc)) = eax;
    eax = *((ebp - 0x14));
    edx = *((ebp + 8));
    *((edx + 0x10)) = eax;
    eax = *((ebp + 8));
    esp = ebp - 8;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804a3b3 */
#include <stdint.h>
 
int32_t dbg_quantum_unbounded_toffoli (int32_t arg_10h) {
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_34h;
    int32_t j;
    int32_t i;
    int * controls;
    int32_t target;
    va_list bits;
    int32_t controlling;
    quantum_reg * reg;
    /* void quantum_unbounded_toffoli(int controlling,quantum_reg * reg,va_args ...); */
    eax = *((ebp + 8));
    eax <<= 2;
    eax = malloc (eax);
    *((ebp - 0x1c)) = eax;
    if (*((ebp - 0x1c)) == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp + 8));
    eax <<= 2;
    *(esp) = eax;
    quantum_memman ();
    eax = ebp + 0x10;
    *((ebp - 0x14)) = eax;
    *((ebp - 0x20)) = 0;
    while (eax < *((ebp + 8))) {
        eax = *((ebp - 0x20));
        eax <<= 2;
        ecx = eax;
        ecx += *((ebp - 0x1c));
        edx = *((ebp - 0x14));
        eax = edx + 4;
        *((ebp - 0x14)) = eax;
        eax = edx;
        eax = *(eax);
        *(ecx) = eax;
        *((ebp - 0x20))++;
        eax = *((ebp - 0x20));
    }
    edx = *((ebp - 0x14));
    eax = edx + 4;
    *((ebp - 0x14)) = eax;
    eax = edx;
    eax = *(eax);
    *((ebp - 0x18)) = eax;
    *((ebp - 0x20)) = 0;
    goto label_1;
label_0:
    *((ebp - 0x24)) = 0;
    while (al != 0) {
        *((ebp - 0x24))++;
        eax = *((ebp - 0x24));
        if (eax >= *((ebp + 8))) {
            goto label_2;
        }
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x20));
        eax <<= 4;
        eax = edx + eax;
        ebx = *((eax + 8));
        esi = *((eax + 0xc));
        eax = *((ebp - 0x24));
        eax <<= 2;
        eax += *((ebp - 0x1c));
        ecx = *(eax);
        eax = ebx;
        edx = esi;
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
    }
label_2:
    eax = *((ebp - 0x24));
    if (eax == *((ebp + 8))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x20));
        eax <<= 4;
        edx += eax;
        *((ebp - 0x34)) = edx;
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x20));
        eax <<= 4;
        eax = edx + eax;
        esi = *((eax + 8));
        edi = *((eax + 0xc));
        ecx = *((ebp - 0x18));
        *((ebp - 0x40)) = 1;
        *((ebp - 0x3c)) = 0;
        eax = *((ebp - 0x40));
        edx = *((ebp - 0x3c));
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        ecx = eax;
        ebx = edx;
        eax = esi;
        eax ^= ecx;
        edx = edi;
        edx ^= ebx;
        ecx = *((ebp - 0x34));
        *((ecx + 8)) = eax;
        *((ecx + 0xc)) = edx;
    }
    *((ebp - 0x20))++;
label_1:
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    if (eax > *((ebp - 0x20))) {
        goto label_0;
    }
    eax = *((ebp - 0x1c));
    free (eax);
    eax = *((ebp + 8));
    eax <<= 2;
    eax = -eax;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 0xc));
    *(esp) = eax;
    quantum_decohere ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8054170 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804a130 */
#include <stdint.h>
 
uint32_t dbg_quantum_cnot (void) {
    char * var_30h;
    char * var_2ch;
    int32_t var_24h;
    int32_t qec;
    int32_t i;
    int32_t control;
    int32_t target;
    quantum_reg * reg;
    char * var_4h;
    char * var_8h;
    /* void quantum_cnot(int control,int target,quantum_reg * reg); */
    *((esp + 4)) = 0;
    eax = ebp - 0x18;
    *(esp) = eax;
    quantum_qec_get_status ();
    eax = *((ebp - 0x18));
    if (eax != 0) {
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        quantum_cnot_ft ();
        goto label_0;
    }
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (1, eax);
    if (eax != 0) {
        goto label_0;
    }
    *((ebp - 0x14)) = 0;
    while (eax > *((ebp - 0x14))) {
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x14));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            edx += eax;
            *((ebp - 0x24)) = edx;
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            eax = edx + eax;
            esi = *((eax + 8));
            edi = *((eax + 0xc));
            ecx = *((ebp + 0xc));
            *((ebp - 0x30)) = 1;
            *((ebp - 0x2c)) = 0;
            eax = *((ebp - 0x30));
            edx = *((ebp - 0x2c));
            __asm ("shld edx, eax, cl");
            eax <<= cl;
            if ((cl & 0x20) != 0) {
                edx = eax;
                eax = 0;
            }
            ecx = eax;
            ebx = edx;
            eax = esi;
            eax ^= ecx;
            edx = edi;
            edx ^= ebx;
            ecx = *((ebp - 0x24));
            *((ecx + 8)) = eax;
            *((ecx + 0xc)) = edx;
        }
        *((ebp - 0x14))++;
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_decohere ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8052462 */
#include <stdint.h>
 
int32_t dbg_quantum_scalar_qureg (int32_t arg_ch) {
    int32_t i;
    complex float r;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* void quantum_scalar_qureg(complex float r,quantum_reg * reg); */
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        esi = edx + eax;
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        ebx = edx;
        ecx = eax;
        edx = *((ebp + 8));
        eax = *((ebp + 0xc));
        eax = _mulsc3 (eax, ecx, edx);
        ecx = eax;
        ebx = edx;
        eax = ecx;
        edx = ebx;
        *(esi) = eax;
        *((esi + 4)) = edx;
        *((ebp - 0xc))++;
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804f34c */
#include <stdint.h>
 
int32_t dbg_muln (void) {
    int32_t L;
    int32_t i;
    int32_t N;
    int32_t a;
    int32_t ctl;
    int32_t width;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_sp_8h;
    int32_t var_ch;
    /* void muln(int N,int a,int ctl,int width,quantum_reg * reg); */
    eax = *((ebp + 0x14));
    eax += eax;
    eax++;
    *((ebp - 8)) = eax;
    eax = *((ebp + 0x14));
    eax++;
    edx = eax + eax;
    eax = *((ebp + 0x18));
    *((esp + 0xc)) = eax;
    eax = *((ebp - 8));
    *((esp + 8)) = eax;
    *((esp + 4)) = edx;
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_toffoli ();
    edx = *((ebp + 0xc));
    eax = *((ebp + 0xc));
    edx >>= 0x1f;
    eax = *(edx:eax) / ebp + 8;
    edx = *(edx:eax) % ebp + 8;
    eax = *((ebp + 0x18));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 8)) = eax;
    eax = *((ebp - 8));
    *((esp + 4)) = eax;
    *(esp) = edx;
    emul ();
    eax = *((ebp + 0x14));
    eax++;
    edx = eax + eax;
    eax = *((ebp + 0x18));
    *((esp + 0xc)) = eax;
    eax = *((ebp - 8));
    *((esp + 8)) = eax;
    *((esp + 4)) = edx;
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_toffoli ();
    *((ebp - 4)) = 1;
    while (eax < *((ebp + 0x14))) {
        eax = *((ebp + 0x14));
        eax++;
        eax += eax;
        edx = eax;
        edx += *((ebp - 4));
        eax = *((ebp + 0x18));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 8));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp + 0x10));
        *(esp) = eax;
        quantum_toffoli ();
        ecx = *((ebp - 4));
        eax = *((ebp + 0xc));
        edx = *((ebp + 0xc));
        edx <<= cl;
        eax = edx;
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp + 8;
        edx = *(edx:eax) % ebp + 8;
        eax = *((ebp + 0x18));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp + 8));
        *(esp) = eax;
        add_mod_n ();
        eax = *((ebp + 0x14));
        eax++;
        eax += eax;
        edx = eax;
        edx += *((ebp - 4));
        eax = *((ebp + 0x18));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 8));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp + 0x10));
        *(esp) = eax;
        quantum_toffoli ();
        *((ebp - 4))++;
        eax = *((ebp - 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804a252 */
#include <stdint.h>
 
uint32_t dbg_quantum_toffoli (void) {
    char * var_30h;
    char * var_2ch;
    int32_t var_24h;
    int32_t qec;
    int32_t i;
    int32_t control1;
    int32_t control2;
    int32_t target;
    quantum_reg * reg;
    char * var_4h;
    char * var_8h;
    file* var_ch;
    /* void quantum_toffoli(int control1,int control2,int target,quantum_reg * reg); */
    *((esp + 4)) = 0;
    eax = ebp - 0x18;
    *(esp) = eax;
    quantum_qec_get_status ();
    eax = *((ebp - 0x18));
    if (eax != 0) {
        eax = *((ebp + 0x14));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        quantum_toffoli_ft ();
        goto label_0;
    }
    eax = *((ebp + 0x10));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (2, eax);
    if (eax != 0) {
        goto label_0;
    }
    *((ebp - 0x14)) = 0;
    while (eax > *((ebp - 0x14))) {
        eax = *((ebp + 0x14));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x14));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            eax = *((ebp + 0x14));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 0xc));
            eax = *((eax + 8));
            ecx = *((ebp + 0xc));
            __asm ("shrd eax, edx, cl");
            edx >>= cl;
            if ((cl & 0x20) != 0) {
                eax = edx;
                edx = 0;
            }
            eax &= 1;
            if (al == 0) {
                goto label_1;
            }
            eax = *((ebp + 0x14));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            edx += eax;
            *((ebp - 0x24)) = edx;
            eax = *((ebp + 0x14));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            eax = edx + eax;
            esi = *((eax + 8));
            edi = *((eax + 0xc));
            ecx = *((ebp + 0x10));
            *((ebp - 0x30)) = 1;
            *((ebp - 0x2c)) = 0;
            eax = *((ebp - 0x30));
            edx = *((ebp - 0x2c));
            __asm ("shld edx, eax, cl");
            eax <<= cl;
            if ((cl & 0x20) != 0) {
                edx = eax;
                eax = 0;
            }
            ecx = eax;
            ebx = edx;
            eax = esi;
            eax ^= ecx;
            edx = edi;
            edx ^= ebx;
            ecx = *((ebp - 0x24));
            *((ecx + 8)) = eax;
            *((ecx + 0xc)) = edx;
        }
label_1:
        *((ebp - 0x14))++;
        eax = *((ebp + 0x14));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x14));
    *(esp) = eax;
    quantum_decohere ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80513da */
#include <stdint.h>
 
int32_t dbg_quantum_print_hash (int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t i;
    quantum_reg reg;
    uint64_t var_4h;
    int32_t var_sp_8h;
    int32_t var_ch;
    int32_t var_10h;
    /* void quantum_print_hash(quantum_reg reg); */
    *((ebp - 8)) = 0;
    while (eax > *((ebp - 8))) {
        if (*((ebp - 8)) != 0) {
            ecx = *((ebp + 0x14));
            edx = *((ebp + 0x18));
            eax = *((ebp - 8));
            eax <<= 2;
            eax = edx + eax;
            edx = *(eax);
            eax = 1;
            eax -= edx;
            eax <<= 4;
            eax = -eax;
            eax = ecx + eax;
            ecx = *((eax + 8));
            ebx = *((eax + 0xc));
            edx = *((ebp + 0x18));
            eax = *((ebp - 8));
            eax <<= 2;
            eax = edx + eax;
            eax--;
            *((esp + 0xc)) = ecx;
            *((esp + 0x10)) = ebx;
            *((esp + 8)) = eax;
            eax = *((ebp - 8));
            *((esp + 4)) = eax;
            printf ("%i: %i %llu\n");
        }
        *((ebp - 8))++;
        ecx = *((ebp + 0x10));
        eax = 1;
        eax <<= cl;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804fa05 */
#include <stdint.h>
 
int32_t dbg_quantum_sigma_x_ft (void) {
    float lambda;
    int32_t tmp;
    int32_t target;
    quantum_reg * reg;
    char * var_sp_4h;
    char * var_sp_8h;
    /* void quantum_sigma_x_ft(int target,quantum_reg * reg); */
    eax = type;
    *((ebp - 4)) = eax;
    *(obj.type) = 0;
    quantum_get_decoherence ();
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    eax = 0;
    *(esp) = eax;
    quantum_set_decoherence ();
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    quantum_sigma_x ();
    eax = width;
    edx = width;
    edx += *((ebp + 8));
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    *(esp) = edx;
    quantum_sigma_x ();
    eax = *((ebp - 8));
    *(esp) = eax;
    quantum_set_decoherence ();
    eax = width;
    eax += eax;
    edx = eax;
    edx += *((ebp + 8));
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    *(esp) = edx;
    quantum_sigma_x ();
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0;
    *(esp) = 1;
    quantum_qec_counter ();
    eax = *((ebp - 4));
    *(obj.type) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048e84 */
#include <stdint.h>
 
int32_t dbg_quantum_get_decoherence (void) {
    int32_t var_4h;
    /* float quantum_get_decoherence(); */
    eax = quantum_lambda;
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048e97 */
#include <stdint.h>
 
int32_t dbg_quantum_set_decoherence (void) {
    float l;
    /* void quantum_set_decoherence(float l); */
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = 0.0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (? != ?) {
        if (? == ?) {
            goto label_0;
        }
    }
    *(obj.quantum_status) = 1;
    eax = *((ebp + 8));
    *(obj.quantum_lambda) = eax;
    goto label_1;
label_0:
    *(obj.quantum_status) = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804a535 */
#include <stdint.h>
 
uint32_t dbg_quantum_sigma_x (void) {
    void * var_30h;
    void * var_2ch;
    int32_t var_24h;
    int32_t qec;
    int32_t i;
    int32_t target;
    quantum_reg * reg;
    char * var_4h;
    /* void quantum_sigma_x(int target,quantum_reg * reg); */
    *((esp + 4)) = 0;
    eax = ebp - 0x18;
    *(esp) = eax;
    quantum_qec_get_status ();
    eax = *((ebp - 0x18));
    if (eax != 0) {
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        quantum_sigma_x_ft ();
        goto label_0;
    }
    eax = *((ebp + 8));
    eax = quantum_objcode_put (3, eax);
    if (eax != 0) {
        goto label_0;
    }
    *((ebp - 0x14)) = 0;
    while (eax > *((ebp - 0x14))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x14));
        eax <<= 4;
        edx += eax;
        *((ebp - 0x24)) = edx;
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x14));
        eax <<= 4;
        eax = edx + eax;
        esi = *((eax + 8));
        edi = *((eax + 0xc));
        ecx = *((ebp + 8));
        *((ebp - 0x30)) = 1;
        *((ebp - 0x2c)) = 0;
        eax = *((ebp - 0x30));
        edx = *((ebp - 0x2c));
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        ecx = eax;
        ebx = edx;
        eax = esi;
        eax ^= ecx;
        edx = edi;
        edx ^= ebx;
        ecx = *((ebp - 0x24));
        *((ecx + 8)) = eax;
        *((ecx + 0xc)) = edx;
        *((ebp - 0x14))++;
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0xc));
    *(esp) = eax;
    quantum_decohere ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804f96e */
#include <stdint.h>
 
int32_t dbg_quantum_qec_counter (void) {
    int32_t inc;
    int32_t frequency;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    /* int quantum_qec_counter(int inc,int frequency,quantum_reg * reg); */
    if (*((ebp + 8)) > 0) {
        eax = counter.2126;
        eax += *((ebp + 8));
        *(obj.counter.2126) = eax;
    } else {
        if (*((ebp + 8)) >= 0) {
            goto label_0;
        }
        *(obj.counter.2126) = 0;
    }
label_0:
    if (*((ebp + 0xc)) > 0) {
        eax = *((ebp + 0xc));
        *(obj.freq.2127) = eax;
    }
    edx = counter.2126;
    eax = *(obj.freq.2127);
    if (edx >= eax) {
        *(obj.counter.2126) = 0;
        edx = width;
        ecx = type;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        *(esp) = ecx;
        quantum_qec_decode ();
        edx = width;
        ecx = type;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        *(esp) = ecx;
        quantum_qec_encode ();
    }
    eax = counter.2126;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048c63 */
#include <stdint.h>
 
int32_t dbg_quantum_getwidth (void) {
    int32_t i;
    int32_t n;
    /* int quantum_getwidth(int n); */
    *((ebp - 4)) = 1;
    while (eax < *((ebp + 8))) {
        *((ebp - 4))++;
        ecx = *((ebp - 4));
        eax = 1;
        eax <<= cl;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804c382 */
#include <stdint.h>
 
int32_t dbg_quantum_r_y (void) {
    int32_t var_3ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    quantum_matrix m;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_bp_4h;
    int32_t target;
    float gamma;
    quantum_reg * reg;
    int32_t var_4h_2;
    void * var_4h;
    int32_t var_8h;
    int32_t var_sp_10h;
    /* void quantum_r_y(int target,float gamma,quantum_reg * reg); */
    *(fp_stack--) = *((ebp + 0xc));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (8, eax);
    if (eax == 0) {
        eax = ebp - 0x28;
        *((esp + 8)) = 2;
        *((esp + 4)) = 2;
        quantum_new_matrix (eax);
        eax = *((ebp - 0x28));
        *((ebp - 0x14)) = eax;
        eax = *((ebp - 0x24));
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0x20));
        *((ebp - 0xc)) = eax;
        ebx = *((ebp - 0xc));
        *(fp_stack--) = *((ebp + 0xc));
        *(fp_stack--) = *(0x8054350);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        cos ();
        *((ebp - 0x2c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x2c));
        *((ebp - 0x3c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x3c));
        edx = 0;
        *(ebx) = eax;
        *((ebx + 4)) = edx;
        eax = *((ebp - 0xc));
        ebx = eax + 8;
        *(fp_stack--) = *((ebp + 0xc));
        *(fp_stack--) = *(0x8054354);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        sin ();
        *((ebp - 0x2c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x2c));
        *((ebp - 0x3c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x3c));
        edx = 0;
        *(ebx) = eax;
        *((ebx + 4)) = edx;
        eax = *((ebp - 0xc));
        ebx = eax + 0x10;
        *(fp_stack--) = *((ebp + 0xc));
        *(fp_stack--) = *(0x8054350);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        sin ();
        *((ebp - 0x2c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x2c));
        *((ebp - 0x3c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x3c));
        edx = 0;
        *(ebx) = eax;
        *((ebx + 4)) = edx;
        eax = *((ebp - 0xc));
        ebx = eax + 0x18;
        *(fp_stack--) = *((ebp + 0xc));
        *(fp_stack--) = *(0x8054350);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        cos ();
        *((ebp - 0x2c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x2c));
        *((ebp - 0x3c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x3c));
        edx = 0;
        *(ebx) = eax;
        *((ebx + 4)) = edx;
        eax = *((ebp + 0x10));
        *((esp + 0x10)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp - 0xc));
        eax = *((ebp + 8));
        quantum_gate1 (eax);
        eax = ebp - 0x14;
        *(esp) = eax;
        quantum_delete_matrix ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e6c3 */
#include <stdint.h>
 
int32_t dbg_quantum_objcode_put (int32_t arg_8h, size_t arg_ch) {
    int32_t var_7ch;
    int32_t var_78h;
    unsigned char operation;
    long long unsigned int mu;
    int32_t var_6ch;
    double d;
    va_list args;
    int32_t var_5ch;
    int32_t i;
    unsigned char[80] buf;
    int32_t canary;
    size_t size;
    int32_t var_8h;
    /* int quantum_objcode_put(unsigned char operation,va_args ...); */
    eax = *((ebp + 8));
    *((ebp - 0x74)) = al;
    eax = *(gs:0x14);
    *((ebp - 4)) = eax;
    eax = 0;
    *((ebp - 0x5c)) = 0;
    eax = opstatus;
    if (eax == 0) {
        *((ebp - 0x7c)) = 0;
        goto label_0;
    }
    eax = ebp + 0xc;
    *((ebp - 0x60)) = eax;
    eax = *((ebp - 0x74));
    *((ebp - 0x54)) = al;
    edx = *((ebp - 0x74));
    *((ebp - 0x78)) = edx;
    if (*((ebp - 0x78)) <= 0xb) {
        if (*((ebp - 0x78)) < 7) {
            if (*((ebp - 0x78)) != 2) {
                if (*((ebp - 0x78)) > 2) {
                    goto label_1;
                }
                if (*((ebp - 0x78)) != 0) {
                    if (*((ebp - 0x78)) == 1) {
                        goto label_2;
                    }
                } else {
                    if (*((ebp - 0x78)) == 0x80) {
                        goto label_3;
                    }
                    if (*((ebp - 0x78)) <= 0x80) {
                        if (*((ebp - 0x78)) == 0xd) {
                            goto label_4;
                        }
                        if (*((ebp - 0x78)) < 0xd) {
                            goto label_2;
                        }
                        if (*((ebp - 0x78)) == 0xe) {
                            goto label_1;
                        }
                        goto label_5;
                    }
                    if (*((ebp - 0x78)) <= 0x82) {
                        goto label_1;
                    }
                    if (*((ebp - 0x78)) == 0xff) {
                        goto label_3;
                    }
                    goto label_5;
                }
                edx = *((ebp - 0x60));
                eax = edx + 8;
                *((ebp - 0x60)) = eax;
                eax = edx;
                edx = *((eax + 4));
                eax = *(eax);
                *((ebp - 0x70)) = eax;
                *((ebp - 0x6c)) = edx;
                eax = ebp - 0x54;
                eax++;
                *((esp + 8)) = eax;
                eax = *((ebp - 0x70));
                edx = *((ebp - 0x6c));
                quantum_mu2char (eax, edx);
                *((ebp - 0x5c)) = 9;
                goto label_6;
label_2:
                edx = *((ebp - 0x60));
                eax = edx + 4;
                *((ebp - 0x60)) = eax;
                eax = edx;
                eax = *(eax);
                *((ebp - 0x58)) = eax;
                eax = ebp - 0x54;
                eax++;
                *((esp + 4)) = eax;
                eax = *((ebp - 0x58));
                *(esp) = eax;
                quantum_int2char ();
                edx = *((ebp - 0x60));
                eax = edx + 4;
                *((ebp - 0x60)) = eax;
                eax = edx;
                eax = *(eax);
                *((ebp - 0x58)) = eax;
                eax = ebp - 0x54;
                eax += 5;
                *((esp + 4)) = eax;
                eax = *((ebp - 0x58));
                *(esp) = eax;
                quantum_int2char ();
                *((ebp - 0x5c)) = 9;
                goto label_6;
            }
            edx = *((ebp - 0x60));
            eax = edx + 4;
            *((ebp - 0x60)) = eax;
            eax = edx;
            eax = *(eax);
            *((ebp - 0x58)) = eax;
            eax = ebp - 0x54;
            eax++;
            *((esp + 4)) = eax;
            eax = *((ebp - 0x58));
            *(esp) = eax;
            quantum_int2char ();
            edx = *((ebp - 0x60));
            eax = edx + 4;
            *((ebp - 0x60)) = eax;
            eax = edx;
            eax = *(eax);
            *((ebp - 0x58)) = eax;
            eax = ebp - 0x54;
            eax += 5;
            *((esp + 4)) = eax;
            eax = *((ebp - 0x58));
            *(esp) = eax;
            quantum_int2char ();
            edx = *((ebp - 0x60));
            eax = edx + 4;
            *((ebp - 0x60)) = eax;
            eax = edx;
            eax = *(eax);
            *((ebp - 0x58)) = eax;
            eax = ebp - 0x54;
            eax += 9;
            *((esp + 4)) = eax;
            eax = *((ebp - 0x58));
            *(esp) = eax;
            quantum_int2char ();
            *((ebp - 0x5c)) = 0xd;
            goto label_6;
label_1:
            edx = *((ebp - 0x60));
            eax = edx + 4;
            *((ebp - 0x60)) = eax;
            eax = edx;
            eax = *(eax);
            *((ebp - 0x58)) = eax;
            eax = ebp - 0x54;
            eax++;
            *((esp + 4)) = eax;
            eax = *((ebp - 0x58));
            *(esp) = eax;
            quantum_int2char ();
            *((ebp - 0x5c)) = 5;
            goto label_6;
        }
        edx = *((ebp - 0x60));
        eax = edx + 4;
        *((ebp - 0x60)) = eax;
        eax = edx;
        eax = *(eax);
        *((ebp - 0x58)) = eax;
        edx = *((ebp - 0x60));
        eax = edx + 8;
        *((ebp - 0x60)) = eax;
        eax = edx;
        *(fp_stack--) = *(eax);
        *((ebp - 0x68)) = fp_stack[0];
        fp_stack--;
        eax = ebp - 0x54;
        eax++;
        *((esp + 4)) = eax;
        eax = *((ebp - 0x58));
        *(esp) = eax;
        quantum_int2char ();
        eax = ebp - 0x54;
        eax += 5;
        *(fp_stack--) = *((ebp - 0x68));
        *(esp) = fp_stack[0];
        fp_stack--;
        quantum_double2char (eax);
        *((ebp - 0x5c)) = 0xd;
        goto label_6;
label_4:
        edx = *((ebp - 0x60));
        eax = edx + 4;
        *((ebp - 0x60)) = eax;
        eax = edx;
        eax = *(eax);
        *((ebp - 0x58)) = eax;
        eax = ebp - 0x54;
        eax++;
        *((esp + 4)) = eax;
        eax = *((ebp - 0x58));
        *(esp) = eax;
        quantum_int2char ();
        edx = *((ebp - 0x60));
        eax = edx + 4;
        *((ebp - 0x60)) = eax;
        eax = edx;
        eax = *(eax);
        *((ebp - 0x58)) = eax;
        eax = ebp - 0x54;
        eax += 5;
        *((esp + 4)) = eax;
        eax = *((ebp - 0x58));
        *(esp) = eax;
        quantum_int2char ();
        edx = *((ebp - 0x60));
        eax = edx + 8;
        *((ebp - 0x60)) = eax;
        eax = edx;
        *(fp_stack--) = *(eax);
        *((ebp - 0x68)) = fp_stack[0];
        fp_stack--;
        eax = ebp - 0x54;
        eax += 9;
        *(fp_stack--) = *((ebp - 0x68));
        *(esp) = fp_stack[0];
        fp_stack--;
        quantum_double2char (eax);
        *((ebp - 0x5c)) = 0x11;
        goto label_6;
label_3:
        *((ebp - 0x5c)) = 1;
        goto label_6;
    }
label_5:
    *(esp) = 0x10001;
    quantum_error ();
label_6:
    edx = position;
    eax = *((ebp - 0x5c));
    eax = edx + eax;
    edx = eax;
    edx >>= 0x10;
    eax = position;
    eax >>= 0x10;
    if (edx > eax) {
        eax = allocated;
        eax++;
        *(obj.allocated) = eax;
        eax = allocated;
        eax <<= 0x10;
        edx = objcode;
        eax = realloc (edx, eax);
        *(obj.objcode) = eax;
        eax = objcode;
        if (eax == 0) {
            *(esp) = 2;
            quantum_error ();
        }
        *(esp) = 0x10000;
        quantum_memman ();
    }
    *((ebp - 0x58)) = 0;
    while (eax < *((ebp - 0x5c))) {
        edx = objcode;
        eax = position;
        edx += eax;
        eax = *((ebp - 0x58));
        eax = *((ebp + eax - 0x54));
        *(edx) = al;
        eax = position;
        eax++;
        *(obj.position) = eax;
        *((ebp - 0x58))++;
        eax = *((ebp - 0x58));
    }
    *((ebp - 0x7c)) = 1;
label_0:
    eax = *((ebp - 0x7c));
    edx = *((ebp - 4));
    edx ^= *(gs:0x14);
    if (eax != *((ebp - 0x5c))) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804cbfc */
#include <stdint.h>
 
int32_t dbg_quantum_new_matrix (void * arg_8h) {
    quantum_matrix m;
    uint32_t var_8h;
    void * var_bp_4h;
    int32_t cols;
    int32_t rows;
    size_t size;
    /* quantum_matrix quantum_new_matrix(int cols,int rows); */
    eax = *((ebp + 0x10));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    eax *= *((ebp + 0x10));
    eax = calloc (eax, 8);
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    edx = *((ebp + 0xc));
    eax = *((ebp + 0x10));
    eax *= edx;
    eax <<= 3;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp - 0xc));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 8));
    edx = *((ebp + 8));
    *((edx + 4)) = eax;
    eax = *((ebp - 4));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048884 */
#include <stdint.h>
 
void calloc (void) {
    calloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804a01c */
#include <stdint.h>
 
uint32_t dbg_quantum_error (void) {
    void (*)() p;
    int32_t errno;
    char * format;
    char * var_8h;
    /* void quantum_error(int errno); */
    *(esp) = 0;
    eax = quantum_error_handler ();
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) != 0) {
        eax = *((ebp + 8));
        eax = *((ebp - 4));
        void (*eax)(uint32_t) (eax);
        return eax;
    }
    eax = stdout;
    fflush (eax);
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = quantum_strerr ();
    edx = stderr;
    *((esp + 8)) = eax;
    fprintf (edx, "ERROR: %s\n");
    eax = stderr;
    fflush (eax);
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049f64 */
#include <stdint.h>
 
int32_t dbg_quantum_error_handler (void) {
    void * (*)() f;
    /* void * quantum_error_handler(void * (*)() f); */
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 8));
        *(obj.errfunc.2059) = eax;
    }
    eax = errfunc.2059;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80488e4 */
#include <stdint.h>
 
void fflush (void) {
    fflush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049f7c */
#include <stdint.h>
 
int32_t dbg_quantum_strerr (void) {
    int32_t var_8h;
    char * var_4h;
    int32_t errno;
    /* char const * quantum_strerr(int errno); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    if (*((ebp - 8)) != 3) {
        if (*((ebp - 8)) <= 3) {
            if (*((ebp - 8)) != 1) {
                if (*((ebp - 8)) > 1) {
                    goto label_0;
                }
                if (*((ebp - 8)) != 0) {
                } else {
                    if (*((ebp - 8)) == 5) {
                        goto label_1;
                    }
                    if (*((ebp - 8)) < 5) {
                        goto label_2;
                    }
                    if (*((ebp - 8)) == 0x10000) {
                        goto label_3;
                    }
                    if (*((ebp - 8)) == 0x10001) {
                        goto label_4;
                    }
                    goto label_5;
                }
                *((ebp - 4)) = 0x805428c;
                goto label_6;
            }
            *((ebp - 4)) = "failure";
            goto label_6;
label_0:
            *((ebp - 4)) = "malloc failed";
        } else {
            *((ebp - 4)) = "matrix too large";
            goto label_6;
label_2:
            *((ebp - 4)) = "wrong matrix size";
            goto label_6;
label_1:
            *((ebp - 4)) = "hash table full";
            goto label_6;
label_3:
            *((ebp - 4)) = "single-column matrix expected";
            goto label_6;
label_4:
            *((ebp - 4)) = "unknown opcode";
            goto label_6;
        }
label_5:
        *((ebp - 4)) = "unknown error code";
    }
label_6:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048994 */
#include <stdint.h>
 
void fprintf (void) {
    fprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048824 */
#include <stdint.h>
 
void abort (void) {
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804cbcc */
#include <stdint.h>
 
int32_t dbg_quantum_memman (void) {
    long int change;
    /* long unsigned int quantum_memman(long int change); */
    eax = mem.2105;
    eax += *((ebp + 8));
    *(obj.mem.2105) = eax;
    edx = mem.2105;
    eax = max.2106;
    if (edx > eax) {
        eax = mem.2105;
        *(obj.max.2106) = eax;
    }
    eax = mem.2105;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048934 */
#include <stdint.h>
 
void cos (void) {
    cos ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048a14 */
#include <stdint.h>
 
void sin (void) {
    sin ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804aaf9 */
#include <stdint.h>
 
int32_t dbg_quantum_gate1 (void * arg_10h, int32_t arg_14h) {
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_9ch;
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    complex float tnot;
    int32_t var_48h;
    complex float t;
    int32_t var_40h;
    char * done;
    float limit;
    int32_t sorted;
    int32_t decsize;
    int32_t addsize;
    int32_t iset;
    int32_t k;
    int32_t j;
    int32_t i;
    int32_t target;
    quantum_matrix m;
    quantum_reg * reg;
    size_t var_4h_2;
    int32_t var_8h_2;
    size_t size;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    /* void quantum_gate1(int target,quantum_matrix m,quantum_reg * reg); */
    *((ebp - 0x2c)) = 0;
    *((ebp - 0x30)) = 0;
    *((ebp - 0x34)) = 1;
    eax = 0;
    *((ebp - 0x4c)) = eax;
    eax = 0;
    *((ebp - 0x48)) = eax;
    eax = *((ebp + 0x10));
    if (eax == 2) {
        eax = *((ebp + 0xc));
        if (eax == 2) {
            goto label_0;
        }
    }
    *(esp) = 4;
    quantum_error ();
label_0:
    eax = *((ebp + 0x18));
    quantum_reconstruct_hash (eax);
    *((ebp - 0x1c)) = 0;
    while (eax > *((ebp - 0x1c))) {
        if (*((ebp - 0x34)) != 0) {
            eax = *((ebp + 0x18));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            eax <<= 4;
            eax = edx + eax;
            ecx = *((eax + 8));
            ebx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            edx = *((ebp - 0x1c));
            edx >>= 0x1f;
            esi = ebx;
            esi ^= edx;
            eax ^= ecx;
            eax |= esi;
            if (eax == 0) {
                goto label_1;
            }
            *((ebp - 0x34)) = 0;
        }
label_1:
        eax = *((ebp + 0x18));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x1c));
        eax <<= 4;
        eax = edx + eax;
        esi = *((eax + 8));
        edi = *((eax + 0xc));
        ecx = *((ebp + 8));
        *((ebp - 0xa8)) = 1;
        *((ebp - 0xa4)) = 0;
        eax = *((ebp - 0xa8));
        edx = *((ebp - 0xa4));
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        ecx = eax;
        ebx = edx;
        eax = esi;
        eax ^= ecx;
        edx = edi;
        edx ^= ebx;
        ebx = *((ebp + 0x18));
        ecx = *(ebx);
        ecx = *((ebx + 4));
        ecx = *((ebx + 8));
        ecx = *((ebx + 0xc));
        ecx = *((ebx + 0x10));
        eax = quantum_get_state (ecx, edx, ecx);
        if (eax == -1) {
            *((ebp - 0x2c))++;
        }
        *((ebp - 0x1c))++;
        eax = *((ebp + 0x18));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x18));
    eax = *((eax + 4));
    eax += *((ebp - 0x2c));
    edx = eax;
    edx <<= 4;
    eax = *((ebp + 0x18));
    eax = *((eax + 0xc));
    eax = realloc (eax, edx);
    edx = eax;
    eax = *((ebp + 0x18));
    *((eax + 0xc)) = edx;
    eax = *((ebp + 0x18));
    eax = *((eax + 0xc));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp - 0x2c));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    *((ebp - 0x1c)) = 0;
    while (eax < *((ebp - 0x2c))) {
        eax = *((ebp + 0x18));
        edx = *((eax + 0xc));
        eax = *((ebp + 0x18));
        eax = *((eax + 4));
        eax += *((ebp - 0x1c));
        eax <<= 4;
        eax = edx + eax;
        *((eax + 8)) = 0;
        *((eax + 0xc)) = 0;
        eax = *((ebp + 0x18));
        edx = *((eax + 0xc));
        eax = *((ebp + 0x18));
        eax = *((eax + 4));
        eax += *((ebp - 0x1c));
        eax <<= 4;
        edx += eax;
        eax = 0;
        *(edx) = eax;
        eax = 0;
        *((edx + 4)) = eax;
        *((ebp - 0x1c))++;
        eax = *((ebp - 0x1c));
    }
    eax = *((ebp + 0x18));
    eax = *((eax + 4));
    eax += *((ebp - 0x2c));
    eax = calloc (eax, 1);
    *((ebp - 0x3c)) = eax;
    if (*((ebp - 0x3c)) == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp + 0x18));
    eax = *((eax + 4));
    edx = *((eax + 4));
    eax = *((ebp - 0x2c));
    eax = edx + eax;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 0x18));
    eax = *((eax + 4));
    *((ebp - 0x24)) = eax;
    eax = *((ebp + 0x18));
    ecx = *(eax);
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    *(fp_stack--) = *(esp);
    esp = esp + 8;
    ? = fp_stack[0];
    fp_stack--;
    if (edx < 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = fp_stack[?];
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x60));
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = *(0x8054340);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *((ebp - 0x38)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x1c)) = 0;
    while (eax > *((ebp - 0x1c))) {
        eax = *((ebp - 0x1c));
        eax += *((ebp - 0x3c));
        eax = *(eax);
        if (al == 0) {
            eax = *((ebp + 0x18));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 0xc));
            eax = *((eax + 8));
            ebx = *((eax + 8));
            ecx = *((ebp + 8));
            eax = 1;
            edx = 0;
            __asm ("shld edx, eax, cl");
            eax <<= cl;
            if ((cl & 0x20) != 0) {
                edx = eax;
                eax = 0;
            }
            eax &= ebx;
            *((ebp - 0x28)) = eax;
            eax = 0;
            *((ebp - 0x4c)) = eax;
            eax = 0;
            *((ebp - 0x48)) = eax;
            eax = *((ebp + 0x18));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            eax <<= 4;
            eax = edx + eax;
            esi = *((eax + 8));
            edi = *((eax + 0xc));
            ecx = *((ebp + 8));
            *((ebp - 0xa8)) = 1;
            *((ebp - 0xa4)) = 0;
            eax = *((ebp - 0xa8));
            edx = *((ebp - 0xa4));
            __asm ("shld edx, eax, cl");
            eax <<= cl;
            if ((cl & 0x20) != 0) {
                edx = eax;
                eax = 0;
            }
            ecx = eax;
            ebx = edx;
            eax = esi;
            eax ^= ecx;
            edx = edi;
            edx ^= ebx;
            ebx = *((ebp + 0x18));
            ecx = *(ebx);
            ecx = *((ebx + 4));
            ecx = *((ebx + 8));
            ecx = *((ebx + 0xc));
            ecx = *((ebx + 0x10));
            eax = quantum_get_state (ecx, edx, ecx);
            *((ebp - 0x20)) = eax;
            eax = *((ebp + 0x18));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *((ebp - 0x44)) = edx;
            *((ebp - 0x40)) = eax;
            if (*((ebp - 0x20)) >= 0) {
                eax = *((ebp + 0x18));
                edx = *((eax + 0xc));
                eax = *((ebp - 0x20));
                eax <<= 4;
                eax = edx + eax;
                edx = *(eax);
                eax = *((eax + 4));
                *((ebp - 0x4c)) = edx;
                *((ebp - 0x48)) = eax;
            }
            if (*((ebp - 0x28)) != 0) {
                eax = *((ebp + 0x18));
                edx = *((eax + 0xc));
                eax = *((ebp - 0x1c));
                eax <<= 4;
                esi = edx + eax;
                eax = *((ebp + 0x14));
                eax += 0x10;
                edx = *(eax);
                eax = *((eax + 4));
                ebx = edx;
                ecx = eax;
                edx = *((ebp - 0x4c));
                eax = *((ebp - 0x48));
                eax = _mulsc3 (eax, ecx, edx);
                ecx = eax;
                ebx = edx;
                eax = ecx;
                edx = ebx;
                edi = eax;
                *((ebp - 0x78)) = edx;
                eax = *((ebp + 0x14));
                eax += 0x18;
                edx = *(eax);
                eax = *((eax + 4));
                ebx = edx;
                ecx = eax;
                edx = *((ebp - 0x44));
                eax = *((ebp - 0x40));
                eax = _mulsc3 (eax, ecx, edx);
                ecx = eax;
                ebx = edx;
                eax = ecx;
                edx = ebx;
                *((ebp - 0x9c)) = edi;
                *(fp_stack--) = *((ebp - 0x9c));
                *(fp_stack--) = *((ebp - 0x78));
                *((ebp - 0x9c)) = eax;
                *(fp_stack--) = *((ebp - 0x9c));
                *((ebp - 0x9c)) = edx;
                *(fp_stack--) = *((ebp - 0x9c));
                fp_tmp_0 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_0;
                fp_stack[0] += fp_stack[3];
                fp_stack++;
                fp_stack[0] += fp_stack[1];
                fp_stack++;
                fp_tmp_1 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_1;
                *((ebp - 0x9c)) = fp_stack[0];
                fp_stack--;
                eax = *((ebp - 0x9c));
                *((ebp - 0x9c)) = fp_stack[0];
                fp_stack--;
                edx = *((ebp - 0x9c));
                *(esi) = eax;
                *((esi + 4)) = edx;
            } else {
                eax = *((ebp + 0x18));
                edx = *((eax + 0xc));
                eax = *((ebp - 0x1c));
                eax <<= 4;
                esi = edx + eax;
                eax = *((ebp + 0x14));
                edx = *(eax);
                eax = *((eax + 4));
                ebx = edx;
                ecx = eax;
                edx = *((ebp - 0x44));
                eax = *((ebp - 0x40));
                eax = _mulsc3 (eax, ecx, edx);
                ecx = eax;
                ebx = edx;
                eax = ecx;
                edx = ebx;
                edi = eax;
                *((ebp - 0x74)) = edx;
                eax = *((ebp + 0x14));
                eax += 8;
                edx = *(eax);
                eax = *((eax + 4));
                ebx = edx;
                ecx = eax;
                edx = *((ebp - 0x4c));
                eax = *((ebp - 0x48));
                eax = _mulsc3 (eax, ecx, edx);
                ecx = eax;
                ebx = edx;
                eax = ecx;
                edx = ebx;
                *((ebp - 0x9c)) = edi;
                *(fp_stack--) = *((ebp - 0x9c));
                *(fp_stack--) = *((ebp - 0x74));
                *((ebp - 0x9c)) = eax;
                *(fp_stack--) = *((ebp - 0x9c));
                *((ebp - 0x9c)) = edx;
                *(fp_stack--) = *((ebp - 0x9c));
                fp_tmp_2 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_2;
                fp_stack[0] += fp_stack[3];
                fp_stack++;
                fp_stack[0] += fp_stack[1];
                fp_stack++;
                fp_tmp_3 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_3;
                *((ebp - 0x9c)) = fp_stack[0];
                fp_stack--;
                eax = *((ebp - 0x9c));
                *((ebp - 0x9c)) = fp_stack[0];
                fp_stack--;
                edx = *((ebp - 0x9c));
                *(esi) = eax;
                *((esi + 4)) = edx;
            }
            if (*((ebp - 0x20)) >= 0) {
                if (*((ebp - 0x28)) != 0) {
                    eax = *((ebp + 0x18));
                    edx = *((eax + 0xc));
                    eax = *((ebp - 0x20));
                    eax <<= 4;
                    esi = edx + eax;
                    eax = *((ebp + 0x14));
                    edx = *(eax);
                    eax = *((eax + 4));
                    ebx = edx;
                    ecx = eax;
                    edx = *((ebp - 0x4c));
                    eax = *((ebp - 0x48));
                    eax = _mulsc3 (eax, ecx, edx);
                    ecx = eax;
                    ebx = edx;
                    eax = ecx;
                    edx = ebx;
                    edi = eax;
                    *((ebp - 0x70)) = edx;
                    eax = *((ebp + 0x14));
                    eax += 8;
                    edx = *(eax);
                    eax = *((eax + 4));
                    ebx = edx;
                    ecx = eax;
                    edx = *((ebp - 0x44));
                    eax = *((ebp - 0x40));
                    eax = _mulsc3 (eax, ecx, edx);
                    ecx = eax;
                    ebx = edx;
                    eax = ecx;
                    edx = ebx;
                    *((ebp - 0x9c)) = edi;
                    *(fp_stack--) = *((ebp - 0x9c));
                    *(fp_stack--) = *((ebp - 0x70));
                    *((ebp - 0x9c)) = eax;
                    *(fp_stack--) = *((ebp - 0x9c));
                    *((ebp - 0x9c)) = edx;
                    *(fp_stack--) = *((ebp - 0x9c));
                    fp_tmp_4 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_4;
                    fp_stack[0] += fp_stack[3];
                    fp_stack++;
                    fp_stack[0] += fp_stack[1];
                    fp_stack++;
                    fp_tmp_5 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_5;
                    *((ebp - 0x9c)) = fp_stack[0];
                    fp_stack--;
                    eax = *((ebp - 0x9c));
                    *((ebp - 0x9c)) = fp_stack[0];
                    fp_stack--;
                    edx = *((ebp - 0x9c));
                    *(esi) = eax;
                    *((esi + 4)) = edx;
                } else {
                    eax = *((ebp + 0x18));
                }
                edx = *((eax + 0xc));
                eax = *((ebp - 0x20));
                eax <<= 4;
                esi = edx + eax;
                eax = *((ebp + 0x14));
                eax += 0x10;
                edx = *(eax);
                eax = *((eax + 4));
                ebx = edx;
                ecx = eax;
                edx = *((ebp - 0x44));
                eax = *((ebp - 0x40));
                eax = _mulsc3 (eax, ecx, edx);
                ecx = eax;
                ebx = edx;
                eax = ecx;
                edx = ebx;
                edi = eax;
                *((ebp - 0x6c)) = edx;
                eax = *((ebp + 0x14));
                eax += 0x18;
                edx = *(eax);
                eax = *((eax + 4));
                ebx = edx;
                ecx = eax;
                edx = *((ebp - 0x4c));
                eax = *((ebp - 0x48));
                eax = _mulsc3 (eax, ecx, edx);
                ecx = eax;
                ebx = edx;
                eax = ecx;
                edx = ebx;
                *((ebp - 0x9c)) = edi;
                *(fp_stack--) = *((ebp - 0x9c));
                *(fp_stack--) = *((ebp - 0x6c));
                *((ebp - 0x9c)) = eax;
                *(fp_stack--) = *((ebp - 0x9c));
                *((ebp - 0x9c)) = edx;
                *(fp_stack--) = *((ebp - 0x9c));
                fp_tmp_6 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_6;
                fp_stack[0] += fp_stack[3];
                fp_stack++;
                fp_stack[0] += fp_stack[1];
                fp_stack++;
                fp_tmp_7 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_7;
                *((ebp - 0x9c)) = fp_stack[0];
                fp_stack--;
                eax = *((ebp - 0x9c));
                *((ebp - 0x9c)) = fp_stack[0];
                fp_stack--;
                edx = *((ebp - 0x9c));
                *(esi) = eax;
                *((esi + 4)) = edx;
            } else {
                eax = *((ebp + 0x14));
                eax += 8;
                edx = *(eax);
                eax = *((eax + 4));
                *((ebp - 0x9c)) = edx;
                *(fp_stack--) = *((ebp - 0x9c));
                *((ebp - 0x9c)) = eax;
                *(fp_stack--) = *((ebp - 0x9c));
                *(fp_stack--) = 0.0;
                fp_status = fp_compare(fp_stack[0], fp_stack[2]);
                fp_stack++;
                ax = fp_status;
                fp_stack[1] = fp_stack[0];
                fp_stack--;
                __asm ("sahf");
                cl = (eax == 0) ? 1 : 0;
                __asm ("setnp al");
                ecx &= eax;
                *(fp_stack--) = 0.0;
                fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                ax = fp_status;
                __asm ("sahf");
                al = (ecx == 0) ? 1 : 0;
                __asm ("setnp dl");
                eax &= edx;
                eax &= ecx;
                if (al != 0) {
                    if (*((ebp - 0x28)) != 0) {
                        goto label_2;
                    }
                }
                eax = *((ebp + 0x14));
                eax += 0x10;
                edx = *(eax);
                eax = *((eax + 4));
                *((ebp - 0x9c)) = edx;
                *(fp_stack--) = *((ebp - 0x9c));
                *((ebp - 0x9c)) = eax;
                *(fp_stack--) = *((ebp - 0x9c));
                *(fp_stack--) = 0.0;
                fp_status = fp_compare(fp_stack[0], fp_stack[2]);
                fp_stack++;
                ax = fp_status;
                fp_stack[1] = fp_stack[0];
                fp_stack--;
                __asm ("sahf");
                cl = (eax == 0) ? 1 : 0;
                __asm ("setnp al");
                ecx &= eax;
                *(fp_stack--) = 0.0;
                fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                ax = fp_status;
                __asm ("sahf");
                al = (ecx == 0) ? 1 : 0;
                __asm ("setnp dl");
                eax &= edx;
                eax &= ecx;
                if (al != 0) {
                    if (*((ebp - 0x28)) == 0) {
                        goto label_2;
                    }
                }
                eax = *((ebp + 0x18));
                edx = *((eax + 0xc));
                eax = *((ebp - 0x24));
                eax <<= 4;
                edx += eax;
                *((ebp - 0x68)) = edx;
                eax = *((ebp + 0x18));
                edx = *((eax + 0xc));
                eax = *((ebp - 0x1c));
                eax <<= 4;
                eax = edx + eax;
                esi = *((eax + 8));
                edi = *((eax + 0xc));
                ecx = *((ebp + 8));
                *((ebp - 0xa8)) = 1;
                *((ebp - 0xa4)) = 0;
                eax = *((ebp - 0xa8));
                edx = *((ebp - 0xa4));
                __asm ("shld edx, eax, cl");
                eax <<= cl;
                if ((cl & 0x20) != 0) {
                    edx = eax;
                    eax = 0;
                }
                ecx = eax;
                ebx = edx;
                eax = esi;
                eax ^= ecx;
                edx = edi;
                edx ^= ebx;
                ecx = *((ebp - 0x68));
                *((ecx + 8)) = eax;
                *((ecx + 0xc)) = edx;
                if (*((ebp - 0x28)) != 0) {
                    eax = *((ebp + 0x18));
                    edx = *((eax + 0xc));
                    eax = *((ebp - 0x24));
                    eax <<= 4;
                    esi = edx + eax;
                    eax = *((ebp + 0x14));
                    eax += 8;
                    edx = *(eax);
                    eax = *((eax + 4));
                    ebx = edx;
                    ecx = eax;
                    edx = *((ebp - 0x44));
                    eax = *((ebp - 0x40));
                    eax = _mulsc3 (eax, ecx, edx);
                    ecx = eax;
                    ebx = edx;
                    eax = ecx;
                    edx = ebx;
                    *(esi) = eax;
                    *((esi + 4)) = edx;
                } else {
                    eax = *((ebp + 0x18));
                    edx = *((eax + 0xc));
                    eax = *((ebp - 0x24));
                    eax <<= 4;
                    esi = edx + eax;
                    eax = *((ebp + 0x14));
                    eax += 0x10;
                    edx = *(eax);
                    eax = *((eax + 4));
                    ebx = edx;
                    ecx = eax;
                    edx = *((ebp - 0x44));
                    eax = *((ebp - 0x40));
                    eax = _mulsc3 (eax, ecx, edx);
                    ecx = eax;
                    ebx = edx;
                    eax = ecx;
                    edx = ebx;
                    *(esi) = eax;
                    *((esi + 4)) = edx;
                }
                *((ebp - 0x24))++;
            }
            if (*((ebp - 0x20)) < 0) {
                goto label_3;
            }
            eax = *((ebp - 0x20));
            eax += *((ebp - 0x3c));
            *(eax) = 1;
        }
label_3:
        *((ebp - 0x1c))++;
        eax = *((ebp + 0x18));
        eax = *((eax + 4));
    }
label_2:
    eax = *((ebp + 0x18));
    eax = *((eax + 4));
    edx = *((eax + 4));
    edx += *((ebp - 0x2c));
    eax = *((ebp + 0x18));
    *((eax + 4)) = edx;
    eax = *((ebp - 0x3c));
    free (eax);
    eax = *((ebp + 0x18));
    eax = *((eax + 4));
    eax = -eax;
    *(esp) = eax;
    quantum_memman ();
    if (*((ebp - 0x34)) != 0) {
        goto label_4;
    }
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x20)) = 0;
    while (eax > *((ebp - 0x1c))) {
        eax = *((ebp + 0x18));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x1c));
        eax <<= 4;
        edx += eax;
        eax = *(edx);
        eax = *((edx + 4));
        ax = quantum_prob_inline (eax, eax);
        *(fp_stack--) = *((ebp - 0x38));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (edx > 0) {
            *((ebp - 0x20))++;
            *((ebp - 0x30))++;
        } else {
            if (*((ebp - 0x20)) == 0) {
                goto label_5;
            }
            eax = *((ebp + 0x18));
            ecx = *((eax + 0xc));
            edx = *((ebp - 0x20));
            eax = *((ebp - 0x1c));
            eax -= edx;
            eax <<= 4;
            ecx += eax;
            eax = *((ebp + 0x18));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 0xc));
            eax = *((eax + 8));
            *((ecx + 8)) = eax;
            *((ecx + 0xc)) = edx;
            eax = *((ebp + 0x18));
            ecx = *((eax + 0xc));
            edx = *((ebp - 0x20));
            eax = *((ebp - 0x1c));
            eax -= edx;
            eax <<= 4;
            ecx += eax;
            eax = *((ebp + 0x18));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *(ecx) = edx;
            *((ecx + 4)) = eax;
        }
label_5:
        *((ebp - 0x1c))++;
        eax = *((ebp + 0x18));
        eax = *((eax + 4));
    }
    if (*((ebp - 0x30)) != 0) {
        eax = *((ebp + 0x18));
        eax = *((eax + 4));
        edx = *((eax + 4));
        edx -= *((ebp - 0x30));
        eax = *((ebp + 0x18));
        *((eax + 4)) = edx;
        eax = *((ebp + 0x18));
        eax = *((eax + 4));
        edx = *((eax + 4));
        edx <<= 4;
        eax = *((ebp + 0x18));
        eax = *((eax + 0xc));
        eax = realloc (eax, edx);
        edx = eax;
        eax = *((ebp + 0x18));
        *((eax + 0xc)) = edx;
        eax = *((ebp + 0x18));
        eax = *((eax + 0xc));
        if (eax == 0) {
            *(esp) = 2;
            quantum_error ();
        }
        eax = *((ebp - 0x30));
        eax <<= 4;
        eax = -eax;
        *(esp) = eax;
        quantum_memman ();
    }
label_4:
    eax = *((ebp + 0x18));
    *(esp) = eax;
    quantum_decohere ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804cc70 */
#include <stdint.h>
 
int32_t dbg_quantum_delete_matrix (void) {
    quantum_matrix * m;
    /* void quantum_delete_matrix(quantum_matrix * m); */
    eax = *((ebp + 8));
    eax = *((eax + 8));
    free (eax);
    eax = *((ebp + 8));
    eax = *((eax + 4));
    edx = *((eax + 4));
    eax = *((ebp + 8));
    eax = *(eax);
    eax *= edx;
    eax <<= 3;
    eax = -eax;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 8));
    *((eax + 8)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80488d4 */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804f472 */
#include <stdint.h>
 
int32_t dbg_muln_inv (void) {
    int32_t L;
    int32_t i;
    int32_t N;
    int32_t a;
    int32_t ctl;
    int32_t width;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_sp_8h;
    int32_t var_ch;
    /* void muln_inv(int N,int a,int ctl,int width,quantum_reg * reg); */
    eax = *((ebp + 0x14));
    eax += eax;
    eax++;
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = quantum_inverse_mod ();
    *((ebp + 0xc)) = eax;
    eax = *((ebp + 0x14));
    eax--;
    *((ebp - 4)) = eax;
    while (*((ebp - 4)) > 0) {
        eax = *((ebp + 0x14));
        eax++;
        eax += eax;
        edx = eax;
        edx += *((ebp - 4));
        eax = *((ebp + 0x18));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 8));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp + 0x10));
        *(esp) = eax;
        quantum_toffoli ();
        ecx = *((ebp - 4));
        eax = *((ebp + 0xc));
        edx = *((ebp + 0xc));
        edx <<= cl;
        eax = edx;
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp + 8;
        edx = *(edx:eax) % ebp + 8;
        eax = *((ebp + 8));
        ecx = *((ebp + 8));
        ecx -= edx;
        edx = ecx;
        eax = *((ebp + 0x18));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp + 8));
        *(esp) = eax;
        add_mod_n ();
        eax = *((ebp + 0x14));
        eax++;
        eax += eax;
        edx = eax;
        edx += *((ebp - 4));
        eax = *((ebp + 0x18));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 8));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp + 0x10));
        *(esp) = eax;
        quantum_toffoli ();
        *((ebp - 4))--;
    }
    eax = *((ebp + 0x14));
    eax++;
    edx = eax + eax;
    eax = *((ebp + 0x18));
    *((esp + 0xc)) = eax;
    eax = *((ebp - 8));
    *((esp + 8)) = eax;
    *((esp + 4)) = edx;
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_toffoli ();
    edx = *((ebp + 0xc));
    eax = *((ebp + 0xc));
    edx >>= 0x1f;
    eax = *(edx:eax) / ebp + 8;
    edx = *(edx:eax) % ebp + 8;
    eax = *((ebp + 0x18));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 8)) = eax;
    eax = *((ebp - 8));
    *((esp + 4)) = eax;
    *(esp) = edx;
    emul ();
    eax = *((ebp + 0x14));
    eax++;
    edx = eax + eax;
    eax = *((ebp + 0x18));
    *((esp + 0xc)) = eax;
    eax = *((ebp - 8));
    *((esp + 8)) = eax;
    *((esp + 4)) = edx;
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_toffoli ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804a79e */
#include <stdint.h>
 
int32_t dbg_quantum_sigma_z (void) {
    int32_t var_14h;
    int32_t i;
    int32_t target;
    quantum_reg * reg;
    void * var_4h;
    /* void quantum_sigma_z(int target,quantum_reg * reg); */
    eax = *((ebp + 8));
    eax = quantum_objcode_put (5, eax);
    if (eax != 0) {
        goto label_0;
    }
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 4));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 4));
            eax <<= 4;
            ecx = edx + eax;
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 4));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *((ebp - 0x14)) = edx;
            *(fp_stack--) = *((ebp - 0x14));
            *((ebp - 0x14)) = eax;
            *(fp_stack--) = *((ebp - 0x14));
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] = -fp_stack[0];
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            fp_stack[0] = -fp_stack[0];
            fp_tmp_2 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_2;
            *((ebp - 0x14)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x14));
            *((ebp - 0x14)) = fp_stack[0];
            fp_stack--;
            edx = *((ebp - 0x14));
            *(ecx) = eax;
            *((ecx + 4)) = edx;
        }
        *((ebp - 4))++;
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0xc));
    *(esp) = eax;
    quantum_decohere ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x805424c */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x8054258)(uint32_t) (ebx);
    ebx += 0x1d9c;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e3e8 */
#include <stdint.h>
 
int32_t dbg_quantum_mu2char (int32_t arg_8h, int32_t arg_ch) {
    long long unsigned int mu;
    int32_t var_1ch;
    int32_t size;
    int32_t i;
    unsigned char * buf;
    /* void quantum_mu2char(long long unsigned int mu,unsigned char * buf); */
    eax = *((ebp + 8));
    *((ebp - 0x20)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1c)) = eax;
    *((ebp - 0x10)) = 8;
    *((ebp - 0xc)) = 0;
    while (eax < *((ebp - 0x10))) {
        eax = *((ebp - 0xc));
        ebx = *((ebp - 0xc));
        ebx += *((ebp + 0x10));
        edx = *((ebp - 0x10));
        eax = *((ebp - 0xc));
        eax -= edx;
        eax = ~eax;
        ecx = eax*8;
        eax = *((ebp - 0x20));
        edx = *((ebp - 0x1c));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        *(ebx) = al;
        edx = *((ebp - 0x10));
        eax = *((ebp - 0xc));
        eax -= edx;
        eax = ~eax;
        ecx = eax*8;
        eax = 1;
        edx = 0;
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        eax += 0xffffffff;
        edx += 0xffffffff;
        *((ebp - 0x20)) &= eax;
        *((ebp - 0x1c)) &= edx;
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804cf3d */
#include <stdint.h>
 
uint32_t dbg_quantum_measure (char * arg_ch, int32_t arg_14h) {
    int32_t var_18h;
    int32_t var_14h;
    double r;
    int32_t i;
    quantum_reg reg;
    int32_t var_sp_4h;
    /* long long unsigned int quantum_measure(quantum_reg reg); */
    eax = quantum_objcode_put (ebp);
    if (eax != 0) {
        *((ebp - 0x18)) = 0;
        *((ebp - 0x14)) = 0;
        goto label_0;
    }
    quantum_frand ();
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        edx = *((ebp + 0x14));
        eax = *((ebp - 4));
        eax <<= 4;
        edx += eax;
        eax = *(edx);
        eax = *((edx + 4));
        ax = quantum_prob_inline (eax, eax);
        *(fp_stack--) = *((ebp - 0x10));
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        *((ebp - 0x10)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x10));
        *(fp_stack--) = 0.0;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (edx >= 0) {
            edx = *((ebp + 0x14));
            eax = *((ebp - 4));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 8));
            ecx = *((eax + 0xc));
            *((ebp - 0x18)) = edx;
            *((ebp - 0x14)) = ecx;
            goto label_0;
        }
        *((ebp - 4))++;
        eax = *((ebp + 0xc));
    }
    *((ebp - 0x18)) = 0xffffffff;
    *((ebp - 0x14)) = 0xffffffff;
label_0:
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80524d7 */
#include <stdint.h>
 
int32_t dbg_quantum_print_timeop (void) {
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    quantum_reg tmp;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    quantum_matrix m;
    int32_t var_18h;
    int32_t var_14h;
    int32_t j;
    int32_t i;
    int32_t var_bp_4h;
    int32_t width;
    void (*)() f;
    int32_t var_4h_3;
    int32_t var_4h_2;
    int32_t var_4h;
    int32_t var_8h;
    /* void quantum_print_timeop(int width,void (*)() f); */
    ecx = *((ebp + 8));
    eax = 1;
    ebx = 1;
    ebx <<= cl;
    ecx = *((ebp + 8));
    eax = 1;
    eax <<= cl;
    edx = ebp - 0x48;
    *((esp + 8)) = ebx;
    *((esp + 4)) = eax;
    quantum_new_matrix (edx);
    eax = *((ebp - 0x48));
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x44));
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0x40));
    *((ebp - 0x14)) = eax;
    *((ebp - 0xc)) = 0;
    goto label_1;
label_0:
    eax = *((ebp - 0xc));
    edx = *((ebp - 0xc));
    ecx = eax;
    ecx >>= 0x1f;
    ebx = ebp - 0x68;
    eax = *((ebp + 8));
    *((esp + 0xc)) = eax;
    quantum_new_qureg (ebx, edx, ecx);
    eax = *((ebp - 0x68));
    *((ebp - 0x30)) = eax;
    eax = *((ebp - 0x64));
    *((ebp - 0x2c)) = eax;
    eax = *((ebp - 0x60));
    *((ebp - 0x28)) = eax;
    eax = *((ebp - 0x5c));
    *((ebp - 0x24)) = eax;
    eax = *((ebp - 0x58));
    *((ebp - 0x20)) = eax;
    eax = ebp - 0x30;
    eax = *((ebp + 0xc));
    void (*eax)(uint32_t) (eax);
    *((ebp - 0x10)) = 0;
    while (eax > *((ebp - 0x10))) {
        ecx = *((ebp - 0x14));
        edx = *((ebp - 0x24));
        eax = *((ebp - 0x10));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        edx = *((eax + 8));
        eax = *((ebp - 0x18));
        eax *= *((ebp - 0xc));
        eax = edx + eax;
        eax <<= 3;
        ecx += eax;
        edx = *((ebp - 0x24));
        eax = *((ebp - 0x10));
        eax <<= 4;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        *(ecx) = edx;
        *((ecx + 4)) = eax;
        *((ebp - 0x10))++;
        eax = *((ebp - 0x2c));
    }
    eax = ebp - 0x30;
    *(esp) = eax;
    quantum_delete_qureg ();
    *((ebp - 0xc))++;
label_1:
    ecx = *((ebp + 8));
    eax = 1;
    eax <<= cl;
    if (eax > *((ebp - 0xc))) {
        goto label_0;
    }
    eax = *((ebp - 0x1c));
    *(esp) = eax;
    eax = *((ebp - 0x18));
    eax = *((ebp - 0x14));
    quantum_print_matrix (eax, eax);
    eax = ebp - 0x1c;
    *(esp) = eax;
    quantum_delete_matrix ();
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048c8a */
#include <stdint.h>
 
int32_t dbg_quantum_inverse_mod (void) {
    int32_t i;
    int32_t n;
    int32_t c;
    /* int quantum_inverse_mod(int n,int c); */
    *((ebp - 4)) = 1;
    while (eax != 1) {
        *((ebp - 4))++;
        eax = *((ebp - 4));
        edx = *((ebp - 4));
        edx *= *((ebp + 0xc));
        eax = edx;
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp + 8;
        edx = *(edx:eax) % ebp + 8;
        eax = edx;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804fb70 */
#include <stdint.h>
 
int32_t dbg_quantum_toffoli_ft (void) {
    long long unsigned int mask;
    int32_t var_1ch;
    int32_t c2;
    int32_t c1;
    int32_t i;
    int32_t control1;
    int32_t control2;
    int32_t target;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    /* void quantum_toffoli_ft(int control1,int control2,int target,quantum_reg * reg); */
    ecx = *((ebp + 0x10));
    eax = 1;
    edx = 0;
    ebx = eax;
    esi = edx;
    __asm ("shld esi, ebx, cl");
    ebx <<= cl;
    if ((cl & 0x20) != 0) {
        esi = ebx;
        ebx = 0;
    }
    eax = width;
    ecx = width;
    ecx += *((ebp + 0x10));
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    ebx += eax;
    esi += edx;
    eax = width;
    eax += eax;
    ecx = eax;
    ecx += *((ebp + 0x10));
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    eax += ebx;
    edx += esi;
    *((ebp - 0x20)) = eax;
    *((ebp - 0x1c)) = edx;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        *((ebp - 0x10)) = 0;
        *((ebp - 0x14)) = 0;
        eax = *((ebp + 0x14));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            *((ebp - 0x10)) = 1;
        }
        eax = *((ebp + 0x14));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ebx = *((eax + 8));
        esi = *((eax + 0xc));
        eax = width;
        ecx = width;
        ecx += *((ebp + 8));
        eax = ebx;
        edx = esi;
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            *((ebp - 0x10)) ^= 1;
        }
        eax = *((ebp + 0x14));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ebx = *((eax + 8));
        esi = *((eax + 0xc));
        eax = width;
        eax += eax;
        ecx = eax;
        ecx += *((ebp + 8));
        eax = ebx;
        edx = esi;
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            *((ebp - 0x10)) ^= 1;
        }
        eax = *((ebp + 0x14));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 0xc));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 1;
        }
        eax = *((ebp + 0x14));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ebx = *((eax + 8));
        esi = *((eax + 0xc));
        eax = width;
        ecx = width;
        ecx += *((ebp + 0xc));
        eax = ebx;
        edx = esi;
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            *((ebp - 0x14)) ^= 1;
        }
        eax = *((ebp + 0x14));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ebx = *((eax + 8));
        esi = *((eax + 0xc));
        eax = width;
        eax += eax;
        ecx = eax;
        ecx += *((ebp + 0xc));
        eax = ebx;
        edx = esi;
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            *((ebp - 0x14)) ^= 1;
        }
        if (*((ebp - 0x10)) == 1) {
            if (*((ebp - 0x14)) != 1) {
                goto label_0;
            }
            eax = *((ebp + 0x14));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            esi = edx + eax;
            eax = *((ebp + 0x14));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            ecx = *((eax + 8));
            ebx = *((eax + 0xc));
            eax = ecx;
            eax ^= *((ebp - 0x20));
            edx = ebx;
            edx ^= *((ebp - 0x1c));
            *((esi + 8)) = eax;
            *((esi + 0xc)) = edx;
        }
label_0:
        *((ebp - 0xc))++;
        eax = *((ebp + 0x14));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x14));
    *(esp) = eax;
    quantum_decohere ();
    eax = *((ebp + 0x14));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0;
    *(esp) = 1;
    quantum_qec_counter ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e5c6 */
#include <stdint.h>
 
int32_t dbg_quantum_char2int (void) {
    int32_t j;
    int32_t size;
    int32_t i;
    unsigned char * buf;
    /* int quantum_char2int(unsigned char * buf); */
    *((ebp - 0x10)) = 0;
    *((ebp - 0xc)) = 4;
    eax = *((ebp - 0xc));
    eax--;
    *((ebp - 8)) = eax;
    while (*((ebp - 8)) >= 0) {
        eax = *((ebp - 8));
        eax += *((ebp + 8));
        eax = *(eax);
        ebx = (int32_t) al;
        edx = *((ebp - 0xc));
        eax = *((ebp - 8));
        eax -= edx;
        eax = ~eax;
        ecx = eax*8;
        eax = ebx;
        eax <<= cl;
        *((ebp - 0x10)) += eax;
        *((ebp - 8))--;
    }
    eax = *((ebp - 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804ca77 */
#include <stdint.h>
 
int32_t dbg_quantum_cond_phase_kick (void) {
    complex float z;
    int32_t var_10h;
    int32_t i;
    int32_t control;
    int32_t target;
    float gamma;
    quantum_reg * reg;
    void * var_4h;
    char * var_8h;
    int32_t var_sp_ch;
    /* void quantum_cond_phase_kick(int control,int target,float gamma,quantum_reg * reg); */
    *(fp_stack--) = *((ebp + 0x10));
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (0xc, eax);
    if (eax != 0) {
        goto label_0;
    }
    eax = *((ebp + 0x10));
    *(esp) = eax;
    eax = quantum_cexp ();
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    *((ebp - 0x14)) = eax;
    *((ebp - 0x10)) = edx;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0x14));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            eax = *((ebp + 0x14));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 0xc));
            eax = *((eax + 8));
            ecx = *((ebp + 0xc));
            __asm ("shrd eax, edx, cl");
            edx >>= cl;
            if ((cl & 0x20) != 0) {
                eax = edx;
                edx = 0;
            }
            eax &= 1;
            if (al == 0) {
                goto label_1;
            }
            eax = *((ebp + 0x14));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            esi = edx + eax;
            eax = *((ebp + 0x14));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            ebx = edx;
            ecx = eax;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x10));
            eax = _mulsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *(esi) = eax;
            *((esi + 4)) = edx;
        }
label_1:
        *((ebp - 0xc))++;
        eax = *((ebp + 0x14));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x14));
    *(esp) = eax;
    quantum_decohere ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e54b */
#include <stdint.h>
 
int32_t dbg_quantum_char2mu (void) {
    long long unsigned int mu;
    int32_t var_14h;
    int32_t size;
    int32_t i;
    unsigned char * buf;
    /* long long unsigned int quantum_char2mu(unsigned char * buf); */
    *((ebp - 0x18)) = 0;
    *((ebp - 0x14)) = 0;
    *((ebp - 0x10)) = 8;
    eax = *((ebp - 0x10));
    eax--;
    *((ebp - 0xc)) = eax;
    while (*((ebp - 0xc)) >= 0) {
        eax = *((ebp - 0xc));
        eax += *((ebp + 8));
        eax = *(eax);
        eax = (int32_t) al;
        ebx = eax;
        esi = 0;
        edx = *((ebp - 0x10));
        eax = *((ebp - 0xc));
        eax -= edx;
        eax = ~eax;
        ecx = eax*8;
        eax = ebx;
        edx = esi;
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        *((ebp - 0x18)) += eax;
        *((ebp - 0x14)) += edx;
        *((ebp - 0xc))--;
    }
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804f628 */
#include <stdint.h>
 
int32_t dbg_quantum_qec_set_status (void) {
    int32_t stype;
    int32_t swidth;
    /* void quantum_qec_set_status(int stype,int swidth); */
    eax = *((ebp + 8));
    *(obj.type) = eax;
    eax = *((ebp + 0xc));
    *(obj.width) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8051e46 */
#include <stdint.h>
 
uint32_t dbg_quantum_vectoradd (void * arg_8h) {
    int32_t var_3ch;
    quantum_reg reg;
    int32_t var_28h;
    int32_t var_24h;
    void * ptr;
    int32_t var_1ch;
    int32_t addsize;
    int32_t k;
    int32_t j;
    int32_t i;
    quantum_reg * reg1;
    quantum_reg * reg2;
    size_t size;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_sp_18h;
    /* quantum_reg quantum_vectoradd(quantum_reg * reg1,quantum_reg * reg2); */
    *((ebp - 0x18)) = 0;
    eax = ebp - 0x2c;
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    quantum_copy_qureg ();
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax == 0) {
        eax = *((ebp + 0x10));
        eax = *((eax + 8));
        if (eax == 0) {
            goto label_0;
        }
    }
    eax = *((ebp + 0xc));
    *(esp) = eax;
    quantum_reconstruct_hash ();
    eax = ebp - 0x2c;
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    quantum_copy_qureg ();
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        edx = *((ebp + 0xc));
        eax = *(edx);
        *((esp + 8)) = eax;
        eax = *((edx + 4));
        *((esp + 0xc)) = eax;
        eax = *((edx + 8));
        eax = *((edx + 0xc));
        eax = *((edx + 0x10));
        eax = quantum_get_state (eax, ebx);
        if (eax == -1) {
            *((ebp - 0x18))++;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
    }
label_0:
    eax = *((ebp - 0x28));
    eax += *((ebp - 0x18));
    *((ebp - 0x28)) = eax;
    eax = *((ebp - 0x28));
    eax <<= 4;
    edx = *((ebp - 0x20));
    eax = realloc (edx, eax);
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0x20));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp - 0x18));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    *((ebp - 0x14)) = eax;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        edx = *((ebp + 0xc));
        eax = *(edx);
        *((esp + 8)) = eax;
        eax = *((edx + 4));
        *((esp + 0xc)) = eax;
        eax = *((edx + 8));
        eax = *((edx + 0xc));
        eax = *((edx + 0x10));
        eax = quantum_get_state (eax, ebx);
        *((ebp - 0x10)) = eax;
        if (*((ebp - 0x10)) >= 0) {
            edx = *((ebp - 0x20));
            eax = *((ebp - 0x10));
            eax <<= 4;
            esi = edx + eax;
            edx = *((ebp - 0x20));
            eax = *((ebp - 0x10));
            eax <<= 4;
            eax = edx + eax;
            ecx = *(eax);
            ebx = *((eax + 4));
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *((ebp - 0x3c)) = ecx;
            *(fp_stack--) = *((ebp - 0x3c));
            *((ebp - 0x3c)) = ebx;
            *(fp_stack--) = *((ebp - 0x3c));
            *((ebp - 0x3c)) = edx;
            *(fp_stack--) = *((ebp - 0x3c));
            *((ebp - 0x3c)) = eax;
            *(fp_stack--) = *((ebp - 0x3c));
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] += fp_stack[3];
            fp_stack++;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            *((ebp - 0x3c)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x3c));
            *((ebp - 0x3c)) = fp_stack[0];
            fp_stack--;
            edx = *((ebp - 0x3c));
            *(esi) = eax;
            *((esi + 4)) = edx;
        } else {
            edx = *((ebp - 0x20));
            eax = *((ebp - 0x14));
            eax <<= 4;
            ecx = edx + eax;
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 0xc));
            eax = *((eax + 8));
            *((ecx + 8)) = eax;
            *((ecx + 0xc)) = edx;
            edx = *((ebp - 0x20));
            eax = *((ebp - 0x14));
            eax <<= 4;
            ecx = edx + eax;
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *(ecx) = edx;
            *((ecx + 4)) = eax;
            *((ebp - 0x14))++;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
    }
    eax = *((ebp - 0x2c));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0x28));
    edx = *((ebp + 8));
    *((edx + 4)) = eax;
    eax = *((ebp - 0x24));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp - 0x20));
    edx = *((ebp + 8));
    *((edx + 0xc)) = eax;
    eax = *((ebp - 0x1c));
    edx = *((ebp + 8));
    *((edx + 0x10)) = eax;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804ea7d */
#include <stdint.h>
 
int32_t dbg_quantum_objcode_write (void) {
    int32_t var_14h;
    FILE * fhd;
    char * file;
    size_t size;
    size_t nitems;
    FILE * stream;
    /* int quantum_objcode_write(char * file); */
    eax = opstatus;
    if (eax == 0) {
        eax = stderr;
        fwrite (eax, 1, 0x49);
        *((ebp - 0x14)) = 1;
    } else {
        if (*((ebp + 8)) == 0) {
            eax = globalfile;
            *((ebp + 8)) = eax;
        }
        eax = *((ebp + 8));
        eax = fopen (eax, 0x80543ca);
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) == 0) {
            *((ebp - 0x14)) = 0xffffffff;
        } else {
            edx = position;
            ecx = objcode;
            eax = *((ebp - 4));
            fwrite (eax, edx, 1);
            eax = *((ebp - 4));
            fclose (eax);
            *((ebp - 0x14)) = 0;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804f63d */
#include <stdint.h>
 
int32_t dbg_quantum_qec_get_status (void) {
    int * ptype;
    int * pwidth;
    /* void quantum_qec_get_status(int * ptype,int * pwidth); */
    if (*((ebp + 8)) != 0) {
        edx = type;
        eax = *((ebp + 8));
        *(eax) = edx;
    }
    if (*((ebp + 0xc)) != 0) {
        edx = width;
        eax = *((ebp + 0xc));
        *(eax) = edx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804eb38 */
#include <stdint.h>
 
void dbg_quantum_objcode_exit (void) {
    char * file;
    /* void quantum_objcode_exit(char * file); */
    *(esp) = 0;
    quantum_objcode_write ();
    quantum_objcode_stop ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e67e */
#include <stdint.h>
 
int32_t dbg_quantum_objcode_stop (void) {
    /* void quantum_objcode_stop(); */
    *(obj.opstatus) = 0;
    eax = objcode;
    free (eax);
    *(obj.objcode) = 0;
    eax = allocated;
    eax <<= 0x10;
    eax = -eax;
    *(esp) = eax;
    quantum_memman ();
    *(obj.allocated) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804eb2b */
#include <stdint.h>
 
int32_t dbg_quantum_objcode_file (void) {
    char * file;
    /* void quantum_objcode_file(char * file); */
    eax = *((ebp + 8));
    *(obj.globalfile) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048ae4 */
#include <stdint.h>
 
int32_t dbg_quantum_ipow (void) {
    int32_t r;
    int32_t i;
    int32_t a;
    int32_t b;
    /* int quantum_ipow(int a,int b); */
    *((ebp - 8)) = 1;
    *((ebp - 4)) = 0;
    while (eax < *((ebp + 0xc))) {
        eax = *((ebp - 8));
        eax *= *((ebp + 8));
        *((ebp - 8)) = eax;
        *((ebp - 4))++;
        eax = *((ebp - 4));
    }
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048b15 */
#include <stdint.h>
 
int32_t dbg_quantum_gcd (void) {
    int32_t r;
    int32_t u;
    int32_t v;
    /* int quantum_gcd(int u,int v); */
    while (*((ebp + 0xc)) != 0) {
        edx = *((ebp + 8));
        eax = *((ebp + 8));
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp + 0xc;
        edx = *(edx:eax) % ebp + 0xc;
        *((ebp - 4)) = edx;
        eax = *((ebp + 0xc));
        *((ebp + 8)) = eax;
        eax = *((ebp - 4));
        *((ebp + 0xc)) = eax;
    }
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x805057c */
#include <stdint.h>
 
int32_t dbg_quantum_rk4a (int32_t arg_ch, int32_t arg_10h, int32_t arg_18h, int32_t arg_1ch) {
    int32_t var_ach;
    double epsilon;
    int32_t var_84h;
    double t;
    int32_t var_7ch;
    quantum_reg tmp;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    quantum_reg old;
    int32_t var_54h;
    int32_t var_50h;
    void * var_4ch;
    int32_t var_48h;
    quantum_reg reg2;
    void * s1;
    double dtused;
    double r;
    double delta;
    int32_t hashw;
    void * hash;
    int32_t i;
    quantum_reg * reg;
    double * dt;
    quantum_reg (*)() H;
    void * s2;
    size_t n;
    int32_t var_sp_14h;
    /* double quantum_rk4a(quantum_reg * reg,double t,double * dt,double epsilon,quantum_reg (*)() H); */
    eax = *((ebp + 0xc));
    *((ebp - 0x80)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x7c)) = eax;
    eax = *((ebp + 0x18));
    *((ebp - 0x88)) = eax;
    eax = *((ebp + 0x1c));
    *((ebp - 0x84)) = eax;
    eax = *((ebp + 8));
    eax = *((eax + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 8));
    *((eax + 0x10)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 8));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 8));
    *((eax + 8)) = 0;
    eax = ebp - 0x58;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    quantum_copy_qureg ();
    eax = ebp - 0x44;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    quantum_copy_qureg ();
label_0:
    eax = *((ebp + 0x14));
    *(fp_stack--) = *(eax);
    eax = *((ebp + 0x20));
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x80));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    quantum_rk4 (eax);
    eax = *((ebp + 0x14));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *(0x8054430);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0x20));
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x80));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    eax = ebp - 0x44;
    quantum_rk4 (eax);
    eax = *((ebp + 0x14));
    *(fp_stack--) = *(eax);
    *(fp_stack--) = *(0x8054430);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    eax = *((ebp + 0x20));
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x80));
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    eax = ebp - 0x44;
    quantum_rk4 (eax);
    *(fp_stack--) = 0.0;
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 8));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *(eax);
        ebx = *((eax + 4));
        edx = *((ebp - 0x38));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        *((ebp - 0xac)) = ecx;
        *(fp_stack--) = *((ebp - 0xac));
        *((ebp - 0xac)) = ebx;
        *(fp_stack--) = *((ebp - 0xac));
        *((ebp - 0xac)) = edx;
        *(fp_stack--) = *((ebp - 0xac));
        *((ebp - 0xac)) = eax;
        *(fp_stack--) = *((ebp - 0xac));
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] -= fp_stack[3];
        fp_stack++;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        *((ebp - 0xac)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0xac));
        *((ebp - 0xac)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0xac));
        quantum_real (eax, edx);
        *((ebp - 0x9c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 8));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *(eax);
        ebx = *((eax + 4));
        edx = *((ebp - 0x38));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        *((ebp - 0xac)) = ecx;
        *(fp_stack--) = *((ebp - 0xac));
        *((ebp - 0xac)) = ebx;
        *(fp_stack--) = *((ebp - 0xac));
        *((ebp - 0xac)) = edx;
        *(fp_stack--) = *((ebp - 0xac));
        *((ebp - 0xac)) = eax;
        *(fp_stack--) = *((ebp - 0xac));
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack[0] -= fp_stack[3];
        fp_stack++;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
        *((ebp - 0xac)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0xac));
        *((ebp - 0xac)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0xac));
        ax = quantum_imag (eax, edx);
        *(fp_stack--) = *((ebp - 0x9c));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (eax > 0) {
            eax = *((ebp + 8));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            ecx = *(eax);
            ebx = *((eax + 4));
            edx = *((ebp - 0x38));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *((ebp - 0xac)) = ecx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = ebx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = edx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = eax;
            *(fp_stack--) = *((ebp - 0xac));
            fp_tmp_4 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_4;
            fp_stack[0] -= fp_stack[3];
            fp_stack++;
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_tmp_5 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_5;
            *((ebp - 0xac)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0xac));
            *((ebp - 0xac)) = fp_stack[0];
            fp_stack--;
            edx = *((ebp - 0xac));
            quantum_real (eax, edx);
            *(fp_stack--) = fp_stack[0];
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            *((ebp - 0x98)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp + 8));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            ecx = *(eax);
            ebx = *((eax + 4));
            edx = *((ebp - 0x38));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *((ebp - 0xac)) = ecx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = ebx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = edx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = eax;
            *(fp_stack--) = *((ebp - 0xac));
            fp_tmp_6 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_6;
            fp_stack[0] += fp_stack[3];
            fp_stack++;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            fp_tmp_7 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_7;
            *((ebp - 0xac)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0xac));
            *((ebp - 0xac)) = fp_stack[0];
            fp_stack--;
            edx = *((ebp - 0xac));
            quantum_real (eax, edx);
            *((ebp - 0x98)) /= fp_stack[0];
            *((ebp - 0x28)) = fp_stack[0];
            fp_stack--;
        } else {
            eax = *((ebp + 8));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            ecx = *(eax);
            ebx = *((eax + 4));
            edx = *((ebp - 0x38));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *((ebp - 0xac)) = ecx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = ebx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = edx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = eax;
            *(fp_stack--) = *((ebp - 0xac));
            fp_tmp_8 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_8;
            fp_stack[0] -= fp_stack[3];
            fp_stack++;
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            fp_tmp_9 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_9;
            *((ebp - 0xac)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0xac));
            *((ebp - 0xac)) = fp_stack[0];
            fp_stack--;
            edx = *((ebp - 0xac));
            quantum_imag (eax, edx);
            *(fp_stack--) = fp_stack[0];
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            *((ebp - 0x94)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp + 8));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            ecx = *(eax);
            ebx = *((eax + 4));
            edx = *((ebp - 0x38));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *((ebp - 0xac)) = ecx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = ebx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = edx;
            *(fp_stack--) = *((ebp - 0xac));
            *((ebp - 0xac)) = eax;
            *(fp_stack--) = *((ebp - 0xac));
            fp_tmp_10 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_10;
            fp_stack[0] += fp_stack[3];
            fp_stack++;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            fp_tmp_11 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_11;
            *((ebp - 0xac)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0xac));
            *((ebp - 0xac)) = fp_stack[0];
            fp_stack--;
            edx = *((ebp - 0xac));
            ax = quantum_imag (eax, edx);
            *((ebp - 0x94)) /= fp_stack[0];
            *((ebp - 0x28)) = fp_stack[0];
            fp_stack--;
        }
        *(fp_stack--) = *((ebp - 0x28));
        *(fp_stack--) = *((ebp - 0x20));
        fp_tmp_12 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_12;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (eax > 0) {
            *(fp_stack--) = *((ebp - 0x28));
            *((ebp - 0x20)) = fp_stack[0];
            fp_stack--;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 8));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x14));
    *(fp_stack--) = *(eax);
    *((ebp - 0x30)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x14));
    *(fp_stack--) = *(eax);
    *((ebp - 0x90)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x88));
    fp_stack[0] /= *((ebp - 0x20));
    *(fp_stack--) = *(0x8054440);
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    *(esp) = fp_stack[0];
    fp_stack--;
    pow ();
    fp_stack[0] *= *((ebp - 0x90));
    eax = *((ebp + 0x14));
    *(eax) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x20));
    *(fp_stack--) = *((ebp - 0x88));
    fp_tmp_13 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_13;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (eax > *((ebp - 0xc))) {
        edx = *((ebp + 8));
        eax = *(edx);
        *((ebp - 0x6c)) = eax;
        eax = *((edx + 4));
        *((ebp - 0x68)) = eax;
        eax = *((edx + 8));
        *((ebp - 0x64)) = eax;
        eax = *((edx + 0xc));
        *((ebp - 0x60)) = eax;
        eax = *((edx + 0x10));
        *((ebp - 0x5c)) = eax;
        edx = *((ebp + 8));
        eax = *((ebp - 0x58));
        *(edx) = eax;
        eax = *((ebp - 0x54));
        *((edx + 4)) = eax;
        eax = *((ebp - 0x50));
        *((edx + 8)) = eax;
        eax = *((ebp - 0x4c));
        *((edx + 0xc)) = eax;
        eax = *((ebp - 0x48));
        *((edx + 0x10)) = eax;
        eax = *((ebp - 0x6c));
        *((ebp - 0x58)) = eax;
        eax = *((ebp - 0x68));
        *((ebp - 0x54)) = eax;
        eax = *((ebp - 0x64));
        *((ebp - 0x50)) = eax;
        eax = *((ebp - 0x60));
        *((ebp - 0x4c)) = eax;
        eax = *((ebp - 0x5c));
        *((ebp - 0x48)) = eax;
        eax = *((ebp + 8));
        eax = *((eax + 4));
        ecx = *((eax + 4));
        ecx <<= 4;
        eax = *((ebp + 8));
        eax = *((eax + 0xc));
        edx = *((ebp - 0x38));
        memcpy (edx, eax, ecx);
        eax = *((ebp + 8));
        eax = *((eax + 4));
        ecx = *((eax + 4));
        ecx <<= 4;
        eax = *((ebp + 8));
        eax = *((eax + 0xc));
        edx = *((ebp - 0x4c));
        ax = memcpy (edx, eax, ecx);
    }
    *(fp_stack--) = *((ebp - 0x20));
    *(fp_stack--) = *((ebp - 0x88));
    fp_tmp_14 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_14;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (ecx > 0) {
        goto label_0;
    }
    edx = *((ebp - 0x10));
    eax = *((ebp + 8));
    *((eax + 0x10)) = edx;
    edx = *((ebp + 8));
    eax = *((ebp - 0x14));
    *((edx + 8)) = eax;
    *(fp_stack--) = *((ebp - 0x30));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8050eea */
#include <stdint.h>
 
int32_t dbg_quantum_qureg2matrix (int32_t arg_8h, int32_t arg_10h, int32_t arg_18h) {
    quantum_matrix m;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t i;
    quantum_reg reg;
    int32_t var_4h;
    int32_t var_8h;
    /* quantum_matrix quantum_qureg2matrix(quantum_reg reg); */
    ecx = *((ebp + 0xc));
    eax = 1;
    eax <<= cl;
    edx = ebp - 0x10;
    *((esp + 8)) = eax;
    *((esp + 4)) = 1;
    quantum_new_matrix (edx);
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        ecx = *((ebp - 8));
        edx = *((ebp + 0x18));
        eax = *((ebp - 4));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        eax <<= 3;
        ecx += eax;
        edx = *((ebp + 0x18));
        eax = *((ebp - 4));
        eax <<= 4;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        *(ecx) = edx;
        *((ecx + 4)) = eax;
        *((ebp - 4))++;
        eax = *((ebp + 0x10));
    }
    eax = *((ebp - 0x10));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0xc));
    edx = *((ebp + 8));
    *((edx + 4)) = eax;
    eax = *((ebp - 8));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804fea4 */
#include <stdint.h>
 
int32_t dbg_quantum_rk4 (int32_t arg_ch, int32_t arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_bch;
    int32_t var_a8h;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    double dt;
    int32_t var_74h;
    double t;
    int32_t var_6ch;
    quantum_reg tmp;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    quantum_reg out;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    quantum_reg k;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    double r;
    int32_t hashw;
    void * hash;
    int32_t i;
    quantum_reg * reg;
    quantum_reg (*)() H;
    int32_t var_4h_9;
    int32_t var_8h_4;
    int32_t var_4h_8;
    int32_t var_4h_7;
    int32_t var_8h_3;
    int32_t var_4h_6;
    int32_t var_4h_5;
    int32_t var_8h_2;
    int32_t var_4h_4;
    int32_t var_4h_3;
    int32_t var_4h_2;
    int32_t var_8h;
    int32_t var_4h;
    int32_t var_sp_10h;
    /* void quantum_rk4(quantum_reg * reg,double t,double dt,quantum_reg (*)() H); */
    eax = *((ebp + 0xc));
    *((ebp - 0x70)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x6c)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x78)) = eax;
    eax = *((ebp + 0x18));
    *((ebp - 0x74)) = eax;
    *(fp_stack--) = 0.0;
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = *((eax + 0x10));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 8));
    *((eax + 0x10)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 8));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 8));
    *((eax + 8)) = 0;
    edx = ebp - 0x98;
    eax = *((ebp + 8));
    *(fp_stack--) = *((ebp - 0x70));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x1c));
    quantum_matrix_qureg (eax, eax);
    eax = *((ebp - 0x98));
    *((ebp - 0x34)) = eax;
    eax = *((ebp - 0x94));
    *((ebp - 0x30)) = eax;
    eax = *((ebp - 0x90));
    *((ebp - 0x2c)) = eax;
    eax = *((ebp - 0x8c));
    *((ebp - 0x28)) = eax;
    eax = *((ebp - 0x88));
    *((ebp - 0x24)) = eax;
    *(fp_stack--) = *((ebp - 0x78));
    *(fp_stack--) = 0.0;
    eax = ebp - 0xa8;
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    muldc3 (eax);
    *(fp_stack--) = *((ebp - 0xa8));
    *(fp_stack--) = *((ebp - 0xa0));
    eax = ebp - 0xa8;
    *(fp_stack--) = 0.0;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8054430);
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    _divdc3 (eax);
    *(fp_stack--) = *((ebp - 0xa8));
    *(fp_stack--) = *((ebp - 0xa0));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    *((ebp - 0xac)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xac));
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *((ebp - 0xac)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xac));
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    *((ebp - 0xbc)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0xbc));
    *((ebp - 0xbc)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 0xbc));
    ecx = eax;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    *(esp) = ecx;
    quantum_scalar_qureg (edx);
    edx = ebp - 0x98;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    quantum_vectoradd (edx);
    eax = *((ebp - 0x98));
    *((ebp - 0x5c)) = eax;
    eax = *((ebp - 0x94));
    *((ebp - 0x58)) = eax;
    eax = *((ebp - 0x90));
    *((ebp - 0x54)) = eax;
    eax = *((ebp - 0x8c));
    *((ebp - 0x50)) = eax;
    eax = *((ebp - 0x88));
    *((ebp - 0x4c)) = eax;
    edx = 0x3eaaaaab;
    ecx = 0;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    *(esp) = edx;
    quantum_scalar_qureg (ecx);
    edx = ebp - 0x98;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    quantum_vectoradd (edx);
    eax = *((ebp - 0x98));
    *((ebp - 0x48)) = eax;
    eax = *((ebp - 0x94));
    *((ebp - 0x44)) = eax;
    eax = *((ebp - 0x90));
    *((ebp - 0x40)) = eax;
    eax = *((ebp - 0x8c));
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0x88));
    *((ebp - 0x38)) = eax;
    eax = ebp - 0x34;
    *(esp) = eax;
    quantum_delete_qureg ();
    *(fp_stack--) = *((ebp - 0x78));
    *(fp_stack--) = *(0x8054430);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    fp_stack[0] += *((ebp - 0x70));
    edx = ebp - 0x98;
    eax = ebp - 0x5c;
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x1c));
    quantum_matrix_qureg (eax, eax);
    eax = *((ebp - 0x98));
    *((ebp - 0x34)) = eax;
    eax = *((ebp - 0x94));
    *((ebp - 0x30)) = eax;
    eax = *((ebp - 0x90));
    *((ebp - 0x2c)) = eax;
    eax = *((ebp - 0x8c));
    *((ebp - 0x28)) = eax;
    eax = *((ebp - 0x88));
    *((ebp - 0x24)) = eax;
    eax = ebp - 0x5c;
    *(esp) = eax;
    quantum_delete_qureg ();
    *(fp_stack--) = *((ebp - 0x78));
    *(fp_stack--) = 0.0;
    eax = ebp - 0xa8;
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    muldc3 (eax);
    *(fp_stack--) = *((ebp - 0xa8));
    *(fp_stack--) = *((ebp - 0xa0));
    eax = ebp - 0xa8;
    *(fp_stack--) = 0.0;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8054430);
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    _divdc3 (eax);
    *(fp_stack--) = *((ebp - 0xa8));
    *(fp_stack--) = *((ebp - 0xa0));
    fp_tmp_3 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    *((ebp - 0xac)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xac));
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    *((ebp - 0xac)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xac));
    fp_tmp_5 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_5;
    *((ebp - 0xbc)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0xbc));
    *((ebp - 0xbc)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 0xbc));
    ecx = eax;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    *(esp) = ecx;
    quantum_scalar_qureg (edx);
    edx = ebp - 0x98;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    quantum_vectoradd (edx);
    eax = *((ebp - 0x98));
    *((ebp - 0x5c)) = eax;
    eax = *((ebp - 0x94));
    *((ebp - 0x58)) = eax;
    eax = *((ebp - 0x90));
    *((ebp - 0x54)) = eax;
    eax = *((ebp - 0x8c));
    *((ebp - 0x50)) = eax;
    eax = *((ebp - 0x88));
    *((ebp - 0x4c)) = eax;
    edx = 0x3f2aaaab;
    ecx = 0;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    *(esp) = edx;
    quantum_scalar_qureg (ecx);
    eax = ebp - 0x34;
    *((esp + 4)) = eax;
    eax = ebp - 0x48;
    *(esp) = eax;
    quantum_vectoradd_inplace ();
    eax = ebp - 0x34;
    *(esp) = eax;
    quantum_delete_qureg ();
    *(fp_stack--) = *((ebp - 0x78));
    *(fp_stack--) = *(0x8054430);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    fp_stack[0] += *((ebp - 0x70));
    edx = ebp - 0x98;
    eax = ebp - 0x5c;
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x1c));
    quantum_matrix_qureg (eax, eax);
    eax = *((ebp - 0x98));
    *((ebp - 0x34)) = eax;
    eax = *((ebp - 0x94));
    *((ebp - 0x30)) = eax;
    eax = *((ebp - 0x90));
    *((ebp - 0x2c)) = eax;
    eax = *((ebp - 0x8c));
    *((ebp - 0x28)) = eax;
    eax = *((ebp - 0x88));
    *((ebp - 0x24)) = eax;
    eax = ebp - 0x5c;
    *(esp) = eax;
    quantum_delete_qureg ();
    *(fp_stack--) = *((ebp - 0x78));
    *(fp_stack--) = 0.0;
    eax = ebp - 0xa8;
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    muldc3 (eax);
    *(fp_stack--) = *((ebp - 0xa8));
    *(fp_stack--) = *((ebp - 0xa0));
    fp_tmp_6 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    *((ebp - 0xac)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xac));
    fp_tmp_7 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_7;
    *((ebp - 0xac)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xac));
    fp_tmp_8 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    *((ebp - 0xbc)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0xbc));
    *((ebp - 0xbc)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 0xbc));
    ecx = eax;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    *(esp) = ecx;
    quantum_scalar_qureg (edx);
    edx = ebp - 0x98;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    quantum_vectoradd (edx);
    eax = *((ebp - 0x98));
    *((ebp - 0x5c)) = eax;
    eax = *((ebp - 0x94));
    *((ebp - 0x58)) = eax;
    eax = *((ebp - 0x90));
    *((ebp - 0x54)) = eax;
    eax = *((ebp - 0x8c));
    *((ebp - 0x50)) = eax;
    eax = *((ebp - 0x88));
    *((ebp - 0x4c)) = eax;
    edx = 0x3eaaaaab;
    ecx = 0;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    *(esp) = edx;
    quantum_scalar_qureg (ecx);
    eax = ebp - 0x34;
    *((esp + 4)) = eax;
    eax = ebp - 0x48;
    *(esp) = eax;
    quantum_vectoradd_inplace ();
    eax = ebp - 0x34;
    *(esp) = eax;
    quantum_delete_qureg ();
    *(fp_stack--) = *((ebp - 0x70));
    fp_stack[0] += *((ebp - 0x78));
    edx = ebp - 0x98;
    eax = ebp - 0x5c;
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x1c));
    quantum_matrix_qureg (eax, eax);
    eax = *((ebp - 0x98));
    *((ebp - 0x34)) = eax;
    eax = *((ebp - 0x94));
    *((ebp - 0x30)) = eax;
    eax = *((ebp - 0x90));
    *((ebp - 0x2c)) = eax;
    eax = *((ebp - 0x8c));
    *((ebp - 0x28)) = eax;
    eax = *((ebp - 0x88));
    *((ebp - 0x24)) = eax;
    eax = ebp - 0x5c;
    *(esp) = eax;
    quantum_delete_qureg ();
    *(fp_stack--) = *((ebp - 0x78));
    *(fp_stack--) = 0.0;
    eax = ebp - 0xa8;
    *(fp_stack--) = 1.0;
    fp_stack[0] = -fp_stack[0];
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    muldc3 (eax);
    *(fp_stack--) = *((ebp - 0xa8));
    *(fp_stack--) = *((ebp - 0xa0));
    eax = ebp - 0xa8;
    *(fp_stack--) = 0.0;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x8054438);
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    _divdc3 (eax);
    *(fp_stack--) = *((ebp - 0xa8));
    *(fp_stack--) = *((ebp - 0xa0));
    fp_tmp_9 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_9;
    *((ebp - 0xac)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xac));
    fp_tmp_10 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_10;
    *((ebp - 0xac)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xac));
    fp_tmp_11 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_11;
    *((ebp - 0xbc)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0xbc));
    *((ebp - 0xbc)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 0xbc));
    ecx = eax;
    eax = ebp - 0x34;
    *((esp + 8)) = eax;
    *(esp) = ecx;
    quantum_scalar_qureg (edx);
    eax = ebp - 0x34;
    *((esp + 4)) = eax;
    eax = ebp - 0x48;
    *(esp) = eax;
    quantum_vectoradd_inplace ();
    eax = ebp - 0x34;
    *(esp) = eax;
    quantum_delete_qureg ();
    eax = *((ebp + 8));
    *(esp) = eax;
    quantum_delete_qureg ();
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        edx = *((ebp - 0x3c));
        eax = *((ebp - 0xc));
        eax <<= 4;
        edx += eax;
        eax = *(edx);
        *(esp) = eax;
        eax = *((edx + 4));
        quantum_prob (eax);
        *(fp_stack--) = *((ebp - 0x20));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0x20)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0xc))++;
        eax = *((ebp - 0x44));
    }
    eax = *((ebp - 0x10));
    *((ebp - 0x38)) = eax;
    eax = *((ebp - 0x14));
    *((ebp - 0x40)) = eax;
    edx = *((ebp + 8));
    eax = *((ebp - 0x48));
    *(edx) = eax;
    eax = *((ebp - 0x44));
    *((edx + 4)) = eax;
    eax = *((ebp - 0x40));
    *((edx + 8)) = eax;
    eax = *((ebp - 0x3c));
    *((edx + 0xc)) = eax;
    eax = *((ebp - 0x38));
    *((edx + 0x10)) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8051d22 */
#include <stdint.h>
 
int32_t dbg_quantum_dot_product_noconj (void) {
    int32_t var_1ch;
    complex float f;
    int32_t var_14h;
    int32_t j;
    int32_t i;
    quantum_reg * reg1;
    quantum_reg * reg2;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_10h;
    int32_t var_sp_14h;
    int32_t var_sp_18h;
    /* complex float quantum_dot_product_noconj(quantum_reg * reg1,quantum_reg * reg2); */
    eax = 0;
    *((ebp - 0x18)) = eax;
    eax = 0;
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax != 0) {
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_reconstruct_hash ();
    }
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 8));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        edx = *((ebp + 0xc));
        eax = *(edx);
        *((esp + 8)) = eax;
        eax = *((edx + 4));
        *((esp + 0xc)) = eax;
        eax = *((edx + 8));
        eax = *((edx + 0xc));
        eax = *((edx + 0x10));
        eax = quantum_get_state (eax, ebx);
        *((ebp - 0x10)) = eax;
        if (*((ebp - 0x10)) >= 0) {
            eax = *((ebp + 8));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            ecx = *(eax);
            ebx = *((eax + 4));
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x10));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            esi = ecx;
            ecx = ebx;
            eax = _mulsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *((ebp - 0x1c)) = eax;
            *(fp_stack--) = *((ebp - 0x1c));
            *((ebp - 0x1c)) = edx;
            *(fp_stack--) = *((ebp - 0x1c));
            *(fp_stack--) = *((ebp - 0x18));
            *(fp_stack--) = *((ebp - 0x14));
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] += fp_stack[3];
            fp_stack++;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            *((ebp - 0x1c)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x1c));
            *((ebp - 0x1c)) = fp_stack[0];
            fp_stack--;
            edx = *((ebp - 0x1c));
            *((ebp - 0x18)) = eax;
            *((ebp - 0x14)) = edx;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 8));
        eax = *((eax + 4));
    }
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804c195 */
#include <stdint.h>
 
int32_t dbg_quantum_walsh (void) {
    int32_t i;
    int32_t width;
    quantum_reg * reg;
    int32_t var_sp_4h;
    /* void quantum_walsh(int width,quantum_reg * reg); */
    *((ebp - 4)) = 0;
    while (eax < *((ebp + 8))) {
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp - 4));
        *(esp) = eax;
        quantum_hadamard ();
        *((ebp - 4))++;
        eax = *((ebp - 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8051461 */
#include <stdint.h>
 
int32_t dbg_quantum_kronecker (size_t arg_8h) {
    int32_t var_30h;
    quantum_reg reg;
    size_t nmeb;
    int32_t var_20h;
    void * var_1ch;
    void * var_18h;
    int32_t j;
    int32_t i;
    quantum_reg * reg1;
    quantum_reg * reg2;
    size_t size;
    int32_t var_8h;
    int32_t var_ch;
    /* quantum_reg quantum_kronecker(quantum_reg * reg1,quantum_reg * reg2); */
    eax = *((ebp + 0xc));
    edx = *(eax);
    eax = *((ebp + 0x10));
    eax = *(eax);
    eax = edx + eax;
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 0xc));
    edx = *((eax + 4));
    eax = *((ebp + 0x10));
    eax = *((eax + 4));
    eax *= edx;
    *((ebp - 0x24)) = eax;
    eax = *((ebp + 0xc));
    edx = *((eax + 4));
    eax = *((ebp + 0x10));
    eax = *((eax + 4));
    eax *= edx;
    eax += 2;
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0x24));
    eax = calloc (eax, 0x10);
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x1c));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp - 0x24));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    ecx = *((ebp - 0x20));
    eax = 1;
    eax <<= cl;
    eax = calloc (eax, 4);
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0x18));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    ecx = *((ebp - 0x20));
    eax = 4;
    eax <<= cl;
    *(esp) = eax;
    quantum_memman ();
    *((ebp - 0x10)) = 0;
    goto label_1;
label_0:
    *((ebp - 0x14)) = 0;
    while (eax > *((ebp - 0x14))) {
        edx = *((ebp - 0x1c));
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
        eax *= *((ebp - 0x10));
        eax += *((ebp - 0x14));
        eax <<= 4;
        edx += eax;
        *((ebp - 0x30)) = edx;
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x10));
        eax <<= 4;
        eax = edx + eax;
        ebx = *((eax + 8));
        esi = *((eax + 0xc));
        eax = *((ebp + 0x10));
        ecx = *(eax);
        edi = esi;
        esi = ebx;
        __asm ("shld edi, esi, cl");
        esi <<= cl;
        if ((cl & 0x20) != 0) {
            edi = esi;
            esi = 0;
        }
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x14));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        eax = esi;
        eax |= ecx;
        edx = edi;
        edx |= ebx;
        ecx = *((ebp - 0x30));
        *((ecx + 8)) = eax;
        *((ecx + 0xc)) = edx;
        edx = *((ebp - 0x1c));
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
        eax *= *((ebp - 0x10));
        eax += *((ebp - 0x14));
        eax <<= 4;
        edi = edx + eax;
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x10));
        eax <<= 4;
        eax = edx + eax;
        ecx = *(eax);
        ebx = *((eax + 4));
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x14));
        eax <<= 4;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        esi = ecx;
        ecx = ebx;
        eax = _mulsc3 (eax, ecx, edx);
        ecx = eax;
        ebx = edx;
        eax = ecx;
        edx = ebx;
        *(edi) = eax;
        *((edi + 4)) = edx;
        *((ebp - 0x14))++;
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
    }
    *((ebp - 0x10))++;
label_1:
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    if (eax > *((ebp - 0x10))) {
        goto label_0;
    }
    eax = *((ebp - 0x28));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0x24));
    ecx = *((ebp + 8));
    *((ecx + 4)) = eax;
    eax = *((ebp - 0x20));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp - 0x1c));
    ecx = *((ebp + 8));
    *((ecx + 0xc)) = eax;
    eax = *((ebp - 0x18));
    edx = *((ebp + 8));
    *((edx + 0x10)) = eax;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804b7a8 */
#include <stdint.h>
 
int32_t dbg_quantum_gate2 (int32_t arg_14h, int32_t arg_18h) {
    int32_t var_d8h;
    int32_t var_d4h;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_bch;
    int32_t var_98h;
    int32_t var_94h;
    int32_t var_90h;
    complex float[4] psi_sub;
    int32_t var_6ch;
    int[4] base;
    int[2] bits;
    int32_t var_3ch;
    char * done;
    float limit;
    int32_t decsize;
    int32_t addsize;
    int32_t l;
    int32_t k;
    int32_t j;
    int32_t i;
    int32_t target1;
    int32_t target2;
    quantum_matrix m;
    quantum_reg * reg;
    size_t var_4h_2;
    int32_t var_8h_2;
    size_t size;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    /* void quantum_gate2(int target1,int target2,quantum_matrix m,quantum_reg * reg); */
    *((ebp - 0x2c)) = 0;
    *((ebp - 0x30)) = 0;
    eax = *((ebp + 0x14));
    if (eax == 4) {
        eax = *((ebp + 0x10));
        if (eax == 4) {
            goto label_2;
        }
    }
    *(esp) = 4;
    quantum_error ();
label_2:
    *((ebp - 0x1c)) = 0;
    while (eax > *((ebp - 0x1c))) {
        eax = *((ebp + 0x1c));
        edx = *((eax + 0x10));
        eax = *((ebp - 0x1c));
        eax <<= 2;
        eax = edx + eax;
        *(eax) = 0;
        *((ebp - 0x1c))++;
        eax = *((ebp + 0x1c));
        ecx = *((eax + 8));
        eax = 1;
        eax <<= cl;
    }
    *((ebp - 0x1c)) = 0;
    while (eax > *((ebp - 0x1c))) {
        eax = *((ebp + 0x1c));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x1c));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 8));
        ecx = *((eax + 0xc));
        eax = *((ebp + 0x1c));
        eax = *((ebp - 0x1c));
        quantum_add_hash (eax, ecx, eax);
        *((ebp - 0x1c))++;
        eax = *((ebp + 0x1c));
        eax = *((eax + 4));
    }
    *((ebp - 0x1c)) = 0;
    while (eax > *((ebp - 0x1c))) {
        eax = *((ebp + 0x1c));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x1c));
        eax <<= 4;
        eax = edx + eax;
        esi = *((eax + 8));
        edi = *((eax + 0xc));
        ecx = *((ebp + 8));
        *((ebp - 0xd0)) = 1;
        *((ebp - 0xcc)) = 0;
        eax = *((ebp - 0xd0));
        edx = *((ebp - 0xcc));
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        ecx = eax;
        ebx = edx;
        eax = esi;
        eax ^= ecx;
        edx = edi;
        edx ^= ebx;
        ebx = *((ebp + 0x1c));
        ecx = *(ebx);
        ecx = *((ebx + 4));
        ecx = *((ebx + 8));
        ecx = *((ebx + 0xc));
        ecx = *((ebx + 0x10));
        eax = quantum_get_state (ecx, edx, ecx);
        if (eax == -1) {
            *((ebp - 0x2c))++;
        }
        eax = *((ebp + 0x1c));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x1c));
        eax <<= 4;
        eax = edx + eax;
        esi = *((eax + 8));
        edi = *((eax + 0xc));
        ecx = *((ebp + 0xc));
        *((ebp - 0xd0)) = 1;
        *((ebp - 0xcc)) = 0;
        eax = *((ebp - 0xd0));
        edx = *((ebp - 0xcc));
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        ecx = eax;
        ebx = edx;
        eax = esi;
        eax ^= ecx;
        edx = edi;
        edx ^= ebx;
        ebx = *((ebp + 0x1c));
        ecx = *(ebx);
        ecx = *((ebx + 4));
        ecx = *((ebx + 8));
        ecx = *((ebx + 0xc));
        ecx = *((ebx + 0x10));
        eax = quantum_get_state (ecx, edx, ecx);
        if (eax == -1) {
            *((ebp - 0x2c))++;
        }
        *((ebp - 0x1c))++;
        eax = *((ebp + 0x1c));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x1c));
    eax = *((eax + 4));
    eax += *((ebp - 0x2c));
    edx = eax;
    edx <<= 4;
    eax = *((ebp + 0x1c));
    eax = *((eax + 0xc));
    eax = realloc (eax, edx);
    edx = eax;
    eax = *((ebp + 0x1c));
    *((eax + 0xc)) = edx;
    eax = *((ebp + 0x1c));
    eax = *((eax + 0xc));
    if (eax == 0) {
        *(esp) = 4;
        quantum_error ();
    }
    eax = *((ebp - 0x2c));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    *((ebp - 0x1c)) = 0;
    while (eax < *((ebp - 0x2c))) {
        eax = *((ebp + 0x1c));
        edx = *((eax + 0xc));
        eax = *((ebp + 0x1c));
        eax = *((eax + 4));
        eax += *((ebp - 0x1c));
        eax <<= 4;
        eax = edx + eax;
        *((eax + 8)) = 0;
        *((eax + 0xc)) = 0;
        eax = *((ebp + 0x1c));
        edx = *((eax + 0xc));
        eax = *((ebp + 0x1c));
        eax = *((eax + 4));
        eax += *((ebp - 0x1c));
        eax <<= 4;
        edx += eax;
        eax = 0;
        *(edx) = eax;
        eax = 0;
        *((edx + 4)) = eax;
        *((ebp - 0x1c))++;
        eax = *((ebp - 0x1c));
    }
    eax = *((ebp + 0x1c));
    eax = *((eax + 4));
    eax += *((ebp - 0x2c));
    eax = calloc (eax, 1);
    *((ebp - 0x38)) = eax;
    if (*((ebp - 0x38)) == 0) {
        *(esp) = 4;
        quantum_error ();
    }
    eax = *((ebp + 0x1c));
    eax = *((eax + 4));
    edx = *((eax + 4));
    eax = *((ebp - 0x2c));
    eax = edx + eax;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 0x1c));
    eax = *((eax + 4));
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 0x1c));
    ecx = *(eax);
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    *(fp_stack--) = *(esp);
    esp = esp + 8;
    ? = fp_stack[0];
    fp_stack--;
    if (edx < 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = fp_stack[?];
    *((ebp - 0x80)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x80));
    *(fp_stack--) = 1.0;
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = *(0x8054348);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((ebp - 0x34)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    *((ebp - 0x40)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x3c)) = eax;
    *((ebp - 0x1c)) = 0;
    goto label_3;
label_1:
    eax = *((ebp - 0x1c));
    eax += *((ebp - 0x38));
    eax = *(eax);
    if (al != 0) {
        goto label_4;
    }
    eax = *((ebp + 0x1c));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x1c));
    eax <<= 4;
    eax = edx + eax;
    edx = *((eax + 8));
    ecx = *((eax + 0xc));
    eax = ebp - 0x40;
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 2;
    eax = quantum_bitmask (edx, ecx);
    *((ebp - 0x20)) = eax;
    edx = *((ebp - 0x20));
    eax = *((ebp - 0x1c));
    *((ebp + edx*4 - 0x50)) = eax;
    eax = *((ebp - 0x20));
    edx = *((ebp - 0x20));
    edx ^= 1;
    *((ebp - 0x98)) = edx;
    eax = *((ebp + 0x1c));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x1c));
    eax <<= 4;
    eax = edx + eax;
    esi = *((eax + 8));
    edi = *((eax + 0xc));
    ecx = *((ebp + 0xc));
    *((ebp - 0xd0)) = 1;
    *((ebp - 0xcc)) = 0;
    eax = *((ebp - 0xd0));
    edx = *((ebp - 0xcc));
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    ecx = eax;
    ebx = edx;
    eax = esi;
    eax ^= ecx;
    edx = edi;
    edx ^= ebx;
    ebx = *((ebp + 0x1c));
    ecx = *(ebx);
    ecx = *((ebx + 4));
    ecx = *((ebx + 8));
    ecx = *((ebx + 0xc));
    ecx = *((ebx + 0x10));
    eax = quantum_get_state (ecx, edx, ecx);
    edx = *((ebp - 0x98));
    *((ebp + edx*4 - 0x50)) = eax;
    eax = *((ebp - 0x20));
    ecx = *((ebp - 0x20));
    ecx ^= 2;
    *((ebp - 0x94)) = ecx;
    eax = *((ebp + 0x1c));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x1c));
    eax <<= 4;
    eax = edx + eax;
    esi = *((eax + 8));
    edi = *((eax + 0xc));
    ecx = *((ebp + 8));
    *((ebp - 0xd0)) = 1;
    *((ebp - 0xcc)) = 0;
    eax = *((ebp - 0xd0));
    edx = *((ebp - 0xcc));
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    ecx = eax;
    ebx = edx;
    eax = esi;
    eax ^= ecx;
    edx = edi;
    edx ^= ebx;
    ebx = *((ebp + 0x1c));
    ecx = *(ebx);
    ecx = *((ebx + 4));
    ecx = *((ebx + 8));
    ecx = *((ebx + 0xc));
    ecx = *((ebx + 0x10));
    eax = quantum_get_state (ecx, edx, ecx);
    edx = *((ebp - 0x94));
    *((ebp + edx*4 - 0x50)) = eax;
    eax = *((ebp - 0x20));
    ecx = *((ebp - 0x20));
    ecx ^= 3;
    *((ebp - 0x90)) = ecx;
    eax = *((ebp + 0x1c));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x1c));
    eax <<= 4;
    eax = edx + eax;
    esi = *((eax + 8));
    edi = *((eax + 0xc));
    ecx = *((ebp + 8));
    *((ebp - 0xd0)) = 1;
    *((ebp - 0xcc)) = 0;
    eax = *((ebp - 0xd0));
    edx = *((ebp - 0xcc));
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    ecx = eax;
    ebx = edx;
    eax = esi;
    eax ^= ecx;
    edx = edi;
    edx ^= ebx;
    ecx = *((ebp + 0xc));
    *((ebp - 0xc8)) = ecx;
    *((ebp - 0xd8)) = 1;
    *((ebp - 0xd4)) = 0;
    ebx = *((ebp - 0xd8));
    esi = *((ebp - 0xd4));
    ecx = *((ebp - 0xc8));
    __asm ("shld esi, ebx, cl");
    ebx <<= cl;
    if ((cl & 0x20) != 0) {
        esi = ebx;
        ebx = 0;
    }
    *((ebp - 0xc8)) = ebx;
    *((ebp - 0xc4)) = esi;
    ecx = *((ebp - 0xc8));
    ecx ^= eax;
    ebx = *((ebp - 0xc4));
    ebx ^= edx;
    edx = *((ebp + 0x1c));
    eax = *(edx);
    eax = *((edx + 4));
    eax = *((edx + 8));
    eax = *((edx + 0xc));
    eax = *((edx + 0x10));
    eax = quantum_get_state (eax, ebx, eax);
    esi = *((ebp - 0x90));
    *((ebp + esi*4 - 0x50)) = eax;
    *((ebp - 0x20)) = 0;
    while (*((ebp - 0x20)) <= 3) {
        eax = *((ebp - 0x20));
        eax = *((ebp + eax*4 - 0x50));
        if (eax == -1) {
            edx = *((ebp - 0x20));
            eax = *((ebp - 0x28));
            *((ebp + edx*4 - 0x50)) = eax;
            *((ebp - 0x28))++;
        }
        ecx = *((ebp - 0x20));
        eax = *((ebp + 0x1c));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x20));
        eax = *((ebp + eax*4 - 0x50));
        eax <<= 4;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        *((ebp + ecx*8 - 0x70)) = edx;
        *((ebp + ecx*8 - 0x6c)) = eax;
        *((ebp - 0x20))++;
    }
    *((ebp - 0x20)) = 0;
    goto label_5;
label_0:
    eax = *((ebp + 0x1c));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x20));
    eax = *((ebp + eax*4 - 0x50));
    eax <<= 4;
    edx += eax;
    eax = 0;
    *(edx) = eax;
    eax = 0;
    *((edx + 4)) = eax;
    *((ebp - 0x24)) = 0;
    while (*((ebp - 0x24)) <= 3) {
        eax = *((ebp + 0x1c));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x20));
        eax = *((ebp + eax*4 - 0x50));
        eax <<= 4;
        edi = edx + eax;
        eax = *((ebp + 0x1c));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x20));
        eax = *((ebp + eax*4 - 0x50));
        eax <<= 4;
        eax = edx + eax;
        *(fp_stack--) = *(eax);
        *((ebp - 0x88)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((eax + 4));
        *((ebp - 0x8c)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp + 0x18));
        eax = *((ebp + 0x14));
        eax *= *((ebp - 0x20));
        eax += *((ebp - 0x24));
        eax <<= 3;
        eax = edx + eax;
        edx = *(eax);
        ecx = *((eax + 4));
        eax = *((ebp - 0x24));
        ebx = *((ebp + eax*8 - 0x70));
        eax = *((ebp + eax*8 - 0x6c));
        esi = edx;
        edx = ebx;
        eax = _mulsc3 (eax, ecx, edx);
        ecx = eax;
        ebx = edx;
        eax = ecx;
        edx = ebx;
        *(fp_stack--) = *((ebp - 0x88));
        *(fp_stack--) = *((ebp - 0x8c));
        *((ebp - 0xbc)) = eax;
        *(fp_stack--) = *((ebp - 0xbc));
        *((ebp - 0xbc)) = edx;
        *(fp_stack--) = *((ebp - 0xbc));
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        *((ebp - 0xbc)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0xbc));
        *((ebp - 0xbc)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0xbc));
        *(edi) = eax;
        *((edi + 4)) = edx;
        *((ebp - 0x24))++;
    }
    eax = *((ebp - 0x20));
    eax = *((ebp + eax*4 - 0x50));
    eax += *((ebp - 0x38));
    *(eax) = 1;
    *((ebp - 0x20))++;
label_5:
    if (*((ebp - 0x20)) <= 3) {
        goto label_0;
    }
label_4:
    *((ebp - 0x1c))++;
label_3:
    eax = *((ebp + 0x1c));
    eax = *((eax + 4));
    if (eax > *((ebp - 0x1c))) {
        goto label_1;
    }
    eax = *((ebp + 0x1c));
    eax = *((eax + 4));
    edx = *((eax + 4));
    edx += *((ebp - 0x2c));
    eax = *((ebp + 0x1c));
    *((eax + 4)) = edx;
    eax = *((ebp - 0x38));
    free (eax);
    eax = *((ebp + 0x1c));
    eax = *((eax + 4));
    eax = -eax;
    *(esp) = eax;
    quantum_memman ();
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x20)) = 0;
    while (eax > *((ebp - 0x1c))) {
        eax = *((ebp + 0x1c));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x1c));
        eax <<= 4;
        edx += eax;
        eax = *(edx);
        eax = *((edx + 4));
        ax = quantum_prob_inline (eax, eax);
        *(fp_stack--) = *((ebp - 0x34));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (edx > 0) {
            *((ebp - 0x20))++;
            *((ebp - 0x30))++;
        } else {
            if (*((ebp - 0x20)) == 0) {
                goto label_6;
            }
            eax = *((ebp + 0x1c));
            ecx = *((eax + 0xc));
            edx = *((ebp - 0x20));
            eax = *((ebp - 0x1c));
            eax -= edx;
            eax <<= 4;
            ecx += eax;
            eax = *((ebp + 0x1c));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 0xc));
            eax = *((eax + 8));
            *((ecx + 8)) = eax;
            *((ecx + 0xc)) = edx;
            eax = *((ebp + 0x1c));
            ecx = *((eax + 0xc));
            edx = *((ebp - 0x20));
            eax = *((ebp - 0x1c));
            eax -= edx;
            eax <<= 4;
            ecx += eax;
            eax = *((ebp + 0x1c));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *(ecx) = edx;
            *((ecx + 4)) = eax;
        }
label_6:
        *((ebp - 0x1c))++;
        eax = *((ebp + 0x1c));
        eax = *((eax + 4));
    }
    if (*((ebp - 0x30)) != 0) {
        eax = *((ebp + 0x1c));
        eax = *((eax + 4));
        edx = *((eax + 4));
        edx -= *((ebp - 0x30));
        eax = *((ebp + 0x1c));
        *((eax + 4)) = edx;
        eax = *((ebp + 0x1c));
        eax = *((eax + 4));
        edx = *((eax + 4));
        edx <<= 4;
        eax = *((ebp + 0x1c));
        eax = *((eax + 0xc));
        eax = realloc (eax, edx);
        edx = eax;
        eax = *((ebp + 0x1c));
        *((eax + 0xc)) = edx;
        eax = *((ebp + 0x1c));
        eax = *((eax + 0xc));
        if (eax == 0) {
            *(esp) = 2;
            quantum_error ();
        }
        eax = *((ebp - 0x30));
        eax <<= 4;
        eax = -eax;
        *(esp) = eax;
        quantum_memman ();
    }
    eax = *((ebp + 0x1c));
    *(esp) = eax;
    quantum_decohere ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048cbc */
#include <stdint.h>
 
int32_t dbg_quantum_conj (int32_t arg_ch) {
    int32_t var_20h;
    float i;
    float r;
    complex float a;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* complex float quantum_conj(complex float a); */
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_real (ebx, esi, edi);
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_imag (eax, eax);
    *((ebp - 0x14)) = fp_stack[0];
    fp_stack--;
    esi = *((ebp - 0x10));
    edi = 0;
    eax = *((ebp - 0x14));
    edx = 0;
    ecx = eax;
    eax = 0xbf800000;
    eax = 0x80000000;
    eax = _mulsc3 (eax, edx, eax);
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    *((ebp - 0x20)) = esi;
    *(fp_stack--) = *((ebp - 0x20));
    *((ebp - 0x20)) = edi;
    *(fp_stack--) = *((ebp - 0x20));
    *((ebp - 0x20)) = eax;
    *(fp_stack--) = *((ebp - 0x20));
    *((ebp - 0x20)) = edx;
    *(fp_stack--) = *((ebp - 0x20));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[0] += fp_stack[3];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x20));
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 0x20));
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8052b40 */
#include <stdint.h>
 
uint32_t mulsc3 (void) {
    int32_t var_38h;
    int32_t var_18h;
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 0x10));
    *(fp_stack--) = *((ebp + 0x14));
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[2];
    ax = _i686_get_pc_thunk_cx ();
    ecx += 0x3499;
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] *= fp_stack[1];
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[1];
    *((ebp - 0xc)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] *= fp_stack[2];
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 4));
    *(fp_stack--) = *((ebp - 8));
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] -= fp_stack[1];
    *(fp_stack--) = *((ebp - 0xc));
    *((ebp - 0x3c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x10));
    *((ebp - 0x34)) = fp_stack[0];
    fp_stack[0] += *((ebp - 0x3c));
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (ecx == 0) {
        goto label_19;
    }
    if (ecx != 0) {
        goto label_19;
    }
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack++;
    fp_stack++;
    fp_stack++;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    while (ecx == 0) {
        fp_stack[5] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack[1] = fp_stack[0];
        fp_stack--;
        goto label_0;
label_2:
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        goto label_0;
label_3:
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        goto label_0;
label_4:
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
label_0:
        *((ebp - 0x38)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x38));
        return eax;
label_19:
        *(fp_stack--) = *((ebp - 0x18));
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        ax = fp_status;
        __asm ("sahf");
        if (ecx == 0) {
            goto label_20;
        }
    }
label_20:
    *(fp_stack--) = fp_stack[6];
    fp_stack[0] -= fp_stack[7];
    *((ebp - 0x30)) = fp_stack[0];
    fp_tmp_0 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (ecx != 0) {
        goto label_21;
    }
    if (ecx == 0) {
        goto label_22;
    }
    fp_tmp_1 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (ecx == 0) {
        goto label_23;
    }
    fp_tmp_2 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    goto label_24;
label_8:
    fp_tmp_3 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
label_24:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 1.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 1.0;
        fp_stack[0] = -fp_stack[0];
    }
    *(fp_stack--) = fp_stack[5];
    fp_stack[0] -= fp_stack[6];
    *((ebp - 0x14)) = fp_stack[0];
    fp_tmp_4 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) == 0) {
        if ((ah & 2) != 0) {
            fp_tmp_5 = fp_stack[6];
            fp_stack[6] = fp_stack[0];
            fp_stack[0] = fp_tmp_5;
            fp_status = fp_compare(fp_stack[0], fp_stack[0]);
            fp_stack++;
            ax = fp_status;
            __asm ("sahf");
            if ((ah & 2) != 0) {
                goto label_25;
            }
            if ((ah & 2) == 0) {
                goto label_25;
            }
            fp_tmp_6 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_6;
            fp_tmp_7 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_7;
            fp_tmp_8 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_8;
            fp_tmp_9 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_9;
            fp_tmp_10 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_10;
            fp_stack[6] = fp_stack[0];
            fp_stack--;
            fp_tmp_11 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_11;
            fp_tmp_12 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_12;
            fp_tmp_13 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_13;
            fp_tmp_14 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_14;
            fp_tmp_15 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_15;
        } else {
        } else {
            fp_stack[6] = fp_stack[0];
            fp_stack--;
            fp_tmp_16 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_16;
            fp_tmp_17 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_17;
            fp_tmp_18 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_18;
            fp_tmp_19 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_19;
            fp_tmp_20 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_20;
        }
    }
    *(fp_stack--) = 0.0;
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
label_9:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = *((ebp - 0x28));
    fp_stack[0] = abs(fp_stack[0]);
    if ((ah & 2) != 0) {
        fp_stack[0] = -fp_stack[0];
        fp_tmp_21 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_21;
    } else {
        fp_tmp_22 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_22;
    }
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) == 0) {
        goto label_26;
    }
    if ((ah & 2) != 0) {
        goto label_26;
    }
    fp_tmp_23 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_23;
    goto label_12;
label_11:
    fp_tmp_24 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_24;
label_12:
    __asm ("fucom st(0)");
    ax = fp_status;
    edx = 1;
    __asm ("sahf");
    if ((ah & 2) == 0) {
        goto label_27;
    }
    if ((ah & 2) != 0) {
        goto label_27;
    }
    fp_tmp_25 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_25;
    fp_tmp_26 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_26;
    fp_tmp_27 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_27;
    fp_tmp_28 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_28;
    fp_tmp_29 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_29;
    fp_tmp_30 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_30;
label_10:
    *(fp_stack--) = fp_stack[6];
    fp_stack[0] -= fp_stack[7];
    *((ebp - 0x24)) = fp_stack[0];
    fp_tmp_31 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_31;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        goto label_28;
    }
    if ((ah & 2) == 0) {
        goto label_29;
    }
    fp_tmp_32 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_32;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        if ((ah & 2) == 0) {
            goto label_30;
        }
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack++;
    } else {
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack++;
    }
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] -= fp_stack[3];
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        if ((ah & 2) == 0) {
            goto label_31;
        }
        fp_tmp_33 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_33;
    } else {
        fp_tmp_34 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_34;
    }
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        goto label_32;
    }
    if ((ah & 2) == 0) {
        goto label_33;
    }
    *(fp_stack--) = 1.0;
    *(fp_stack--) = fp_stack[0];
    fp_tmp_35 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_35;
    do {
label_18:
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if ((ah & 2) == 0) {
            goto label_34;
        }
        if ((ah & 2) != 0) {
            goto label_34;
        }
        fp_tmp_36 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_36;
label_17:
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if ((ah & 2) == 0) {
            goto label_35;
        }
        if ((ah & 2) != 0) {
            goto label_35;
        }
        fp_tmp_37 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_37;
label_16:
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        fp_tmp_38 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_38;
        fp_stack[0] = abs(fp_stack[0]);
        if ((ah & 2) != 0) {
            fp_stack[0] = -fp_stack[0];
        }
        fp_tmp_39 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_39;
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        fp_tmp_40 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_40;
        fp_stack[0] = abs(fp_stack[0]);
        if ((ah & 2) != 0) {
            goto label_36;
        }
        goto label_7;
label_6:
        fp_tmp_41 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_41;
        fp_tmp_42 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_42;
        fp_tmp_43 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_43;
        fp_tmp_44 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_44;
label_7:
        fp_tmp_45 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_45;
        fp_tmp_46 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_46;
        fp_tmp_47 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_47;
        goto label_37;
label_1:
        fp_stack[6] = fp_stack[0];
        fp_stack--;
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_tmp_48 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_48;
        goto label_37;
label_5:
        fp_tmp_49 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_49;
        fp_tmp_50 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_50;
        fp_tmp_51 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_51;
label_37:
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ecx - 0x1a18));
        fp_stack[1] *= fp_stack[0];
        fp_tmp_52 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_52;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_tmp_53 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_53;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_tmp_54 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_54;
        *((ebp - 0x18)) = fp_stack[0];
        fp_stack--;
        goto label_0;
label_28:
        fp_stack[7] = fp_stack[0];
        fp_stack--;
        fp_tmp_55 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_55;
        fp_tmp_56 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_56;
        fp_tmp_57 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_57;
        fp_tmp_58 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_58;
        fp_tmp_59 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_59;
        fp_tmp_60 = fp_stack[6];
        fp_stack[6] = fp_stack[0];
        fp_stack[0] = fp_tmp_60;
        goto label_38;
label_29:
        fp_stack[7] = fp_stack[0];
        fp_stack--;
        fp_tmp_61 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_61;
        fp_tmp_62 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_62;
        fp_tmp_63 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_63;
        fp_tmp_64 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_64;
        fp_tmp_65 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_65;
        fp_tmp_66 = fp_stack[6];
        fp_stack[6] = fp_stack[0];
        fp_stack[0] = fp_tmp_66;
        goto label_38;
label_30:
        fp_tmp_67 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_67;
        fp_tmp_68 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_68;
        fp_tmp_69 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_69;
        fp_tmp_70 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_70;
        fp_tmp_71 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_71;
        fp_tmp_72 = fp_stack[6];
        fp_stack[6] = fp_stack[0];
        fp_stack[0] = fp_tmp_72;
label_38:
        *(fp_stack--) = fp_stack[6];
        fp_stack[0] -= fp_stack[7];
        *((ebp - 0x20)) = fp_stack[0];
        fp_tmp_73 = fp_stack[7];
        fp_stack[7] = fp_stack[0];
        fp_stack[0] = fp_tmp_73;
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if ((ah & 2) != 0) {
            goto label_39;
        }
        if ((ah & 2) == 0) {
            goto label_40;
        }
        fp_tmp_74 = fp_stack[7];
        fp_stack[7] = fp_stack[0];
        fp_stack[0] = fp_tmp_74;
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        ax = fp_status;
        __asm ("sahf");
        if ((ah & 2) != 0) {
            if ((ah & 2) == 0) {
                goto label_41;
            }
            fp_stack[3] = fp_stack[0];
            fp_stack--;
            fp_stack[3] = fp_stack[0];
            fp_stack--;
            fp_stack[3] = fp_stack[0];
            fp_stack--;
        } else {
            fp_stack[3] = fp_stack[0];
            fp_stack--;
            fp_stack[3] = fp_stack[0];
            fp_stack--;
            fp_stack[3] = fp_stack[0];
            fp_stack--;
        }
        *(fp_stack--) = 1.0;
        *(fp_stack--) = 0.0;
        fp_tmp_75 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_75;
        fp_tmp_76 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_76;
        fp_tmp_77 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_77;
        fp_tmp_78 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_78;
        fp_tmp_79 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_79;
    } while (1);
label_39:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_80 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_80;
    fp_tmp_81 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_81;
    fp_tmp_82 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_82;
    fp_tmp_83 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_83;
    fp_tmp_84 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_84;
    fp_tmp_85 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_85;
    goto label_42;
label_40:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_86 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_86;
    fp_tmp_87 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_87;
    fp_tmp_88 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_88;
    fp_tmp_89 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_89;
    fp_tmp_90 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_90;
    fp_tmp_91 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_91;
    goto label_42;
label_41:
    fp_tmp_92 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_92;
    fp_tmp_93 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_93;
    fp_tmp_94 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_94;
    fp_tmp_95 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_95;
    fp_tmp_96 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_96;
    fp_tmp_97 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_97;
label_42:
    if (dl != 0) {
        goto label_1;
    }
    *(fp_stack--) = fp_stack[6];
    fp_stack[0] -= fp_stack[7];
    *((ebp - 0x1c)) = fp_stack[0];
    fp_tmp_98 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_98;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        if (dl != 0) {
            fp_tmp_99 = fp_stack[6];
            fp_stack[6] = fp_stack[0];
            fp_stack[0] = fp_tmp_99;
            fp_status = fp_compare(fp_stack[0], fp_stack[0]);
            fp_stack++;
            ax = fp_status;
            __asm ("sahf");
            if (dl != 0) {
                goto label_43;
            }
            if (dl == 0) {
                goto label_44;
            }
            fp_tmp_100 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_100;
            fp_tmp_101 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_101;
            fp_tmp_102 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_102;
            fp_tmp_103 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_103;
            fp_tmp_104 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_104;
            fp_stack[6] = fp_stack[0];
            fp_stack--;
            fp_tmp_105 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_105;
            fp_tmp_106 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_106;
            fp_tmp_107 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_107;
            fp_tmp_108 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_108;
            fp_tmp_109 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_109;
        } else {
        } else {
            fp_stack[6] = fp_stack[0];
            fp_stack--;
            fp_tmp_110 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_110;
            fp_tmp_111 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_111;
            fp_tmp_112 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_112;
            fp_tmp_113 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_113;
            fp_tmp_114 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_114;
        }
    }
    *(fp_stack--) = fp_stack[5];
    fp_stack[0] -= fp_stack[6];
    fp_tmp_115 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_115;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        if (dl != 0) {
            fp_tmp_116 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_116;
            fp_status = fp_compare(fp_stack[0], fp_stack[0]);
            fp_stack++;
            ax = fp_status;
            __asm ("sahf");
            if (dl != 0) {
                goto label_45;
            }
            if (dl == 0) {
                goto label_46;
            }
            fp_tmp_117 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_117;
            fp_tmp_118 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_118;
            fp_tmp_119 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_119;
            fp_tmp_120 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_120;
            fp_stack[5] = fp_stack[0];
            fp_stack--;
            fp_tmp_121 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_121;
            fp_tmp_122 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_122;
            fp_tmp_123 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_123;
            fp_tmp_124 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_124;
        } else {
        } else {
            fp_stack[5] = fp_stack[0];
            fp_stack--;
            fp_tmp_125 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_125;
            fp_tmp_126 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_126;
            fp_tmp_127 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_127;
            fp_tmp_128 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_128;
        }
    }
    *(fp_stack--) = *((ebp - 0x3c));
    fp_stack[0] -= fp_stack[0];
    *(fp_stack--) = *((ebp - 0x3c));
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        if (dl == 0) {
            goto label_47;
        }
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        ax = fp_status;
        __asm ("sahf");
        if (dl != 0) {
            goto label_48;
        }
        if (dl != 0) {
            goto label_49;
        }
        goto label_50;
    }
    fp_stack++;
    goto label_49;
label_47:
    fp_stack++;
label_49:
    *(fp_stack--) = *((ebp - 0x34));
    fp_stack[0] -= fp_stack[0];
    *(fp_stack--) = *((ebp - 0x34));
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl != 0) {
        goto label_2;
    }
    if (dl == 0) {
        goto label_3;
    }
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        goto label_51;
    }
    if (dl == 0) {
        goto label_4;
    }
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_tmp_129 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_129;
    goto label_52;
label_43:
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    goto label_52;
label_44:
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    goto label_52;
label_45:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_130 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_130;
    goto label_52;
label_46:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_131 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_131;
    goto label_52;
label_48:
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_tmp_132 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_132;
    goto label_52;
label_50:
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_tmp_133 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_133;
    goto label_52;
label_51:
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_tmp_134 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_134;
label_52:
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        goto label_53;
    }
    if (dl != 0) {
        goto label_53;
    }
    fp_tmp_135 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_135;
label_15:
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        goto label_54;
    }
    if (dl != 0) {
        goto label_54;
    }
    fp_tmp_136 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_136;
label_14:
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        goto label_55;
    }
    if (dl != 0) {
        goto label_55;
    }
    fp_tmp_137 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_137;
label_13:
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        goto label_56;
    }
    if (dl == 0) {
        goto label_5;
    }
label_56:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) == 0) {
        goto label_6;
    }
    fp_stack++;
    *(fp_stack--) = 0.0;
    fp_tmp_138 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_138;
    fp_tmp_139 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_139;
    fp_tmp_140 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_140;
    fp_tmp_141 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_141;
label_36:
    fp_stack[0] = -fp_stack[0];
    goto label_7;
    if ((ah & 2) == 0) {
label_23:
        goto label_8;
    }
    fp_tmp_142 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_142;
    fp_tmp_143 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_143;
    fp_tmp_144 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_144;
    fp_tmp_145 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_145;
    fp_tmp_146 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_146;
    fp_tmp_147 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_147;
    goto label_57;
label_21:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_148 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_148;
    fp_tmp_149 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_149;
    fp_tmp_150 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_150;
    fp_tmp_151 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_151;
    fp_tmp_152 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_152;
    fp_tmp_153 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_153;
    goto label_57;
label_22:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_154 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_154;
    fp_tmp_155 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_155;
    fp_tmp_156 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_156;
    fp_tmp_157 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_157;
    fp_tmp_158 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_158;
    fp_tmp_159 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_159;
label_57:
    *(fp_stack--) = fp_stack[6];
    fp_stack[0] -= fp_stack[7];
    *((ebp - 0x2c)) = fp_stack[0];
    fp_tmp_160 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_160;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        goto label_58;
    }
    if ((ah & 2) == 0) {
        goto label_59;
    }
    fp_tmp_161 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_161;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    while ((ah & 2) == 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        *(fp_stack--) = 0.0;
        if ((ah & 2) != 0) {
            fp_stack++;
            *(fp_stack--) = 0.0;
            fp_stack[0] = -fp_stack[0];
            fp_tmp_162 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_162;
            fp_tmp_163 = fp_stack[6];
            fp_stack[6] = fp_stack[0];
            fp_stack[0] = fp_tmp_163;
            fp_tmp_164 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_164;
            fp_tmp_165 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_165;
            fp_tmp_166 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_166;
            fp_tmp_167 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_167;
            fp_tmp_168 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_168;
        } else {
            fp_tmp_169 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_169;
            fp_tmp_170 = fp_stack[6];
            fp_stack[6] = fp_stack[0];
            fp_stack[0] = fp_tmp_170;
            fp_tmp_171 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_171;
            fp_tmp_172 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_172;
            fp_tmp_173 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_173;
            fp_tmp_174 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_174;
            fp_tmp_175 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_175;
        }
label_25:
        *(fp_stack--) = 1.0;
        *((ebp - 0x28)) = fp_stack[0];
        fp_stack--;
        fp_tmp_176 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_176;
        fp_tmp_177 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_177;
        fp_tmp_178 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_178;
        fp_tmp_179 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_179;
        fp_tmp_180 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_180;
        goto label_9;
    }
    fp_tmp_181 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_181;
    fp_tmp_182 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_182;
    fp_tmp_183 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_183;
    fp_tmp_184 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_184;
    fp_tmp_185 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_185;
    fp_tmp_186 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_186;
    goto label_60;
label_58:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_187 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_187;
    fp_tmp_188 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_188;
    fp_tmp_189 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_189;
    fp_tmp_190 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_190;
    fp_tmp_191 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_191;
    fp_tmp_192 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_192;
    goto label_60;
label_59:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_193 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_193;
    fp_tmp_194 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_194;
    fp_tmp_195 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_195;
    fp_tmp_196 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_196;
    fp_tmp_197 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_197;
    fp_tmp_198 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_198;
label_60:
    edx = 0;
    goto label_10;
label_26:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) == 0) {
        goto label_11;
    }
    fp_stack++;
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    fp_tmp_199 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_199;
    goto label_12;
label_55:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_200 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_200;
    goto label_13;
label_54:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_201 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_201;
    goto label_14;
label_53:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_202 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_202;
    goto label_15;
label_35:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_203 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_203;
    goto label_16;
label_34:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_204 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_204;
    goto label_17;
label_27:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_205 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_205;
    fp_tmp_206 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_206;
    fp_tmp_207 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_207;
    fp_tmp_208 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_208;
    fp_tmp_209 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_209;
    fp_tmp_210 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_210;
    edx = 1;
    goto label_10;
label_32:
    fp_tmp_211 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_211;
    goto label_31;
label_33:
    fp_tmp_212 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_212;
label_31:
    *(fp_stack--) = 0.0;
    *(fp_stack--) = 1.0;
    fp_tmp_213 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_213;
    fp_tmp_214 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_214;
    fp_tmp_215 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_215;
    fp_tmp_216 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_216;
    goto label_18;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e3a0 */
#include <stdint.h>
 
int32_t dbg_add_mod_n (void) {
    int32_t N;
    int32_t a;
    int32_t width;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void add_mod_n(int N,int a,int width,quantum_reg * reg); */
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    addn ();
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    addn_inv ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e2be */
#include <stdint.h>
 
int32_t dbg_addn (void) {
    int32_t N;
    int32_t a;
    int32_t width;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void addn(int N,int a,int width,quantum_reg * reg); */
    edx = *((ebp + 0xc));
    eax = *((ebp + 8));
    ecx = *((ebp + 8));
    ecx -= edx;
    edx = ecx;
    eax = *((ebp + 0x14));
    *((esp + 8)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    *(esp) = edx;
    test_sum ();
    ecx = *((ebp + 0x10));
    eax = 1;
    eax <<= cl;
    eax += *((ebp + 0xc));
    edx = eax;
    edx -= *((ebp + 8));
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    *(esp) = edx;
    madd ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804d538 */
#include <stdint.h>
 
int32_t dbg_test_sum (void) {
    int32_t i;
    int32_t compare;
    int32_t width;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* void test_sum(int compare,int width,quantum_reg * reg); */
    eax = *((ebp + 8));
    ebx = *((ebp + 8));
    esi = eax;
    esi >>= 0x1f;
    eax = *((ebp + 0xc));
    ecx = eax - 1;
    eax = ebx;
    edx = esi;
    __asm ("shrd eax, edx, cl");
    edx >>= cl;
    if ((cl & 0x20) != 0) {
        eax = edx;
        edx = 0;
    }
    eax &= 1;
    if (al != 0) {
        eax = *((ebp + 0xc));
        ecx = eax - 1;
        eax = *((ebp + 0xc));
        eax += eax;
        edx = eax - 1;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        *((esp + 4)) = ecx;
        *(esp) = edx;
        quantum_cnot ();
        eax = *((ebp + 0xc));
        eax += eax;
        edx = eax - 1;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        *(esp) = edx;
        quantum_sigma_x ();
        eax = *((ebp + 0xc));
        eax += eax;
        edx = eax - 1;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0;
        *(esp) = edx;
        quantum_cnot ();
    } else {
        eax = *((ebp + 0xc));
        eax += eax;
        edx = eax - 1;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        *(esp) = edx;
        quantum_sigma_x ();
        eax = *((ebp + 0xc));
        ecx = eax - 1;
        eax = *((ebp + 0xc));
        eax += eax;
        edx = eax - 1;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        *((esp + 4)) = ecx;
        *(esp) = edx;
        quantum_cnot ();
    }
    eax = *((ebp + 0xc));
    eax -= 2;
    *((ebp - 0xc)) = eax;
    while (*((ebp - 0xc)) > 0) {
        ecx = *((ebp - 0xc));
        eax = *((ebp + 8));
        eax >>= cl;
        eax &= 1;
        if (al != 0) {
            edx = *((ebp - 0xc));
            eax = *((ebp + 0xc));
            edx = eax + edx;
            eax = *((ebp - 0xc));
            ecx = eax + 1;
            eax = *((ebp + 0x10));
            *((esp + 0xc)) = eax;
            eax = *((ebp - 0xc));
            *((esp + 8)) = eax;
            *((esp + 4)) = edx;
            *(esp) = ecx;
            quantum_toffoli ();
            edx = *((ebp - 0xc));
            eax = *((ebp + 0xc));
            edx = eax + edx;
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_sigma_x ();
            edx = *((ebp - 0xc));
            eax = *((ebp + 0xc));
            ecx = eax + edx;
            eax = *((ebp - 0xc));
            edx = eax + 1;
            eax = *((ebp + 0x10));
            *((esp + 0xc)) = eax;
            *((esp + 8)) = 0;
            *((esp + 4)) = ecx;
            *(esp) = edx;
            quantum_toffoli ();
        } else {
            edx = *((ebp - 0xc));
            eax = *((ebp + 0xc));
            edx = eax + edx;
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_sigma_x ();
            edx = *((ebp - 0xc));
            eax = *((ebp + 0xc));
            edx = eax + edx;
            eax = *((ebp - 0xc));
            ecx = eax + 1;
            eax = *((ebp + 0x10));
            *((esp + 0xc)) = eax;
            eax = *((ebp - 0xc));
            *((esp + 8)) = eax;
            *((esp + 4)) = edx;
            *(esp) = ecx;
            quantum_toffoli ();
        }
        *((ebp - 0xc))--;
    }
    eax = *((ebp + 8));
    eax &= 1;
    if (al != 0) {
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_sigma_x ();
        eax = *((ebp + 0x10));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 1;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
    }
    eax = *((ebp + 0xc));
    ecx = eax + eax;
    eax = *((ebp + 0xc));
    eax += eax;
    edx = eax + 1;
    eax = *((ebp + 0x10));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = ecx;
    *((esp + 4)) = 0;
    *(esp) = edx;
    quantum_toffoli ();
    eax = *((ebp + 8));
    eax &= 1;
    if (al != 0) {
        eax = *((ebp + 0x10));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 1;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_sigma_x ();
    }
    *((ebp - 0xc)) = 1;
    while (eax >= *((ebp - 0xc))) {
        ecx = *((ebp - 0xc));
        eax = *((ebp + 8));
        eax >>= cl;
        eax &= 1;
        if (al != 0) {
            edx = *((ebp - 0xc));
            eax = *((ebp + 0xc));
            ecx = eax + edx;
            eax = *((ebp - 0xc));
            edx = eax + 1;
            eax = *((ebp + 0x10));
            *((esp + 0xc)) = eax;
            *((esp + 8)) = 0;
            *((esp + 4)) = ecx;
            *(esp) = edx;
            quantum_toffoli ();
            edx = *((ebp - 0xc));
            eax = *((ebp + 0xc));
            edx = eax + edx;
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_sigma_x ();
            edx = *((ebp - 0xc));
            eax = *((ebp + 0xc));
            edx = eax + edx;
            eax = *((ebp - 0xc));
            ecx = eax + 1;
            eax = *((ebp + 0x10));
            *((esp + 0xc)) = eax;
            eax = *((ebp - 0xc));
            *((esp + 8)) = eax;
            *((esp + 4)) = edx;
            *(esp) = ecx;
            quantum_toffoli ();
        } else {
            edx = *((ebp - 0xc));
            eax = *((ebp + 0xc));
            edx = eax + edx;
            eax = *((ebp - 0xc));
            ecx = eax + 1;
            eax = *((ebp + 0x10));
            *((esp + 0xc)) = eax;
            eax = *((ebp - 0xc));
            *((esp + 8)) = eax;
            *((esp + 4)) = edx;
            *(esp) = ecx;
            quantum_toffoli ();
            edx = *((ebp - 0xc));
            eax = *((ebp + 0xc));
            edx = eax + edx;
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_sigma_x ();
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 0xc));
        eax -= 2;
    }
    eax = *((ebp + 0xc));
    ecx = eax - 1;
    eax = *((ebp + 8));
    eax >>= cl;
    eax &= 1;
    if (al != 0) {
        eax = *((ebp + 0xc));
        eax += eax;
        edx = eax - 1;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0;
        *(esp) = edx;
        quantum_cnot ();
        eax = *((ebp + 0xc));
        eax += eax;
        edx = eax - 1;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        *(esp) = edx;
        quantum_sigma_x ();
        eax = *((ebp + 0xc));
        ecx = eax - 1;
        eax = *((ebp + 0xc));
        eax += eax;
        edx = eax - 1;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        *((esp + 4)) = ecx;
        *(esp) = edx;
        quantum_cnot ();
    } else {
        eax = *((ebp + 0xc));
        ecx = eax - 1;
        eax = *((ebp + 0xc));
        eax += eax;
        edx = eax - 1;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        *((esp + 4)) = ecx;
        *(esp) = edx;
        quantum_cnot ();
        eax = *((ebp + 0xc));
        eax += eax;
        edx = eax - 1;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        *(esp) = edx;
        quantum_sigma_x ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e052 */
#include <stdint.h>
 
int32_t dbg_madd (void) {
    int32_t total;
    int32_t j;
    int32_t i;
    int32_t a;
    int32_t a_inv;
    int32_t width;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_sp_10h;
    int32_t var_sp_14h;
    int32_t var_18h;
    int32_t var_1ch;
    /* void madd(int a,int a_inv,int width,quantum_reg * reg); */
    eax = *((ebp + 0x10));
    eax += eax;
    eax++;
    eax += eax;
    *((ebp - 0x14)) = eax;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        ecx = *((ebp - 0xc));
        eax = *((ebp + 8));
        eax >>= cl;
        eax &= 1;
        if (al != 0) {
            *((ebp - 0x10)) = 2;
        } else {
            *((ebp - 0x10)) = 0;
        }
        ecx = *((ebp - 0xc));
        eax = *((ebp + 0xc));
        eax >>= cl;
        eax &= 1;
        if (al != 0) {
            *((ebp - 0x10))++;
        }
        eax = *((ebp + 0x10));
        eax += eax;
        ebx = eax + 1;
        eax = *((ebp + 0x10));
        esi = eax + eax;
        eax = *((ebp - 0xc));
        ecx = eax + 1;
        edx = *((ebp - 0xc));
        eax = *((ebp + 0x10));
        edx = eax + edx;
        eax = *((ebp + 0x14));
        *((esp + 0x1c)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 0x18)) = eax;
        *((esp + 0x14)) = ebx;
        *((esp + 0x10)) = esi;
        *((esp + 0xc)) = ecx;
        eax = *((ebp - 0xc));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp - 0x10));
        *(esp) = eax;
        muxfa ();
        *((ebp - 0xc))++;
        eax = *((ebp + 0x10));
        eax--;
    }
    *((ebp - 0x10)) = 0;
    eax = *((ebp + 0x10));
    ecx = eax - 1;
    eax = *((ebp + 8));
    eax >>= cl;
    eax &= 1;
    if (al != 0) {
        *((ebp - 0x10)) = 2;
    }
    eax = *((ebp + 0x10));
    ecx = eax - 1;
    eax = *((ebp + 0xc));
    eax >>= cl;
    eax &= 1;
    if (al != 0) {
        *((ebp - 0x10))++;
    }
    eax = *((ebp + 0x10));
    eax += eax;
    ebx = eax + 1;
    eax = *((ebp + 0x10));
    esi = eax + eax;
    eax = *((ebp + 0x10));
    edx = eax - 1;
    eax = *((ebp + 0x10));
    eax += eax;
    ecx = eax - 1;
    eax = *((ebp + 0x14));
    *((esp + 0x18)) = eax;
    eax = *((ebp - 0x14));
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = ebx;
    *((esp + 0xc)) = esi;
    *((esp + 8)) = edx;
    *((esp + 4)) = ecx;
    eax = *((ebp - 0x10));
    *(esp) = eax;
    muxha ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e317 */
#include <stdint.h>
 
int32_t dbg_addn_inv (void) {
    int32_t N;
    int32_t a;
    int32_t width;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void addn_inv(int N,int a,int width,quantum_reg * reg); */
    eax = *((ebp + 0x10));
    ecx = eax + eax;
    eax = *((ebp + 0x10));
    eax += eax;
    edx = eax + 1;
    eax = *((ebp + 0x14));
    *((esp + 8)) = eax;
    *((esp + 4)) = ecx;
    *(esp) = edx;
    quantum_cnot ();
    edx = *((ebp + 0xc));
    eax = *((ebp + 8));
    ecx = *((ebp + 8));
    ecx -= edx;
    edx = ecx;
    ecx = *((ebp + 0x10));
    eax = 1;
    eax <<= cl;
    ecx = eax;
    ecx -= *((ebp + 0xc));
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    *((esp + 4)) = edx;
    *(esp) = ecx;
    madd_inv ();
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_swaptheleads ();
    eax = *((ebp + 0x14));
    *((esp + 8)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    test_sum ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e187 */
#include <stdint.h>
 
int32_t dbg_madd_inv (void) {
    int32_t total;
    int32_t j;
    int32_t i;
    int32_t a;
    int32_t a_inv;
    int32_t width;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_sp_10h;
    int32_t var_sp_14h;
    int32_t var_18h;
    int32_t var_1ch;
    /* void madd_inv(int a,int a_inv,int width,quantum_reg * reg); */
    eax = *((ebp + 0x10));
    eax += eax;
    eax++;
    eax += eax;
    *((ebp - 0x14)) = eax;
    *((ebp - 0x10)) = 0;
    eax = *((ebp + 0x10));
    ecx = eax - 1;
    eax = *((ebp + 8));
    eax >>= cl;
    eax &= 1;
    if (al != 0) {
        *((ebp - 0x10)) = 2;
    }
    eax = *((ebp + 0x10));
    ecx = eax - 1;
    eax = *((ebp + 0xc));
    eax >>= cl;
    eax &= 1;
    if (al != 0) {
        *((ebp - 0x10))++;
    }
    eax = *((ebp + 0x10));
    eax += eax;
    ebx = eax + 1;
    eax = *((ebp + 0x10));
    esi = eax + eax;
    eax = *((ebp + 0x10));
    eax += eax;
    edx = eax - 1;
    eax = *((ebp + 0x10));
    ecx = eax - 1;
    eax = *((ebp + 0x14));
    *((esp + 0x18)) = eax;
    eax = *((ebp - 0x14));
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = ebx;
    *((esp + 0xc)) = esi;
    *((esp + 8)) = edx;
    *((esp + 4)) = ecx;
    eax = *((ebp - 0x10));
    *(esp) = eax;
    muxha_inv ();
    eax = *((ebp + 0x10));
    eax -= 2;
    *((ebp - 0xc)) = eax;
    while (*((ebp - 0xc)) >= 0) {
        ecx = *((ebp - 0xc));
        eax = *((ebp + 8));
        eax >>= cl;
        eax &= 1;
        if (al != 0) {
            *((ebp - 0x10)) = 2;
        } else {
            *((ebp - 0x10)) = 0;
        }
        ecx = *((ebp - 0xc));
        eax = *((ebp + 0xc));
        eax >>= cl;
        eax &= 1;
        if (al != 0) {
            *((ebp - 0x10))++;
        }
        eax = *((ebp + 0x10));
        eax += eax;
        ebx = eax + 1;
        eax = *((ebp + 0x10));
        esi = eax + eax;
        eax = *((ebp + 0x10));
        eax++;
        ecx = eax;
        ecx += *((ebp - 0xc));
        edx = *((ebp - 0xc));
        eax = *((ebp + 0x10));
        edx = eax + edx;
        eax = *((ebp + 0x14));
        *((esp + 0x1c)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 0x18)) = eax;
        *((esp + 0x14)) = ebx;
        *((esp + 0x10)) = esi;
        *((esp + 0xc)) = ecx;
        *((esp + 8)) = edx;
        eax = *((ebp - 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x10));
        *(esp) = eax;
        muxfa_inv ();
        *((ebp - 0xc))--;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804a85f */
#include <stdint.h>
 
uint32_t dbg_quantum_swaptheleads (void) {
    long long unsigned int l;
    int32_t var_2ch;
    int32_t qec;
    int32_t pat2;
    int32_t pat1;
    int32_t j;
    int32_t i;
    int32_t width;
    quantum_reg * reg;
    void * var_4h;
    char * var_8h;
    /* void quantum_swaptheleads(int width,quantum_reg * reg); */
    *((esp + 4)) = 0;
    eax = ebp - 0x24;
    *(esp) = eax;
    quantum_qec_get_status ();
    eax = *((ebp - 0x24));
    if (eax == 0) {
        goto label_1;
    }
    *((ebp - 0x14)) = 0;
    while (eax < *((ebp + 8))) {
        edx = *((ebp - 0x14));
        eax = *((ebp + 8));
        edx = eax + edx;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp - 0x14));
        *(esp) = eax;
        quantum_cnot ();
        edx = *((ebp - 0x14));
        eax = *((ebp + 8));
        edx = eax + edx;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 4)) = eax;
        *(esp) = edx;
        quantum_cnot ();
        edx = *((ebp - 0x14));
        eax = *((ebp + 8));
        edx = eax + edx;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp - 0x14));
        *(esp) = eax;
        quantum_cnot ();
        *((ebp - 0x14))++;
        eax = *((ebp - 0x14));
    }
    goto label_2;
label_1:
    *((ebp - 0x14)) = 0;
    goto label_3;
label_0:
    eax = *((ebp + 8));
    eax = quantum_objcode_put (0xe, eax);
    if (eax != 0) {
        goto label_2;
    }
    eax = *((ebp + 0xc));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x14));
    eax <<= 4;
    eax = edx + eax;
    edx = *((eax + 0xc));
    eax = *((eax + 8));
    ebx = *((eax + 8));
    ecx = *((ebp + 8));
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    eax--;
    eax &= ebx;
    *((ebp - 0x1c)) = eax;
    *((ebp - 0x20)) = 0;
    *((ebp - 0x18)) = 0;
    while (eax < *((ebp + 8))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x14));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ebx = *((eax + 8));
        edx = *((ebp - 0x18));
        eax = *((ebp + 8));
        ecx = eax + edx;
        eax = 1;
        edx = 0;
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        edx = ebx;
        edx &= eax;
        eax = *((ebp - 0x20));
        eax = edx + eax;
        *((ebp - 0x20)) = eax;
        *((ebp - 0x18))++;
        eax = *((ebp - 0x18));
    }
    eax = *((ebp + 0xc));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x14));
    eax <<= 4;
    eax = edx + eax;
    ecx = *((eax + 8));
    ebx = *((eax + 0xc));
    edx = *((ebp - 0x20));
    eax = *((ebp - 0x1c));
    eax += edx;
    edx = eax;
    edx >>= 0x1f;
    esi = ecx;
    edi = ebx;
    esi -= eax;
    edi -= edx;
    eax = esi;
    edx = edi;
    *((ebp - 0x30)) = eax;
    *((ebp - 0x2c)) = edx;
    ecx = *((ebp + 8));
    eax = *((ebp - 0x1c));
    eax <<= cl;
    edx = eax;
    edx >>= 0x1f;
    *((ebp - 0x30)) += eax;
    *((ebp - 0x2c)) += edx;
    ecx = *((ebp + 8));
    eax = *((ebp - 0x20));
    eax >>= cl;
    edx = eax;
    edx >>= 0x1f;
    *((ebp - 0x30)) += eax;
    *((ebp - 0x2c)) += edx;
    eax = *((ebp + 0xc));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x14));
    eax <<= 4;
    ecx = edx + eax;
    eax = *((ebp - 0x30));
    edx = *((ebp - 0x2c));
    *((ecx + 8)) = eax;
    *((ecx + 0xc)) = edx;
    *((ebp - 0x14))++;
label_3:
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    if (eax > *((ebp - 0x14))) {
        goto label_0;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804dba7 */
#include <stdint.h>
 
int32_t dbg_muxfa_inv (void) {
    int32_t a;
    int32_t b_in;
    int32_t c_in;
    int32_t c_out;
    int32_t xlt_l;
    int32_t L;
    int32_t total;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void muxfa_inv(int a,int b_in,int c_in,int c_out,int xlt_l,int L,int total,quantum_reg * reg); */
    if (*((ebp + 8)) == 0) {
        eax = *((ebp + 0x24));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
    }
    if (*((ebp + 8)) == 3) {
        eax = *((ebp + 0x24));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
    }
    if (*((ebp + 8)) == 1) {
        eax = *((ebp + 0x24));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
    }
    if (*((ebp + 8)) == 2) {
        eax = *((ebp + 0x24));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x18));
        *(esp) = eax;
        quantum_sigma_x ();
        eax = *((ebp + 0x24));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x18));
        *(esp) = eax;
        quantum_sigma_x ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8053890 */
#include <stdint.h>
 
uint32_t divsc3 (void) {
    int32_t var_8h;
    *(fp_stack--) = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 0x10));
    *(fp_stack--) = *((ebp + 0x14));
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] = abs(fp_stack[0]);
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] = abs(fp_stack[0]);
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    ax = _i686_get_pc_thunk_cx ();
    ecx += 0x2741;
    __asm ("sahf");
    if (ecx <= 0) {
        goto label_17;
    }
    *(fp_stack--) = fp_stack[1];
    fp_stack[0] /= fp_stack[1];
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] *= fp_stack[1];
    fp_stack[0] += fp_stack[2];
    *(fp_stack--) = fp_stack[5];
    fp_stack[0] *= fp_stack[2];
    fp_stack[0] += fp_stack[5];
    fp_stack[0] /= fp_stack[1];
    *(fp_stack--) = fp_stack[5];
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_tmp_0 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[0] -= fp_stack[6];
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    do {
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if (ecx == 0) {
            goto label_18;
        }
        if (ecx != 0) {
            goto label_19;
        }
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        fp_stack++;
        goto label_1;
label_0:
        fp_stack[5] = fp_stack[0];
        fp_stack--;
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        fp_stack++;
        goto label_1;
label_2:
        fp_stack++;
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_3:
        fp_stack++;
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_4:
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_5:
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_6:
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_7:
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        goto label_1;
label_8:
        fp_stack++;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack[2] = fp_stack[0];
        fp_stack--;
        fp_stack++;
label_1:
        *((ebp - 8)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 8));
        *((ebp - 8)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 8));
        return eax;
label_17:
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] /= fp_stack[2];
        *(fp_stack--) = fp_stack[1];
        fp_stack[0] *= fp_stack[1];
        fp_stack[0] += fp_stack[3];
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] += fp_stack[6];
        fp_stack[0] /= fp_stack[1];
        fp_tmp_2 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack[0] *= fp_stack[6];
        *(fp_stack--) = fp_stack[5];
        fp_stack[1] -= fp_stack[0];
        fp_stack++;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
    } while (1);
label_18:
    fp_tmp_4 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_4;
    goto label_20;
label_19:
    fp_tmp_5 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_5;
label_20:
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (ecx == 0) {
        goto label_21;
    }
    if (ecx == 0) {
        goto label_0;
    }
label_21:
    *(fp_stack--) = 0.0;
    fp_tmp_6 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    __asm ("fucom st(4)");
    ax = fp_status;
    __asm ("sahf");
    if (ecx == 0) {
        if (ecx == 0) {
            goto label_22;
        }
        fp_tmp_7 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_7;
        __asm ("fucom st(4)");
        ax = fp_status;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        __asm ("sahf");
        if (ecx != 0) {
            goto label_10;
        }
        goto label_23;
    }
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_tmp_8 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    fp_tmp_9 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_9;
    fp_tmp_10 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_10;
    goto label_10;
label_22:
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_tmp_11 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_11;
    fp_tmp_12 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_12;
    fp_tmp_13 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_13;
label_10:
    *(fp_stack--) = fp_stack[5];
    fp_stack[0] -= fp_stack[6];
    *((ebp - 4)) = fp_stack[0];
    fp_tmp_14 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_14;
    __asm ("fucom st(0)");
    ax = fp_status;
    fp_tmp_15 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_15;
    __asm ("sahf");
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("setnp dl");
    __asm ("sahf");
    __asm ("setp al");
    dl &= al;
    if (dl == 0) {
        *(fp_stack--) = fp_stack[4];
        fp_stack[0] -= fp_stack[5];
        fp_tmp_16 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_16;
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if (dl != 0) {
            goto label_24;
        }
        if (dl == 0) {
            goto label_25;
        }
        fp_tmp_17 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_17;
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        ax = fp_status;
        __asm ("sahf");
        if (dl == 0) {
            goto label_26;
        }
        if (dl == 0) {
            goto label_27;
        }
    }
label_26:
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] -= fp_stack[3];
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        if (dl != 0) {
            *(fp_stack--) = fp_stack[4];
            fp_stack[0] -= fp_stack[5];
            fp_status = fp_compare(fp_stack[0], fp_stack[0]);
            fp_stack++;
            ax = fp_status;
            __asm ("sahf");
            if (dl == 0) {
                if (dl != 0) {
                    fp_stack++;
                    fp_stack++;
                    fp_stack++;
                    if (dl != 0) {
                        goto label_28;
                    }
                    *(fp_stack--) = 0.0;
                    fp_tmp_18 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_18;
label_16:
                    __asm ("fxam");
                    ax = fp_status;
                    fp_stack++;
                    fp_tmp_19 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_19;
                    fp_stack[0] = abs(fp_stack[0]);
                    if ((ah & 2) != 0) {
                        fp_stack[0] = -fp_stack[0];
                    }
                    *(fp_stack--) = fp_stack[2];
                    fp_stack[0] -= fp_stack[3];
                    fp_tmp_20 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_20;
                    __asm ("fucom st(0)");
                    ax = fp_status;
                    __asm ("sahf");
                    if ((ah & 2) != 0) {
                        goto label_29;
                    }
                    if ((ah & 2) == 0) {
                        goto label_30;
                    }
                    fp_tmp_21 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_21;
                    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
                    fp_stack++;
                    ax = fp_status;
                    __asm ("sahf");
                    if ((ah & 2) != 0) {
                        if ((ah & 2) == 0) {
                            goto label_31;
                        }
                    }
                    *(fp_stack--) = 1.0;
                    fp_tmp_22 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_22;
label_15:
                    __asm ("fxam");
                    ax = fp_status;
                    fp_stack++;
                    fp_tmp_23 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_23;
                    fp_stack[0] = abs(fp_stack[0]);
                    if ((ah & 2) != 0) {
                        fp_stack[0] = -fp_stack[0];
                    }
                    *(fp_stack--) = fp_stack[2];
                    fp_stack[0] *= fp_stack[4];
                    *(fp_stack--) = fp_stack[1];
                    fp_stack[0] *= fp_stack[3];
                    fp_stack[0] += fp_stack[1];
                    fp_stack++;
                    *(fp_stack--) = *((ecx - 0x1a18));
                    fp_stack[1] *= fp_stack[0];
                    fp_tmp_24 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_24;
                    fp_stack[0] *= fp_stack[5];
                    fp_stack++;
                    fp_tmp_25 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_25;
                    fp_stack[0] *= fp_stack[2];
                    fp_stack++;
                    fp_tmp_26 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_26;
                    fp_stack[1] -= fp_stack[0];
                    fp_stack++;
                    fp_stack[0] *= fp_stack[2];
                    fp_stack++;
                    goto label_1;
label_11:
                    fp_tmp_27 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_27;
                    goto label_32;
label_12:
                    fp_tmp_28 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_28;
label_32:
                    __asm ("fucom st(0)");
                    ax = fp_status;
                    __asm ("sahf");
                    if ((ah & 2) == 0) {
                        if ((ah & 2) != 0) {
                            goto label_33;
                        }
                    }
                    *(fp_stack--) = fp_stack[4];
                    fp_stack[0] -= fp_stack[5];
                    *((ebp - 4)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = fp_stack[2];
                    fp_stack[0] -= fp_stack[3];
                    fp_tmp_29 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_29;
                    fp_tmp_30 = fp_stack[5];
                    fp_stack[5] = fp_stack[0];
                    fp_stack[0] = fp_tmp_30;
                    fp_tmp_31 = fp_stack[6];
                    fp_stack[6] = fp_stack[0];
                    fp_stack[0] = fp_tmp_31;
                    fp_tmp_32 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_32;
                    fp_tmp_33 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_33;
                    fp_tmp_34 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_34;
                    fp_tmp_35 = fp_stack[5];
                    fp_stack[5] = fp_stack[0];
                    fp_stack[0] = fp_tmp_35;
                    fp_tmp_36 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_36;
                    fp_tmp_37 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_37;
                    fp_tmp_38 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_38;
                    fp_tmp_39 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_39;
                    fp_tmp_40 = fp_stack[5];
                    fp_stack[5] = fp_stack[0];
                    fp_stack[0] = fp_tmp_40;
                    fp_tmp_41 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_41;
                    fp_tmp_42 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_42;
                    fp_tmp_43 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_43;
                    fp_tmp_44 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_44;
                    fp_tmp_45 = fp_stack[5];
                    fp_stack[5] = fp_stack[0];
                    fp_stack[0] = fp_tmp_45;
                    fp_tmp_46 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_46;
                    fp_tmp_47 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_47;
                    fp_tmp_48 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_48;
                } else {
                } else {
                } else {
                } else {
                    fp_tmp_49 = fp_stack[4];
                    fp_stack[4] = fp_stack[0];
                    fp_stack[0] = fp_tmp_49;
                    fp_tmp_50 = fp_stack[5];
                    fp_stack[5] = fp_stack[0];
                    fp_stack[0] = fp_tmp_50;
                    fp_tmp_51 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_51;
                    fp_tmp_52 = fp_stack[2];
                    fp_stack[2] = fp_stack[0];
                    fp_stack[0] = fp_tmp_52;
                    fp_tmp_53 = fp_stack[3];
                    fp_stack[3] = fp_stack[0];
                    fp_stack[0] = fp_tmp_53;
                }
            }
        }
    }
label_9:
    __asm ("fucom st(0)");
    ax = fp_status;
    fp_tmp_54 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_54;
    __asm ("sahf");
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("setnp dl");
    __asm ("sahf");
    __asm ("setp al");
    dl &= al;
    if (dl != 0) {
        goto label_34;
    }
    *(fp_stack--) = fp_stack[4];
    fp_stack[0] -= fp_stack[5];
    fp_tmp_55 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_55;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (dl != 0) {
        goto label_2;
    }
    if (dl == 0) {
        goto label_3;
    }
    fp_tmp_56 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_56;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl == 0) {
        goto label_34;
    }
    if (dl == 0) {
        goto label_4;
    }
label_34:
    *(fp_stack--) = *((ebp - 4));
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl != 0) {
        goto label_5;
    }
    if (dl == 0) {
        goto label_6;
    }
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] -= fp_stack[1];
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (dl != 0) {
        goto label_7;
    }
    if (dl == 0) {
        goto label_8;
    }
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    if (dl != 0) {
        goto label_35;
    }
    *(fp_stack--) = 0.0;
    fp_tmp_57 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_57;
label_14:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    fp_tmp_58 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_58;
    fp_stack[0] = abs(fp_stack[0]);
    if ((ah & 2) != 0) {
        fp_stack[0] = -fp_stack[0];
    }
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] -= fp_stack[3];
    fp_tmp_59 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_59;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        goto label_36;
    }
    if ((ah & 2) == 0) {
        goto label_37;
    }
    fp_tmp_60 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_60;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        if ((ah & 2) == 0) {
            goto label_38;
        }
    }
    *(fp_stack--) = 1.0;
    fp_tmp_61 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_61;
label_13:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    fp_tmp_62 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_62;
    fp_stack[0] = abs(fp_stack[0]);
    if ((ah & 2) != 0) {
        fp_stack[0] = -fp_stack[0];
    }
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[3];
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] *= fp_stack[2];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *(fp_stack--) = 0.0;
    fp_stack[1] *= fp_stack[0];
    fp_tmp_63 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_63;
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_tmp_64 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_64;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] -= fp_stack[1];
    fp_stack++;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_tmp_65 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_65;
    goto label_1;
label_24:
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_tmp_66 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_66;
    fp_tmp_67 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_67;
    fp_tmp_68 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_68;
    fp_tmp_69 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_69;
    goto label_39;
label_25:
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_tmp_70 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_70;
    fp_tmp_71 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_71;
    fp_tmp_72 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_72;
    fp_tmp_73 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_73;
    goto label_39;
label_27:
    fp_tmp_74 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_74;
    fp_tmp_75 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_75;
    fp_tmp_76 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_76;
    fp_tmp_77 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_77;
label_39:
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] -= fp_stack[4];
    fp_tmp_78 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_78;
    goto label_9;
    if ((ah & 2) == 0) {
label_23:
        goto label_10;
    }
    fp_tmp_79 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_79;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) == 0) {
        goto label_11;
    }
    if ((ah & 2) != 0) {
        goto label_12;
    }
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack[1] = fp_stack[0];
    fp_stack--;
    goto label_40;
label_33:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_80 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_80;
    fp_tmp_81 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_81;
label_40:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = *((ecx - 0x1a18));
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = *((ecx - 0x1a14));
    }
    *(fp_stack--) = fp_stack[0];
    fp_stack[0] *= fp_stack[3];
    fp_stack++;
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_tmp_82 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_82;
    goto label_1;
label_36:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_83 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_83;
    fp_tmp_84 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_84;
    goto label_41;
label_37:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_85 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_85;
    fp_tmp_86 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_86;
    goto label_41;
label_38:
    fp_tmp_87 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_87;
    fp_tmp_88 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_88;
label_41:
    *(fp_stack--) = 0.0;
    fp_tmp_89 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_89;
    fp_tmp_90 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_90;
    fp_tmp_91 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_91;
    goto label_13;
label_35:
    *(fp_stack--) = 1.0;
    fp_tmp_92 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_92;
    goto label_14;
label_29:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_93 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_93;
    fp_tmp_94 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_94;
    goto label_42;
label_30:
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_95 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_95;
    fp_tmp_96 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_96;
    goto label_42;
label_31:
    fp_tmp_97 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_97;
    fp_tmp_98 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_98;
label_42:
    *(fp_stack--) = 0.0;
    fp_tmp_99 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_99;
    fp_tmp_100 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_100;
    fp_tmp_101 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_101;
    goto label_15;
label_28:
    *(fp_stack--) = 1.0;
    fp_tmp_102 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_102;
    goto label_16;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804cf20 */
#include <stdint.h>
 
uint32_t dbg_quantum_frand (void) {
    int32_t var_4h;
    /* double quantum_frand(); */
    eax = rand ();
    *(fp_stack--) = *(esp);
    esp = esp + 4;
    *(fp_stack--) = *(0x8054378);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80489f4 */
#include <stdint.h>
 
void rand (void) {
    rand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8052b30 */
#include <stdint.h>
 
int32_t dbg_quantum_get_version (void) {
    /* char const * quantum_get_version(); */
    eax = "0.9.1";
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804f5b6 */
#include <stdint.h>
 
int32_t dbg_mul_mod_n (void) {
    int32_t N;
    int32_t a;
    int32_t ctl;
    int32_t width;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    /* void mul_mod_n(int N,int a,int ctl,int width,quantum_reg * reg); */
    eax = *((ebp + 0x18));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    muln ();
    eax = *((ebp + 0x18));
    *((esp + 8)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_swaptheleads_omuln_controlled ();
    eax = *((ebp + 0x18));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    muln_inv ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80541e0 */
#include <stdint.h>
 
int32_t atexit (int32_t arg_8h) {
    int32_t var_4h;
    int32_t var_8h;
    eax = 0;
    _i686_get_pc_thunk_bx (ebx);
    ebx += 0x1e09;
    edx = *((ebx - 4));
    if (edx != 0) {
        eax = *(edx);
    }
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = 0;
    *(esp) = eax;
    cxa_atexit ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8053887 */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048844 */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804f79f */
#include <stdint.h>
 
int32_t dbg_quantum_qec_decode (void) {
    int32_t var_28h;
    int32_t var_24h;
    float lambda;
    int32_t swidth;
    int32_t b;
    int32_t a;
    int32_t i;
    int32_t type;
    int32_t width;
    quantum_reg * reg;
    uint32_t var_4h;
    int32_t var_8h;
    /* void quantum_qec_decode(int type,int width,quantum_reg * reg); */
    quantum_get_decoherence ();
    *((ebp - 0x14)) = fp_stack[0];
    fp_stack--;
    eax = 0;
    *(esp) = eax;
    quantum_set_decoherence ();
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x24)) = eax;
    *((ebp - 0x28)) = 0x55555556;
    eax = *((ebp - 0x28));
    edx:eax = eax * *((ebp - 0x24));
    ecx = edx;
    eax = *((ebp - 0x24));
    eax >>= 0x1f;
    edx = ecx;
    edx -= eax;
    eax = edx;
    *((ebp - 0x10)) = eax;
    *((esp + 4)) = 0;
    *(esp) = 0;
    quantum_qec_set_status ();
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x24)) = eax;
    *((ebp - 0x28)) = 0x55555556;
    eax = *((ebp - 0x28));
    edx:eax = eax * *((ebp - 0x24));
    ecx = edx;
    eax = *((ebp - 0x24));
    eax >>= 0x1f;
    edx = ecx;
    edx -= eax;
    eax = edx;
    eax--;
    *((ebp - 4)) = eax;
    while (*((ebp - 4)) >= 0) {
        if (*((ebp - 4)) == 0) {
            eax = *((ebp - 0x14));
            *(esp) = eax;
            quantum_set_decoherence ();
        }
        eax = *((ebp - 4));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            eax += eax;
            edx = eax;
            edx += *((ebp - 4));
            eax = *((ebp + 0x10));
            *((esp + 8)) = eax;
            eax = *((ebp - 4));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_cnot ();
            edx = *((ebp - 4));
            eax = *((ebp - 0x10));
            edx = eax + edx;
            eax = *((ebp + 0x10));
            *((esp + 8)) = eax;
            eax = *((ebp - 4));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_cnot ();
            eax = *((ebp - 0x10));
            eax += eax;
            edx = eax;
            edx += *((ebp - 4));
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_hadamard ();
            edx = *((ebp - 4));
            eax = *((ebp - 0x10));
            edx = eax + edx;
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_hadamard ();
        } else {
            eax = *((ebp - 0x10));
            eax += eax;
            edx = eax;
            edx += *((ebp - 4));
            eax = *((ebp + 0x10));
            *((esp + 8)) = eax;
            *((esp + 4)) = edx;
            eax = *((ebp - 4));
            *(esp) = eax;
            quantum_cnot ();
            edx = *((ebp - 4));
            eax = *((ebp - 0x10));
            edx = eax + edx;
            eax = *((ebp + 0x10));
            *((esp + 8)) = eax;
            *((esp + 4)) = edx;
            eax = *((ebp - 4));
            *(esp) = eax;
            quantum_cnot ();
        }
        *((ebp - 4))--;
    }
    *((ebp - 4)) = 1;
    while (eax <= *((ebp - 0x10))) {
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x10));
        *(esp) = eax;
        eax = quantum_bmeasure ();
        *((ebp - 8)) = eax;
        eax = *((ebp - 0x10));
        eax += eax;
        edx = eax;
        edx -= *((ebp - 4));
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        *(esp) = edx;
        eax = quantum_bmeasure ();
        *((ebp - 0xc)) = eax;
        if (*((ebp - 8)) == 1) {
            if (*((ebp - 0xc)) != 1) {
                goto label_0;
            }
            eax = *((ebp - 4));
            eax--;
            if (eax >= *((ebp + 0xc))) {
                goto label_0;
            }
            eax = *((ebp - 4));
            edx = eax - 1;
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_sigma_z ();
        }
label_0:
        *((ebp - 4))++;
        eax = *((ebp - 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804f664 */
#include <stdint.h>
 
int32_t dbg_quantum_qec_encode (void) {
    float lambda;
    int32_t i;
    int32_t type;
    int32_t width;
    quantum_reg * reg;
    uint32_t var_sp_4h;
    int32_t var_8h;
    /* void quantum_qec_encode(int type,int width,quantum_reg * reg); */
    quantum_get_decoherence ();
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    eax = 0;
    *(esp) = eax;
    quantum_set_decoherence ();
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 0x10));
        eax = *(eax);
        eax--;
        if (eax == *((ebp - 4))) {
            eax = *((ebp - 8));
            *(esp) = eax;
            quantum_set_decoherence ();
        }
        eax = *((ebp - 4));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp + 0x10));
            eax = *(eax);
            edx = *(eax);
            edx += *((ebp - 4));
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_hadamard ();
            eax = *((ebp + 0x10));
            eax = *(eax);
            eax += eax;
            edx = eax;
            edx += *((ebp - 4));
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_hadamard ();
            eax = *((ebp + 0x10));
            eax = *(eax);
            edx = *(eax);
            edx += *((ebp - 4));
            eax = *((ebp + 0x10));
            *((esp + 8)) = eax;
            eax = *((ebp - 4));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_cnot ();
            eax = *((ebp + 0x10));
            eax = *(eax);
            eax += eax;
            edx = eax;
            edx += *((ebp - 4));
            eax = *((ebp + 0x10));
            *((esp + 8)) = eax;
            eax = *((ebp - 4));
            *((esp + 4)) = eax;
            *(esp) = edx;
            quantum_cnot ();
        } else {
            eax = *((ebp + 0x10));
            eax = *(eax);
            edx = *(eax);
            edx += *((ebp - 4));
            eax = *((ebp + 0x10));
            *((esp + 8)) = eax;
            *((esp + 4)) = edx;
            eax = *((ebp - 4));
            *(esp) = eax;
            quantum_cnot ();
            eax = *((ebp + 0x10));
            eax = *(eax);
            eax += eax;
            edx = eax;
            edx += *((ebp - 4));
            eax = *((ebp + 0x10));
            *((esp + 8)) = eax;
            *((esp + 4)) = edx;
            eax = *((ebp - 4));
            *(esp) = eax;
            quantum_cnot ();
        }
        *((ebp - 4))++;
        eax = *((ebp + 0x10));
        eax = *(eax);
    }
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((esp + 4)) = eax;
    *(esp) = 1;
    quantum_qec_set_status ();
    eax = *((ebp + 0x10));
    edx = *(eax);
    eax = *(eax);
    eax += eax;
    edx = eax + edx;
    eax = *((ebp + 0x10));
    *(eax) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804c4cb */
#include <stdint.h>
 
int32_t dbg_quantum_r_z (void) {
    complex float z;
    int32_t var_10h;
    int32_t i;
    int32_t target;
    float gamma;
    quantum_reg * reg;
    void * var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* void quantum_r_z(int target,float gamma,quantum_reg * reg); */
    *(fp_stack--) = *((ebp + 0xc));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (9, eax);
    if (eax != 0) {
        goto label_0;
    }
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *(0x8054350);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = quantum_cexp ();
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    *((ebp - 0x14)) = eax;
    *((ebp - 0x10)) = edx;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            esi = edx + eax;
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            ebx = edx;
            ecx = eax;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x10));
            eax = _mulsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *(esi) = eax;
            *((esi + 4)) = edx;
        } else {
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            esi = edx + eax;
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            ebx = edx;
            ecx = eax;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x10));
            eax = _divsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *(esi) = eax;
            *((esi + 4)) = edx;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_decohere ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8050d20 */
#include <stdint.h>
 
int32_t dbg_quantum_new_qureg (file* arg_8h, char * arg_ch, char * arg_10h) {
    long long unsigned int initval;
    char * var_24h;
    quantum_reg reg;
    int32_t var_14h;
    int32_t var_10h;
    void * var_ch;
    void * var_8h;
    char * c;
    int32_t width;
    size_t size;
    int32_t var_sp_8h;
    /* quantum_reg quantum_new_qureg(long long unsigned int initval,int width); */
    eax = *((ebp + 0xc));
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x24)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x18)) = eax;
    *((ebp - 0x14)) = 1;
    eax = *((ebp + 0x14));
    eax += 2;
    *((ebp - 0x10)) = eax;
    eax = calloc (1, 0x10);
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    *(esp) = 0x10;
    quantum_memman ();
    ecx = *((ebp - 0x10));
    eax = 1;
    eax <<= cl;
    eax = calloc (eax, 4);
    *((ebp - 8)) = eax;
    eax = *((ebp - 8));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    ecx = *((ebp - 0x10));
    eax = 4;
    eax <<= cl;
    *(esp) = eax;
    quantum_memman ();
    ecx = *((ebp - 0xc));
    eax = *((ebp - 0x28));
    edx = *((ebp - 0x24));
    *((ecx + 8)) = eax;
    *((ecx + 0xc)) = edx;
    edx = *((ebp - 0xc));
    eax = 0x3f800000;
    *(edx) = eax;
    eax = 0;
    *((edx + 4)) = eax;
    eax = getenv (0x8054448);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) != 0) {
        quantum_objcode_start ();
        eax = *((ebp - 4));
        *(esp) = eax;
        quantum_objcode_file ();
        eax = quantum_objcode_exit;
        atexit (eax);
    }
    eax = *((ebp - 0x28));
    edx = *((ebp - 0x24));
    *((esp + 4)) = eax;
    quantum_objcode_put (0, edx);
    eax = *((ebp - 0x18));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0x14));
    edx = *((ebp + 8));
    *((edx + 4)) = eax;
    eax = *((ebp - 0x10));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp - 0xc));
    edx = *((ebp + 8));
    *((edx + 0xc)) = eax;
    eax = *((ebp - 8));
    edx = *((ebp + 8));
    *((edx + 0x10)) = eax;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804eb51 */
#include <stdint.h>
 
int32_t dbg_quantum_objcode_run (int32_t arg_8h, int32_t arg_ch) {
    uint32_t var_cch;
    int32_t var_c8h;
    uint32_t var_c4h;
    int32_t var_c0h;
    int32_t var_b8h;
    int32_t var_b4h;
    int32_t var_b0h;
    int32_t var_ach;
    int32_t var_a8h;
    quantum_reg * reg;
    char * file;
    double d;
    long long unsigned int mu;
    int32_t var_7ch;
    FILE * fhd;
    int32_t l;
    int32_t k;
    int32_t j;
    int32_t i;
    unsigned char operation;
    unsigned char[80] buf;
    int32_t canary;
    int32_t var_bp_4h;
    char * format;
    char * nmemb;
    file* var_sp_ch;
    int32_t var_10h;
    /* void quantum_objcode_run(char * file,quantum_reg * reg); */
    eax = *((ebp + 8));
    *((ebp - 0x8c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x90)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x8c));
    eax = fopen (eax, 0x80543cc);
    *((ebp - 0x74)) = eax;
    if (*((ebp - 0x74)) == 0) {
        edx = stderr;
        eax = *((ebp - 0x8c));
        *((esp + 8)) = eax;
        fprintf (edx, "quantum_objcode_run: Could not open %s: ");
        perror (0);
        goto label_1;
    }
    *((ebp - 0x64)) = 0;
    goto label_2;
label_0:
    *((ebp - 0x68)) = 0;
    while (*((ebp - 0x68)) <= 0x4f) {
        eax = *((ebp - 0x68));
        *((ebp + eax - 0x5c)) = 0;
        *((ebp - 0x68))++;
    }
    eax = *((ebp - 0x74));
    al = fgetc (eax);
    *((ebp - 0x5d)) = al;
    edx = *((ebp - 0x5d));
    *((ebp - 0xc8)) = edx;
    if (*((ebp - 0xc8)) <= 0xb) {
        if (*((ebp - 0xc8)) < 7) {
            if (*((ebp - 0xc8)) != 2) {
                if (*((ebp - 0xc8)) > 2) {
                    goto label_3;
                }
                if (*((ebp - 0xc8)) != 0) {
                    if (*((ebp - 0xc8)) == 1) {
                        goto label_4;
                    }
                } else {
                    if (*((ebp - 0xc8)) == 0x80) {
                        goto label_5;
                    }
                    if (*((ebp - 0xc8)) <= 0x80) {
                        if (*((ebp - 0xc8)) == 0xd) {
                            goto label_6;
                        }
                        if (*((ebp - 0xc8)) < 0xd) {
                            goto label_4;
                        }
                        if (*((ebp - 0xc8)) == 0xe) {
                            goto label_3;
                        }
                        goto label_7;
                    }
                    if (*((ebp - 0xc8)) <= 0x82) {
                        goto label_3;
                    }
                    if (*((ebp - 0xc8)) == 0xff) {
                        goto label_8;
                    }
                    goto label_7;
                }
                eax = *((ebp - 0x74));
                eax = ebp - 0x5c;
                fread (eax, 8, 1);
                eax = ebp - 0x5c;
                *(esp) = eax;
                eax = quantum_char2mu ();
                *((ebp - 0x80)) = eax;
                *((ebp - 0x7c)) = edx;
                ebx = *((ebp - 0x90));
                ecx = ebp - 0xb8;
                *((esp + 0xc)) = 0xc;
                eax = *((ebp - 0x80));
                edx = *((ebp - 0x7c));
                quantum_new_qureg (ecx, eax, edx);
                eax = *((ebp - 0xb8));
                *(ebx) = eax;
                eax = *((ebp - 0xb4));
                *((ebx + 4)) = eax;
                eax = *((ebp - 0xb0));
                *((ebx + 8)) = eax;
                eax = *((ebp - 0xac));
                *((ebx + 0xc)) = eax;
                eax = *((ebp - 0xa8));
                *((ebx + 0x10)) = eax;
                goto label_8;
label_4:
                eax = *((ebp - 0x74));
                eax = ebp - 0x5c;
                fread (eax, 4, 1);
                eax = ebp - 0x5c;
                *(esp) = eax;
                eax = quantum_char2int ();
                *((ebp - 0x68)) = eax;
                eax = *((ebp - 0x74));
                eax = ebp - 0x5c;
                fread (eax, 4, 1);
                eax = ebp - 0x5c;
                *(esp) = eax;
                eax = quantum_char2int ();
                *((ebp - 0x6c)) = eax;
                eax = *((ebp - 0x5d));
                *((ebp - 0xc4)) = eax;
                if (*((ebp - 0xc4)) != 1) {
                    if (*((ebp - 0xc4)) == 0xc) {
                        goto label_9;
                    }
                    goto label_8;
                }
                eax = *((ebp - 0x90));
                *((esp + 8)) = eax;
                eax = *((ebp - 0x6c));
                *((esp + 4)) = eax;
                eax = *((ebp - 0x68));
                *(esp) = eax;
                quantum_cnot ();
                goto label_8;
label_9:
                eax = *((ebp - 0x90));
                *((esp + 8)) = eax;
                eax = *((ebp - 0x6c));
                *((esp + 4)) = eax;
                eax = *((ebp - 0x68));
                *(esp) = eax;
                quantum_cond_phase ();
                goto label_8;
            }
            eax = *((ebp - 0x74));
            eax = ebp - 0x5c;
            fread (eax, 4, 1);
            eax = ebp - 0x5c;
            *(esp) = eax;
            eax = quantum_char2int ();
            *((ebp - 0x68)) = eax;
            eax = *((ebp - 0x74));
            eax = ebp - 0x5c;
            fread (eax, 4, 1);
            eax = ebp - 0x5c;
            *(esp) = eax;
            eax = quantum_char2int ();
            *((ebp - 0x6c)) = eax;
            eax = *((ebp - 0x74));
            eax = ebp - 0x5c;
            fread (eax, 4, 1);
            eax = ebp - 0x5c;
            *(esp) = eax;
            eax = quantum_char2int ();
            *((ebp - 0x70)) = eax;
            eax = *((ebp - 0x90));
            *((esp + 0xc)) = eax;
            eax = *((ebp - 0x70));
            *((esp + 8)) = eax;
            eax = *((ebp - 0x6c));
            *((esp + 4)) = eax;
            eax = *((ebp - 0x68));
            *(esp) = eax;
            quantum_toffoli ();
            goto label_8;
label_3:
            eax = *((ebp - 0x74));
            eax = ebp - 0x5c;
            fread (eax, 4, 1);
            eax = ebp - 0x5c;
            *(esp) = eax;
            eax = quantum_char2int ();
            *((ebp - 0x68)) = eax;
            edx = *((ebp - 0x5d));
            *((ebp - 0xc0)) = edx;
            if (*((ebp - 0xc0)) != 6) {
                if (*((ebp - 0xc0)) <= 6) {
                    if (*((ebp - 0xc0)) == 4) {
                        goto label_10;
                    }
                    if (*((ebp - 0xc0)) > 4) {
                        goto label_11;
                    }
                    if (*((ebp - 0xc0)) == 3) {
                        goto label_12;
                    }
                    goto label_8;
                }
                if (*((ebp - 0xc0)) == 0x81) {
                    goto label_13;
                }
                if (*((ebp - 0xc0)) == 0x82) {
                    goto label_14;
                }
                if (*((ebp - 0xc0)) == 0xe) {
                    goto label_15;
                }
                goto label_8;
label_12:
                eax = *((ebp - 0x90));
                *((esp + 4)) = eax;
                eax = *((ebp - 0x68));
                *(esp) = eax;
                quantum_sigma_x ();
                goto label_8;
label_10:
                eax = *((ebp - 0x90));
                *((esp + 4)) = eax;
                eax = *((ebp - 0x68));
                *(esp) = eax;
                quantum_sigma_y ();
                goto label_8;
label_11:
                eax = *((ebp - 0x90));
                *((esp + 4)) = eax;
                eax = *((ebp - 0x68));
                *(esp) = eax;
                quantum_sigma_z ();
                goto label_8;
            }
            eax = *((ebp - 0x90));
            *((esp + 4)) = eax;
            eax = *((ebp - 0x68));
            *(esp) = eax;
            quantum_hadamard ();
            goto label_8;
label_13:
            eax = *((ebp - 0x90));
            *((esp + 4)) = eax;
            eax = *((ebp - 0x68));
            *(esp) = eax;
            quantum_bmeasure ();
            goto label_8;
label_14:
            eax = *((ebp - 0x90));
            *((esp + 4)) = eax;
            eax = *((ebp - 0x68));
            *(esp) = eax;
            quantum_bmeasure_bitpreserve ();
            goto label_8;
label_15:
            eax = *((ebp - 0x90));
            *((esp + 4)) = eax;
            eax = *((ebp - 0x68));
            *(esp) = eax;
            quantum_swaptheleads ();
            goto label_8;
        }
        eax = *((ebp - 0x74));
        eax = ebp - 0x5c;
        fread (eax, 4, 1);
        eax = ebp - 0x5c;
        *(esp) = eax;
        eax = quantum_char2int ();
        *((ebp - 0x68)) = eax;
        eax = *((ebp - 0x74));
        eax = ebp - 0x5c;
        fread (eax, 8, 1);
        eax = ebp - 0x5c;
        *(esp) = eax;
        quantum_char2double ();
        *((ebp - 0x88)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x5d));
        eax -= 7;
        *((ebp - 0xcc)) = eax;
        if (*((ebp - 0xcc)) > 4) {
            goto label_8;
        }
        edx = *((ebp - 0xcc));
        eax = *((edx*4 + 0x8054418));
        /* switch table (5 cases) at 0x8054418 */
        void (*eax)() ();
        *(fp_stack--) = *((ebp - 0x88));
        *((ebp - 0xbc)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xbc));
        eax = *((ebp - 0x90));
        *((esp + 8)) = eax;
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x68));
        *(esp) = eax;
        quantum_r_x ();
        goto label_8;
        *(fp_stack--) = *((ebp - 0x88));
        *((ebp - 0xbc)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xbc));
        eax = *((ebp - 0x90));
        *((esp + 8)) = eax;
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x68));
        *(esp) = eax;
        quantum_r_y ();
        goto label_8;
        *(fp_stack--) = *((ebp - 0x88));
        *((ebp - 0xbc)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xbc));
        eax = *((ebp - 0x90));
        *((esp + 8)) = eax;
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x68));
        *(esp) = eax;
        quantum_r_z ();
        goto label_8;
        *(fp_stack--) = *((ebp - 0x88));
        *((ebp - 0xbc)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xbc));
        eax = *((ebp - 0x90));
        *((esp + 8)) = eax;
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x68));
        *(esp) = eax;
        quantum_phase_kick ();
        goto label_8;
        *(fp_stack--) = *((ebp - 0x88));
        *((ebp - 0xbc)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xbc));
        eax = *((ebp - 0x90));
        *((esp + 8)) = eax;
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x68));
        *(esp) = eax;
        quantum_phase_scale ();
        goto label_8;
label_6:
        eax = *((ebp - 0x74));
        eax = ebp - 0x5c;
        fread (eax, 4, 1);
        eax = ebp - 0x5c;
        *(esp) = eax;
        eax = quantum_char2int ();
        *((ebp - 0x68)) = eax;
        eax = *((ebp - 0x74));
        eax = ebp - 0x5c;
        fread (eax, 4, 1);
        eax = ebp - 0x5c;
        *(esp) = eax;
        eax = quantum_char2int ();
        *((ebp - 0x6c)) = eax;
        eax = *((ebp - 0x74));
        eax = ebp - 0x5c;
        fread (eax, 8, 1);
        eax = ebp - 0x5c;
        *(esp) = eax;
        quantum_char2double ();
        *((ebp - 0x88)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x88));
        *((ebp - 0xbc)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xbc));
        eax = *((ebp - 0x90));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x6c));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x68));
        *(esp) = eax;
        quantum_cond_phase_kick ();
        goto label_8;
label_5:
        edx = *((ebp - 0x90));
        eax = *(edx);
        *(esp) = eax;
        eax = *((edx + 4));
        *((esp + 4)) = eax;
        eax = *((edx + 8));
        *((esp + 8)) = eax;
        eax = *((edx + 0xc));
        eax = *((edx + 0x10));
        quantum_measure (eax);
        goto label_8;
    }
label_7:
    eax = *((ebp - 0x5d));
    edx = stderr;
    *((esp + 0xc)) = eax;
    eax = *((ebp - 0x64));
    *((esp + 8)) = eax;
    fprintf (edx, "%i: Unknown opcode 0x(%X)!\n");
    goto label_1;
label_8:
    *((ebp - 0x64))++;
label_2:
    eax = *((ebp - 0x74));
    eax = feof (eax);
    if (eax == 0) {
        goto label_0;
    }
    eax = *((ebp - 0x74));
    fclose (eax);
label_1:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8051124 */
#include <stdint.h>
 
int32_t dbg_quantum_print_qureg (int32_t arg_ch, int32_t arg_14h) {
    int32_t j;
    int32_t i;
    quantum_reg reg;
    int32_t var_4h;
    int32_t var_14h;
    int32_t var_18h;
    /* void quantum_print_qureg(quantum_reg reg); */
    *((ebp - 0xc)) = 0;
    goto label_1;
label_0:
    edx = *((ebp + 0x14));
    eax = *((ebp - 0xc));
    eax <<= 4;
    edx += eax;
    eax = *(edx);
    *(esp) = eax;
    eax = *((edx + 4));
    quantum_prob_inline (eax);
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp + 0x14));
    eax = *((ebp - 0xc));
    eax <<= 4;
    eax = edx + eax;
    ebx = *((eax + 8));
    esi = *((eax + 0xc));
    edx = *((ebp + 0x14));
    eax = *((ebp - 0xc));
    eax <<= 4;
    edx += eax;
    eax = *(edx);
    *(esp) = eax;
    eax = *((edx + 4));
    *((esp + 4)) = eax;
    quantum_imag ();
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp + 0x14));
    eax = *((ebp - 0xc));
    eax <<= 4;
    edx += eax;
    eax = *(edx);
    *(esp) = eax;
    eax = *((edx + 4));
    *((esp + 4)) = eax;
    quantum_real ();
    *(fp_stack--) = *((ebp - 0x28));
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *((esp + 0x14)) = ebx;
    *((esp + 0x18)) = esi;
    *(fp_stack--) = *((ebp - 0x20));
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    printf ("% f %+fi|%lli> (%e) (|");
    eax = *((ebp + 8));
    eax--;
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) >= 0) {
        edx = *((ebp - 0x10));
        eax = *((ebp - 0x10));
        eax >>= 0x1f;
        ecx = eax;
        ecx >>= 0x1e;
        eax = edx + ecx;
        eax &= 3;
        eax -= ecx;
        if (eax == 3) {
            putchar (0x20);
        }
        edx = *((ebp + 0x14));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp - 0x10));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        *((esp + 4)) = eax;
        printf (0x8054468);
        *((ebp - 0x10))--;
    }
    puts (0x805446b);
    *((ebp - 0xc))++;
label_1:
    eax = *((ebp + 0xc));
    if (eax > *((ebp - 0xc))) {
        goto label_0;
    }
    putchar (0xa);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804a088 */
#include <stdint.h>
 
int32_t dbg_quantum_exp_mod_n (void) {
    int32_t f;
    int32_t j;
    int32_t i;
    int32_t N;
    int32_t x;
    int32_t width_input;
    int32_t width;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_sp_8h;
    int32_t var_sp_ch;
    int32_t var_10h;
    /* void quantum_exp_mod_n(int N,int x,int width_input,int width,quantum_reg * reg); */
    eax = *((ebp + 0x14));
    eax++;
    edx = eax + eax;
    eax = *((ebp + 0x18));
    *((esp + 4)) = eax;
    *(esp) = edx;
    quantum_sigma_x ();
    *((ebp - 4)) = 1;
    goto label_1;
label_0:
    edx = *((ebp + 0xc));
    eax = *((ebp + 0xc));
    edx >>= 0x1f;
    eax = *(edx:eax) / ebp + 8;
    edx = *(edx:eax) % ebp + 8;
    *((ebp - 0xc)) = edx;
    *((ebp - 8)) = 1;
    while (eax < *((ebp - 4))) {
        eax = *((ebp - 0xc));
        eax *= *((ebp - 0xc));
        *((ebp - 0xc)) = eax;
        edx = *((ebp - 0xc));
        eax = *((ebp - 0xc));
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp + 8;
        edx = *(edx:eax) % ebp + 8;
        *((ebp - 0xc)) = edx;
        *((ebp - 8))++;
        eax = *((ebp - 8));
    }
    edx = *((ebp + 0x14));
    eax = *((ebp + 0x14));
    eax += eax;
    eax += edx;
    eax++;
    edx = eax;
    edx += *((ebp - 4));
    eax = *((ebp + 0x18));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = edx;
    eax = *((ebp - 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    mul_mod_n ();
    *((ebp - 4))++;
label_1:
    eax = *((ebp - 4));
    if (eax <= *((ebp + 0x10))) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80512df */
#include <stdint.h>
 
int32_t dbg_quantum_print_expn (int32_t arg_ch, int32_t arg_14h) {
    int32_t var_20h;
    int32_t var_1ch;
    int32_t i;
    quantum_reg reg;
    long long int var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* void quantum_print_expn(quantum_reg reg); */
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        edx = *((ebp + 0x14));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 8));
        ecx = *((eax + 0xc));
        *((ebp - 0x20)) = edx;
        *((ebp - 0x1c)) = ecx;
        edx = *((ebp + 8));
        eax = *((ebp + 8));
        eax >>= 0x1f;
        eax += edx;
        eax >>= 1;
        ecx = eax;
        eax = *((ebp - 0xc));
        eax <<= cl;
        edx = eax;
        edx >>= 0x1f;
        ecx = *((ebp - 0x20));
        ebx = *((ebp - 0x1c));
        ecx -= eax;
        ebx -= edx;
        eax = ecx;
        edx = ebx;
        *((esp + 8)) = eax;
        *((esp + 0xc)) = edx;
        eax = *((ebp - 0xc));
        *((esp + 4)) = eax;
        printf ("%i: %lli\n");
        *((ebp - 0xc))++;
        eax = *((ebp + 0xc));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804c612 */
#include <stdint.h>
 
int32_t dbg_quantum_phase_scale (void) {
    complex float z;
    int32_t var_10h;
    int32_t i;
    int32_t target;
    float gamma;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* void quantum_phase_scale(int target,float gamma,quantum_reg * reg); */
    *(fp_stack--) = *((ebp + 0xc));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (0xb, eax);
    if (eax != 0) {
        goto label_0;
    }
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = quantum_cexp ();
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    *((ebp - 0x14)) = eax;
    *((ebp - 0x10)) = edx;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        esi = edx + eax;
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        ebx = edx;
        ecx = eax;
        edx = *((ebp - 0x14));
        eax = *((ebp - 0x10));
        eax = _mulsc3 (eax, ecx, edx);
        ecx = eax;
        ebx = edx;
        eax = ecx;
        edx = ebx;
        *(esi) = eax;
        *((esi + 4)) = edx;
        *((ebp - 0xc))++;
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_decohere ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049c13 */
#include <stdint.h>
 
int32_t dbg_quantum_delete_density_op (void) {
    int32_t i;
    quantum_density_op * rho;
    /* void quantum_delete_density_op(quantum_density_op * rho); */
    eax = *((ebp + 8));
    eax = *((eax + 8));
    *(esp) = eax;
    quantum_destroy_hash ();
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 8));
        ecx = *((eax + 8));
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        eax = ecx + eax;
        *(esp) = eax;
        quantum_delete_qureg_hashpreserve ();
        *((ebp - 4))++;
        eax = *((ebp + 8));
        eax = *(eax);
    }
    eax = *((ebp + 8));
    eax = *((eax + 4));
    free (eax);
    eax = *((ebp + 8));
    eax = *((eax + 8));
    free (eax);
    eax = *((ebp + 8));
    eax = *(eax);
    eax *= 0xffffffe8;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 8));
    *((eax + 4)) = 0;
    eax = *((ebp + 8));
    *((eax + 8)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804a615 */
#include <stdint.h>
 
int32_t dbg_quantum_sigma_y (void) {
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_24h;
    int32_t i;
    int32_t target;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void quantum_sigma_y(int target,quantum_reg * reg); */
    eax = *((ebp + 8));
    eax = quantum_objcode_put (4, eax);
    if (eax != 0) {
        goto label_0;
    }
    *((ebp - 0x14)) = 0;
    while (eax > *((ebp - 0x14))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x14));
        eax <<= 4;
        edx += eax;
        *((ebp - 0x24)) = edx;
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x14));
        eax <<= 4;
        eax = edx + eax;
        esi = *((eax + 8));
        edi = *((eax + 0xc));
        ecx = *((ebp + 8));
        *((ebp - 0x30)) = 1;
        *((ebp - 0x2c)) = 0;
        eax = *((ebp - 0x30));
        edx = *((ebp - 0x2c));
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        ecx = eax;
        ebx = edx;
        eax = esi;
        eax ^= ecx;
        edx = edi;
        edx ^= ebx;
        ecx = *((ebp - 0x24));
        *((ecx + 8)) = eax;
        *((ecx + 0xc)) = edx;
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x14));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            esi = edx + eax;
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            ecx = edx;
            edx = eax;
            eax = 0x3f800000;
            eax = 0;
            eax = _mulsc3 (eax, edx, eax);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *(esi) = eax;
            *((esi + 4)) = edx;
        } else {
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            esi = edx + eax;
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            ecx = edx;
            edx = eax;
            eax = 0xbf800000;
            eax = 0;
            eax = _mulsc3 (eax, edx, eax);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *(esi) = eax;
            *((esi + 4)) = edx;
        }
        *((ebp - 0x14))++;
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0xc));
    *(esp) = eax;
    quantum_decohere ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e509 */
#include <stdint.h>
 
int32_t dbg_quantum_double2char (int32_t arg_8h, int32_t arg_ch) {
    double d;
    int32_t var_14h;
    unsigned char * p;
    int32_t i;
    unsigned char * buf;
    /* void quantum_double2char(double d,unsigned char * buf); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    eax = ebp - 0x18;
    *((ebp - 8)) = eax;
    *((ebp - 4)) = 0;
    while (eax <= 7) {
        eax = *((ebp - 4));
        edx = *((ebp - 4));
        edx += *((ebp + 0x10));
        eax = *((ebp - 4));
        eax += *((ebp - 8));
        eax = *(eax);
        *(edx) = al;
        *((ebp - 4))++;
        eax = *((ebp - 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804ccad */
#include <stdint.h>
 
int32_t dbg_quantum_print_matrix (int32_t arg_ch, int32_t arg_10h) {
    int32_t z;
    int32_t j;
    int32_t i;
    quantum_matrix m;
    int32_t var_sp_4h;
    /* void quantum_print_matrix(quantum_matrix m); */
    *((ebp - 0xc)) = 0;
    do {
        ecx = *((ebp - 0xc));
        eax = 1;
        edx = 1;
        edx <<= cl;
        eax = *((ebp + 8));
        al = (edx < eax) ? 1 : 0;
        *((ebp - 0xc))++;
    } while (al != 0);
    *((ebp - 0xc))--;
    *((ebp - 4)) = 0;
    goto label_1;
label_0:
    *((ebp - 8)) = 0;
    while (eax > *((ebp - 8))) {
        edx = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax *= *((ebp - 4));
        eax += *((ebp - 8));
        eax <<= 3;
        edx += eax;
        eax = *(edx);
        eax = *((edx + 4));
        quantum_imag (eax, eax);
        *((ebp - 0x18)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax *= *((ebp - 4));
        eax += *((ebp - 8));
        eax <<= 3;
        edx += eax;
        eax = *(edx);
        eax = *((edx + 4));
        quantum_real (eax, eax);
        *(fp_stack--) = *((ebp - 0x18));
        *((esp + 0xc)) = fp_stack[0];
        fp_stack--;
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        printf ("%g %+gi ");
        *((ebp - 8))++;
        eax = *((ebp + 0xc));
    }
    putchar (0xa);
    *((ebp - 4))++;
label_1:
    eax = *((ebp + 8));
    if (eax > *((ebp - 4))) {
        goto label_0;
    }
    putchar (0xa);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048eca */
#include <stdint.h>
 
int32_t dbg_quantum_decohere (void) {
    int32_t var_38h;
    int32_t j;
    int32_t i;
    float angle;
    float * nrands;
    float x;
    float s;
    float v;
    float u;
    quantum_reg * reg;
    size_t size;
    int32_t var_8h;
    int32_t var_ch;
    /* void quantum_decohere(quantum_reg * reg); */
    *(esp) = 1;
    quantum_gate_counter ();
    eax = quantum_status;
    if (eax == 0) {
        goto label_2;
    }
    eax = *((ebp + 8));
    eax = *(eax);
    eax = calloc (eax, 4);
    *((ebp - 0x24)) = eax;
    if (*((ebp - 0x24)) == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp + 8));
    eax = *(eax);
    eax <<= 2;
    *(esp) = eax;
    quantum_memman ();
    *((ebp - 0x2c)) = 0;
    goto label_3;
    do {
label_0:
        quantum_frand ();
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(fp_stack--) = 1.0;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((ebp - 0x14)) = fp_stack[0];
        fp_stack--;
        ax = quantum_frand ();
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(fp_stack--) = 1.0;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((ebp - 0x18)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x14));
        fp_stack[0] *= *((ebp - 0x14));
        *(fp_stack--) = *((ebp - 0x18));
        fp_stack[0] *= *((ebp - 0x18));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0x1c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x1c));
        *(fp_stack--) = 1.0;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
    } while (eax >= 0);
    *(fp_stack--) = *((ebp - 0x14));
    *((ebp - 0x50)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x1c));
    *(esp) = fp_stack[0];
    fp_stack--;
    ax = log ();
    *(fp_stack--) = *(0x8054280);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    *(fp_stack--) = *((ebp - 0x1c));
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((ebp - 0x48)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x48));
    fp_stack[0] = sqrt(fp_stack[0]);
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x60));
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (eax != 0) {
        if (eax == 0) {
            goto label_4;
        }
    }
    *(fp_stack--) = *((ebp - 0x48));
    *(esp) = fp_stack[0];
    fp_stack--;
    sqrt ();
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
label_4:
    *(fp_stack--) = *((ebp - 0x60));
    fp_stack[0] *= *((ebp - 0x50));
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x20));
    *((ebp - 0x40)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(obj.quantum_lambda);
    fp_stack[0] += fp_stack[0];
    *(esp) = fp_stack[0];
    fp_stack--;
    sqrt ();
    fp_stack[0] *= *((ebp - 0x40));
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x2c));
    eax <<= 2;
    eax += *((ebp - 0x24));
    *(fp_stack--) = *((ebp - 0x20));
    *(fp_stack--) = *(0x8054288);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *(eax) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x2c))++;
label_3:
    eax = *((ebp + 8));
    eax = *(eax);
    if (eax > *((ebp - 0x2c))) {
        goto label_0;
    }
    *((ebp - 0x2c)) = 0;
    goto label_5;
label_1:
    eax = 0;
    *((ebp - 0x28)) = eax;
    *((ebp - 0x30)) = 0;
    while (eax > *((ebp - 0x30))) {
        eax = *((ebp + 8));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x2c));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp - 0x30));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            eax = *((ebp - 0x30));
            eax <<= 2;
            eax += *((ebp - 0x24));
            *(fp_stack--) = *(eax);
            *(fp_stack--) = *((ebp - 0x28));
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            *((ebp - 0x28)) = fp_stack[0];
            fp_stack--;
        } else {
            eax = *((ebp - 0x30));
            eax <<= 2;
            eax += *((ebp - 0x24));
            *(fp_stack--) = *(eax);
            *(fp_stack--) = *((ebp - 0x28));
            fp_stack[1] -= fp_stack[0];
            fp_stack++;
            *((ebp - 0x28)) = fp_stack[0];
            fp_stack--;
        }
        *((ebp - 0x30))++;
        eax = *((ebp + 8));
        eax = *(eax);
    }
    eax = *((ebp + 8));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x2c));
    eax <<= 4;
    edi = edx + eax;
    eax = *((ebp + 8));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x2c));
    eax <<= 4;
    eax = edx + eax;
    esi = *(eax);
    *(fp_stack--) = *((eax + 4));
    *((ebp - 0x38)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x28));
    *(esp) = eax;
    eax = quantum_cexp ();
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    ecx = ebx;
    ebx = *((ebp - 0x38));
    edx = eax;
    eax = ecx;
    eax = _mulsc3 (eax, ebx, edx);
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    *(edi) = eax;
    *((edi + 4)) = edx;
    *((ebp - 0x2c))++;
label_5:
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax > *((ebp - 0x2c))) {
        goto label_1;
    }
    eax = *((ebp - 0x24));
    free (eax);
    eax = *((ebp + 8));
    eax = *(eax);
    eax <<= 2;
    eax = -eax;
    *(esp) = eax;
    quantum_memman ();
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048b42 */
#include <stdint.h>
 
int32_t dbg_quantum_frac_approx (void) {
    int32_t var_38h;
    int32_t var_36h;
    int32_t den;
    int32_t num;
    int32_t den1;
    int32_t num1;
    int32_t den2;
    int32_t num2;
    int32_t i;
    float g;
    float f;
    int * a;
    int * b;
    int32_t width;
    int32_t var_4h_3;
    int32_t var_4h_2;
    int32_t var_4h;
    /* void quantum_frac_approx(int * a,int * b,int width); */
    eax = *((ebp + 8));
    eax = *(eax);
    *(fp_stack--) = *(esp);
    esp = esp + 4;
    eax = *((ebp + 0xc));
    eax = *(eax);
    *(fp_stack--) = *(esp);
    esp = esp + 4;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 4));
    *((ebp - 8)) = eax;
    *((ebp - 0x10)) = 0;
    *((ebp - 0x14)) = 1;
    *((ebp - 0x18)) = 1;
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x20)) = 0;
    *((ebp - 0x24)) = 0;
    eax = *((ebp - 0x36));
    ah = 0xc;
    *((ebp - 0x38)) = ax;
    do {
        *(fp_stack--) = *((ebp - 8));
        *(fp_stack--) = *(0x8054278);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0xc)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 8));
        *(fp_stack--) = *((ebp - 0xc));
        *(fp_stack--) = *(0x8054278);
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *((ebp - 8)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 1.0;
        fp_stack[0] /= *((ebp - 8));
        *((ebp - 8)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0xc));
        eax *= *((ebp - 0x1c));
        edx = eax;
        edx += *((ebp - 0x14));
        ecx = *((ebp + 0x10));
        eax = 1;
        eax <<= cl;
        if (edx > eax) {
            goto label_0;
        }
        eax = *((ebp - 0xc));
        eax *= *((ebp - 0x18));
        eax += *((ebp - 0x10));
        *((ebp - 0x20)) = eax;
        eax = *((ebp - 0xc));
        eax *= *((ebp - 0x1c));
        eax += *((ebp - 0x14));
        *((ebp - 0x24)) = eax;
        eax = *((ebp - 0x18));
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0x1c));
        *((ebp - 0x14)) = eax;
        eax = *((ebp - 0x20));
        *((ebp - 0x18)) = eax;
        eax = *((ebp - 0x24));
        *((ebp - 0x1c)) = eax;
        *(fp_stack--) = *((ebp - 0x20));
        *(fp_stack--) = *((ebp - 0x24));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 4));
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        fp_stack[0] = abs(fp_stack[0]);
        ecx = *((ebp + 0x10));
        eax = 2;
        eax <<= cl;
        *(fp_stack--) = *(esp);
        esp = esp + 4;
        *(fp_stack--) = 1.0;
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
    } while (eax > 0);
label_0:
    edx = *((ebp + 8));
    eax = *((ebp - 0x20));
    *(edx) = eax;
    edx = *((ebp + 0xc));
    eax = *((ebp - 0x24));
    *(edx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804faa8 */
#include <stdint.h>
 
int32_t dbg_quantum_cnot_ft (void) {
    float lambda;
    int32_t tmp;
    int32_t control;
    int32_t target;
    quantum_reg * reg;
    int32_t var_sp_4h;
    int32_t var_8h;
    /* void quantum_cnot_ft(int control,int target,quantum_reg * reg); */
    eax = type;
    *((ebp - 4)) = eax;
    *(obj.type) = 0;
    quantum_get_decoherence ();
    *((ebp - 8)) = fp_stack[0];
    fp_stack--;
    eax = 0;
    *(esp) = eax;
    quantum_set_decoherence ();
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    quantum_cnot ();
    eax = width;
    edx = width;
    edx += *((ebp + 0xc));
    eax = width;
    ecx = width;
    ecx += *((ebp + 8));
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    *((esp + 4)) = edx;
    *(esp) = ecx;
    quantum_cnot ();
    eax = *((ebp - 8));
    *(esp) = eax;
    quantum_set_decoherence ();
    eax = width;
    eax += eax;
    ecx = eax;
    ecx += *((ebp + 0xc));
    eax = width;
    eax += eax;
    edx = eax;
    edx += *((ebp + 8));
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    *((esp + 4)) = ecx;
    *(esp) = edx;
    quantum_cnot ();
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0;
    *(esp) = 1;
    quantum_qec_counter ();
    eax = *((ebp - 4));
    *(obj.type) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048dfe */
#include <stdint.h>
 
uint32_t dbg_quantum_cexp (void) {
    int32_t var_34h;
    int32_t var_18h;
    int32_t var_4h;
    float phi;
    /* complex float quantum_cexp(float phi); */
    *(fp_stack--) = *((ebp + 8));
    *(esp) = fp_stack[0];
    fp_stack--;
    cos (ebx);
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((ebp - 0x30)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp + 8));
    *(esp) = fp_stack[0];
    fp_stack--;
    sin ();
    *(fp_stack--) = 0.0;
    eax = ebp - 0x18;
    *(fp_stack--) = 1.0;
    *((esp + 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = 0.0;
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    muldc3 (eax);
    *(fp_stack--) = *((ebp - 0x18));
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 0x28));
    *(fp_stack--) = *((ebp - 0x30));
    fp_tmp_0 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_tmp_1 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_1;
    fp_stack[0] += fp_stack[2];
    fp_stack++;
    *((ebp - 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x1c));
    fp_tmp_2 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_2;
    *((ebp - 0x1c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x1c));
    fp_tmp_3 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_3;
    *((ebp - 0x34)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x34));
    *((ebp - 0x34)) = fp_stack[0];
    fp_stack--;
    edx = *((ebp - 0x34));
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80531e0 */
#include <stdint.h>
 
uint32_t muldc3 (int32_t arg_8h) {
    edx = *((ebp + 8));
    *(fp_stack--) = *((ebp + 0xc));
    *(fp_stack--) = *((ebp + 0x14));
    *(fp_stack--) = *((ebp + 0x1c));
    *(fp_stack--) = *((ebp + 0x24));
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[2];
    ax = _i686_get_pc_thunk_bx (ebx);
    ebx += 0x2df5;
    *((ebp - 0x10)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] *= fp_stack[1];
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[3];
    fp_stack[0] *= fp_stack[1];
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] *= fp_stack[2];
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *((ebp - 0x18));
    *((ebp - 0x78)) = fp_stack[0];
    fp_stack[1] -= fp_stack[0];
    *(fp_stack--) = *((ebp - 0x20));
    *((ebp - 0x70)) = fp_stack[0];
    *(fp_stack--) = *((ebp - 0x28));
    *((ebp - 0x68)) = fp_stack[0];
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (ebx == 0) {
        goto label_19;
    }
    if (ebx != 0) {
        goto label_20;
    }
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack++;
    fp_stack++;
    fp_stack++;
    while (ebx == 0) {
        fp_stack[6] = fp_stack[0];
        fp_stack--;
        fp_stack[4] = fp_stack[0];
        fp_stack--;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        goto label_0;
label_2:
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        goto label_0;
label_3:
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        goto label_0;
label_4:
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_stack++;
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
label_0:
        *(edx) = fp_stack[0];
        fp_stack--;
        eax = edx;
        *((edx + 8)) = fp_stack[0];
        fp_stack--;
        return eax;
label_19:
        fp_tmp_4 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        goto label_21;
label_20:
        fp_tmp_5 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
label_21:
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if (ebx == 0) {
            goto label_22;
        }
    }
label_22:
    *(fp_stack--) = fp_stack[6];
    fp_stack[0] -= fp_stack[7];
    *((ebp - 0x60)) = fp_stack[0];
    fp_tmp_6 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_6;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (ebx != 0) {
        goto label_23;
    }
    if (ebx == 0) {
        goto label_24;
    }
    fp_tmp_7 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_7;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (ebx == 0) {
        goto label_25;
    }
    fp_tmp_8 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_8;
    goto label_26;
label_8:
    fp_tmp_9 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_9;
label_26:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 1.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 1.0;
        fp_stack[0] = -fp_stack[0];
    }
    *(fp_stack--) = fp_stack[5];
    fp_stack[0] -= fp_stack[6];
    *((ebp - 0x30)) = fp_stack[0];
    fp_tmp_10 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_10;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) == 0) {
        if ((ah & 2) != 0) {
            fp_tmp_11 = fp_stack[6];
            fp_stack[6] = fp_stack[0];
            fp_stack[0] = fp_tmp_11;
            fp_status = fp_compare(fp_stack[0], fp_stack[0]);
            fp_stack++;
            ax = fp_status;
            __asm ("sahf");
            if ((ah & 2) != 0) {
                goto label_27;
            }
            if ((ah & 2) == 0) {
                goto label_27;
            }
            fp_tmp_12 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_12;
            fp_tmp_13 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_13;
            fp_tmp_14 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_14;
            fp_tmp_15 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_15;
            fp_tmp_16 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_16;
            fp_stack[6] = fp_stack[0];
            fp_stack--;
            fp_tmp_17 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_17;
            fp_tmp_18 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_18;
            fp_tmp_19 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_19;
            fp_tmp_20 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_20;
            fp_tmp_21 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_21;
        } else {
        } else {
            fp_stack[6] = fp_stack[0];
            fp_stack--;
            fp_tmp_22 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_22;
            fp_tmp_23 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_23;
            fp_tmp_24 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_24;
            fp_tmp_25 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_25;
            fp_tmp_26 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_26;
        }
    }
    *(fp_stack--) = 0.0;
    *((ebp - 0x50)) = fp_stack[0];
    fp_stack--;
label_9:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = *((ebp - 0x50));
    fp_stack[0] = abs(fp_stack[0]);
    if ((ah & 2) != 0) {
        fp_stack[0] = -fp_stack[0];
        fp_tmp_27 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_27;
    } else {
        fp_tmp_28 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_28;
    }
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) == 0) {
        goto label_28;
    }
    if ((ah & 2) != 0) {
        goto label_28;
    }
    fp_tmp_29 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_29;
    goto label_12;
label_11:
    fp_tmp_30 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_30;
label_12:
    __asm ("fucom st(0)");
    ax = fp_status;
    ecx = 1;
    __asm ("sahf");
    if ((ah & 2) == 0) {
        goto label_29;
    }
    if ((ah & 2) != 0) {
        goto label_29;
    }
    fp_tmp_31 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_31;
    fp_tmp_32 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_32;
    fp_tmp_33 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_33;
    fp_tmp_34 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_34;
    fp_tmp_35 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_35;
    fp_tmp_36 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_36;
label_10:
    *(fp_stack--) = fp_stack[6];
    fp_stack[0] -= fp_stack[7];
    *((ebp - 0x48)) = fp_stack[0];
    fp_tmp_37 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_37;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        goto label_30;
    }
    if ((ah & 2) == 0) {
        goto label_31;
    }
    fp_tmp_38 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_38;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        if ((ah & 2) == 0) {
            goto label_32;
        }
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack++;
    } else {
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack++;
    }
    *(fp_stack--) = fp_stack[2];
    fp_stack[0] -= fp_stack[3];
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        if ((ah & 2) == 0) {
            goto label_33;
        }
        fp_tmp_39 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_39;
    } else {
        fp_tmp_40 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_40;
    }
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        goto label_34;
    }
    if ((ah & 2) == 0) {
        goto label_35;
    }
    *(fp_stack--) = 1.0;
    *(fp_stack--) = fp_stack[0];
    fp_tmp_41 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_41;
    do {
label_18:
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if ((ah & 2) == 0) {
            goto label_36;
        }
        if ((ah & 2) != 0) {
            goto label_36;
        }
        fp_tmp_42 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_42;
label_17:
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if ((ah & 2) == 0) {
            goto label_37;
        }
        if ((ah & 2) != 0) {
            goto label_37;
        }
        fp_tmp_43 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_43;
label_16:
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        fp_stack[0] = abs(fp_stack[0]);
        if ((ah & 2) != 0) {
            fp_stack[0] = -fp_stack[0];
        }
        fp_tmp_44 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_44;
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        fp_tmp_45 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_45;
        fp_stack[0] = abs(fp_stack[0]);
        if ((ah & 2) != 0) {
            goto label_38;
        }
        goto label_7;
label_6:
        fp_tmp_46 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_46;
        fp_tmp_47 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_47;
        fp_tmp_48 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_48;
        fp_tmp_49 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_49;
label_7:
        fp_tmp_50 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_50;
        fp_tmp_51 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_51;
        fp_tmp_52 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_52;
        goto label_39;
label_1:
        fp_stack[6] = fp_stack[0];
        fp_stack--;
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_stack[3] = fp_stack[0];
        fp_stack--;
        fp_tmp_53 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_53;
        goto label_39;
label_5:
        fp_tmp_54 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_54;
        fp_tmp_55 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_55;
        fp_tmp_56 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_56;
label_39:
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        *(fp_stack--) = fp_stack[3];
        fp_stack[0] *= fp_stack[2];
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebx - 0x1a18));
        fp_stack[1] *= fp_stack[0];
        fp_tmp_57 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_57;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_tmp_58 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_58;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_stack[0] *= fp_stack[2];
        fp_stack++;
        goto label_0;
label_30:
        fp_stack[7] = fp_stack[0];
        fp_stack--;
        fp_tmp_59 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_59;
        fp_tmp_60 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_60;
        fp_tmp_61 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_61;
        fp_tmp_62 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_62;
        fp_tmp_63 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_63;
        fp_tmp_64 = fp_stack[6];
        fp_stack[6] = fp_stack[0];
        fp_stack[0] = fp_tmp_64;
        goto label_40;
label_31:
        fp_stack[7] = fp_stack[0];
        fp_stack--;
        fp_tmp_65 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_65;
        fp_tmp_66 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_66;
        fp_tmp_67 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_67;
        fp_tmp_68 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_68;
        fp_tmp_69 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_69;
        fp_tmp_70 = fp_stack[6];
        fp_stack[6] = fp_stack[0];
        fp_stack[0] = fp_tmp_70;
        goto label_40;
label_32:
        fp_tmp_71 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_71;
        fp_tmp_72 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_72;
        fp_tmp_73 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_73;
        fp_tmp_74 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_74;
        fp_tmp_75 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_75;
        fp_tmp_76 = fp_stack[6];
        fp_stack[6] = fp_stack[0];
        fp_stack[0] = fp_tmp_76;
label_40:
        *(fp_stack--) = fp_stack[6];
        fp_stack[0] -= fp_stack[7];
        *((ebp - 0x40)) = fp_stack[0];
        fp_tmp_77 = fp_stack[7];
        fp_stack[7] = fp_stack[0];
        fp_stack[0] = fp_tmp_77;
        __asm ("fucom st(0)");
        ax = fp_status;
        __asm ("sahf");
        if ((ah & 2) != 0) {
            goto label_41;
        }
        if ((ah & 2) == 0) {
            goto label_42;
        }
        fp_tmp_78 = fp_stack[7];
        fp_stack[7] = fp_stack[0];
        fp_stack[0] = fp_tmp_78;
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        ax = fp_status;
        __asm ("sahf");
        if ((ah & 2) != 0) {
            if ((ah & 2) == 0) {
                goto label_43;
            }
            fp_stack[3] = fp_stack[0];
            fp_stack--;
            fp_stack[3] = fp_stack[0];
            fp_stack--;
            fp_stack[3] = fp_stack[0];
            fp_stack--;
        } else {
            fp_stack[3] = fp_stack[0];
            fp_stack--;
            fp_stack[3] = fp_stack[0];
            fp_stack--;
            fp_stack[3] = fp_stack[0];
            fp_stack--;
        }
        *(fp_stack--) = 1.0;
        *(fp_stack--) = 0.0;
        fp_tmp_79 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_79;
        fp_tmp_80 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_80;
        fp_tmp_81 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_81;
        fp_tmp_82 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_82;
        fp_tmp_83 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_83;
        fp_tmp_84 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_84;
    } while (1);
label_41:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_85 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_85;
    fp_tmp_86 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_86;
    fp_tmp_87 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_87;
    fp_tmp_88 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_88;
    fp_tmp_89 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_89;
    fp_tmp_90 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_90;
    goto label_44;
label_42:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_91 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_91;
    fp_tmp_92 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_92;
    fp_tmp_93 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_93;
    fp_tmp_94 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_94;
    fp_tmp_95 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_95;
    fp_tmp_96 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_96;
    goto label_44;
label_43:
    fp_tmp_97 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_97;
    fp_tmp_98 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_98;
    fp_tmp_99 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_99;
    fp_tmp_100 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_100;
    fp_tmp_101 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_101;
    fp_tmp_102 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_102;
label_44:
    if (cl != 0) {
        goto label_1;
    }
    *(fp_stack--) = fp_stack[6];
    fp_stack[0] -= fp_stack[7];
    *((ebp - 0x38)) = fp_stack[0];
    fp_tmp_103 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_103;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (cl == 0) {
        if (cl != 0) {
            fp_tmp_104 = fp_stack[6];
            fp_stack[6] = fp_stack[0];
            fp_stack[0] = fp_tmp_104;
            fp_status = fp_compare(fp_stack[0], fp_stack[0]);
            fp_stack++;
            ax = fp_status;
            __asm ("sahf");
            if (cl != 0) {
                goto label_45;
            }
            if (cl == 0) {
                goto label_46;
            }
            fp_tmp_105 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_105;
            fp_tmp_106 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_106;
            fp_tmp_107 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_107;
            fp_tmp_108 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_108;
            fp_tmp_109 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_109;
            fp_stack[6] = fp_stack[0];
            fp_stack--;
            fp_tmp_110 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_110;
            fp_tmp_111 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_111;
            fp_tmp_112 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_112;
            fp_tmp_113 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_113;
            fp_tmp_114 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_114;
        } else {
        } else {
            fp_stack[6] = fp_stack[0];
            fp_stack--;
            fp_tmp_115 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_115;
            fp_tmp_116 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_116;
            fp_tmp_117 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_117;
            fp_tmp_118 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_118;
            fp_tmp_119 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_119;
        }
    }
    *(fp_stack--) = *((ebp - 0x78));
    fp_stack[0] -= fp_stack[0];
    *(fp_stack--) = *((ebp - 0x78));
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (cl == 0) {
        if (cl == 0) {
            goto label_47;
        }
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        ax = fp_status;
        __asm ("sahf");
        if (cl != 0) {
            goto label_48;
        }
        if (cl != 0) {
            goto label_49;
        }
        goto label_50;
    }
    fp_stack++;
    goto label_49;
label_47:
    fp_stack++;
label_49:
    *(fp_stack--) = *((ebp - 0x70));
    fp_stack[0] -= fp_stack[0];
    *(fp_stack--) = *((ebp - 0x70));
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (cl == 0) {
        if (cl == 0) {
            goto label_51;
        }
        fp_status = fp_compare(fp_stack[0], fp_stack[0]);
        fp_stack++;
        ax = fp_status;
        __asm ("sahf");
        if (cl != 0) {
            goto label_52;
        }
        if (cl != 0) {
            goto label_53;
        }
        goto label_54;
    }
    fp_stack++;
    goto label_53;
label_51:
    fp_stack++;
label_53:
    *(fp_stack--) = *((ebp - 0x68));
    fp_stack[0] -= fp_stack[0];
    *(fp_stack--) = *((ebp - 0x68));
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (cl != 0) {
        goto label_2;
    }
    if (cl == 0) {
        goto label_3;
    }
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (cl == 0) {
        goto label_55;
    }
    if (cl == 0) {
        goto label_4;
    }
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_120 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_120;
    goto label_56;
label_45:
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    goto label_56;
label_46:
    fp_stack[4] = fp_stack[0];
    fp_stack--;
    fp_stack[2] = fp_stack[0];
    fp_stack--;
    goto label_56;
label_48:
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_121 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_121;
    goto label_56;
label_50:
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_122 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_122;
    goto label_56;
label_52:
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_123 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_123;
    goto label_56;
label_54:
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_124 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_124;
    goto label_56;
label_55:
    fp_stack[5] = fp_stack[0];
    fp_stack--;
    fp_stack[3] = fp_stack[0];
    fp_stack--;
    fp_tmp_125 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_125;
label_56:
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (cl == 0) {
        goto label_57;
    }
    if (cl != 0) {
        goto label_57;
    }
    fp_tmp_126 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_126;
label_15:
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (cl == 0) {
        goto label_58;
    }
    if (cl != 0) {
        goto label_58;
    }
    fp_tmp_127 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_127;
label_14:
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (cl == 0) {
        goto label_59;
    }
    if (cl != 0) {
        goto label_59;
    }
    fp_tmp_128 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_128;
label_13:
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if (cl == 0) {
        goto label_60;
    }
    if (cl == 0) {
        goto label_5;
    }
label_60:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) == 0) {
        goto label_6;
    }
    fp_stack++;
    *(fp_stack--) = 0.0;
    fp_tmp_129 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_129;
    fp_tmp_130 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_130;
    fp_tmp_131 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_131;
    fp_tmp_132 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_132;
label_38:
    fp_stack[0] = -fp_stack[0];
    goto label_7;
    if ((ah & 2) == 0) {
label_25:
        goto label_8;
    }
    fp_tmp_133 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_133;
    fp_tmp_134 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_134;
    fp_tmp_135 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_135;
    fp_tmp_136 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_136;
    fp_tmp_137 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_137;
    fp_tmp_138 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_138;
    goto label_61;
label_23:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_139 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_139;
    fp_tmp_140 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_140;
    fp_tmp_141 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_141;
    fp_tmp_142 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_142;
    fp_tmp_143 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_143;
    fp_tmp_144 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_144;
    goto label_61;
label_24:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_145 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_145;
    fp_tmp_146 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_146;
    fp_tmp_147 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_147;
    fp_tmp_148 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_148;
    fp_tmp_149 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_149;
    fp_tmp_150 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_150;
label_61:
    *(fp_stack--) = fp_stack[6];
    fp_stack[0] -= fp_stack[7];
    *((ebp - 0x58)) = fp_stack[0];
    fp_tmp_151 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_151;
    __asm ("fucom st(0)");
    ax = fp_status;
    __asm ("sahf");
    if ((ah & 2) != 0) {
        goto label_62;
    }
    if ((ah & 2) == 0) {
        goto label_63;
    }
    fp_tmp_152 = fp_stack[7];
    fp_stack[7] = fp_stack[0];
    fp_stack[0] = fp_tmp_152;
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    while ((ah & 2) == 0) {
        __asm ("fxam");
        ax = fp_status;
        fp_stack++;
        *(fp_stack--) = 0.0;
        if ((ah & 2) != 0) {
            fp_stack++;
            *(fp_stack--) = 0.0;
            fp_stack[0] = -fp_stack[0];
            fp_tmp_153 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_153;
            fp_tmp_154 = fp_stack[6];
            fp_stack[6] = fp_stack[0];
            fp_stack[0] = fp_tmp_154;
            fp_tmp_155 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_155;
            fp_tmp_156 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_156;
            fp_tmp_157 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_157;
            fp_tmp_158 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_158;
            fp_tmp_159 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_159;
        } else {
            fp_tmp_160 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_160;
            fp_tmp_161 = fp_stack[6];
            fp_stack[6] = fp_stack[0];
            fp_stack[0] = fp_tmp_161;
            fp_tmp_162 = fp_stack[5];
            fp_stack[5] = fp_stack[0];
            fp_stack[0] = fp_tmp_162;
            fp_tmp_163 = fp_stack[4];
            fp_stack[4] = fp_stack[0];
            fp_stack[0] = fp_tmp_163;
            fp_tmp_164 = fp_stack[3];
            fp_stack[3] = fp_stack[0];
            fp_stack[0] = fp_tmp_164;
            fp_tmp_165 = fp_stack[2];
            fp_stack[2] = fp_stack[0];
            fp_stack[0] = fp_tmp_165;
            fp_tmp_166 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_166;
        }
label_27:
        *(fp_stack--) = 1.0;
        *((ebp - 0x50)) = fp_stack[0];
        fp_stack--;
        fp_tmp_167 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_167;
        fp_tmp_168 = fp_stack[2];
        fp_stack[2] = fp_stack[0];
        fp_stack[0] = fp_tmp_168;
        fp_tmp_169 = fp_stack[3];
        fp_stack[3] = fp_stack[0];
        fp_stack[0] = fp_tmp_169;
        fp_tmp_170 = fp_stack[4];
        fp_stack[4] = fp_stack[0];
        fp_stack[0] = fp_tmp_170;
        fp_tmp_171 = fp_stack[5];
        fp_stack[5] = fp_stack[0];
        fp_stack[0] = fp_tmp_171;
        goto label_9;
    }
    fp_tmp_172 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_172;
    fp_tmp_173 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_173;
    fp_tmp_174 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_174;
    fp_tmp_175 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_175;
    fp_tmp_176 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_176;
    fp_tmp_177 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_177;
    goto label_64;
label_62:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_178 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_178;
    fp_tmp_179 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_179;
    fp_tmp_180 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_180;
    fp_tmp_181 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_181;
    fp_tmp_182 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_182;
    fp_tmp_183 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_183;
    goto label_64;
label_63:
    fp_stack[7] = fp_stack[0];
    fp_stack--;
    fp_tmp_184 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_184;
    fp_tmp_185 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_185;
    fp_tmp_186 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_186;
    fp_tmp_187 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_187;
    fp_tmp_188 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_188;
    fp_tmp_189 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_189;
label_64:
    ecx = 0;
    goto label_10;
label_28:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) == 0) {
        goto label_11;
    }
    fp_stack++;
    *(fp_stack--) = 0.0;
    fp_stack[0] = -fp_stack[0];
    fp_tmp_190 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_190;
    goto label_12;
label_59:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_191 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_191;
    goto label_13;
label_58:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_192 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_192;
    goto label_14;
label_57:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_193 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_193;
    goto label_15;
label_37:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_194 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_194;
    goto label_16;
label_36:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_195 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_195;
    goto label_17;
label_29:
    __asm ("fxam");
    ax = fp_status;
    fp_stack++;
    *(fp_stack--) = 0.0;
    if ((ah & 2) != 0) {
        fp_stack++;
        *(fp_stack--) = 0.0;
        fp_stack[0] = -fp_stack[0];
    }
    fp_tmp_196 = fp_stack[5];
    fp_stack[5] = fp_stack[0];
    fp_stack[0] = fp_tmp_196;
    fp_tmp_197 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_197;
    fp_tmp_198 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_198;
    fp_tmp_199 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_199;
    fp_tmp_200 = fp_stack[6];
    fp_stack[6] = fp_stack[0];
    fp_stack[0] = fp_tmp_200;
    fp_tmp_201 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_201;
    ecx = 1;
    goto label_10;
label_34:
    fp_tmp_202 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_202;
    goto label_33;
label_35:
    fp_tmp_203 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_203;
label_33:
    *(fp_stack--) = 0.0;
    *(fp_stack--) = 1.0;
    fp_tmp_204 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_204;
    fp_tmp_205 = fp_stack[3];
    fp_stack[3] = fp_stack[0];
    fp_stack[0] = fp_tmp_205;
    fp_tmp_206 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_206;
    fp_tmp_207 = fp_stack[4];
    fp_stack[4] = fp_stack[0];
    fp_stack[0] = fp_tmp_207;
    fp_tmp_208 = fp_stack[2];
    fp_stack[2] = fp_stack[0];
    fp_stack[0] = fp_tmp_208;
    goto label_18;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049c9e */
#include <stdint.h>
 
int32_t dbg_quantum_purity (void) {
    int32_t var_40h;
    complex float dp;
    int32_t var_2ch;
    complex float g;
    int32_t var_24h;
    float f;
    int32_t l;
    int32_t k;
    int32_t j;
    int32_t i;
    quantum_density_op * rho;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_sp_10h;
    int32_t var_sp_14h;
    int32_t var_sp_18h;
    /* float quantum_purity(quantum_density_op * rho); */
    eax = 0;
    *((ebp - 0x20)) = eax;
    *((ebp - 0x10)) = 0;
    while (eax > *((ebp - 0x10))) {
        eax = *((ebp + 8));
        edx = *((eax + 4));
        eax = *((ebp - 0x10));
        eax <<= 2;
        eax = edx + eax;
        *(fp_stack--) = *(eax);
        eax = *((ebp + 8));
        edx = *((eax + 4));
        eax = *((ebp - 0x10));
        eax <<= 2;
        eax = edx + eax;
        *(fp_stack--) = *(eax);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 0x20));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0x20)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x10))++;
        eax = *((ebp + 8));
        eax = *(eax);
    }
    *((ebp - 0x10)) = 0;
    goto label_2;
label_1:
    *((ebp - 0x14)) = 0;
    goto label_3;
label_0:
    eax = *((ebp + 8));
    ecx = *((eax + 8));
    edx = *((ebp - 0x14));
    eax = *((ebp - 0x14));
    eax <<= 2;
    eax += edx;
    eax <<= 2;
    ecx += eax;
    eax = *((ebp + 8));
    ebx = *((eax + 8));
    edx = *((ebp - 0x10));
    eax = *((ebp - 0x10));
    eax <<= 2;
    eax += edx;
    eax <<= 2;
    eax = ebx + eax;
    *((esp + 4)) = ecx;
    *(esp) = eax;
    eax = quantum_dot_product ();
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    *((ebp - 0x30)) = eax;
    *((ebp - 0x2c)) = edx;
    *((ebp - 0x18)) = 0;
    while (eax > *((ebp - 0x18))) {
        eax = *((ebp + 8));
        ecx = *((eax + 8));
        edx = *((ebp - 0x14));
        eax = *((ebp - 0x14));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        ecx += eax;
        eax = *((ebp + 8));
        ebx = *((eax + 8));
        edx = *((ebp - 0x10));
        eax = *((ebp - 0x10));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        eax = ebx + eax;
        edx = *((eax + 0xc));
        eax = *((ebp - 0x18));
        eax <<= 4;
        eax = edx + eax;
        ebx = *((eax + 8));
        esi = *((eax + 0xc));
        eax = *(ecx);
        eax = *((ecx + 4));
        eax = *((ecx + 8));
        eax = *((ecx + 0xc));
        eax = *((ecx + 0x10));
        eax = quantum_get_state (eax, esi, eax);
        *((ebp - 0x1c)) = eax;
        if (*((ebp - 0x1c)) >= 0) {
            eax = *((ebp + 8));
            edx = *((eax + 4));
            eax = *((ebp - 0x10));
            eax <<= 2;
            eax = edx + eax;
            *(fp_stack--) = *(eax);
            eax = *((ebp + 8));
            edx = *((eax + 4));
            eax = *((ebp - 0x14));
            eax <<= 2;
            eax = edx + eax;
            *(fp_stack--) = *(eax);
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            *((ebp - 0x40)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x40));
            edx = 0;
            ebx = eax;
            ecx = edx;
            edx = *((ebp - 0x30));
            eax = *((ebp - 0x2c));
            eax = _mulsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            ebx = eax;
            esi = edx;
            eax = *((ebp + 8));
            ecx = *((eax + 8));
            edx = *((ebp - 0x10));
            eax = *((ebp - 0x10));
            eax <<= 2;
            eax += edx;
            eax <<= 2;
            eax = ecx + eax;
            edx = *((eax + 0xc));
            eax = *((ebp - 0x18));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            ecx = esi;
            eax = _mulsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            esi = eax;
            edi = edx;
            eax = *((ebp + 8));
            ecx = *((eax + 8));
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x14));
            eax <<= 2;
            eax += edx;
            eax <<= 2;
            eax = ecx + eax;
            edx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            eax <<= 4;
            edx += eax;
            eax = *(edx);
            *(esp) = eax;
            eax = *((edx + 4));
            eax = quantum_conj (eax);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            ecx = ebx;
            ebx = edi;
            edx = eax;
            eax = ecx;
            eax = _mulsc3 (eax, ebx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *((ebp - 0x28)) = eax;
            *((ebp - 0x24)) = edx;
        } else {
            eax = 0;
            *((ebp - 0x28)) = eax;
            eax = 0;
            *((ebp - 0x24)) = eax;
        }
        eax = *((ebp - 0x28));
        eax = *((ebp - 0x24));
        quantum_real (eax, eax);
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 0x20));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0x20)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x18))++;
        eax = *((ebp + 8));
        ecx = *((eax + 8));
        edx = *((ebp - 0x10));
        eax = *((ebp - 0x10));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        eax = ecx + eax;
        eax = *((eax + 4));
    }
    *((ebp - 0x14))++;
label_3:
    eax = *((ebp - 0x14));
    if (eax < *((ebp - 0x10))) {
        goto label_0;
    }
    *((ebp - 0x10))++;
label_2:
    eax = *((ebp + 8));
    eax = *(eax);
    if (eax > *((ebp - 0x10))) {
        goto label_1;
    }
    eax = *((ebp - 0x20));
    *((ebp - 0x40)) = eax;
    *(fp_stack--) = *((ebp - 0x40));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804c7b9 */
#include <stdint.h>
 
int32_t dbg_quantum_cond_phase (void) {
    complex float z;
    int32_t var_10h;
    int32_t i;
    int32_t control;
    int32_t target;
    quantum_reg * reg;
    int32_t var_4h_2;
    int32_t var_8h_2;
    int32_t var_4h;
    int32_t var_8h;
    /* void quantum_cond_phase(int control,int target,quantum_reg * reg); */
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (0xc, eax);
    if (eax != 0) {
        goto label_0;
    }
    edx = *((ebp + 0xc));
    eax = *((ebp + 8));
    ecx = *((ebp + 8));
    ecx -= edx;
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    *(fp_stack--) = *(esp);
    esp = esp + 8;
    ? = fp_stack[0];
    fp_stack--;
    if (edx < 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = fp_stack[?];
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x20));
    *(fp_stack--) = *(0x8054358);
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((ebp - 0x24)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x24));
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = quantum_cexp ();
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    *((ebp - 0x14)) = eax;
    *((ebp - 0x10)) = edx;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 0xc));
            eax = *((eax + 8));
            ecx = *((ebp + 0xc));
            __asm ("shrd eax, edx, cl");
            edx >>= cl;
            if ((cl & 0x20) != 0) {
                eax = edx;
                edx = 0;
            }
            eax &= 1;
            if (al == 0) {
                goto label_1;
            }
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            esi = edx + eax;
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            ebx = edx;
            ecx = eax;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x10));
            eax = _mulsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *(esi) = eax;
            *((esi + 4)) = edx;
        }
label_1:
        *((ebp - 0xc))++;
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_decohere ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80520a8 */
#include <stdint.h>
 
int32_t dbg_quantum_vectoradd_inplace (void) {
    int32_t var_1ch;
    int32_t addsize;
    int32_t k;
    int32_t j;
    int32_t i;
    quantum_reg * reg1;
    quantum_reg * reg2;
    size_t size;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_sp_18h;
    /* void quantum_vectoradd_inplace(quantum_reg * reg1,quantum_reg * reg2); */
    *((ebp - 0x18)) = 0;
    eax = *((ebp + 8));
    eax = *((eax + 8));
    if (eax == 0) {
        eax = *((ebp + 0xc));
        eax = *((eax + 8));
        if (eax == 0) {
            goto label_0;
        }
    }
    eax = *((ebp + 8));
    *(esp) = eax;
    quantum_reconstruct_hash ();
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        edx = *((ebp + 8));
        eax = *(edx);
        *((esp + 8)) = eax;
        eax = *((edx + 4));
        *((esp + 0xc)) = eax;
        eax = *((edx + 8));
        eax = *((edx + 0xc));
        eax = *((edx + 0x10));
        eax = quantum_get_state (eax, ebx);
        if (eax == -1) {
            *((ebp - 0x18))++;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
    }
label_0:
    eax = *((ebp + 8));
    eax = *((eax + 4));
    eax += *((ebp - 0x18));
    edx = eax;
    edx <<= 4;
    eax = *((ebp + 8));
    eax = *((eax + 0xc));
    eax = realloc (eax, edx);
    edx = eax;
    eax = *((ebp + 8));
    *((eax + 0xc)) = edx;
    eax = *((ebp + 8));
    eax = *((eax + 0xc));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp - 0x18));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 8));
    eax = *((eax + 4));
    *((ebp - 0x14)) = eax;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        edx = *((ebp + 8));
        eax = *(edx);
        *((esp + 8)) = eax;
        eax = *((edx + 4));
        *((esp + 0xc)) = eax;
        eax = *((edx + 8));
        eax = *((edx + 0xc));
        eax = *((edx + 0x10));
        eax = quantum_get_state (eax, ebx);
        *((ebp - 0x10)) = eax;
        if (*((ebp - 0x10)) >= 0) {
            eax = *((ebp + 8));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x10));
            eax <<= 4;
            esi = edx + eax;
            eax = *((ebp + 8));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x10));
            eax <<= 4;
            eax = edx + eax;
            ecx = *(eax);
            ebx = *((eax + 4));
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *((ebp - 0x1c)) = ecx;
            *(fp_stack--) = *((ebp - 0x1c));
            *((ebp - 0x1c)) = ebx;
            *(fp_stack--) = *((ebp - 0x1c));
            *((ebp - 0x1c)) = edx;
            *(fp_stack--) = *((ebp - 0x1c));
            *((ebp - 0x1c)) = eax;
            *(fp_stack--) = *((ebp - 0x1c));
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] += fp_stack[3];
            fp_stack++;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            *((ebp - 0x1c)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x1c));
            *((ebp - 0x1c)) = fp_stack[0];
            fp_stack--;
            edx = *((ebp - 0x1c));
            *(esi) = eax;
            *((esi + 4)) = edx;
        } else {
            eax = *((ebp + 8));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            ecx = edx + eax;
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 0xc));
            eax = *((eax + 8));
            *((ecx + 8)) = eax;
            *((ecx + 0xc)) = edx;
            eax = *((ebp + 8));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x14));
            eax <<= 4;
            ecx = edx + eax;
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            *(ecx) = edx;
            *((ecx + 4)) = eax;
            *((ebp - 0x14))++;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
    }
    eax = *((ebp + 8));
    eax = *((eax + 4));
    edx = *((eax + 4));
    edx += *((ebp - 0x18));
    eax = *((ebp + 8));
    *((eax + 4)) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8054180 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1e69;
    _init ();
    edi = ebx - 0xf4;
    eax = ebx - 0xf4;
    edi -= eax;
    edi >>= 2;
    if (edi == 0) {
        goto label_0;
    }
    esi = 0;
    do {
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        uint32_t (*ebx + esi*4 - 0xf4)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        esi++;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e61d */
#include <stdint.h>
 
int32_t dbg_quantum_char2double (void) {
    double * d;
    unsigned char * buf;
    /* double quantum_char2double(unsigned char * buf); */
    eax = *((ebp + 8));
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    *(fp_stack--) = *(eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049315 */
#include <stdint.h>
 
int32_t dbg_quantum_qureg2density_op (int32_t arg_8h) {
    float f;
    int32_t var_bp_4h;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_sp_8h;
    int32_t var_ch;
    /* quantum_density_op quantum_qureg2density_op(quantum_reg * reg); */
    ebx = *((ebp + 8));
    eax = 0x3f800000;
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 0xc)) = eax;
    eax = ebp - 8;
    *((esp + 8)) = eax;
    *((esp + 4)) = 1;
    quantum_new_density_op (ebx);
    eax = ebx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804911c */
#include <stdint.h>
 
int32_t dbg_quantum_new_density_op (void * arg_8h) {
    quantum_density_op rho;
    void * var_14h;
    void * var_10h;
    int32_t hashw;
    int * phash;
    int32_t i;
    int32_t num;
    float * prob;
    quantum_reg * reg;
    size_t size;
    /* quantum_density_op quantum_new_density_op(int num,float * prob,quantum_reg * reg); */
    eax = *((ebp + 0xc));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    eax = calloc (eax, 4);
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x14));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp + 0xc));
    eax = calloc (eax, 0x14);
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    edx = *((ebp + 0xc));
    eax = *((ebp + 0xc));
    eax += eax;
    eax += edx;
    eax <<= 3;
    *(esp) = eax;
    quantum_memman ();
    edx = *((ebp - 0x14));
    eax = *((ebp + 0x10));
    eax = *(eax);
    *(edx) = eax;
    eax = *((ebp + 0x14));
    eax = *((eax + 0x10));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0x14));
    eax = *((eax + 8));
    *((ebp - 0xc)) = eax;
    ecx = *((ebp - 0x10));
    edx = *((ebp + 0x14));
    eax = *(edx);
    *(ecx) = eax;
    eax = *((edx + 4));
    *((ecx + 4)) = eax;
    eax = *((edx + 8));
    *((ecx + 8)) = eax;
    eax = *((edx + 0xc));
    *((ecx + 0xc)) = eax;
    eax = *((edx + 0x10));
    *((ecx + 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((eax + 4)) = 0;
    eax = *((ebp + 0x14));
    *(eax) = 0;
    eax = *((ebp + 0x14));
    *((eax + 0xc)) = 0;
    eax = *((ebp + 0x14));
    *((eax + 0x10)) = 0;
    *((ebp - 4)) = 1;
    while (eax < *((ebp + 0xc))) {
        edx = *((ebp - 0x14));
        eax = *((ebp - 4));
        eax <<= 2;
        edx += eax;
        eax = *((ebp - 4));
        eax <<= 2;
        eax += *((ebp + 0x10));
        eax = *(eax);
        *(edx) = eax;
        ecx = *((ebp - 0x10));
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        ecx += eax;
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        edx = eax;
        edx += *((ebp + 0x14));
        eax = *(edx);
        *(ecx) = eax;
        eax = *((edx + 4));
        *((ecx + 4)) = eax;
        eax = *((edx + 8));
        *((ecx + 8)) = eax;
        eax = *((edx + 0xc));
        *((ecx + 0xc)) = eax;
        eax = *((edx + 0x10));
        *((ecx + 0x10)) = eax;
        ecx = *((ebp - 0x10));
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        edx = ecx + eax;
        eax = *((ebp - 8));
        *((edx + 0x10)) = eax;
        ecx = *((ebp - 0x10));
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        edx = ecx + eax;
        eax = *((ebp - 0xc));
        *((edx + 8)) = eax;
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        eax += *((ebp + 0x14));
        *((eax + 4)) = 0;
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        eax += *((ebp + 0x14));
        *(eax) = 0;
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        eax += *((ebp + 0x14));
        *((eax + 0xc)) = 0;
        edx = *((ebp - 4));
        eax = *((ebp - 4));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        eax += *((ebp + 0x14));
        *((eax + 0x10)) = 0;
        *((ebp - 4))++;
        eax = *((ebp - 4));
    }
    eax = *((ebp - 0x18));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0x14));
    edx = *((ebp + 8));
    *((edx + 4)) = eax;
    eax = *((ebp - 0x10));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804de50 */
#include <stdint.h>
 
int32_t dbg_muxha (void) {
    int32_t a;
    int32_t b_in;
    int32_t c_in;
    int32_t xlt_l;
    int32_t L;
    int32_t total;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void muxha(int a,int b_in,int c_in,int xlt_l,int L,int total,quantum_reg * reg); */
    if (*((ebp + 8)) == 0) {
        eax = *((ebp + 0x20));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
    }
    if (*((ebp + 8)) == 3) {
        eax = *((ebp + 0x20));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x18));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x20));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
    }
    if (*((ebp + 8)) == 1) {
        eax = *((ebp + 0x20));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x18));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x20));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
    }
    if (*((ebp + 8)) == 2) {
        eax = *((ebp + 0x20));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x14));
        *(esp) = eax;
        quantum_sigma_x ();
        eax = *((ebp + 0x20));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x18));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x20));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x20));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x14));
        *(esp) = eax;
        quantum_sigma_x ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8050e60 */
#include <stdint.h>
 
int32_t dbg_quantum_new_qureg_size (void * arg_8h) {
    quantum_reg reg;
    int32_t var_10h;
    int32_t var_ch;
    void * var_8h;
    int32_t var_4h;
    int32_t n;
    int32_t width;
    size_t size;
    /* quantum_reg quantum_new_qureg_size(int n,int width); */
    eax = *((ebp + 0x10));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x10)) = eax;
    *((ebp - 0xc)) = 0;
    *((ebp - 4)) = 0;
    eax = *((ebp + 0xc));
    eax = calloc (eax, 0x10);
    *((ebp - 8)) = eax;
    eax = *((ebp - 8));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp + 0xc));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp - 0x14));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0x10));
    edx = *((ebp + 8));
    *((edx + 4)) = eax;
    eax = *((ebp - 0xc));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp - 8));
    edx = *((ebp + 8));
    *((edx + 0xc)) = eax;
    eax = *((ebp - 4));
    edx = *((ebp + 8));
    *((edx + 0x10)) = eax;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e630 */
#include <stdint.h>
 
uint32_t dbg_quantum_objcode_start (void) {
    /* void quantum_objcode_start(); */
    *(obj.opstatus) = 1;
    *(obj.allocated) = 1;
    eax = malloc (0x10000);
    *(obj.objcode) = eax;
    eax = objcode;
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    *(esp) = 0x10000;
    quantum_memman ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80489b4 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80531d5 */
#include <stdint.h>
 
void i686_get_pc_thunk_cx (void) {
    ecx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8050f7a */
#include <stdint.h>
 
int32_t dbg_quantum_destroy_hash (void) {
    quantum_reg * reg;
    /* void quantum_destroy_hash(quantum_reg * reg); */
    eax = *((ebp + 8));
    eax = *((eax + 0x10));
    free (eax);
    eax = *((ebp + 8));
    ecx = *((eax + 8));
    eax = 0xfffffffc;
    eax <<= cl;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 8));
    *((eax + 0x10)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804df51 */
#include <stdint.h>
 
int32_t dbg_muxha_inv (void) {
    int32_t a;
    int32_t b_in;
    int32_t c_in;
    int32_t xlt_l;
    int32_t L;
    int32_t total;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void muxha_inv(int a,int b_in,int c_in,int xlt_l,int L,int total,quantum_reg * reg); */
    if (*((ebp + 8)) == 0) {
        eax = *((ebp + 0x20));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
    }
    if (*((ebp + 8)) == 3) {
        eax = *((ebp + 0x20));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x20));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x18));
        *(esp) = eax;
        quantum_cnot ();
    }
    if (*((ebp + 8)) == 1) {
        eax = *((ebp + 0x20));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x20));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x18));
        *(esp) = eax;
        quantum_toffoli ();
    }
    if (*((ebp + 8)) == 2) {
        eax = *((ebp + 0x20));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x14));
        *(esp) = eax;
        quantum_sigma_x ();
        eax = *((ebp + 0x20));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x20));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x18));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x20));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x14));
        *(esp) = eax;
        quantum_sigma_x ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804cdba */
#include <stdint.h>
 
int32_t dbg_quantum_mmult (int32_t arg_8h, int32_t arg_10h, int32_t arg_14h, int32_t arg_1ch, int32_t arg_20h) {
    int32_t var_34h;
    quantum_matrix C;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t k;
    int32_t j;
    int32_t i;
    int32_t var_ch;
    quantum_matrix A;
    quantum_matrix B;
    int32_t var_4h_2;
    int32_t var_4h;
    int32_t var_8h;
    /* quantum_matrix quantum_mmult(quantum_matrix A,quantum_matrix B); */
    edx = *((ebp + 0x10));
    eax = *((ebp + 0x18));
    if (edx != eax) {
        *(esp) = 4;
        quantum_error ();
    }
    eax = *((ebp + 0xc));
    edx = *((ebp + 0x1c));
    ecx = ebp - 0x24;
    *((esp + 8)) = eax;
    *((esp + 4)) = edx;
    quantum_new_matrix (ecx);
    *((ebp - 0x10)) = 0;
    goto label_2;
label_1:
    *((ebp - 0x14)) = 0;
    goto label_3;
label_0:
    *((ebp - 0x18)) = 0;
    while (eax > *((ebp - 0x18))) {
        edx = *((ebp - 0x1c));
        eax = *((ebp - 0x20));
        eax *= *((ebp - 0x14));
        eax += *((ebp - 0x10));
        eax <<= 3;
        esi = edx + eax;
        edx = *((ebp - 0x1c));
        eax = *((ebp - 0x20));
        eax *= *((ebp - 0x14));
        eax += *((ebp - 0x10));
        eax <<= 3;
        eax = edx + eax;
        edi = *(eax);
        *(fp_stack--) = *((eax + 4));
        *((ebp - 0x30)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp + 0x14));
        eax = *((ebp + 0x10));
        eax *= *((ebp - 0x14));
        eax += *((ebp - 0x18));
        eax <<= 3;
        eax = edx + eax;
        ecx = *(eax);
        *(fp_stack--) = *((eax + 4));
        edx = *((ebp + 0x20));
        eax = *((ebp + 0x1c));
        eax *= *((ebp - 0x18));
        eax += *((ebp - 0x10));
        eax <<= 3;
        eax = edx + eax;
        edx = *(eax);
        eax = *((eax + 4));
        ebx = ecx;
        *((ebp - 0x34)) = fp_stack[0];
        fp_stack--;
        ecx = *((ebp - 0x34));
        eax = _mulsc3 (eax, ecx, edx);
        ecx = eax;
        ebx = edx;
        eax = ecx;
        edx = ebx;
        *((ebp - 0x34)) = edi;
        *(fp_stack--) = *((ebp - 0x34));
        *(fp_stack--) = *((ebp - 0x30));
        *((ebp - 0x34)) = eax;
        *(fp_stack--) = *((ebp - 0x34));
        *((ebp - 0x34)) = edx;
        *(fp_stack--) = *((ebp - 0x34));
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack[0] += fp_stack[3];
        fp_stack++;
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        *((ebp - 0x34)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x34));
        *((ebp - 0x34)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0x34));
        *(esi) = eax;
        *((esi + 4)) = edx;
        *((ebp - 0x18))++;
        eax = *((ebp + 0x18));
    }
    *((ebp - 0x14))++;
label_3:
    eax = *((ebp + 0xc));
    if (eax > *((ebp - 0x14))) {
        goto label_0;
    }
    *((ebp - 0x10))++;
label_2:
    eax = *((ebp + 0x1c));
    if (eax > *((ebp - 0x10))) {
        goto label_1;
    }
    eax = *((ebp - 0x24));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0x20));
    edx = *((ebp + 8));
    *((edx + 4)) = eax;
    eax = *((ebp - 0x1c));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp + 8));
    esp = ebp - 0xc;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049bc0 */
#include <stdint.h>
 
int32_t dbg_quantum_print_density_matrix (void) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    quantum_matrix m;
    int32_t var_10h;
    int32_t var_ch;
    quantum_density_op * rho;
    int32_t var_4h_2;
    int32_t var_4h;
    /* void quantum_print_density_matrix(quantum_density_op * rho); */
    edx = ebp - 0x28;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    quantum_density_matrix (edx);
    eax = *((ebp - 0x28));
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x24));
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x20));
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0x14));
    *(esp) = eax;
    eax = *((ebp - 0x10));
    eax = *((ebp - 0xc));
    quantum_print_matrix (eax, eax);
    eax = ebp - 0x14;
    *(esp) = eax;
    quantum_delete_matrix ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80496df */
#include <stdint.h>
 
int32_t dbg_quantum_density_matrix (int32_t arg_8h) {
    int32_t var_4ch;
    int32_t var_40h;
    quantum_matrix m;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t dim;
    int32_t l2;
    int32_t l1;
    int32_t k;
    int32_t j;
    int32_t i;
    int32_t var_ch;
    quantum_density_op * rho;
    int32_t var_4h_2;
    uint32_t var_4h;
    uint32_t var_8h;
    int32_t var_sp_10h;
    int32_t var_sp_14h;
    int32_t var_sp_18h;
    /* quantum_matrix quantum_density_matrix(quantum_density_op * rho); */
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    ecx = *(eax);
    eax = 1;
    eax <<= cl;
    *((ebp - 0x24)) = eax;
    if (*((ebp - 0x24)) < 0) {
        *(esp) = 3;
        quantum_error ();
    }
    eax = ebp - 0x30;
    edx = *((ebp - 0x24));
    *((esp + 8)) = edx;
    edx = *((ebp - 0x24));
    *((esp + 4)) = edx;
    quantum_new_matrix (eax);
    *((ebp - 0x18)) = 0;
    goto label_2;
label_1:
    eax = *((ebp + 0xc));
    ecx = *((eax + 8));
    edx = *((ebp - 0x18));
    eax = *((ebp - 0x18));
    eax <<= 2;
    eax += edx;
    eax <<= 2;
    eax = ecx + eax;
    quantum_reconstruct_hash (eax);
    *((ebp - 0x10)) = 0;
    goto label_3;
label_0:
    *((ebp - 0x14)) = 0;
    while (eax < *((ebp - 0x24))) {
        eax = *((ebp + 0xc));
        ecx = *((eax + 8));
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x18));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        edx = ecx + eax;
        eax = *((ebp - 0x10));
        ecx = *((ebp - 0x10));
        ebx = eax;
        ebx >>= 0x1f;
        eax = *(edx);
        eax = *((edx + 4));
        eax = *((edx + 8));
        eax = *((edx + 0xc));
        eax = *((edx + 0x10));
        eax = quantum_get_state (eax, ebx, eax);
        *((ebp - 0x1c)) = eax;
        eax = *((ebp + 0xc));
        ecx = *((eax + 8));
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x18));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        edx = ecx + eax;
        eax = *((ebp - 0x14));
        ecx = *((ebp - 0x14));
        ebx = eax;
        ebx >>= 0x1f;
        eax = *(edx);
        eax = *((edx + 4));
        eax = *((edx + 8));
        eax = *((edx + 0xc));
        eax = *((edx + 0x10));
        eax = quantum_get_state (eax, ebx, eax);
        *((ebp - 0x20)) = eax;
        if (*((ebp - 0x1c)) >= 0) {
            if (*((ebp - 0x20)) < 0) {
                goto label_4;
            }
            edx = *((ebp - 0x28));
            eax = *((ebp - 0x2c));
            eax *= *((ebp - 0x14));
            eax += *((ebp - 0x10));
            eax <<= 3;
            edi = edx + eax;
            edx = *((ebp - 0x28));
            eax = *((ebp - 0x2c));
            eax *= *((ebp - 0x14));
            eax += *((ebp - 0x10));
            eax <<= 3;
            eax = edx + eax;
            *(fp_stack--) = *(eax);
            *((ebp - 0x44)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *((eax + 4));
            *((ebp - 0x48)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp + 0xc));
            edx = *((eax + 4));
            eax = *((ebp - 0x18));
            eax <<= 2;
            eax = edx + eax;
            ebx = *(eax);
            esi = 0;
            eax = *((ebp + 0xc));
            ecx = *((eax + 8));
            edx = *((ebp - 0x18));
            eax = *((ebp - 0x18));
            eax <<= 2;
            eax += edx;
            eax <<= 2;
            eax = ecx + eax;
            edx = *((eax + 0xc));
            eax = *((ebp - 0x20));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            ecx = esi;
            eax = _mulsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            esi = eax;
            *((ebp - 0x40)) = edx;
            eax = *((ebp + 0xc));
            ecx = *((eax + 8));
            edx = *((ebp - 0x18));
            eax = *((ebp - 0x18));
            eax <<= 2;
            eax += edx;
            eax <<= 2;
            eax = ecx + eax;
            edx = *((eax + 0xc));
            eax = *((ebp - 0x1c));
            eax <<= 4;
            edx += eax;
            eax = *(edx);
            *(esp) = eax;
            eax = *((edx + 4));
            eax = quantum_conj (eax);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            ecx = ebx;
            ebx = *((ebp - 0x40));
            edx = eax;
            eax = ecx;
            eax = _mulsc3 (eax, ebx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *(fp_stack--) = *((ebp - 0x44));
            *(fp_stack--) = *((ebp - 0x48));
            *((ebp - 0x4c)) = eax;
            *(fp_stack--) = *((ebp - 0x4c));
            *((ebp - 0x4c)) = edx;
            *(fp_stack--) = *((ebp - 0x4c));
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack[0] += fp_stack[3];
            fp_stack++;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            *((ebp - 0x4c)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x4c));
            *((ebp - 0x4c)) = fp_stack[0];
            fp_stack--;
            edx = *((ebp - 0x4c));
            *(edi) = eax;
            *((edi + 4)) = edx;
        }
label_4:
        *((ebp - 0x14))++;
        eax = *((ebp - 0x14));
    }
    *((ebp - 0x10))++;
label_3:
    eax = *((ebp - 0x10));
    if (eax < *((ebp - 0x24))) {
        goto label_0;
    }
    *((ebp - 0x18))++;
label_2:
    eax = *((ebp + 0xc));
    eax = *(eax);
    if (eax > *((ebp - 0x18))) {
        goto label_1;
    }
    eax = *((ebp - 0x30));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0x2c));
    edx = *((ebp + 8));
    *((edx + 4)) = eax;
    eax = *((ebp - 0x28));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp + 8));
    esp = ebp - 0xc;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804d055 */
#include <stdint.h>
 
int32_t dbg_quantum_bmeasure (void) {
    int32_t var_4ch;
    quantum_reg out;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    long long unsigned int pos2;
    int32_t var_24h;
    double r;
    double pa;
    int32_t result;
    int32_t i;
    int32_t var_bp_4h;
    int32_t pos;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_sp_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    /* int quantum_bmeasure(int pos,quantum_reg * reg); */
    *((ebp - 0x10)) = 0;
    *(fp_stack--) = 0.0;
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (0x81, eax);
    if (eax != 0) {
        *((ebp - 0x4c)) = 0;
        goto label_0;
    }
    ecx = *((ebp + 8));
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    *((ebp - 0x28)) = eax;
    *((ebp - 0x24)) = edx;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        eax = ecx;
        eax &= *((ebp - 0x28));
        edx = ebx;
        edx &= *((ebp - 0x24));
        eax |= edx;
        if (eax == 0) {
            eax = *((ebp + 0xc));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            edx += eax;
            eax = *(edx);
            eax = *((edx + 4));
            quantum_prob_inline (eax, eax);
            *(fp_stack--) = *((ebp - 0x18));
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            *((ebp - 0x18)) = fp_stack[0];
            fp_stack--;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
    }
    ax = quantum_frand ();
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x20));
    *(fp_stack--) = *((ebp - 0x18));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (eax > *((ebp - 0xc))) {
        *((ebp - 0x10)) = 1;
    }
    ecx = ebp - 0x3c;
    edx = *((ebp + 0xc));
    eax = *(edx);
    *((esp + 0xc)) = eax;
    eax = *((edx + 4));
    *((esp + 0x10)) = eax;
    eax = *((edx + 8));
    *((esp + 0x14)) = eax;
    eax = *((edx + 0xc));
    eax = *((edx + 0x10));
    eax = *((ebp - 0x10));
    eax = *((ebp + 8));
    quantum_state_collapse (eax, eax, eax);
    eax = *((ebp + 0xc));
    *(esp) = eax;
    quantum_delete_qureg_hashpreserve ();
    edx = *((ebp + 0xc));
    eax = *((ebp - 0x3c));
    *(edx) = eax;
    eax = *((ebp - 0x38));
    *((edx + 4)) = eax;
    eax = *((ebp - 0x34));
    *((edx + 8)) = eax;
    eax = *((ebp - 0x30));
    *((edx + 0xc)) = eax;
    eax = *((ebp - 0x2c));
    *((edx + 0x10)) = eax;
    eax = *((ebp - 0x10));
    *((ebp - 0x4c)) = eax;
label_0:
    eax = *((ebp - 0x4c));
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804c929 */
#include <stdint.h>
 
int32_t dbg_quantum_cond_phase_inv (void) {
    complex float z;
    int32_t var_10h;
    int32_t i;
    int32_t control;
    int32_t target;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* void quantum_cond_phase_inv(int control,int target,quantum_reg * reg); */
    edx = *((ebp + 0xc));
    eax = *((ebp + 8));
    ecx = *((ebp + 8));
    ecx -= edx;
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    *(fp_stack--) = *(esp);
    esp = esp + 8;
    ? = fp_stack[0];
    fp_stack--;
    if (edx < 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = fp_stack[?];
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x20));
    *(fp_stack--) = *(0x8054360);
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *((ebp - 0x24)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x24));
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = quantum_cexp ();
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    *((ebp - 0x14)) = eax;
    *((ebp - 0x10)) = edx;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 0xc));
            eax = *((eax + 8));
            ecx = *((ebp + 0xc));
            __asm ("shrd eax, edx, cl");
            edx >>= cl;
            if ((cl & 0x20) != 0) {
                eax = edx;
                edx = 0;
            }
            eax &= 1;
            if (al == 0) {
                goto label_0;
            }
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            esi = edx + eax;
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            ebx = edx;
            ecx = eax;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x10));
            eax = _mulsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *(esi) = eax;
            *((esi + 4)) = edx;
        }
label_0:
        *((ebp - 0xc))++;
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_decohere ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048d98 */
#include <stdint.h>
 
int32_t dbg_quantum_prob (int32_t arg_ch) {
    int32_t var_bp_4h;
    complex float a;
    int32_t var_4h;
    /* float quantum_prob(complex float a); */
    eax = *((ebp + 8));
    eax = *((ebp + 0xc));
    quantum_prob_inline (eax, eax);
    *((ebp - 4)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 4));
    *((ebp - 4)) = eax;
    *(fp_stack--) = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804f2f4 */
#include <stdint.h>
 
int32_t dbg_emul (void) {
    int32_t i;
    int32_t a;
    int32_t L;
    int32_t width;
    quantum_reg * reg;
    int32_t var_sp_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void emul(int a,int L,int width,quantum_reg * reg); */
    eax = *((ebp + 0x10));
    eax--;
    *((ebp - 4)) = eax;
    while (*((ebp - 4)) >= 0) {
        ecx = *((ebp - 4));
        eax = *((ebp + 8));
        eax >>= cl;
        eax &= 1;
        if (al != 0) {
            edx = *((ebp - 4));
            eax = *((ebp + 0x10));
            edx = eax + edx;
            eax = *((ebp + 0x10));
            eax++;
            ecx = eax + eax;
            eax = *((ebp + 0x14));
            *((esp + 0xc)) = eax;
            *((esp + 8)) = edx;
            eax = *((ebp + 0xc));
            *((esp + 4)) = eax;
            *(esp) = ecx;
            quantum_toffoli ();
        }
        *((ebp - 4))--;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804c6cd */
#include <stdint.h>
 
int32_t dbg_quantum_phase_kick (void) {
    complex float z;
    int32_t var_10h;
    int32_t i;
    int32_t target;
    float gamma;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* void quantum_phase_kick(int target,float gamma,quantum_reg * reg); */
    *(fp_stack--) = *((ebp + 0xc));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (0xa, eax);
    if (eax != 0) {
        goto label_0;
    }
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = quantum_cexp ();
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    *((ebp - 0x14)) = eax;
    *((ebp - 0x10)) = edx;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = *((ebp + 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shrd eax, edx, cl");
        edx >>= cl;
        if ((cl & 0x20) != 0) {
            eax = edx;
            edx = 0;
        }
        eax &= 1;
        if (al != 0) {
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            esi = edx + eax;
            eax = *((ebp + 0x10));
            edx = *((eax + 0xc));
            eax = *((ebp - 0xc));
            eax <<= 4;
            eax = edx + eax;
            edx = *(eax);
            eax = *((eax + 4));
            ebx = edx;
            ecx = eax;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x10));
            eax = _mulsc3 (eax, ecx, edx);
            ecx = eax;
            ebx = edx;
            eax = ecx;
            edx = ebx;
            *(esi) = eax;
            *((esi + 4)) = edx;
        }
        *((ebp - 0xc))++;
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
    }
    eax = *((ebp + 0x10));
    *(esp) = eax;
    quantum_decohere ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804e481 */
#include <stdint.h>
 
int32_t dbg_quantum_int2char (void) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t size;
    int32_t i;
    int32_t j;
    unsigned char * buf;
    /* void quantum_int2char(int j,unsigned char * buf); */
    *((ebp - 0xc)) = 4;
    *((ebp - 8)) = 0;
    while (eax < *((ebp - 0xc))) {
        eax = *((ebp - 8));
        ebx = *((ebp - 8));
        ebx += *((ebp + 0xc));
        edx = *((ebp - 0xc));
        eax = *((ebp - 8));
        eax -= edx;
        eax = ~eax;
        ecx = eax*8;
        eax = 1;
        eax <<= cl;
        edx = *((ebp + 8));
        *((ebp - 0x24)) = edx;
        edx = *((ebp - 0x24));
        ecx = eax;
        eax = edx;
        edx >>= 0x1f;
        eax = edx:eax / ecx;
        edx = edx:eax % ecx;
        *(ebx) = al;
        edx = *((ebp - 0xc));
        eax = *((ebp - 8));
        eax -= edx;
        eax = ~eax;
        ecx = eax*8;
        eax = 1;
        edx = 1;
        edx <<= cl;
        *((ebp - 0x20)) = edx;
        edx = *((ebp + 8));
        eax = *((ebp + 8));
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp - 0x20;
        edx = *(edx:eax) % ebp - 0x20;
        *((ebp + 8)) = edx;
        *((ebp - 8))++;
        eax = *((ebp - 8));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8051034 */
#include <stdint.h>
 
int32_t dbg_quantum_copy_qureg (void) {
    quantum_reg * src;
    quantum_reg * dst;
    size_t size;
    size_t n;
    /* void quantum_copy_qureg(quantum_reg * src,quantum_reg * dst); */
    ecx = *((ebp + 0xc));
    edx = *((ebp + 8));
    eax = *(edx);
    *(ecx) = eax;
    eax = *((edx + 4));
    *((ecx + 4)) = eax;
    eax = *((edx + 8));
    *((ecx + 8)) = eax;
    eax = *((edx + 0xc));
    *((ecx + 0xc)) = eax;
    eax = *((edx + 0x10));
    *((ecx + 0x10)) = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    eax = calloc (eax, 0x10);
    edx = eax;
    eax = *((ebp + 0xc));
    *((eax + 0xc)) = edx;
    eax = *((ebp + 0xc));
    eax = *((eax + 0xc));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax != 0) {
        eax = *((ebp + 0xc));
        ecx = *((eax + 8));
        eax = 1;
        eax <<= cl;
        eax = calloc (eax, 4);
        edx = eax;
        eax = *((ebp + 0xc));
        *((eax + 0x10)) = edx;
        eax = *((ebp + 0xc));
        eax = *((eax + 0x10));
        if (eax == 0) {
            *(esp) = 2;
            quantum_error ();
        }
        eax = *((ebp + 0xc));
        ecx = *((eax + 8));
        eax = 4;
        eax <<= cl;
        *(esp) = eax;
        quantum_memman ();
    }
    eax = *((ebp + 8));
    eax = *((eax + 4));
    edx = *((eax + 4));
    edx <<= 4;
    eax = *((ebp + 8));
    ecx = *((eax + 0xc));
    eax = *((ebp + 0xc));
    eax = *((eax + 0xc));
    memcpy (eax, ecx, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8051001 */
#include <stdint.h>
 
int32_t dbg_quantum_delete_qureg_hashpreserve (void) {
    quantum_reg * reg;
    /* void quantum_delete_qureg_hashpreserve(quantum_reg * reg); */
    eax = *((ebp + 8));
    eax = *((eax + 0xc));
    free (eax);
    eax = *((ebp + 8));
    eax = *((eax + 4));
    eax <<= 4;
    eax = -eax;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 8));
    *((eax + 0xc)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804c0bf */
#include <stdint.h>
 
int32_t dbg_quantum_hadamard (void) {
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    quantum_matrix m;
    int32_t var_10h;
    int32_t var_ch;
    int32_t target;
    quantum_reg * reg;
    int32_t var_4h_2;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_10h;
    /* void quantum_hadamard(int target,quantum_reg * reg); */
    eax = *((ebp + 8));
    eax = quantum_objcode_put (6, eax);
    if (eax == 0) {
        eax = ebp - 0x28;
        *((esp + 8)) = 2;
        *((esp + 4)) = 2;
        quantum_new_matrix (eax);
        eax = *((ebp - 0x28));
        *((ebp - 0x14)) = eax;
        eax = *((ebp - 0x24));
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0x20));
        *((ebp - 0xc)) = eax;
        edx = *((ebp - 0xc));
        eax = 0x3f3504f3;
        *(edx) = eax;
        eax = 0;
        *((edx + 4)) = eax;
        eax = *((ebp - 0xc));
        edx = eax + 8;
        eax = 0x3f3504f3;
        *(edx) = eax;
        eax = 0;
        *((edx + 4)) = eax;
        eax = *((ebp - 0xc));
        edx = eax + 0x10;
        eax = 0x3f3504f3;
        *(edx) = eax;
        eax = 0;
        *((edx + 4)) = eax;
        eax = *((ebp - 0xc));
        edx = eax + 0x18;
        eax = 0xbf3504f3;
        *(edx) = eax;
        eax = 0;
        *((edx + 4)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 0x10)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp - 0xc));
        eax = *((ebp + 8));
        quantum_gate1 (eax);
        eax = ebp - 0x14;
        *(esp) = eax;
        quantum_delete_matrix ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804c1c4 */
#include <stdint.h>
 
int32_t dbg_quantum_r_x (void) {
    int32_t var_4ch;
    int32_t var_40h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    quantum_matrix m;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_bp_4h;
    int32_t target;
    float gamma;
    quantum_reg * reg;
    int32_t var_4h_2;
    int32_t var_8h_2;
    int32_t var_sp_ch;
    int32_t var_4h;
    int32_t var_8h;
    /* void quantum_r_x(int target,float gamma,quantum_reg * reg); */
    *(fp_stack--) = *((ebp + 0xc));
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 8));
    eax = quantum_objcode_put (7, eax);
    if (eax == 0) {
        eax = ebp - 0x28;
        *((esp + 8)) = 2;
        *((esp + 4)) = 2;
        quantum_new_matrix (eax);
        eax = *((ebp - 0x28));
        *((ebp - 0x14)) = eax;
        eax = *((ebp - 0x24));
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0x20));
        *((ebp - 0xc)) = eax;
        ebx = *((ebp - 0xc));
        *(fp_stack--) = *((ebp + 0xc));
        *(fp_stack--) = *(0x8054350);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        cos ();
        *((ebp - 0x2c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x2c));
        *((ebp - 0x4c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x4c));
        edx = 0;
        *(ebx) = eax;
        *((ebx + 4)) = edx;
        eax = *((ebp - 0xc));
        ebx = eax + 8;
        *(fp_stack--) = *((ebp + 0xc));
        *(fp_stack--) = *(0x8054350);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        sin ();
        *(fp_stack--) = 0.0;
        eax = ebp - 0x40;
        *(fp_stack--) = 1.0;
        fp_stack[0] = -fp_stack[0];
        *((esp + 0x1c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        *((esp + 0xc)) = fp_stack[0];
        fp_stack--;
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        muldc3 (eax);
        *(fp_stack--) = *((ebp - 0x40));
        *(fp_stack--) = *((ebp - 0x38));
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        *((ebp - 0x2c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x2c));
        fp_tmp_1 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_1;
        *((ebp - 0x2c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x2c));
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        *((ebp - 0x4c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x4c));
        *((ebp - 0x4c)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0x4c));
        *(ebx) = eax;
        *((ebx + 4)) = edx;
        eax = *((ebp - 0xc));
        ebx = eax + 0x10;
        *(fp_stack--) = *((ebp + 0xc));
        *(fp_stack--) = *(0x8054350);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        sin ();
        *(fp_stack--) = 0.0;
        eax = ebp - 0x40;
        *(fp_stack--) = 1.0;
        fp_stack[0] = -fp_stack[0];
        *((esp + 0x1c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *((esp + 0x14)) = fp_stack[0];
        fp_stack--;
        *((esp + 0xc)) = fp_stack[0];
        fp_stack--;
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        muldc3 (eax);
        *(fp_stack--) = *((ebp - 0x40));
        *(fp_stack--) = *((ebp - 0x38));
        fp_tmp_3 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_3;
        *((ebp - 0x2c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x2c));
        fp_tmp_4 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_4;
        *((ebp - 0x2c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x2c));
        fp_tmp_5 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_5;
        *((ebp - 0x4c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x4c));
        *((ebp - 0x4c)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0x4c));
        *(ebx) = eax;
        *((ebx + 4)) = edx;
        eax = *((ebp - 0xc));
        ebx = eax + 0x18;
        *(fp_stack--) = *((ebp + 0xc));
        *(fp_stack--) = *(0x8054350);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *(esp) = fp_stack[0];
        fp_stack--;
        cos ();
        *((ebp - 0x2c)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x2c));
        *((ebp - 0x4c)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x4c));
        edx = 0;
        *(ebx) = eax;
        *((ebx + 4)) = edx;
        eax = *((ebp + 0x10));
        *((esp + 0x10)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp - 0xc));
        eax = *((ebp + 8));
        quantum_gate1 (eax);
        eax = ebp - 0x14;
        *(esp) = eax;
        quantum_delete_matrix ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8049351 */
#include <stdint.h>
 
int32_t dbg_quantum_reduced_density_op (void) {
    int32_t var_78h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    quantum_reg rtmp;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    long long unsigned int pos2;
    int32_t var_24h;
    double ptmp;
    double p0;
    int32_t j;
    int32_t i;
    int32_t var_bp_4h;
    int32_t pos;
    quantum_density_op * rho;
    int32_t var_4h_2;
    size_t size;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_sp_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    /* void quantum_reduced_density_op(int pos,quantum_density_op * rho); */
    *(fp_stack--) = 0.0;
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    eax = *(eax);
    eax <<= 3;
    edx = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    eax = realloc (eax, edx);
    edx = eax;
    eax = *((ebp + 0xc));
    *((eax + 4)) = edx;
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp + 0xc));
    edx = *(eax);
    eax = *(eax);
    eax <<= 2;
    eax += edx;
    eax <<= 3;
    edx = eax;
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    eax = realloc (eax, edx);
    edx = eax;
    eax = *((ebp + 0xc));
    *((eax + 8)) = edx;
    eax = *((ebp + 0xc));
    eax = *((eax + 8));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp + 0xc));
    eax = *(eax);
    edx = *(eax);
    eax = *(eax);
    eax += eax;
    eax += edx;
    eax <<= 3;
    *(esp) = eax;
    quantum_memman ();
    ecx = *((ebp + 8));
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    *((ebp - 0x28)) = eax;
    *((ebp - 0x24)) = edx;
    *((ebp - 0xc)) = 0;
    goto label_1;
label_0:
    eax = *((ebp + 0xc));
    edx = *((eax + 4));
    eax = *((ebp - 0xc));
    eax <<= 2;
    eax = edx + eax;
    *(fp_stack--) = *(eax);
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    ecx = *((eax + 8));
    edx = *((ebp - 0xc));
    eax = *((ebp - 0xc));
    eax <<= 2;
    eax += edx;
    eax <<= 2;
    edx = ecx + eax;
    eax = *(edx);
    *((ebp - 0x3c)) = eax;
    eax = *((edx + 4));
    *((ebp - 0x38)) = eax;
    eax = *((edx + 8));
    *((ebp - 0x34)) = eax;
    eax = *((edx + 0xc));
    *((ebp - 0x30)) = eax;
    eax = *((edx + 0x10));
    *((ebp - 0x2c)) = eax;
    *(fp_stack--) = 0.0;
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x10)) = 0;
    while (eax > *((ebp - 0x10))) {
        eax = *((ebp + 0xc));
        ecx = *((eax + 8));
        edx = *((ebp - 0xc));
        eax = *((ebp - 0xc));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        eax = ecx + eax;
        edx = *((eax + 0xc));
        eax = *((ebp - 0x10));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        eax = ecx;
        eax &= *((ebp - 0x28));
        edx = ebx;
        edx &= *((ebp - 0x24));
        eax |= edx;
        if (eax == 0) {
            eax = *((ebp + 0xc));
            ecx = *((eax + 8));
            edx = *((ebp - 0xc));
            eax = *((ebp - 0xc));
            eax <<= 2;
            eax += edx;
            eax <<= 2;
            eax = ecx + eax;
            edx = *((eax + 0xc));
            eax = *((ebp - 0x10));
            eax <<= 4;
            edx += eax;
            eax = *(edx);
            eax = *((edx + 4));
            quantum_prob_inline (eax, eax);
            *(fp_stack--) = *((ebp - 0x18));
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            *((ebp - 0x18)) = fp_stack[0];
            fp_stack--;
        }
        *((ebp - 0x10))++;
        eax = *((ebp + 0xc));
        ecx = *((eax + 8));
        edx = *((ebp - 0xc));
        eax = *((ebp - 0xc));
        eax <<= 2;
        eax += edx;
        eax <<= 2;
        eax = ecx + eax;
        eax = *((eax + 4));
    }
    eax = *((ebp + 0xc));
    edx = *((eax + 4));
    eax = *((ebp - 0xc));
    eax <<= 2;
    eax = edx + eax;
    *(fp_stack--) = *((ebp - 0x20));
    fp_stack[0] *= *((ebp - 0x18));
    *((ebp - 0x4c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x4c));
    *(eax) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    edx = *((eax + 4));
    eax = *((ebp + 0xc));
    eax = *(eax);
    eax += *((ebp - 0xc));
    eax <<= 2;
    eax = edx + eax;
    *(fp_stack--) = 1.0;
    fp_stack[0] -= *((ebp - 0x18));
    fp_stack[0] *= *((ebp - 0x20));
    *((ebp - 0x4c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x4c));
    *(eax) = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0xc));
    ecx = *((eax + 8));
    edx = *((ebp - 0xc));
    eax = *((ebp - 0xc));
    eax <<= 2;
    eax += edx;
    eax <<= 2;
    ebx = ecx + eax;
    edx = ebp - 0x78;
    eax = *((ebp - 0x3c));
    *((esp + 0xc)) = eax;
    eax = *((ebp - 0x38));
    *((esp + 0x10)) = eax;
    eax = *((ebp - 0x34));
    *((esp + 0x14)) = eax;
    eax = *((ebp - 0x30));
    eax = *((ebp - 0x2c));
    eax = *((ebp + 8));
    quantum_state_collapse (eax, eax, 0);
    eax = *((ebp - 0x78));
    *(ebx) = eax;
    eax = *((ebp - 0x74));
    *((ebx + 4)) = eax;
    eax = *((ebp - 0x70));
    *((ebx + 8)) = eax;
    eax = *((ebp - 0x6c));
    *((ebx + 0xc)) = eax;
    eax = *((ebp - 0x68));
    *((ebx + 0x10)) = eax;
    eax = *((ebp + 0xc));
    ecx = *((eax + 8));
    eax = *((ebp + 0xc));
    eax = *(eax);
    eax += *((ebp - 0xc));
    edx = eax;
    eax <<= 2;
    eax += edx;
    eax <<= 2;
    ebx = ecx + eax;
    edx = ebp - 0x78;
    eax = *((ebp - 0x3c));
    *((esp + 0xc)) = eax;
    eax = *((ebp - 0x38));
    *((esp + 0x10)) = eax;
    eax = *((ebp - 0x34));
    *((esp + 0x14)) = eax;
    eax = *((ebp - 0x30));
    eax = *((ebp - 0x2c));
    eax = *((ebp + 8));
    quantum_state_collapse (eax, eax, 1);
    eax = *((ebp - 0x78));
    *(ebx) = eax;
    eax = *((ebp - 0x74));
    *((ebx + 4)) = eax;
    eax = *((ebp - 0x70));
    *((ebx + 8)) = eax;
    eax = *((ebp - 0x6c));
    *((ebx + 0xc)) = eax;
    eax = *((ebp - 0x68));
    *((ebx + 0x10)) = eax;
    eax = ebp - 0x3c;
    *(esp) = eax;
    quantum_delete_qureg_hashpreserve ();
    *((ebp - 0xc))++;
label_1:
    eax = *((ebp + 0xc));
    eax = *(eax);
    if (eax > *((ebp - 0xc))) {
        goto label_0;
    }
    eax = *((ebp + 0xc));
    eax = *(eax);
    edx = eax + eax;
    eax = *((ebp + 0xc));
    *(eax) = edx;
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x805165e */
#include <stdint.h>
 
int32_t dbg_quantum_state_collapse (void * arg_8h, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h) {
    int32_t var_74h;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    quantum_reg out;
    int32_t var_48h;
    int32_t var_44h;
    void * var_40h;
    int32_t var_3ch;
    long long unsigned int pos2;
    int32_t var_34h;
    long long unsigned int rpat;
    int32_t var_2ch;
    long long unsigned int lpat;
    int32_t var_24h;
    double d;
    size_t nmeb;
    int32_t k;
    int32_t j;
    int32_t i;
    int32_t pos;
    int32_t value;
    quantum_reg reg;
    size_t size;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* quantum_reg quantum_state_collapse(int pos,int value,quantum_reg reg); */
    *((ebp - 0x18)) = 0;
    *(fp_stack--) = 0.0;
    *((ebp - 0x20)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x28)) = 0;
    *((ebp - 0x24)) = 0;
    *((ebp - 0x30)) = 0;
    *((ebp - 0x2c)) = 0;
    ecx = *((ebp + 0xc));
    eax = 1;
    edx = 0;
    __asm ("shld edx, eax, cl");
    eax <<= cl;
    if ((cl & 0x20) != 0) {
        edx = eax;
        eax = 0;
    }
    *((ebp - 0x38)) = eax;
    *((ebp - 0x34)) = edx;
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        edx = *((ebp + 0x20));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        eax = ecx;
        eax &= *((ebp - 0x38));
        edx = ebx;
        edx &= *((ebp - 0x34));
        eax |= edx;
        if (eax != 0) {
            if (*((ebp + 0x10)) != 0) {
                goto label_1;
            }
        }
        edx = *((ebp + 0x20));
        eax = *((ebp - 0xc));
        eax <<= 4;
        eax = edx + eax;
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        eax = ecx;
        eax &= *((ebp - 0x38));
        edx = ebx;
        edx &= *((ebp - 0x34));
        eax |= edx;
        if (eax == 0) {
            if (*((ebp + 0x10)) != 0) {
                goto label_2;
            }
label_1:
            edx = *((ebp + 0x20));
            eax = *((ebp - 0xc));
            eax <<= 4;
            edx += eax;
            eax = *(edx);
            *(esp) = eax;
            eax = *((edx + 4));
            quantum_prob_inline (eax);
            *(fp_stack--) = *((ebp - 0x20));
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            *((ebp - 0x20)) = fp_stack[0];
            fp_stack--;
            *((ebp - 0x18))++;
        }
label_2:
        *((ebp - 0xc))++;
        eax = *((ebp + 0x18));
    }
    eax = *((ebp + 0x14));
    eax--;
    *((ebp - 0x4c)) = eax;
    eax = *((ebp - 0x18));
    *((ebp - 0x48)) = eax;
    eax = *((ebp - 0x18));
    eax = calloc (eax, 0x10);
    *((ebp - 0x40)) = eax;
    eax = *((ebp - 0x40));
    if (eax == 0) {
        *(esp) = 2;
        quantum_error ();
    }
    eax = *((ebp - 0x18));
    eax <<= 4;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 0x1c));
    *((ebp - 0x44)) = eax;
    eax = *((ebp + 0x24));
    *((ebp - 0x3c)) = eax;
    *((ebp - 0xc)) = 0;
    *((ebp - 0x10)) = 0;
    goto label_3;
label_0:
    edx = *((ebp + 0x20));
    eax = *((ebp - 0xc));
    eax <<= 4;
    eax = edx + eax;
    ecx = *((eax + 8));
    ebx = *((eax + 0xc));
    eax = ecx;
    eax &= *((ebp - 0x38));
    edx = ebx;
    edx &= *((ebp - 0x34));
    eax |= edx;
    if (eax != 0) {
        if (*((ebp + 0x10)) != 0) {
            goto label_4;
        }
    }
    edx = *((ebp + 0x20));
    eax = *((ebp - 0xc));
    eax <<= 4;
    eax = edx + eax;
    ecx = *((eax + 8));
    ebx = *((eax + 0xc));
    eax = ecx;
    eax &= *((ebp - 0x38));
    edx = ebx;
    edx &= *((ebp - 0x34));
    eax |= edx;
    if (eax != 0) {
        goto label_5;
    }
    if (*((ebp + 0x10)) != 0) {
        goto label_5;
    }
label_4:
    *((ebp - 0x14)) = 0;
    *((ebp - 0x30)) = 0;
    *((ebp - 0x2c)) = 0;
    while (eax < *((ebp + 0xc))) {
        ecx = *((ebp - 0x14));
        eax = 1;
        edx = 0;
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        *((ebp - 0x30)) += eax;
        *((ebp - 0x2c)) += edx;
        *((ebp - 0x14))++;
        eax = *((ebp - 0x14));
    }
    edx = *((ebp + 0x20));
    eax = *((ebp - 0xc));
    eax <<= 4;
    eax = edx + eax;
    edx = *((eax + 0xc));
    eax = *((eax + 8));
    *((ebp - 0x30)) &= eax;
    *((ebp - 0x2c)) &= edx;
    *((ebp - 0x14)) = 0x3f;
    *((ebp - 0x28)) = 0;
    *((ebp - 0x24)) = 0;
    while (eax > *((ebp + 0xc))) {
        ecx = *((ebp - 0x14));
        eax = 1;
        edx = 0;
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        *((ebp - 0x28)) += eax;
        *((ebp - 0x24)) += edx;
        *((ebp - 0x14))--;
        eax = *((ebp - 0x14));
    }
    edx = *((ebp + 0x20));
    eax = *((ebp - 0xc));
    eax <<= 4;
    eax = edx + eax;
    edx = *((eax + 0xc));
    eax = *((eax + 8));
    *((ebp - 0x28)) &= eax;
    *((ebp - 0x24)) &= edx;
    edx = *((ebp - 0x40));
    eax = *((ebp - 0x10));
    eax <<= 4;
    esi = edx + eax;
    eax = *((ebp - 0x28));
    edx = *((ebp - 0x24));
    ecx = eax;
    ebx = edx;
    __asm ("shrd ecx, ebx, 1");
    ebx >>= 1;
    eax = ecx;
    eax |= *((ebp - 0x30));
    edx = ebx;
    edx |= *((ebp - 0x2c));
    *((esi + 8)) = eax;
    *((esi + 0xc)) = edx;
    edx = *((ebp - 0x40));
    eax = *((ebp - 0x10));
    eax <<= 4;
    edx += eax;
    *((ebp - 0x68)) = edx;
    edx = *((ebp + 0x20));
    eax = *((ebp - 0xc));
    eax <<= 4;
    eax = edx + eax;
    *(fp_stack--) = *(eax);
    *((ebp - 0x60)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((eax + 4));
    *((ebp - 0x64)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x20));
    fp_stack[0] = sqrt(fp_stack[0]);
    *((ebp - 0x70)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x70));
    fp_status = fp_compare(fp_stack[0], fp_stack[0]);
    fp_stack++;
    ax = fp_status;
    __asm ("sahf");
    if (eax != 0) {
        if (eax == 0) {
            goto label_6;
        }
    }
    *(fp_stack--) = *((ebp - 0x20));
    *(esp) = fp_stack[0];
    fp_stack--;
    sqrt ();
    *((ebp - 0x70)) = fp_stack[0];
    fp_stack--;
label_6:
    *(fp_stack--) = *((ebp - 0x70));
    *((ebp - 0x5c)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x5c));
    *((ebp - 0x74)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x74));
    ecx = 0;
    esi = *((ebp - 0x60));
    ebx = *((ebp - 0x64));
    edx = eax;
    eax = ecx;
    eax = _divsc3 (eax, ebx, edx);
    ecx = eax;
    ebx = edx;
    eax = ecx;
    edx = ebx;
    ecx = *((ebp - 0x68));
    *(ecx) = eax;
    eax = *((ebp - 0x68));
    *((eax + 4)) = edx;
    *((ebp - 0x10))++;
label_5:
    *((ebp - 0xc))++;
label_3:
    eax = *((ebp + 0x18));
    if (eax > *((ebp - 0xc))) {
        goto label_0;
    }
    eax = *((ebp - 0x4c));
    edx = *((ebp + 8));
    *(edx) = eax;
    eax = *((ebp - 0x48));
    ecx = *((ebp + 8));
    *((ecx + 4)) = eax;
    eax = *((ebp - 0x44));
    edx = *((ebp + 8));
    *((edx + 8)) = eax;
    eax = *((ebp - 0x40));
    ecx = *((ebp + 8));
    *((ecx + 0xc)) = eax;
    eax = *((ebp - 0x3c));
    edx = *((ebp + 8));
    *((edx + 0x10)) = eax;
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804fde4 */
#include <stdint.h>
 
int32_t dbg_quantum_qft (void) {
    int32_t j;
    int32_t i;
    int32_t width;
    quantum_reg * reg;
    int32_t var_sp_4h;
    int32_t var_sp_8h;
    /* void quantum_qft(int width,quantum_reg * reg); */
    eax = *((ebp + 8));
    eax--;
    *((ebp - 4)) = eax;
    goto label_1;
label_0:
    eax = *((ebp + 8));
    eax--;
    *((ebp - 8)) = eax;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp - 4));
        *((esp + 4)) = eax;
        eax = *((ebp - 8));
        *(esp) = eax;
        quantum_cond_phase ();
        *((ebp - 8))--;
        eax = *((ebp - 8));
    }
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp - 4));
    *(esp) = eax;
    quantum_hadamard ();
    *((ebp - 4))--;
label_1:
    if (*((ebp - 4)) >= 0) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804d8fe */
#include <stdint.h>
 
int32_t dbg_muxfa (void) {
    int32_t a;
    int32_t b_in;
    int32_t c_in;
    int32_t c_out;
    int32_t xlt_l;
    int32_t L;
    int32_t total;
    quantum_reg * reg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void muxfa(int a,int b_in,int c_in,int c_out,int xlt_l,int L,int total,quantum_reg * reg); */
    if (*((ebp + 8)) == 0) {
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
    }
    if (*((ebp + 8)) == 3) {
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
    }
    if (*((ebp + 8)) == 1) {
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
    }
    if (*((ebp + 8)) == 2) {
        eax = *((ebp + 0x24));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x18));
        *(esp) = eax;
        quantum_sigma_x ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x1c));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_toffoli ();
        eax = *((ebp + 0x24));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        quantum_cnot ();
        eax = *((ebp + 0x24));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x18));
        *(esp) = eax;
        quantum_sigma_x ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x805135c */
#include <stdint.h>
 
int32_t dbg_quantum_addscratch (void) {
    long long unsigned int l;
    int32_t var_ch;
    int32_t oldwidth;
    int32_t i;
    int32_t bits;
    quantum_reg * reg;
    /* void quantum_addscratch(int bits,quantum_reg * reg); */
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    eax = *(eax);
    edx = *(eax);
    edx += *((ebp + 8));
    eax = *((ebp + 0xc));
    *(eax) = edx;
    *((ebp - 4)) = 0;
    while (eax > *((ebp - 4))) {
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 4));
        eax <<= 4;
        eax = edx + eax;
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        ecx = *((ebp + 8));
        __asm ("shld edx, eax, cl");
        eax <<= cl;
        if ((cl & 0x20) != 0) {
            edx = eax;
            eax = 0;
        }
        *((ebp - 0x10)) = eax;
        *((ebp - 0xc)) = edx;
        eax = *((ebp + 0xc));
        edx = *((eax + 0xc));
        eax = *((ebp - 4));
        eax <<= 4;
        ecx = edx + eax;
        eax = *((ebp - 0x10));
        edx = *((ebp - 0xc));
        *((ecx + 8)) = eax;
        *((ecx + 0xc)) = edx;
        *((ebp - 4))++;
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8052614 */
#include <stdint.h>
 
uint32_t dbg_main (char ** argv) {
    int32_t var_8ch;
    int32_t argc;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    quantum_reg qr;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t factor;
    int32_t b;
    int32_t a;
    int32_t q;
    int32_t c;
    int32_t N;
    int32_t x;
    int32_t swidth;
    int32_t width;
    int32_t i;
    int32_t var_bp_4h;
    float var_4h_4;
    int32_t var_4h_3;
    int32_t var_4h_2;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* int main(int argc,char ** argv); */
    ecx = esp + 4;
    *((ebp - 0x70)) = ecx;
    *((ebp - 0x18)) = 0;
    eax = time (0);
    srand (eax);
    eax = *((ebp - 0x70));
    if (*(eax) == 1) {
        puts ("Usage: shor [number]\n");
        *((ebp - 0x6c)) = 3;
        goto label_1;
    }
    edx = *((ebp - 0x70));
    eax = *((edx + 4));
    eax += 4;
    eax = *(eax);
    eax = atoi (eax);
    *((ebp - 0x1c)) = eax;
    if (*((ebp - 0x1c)) <= 0xe) {
        puts ("Invalid number\n");
        *((ebp - 0x6c)) = 3;
        goto label_1;
    }
    eax = *((ebp - 0x1c));
    eax *= *((ebp - 0x1c));
    *(esp) = eax;
    eax = quantum_getwidth ();
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x1c));
    *(esp) = eax;
    eax = quantum_getwidth ();
    *((ebp - 0x14)) = eax;
    edx = *((ebp - 0x14));
    eax = *((ebp - 0x14));
    eax += eax;
    eax += edx;
    eax += *((ebp - 0x10));
    eax += 2;
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1c));
    *((esp + 4)) = eax;
    printf ("N = %i, %i qubits required\n");
    eax = *((ebp - 0x70));
    if (*(eax) <= 2) {
        goto label_2;
    }
    edx = *((ebp - 0x70));
    eax = *((edx + 4));
    eax += 8;
    eax = *(eax);
    eax = atoi (eax);
    *((ebp - 0x18)) = eax;
    while (eax > 1) {
label_0:
        eax = rand ();
        edx = eax;
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp - 0x1c;
        edx = *(edx:eax) % ebp - 0x1c;
        *((ebp - 0x18)) = edx;
label_2:
        eax = *((ebp - 0x18));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x1c));
        *(esp) = eax;
        eax = quantum_gcd ();
    }
    if (*((ebp - 0x18)) <= 1) {
        goto label_0;
    }
    eax = *((ebp - 0x18));
    *((esp + 4)) = eax;
    printf ("Random seed: %i\n");
    edx = ebp - 0x68;
    eax = *((ebp - 0x10));
    *((esp + 0xc)) = eax;
    quantum_new_qureg (edx, 0, 0);
    eax = *((ebp - 0x68));
    *((ebp - 0x44)) = eax;
    eax = *((ebp - 0x64));
    *((ebp - 0x40)) = eax;
    eax = *((ebp - 0x60));
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0x5c));
    *((ebp - 0x38)) = eax;
    eax = *((ebp - 0x58));
    *((ebp - 0x34)) = eax;
    *((ebp - 0xc)) = 0;
    while (eax < *((ebp - 0x10))) {
        eax = ebp - 0x44;
        *((esp + 4)) = eax;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        quantum_hadamard ();
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
    }
    edx = *((ebp - 0x14));
    eax = *((ebp - 0x14));
    eax += eax;
    eax += edx;
    edx = eax + 2;
    eax = ebp - 0x44;
    *((esp + 4)) = eax;
    *(esp) = edx;
    quantum_addscratch ();
    eax = ebp - 0x44;
    *((esp + 0x10)) = eax;
    eax = *((ebp - 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp - 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x18));
    *((esp + 4)) = eax;
    eax = *((ebp - 0x1c));
    *(esp) = eax;
    quantum_exp_mod_n ();
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        eax = ebp - 0x44;
        *((esp + 4)) = eax;
        *(esp) = 0;
        quantum_bmeasure ();
        *((ebp - 0xc))++;
        edx = *((ebp - 0x14));
        eax = *((ebp - 0x14));
        eax += eax;
        eax += edx;
        eax += 2;
    }
    eax = ebp - 0x44;
    *((esp + 4)) = eax;
    eax = *((ebp - 0x10));
    *(esp) = eax;
    quantum_qft ();
    *((ebp - 0xc)) = 0;
    while (eax > *((ebp - 0xc))) {
        edx = *((ebp - 0xc));
        eax = *((ebp - 0x10));
        eax -= edx;
        edx = eax - 1;
        eax = ebp - 0x44;
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        quantum_cnot ();
        edx = *((ebp - 0xc));
        eax = *((ebp - 0x10));
        eax -= edx;
        edx = eax - 1;
        eax = ebp - 0x44;
        *((esp + 8)) = eax;
        eax = *((ebp - 0xc));
        *((esp + 4)) = eax;
        *(esp) = edx;
        quantum_cnot ();
        edx = *((ebp - 0xc));
        eax = *((ebp - 0x10));
        eax -= edx;
        edx = eax - 1;
        eax = ebp - 0x44;
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        quantum_cnot ();
        *((ebp - 0xc))++;
        edx = *((ebp - 0x10));
        eax = *((ebp - 0x10));
        eax >>= 0x1f;
        eax += edx;
        eax >>= 1;
    }
    eax = *((ebp - 0x44));
    *(esp) = eax;
    eax = *((ebp - 0x40));
    *((esp + 4)) = eax;
    eax = *((ebp - 0x3c));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x38));
    eax = *((ebp - 0x34));
    eax = quantum_measure (eax);
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0x20));
    if (eax == -1) {
        puts ("Impossible Measurement!");
        *((ebp - 0x6c)) = 1;
    } else {
        eax = *((ebp - 0x20));
        if (eax == 0) {
            puts ("Measured zero, try again.");
            *((ebp - 0x6c)) = 2;
        } else {
            ecx = *((ebp - 0x10));
            eax = 1;
            eax <<= cl;
            *((ebp - 0x24)) = eax;
            eax = *((ebp - 0x20));
            *(fp_stack--) = *(esp);
            esp = esp + 4;
            eax = *((ebp - 0x24));
            *(fp_stack--) = *(esp);
            esp = esp + 4;
            fp_stack[0] /= fp_stack[1];
            fp_stack++;
            eax = *((ebp - 0x20));
            *((esp + 8)) = fp_stack[0];
            fp_stack--;
            *((esp + 4)) = eax;
            printf ("Measured %i (%f), ");
            eax = *((ebp - 0x10));
            *((esp + 8)) = eax;
            eax = ebp - 0x24;
            *((esp + 4)) = eax;
            eax = ebp - 0x20;
            *(esp) = eax;
            quantum_frac_approx ();
            eax = *((ebp - 0x24));
            edx = *((ebp - 0x20));
            *((esp + 8)) = eax;
            *((esp + 4)) = edx;
            printf ("fractional approximation is %i/%i.\n");
            edx = *((ebp - 0x24));
            eax = *((ebp - 0x24));
            eax >>= 0x1f;
            ecx = eax;
            ecx >>= 0x1f;
            eax = edx + ecx;
            eax &= 1;
            eax -= ecx;
            if (eax == 1) {
                eax = *((ebp - 0x24));
                edx = eax + eax;
                ecx = *((ebp - 0x10));
                eax = 1;
                eax <<= cl;
                if (edx >= eax) {
                    goto label_3;
                }
                puts ("Odd denominator, trying to expand by 2.");
                eax = *((ebp - 0x24));
                eax += eax;
                *((ebp - 0x24)) = eax;
            }
label_3:
            edx = *((ebp - 0x24));
            eax = *((ebp - 0x24));
            eax >>= 0x1f;
            ecx = eax;
            ecx >>= 0x1f;
            eax = edx + ecx;
            eax &= 1;
            eax -= ecx;
            if (eax == 1) {
                puts ("Odd period, try again.");
                *((ebp - 0x6c)) = 2;
            } else {
                eax = *((ebp - 0x24));
                *((esp + 4)) = eax;
                printf ("Possible period is %i.\n");
                edx = *((ebp - 0x24));
                eax = *((ebp - 0x24));
                eax >>= 0x1f;
                eax += edx;
                eax >>= 1;
                *((esp + 4)) = eax;
                eax = *((ebp - 0x18));
                *(esp) = eax;
                eax = quantum_ipow ();
                ecx = eax;
                edx = 1;
                eax = 1;
                edx >>= 0x1f;
                eax = *(edx:eax) / ebp - 0x1c;
                edx = *(edx:eax) % ebp - 0x1c;
                eax = edx;
                eax = ecx + eax;
                *((ebp - 0x28)) = eax;
                edx = *((ebp - 0x24));
                eax = *((ebp - 0x24));
                eax >>= 0x1f;
                eax += edx;
                eax >>= 1;
                *((esp + 4)) = eax;
                eax = *((ebp - 0x18));
                *(esp) = eax;
                eax = quantum_ipow ();
                ecx = eax;
                edx = 1;
                eax = 1;
                edx >>= 0x1f;
                eax = *(edx:eax) / ebp - 0x1c;
                edx = *(edx:eax) % ebp - 0x1c;
                eax = edx;
                edx = ecx;
                edx -= eax;
                eax = edx;
                *((ebp - 0x2c)) = eax;
                eax = *((ebp - 0x28));
                *((esp + 4)) = eax;
                eax = *((ebp - 0x1c));
                *(esp) = eax;
                eax = quantum_gcd ();
                *((ebp - 0x28)) = eax;
                eax = *((ebp - 0x2c));
                *((esp + 4)) = eax;
                eax = *((ebp - 0x1c));
                *(esp) = eax;
                eax = quantum_gcd ();
                *((ebp - 0x2c)) = eax;
                eax = *((ebp - 0x28));
                if (eax > *((ebp - 0x2c))) {
                    eax = *((ebp - 0x28));
                    *((ebp - 0x30)) = eax;
                } else {
                    eax = *((ebp - 0x2c));
                    *((ebp - 0x30)) = eax;
                }
                eax = *((ebp - 0x30));
                if (eax < *((ebp - 0x1c))) {
                    if (*((ebp - 0x30)) > 1) {
                        eax = *((ebp - 0x1c));
                        *((ebp - 0x8c)) = eax;
                        edx = *((ebp - 0x8c));
                        eax = *((ebp - 0x8c));
                        edx >>= 0x1f;
                        eax = *(edx:eax) / ebp - 0x30;
                        edx = *(edx:eax) % ebp - 0x30;
                        *((esp + 0xc)) = eax;
                        eax = *((ebp - 0x30));
                        *((esp + 8)) = eax;
                        eax = *((ebp - 0x1c));
                        *((esp + 4)) = eax;
                        printf ("%i = %i * %i\n");
                        eax = ebp - 0x44;
                        *(esp) = eax;
                        quantum_delete_qureg ();
                        *((ebp - 0x6c)) = 0;
                    }
                } else {
                    puts ("Unable to determine factors, try again.");
                    *((ebp - 0x6c)) = 2;
                }
            }
        }
    }
label_1:
    eax = *((ebp - 0x6c));
    ecx = *((ebp - 4));
    esp = ecx - 4;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80487e4 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x80487f0)(uint32_t) (ebx);
    ebx += 0xd804;
    edx = *((ebx - 8));
    if (edx != 0) {
        gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048854 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8050faf */
#include <stdint.h>
 
int32_t dbg_quantum_delete_qureg (void) {
    quantum_reg * reg;
    /* void quantum_delete_qureg(quantum_reg * reg); */
    eax = *((ebp + 8));
    eax = *((eax + 8));
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = *((eax + 0x10));
        if (eax == 0) {
            goto label_0;
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        quantum_destroy_hash ();
    }
label_0:
    eax = *((ebp + 8));
    eax = *((eax + 0xc));
    free (eax);
    eax = *((ebp + 8));
    eax = *((eax + 4));
    eax <<= 4;
    eax = -eax;
    *(esp) = eax;
    quantum_memman ();
    eax = *((ebp + 8));
    *((eax + 0xc)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x804fe43 */
#include <stdint.h>
 
int32_t dbg_quantum_qft_inv (void) {
    int32_t j;
    int32_t i;
    int32_t width;
    quantum_reg * reg;
    int32_t var_sp_4h;
    int32_t var_sp_8h;
    /* void quantum_qft_inv(int width,quantum_reg * reg); */
    *((ebp - 4)) = 0;
    goto label_1;
label_0:
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp - 4));
    *(esp) = eax;
    quantum_hadamard ();
    eax = *((ebp - 4));
    eax++;
    *((ebp - 8)) = eax;
    while (eax < *((ebp + 8))) {
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp - 4));
        *((esp + 4)) = eax;
        eax = *((ebp - 8));
        *(esp) = eax;
        quantum_cond_phase_inv ();
        *((ebp - 8))++;
        eax = *((ebp - 8));
    }
    *((ebp - 4))++;
label_1:
    eax = *((ebp - 4));
    if (eax < *((ebp + 8))) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048834 */
#include <stdint.h>
 
void srand (void) {
    srand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048864 */
#include <stdint.h>
 
void realloc (void) {
    realloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048874 */
#include <stdint.h>
 
void getenv (void) {
    getenv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048894 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80488a4 */
#include <stdint.h>
 
void pow (void) {
    pow ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80488c4 */
#include <stdint.h>
 
void perror (void) {
    perror ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80488f4 */
#include <stdint.h>
 
void sqrt (void) {
    sqrt ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048904 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048914 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048924 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048944 */
#include <stdint.h>
 
void fgetc (void) {
    fgetc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048954 */
#include <stdint.h>
 
void feof (void) {
    feof ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048964 */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048974 */
#include <stdint.h>
 
void atoi (void) {
    atoi ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048984 */
#include <stdint.h>
 
void fwrite (void) {
    fwrite ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80489a4 */
#include <stdint.h>
 
void time (void) {
    time ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80489c4 */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80489d4 */
#include <stdint.h>
 
void log (void) {
    log ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x80489e4 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/shor/ia32_elf_from_website/subject.exe @ 0x8048a04 */
#include <stdint.h>
 
void fread (void) {
    fread ();
}
