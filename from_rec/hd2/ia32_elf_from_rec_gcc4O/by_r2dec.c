/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x8048540 */
#include <stdint.h>
 
void entry0 (void) {
    /* [14] -r-x section size 1084 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80484c0 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x8048570 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.7021) != 0) {
        goto label_0;
    }
    eax = *(obj.dtor_idx.7023);
    ebx = obj.__DTOR_END__;
    ebx -= obj.__DTOR_LIST__;
    ebx >>= 2;
    ebx--;
    if (eax >= ebx) {
        goto label_1;
    }
    do {
        eax++;
        *(obj.dtor_idx.7023) = eax;
        uint32_t (*eax*4 + obj.__DTOR_LIST__)() ();
        eax = *(obj.dtor_idx.7023);
    } while (eax < ebx);
label_1:
    *(obj.completed.7021) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80485d0 */
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
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x8048950 */
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
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80487af */
#include <stdint.h>
 
int32_t hexdump (int32_t arg_8h) {
    file* var_8ch;
    int32_t var_84h;
    uint32_t var_58h;
    int32_t var_2ch;
    int32_t canary;
    char * size;
    size_t nmemb;
    file* stream;
    ebx = *((ebp + 8));
    eax = *(gs:0x14);
    *((ebp - 0x1c)) = eax;
    eax = 0;
    eax = ebp - 0x84;
    *((esp + 8)) = eax;
    *((esp + 4)) = ebx;
    *(esp) = 3;
    eax = xstat ();
    if (eax != 0) {
        perror (ebx);
        eax = 1;
        goto label_0;
    }
    eax = fopen (ebx, 0x80489b6);
    *((ebp - 0x8c)) = eax;
    if (eax != 0) {
        esi = 0;
        edi = ebp - 0x2c;
        if (*((ebp - 0x58)) != 0) {
            goto label_1;
        }
        goto label_2;
    }
    perror (ebx);
    eax = 1;
    goto label_0;
    do {
label_1:
        edx = *((ebp - 0x8c));
        eax = fread (edx, 1, 0x10);
        ebx = eax;
        if (ebx == 0) {
            goto label_2;
        }
        dumpline (edi, esi, eax);
        esi += ebx;
    } while (*((ebp - 0x58)) > esi);
label_2:
    eax = *((ebp - 0x8c));
    fclose (eax);
    eax = 0;
label_0:
    edx = *((ebp - 0x1c));
    edx ^= *(gs:0x14);
    if (*((ebp - 0x58)) != esi) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80488e0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x804897c */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 28 named .fini */
    void (*0x8048988)(uint32_t) (ebx);
    ebx += 0x166c;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x8048600 */
#include <stdint.h>
 
int32_t dumpline (int32_t arg_8h, char * arg_ch, size_t arg_10h) {
    int32_t var_7ch;
    int32_t var_6ch;
    int32_t var_63h;
    int32_t var_1ch;
    int32_t var_4h;
    int32_t var_8h;
    char * var_ch;
    int32_t var_10h;
    ebx = *((ebp + 8));
    eax = *(gs:0x14);
    *((ebp - 0x1c)) = eax;
    eax = 0;
    eax = *((ebp + 0xc));
    *((esp + 0x10)) = eax;
    *((esp + 0xc)) = "%08lX:";
    *((esp + 8)) = 0x50;
    *((esp + 4)) = 1;
    eax = ebp - 0x6c;
    *(esp) = eax;
    sprintf_chk ();
    esi = *((ebp + 0x10));
    if (esi > 0x10) {
        esi = 0x10;
    }
    edi = 1;
    if (esi <= 0) {
        goto label_2;
    }
    eax = ebp - 0x63;
    di = 0;
    *((ebp - 0x7c)) = esi;
    esi = ebx;
    ebx = eax;
    do {
        eax = *((esi + edi));
        *((esp + 0x10)) = eax;
        *((esp + 0xc)) = " %02lX";
        *((esp + 8)) = 0xffffffff;
        *((esp + 4)) = 1;
        *(esp) = ebx;
        sprintf_chk ();
        edi++;
        ebx += 3;
    } while (edi < *((ebp - 0x7c)));
    ebx = esi;
    esi = *((ebp - 0x7c));
    if (esi > 0xf) {
        goto label_3;
    }
    edi = esi + 1;
    do {
label_2:
        *((esp + 8)) = 0x50;
        *((esp + 4)) = 0x80489ae;
        eax = ebp - 0x6c;
        *(esp) = eax;
        strcat_chk ();
        edi++;
        eax = edi - 1;
    } while (eax <= 0xf);
    edx = ebp - 0x6c;
    edi = edx;
    eax = 0;
    ecx = 0xffffffff;
    __asm ("repne scasb al, byte es:[edi]");
    ecx = ~ecx;
    *((edx + ecx - 1)) = 0x7c2020;
    ecx += 2;
    *((ebp - 0x7c)) = ecx;
    if (esi <= 0) {
        esi = 0;
label_0:
        eax = *((ebp - 0x7c));
        eax += esi;
        eax = ebp + eax - 0x6c;
        goto label_4;
    }
label_1:
    eax = *((ebp - 0x7c));
    edx = ebp + eax - 0x6c;
    eax = 0;
    edi = ebx;
    do {
        ecx = *((edi + eax));
        ebx = ecx - 0x20;
        if (bl > 0x5e) {
            ecx = 0x2e;
        }
        *(edx) = cl;
        eax++;
        edx++;
    } while (eax != esi);
    if (esi <= 0xf) {
        goto label_0;
    }
    goto label_5;
    do {
label_4:
        *(eax) = 0x20;
        esi++;
        eax++;
    } while (esi <= 0xf);
label_5:
    eax = ebp - 0x6c;
    esi += *((ebp - 0x7c));
    *((eax + esi)) = 0x7c;
    *((esp + 8)) = eax;
    *((esp + 4)) = 0x80489b2;
    *(esp) = 1;
    printf_chk ();
    eax = *((ebp - 0x1c));
    eax ^= *(gs:0x14);
    if (esi != 0) {
        goto label_6;
label_3:
        edx = ebp - 0x6c;
        edi = edx;
        eax = 0;
        ecx = 0xffffffff;
        __asm ("repne scasb al, byte es:[edi]");
        ecx = ~ecx;
        *((edx + ecx - 1)) = 0x7c2020;
        ecx += 2;
        *((ebp - 0x7c)) = ecx;
        goto label_1;
label_6:
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80488f0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x16f9;
    _init ();
    edi = ebx - 0xe8;
    eax = ebx - 0xe8;
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
        uint32_t (*ebx + esi*4 - 0xe8)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        esi++;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x804894a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80488a0 */
#include <stdint.h>
 
int32_t main (char ** argv, char ** envp) {
    esi = *((ebp + 0xc));
    ebx = 1;
    edi = 0;
    if (*((ebp + 8)) <= 1) {
        goto label_0;
    }
    do {
        eax = *((esi + ebx*4));
        eax = hexdump (eax);
        edi += eax;
        ebx++;
    } while (*((ebp + 8)) > ebx);
label_0:
    eax = edi;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x8048450 */
#include <stdint.h>
 
void init (void) {
    /* [12] -r-x section size 48 named .init */
    void (*0x804845c)(uint32_t) (ebx);
    ebx += 0x1b98;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80484a0 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x8048490 */
#include <stdint.h>
 
void xstat (void) {
    xstat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80484b0 */
#include <stdint.h>
 
void printf_chk (void) {
    printf_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80484d0 */
#include <stdint.h>
 
void perror (void) {
    perror ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80484e0 */
#include <stdint.h>
 
void strcat_chk (void) {
    strcat_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x80484f0 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x8048500 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x8048510 */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x8048520 */
#include <stdint.h>
 
void sprintf_chk (void) {
    sprintf_chk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4O/subject.exe @ 0x8048530 */
#include <stdint.h>
 
void fread (void) {
    fread ();
}
