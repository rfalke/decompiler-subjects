/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x4006b0 */
#include <stdint.h>
 
void entry0 (func rtld_fini, void * stack_end) {
    rdx = rtld_fini;
    xmm0 = stack_end;
    /* [14] -r-x section size 1208 named .text */
    ebp = 0;
    return libc_start_main (dbg.main, rsi, rsp, sym.__libc_csu_init, sym.__libc_csu_fini, rdx);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400620 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x4006dc */
#include <stdint.h>
 
int64_t call_gmon_start (void) {
    rax = .got;
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400700 */
#include <stdint.h>
 
int64_t do_global_dtors_aux (void) {
    if (*(obj.completed.6341) != 0) {
        goto label_0;
    }
    ebx = obj.__DTOR_END__;
    rax = *(obj.dtor_idx.6343);
    rbx -= obj.__DTOR_LIST__;
    rbx >>= 3;
    rbx--;
    if (rax >= rbx) {
        goto label_1;
    }
    do {
        rax++;
        *(obj.dtor_idx.6343) = rax;
        uint64_t (*rax*8 + obj.__DTOR_LIST__)() ();
        rax = *(obj.dtor_idx.6343);
    } while (rax < rbx);
label_1:
    *(obj.completed.6341) = 1;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400770 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    if (*(obj.__JCR_LIST__) != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = obj.__JCR_LIST__;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400b30 */
#include <stdint.h>
 
int64_t do_global_ctors_aux (void) {
    rax = .ctors;
    if (rax == -1) {
        goto label_0;
    }
    ebx = .ctors;
    do {
        rbx -= 8;
        void (*rax)() ();
        rax = *(rbx);
    } while (rax != -1);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400942 */
#include <stdint.h>
 
int64_t dbg_hexdump (char * arg1) {
    char * fname;
    stat st;
    int64_t var_90h;
    unsigned char[16] buff;
    long unsigned int offset;
    FILE * fp;
    int32_t cnt;
    rdi = arg1;
    /* int hexdump(char * fname); */
    *((rbp - 0xc8)) = rdi;
    rax = *((rbp - 0xc8));
    rdx = rbp - 0xc0;
    rsi = rdx;
    rdi = rax;
    eax = _stat ();
    if (eax != 0) {
        rax = *((rbp - 0xc8));
        perror (*((rbp - 0xc8)));
        eax = 1;
        goto label_0;
    }
    edx = 0x400b94;
    rax = *((rbp - 0xc8));
    rax = fopen (rax, rdx);
    *((rbp - 0x10)) = rax;
    if (*((rbp - 0x10)) == 0) {
        rax = *((rbp - 0xc8));
        perror (*((rbp - 0xc8)));
        eax = 1;
        goto label_0;
    }
    *((rbp - 0x18)) = 0;
    while (rax > *((rbp - 0x18))) {
        rdx = *((rbp - 0x10));
        rax = rbp - 0x30;
        eax = fread (rax, 1, 0x10, rdx);
        *((rbp - 4)) = eax;
        if (*((rbp - 4)) == 0) {
            goto label_1;
        }
        rax = rbp - 0x30;
        dumpline (rax, rcx, *((rbp - 4)), *((rbp - 0x18)));
        eax = *((rbp - 4));
        rax = (int64_t) eax;
        *((rbp - 0x18)) += rax;
        rax = *((rbp - 0x90));
    }
    goto label_2;
label_1:
label_2:
    rax = *((rbp - 0x10));
    fclose (*((rbp - 0x10)));
    eax = 0;
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400a80 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400b68 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 14 named .fini */
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400b20 */
#include <stdint.h>
 
void stat (int64_t arg2, int64_t arg1) {
    rsi = arg2;
    rdi = arg1;
    rdx = rsi;
    rsi = rdi;
    edi = 1;
    return xstat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400794 */
#include <stdint.h>
 
uint64_t dbg_dumpline (int64_t arg_20h, size_t arg3, size_t arg2, void * arg1) {
    int32_t cnt;
    long unsigned int offset;
    unsigned char * p;
    char[80] buff;
    int32_t c;
    int32_t len;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    /* void dumpline(unsigned char * p,long unsigned int offset,int cnt); */
    *((rbp - 0x78)) = rdi;
    *((rbp - 0x80)) = rsi;
    *((rbp - 0x84)) = edx;
    ecx = "%08lX:";
    rax = rbp - 0x70;
    eax = 0;
    sprintf (rax, rcx, *((rbp - 0x80)));
    if (*((rbp - 0x84)) > 0x10) {
        *((rbp - 0x84)) = 0x10;
    }
    *((rbp - 0x18)) = 0;
    while (eax < *((rbp - 0x84))) {
        eax = *((rbp - 0x18));
        rax = (int64_t) eax;
        rax += *((rbp - 0x78));
        eax = *(rax);
        ebx = (int32_t) al;
        ecx = " %02lX";
        edx = *((rbp - 0x18));
        eax = *((rbp - 0x18));
        eax += eax;
        eax += edx;
        rax = (int64_t) eax;
        rdx = rax + 9;
        rax = rbp - 0x70;
        rax += rdx;
        eax = 0;
        sprintf (rax, rcx, ebx);
        *((rbp - 0x18))++;
        eax = *((rbp - 0x18));
    }
    while (al != 0) {
        edx = 0x400b8a;
        rax = rbp - 0x70;
        strcat (rax, rdx);
        al = (*((rbp - 0x18)) <= 0xf) ? 1 : 0;
        *((rbp - 0x18))++;
    }
    rax = rbp - 0x70;
    eax = strlen (rax);
    *((rbp - 0x14)) = eax;
    ecx = 0x400b8e;
    eax = *((rbp - 0x14));
    rdx = (int64_t) eax;
    rax = rbp - 0x70;
    rax += rdx;
    memcpy (rax, rcx, 4);
    *((rbp - 0x14)) += 3;
    *((rbp - 0x18)) = 0;
    while (eax < *((rbp - 0x84))) {
        eax = *((rbp - 0x18));
        edx = *((rbp - 0x14));
        edx += eax;
        eax = *((rbp - 0x18));
        rax = (int64_t) eax;
        rax += *((rbp - 0x78));
        eax = *(rax);
        if (al > 0x1f) {
            eax = *((rbp - 0x18));
            rax = (int64_t) eax;
            rax += *((rbp - 0x78));
            eax = *(rax);
            if (al <= 0x7e) {
                eax = *((rbp - 0x18));
                rax = (int64_t) eax;
                rax += *((rbp - 0x78));
                eax = *(rax);
            }
        } else {
            eax = 0x2e;
        }
        rdx = (int64_t) edx;
        *((rbp + rdx - 0x70)) = al;
        *((rbp - 0x18))++;
        eax = *((rbp - 0x18));
    }
    while (*((rbp - 0x18)) <= 0xf) {
        eax = *((rbp - 0x14));
        edx = *((rbp - 0x18));
        eax = rdx + rax;
        rax = (int64_t) eax;
        *((rbp + rax - 0x70)) = 0x20;
        *((rbp - 0x18))++;
    }
    ecx = 0x400b92;
    eax = *((rbp - 0x14));
    rdx = (int64_t) eax;
    eax = *((rbp - 0x18));
    rax = (int64_t) eax;
    rdx += rax;
    rax = rbp - 0x70;
    rax += rdx;
    memcpy (rax, rcx, 2);
    rax = rbp - 0x70;
    puts (rax);
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400a90 */
#include <stdint.h>
 
uint64_t libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    *((rsp - 0x28)) = rbp;
    *((rsp - 0x20)) = r12;
    rbp = loc___init_array_end;
    r12 = loc___init_array_end;
    *((rsp - 0x18)) = r13;
    *((rsp - 0x10)) = r14;
    *((rsp - 8)) = r15;
    *((rsp - 0x30)) = rbx;
    rbp -= r12;
    r13d = edi;
    r14 = rsi;
    rbp >>= 3;
    r15 = rdx;
    rax = _init ();
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r15;
        rsi = r14;
        edi = r13d;
        uint64_t (*r12 + rbx*8)() ();
        rbx++;
    } while (rbx < rbp);
label_0:
    rbx = *((rsp + 8));
    rbp = *((rsp + 0x10));
    r12 = *((rsp + 0x18));
    r13 = *((rsp + 0x20));
    r14 = *((rsp + 0x28));
    r15 = *((rsp + 0x30));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400a34 */
#include <stdint.h>
 
int64_t dbg_main (char ** argv, signed int64_t argc) {
    char ** var_20h;
    signed int64_t var_14h;
    int32_t i;
    int32_t errs;
    rsi = argv;
    rdi = argc;
    /* int main(int argc,char ** argv); */
    *((rbp - 0x14)) = edi;
    *((rbp - 0x20)) = rsi;
    *((rbp - 4)) = 0;
    *((rbp - 8)) = 1;
    while (eax < *((rbp - 0x14))) {
        eax = *((rbp - 8));
        rax = (int64_t) eax;
        rax <<= 3;
        rax += *((rbp - 0x20));
        rax = *(rax);
        eax = hexdump (*(rax));
        *((rbp - 4)) += eax;
        *((rbp - 8))++;
        eax = *((rbp - 8));
    }
    eax = *((rbp - 4));
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x4005d8 */
#include <stdint.h>
 
void init (void) {
    /* [12] -r-x section size 24 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400600 */
#include <stdint.h>
 
void puts (void) {
    puts ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400610 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400630 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400640 */
#include <stdint.h>
 
void xstat (void) {
    xstat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400650 */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400660 */
#include <stdint.h>
 
void strcat (void) {
    strcat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400670 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400680 */
#include <stdint.h>
 
void fread (void) {
    fread ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x400690 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_rec/hd2/x64_elf_from_rec_gcc4g/subject.exe @ 0x4006a0 */
#include <stdint.h>
 
void perror (void) {
    perror ();
}
