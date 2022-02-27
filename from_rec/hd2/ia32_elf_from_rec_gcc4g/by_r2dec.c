/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048580 */
#include <stdint.h>
 
void entry0 (void) {
    /* [14] -r-x section size 1148 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80484d8 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80485b0 */
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
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048610 */
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
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80489d0 */
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
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80487c6 */
#include <stdint.h>
 
int32_t dbg_hexdump (char ** arg_8h) {
    char * fname;
    stat st;
    int32_t var_54h;
    int32_t cnt;
    FILE * fp;
    long unsigned int offset;
    unsigned char[16] buff;
    int32_t canary;
    char * size;
    size_t nmemb;
    file* stream;
    /* int hexdump(char * fname); */
    eax = *((ebp + 8));
    *((ebp - 0x8c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x8c));
    edx = ebp - 0x80;
    eax = _stat (eax, edx);
    if (eax != 0) {
        eax = *((ebp - 0x8c));
        perror (eax);
        eax = 1;
        goto label_0;
    }
    edx = 0x8048a38;
    eax = *((ebp - 0x8c));
    eax = fopen (eax, edx);
    *((ebp - 0x24)) = eax;
    if (*((ebp - 0x24)) == 0) {
        eax = *((ebp - 0x8c));
        perror (eax);
        eax = 1;
        goto label_0;
    }
    *((ebp - 0x20)) = 0;
    while (eax > *((ebp - 0x20))) {
        eax = *((ebp - 0x24));
        eax = ebp - 0x1c;
        eax = fread (eax, 1, 0x10);
        *((ebp - 0x28)) = eax;
        if (*((ebp - 0x28)) == 0) {
            goto label_1;
        }
        eax = *((ebp - 0x28));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x20));
        eax = ebp - 0x1c;
        dumpline (eax, eax);
        eax = *((ebp - 0x28));
        *((ebp - 0x20)) += eax;
        eax = *((ebp - 0x54));
    }
    goto label_2;
label_1:
label_2:
    eax = *((ebp - 0x24));
    fclose (eax);
    eax = 0;
label_0:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (eax != *((ebp - 0x20))) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048920 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80489fc */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 28 named .fini */
    void (*0x8048a08)(uint32_t) (ebx);
    ebx += 0x15ec;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048990 */
#include <stdint.h>
 
int32_t stat (char ** arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    eax = *((ebp + 0xc));
    eax = _i686_get_pc_thunk_bx (ebx);
    ebx += 0x1655;
    *(esp) = 3;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    xstat ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x804898a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80484b8 */
#include <stdint.h>
 
void xstat (void) {
    xstat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048634 */
#include <stdint.h>
 
int32_t dbg_dumpline (void * arg_8h, int32_t arg_20h) {
    unsigned char * p;
    int32_t len;
    int32_t c;
    char[80] buff;
    int32_t canary;
    long unsigned int offset;
    int32_t cnt;
    char * format;
    size_t n;
    /* void dumpline(unsigned char * p,long unsigned int offset,int cnt); */
    eax = *((ebp + 8));
    *((ebp - 0x6c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "%08lX:";
    edx = *((ebp + 0xc));
    eax = ebp - 0x5c;
    sprintf (eax, eax, edx);
    if (*((ebp + 0x10)) > 0x10) {
        *((ebp + 0x10)) = 0x10;
    }
    *((ebp - 0x60)) = 0;
    while (eax < *((ebp + 0x10))) {
        eax = *((ebp - 0x60));
        eax += *((ebp - 0x6c));
        eax = *(eax);
        ebx = (int32_t) al;
        ecx = " %02lX";
        edx = *((ebp - 0x60));
        eax = *((ebp - 0x60));
        eax += eax;
        eax += edx;
        edx = eax + 9;
        eax = ebp - 0x5c;
        eax += edx;
        sprintf (eax, ecx, ebx);
        *((ebp - 0x60))++;
        eax = *((ebp - 0x60));
    }
    while (al != 0) {
        eax = 0x8048a2e;
        eax = ebp - 0x5c;
        strcat (eax, eax);
        al = (*((ebp - 0x60)) <= 0xf) ? 1 : 0;
        *((ebp - 0x60))++;
    }
    eax = ebp - 0x5c;
    eax = strlen (eax);
    *((ebp - 0x64)) = eax;
    edx = 0x8048a32;
    ecx = *((ebp - 0x64));
    eax = ebp - 0x5c;
    eax += ecx;
    memcpy (eax, edx, 4);
    *((ebp - 0x64)) += 3;
    *((ebp - 0x60)) = 0;
    while (eax < *((ebp + 0x10))) {
        eax = *((ebp - 0x60));
        edx = *((ebp - 0x64));
        edx += eax;
        eax = *((ebp - 0x60));
        eax += *((ebp - 0x6c));
        eax = *(eax);
        if (al > 0x1f) {
            eax = *((ebp - 0x60));
            eax += *((ebp - 0x6c));
            eax = *(eax);
            if (al <= 0x7e) {
                eax = *((ebp - 0x60));
                eax += *((ebp - 0x6c));
                eax = *(eax);
            }
        } else {
            eax = 0x2e;
        }
        *((ebp + edx - 0x5c)) = al;
        *((ebp - 0x60))++;
        eax = *((ebp - 0x60));
    }
    while (*((ebp - 0x60)) <= 0xf) {
        eax = *((ebp - 0x64));
        edx = *((ebp - 0x60));
        eax = edx + eax;
        *((ebp + eax - 0x5c)) = 0x20;
        *((ebp - 0x60))++;
    }
    edx = 0x8048a36;
    ecx = *((ebp - 0x64));
    eax = *((ebp - 0x60));
    ecx += eax;
    eax = ebp - 0x5c;
    eax += ecx;
    memcpy (eax, edx, 2);
    eax = ebp - 0x5c;
    puts (eax);
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048930 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x16b9;
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
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80488ca */
#include <stdint.h>
 
int32_t dbg_main (void) {
    int32_t argc;
    char ** argv;
    int32_t errs;
    int32_t i;
    /* int main(int argc,char ** argv); */
    *((esp + 0x18)) = 0;
    *((esp + 0x1c)) = 1;
    while (eax < *((ebp + 8))) {
        eax = *((esp + 0x1c));
        eax <<= 2;
        eax += *((ebp + 0xc));
        eax = *(eax);
        eax = hexdump (eax);
        eax = *((esp + 0x1c));
    }
    eax = *((esp + 0x18));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048468 */
#include <stdint.h>
 
void init (void) {
    /* [12] -r-x section size 48 named .init */
    void (*0x8048474)(uint32_t) (ebx);
    ebx += 0x1b80;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80484c8 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80484a8 */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80484e8 */
#include <stdint.h>
 
void perror (void) {
    perror ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x80484f8 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048508 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048518 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048528 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048538 */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048548 */
#include <stdint.h>
 
void strcat (void) {
    strcat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048558 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/ia32_elf_from_rec_gcc4g/subject.exe @ 0x8048568 */
#include <stdint.h>
 
void fread (void) {
    fread ();
}
