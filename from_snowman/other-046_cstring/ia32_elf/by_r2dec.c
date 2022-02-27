/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x8048330 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 482 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x8048310 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x8048370 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = 0x804973b;
    eax -= obj.completed.6007;
    while (eax == 0) {
        return eax;
        eax = 0;
    }
    void (*eax)(uint32_t) (obj.completed.6007);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x80483a0 */
#include <stdint.h>
 
int32_t register_tm_clones (void) {
    int32_t var_4h;
    eax = obj.completed.6007;
    eax -= obj.completed.6007;
    eax >>= 2;
    edx = eax;
    edx >>= 0x1f;
    eax += edx;
    eax >>= 1;
    while (edx == 0) {
        return eax;
        edx = 0;
    }
    void (*edx)(uint32_t, uint32_t) (obj.completed.6007, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x80483e0 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.6007) == 0) {
        deregister_tm_clones ();
        *(obj.completed.6007) = 1;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x8048400 */
#include <stdint.h>
 
int32_t entry_init0 (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        void (*eax)(uint32_t) (obj.__JCR_LIST__);
        void (*0x80483a0)() ();
    }
label_0:
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x8048510 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x8048360 */
#include <stdint.h>
 
void x86_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x8048514 */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 20 named .fini */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x11f7;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x80484a0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_30h, int32_t arg_34h, int32_t arg_38h) {
    int32_t var_4h;
    int32_t var_8h;
    edi = 0;
    _x86_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x1269;
    ebp = *((esp + 0x30));
    esi = ebx - 0xf4;
    _init ();
    eax = ebx - 0xf8;
    esi -= eax;
    esi >>= 2;
    if (esi == 0) {
        goto label_0;
    }
    do {
        eax = *((esp + 0x38));
        eax = *((esp + 0x34));
        uint32_t (*ebx + edi*4 - 0xf8)(uint32_t, uint32_t, uint32_t) (ebp, eax, eax);
        edi++;
    } while (edi != esi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x804842d */
#include <stdint.h>
 
int32_t main (void) {
    size_t var_14h;
    char * s;
    int32_t var_1ch;
    *((esp + 0x18)) = "Hello, World!";
    eax = *((esp + 0x18));
    eax = strlen (eax);
    *((esp + 0x14)) = eax;
    *((esp + 0x1c)) = 0;
    while (eax < *((esp + 0x14))) {
        edx = *((esp + 0x1c));
        eax = *((esp + 0x18));
        eax += edx;
        eax = *(eax);
        eax = (int32_t) al;
        putchar (eax);
        eax = *((esp + 0x1c));
    }
    putchar (0xa);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x80482b4 */
#include <stdint.h>
 
int32_t init (void) {
    /* [11] -r-x section size 35 named .init */
    _x86_get_pc_thunk_bx (ebx);
    ebx += 0x1457;
    eax = *((ebx - 4));
    if (eax != 0) {
        loc_imp_gmon_start_ ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x80482f0 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x8048300 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x8048320 */
#include <stdint.h>
 
void putchar (void) {
    putchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_snowman/other-046_cstring/ia32_elf/subject.exe @ 0x8048192 */
#include <stdint.h>
 
int32_t fcn_08048192 (int32_t arg_20d4fe15h) {
    do {
        al += 0;
        *(eax) += al;
        eax += *(eax);
        *(eax) += al;
        edi++;
        esi--;
        *(eax) += al;
        tmp_0 = edi + 0x42;
        edi + 0x42 = ch;
        ch = tmp_0;
        __asm ("cmc");
        *((ebx - 0x55)) = edx;
        eax = fcn_08048192 (esi);
        /* [04] -r-- section size 32 named .gnu.hash */
        al += *(eax);
        *(eax) += al;
        eax += 0x1000000;
        *(eax) += al;
        *(eax) += eax;
        *(eax) += al;
        eax += 0;
        *(eax) &= al;
        *(eax) &= al;
        *(eax) += al;
        *(0xad000000) += al;
        ebx--;
        __asm ("jecxz 0x804816c");
    } while (1);
    /* [05] -r-- section size 96 named .dynsym */
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) &= al;
    *(eax) += al;
    al &= *(eax);
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    al += *(eax);
    *(eax) += al;
    *(eax) -= eax;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    al += *(eax);
    *(eax) += al;
    al -= *(eax);
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    al += *(eax);
    *(eax) += al;
    eax |= *(eax);
    *(eax) += al;
    al -= 0x85;
    al += 8;
    al += 0;
    *(eax) += al;
    *(eax) += eax;
    __asm ("sldt word [eax]");
    /* [06] -r-- section size 84 named .dynstr */
    *((ecx + ebp*2 + 0x62)) += ch;
    __asm ("arpl word [esi], bp");
    if (*((ecx + ebp*2 + 0x62)) >= 0) {
        void (*0x8048283)() ();
    }
    *((ss:edi + 0x49)) += bl;
    edi--;
    if (edi >= 0) {
        goto label_0;
    }
    ebp = *((fs:esi + 0x5f)) * 0x64657375;
    *((eax + 0x75)) += dh;
    if (*((eax + 0x75)) == 0) {
        goto label_1;
    }
    if (*((eax + 0x75)) == 0) {
        goto label_2;
    }
    __asm ("insb byte es:[edi], dx");
    __asm ("outsb dx, byte gs:[esi]");
    *((edi + 0x5f)) += bl;
    __asm ("insb byte es:[edi], dx");
    esp = *((edx + 0x63)) * 0x6174735f;
    if (*((edi + 0x5f)) < 0) {
        goto label_3;
    }
    __asm ("insd dword es:[edi], dx");
    __asm ("popal");
    ebp = *(esi) * 0x6d675f5f;
    __asm ("outsd dx, dword [esi]");
    __asm ("outsb dx, byte [esi]");
    if (*((edi + 0x5f)) >= 0) {
        goto label_4;
    }
    __asm ("popal");
    if (*((edi + 0x5f)) < 0) {
        void (*0x80482c7)() ();
    }
    *((edi + 0x4c)) += al;
    ecx--;
    edx++;
    ebx++;
    ch ^= *(esi);
    *(eax) ^= al;
    /* [07] -r-- section size 12 named .gnu.version */
    *(eax) += al;
    *(eax) += al;
    al += *(eax);
    al += *(eax);
    al += *(eax);
    *(eax) += eax;
    /* [08] -r-- section size 32 named .gnu.version_r */
    *(eax) += eax;
    *(eax) += eax;
    *(eax) += eax;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *((ecx + 0x69)) += ch;
    eax |= 0x20000;
    edx--;
    *(eax) += al;
    *(eax) += al;
    *(eax) += al;
    *(eax) += dl;
label_1:
    tmp_1 = eax;
    eax = edi;
    edi = tmp_1;
    al += 8;
label_0:
    *(eax) += eax;
    *(eax) += ah;
    /* [10] -r-- section size 32 named .rel.plt */
    *((edi + 0x1070804)) &= dl;
    *(eax) += al;
    al &= 0x97;
    al += 8;
    al += *(eax);
label_2:
    *(eax) += ch;
    tmp_2 = eax;
    eax = edi;
    edi = tmp_2;
    al += 8;
    eax += *(eax);
    *((edi + edx*4)) += ch;
    al += 8;
    al += 0;
    *((ebx - 0x7d)) += dl;
    /* [11] -r-x section size 35 named .init */
label_3:
    _x86_get_pc_thunk_bx (ebx, es);
    return eax;
label_4:
}
