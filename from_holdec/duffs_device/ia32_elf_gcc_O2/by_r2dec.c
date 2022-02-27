/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 1148 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x80482e4 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x8048340 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.5978) != 0) {
        goto label_0;
    }
    eax = *(obj.dtor_idx.5980);
    ebx = obj.__DTOR_END__;
    ebx -= obj.__DTOR_LIST__;
    ebx >>= 2;
    ebx--;
    if (eax >= ebx) {
        goto label_1;
    }
    do {
        eax++;
        *(obj.dtor_idx.5980) = eax;
        uint32_t (*eax*4 + obj.__DTOR_LIST__)() ();
        eax = *(obj.dtor_idx.5980);
    } while (eax < ebx);
label_1:
    *(obj.completed.5978) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x80483a0 */
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
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x8048760 */
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
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x8048520 */
#include <stdint.h>
 
int32_t dbg_copy2_four_times (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    /* void copy2_four_times(short int * to,short int * from,int n); */
    eax = *((ebp + 8));
    ebx = *((ebp + 0x10));
    edx = *((ebp + 0xc));
    if (ebx <= 0) {
        goto label_0;
    }
    ecx = 4;
    esi = 8;
    esi -= ebx;
    ecx -= ebx;
    ebx -= 4;
    ebx &= 0xfffffffc;
    esi += ebx;
    while (ecx != esi) {
        eax += 2;
        edx += 2;
        if (ecx != 2) {
            if (ecx == 3) {
                goto label_1;
            }
            if (ecx != 1) {
                ebx = *(edx);
                edx += 2;
                *(eax) = bx;
                eax += 2;
            }
            ebx = *(edx);
            edx += 2;
            *(eax) = bx;
            eax += 2;
        }
        ebx = *(edx);
        edx += 2;
        *(eax) = bx;
        eax += 2;
label_1:
        ebx = *(edx);
        ecx += 4;
        *(eax) = bx;
    }
label_0:
    esi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x80486f0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x804878c */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x8048798)(uint32_t) (ebx);
    ebx += 0x11dc;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x80485a0 */
#include <stdint.h>
 
int32_t dbg_copy2_eight_times (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, short int * to) {
    eax = to;
    /* void copy2_eight_times(short int * to,short int * from,int n); */
    eax = *((ebp + 8));
    ebx = *((ebp + 0x10));
    edx = *((ebp + 0xc));
    if (ebx <= 0) {
        goto label_0;
    }
    ecx = 8;
    esi = 0x10;
    esi -= ebx;
    ecx -= ebx;
    ebx -= 8;
    ebx &= 0xfffffff8;
    esi += ebx;
    while (ecx > 7) {
        ebx = *(edx);
        edx += 2;
        *(eax) = bx;
        eax += 2;
        ebx = *(edx);
        edx += 2;
        *(eax) = bx;
        eax += 2;
        ebx = *(edx);
        edx += 2;
        *(eax) = bx;
        eax += 2;
        ebx = *(edx);
        edx += 2;
        *(eax) = bx;
        eax += 2;
        ebx = *(edx);
        edx += 2;
        *(eax) = bx;
        eax += 2;
        ebx = *(edx);
        edx += 2;
        *(eax) = bx;
        eax += 2;
        ebx = *(edx);
        edx += 2;
        *(eax) = bx;
        eax += 2;
        ebx = *(edx);
        ecx += 8;
        *(eax) = bx;
        if (ecx == esi) {
            goto label_0;
        }
        eax += 2;
        edx += 2;
    }
    /* switch table (8 cases) at 0x80487d4 */
label_0:
    esi = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x8048700 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1269;
    init ();
    edi = ebx - 0xe0;
    eax = ebx - 0xe0;
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
        uint32_t (*ebx + esi*4 - 0xe0)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        esi++;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x8048470 */
#include <stdint.h>
 
int32_t dbg_copy1_eight_times (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t n, short int * to) {
    int32_t count;
    ebx = n;
    ecx = to;
    /* void copy1_eight_times(short int * to,short int * from,int count); */
    ecx = *((ebp + 0x10));
    edx = *((ebp + 8));
    eax = *((ebp + 0xc));
    ebx = ecx;
    ebx += 7;
    esi = ecx + 0xe;
    __asm ("cmovs ebx, esi");
    esi = ecx;
    esi >>= 0x1f;
    esi >>= 0x1d;
    ecx += esi;
    ecx &= 7;
    ecx -= esi;
    ebx >>= 3;
    while (ebx <= 0) {
        esi = ebx;
        return eax;
        /* switch table (8 cases) at 0x80487b4 */
label_0:
        ecx = *(eax);
        eax += 2;
        *(edx) = cx;
        edx += 2;
        ecx = *(eax);
        eax += 2;
        *(edx) = cx;
        edx += 2;
        ecx = *(eax);
        eax += 2;
        *(edx) = cx;
        edx += 2;
        ecx = *(eax);
        eax += 2;
        *(edx) = cx;
        edx += 2;
        ecx = *(eax);
        eax += 2;
        *(edx) = cx;
        edx += 2;
        ecx = *(eax);
        eax += 2;
        *(edx) = cx;
        edx += 2;
        ecx = *(eax);
        ebx--;
        *(edx) = cx;
    }
    edx += 2;
    eax += 2;
    ecx = *(eax);
    eax += 2;
    *(edx) = cx;
    edx += 2;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x80483d0 */
#include <stdint.h>
 
int32_t dbg_copy1_four_times (int32_t arg_8h, int32_t arg_ch, int32_t n) {
    short int * to;
    int32_t count;
    ebx = n;
    /* void copy1_four_times(short int * to,short int * from,int count); */
    eax = *((ebp + 0x10));
    ecx = *((ebp + 8));
    edx = *((ebp + 0xc));
    ebx = eax;
    ebx += 3;
    esi = eax + 6;
    __asm ("cmovs ebx, esi");
    esi = eax;
    esi >>= 0x1f;
    esi >>= 0x1e;
    eax += esi;
    eax &= 3;
    eax -= esi;
    ebx >>= 2;
    if (eax == 1) {
        goto label_2;
    }
    if (eax <= 1) {
        goto label_3;
    }
    if (eax == 2) {
        goto label_0;
    }
    while (ebx <= 0) {
label_1:
        esi = ebx;
        return eax;
        eax = *(edx);
        edx += 2;
        *(ecx) = ax;
        ecx += 2;
label_0:
        eax = *(edx);
        edx += 2;
        *(ecx) = ax;
        ecx += 2;
label_2:
        eax = *(edx);
        ebx--;
        *(ecx) = ax;
    }
    ecx += 2;
    edx += 2;
    do {
        eax = *(edx);
        edx += 2;
        *(ecx) = ax;
        eax = *(edx);
        ecx += 2;
        edx += 2;
        *(ecx) = ax;
        ecx += 2;
        goto label_0;
label_3:
    } while (eax == 0);
    goto label_1;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x804875a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x8048650 */
#include <stdint.h>
 
uint32_t dbg_main (short int * src, short int * dest) {
    int32_t argc;
    char ** argv;
    int32_t var_4h;
    int32_t var_8h;
    esi = src;
    edi = dest;
    /* int main(int argc,char ** argv); */
    eax = malloc (0xc8);
    esi = eax;
    eax = malloc (0xc8);
    *((esp + 4)) = esi;
    edi = eax;
    copy1_four_times (eax, 0x64);
    copy1_eight_times (edi, esi, 0x64);
    copy2_four_times (edi, esi, 0x64);
    copy2_eight_times (edi, esi, 0x64);
    ecx = 0xc8;
    __asm ("repe cmpsb byte [esi], byte ptr es:[edi]");
    al = (? > ?) ? 1 : 0;
    dl = (? < ?) ? 1 : 0;
    al -= dl;
    eax = (int32_t) al;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x80482f4 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x8048294 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x80482a0)(uint32_t) (ebx);
    ebx += 0x16d4;
    edx = *((ebx - 4));
    if (edx != 0) {
        loc_imp_gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O2/subject.exe @ 0x80482d4 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
