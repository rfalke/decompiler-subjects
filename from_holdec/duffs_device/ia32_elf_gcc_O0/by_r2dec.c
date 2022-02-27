/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x8048340 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 1324 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x8048314 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x8048370 */
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
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x80483d0 */
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
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x8048840 */
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
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x8048586 */
#include <stdint.h>
 
int32_t dbg_copy2_four_times (void * arg_8h, void * arg_ch) {
    short int * to;
    short int * from;
    int32_t n;
    /* void copy2_four_times(short int * to,short int * from,int n); */
    if (*((ebp + 0x10)) <= 0) {
        goto label_0;
    }
    do {
        if (*((ebp + 0x10)) == 0) {
            goto label_1;
        }
        eax = 4;
        eax -= *((ebp + 0x10));
        if (eax != 2) {
            if (eax == 3) {
                goto label_2;
            }
            if (eax != 1) {
                eax = *((ebp + 0xc));
                edx = *(eax);
                eax = *((ebp + 8));
                *(eax) = dx;
                *((ebp + 8)) += 2;
                *((ebp + 0xc)) += 2;
            } else {
            }
            eax = *((ebp + 0xc));
            edx = *(eax);
            eax = *((ebp + 8));
            *(eax) = dx;
            *((ebp + 8)) += 2;
            *((ebp + 0xc)) += 2;
        } else {
        }
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        goto label_3;
label_2:
label_3:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        *((ebp + 0x10)) -= 4;
    } while (1);
label_0:
    goto label_4;
label_1:
label_4:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x80487d0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x804886c */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x8048878)(uint32_t) (ebx);
    ebx += 0x11dc;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x8048612 */
#include <stdint.h>
 
int32_t dbg_copy2_eight_times (void * arg_8h, void * arg_ch) {
    short int * to;
    short int * from;
    int32_t n;
    /* void copy2_eight_times(short int * to,short int * from,int n); */
    if (*((ebp + 0x10)) <= 0) {
        goto label_0;
    }
    do {
        if (*((ebp + 0x10)) == 0) {
            goto label_1;
        }
        eax = 8;
        eax -= *((ebp + 0x10));
        if (eax <= 7) {
            eax = *((eax*4 + 0x80488b4));
            /* switch table (8 cases) at 0x80488b4 */
            void (*eax)() ();
        }
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        goto label_2;
label_2:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        goto label_3;
label_3:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        goto label_4;
label_4:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        goto label_5;
label_5:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        goto label_6;
label_6:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        goto label_7;
label_7:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        goto label_8;
label_8:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        *((ebp + 0x10)) -= 8;
    } while (1);
label_0:
    goto label_9;
label_1:
label_9:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x80487e0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1269;
    _init ();
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
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x8048498 */
#include <stdint.h>
 
int32_t dbg_copy1_eight_times (void * arg_8h, void * arg_ch) {
    int32_t var_4h;
    int32_t n;
    short int * to;
    short int * from;
    int32_t count;
    /* void copy1_eight_times(short int * to,short int * from,int count); */
    eax = *((ebp + 0x10));
    eax += 7;
    edx = eax + 7;
    __asm ("cmovs eax, edx");
    eax >>= 3;
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    edx = *((ebp + 0x10));
    edx >>= 0x1f;
    edx >>= 0x1d;
    eax += edx;
    eax &= 7;
    eax -= edx;
    if (eax > 7) {
        goto label_0;
    }
    eax = *((eax*4 + 0x8048894));
    /* switch table (8 cases) at 0x8048894 */
    void (*eax)() ();
    do {
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        *((ebp - 4))--;
    } while (*((ebp - 4)) > 0);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x80483f4 */
#include <stdint.h>
 
int32_t dbg_copy1_four_times (void * arg_8h, void * arg_ch) {
    int32_t var_4h;
    int32_t n;
    short int * to;
    short int * from;
    int32_t count;
    /* void copy1_four_times(short int * to,short int * from,int count); */
    eax = *((ebp + 0x10));
    eax += 3;
    edx = eax + 3;
    __asm ("cmovs eax, edx");
    eax >>= 2;
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    edx = *((ebp + 0x10));
    edx >>= 0x1f;
    edx >>= 0x1e;
    eax += edx;
    eax &= 3;
    eax -= edx;
    if (eax == 1) {
        goto label_0;
    }
    if (eax <= 1) {
        if (eax == 0) {
            goto label_1;
        }
        goto label_2;
    }
    if (eax == 2) {
        goto label_3;
    }
    if (eax == 3) {
        goto label_4;
    }
    goto label_2;
    do {
label_1:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
label_4:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
label_3:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
label_0:
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 8)) += 2;
        *((ebp + 0xc)) += 2;
        *((ebp - 4))--;
    } while (*((ebp - 4)) > 0);
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x804883a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x8048704 */
#include <stdint.h>
 
int32_t dbg_main (void) {
    int32_t argc;
    char ** argv;
    void * s2;
    size_t n;
    size_t size;
    short int * src;
    short int * dest;
    /* int main(int argc,char ** argv); */
    *((esp + 0x14)) = 0xc8;
    eax = *((esp + 0x14));
    eax = malloc (eax);
    *((esp + 0x18)) = eax;
    eax = *((esp + 0x14));
    eax = malloc (eax);
    *((esp + 0x1c)) = eax;
    *((esp + 8)) = 0x64;
    eax = *((esp + 0x18));
    eax = *((esp + 0x1c));
    copy1_four_times (eax, eax);
    *((esp + 8)) = 0x64;
    eax = *((esp + 0x18));
    eax = *((esp + 0x1c));
    copy1_eight_times (eax, eax);
    *((esp + 8)) = 0x64;
    eax = *((esp + 0x18));
    eax = *((esp + 0x1c));
    copy2_four_times (eax, eax);
    *((esp + 8)) = 0x64;
    eax = *((esp + 0x18));
    eax = *((esp + 0x1c));
    copy2_eight_times (eax, eax);
    eax = *((esp + 0x14));
    eax = *((esp + 0x1c));
    eax = *((esp + 0x18));
    memcmp (eax, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x8048324 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x80482f4 */
#include <stdint.h>
 
void memcmp (void) {
    memcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x80482b4 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x80482c0)(uint32_t) (ebx);
    ebx += 0x1794;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_holdec/duffs_device/ia32_elf_gcc_O0/subject.exe @ 0x8048304 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
