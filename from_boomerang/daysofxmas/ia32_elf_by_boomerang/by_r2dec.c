/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe @ 0x80482a0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [12] -r-x section size 592 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (main, esi, ecx, sym._init, sym._fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe @ 0x8048280 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe @ 0x80482c4 */
#include <stdint.h>
 
int32_t call_gmon_start (void) {
    int32_t var_4h;
    void (*0x80482ce)(uint32_t, uint32_t) (eax, ebx);
    ebx += 0x153a;
    eax = *((ebx + 0x14));
    if (eax != 0) {
        void (*eax)() ();
    }
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe @ 0x80482e8 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.1) != 0) {
        goto label_0;
    }
    eax = *(obj.p.0);
    edx = *(eax);
    if (edx == 0) {
        goto label_1;
    }
    do {
        eax += 4;
        *(obj.p.0) = eax;
        void (*edx)() ();
        eax = *(obj.p.0);
        edx = *(eax);
    } while (edx != 0);
label_1:
    *(obj.completed.1) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe @ 0x8048324 */
#include <stdint.h>
 
int32_t frame_dummy (void) {
    eax = *(obj.__JCR_LIST__);
    if (eax != 0) {
        eax = 0;
        if (eax == 0) {
            goto label_0;
        }
        _comment (obj.__JCR_LIST__);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe @ 0x80484cc */
#include <stdint.h>
 
void do_global_ctors_aux (void) {
    eax = .ctors;
    ebx = .ctors;
    if (eax == -1) {
        goto label_0;
    }
    do {
        ebx -= 4;
        void (*eax)() ();
        eax = *(ebx);
    } while (eax != -1);
label_0:
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe @ 0x8048258 */
#include <stdint.h>
 
void init (void) {
    /* [10] -r-x section size 24 named .init */
    call_gmon_start ();
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe @ 0x8048350 */
#include <stdint.h>
 
int32_t main (char ** argv, char ** envp, char ** envp) {
    int32_t var_ch;
    do {
label_0:
        ebx = *((ebp + 8));
        edi = *((ebp + 0xc));
        esi = *((ebp + 0x10));
        if (ebx <= 1) {
            goto label_6;
        }
        if (ebx <= 2) {
            goto label_7;
        }
label_3:
        if (ebx < edi) {
            goto label_8;
        }
label_2:
        eax = main (0xffffffffffffffa2, ebx - 0x1b, esi);
    } while (1);
    if (eax != 0) {
        if (ebx == 2) {
            goto label_9;
        }
    }
    ebx = 0x10;
    do {
label_1:
        esp = ebp - 0xc;
        eax = ebx;
        return eax;
label_9:
        if (edi <= 0xc) {
            goto label_10;
        }
        ebx = 9;
    } while (1);
label_10:
    do {
label_4:
        eax = main (2, edi + 1, "%s %d %d\n");
        goto label_0;
label_5:
        ebx = eax;
        goto label_1;
label_8:
        eax = main (ebx + 1, edi, esi);
        goto label_0;
        goto label_2;
label_7:
        main (0xffffffffffffffaa, 0, esi + 1);
        goto label_0;
        eax = eax + esi;
        eax = 1;
        eax -= edi;
        main (0xffffffffffffffa9, eax, eax);
        goto label_0;
        eax = eax + esi;
        eax = main (0xffffffffffffffb1, 0xfffffffffffffff3, eax);
        goto label_0;
        goto label_3;
label_6:
        if (ebx < 0) {
            goto label_11;
        }
        if (ebx <= 0) {
            goto label_12;
        }
    } while (1);
label_12:
    dl = *(esi);
    ebx = 0;
    if (dl == 0x2f) {
        goto label_13;
    }
    eax = esi + 1;
    eax = (int32_t) dl;
    eax = main (0xffffffffffffffc3, eax, "!ek;dc i@bK'(q)-[w]*%n+r3#l,{}:\nuwloca-O;m .vpbks,fxntdCeghiry");
    goto label_0;
    eax = main (0, eax);
    goto label_0;
    if (eax == 0) {
        goto label_1;
    }
label_13:
    ebx = 1;
    goto label_1;
label_11:
    if (ebx < 0xffffffb8) {
        goto label_14;
    }
    if (ebx < 0xffffffce) {
        eax = *(esi);
        if (edi != eax) {
            main (0xffffffffffffffbf, edi, esi + 1);
            goto label_4;
        }
        eax = *((esi + 0x1f));
        IO_putc ();
        goto label_5;
    }
    eax = esi + 1;
    eax = ebx;
    while (1) {
        main (eax);
        goto label_4;
        eax = ebx + 1;
    }
label_14:
    main (edi, ebx, "@n'+,#'/*{}w+/w#cdnr/+,{}r/*de}+,/*{*+,/w{%+,/w#q#n+,/#{l,+,/n{n+,/+#n+,/#;#q#n+,/+k#;*+,/'r :'d*'3,}{w+K w'K:'+}e#';dq#'l q#'+d'K#!/+k#;q#'r}eKK#}w'r}eKK{nl]'/#;#q#n'){)#}w'){){nl]'/+#n';d}rw' i;# ){nl]!/n{n#'; r{#w'r nc{nl]'/#{l,+'K {rw' iK{;[{nl]'/w#q#n'wk nw' iwk{KK{nl]!/w{%'l##w#' i; :{nl]'/*{q#'ld;r'}{nlwb!/*de}'c ;;{nl'-{}rw]'/+,}##'*}#nc,',#nw]'/+kd'+e}+;#'rdq#w! nr'/ ') }+}{rl#'{n' ')# }'+}##(!!/");
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe @ 0x80484f0 */
#include <stdint.h>
 
void fini (void) {
    int32_t var_4h;
    /* [13] -r-x section size 28 named .fini */
    void (*0x80484fa)(uint32_t, uint32_t) (edx, ebx);
    ebx += 0x130e;
    _do_global_dtors_aux ();
    ebx = *((ebp - 4));
}
/* r2dec pseudo code output */
/* SUBJECTS/from_boomerang/daysofxmas/ia32_elf_by_boomerang/subject.exe @ 0x8048290 */
#include <stdint.h>
 
void IO_putc (void) {
    IO_putc ();
}
