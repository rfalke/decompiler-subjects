/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x4018b0 */
#include <stdint.h>
 
void entry0 (int64_t arg3) {
    rdx = arg3;
    ebp = 0;
    r9 = rdx;
    rdx = rsp;
    r8 = __libc_csu_fini;
    rcx = sym.__libc_csu_init;
    rdi = .text;
    uint64_t (*.got)(uint64_t, uint64_t) (rsp, rax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x4018f0 */
#include <stdint.h>
 
int32_t deregister_tm_clones (void) {
    eax = .bss;
    if (rax != obj.completed.0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = .bss;
        void (*rax)() ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x401920 */
#include <stdint.h>
 
int64_t register_tm_clones (void) {
    esi = .bss;
    rsi -= obj.completed.0;
    rax = rsi;
    rsi >>= 0x3f;
    rax >>= 3;
    rsi += rax;
    rsi >>= 1;
    if (rsi != 0) {
        eax = 0;
        if (rax == 0) {
            goto label_0;
        }
        edi = .bss;
        void (*rax)() ();
    }
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x401960 */
#include <stdint.h>
 
void do_global_dtors_aux (void) {
    if (*(obj.completed.0) == 0) {
        deregister_tm_clones ();
        *(obj.completed.0) = 1;
        return;
    }
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x401990 */
#include <stdint.h>
 
void entry_init0 (void) {
    return register_tm_clones ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x401a10 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x401a18 */
#include <stdint.h>
 
void fini (void) {
    /* [15] -r-x section size 13 named .fini */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x4019a0 */
#include <stdint.h>
 
uint64_t libc_csu_init (int64_t arg3, int64_t arg2, int64_t arg1) {
    rdx = arg3;
    rsi = arg2;
    rdi = arg1;
    r15 = obj___frame_dummy_init_array_entry;
    r14 = rdx;
    r13 = rsi;
    r12d = edi;
    rbp = obj___do_global_dtors_aux_fini_array_entry;
    rbp -= r15;
    rax = _init ();
    rbp >>= 3;
    if (rbp == 0) {
        goto label_0;
    }
    ebx = 0;
    do {
        rdx = r14;
        rsi = r13;
        edi = r12d;
        uint64_t (*r15 + rbx*8)() ();
        rbx++;
    } while (rbp != rbx);
label_0:
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x4018e0 */
#include <stdint.h>
 
void loc_annobin_lto_1 (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x401060 */
#include <stdint.h>
 
int32_t main (void) {
    int64_t var_8h;
    int64_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint32_t var_c8h_2;
    int64_t var_70h;
    int64_t var_78h;
    int64_t var_80h;
    int64_t var_88h;
    int64_t var_90h;
    int64_t var_98h;
    int64_t var_a0h;
    int64_t var_a8h;
    int64_t var_b0h;
    int64_t var_b8h;
    int64_t var_c0h;
    uint64_t var_c8h;
    /* [14] -r-x section size 2485 named .text */
    r14d = buf;
    r15d = 1;
    r13d = 0x40407e;
    ebp = 0;
    *((rsp + 0x70)) = 0x41509b;
    *((rsp + 0x50)) = obj.buf;
    *((rsp + 0x58)) = obj.buf;
    *((rsp + 0x60)) = r14;
    *((rsp + 8)) = r14;
    *((rsp + 0x10)) = r14;
    *((rsp + 0x18)) = r14;
    *((rsp + 0x20)) = r14;
    *((rsp + 0x28)) = r14;
    *((rsp + 0x30)) = r14;
    *((rsp + 0x38)) = r14;
    *((rsp + 0x40)) = r14;
    *((rsp + 0x48)) = r14;
    *((rsp + 0xc8)) = 1;
label_17:
    rbx = *((rsp + 0xc8));
    rdx = rbx + 2;
    rax = rbx + 1;
    r9 = rbx;
    r8 = rbx;
    rcx = rbx;
    eax = 0;
    eax = sprintf (obj.buf, "Buzz\n%llu1\nFizz\n%llu3\n%llu4\nFizzBuzz\n%llu6\n%llu7\nFizz\n%llu9\nBuzz\nFizz\n%llu2\n%llu3\nFizz\nBuzz\n%llu6\nFizz\n%llu8\n%llu9\nFizzBuzz\n%llu1\n%llu2\nFizz\n%llu4\nBuzz\nFizz\n%llu7\n%llu8\nFizz\n", rbx);
    rdx = rbx * 5;
    rbx = rdx + rdx;
    *((rsp + 0xc8)) = rbx;
    *((rsp + 0x128)) = rbx;
    if (rbx <= r15) {
        goto label_20;
    }
    rcx = *((rsp + 8));
    rsi = *((rsp + 0x10));
    r12 = (int64_t) eax;
    rdi = *((rsp + 0x28));
    rbx = *((rsp + 0x30));
    rcx += 0x33;
    *((rsp + 0x78)) = rcx;
    rcx = rbp*8 + 0x4150b6;
    *((rsp + 0x80)) = rcx;
    rcx = rsi + 0x43;
    rsi = *((rsp + 0x18));
    *((rsp + 0x88)) = rcx;
    rcx = rsi + 0x4b;
    rsi = *((rsp + 0x20));
    *((rsp + 0x90)) = rcx;
    rcx = rsi + 0x4e;
    rsi = rbx + 0x5d;
    rbx = *((rsp + 0x40));
    *((rsp + 0x98)) = rcx;
    rcx = rdi + 0x5a;
    rdi = *((rsp + 0x38));
    *((rsp + 0xa8)) = rsi;
    *((rsp + 0xa0)) = rcx;
    rsi = rbx + 0x72;
    rcx = rdi + 0x65;
    rdi = *((rsp + 0x48));
    *((rsp + 0xb8)) = rsi;
    *((rsp + 0xb0)) = rcx;
    rcx = rdi + 0x75;
    *((rsp + 0xc0)) = rcx;
    while (r13 < 0x414060) {
        edx = *((rbp + 0x415085));
        if (dl > 0x36) {
            goto label_21;
        }
label_0:
        rax = *((rsp + 0x50));
        edx += 3;
        *((rbp + 0x415085)) = dl;
        edx = *((rax + 0xd));
        if (dl > 0x36) {
            goto label_22;
        }
label_1:
        edx += 3;
        *((rax + 0xd)) = dl;
        rax = *((rsp + 0x58));
        edx = *((rax + 0x10));
        if (dl > 0x36) {
            goto label_23;
        }
label_2:
        edx += 3;
        *((rax + 0x10)) = dl;
        edx = *((rbp*4 + 0x41509c));
        if (dl > 0x36) {
            goto label_24;
        }
label_3:
        edx += 3;
        *((rbp*4 + 0x41509c)) = dl;
        edx = *((r14 + 0x1f));
        if (dl > 0x36) {
            goto label_25;
        }
label_4:
        rax = *((rsp + 0x60));
        edx += 3;
        *((r14 + 0x1f)) = dl;
        edx = *((rax + 0x27));
        if (dl > 0x36) {
            goto label_26;
        }
label_5:
        rcx = *((rsp + 8));
        edx += 3;
        *((rax + 0x27)) = dl;
        eax = *((rcx + 0x34));
        if (al > 0x36) {
            goto label_27;
        }
label_6:
        eax += 3;
        *((rcx + 0x34)) = al;
        eax = *((rbp*8 + 0x4150b7));
        if (al > 0x36) {
            goto label_28;
        }
label_7:
        rsi = *((rsp + 0x10));
        eax += 3;
        *((rbp*8 + 0x4150b7)) = al;
        eax = *((rsi + 0x44));
        if (al > 0x36) {
            goto label_29;
        }
label_8:
        rdi = *((rsp + 0x18));
        eax += 3;
        *((rsi + 0x44)) = al;
        eax = *((rdi + 0x4c));
        if (al > 0x36) {
            goto label_30;
        }
label_9:
        rcx = *((rsp + 0x20));
        eax += 3;
        *((rdi + 0x4c)) = al;
        eax = *((rcx + 0x4f));
        if (al > 0x36) {
            goto label_31;
        }
label_10:
        rbx = *((rsp + 0x28));
        eax += 3;
        *((rcx + 0x4f)) = al;
        eax = *((rbx + 0x5b));
        if (al > 0x36) {
            goto label_32;
        }
label_11:
        rsi = *((rsp + 0x30));
        eax += 3;
        *((rbx + 0x5b)) = al;
        eax = *((rsi + 0x5e));
        if (al > 0x36) {
            goto label_33;
        }
label_12:
        rdi = *((rsp + 0x38));
        eax += 3;
        *((rsi + 0x5e)) = al;
        eax = *((rdi + 0x66));
        if (al > 0x36) {
            goto label_34;
        }
label_13:
        rcx = *((rsp + 0x40));
        eax += 3;
        *((rdi + 0x66)) = al;
        eax = *((rcx + 0x73));
        if (al > 0x36) {
            goto label_35;
        }
label_14:
        rbx = *((rsp + 0x48));
        eax += 3;
        *((rcx + 0x73)) = al;
        eax = *((rbx + 0x76));
        if (al > 0x36) {
            goto label_36;
        }
label_15:
        eax += 3;
        r15 += 3;
        *((rbx + 0x76)) = al;
        if (*((rsp + 0x68)) <= r15) {
            goto label_20;
        }
label_16:
        r13 += r12;
        memcpy (r13, obj.buf, r12);
    }
    ebx = "1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n";
    do {
label_18:
        rdx -= rbx;
        eax = write (1, rbx, 0x414060);
        if (eax <= 0) {
            goto label_37;
        }
        rax = (int64_t) eax;
        rbx += rax;
    } while (rbx < 0x414060);
label_19:
    r13 -= 0x10000;
    rdx -= 0x414060;
    memcpy ("1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\n", 0x414060, r13);
    edx = *((rbp + 0x415085));
    if (dl <= 0x36) {
        goto label_0;
    }
label_21:
    edx -= 7;
    rax = rbp + 0x415084;
    *((rbp + 0x415085)) = dl;
    edx = *((rbp + 0x415084));
    if (dl != 0x39) {
        goto label_38;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_38:
    edx++;
    *(rax) = dl;
    rax = *((rsp + 0x50));
    edx = *((rax + 0xd));
    if (dl <= 0x36) {
        goto label_1;
    }
label_22:
    rsi = rax;
    edx -= 7;
    rax = rax + 0xc;
    *((rsi + 0xd)) = dl;
    edx = *((rsi + 0xc));
    if (dl != 0x39) {
        goto label_39;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_39:
    edx++;
    *(rax) = dl;
    rax = *((rsp + 0x58));
    edx = *((rax + 0x10));
    if (dl <= 0x36) {
        goto label_2;
    }
label_23:
    rdi = rax;
    edx -= 7;
    rax = rax + 0xf;
    *((rdi + 0x10)) = dl;
    edx = *((rdi + 0xf));
    if (dl != 0x39) {
        goto label_40;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_40:
    edx++;
    *(rax) = dl;
    edx = *((rbp*4 + 0x41509c));
    if (dl <= 0x36) {
        goto label_3;
    }
label_24:
    rsi = *((rsp + 0x70));
    edx -= 7;
    *((rbp*4 + 0x41509c)) = dl;
    edx = *(rsi);
    rax = rsi;
    if (dl != 0x39) {
        goto label_41;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_41:
    edx++;
    *(rax) = dl;
    edx = *((r14 + 0x1f));
    if (dl <= 0x36) {
        goto label_4;
    }
label_25:
    edx -= 7;
    rax = r14 + 0x1e;
    *((r14 + 0x1f)) = dl;
    edx = *((r14 + 0x1e));
    if (dl != 0x39) {
        goto label_42;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_42:
    edx++;
    *(rax) = dl;
    rax = *((rsp + 0x60));
    edx = *((rax + 0x27));
    if (dl <= 0x36) {
        goto label_5;
    }
label_26:
    rcx = rax;
    edx -= 7;
    rax = rax + 0x26;
    *((rcx + 0x27)) = dl;
    edx = *((rcx + 0x26));
    if (dl != 0x39) {
        goto label_43;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_43:
    rcx = *((rsp + 8));
    edx++;
    *(rax) = dl;
    eax = *((rcx + 0x34));
    if (al <= 0x36) {
        goto label_6;
    }
label_27:
    edx = *((rcx + 0x33));
    eax -= 7;
    *((rcx + 0x34)) = al;
    rax = *((rsp + 0x78));
    if (dl != 0x39) {
        goto label_44;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_44:
    edx++;
    *(rax) = dl;
    eax = *((rbp*8 + 0x4150b7));
    if (al <= 0x36) {
        goto label_7;
    }
label_28:
    edx = *((rbp*8 + 0x4150b6));
    eax -= 7;
    *((rbp*8 + 0x4150b7)) = al;
    rax = *((rsp + 0x80));
    if (dl != 0x39) {
        goto label_45;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_45:
    rsi = *((rsp + 0x10));
    edx++;
    *(rax) = dl;
    eax = *((rsi + 0x44));
    if (al <= 0x36) {
        goto label_8;
    }
label_29:
    edx = *((rsi + 0x43));
    eax -= 7;
    *((rsi + 0x44)) = al;
    rax = *((rsp + 0x88));
    if (dl != 0x39) {
        goto label_46;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_46:
    rdi = *((rsp + 0x18));
    edx++;
    *(rax) = dl;
    eax = *((rdi + 0x4c));
    if (al <= 0x36) {
        goto label_9;
    }
label_30:
    edx = *((rdi + 0x4b));
    eax -= 7;
    *((rdi + 0x4c)) = al;
    rax = *((rsp + 0x90));
    if (dl != 0x39) {
        goto label_47;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_47:
    rcx = *((rsp + 0x20));
    edx++;
    *(rax) = dl;
    eax = *((rcx + 0x4f));
    if (al <= 0x36) {
        goto label_10;
    }
label_31:
    edx = *((rcx + 0x4e));
    eax -= 7;
    *((rcx + 0x4f)) = al;
    rax = *((rsp + 0x98));
    if (dl != 0x39) {
        goto label_48;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_48:
    rbx = *((rsp + 0x28));
    edx++;
    *(rax) = dl;
    eax = *((rbx + 0x5b));
    if (al <= 0x36) {
        goto label_11;
    }
label_32:
    edx = *((rbx + 0x5a));
    eax -= 7;
    *((rbx + 0x5b)) = al;
    rax = *((rsp + 0xa0));
    if (dl != 0x39) {
        goto label_49;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_49:
    rsi = *((rsp + 0x30));
    edx++;
    *(rax) = dl;
    eax = *((rsi + 0x5e));
    if (al <= 0x36) {
        goto label_12;
    }
label_33:
    edx = *((rsi + 0x5d));
    eax -= 7;
    *((rsi + 0x5e)) = al;
    rax = *((rsp + 0xa8));
    if (dl != 0x39) {
        goto label_50;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_50:
    rdi = *((rsp + 0x38));
    edx++;
    *(rax) = dl;
    eax = *((rdi + 0x66));
    if (al <= 0x36) {
        goto label_13;
    }
label_34:
    edx = *((rdi + 0x65));
    eax -= 7;
    *((rdi + 0x66)) = al;
    rax = *((rsp + 0xb0));
    if (dl != 0x39) {
        goto label_51;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_51:
    rcx = *((rsp + 0x40));
    edx++;
    *(rax) = dl;
    eax = *((rcx + 0x73));
    if (al <= 0x36) {
        goto label_14;
    }
label_35:
    edx = *((rcx + 0x72));
    eax -= 7;
    *((rcx + 0x73)) = al;
    rax = *((rsp + 0xb8));
    if (dl != 0x39) {
        goto label_52;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_52:
    rbx = *((rsp + 0x48));
    edx++;
    *(rax) = dl;
    eax = *((rbx + 0x76));
    if (al <= 0x36) {
        goto label_15;
    }
label_36:
    edx = *((rbx + 0x75));
    eax -= 7;
    *((rbx + 0x76)) = al;
    rax = *((rsp + 0xc0));
    if (dl != 0x39) {
        goto label_53;
    }
    do {
        edx = *((rax - 1));
        rax--;
        *((rax + 1)) = 0x30;
    } while (dl == 0x39);
label_53:
    edx++;
    r15 += 3;
    *(rax) = dl;
    if (*((rsp + 0x68)) > r15) {
        goto label_16;
    }
label_20:
    rbp++;
    r14 += 5;
    if (rbp != 0x13) {
        goto label_17;
    }
    eax = 0;
    return rax;
label_37:
    if (rbx < 0x414060) {
        goto label_18;
    }
    goto label_19;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x401000 */
#include <stdint.h>
 
int64_t init (void) {
    /* [12] -r-x section size 27 named .init */
    rax = *(reloc.__gmon_start__);
    if (rax != 0) {
        void (*rax)() ();
    }
    return rax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x401030 */
#include <stdint.h>
 
void write (void) {
    write ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x401040 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_internet/fizzbuzz/answer_from_kamila-szewczyk/x64_elf/subject.exe @ 0x401050 */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}
