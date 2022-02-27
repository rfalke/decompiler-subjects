/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049ad0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 84444 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804965c */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049b00 */
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
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049b60 */
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
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e480 */
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
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049b84 */
#include <stdint.h>
 
int32_t dbg_dev_ino_pop (void * s1) {
    int32_t var_ch;
    obstack * __o;
    int32_t __len;
    char * file;
    size_t line;
    char * function;
    /* dev_ino dev_ino_pop(); */
    *((ebp - 0xc)) = 0x8064620;
    eax = *((ebp - 0xc));
    eax = *((eax + 0xc));
    edx = *((eax + 0xc));
    eax = *((ebp - 0xc));
    eax = *((eax + 8));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    if (eax <= 0xf) {
        assert_fail ("dev_ino_pop", "ls.c", 0x396);
    }
    *((ebp - 8)) = obj.dev_ino_obstack;
    *((ebp - 4)) = 0xfffffff0;
    eax = *((ebp - 8));
    eax = *((eax + 0x10));
    edx = *((eax + 0x10));
    eax = *((ebp - 8));
    eax = *((eax + 0xc));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    if (eax < *((ebp - 4))) {
        eax = *((ebp - 4));
        *((esp + 4)) = eax;
        eax = *((ebp - 8));
        *(esp) = eax;
        obstack_newchunk ();
    }
    eax = *((ebp - 8));
    edx = *((eax + 0xc));
    eax = *((ebp - 4));
    edx += eax;
    eax = *((ebp - 8));
    *((eax + 0xc)) = edx;
    eax = .comment;
    eax = *((ebp + 8));
    memmove (eax, eax, 0x10);
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80496bc */
#include <stdint.h>
 
void assert_fail (void) {
    assert_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804973c */
#include <stdint.h>
 
void obstack_newchunk (void) {
    obstack_newchunk ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80499bc */
#include <stdint.h>
 
void memmove (void) {
    memmove ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049c3b */
#include <stdint.h>
 
int32_t dbg_dired_dump_obstack (void) {
    size_t n_pos;
    obstack const * __o;
    size_t i;
    size_t * pos;
    obstack * __o1;
    void * __value;
    char const * prefix;
    obstack * os;
    int32_t var_4h;
    /* void dired_dump_obstack(char const * prefix,obstack * os); */
    eax = *((ebp + 0xc));
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0x18));
    eax = *((eax + 0xc));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x18));
    eax = *((eax + 8));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    eax >>= 2;
    *((ebp - 0x1c)) = eax;
    if (*((ebp - 0x1c)) == 0) {
        goto label_0;
    }
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    eax = *((eax + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp - 0xc));
    eax = *((eax + 0xc));
    if (eax == *((ebp - 8))) {
        eax = *((ebp - 0xc));
        edx = *((eax + 0x28));
        edx |= 2;
        *((eax + 0x28)) = dl;
    }
    eax = *((ebp - 0xc));
    edx = *((eax + 0xc));
    eax = *((ebp - 0xc));
    eax = *((eax + 0x18));
    eax = edx + eax;
    edx = eax;
    eax = *((ebp - 0xc));
    eax = *((eax + 0x18));
    eax = ~eax;
    eax &= edx;
    edx = eax;
    eax = *((ebp - 0xc));
    *((eax + 0xc)) = edx;
    eax = *((ebp - 0xc));
    eax = *((eax + 0xc));
    edx = *((eax + 0xc));
    eax = *((ebp - 0xc));
    eax = *((eax + 4));
    ecx = edx;
    ecx -= eax;
    eax = *((ebp - 0xc));
    eax = *((eax + 0x10));
    edx = *((eax + 0x10));
    eax = *((ebp - 0xc));
    eax = *((eax + 4));
    ebx = edx;
    ebx -= eax;
    eax = ebx;
    if (ecx > eax) {
        eax = *((ebp - 0xc));
        edx = *((eax + 0x10));
        eax = *((ebp - 0xc));
        *((eax + 0xc)) = edx;
    }
    eax = *((ebp - 0xc));
    edx = *((eax + 0xc));
    eax = *((ebp - 0xc));
    *((eax + 8)) = edx;
    eax = *((ebp - 8));
    *((ebp - 0x10)) = eax;
    eax = stdout;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    fputs_unlocked ();
    *((ebp - 0x14)) = 0;
    while (eax < *((ebp - 0x1c))) {
        eax = *((ebp - 0x14));
        eax <<= 2;
        eax += *((ebp - 0x10));
        eax = *(eax);
        *((esp + 4)) = eax;
        printf (" %lu");
        *((ebp - 0x14))++;
        eax = *((ebp - 0x14));
    }
    *(esp) = 0xa;
    putchar_unlocked ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049d54 */
#include <stdint.h>
 
int32_t dbg_dev_ino_hash (void) {
    dev_ino const * p;
     const * x;
    size_t table_size;
    int32_t var_4h;
    int32_t var_sp_8h;
    int32_t var_ch;
    /* size_t dev_ino_hash( const * x,size_t table_size); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp - 8));
    ecx = *(eax);
    ebx = *((eax + 4));
    eax = *((ebp + 0xc));
    edx = 0;
    _umoddi3 (ebx, ebx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e1c0 */
#include <stdint.h>
 
int32_t umoddi3 (char * arg_8h, char * arg_ch, char * arg_10h, int32_t arg_14h) {
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    eax = *((ebp + 0x10));
    ecx = *((ebp + 8));
    esi = *((ebp + 0xc));
    edi = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x18)) = ecx;
    *((ebp - 0x14)) = ecx;
    if (eax != 0) {
        goto label_5;
    }
    if (edi <= esi) {
        goto label_6;
    }
    eax = ecx;
    edx = esi;
    eax = edx:eax / edi;
    edx = edx:eax % edi;
    do {
        eax = edx;
        edx = 0;
        return eax;
label_5:
        if (eax <= esi) {
            goto label_7;
        }
        eax = ecx;
        edx = esi;
label_0:
        return eax;
label_6:
        if (edi == 0) {
            eax = 1;
            edx = 0;
            eax = edx:eax / edi;
            edx = edx:eax % edi;
            edi = eax;
        }
        eax = esi;
        edx = 0;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        eax = *((ebp - 0x14));
        eax = edx:eax / edi;
        edx = edx:eax % edi;
    } while (1);
label_7:
    __asm ("bsr edx, eax");
    edx ^= 0x1f;
    *((ebp - 0x1c)) = edx;
    if (edi == 0) {
        if (eax >= esi) {
            goto label_8;
        }
label_4:
        ecx = *((ebp - 0x14));
        ecx -= edi;
        esi -= eax;
        *((ebp - 0x14)) = ecx;
label_3:
        eax = *((ebp - 0x14));
        edx = esi;
        goto label_0;
    }
    ecx = *((ebp - 0x1c));
    edx = eax;
    eax = 0x20;
    eax -= *((ebp - 0x1c));
    edx <<= cl;
    *((ebp - 0x20)) = eax;
    ecx = *((ebp - 0x20));
    eax = edi;
    eax >>= cl;
    ecx = *((ebp - 0x1c));
    eax |= edx;
    edx = esi;
    *((ebp - 0x10)) = eax;
    eax = esi;
    edi <<= cl;
    ecx = *((ebp - 0x20));
    *((ebp - 0xc)) = edi;
    edi = *((ebp - 0x18));
    eax >>= cl;
    ecx = *((ebp - 0x1c));
    *((ebp - 0x24)) = eax;
    eax = *((ebp - 0x18));
    esi = *((ebp - 0x24));
    edx <<= cl;
    ecx = *((ebp - 0x20));
    eax >>= cl;
    ecx = *((ebp - 0x1c));
    eax |= edx;
    edx = esi;
    eax = *(edx:eax) / ebp - 0x10;
    edx = *(edx:eax) % ebp - 0x10;
    esi = edx;
    edi <<= cl;
    edx:eax = eax * *((ebp - 0xc));
    if (esi >= edx) {
        goto label_9;
    }
label_2:
    eax -= *((ebp - 0xc));
    edx -= *((ebp - 0x10));
    do {
label_1:
        ecx = *((ebp - 0x1c));
        edi -= eax;
        esi -= edx;
        edx = edi;
        eax = esi;
        edx >>= cl;
        ecx = *((ebp - 0x20));
        eax <<= cl;
        ecx = *((ebp - 0x1c));
        eax |= edx;
        edx = esi;
        edx >>= cl;
        goto label_0;
label_9:
    } while (edx != 0);
    if (edi >= eax) {
        goto label_1;
    }
    goto label_2;
label_8:
    if (edi > *((ebp - 0x14))) {
        goto label_3;
    }
    goto label_4;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049d8b */
#include <stdint.h>
 
int32_t dbg_dev_ino_compare (void) {
    int32_t var_1ch;
    dev_ino const * a;
    dev_ino const * b;
     const * x;
     const * y;
    /* _Bool dev_ino_compare( const * x, const * y); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0x10));
    ecx = *(eax);
    ebx = *((eax + 4));
    eax = *((ebp - 0xc));
    edx = *((eax + 4));
    eax = *(eax);
    esi = ebx;
    esi ^= edx;
    eax ^= ecx;
    eax |= esi;
    if (eax == 0) {
        eax = *((ebp - 0x10));
        ecx = *((eax + 8));
        ebx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        edx = *((eax + 0xc));
        eax = *((eax + 8));
        esi = ebx;
        esi ^= edx;
        eax ^= ecx;
        eax |= esi;
        if (eax == 0) {
            *((ebp - 0x1c)) = 1;
        }
    } else {
        *((ebp - 0x1c)) = 0;
    }
    eax = *((ebp - 0x1c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049df4 */
#include <stdint.h>
 
int32_t dbg_dev_ino_free (void) {
    void * x;
    /* void dev_ino_free(void * x); */
    eax = *((ebp + 8));
    free (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804970c */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049e07 */
#include <stdint.h>
 
int32_t dbg_visit_dir (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    ino_t ino;
    void * var_1ch;
    dev_t dev;
    void * var_14h;
    dev_ino * ent;
    dev_ino * ent_from_table;
    _Bool found_match;
    void * var_4h;
    /* _Bool visit_dir(dev_t dev,ino_t ino); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x20)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x1c)) = eax;
    *(esp) = 0x10;
    eax = xmalloc ();
    *((ebp - 0xc)) = eax;
    ecx = *((ebp - 0xc));
    eax = *((ebp - 0x20));
    edx = *((ebp - 0x1c));
    *(ecx) = eax;
    *((ecx + 4)) = edx;
    ecx = *((ebp - 0xc));
    eax = *((ebp - 0x18));
    edx = *((ebp - 0x14));
    *((ecx + 8)) = eax;
    *((ecx + 0xc)) = edx;
    edx = active_dir_set;
    eax = *((ebp - 0xc));
    *((esp + 4)) = eax;
    *(esp) = edx;
    eax = hash_insert ();
    *((ebp - 8)) = eax;
    if (*((ebp - 8)) == 0) {
        xalloc_die ();
    }
    eax = *((ebp - 8));
    al = (eax != *((ebp - 0xc))) ? 1 : 0;
    *((ebp - 1)) = al;
    if (*((ebp - 1)) != 0) {
        eax = *((ebp - 0xc));
        free (eax);
    }
    eax = *((ebp - 1));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049e97 */
#include <stdint.h>
 
int32_t dbg_free_pending_ent (void) {
    pending * p;
    /* void free_pending_ent(pending * p); */
    eax = *((ebp + 8));
    eax = *(eax);
    free (eax);
    eax = *((ebp + 8));
    eax = *((eax + 4));
    free (eax);
    eax = *((ebp + 8));
    free (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049ec5 */
#include <stdint.h>
 
int32_t dbg_is_colored (void) {
    int32_t var_14h;
    size_t len;
    char const * s;
    indicator_no type;
    char * s2;
    size_t n;
    /* _Bool is_colored(indicator_no type); */
    eax = *((ebp + 8));
    eax = *((eax*8 + obj.color_indicator));
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    eax = *((eax*8 + 0x80641e4));
    *((ebp - 4)) = eax;
    if (*((ebp - 8)) != 0) {
        if (*((ebp - 8)) == 1) {
            eax = *((ebp - 4));
            edx = *(eax);
            eax = 0x805e639;
            eax = *(eax);
            if (dl == al) {
                goto label_0;
            }
        }
        if (*((ebp - 8)) == 2) {
            eax = *((ebp - 4));
            eax = strncmp (eax, 0x805ed2c, 2);
            if (eax == 0) {
                goto label_0;
            }
        }
        *((ebp - 0x14)) = 1;
    } else {
label_0:
        *((ebp - 0x14)) = 0;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049f3e */
#include <stdint.h>
 
void dbg_restore_default_color (void) {
    /* void restore_default_color(); */
    *(esp) = obj.color_indicator;
    put_indicator ();
    *(esp) = 0x80641e8;
    put_indicator ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805060f */
#include <stdint.h>
 
int32_t dbg_put_indicator (void) {
    size_t i;
    char const * p;
    bin_str const * ind;
    /* void put_indicator(bin_str const * ind); */
    eax = *((ebp + 8));
    eax = *((eax + 4));
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 8)) = eax;
    while (*((ebp - 8)) != 0) {
        eax = *((ebp - 4));
        eax = *(eax);
        eax = (int32_t) al;
        *((ebp - 4))++;
        *(esp) = eax;
        putchar_unlocked ();
        *((ebp - 8))--;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049f5e */
#include <stdint.h>
 
int32_t dbg_sighandler (void) {
    int32_t sig;
    /* void sighandler(int sig); */
    eax = interrupt_signal;
    if (eax == 0) {
        eax = *((ebp + 8));
        *(obj.interrupt_signal) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049f74 */
#include <stdint.h>
 
int32_t dbg_stophandler (void) {
    int32_t sig;
    /* void stophandler(int sig); */
    eax = interrupt_signal;
    if (eax == 0) {
        eax = stop_signal_count;
        eax++;
        *(obj.stop_signal_count) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049f8f */
#include <stdint.h>
 
int32_t dbg_process_signals (void) {
    sigset_t oldset;
    int32_t sig;
    int32_t stops;
    void * func;
    int32_t var_8h;
    /* void process_signals(); */
    while (eax != 0) {
        restore_default_color ();
        eax = stdout;
        *(esp) = eax;
        fflush_unlocked ();
        eax = ebp - 0x88;
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x8064500;
        *(esp) = 0;
        sigprocmask ();
        eax = interrupt_signal;
        *((ebp - 8)) = eax;
        eax = stop_signal_count;
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) != 0) {
            eax = *((ebp - 4));
            eax--;
            *(obj.stop_signal_count) = eax;
            *((ebp - 8)) = 0x13;
        } else {
            *((esp + 4)) = 0;
            eax = *((ebp - 8));
            signal (eax);
        }
        eax = *((ebp - 8));
        raise (eax);
        *((esp + 8)) = 0;
        eax = ebp - 0x88;
        *((esp + 4)) = eax;
        *(esp) = 2;
        sigprocmask ();
        eax = interrupt_signal;
        edx = stop_signal_count;
        eax |= edx;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804a844 */
#include <stdint.h>
 
int32_t dbg_initialize_exit_failure (void) {
    int32_t status;
    /* void initialize_exit_failure(int status); */
    if (*((ebp + 8)) != 1) {
        eax = *((ebp + 8));
        *(obj.exit_failure) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804a857 */
#include <stdint.h>
 
int32_t dbg_decode_switches (void) {
    int32_t var_8ch;
    uint32_t var_88h;
    uint32_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    char * var_78h;
    char * var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    uint32_t var_68h;
    long unsigned int tmp_ulong;
    int32_t var_60h;
    int32_t oi;
    int32_t var_58h;
    winsize ws;
    int32_t var_4ch;
    char * time_style_option;
    _Bool sort_type_specified;
    char const * q_style;
    int32_t var_3ch;
    char const * ls_block_size;
    char * var_34h;
    char * var_30h;
    int32_t c;
    ignore_pattern * hide;
    uint32_t var_24h;
    strtol_error e;
    char const * p;
    char * style;
    char * p0;
    char * p1;
    int32_t i;
    char const * locale_format;
    int32_t argc;
    char ** argv;
    char * errname;
    char * format;
    char * var_ch;
    char * var_10h;
    char * var_14h;
    int32_t var_sp_18h;
    /* int decode_switches(int argc,char ** argv); */
    *((ebp - 0x48)) = 0;
    *((ebp - 0x41)) = 0;
    *(obj.qmark_funny_chars) = 0;
    eax = ls_mode;
    *((ebp - 0x84)) = eax;
    if (*((ebp - 0x84)) != 2) {
        if (*((ebp - 0x84)) != 3) {
            if (*((ebp - 0x84)) == 1) {
                goto label_2;
            }
        } else {
            *(obj.format) = 2;
            *((esp + 4)) = 4;
            *(esp) = 0;
            set_quoting_style ();
            goto label_3;
        }
        *(obj.format) = 0;
        *((esp + 4)) = 4;
        *(esp) = 0;
        set_quoting_style ();
        goto label_3;
label_2:
        eax = isatty (1);
        if (eax != 0) {
            *(obj.format) = 2;
            *(obj.qmark_funny_chars) = 1;
            goto label_3;
        }
        *(obj.format) = 1;
        *(obj.qmark_funny_chars) = 0;
        goto label_3;
    }
    abort ();
label_3:
    *(obj.time_type) = 0;
    *(obj.sort_type) = 0;
    *(obj.sort_reverse) = 0;
    *(obj.numeric_ids) = 0;
    *(obj.print_block_size) = 0;
    *(obj.indicator_style) = 0;
    *(obj.print_inode) = 0;
    *(obj.dereference) = 1;
    *(obj.recursive) = 0;
    *(obj.immediate_dirs) = 0;
    *(obj.ignore_mode) = 0;
    *(obj.ignore_patterns) = 0;
    *(obj.hide_patterns) = 0;
    *(obj.print_scontext) = 0;
    eax = getenv ("QUOTING_STYLE");
    *((ebp - 0x40)) = eax;
    if (*((ebp - 0x40)) != 0) {
        eax = quoting_style_vals;
        *((esp + 0xc)) = 4;
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x8061a00;
        eax = *((ebp - 0x40));
        *(esp) = eax;
        eax = argmatch ();
        *((ebp - 0x3c)) = eax;
        if (*((ebp - 0x3c)) >= 0) {
            eax = *((ebp - 0x3c));
            eax = *((eax*4 + obj.quoting_style_vals));
            *((esp + 4)) = eax;
            *(esp) = 0;
            set_quoting_style ();
        } else {
            eax = *((ebp - 0x40));
            *(esp) = eax;
            eax = quotearg ();
            ebx = eax;
            *(esp) = "ignoring invalid value of environment variable QUOTING_STYLE: %s";
            eax = gettext ();
            *((esp + 0xc)) = ebx;
            error (0, 0, eax);
        }
    }
    eax = getenv ("LS_BLOCK_SIZE");
    *((ebp - 0x38)) = eax;
    *((esp + 8)) = 0x80644a8;
    *((esp + 4)) = 0x80644a4;
    eax = *((ebp - 0x38));
    *(esp) = eax;
    human_options ();
    if (*((ebp - 0x38)) == 0) {
        eax = getenv ("BLOCK_SIZE");
        if (eax == 0) {
            goto label_4;
        }
    }
    eax = output_block_size;
    edx = .comment;
    *(obj.file_output_block_size) = eax;
    *(0x80641d4) = edx;
label_4:
    *(obj.line_length) = 0x50;
    eax = getenv ("COLUMNS");
    *((ebp - 0x34)) = eax;
    if (*((ebp - 0x34)) != 0) {
        eax = *((ebp - 0x34));
        eax = *(eax);
        if (al == 0) {
            goto label_5;
        }
        *((esp + 0x10)) = 0;
        eax = ebp - 0x4c;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0;
        eax = *((ebp - 0x34));
        eax = xstrtoul (eax);
        if (eax == 0) {
            eax = *((ebp - 0x4c));
            if (eax != 0) {
                eax = *((ebp - 0x4c));
                *(obj.line_length) = eax;
            }
        } else {
            eax = *((ebp - 0x34));
            *(esp) = eax;
            eax = quotearg ();
            ebx = eax;
            *(esp) = "ignoring invalid width in environment variable COLUMNS: %s";
            eax = gettext ();
            *((esp + 0xc)) = ebx;
            error (0, 0, eax);
        }
    }
label_5:
    eax = ebp - 0x54;
    *((esp + 8)) = eax;
    eax = ioctl (1, 0x5413);
    if (eax != -1) {
        eax = *(ws.ws_row);
        if (ax == 0) {
            goto label_6;
        }
        eax = *(ws.ws_row);
        eax = (int32_t) ax;
        *(obj.line_length) = eax;
    }
label_6:
    eax = getenv ("TABSIZE");
    *((ebp - 0x30)) = eax;
    *(obj.tabsize) = 8;
    if (*((ebp - 0x30)) == 0) {
        goto label_0;
    }
    *((esp + 0x10)) = 0;
    eax = ebp - 0x58;
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0;
    *((esp + 4)) = 0;
    eax = *((ebp - 0x30));
    eax = xstrtoul (eax);
    if (eax == 0) {
        eax = *((ebp - 0x58));
        *(obj.tabsize) = eax;
    } else {
        eax = *((ebp - 0x30));
        *(esp) = eax;
        eax = quotearg ();
        ebx = eax;
        *(esp) = "ignoring invalid tab size in environment variable TABSIZE: %s";
        eax = gettext ();
        *((esp + 0xc)) = ebx;
        error (0, 0, eax);
    }
    do {
label_0:
        *((ebp - 0x5c)) = 0xffffffff;
        eax = ebp - 0x5c;
        *((esp + 0x10)) = eax;
        *((esp + 0xc)) = 0x805e840;
        *((esp + 8)) = "abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1";
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = getopt_long ();
        *((ebp - 0x2c)) = eax;
        if (*((ebp - 0x2c)) == -1) {
            goto label_7;
        }
        eax = *((ebp - 0x2c));
        eax += 0x83;
        *((ebp - 0x88)) = eax;
        if (*((ebp - 0x88)) > 0x112) {
            goto label_8;
        }
        edx = *((ebp - 0x88));
        eax = *((edx*4 + 0x805f05c));
        /* switch table (275 cases) at 0x805f05c */
        void (*eax)() ();
        *(obj.ignore_mode) = 2;
    } while (1);
    *((esp + 4)) = 4;
    *(esp) = 0;
    set_quoting_style ();
    goto label_0;
    *(obj.time_type) = 1;
    goto label_0;
    *(obj.immediate_dirs) = 1;
    goto label_0;
    *(obj.ignore_mode) = 2;
    *(obj.sort_type) = 0xffffffff;
    *((ebp - 0x41)) = 1;
    eax = format;
    if (eax == 0) {
        eax = isatty (1);
        if (eax != 0) {
            *((ebp - 0x80)) = 2;
        } else {
            *((ebp - 0x80)) = 1;
        }
        eax = *((ebp - 0x80));
        *(obj.format) = eax;
    }
    *(obj.print_block_size) = 0;
    *(obj.print_with_color) = 0;
    goto label_0;
    *(obj.indicator_style) = 2;
    goto label_0;
    *(obj.format) = 0;
    *(obj.print_owner) = 0;
    goto label_0;
    *(obj.human_output_opts) = 0xb0;
    *(obj.output_block_size) = 1;
    *(0x80644ac) = 0;
    eax = output_block_size;
    edx = .comment;
    *(obj.file_output_block_size) = eax;
    *(0x80641d4) = edx;
    goto label_0;
    *(obj.print_inode) = 1;
    goto label_0;
    *(obj.human_output_opts) = 0;
    *(obj.output_block_size) = 0x400;
    *(0x80644ac) = 0;
    eax = output_block_size;
    edx = .comment;
    *(obj.file_output_block_size) = eax;
    *(0x80641d4) = edx;
    goto label_0;
    *(obj.format) = 0;
    goto label_0;
    *(obj.format) = 4;
    goto label_0;
    *(obj.numeric_ids) = 1;
    *(obj.format) = 0;
    goto label_0;
    *(obj.format) = 0;
    *(obj.print_group) = 0;
    goto label_0;
    *(obj.indicator_style) = 1;
    goto label_0;
    *(obj.qmark_funny_chars) = 1;
    goto label_0;
    *(obj.sort_reverse) = 1;
    goto label_0;
    *(obj.print_block_size) = 1;
    goto label_0;
    *(obj.sort_type) = 4;
    *((ebp - 0x41)) = 1;
    goto label_0;
    *(obj.time_type) = 2;
    goto label_0;
    *(obj.sort_type) = 3;
    *((ebp - 0x41)) = 1;
    goto label_0;
    eax = optarg;
    *((esp + 0x10)) = 0;
    edx = ebp - 0x60;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0;
    *((esp + 4)) = 0;
    eax = xstrtoul (eax);
    if (eax == 0) {
        eax = *((ebp - 0x60));
        if (eax != 0) {
            goto label_9;
        }
    }
    eax = optarg;
    *(esp) = eax;
    eax = quotearg ();
    ebx = eax;
    *(esp) = "invalid line width: %s";
    eax = gettext ();
    *((esp + 0xc)) = ebx;
    error (2, 0, eax);
label_9:
    eax = *((ebp - 0x60));
    *(obj.line_length) = eax;
    goto label_0;
    *(obj.format) = 3;
    goto label_0;
    eax = ignore_mode;
    if (eax != 0) {
        goto label_0;
    }
    *(obj.ignore_mode) = 1;
    goto label_0;
    *(esp) = 0x805ef47;
    add_ignore_pattern ();
    *(esp) = 0x805ef4a;
    add_ignore_pattern ();
    goto label_0;
    *(obj.format) = 2;
    goto label_0;
    *(obj.dired) = 1;
    goto label_0;
    *(obj.indicator_style) = 3;
    goto label_0;
    *(obj.print_group) = 0;
    goto label_0;
    *(obj.dereference) = 3;
    goto label_0;
    *(obj.dereference) = 4;
    goto label_0;
    eax = optarg;
    *(esp) = eax;
    add_ignore_pattern ();
    goto label_0;
    *(obj.dereference) = 5;
    goto label_0;
    *((esp + 4)) = 0;
    *(esp) = 0;
    set_quoting_style ();
    goto label_0;
    *((esp + 4)) = 3;
    *(esp) = 0;
    set_quoting_style ();
    goto label_0;
    *(obj.recursive) = 1;
    goto label_0;
    *(obj.sort_type) = 2;
    *((ebp - 0x41)) = 1;
    goto label_0;
    eax = optarg;
    *((esp + 0x10)) = 0;
    edx = ebp - 0x64;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0;
    *((esp + 4)) = 0;
    eax = xstrtoul (eax);
    if (eax != 0) {
        eax = optarg;
        *(esp) = eax;
        eax = quotearg ();
        ebx = eax;
        *(esp) = "invalid tab size: %s";
        eax = gettext ();
        *((esp + 0xc)) = ebx;
        error (2, 0, eax);
    }
    eax = *((ebp - 0x64));
    *(obj.tabsize) = eax;
    goto label_0;
    *(obj.sort_type) = 0xffffffff;
    *((ebp - 0x41)) = 1;
    goto label_0;
    *(obj.sort_type) = 1;
    *((ebp - 0x41)) = 1;
    goto label_0;
    eax = format;
    if (eax == 0) {
        goto label_0;
    }
    *(obj.format) = 1;
    goto label_0;
    *(obj.print_author) = 1;
    goto label_0;
    *(esp) = 8;
    eax = xmalloc ();
    *((ebp - 0x28)) = eax;
    edx = optarg;
    eax = *((ebp - 0x28));
    *(eax) = edx;
    edx = hide_patterns;
    eax = *((ebp - 0x28));
    *((eax + 4)) = edx;
    eax = *((ebp - 0x28));
    *(obj.hide_patterns) = eax;
    goto label_0;
    eax = argmatch_die;
    edx = sort_types;
    ecx = optarg;
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x805eb68;
    *((esp + 4)) = ecx;
    *(esp) = "--sort";
    _xargmatch_internal ();
    eax = *((eax*4 + obj.sort_types));
    *(obj.sort_type) = eax;
    *((ebp - 0x41)) = 1;
    goto label_0;
    *(obj.directories_first) = 1;
    goto label_0;
    eax = argmatch_die;
    edx = time_types;
    ecx = optarg;
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x805ebb4;
    *((esp + 4)) = ecx;
    *(esp) = "--time";
    _xargmatch_internal ();
    eax = *((eax*4 + obj.time_types));
    *(obj.time_type) = eax;
    goto label_0;
    eax = argmatch_die;
    edx = format_types;
    ecx = optarg;
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x805eb20;
    *((esp + 4)) = ecx;
    *(esp) = "--format";
    _xargmatch_internal ();
    eax = *((eax*4 + obj.format_types));
    *(obj.format) = eax;
    goto label_0;
    *(obj.format) = 0;
    *((ebp - 0x48)) = "full-iso";
    goto label_0;
    eax = optarg;
    if (eax != 0) {
        eax = argmatch_die;
        edx = color_types;
        ecx = optarg;
        *((esp + 0x14)) = eax;
        *((esp + 0x10)) = 4;
        *((esp + 0xc)) = edx;
        *((esp + 8)) = 0x805ec20;
        *((esp + 4)) = ecx;
        *(esp) = "--color";
        _xargmatch_internal ();
        eax = *((eax*4 + obj.color_types));
        *((ebp - 0x24)) = eax;
    } else {
        *((ebp - 0x24)) = 1;
    }
    if (*((ebp - 0x24)) != 1) {
        if (*((ebp - 0x24)) != 2) {
            goto label_10;
        }
        eax = isatty (1);
        if (eax == 0) {
            goto label_10;
        }
    }
    *((ebp - 0x7c)) = 1;
    goto label_11;
label_10:
    *((ebp - 0x7c)) = 0;
label_11:
    eax = *((ebp - 0x7c));
    *(obj.print_with_color) = al;
    eax = *(obj.print_with_color);
    if (al == 0) {
        goto label_0;
    }
    *(obj.tabsize) = 0;
    goto label_0;
    eax = argmatch_die;
    edx = indicator_style_types;
    ecx = optarg;
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x805e56c;
    *((esp + 4)) = ecx;
    *(esp) = "--indicator-style";
    _xargmatch_internal ();
    eax = *((eax*4 + obj.indicator_style_types));
    *(obj.indicator_style) = eax;
    goto label_0;
    eax = argmatch_die;
    edx = quoting_style_vals;
    ecx = optarg;
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x8061a00;
    *((esp + 4)) = ecx;
    *(esp) = "--quoting-style";
    _xargmatch_internal ();
    eax = *((eax*4 + obj.quoting_style_vals));
    *((esp + 4)) = eax;
    *(esp) = 0;
    set_quoting_style ();
    goto label_0;
    eax = optarg;
    *((ebp - 0x48)) = eax;
    goto label_0;
    *(obj.qmark_funny_chars) = 0;
    goto label_0;
    eax = optarg;
    *((esp + 8)) = 0x80644a8;
    *((esp + 4)) = 0x80644a4;
    *(esp) = eax;
    eax = human_options ();
    *((ebp - 0x20)) = eax;
    if (*((ebp - 0x20)) != 0) {
        eax = optarg;
        edx = *((ebp - 0x5c));
        *((esp + 0x10)) = eax;
        *((esp + 0xc)) = 0x805e840;
        *((esp + 8)) = 0;
        *((esp + 4)) = edx;
        eax = *((ebp - 0x20));
        xstrtol_fatal (eax);
    }
    eax = output_block_size;
    edx = .comment;
    *(obj.file_output_block_size) = eax;
    *(0x80641d4) = edx;
    goto label_0;
    *(obj.human_output_opts) = 0x90;
    *(obj.output_block_size) = 1;
    *(0x80644ac) = 0;
    eax = output_block_size;
    edx = .comment;
    *(obj.file_output_block_size) = eax;
    *(0x80641d4) = edx;
    goto label_0;
    *(obj.print_scontext) = 1;
    goto label_0;
    *(esp) = 0;
    usage ();
    eax = ls_mode;
    if (eax != 1) {
        eax = ls_mode;
        if (eax == 2) {
            *((ebp - 0x74)) = 0x805efa4;
        } else {
            *((ebp - 0x74)) = "vdir";
        }
        edx = *((ebp - 0x74));
        *((ebp - 0x78)) = edx;
    } else {
        *((ebp - 0x78)) = 0x805efad;
    }
    eax = stdout;
    *((esp + 0x18)) = 0;
    *((esp + 0x14)) = "David MacKenzie";
    *((esp + 0x10)) = "Richard Stallman";
    *((esp + 0xc)) = "6.10";
    *((esp + 8)) = "GNU coreutils";
    edx = *((ebp - 0x78));
    *((esp + 4)) = edx;
    version_etc (eax);
    exit (0);
label_8:
    *(esp) = 2;
    usage ();
label_7:
    eax = line_length;
    if (eax > 2) {
        eax = line_length;
        *((ebp - 0x8c)) = eax;
        edx = 0xaaaaaaab;
        eax = *((ebp - 0x8c));
        edx:eax = eax * edx;
        eax = edx;
        eax >>= 1;
        *((ebp - 0x70)) = eax;
    } else {
        *((ebp - 0x70)) = 1;
    }
    edx = *((ebp - 0x70));
    *(obj.max_idx) = edx;
    *(esp) = 0;
    eax = clone_quoting_options ();
    *(obj.filename_quoting_options) = eax;
    eax = filename_quoting_options;
    *(esp) = eax;
    eax = get_quoting_style ();
    if (eax == 4) {
        eax = filename_quoting_options;
        *((esp + 8)) = 1;
        *((esp + 4)) = 0x20;
        set_char_quoting (eax);
    }
    eax = indicator_style;
    if (eax <= 1) {
        goto label_12;
    }
    eax = indicator_style;
    eax -= 2;
    eax += str.__;
    *((ebp - 0x1c)) = eax;
    while (al != 0) {
        eax = *((ebp - 0x1c));
        eax = *(eax);
        eax = (int32_t) al;
        edx = filename_quoting_options;
        *((esp + 8)) = 1;
        *((esp + 4)) = eax;
        set_char_quoting (edx);
        *((ebp - 0x1c))++;
        eax = *((ebp - 0x1c));
        eax = *(eax);
    }
label_12:
    *(esp) = 0;
    eax = clone_quoting_options ();
    *(obj.dirname_quoting_options) = eax;
    eax = dirname_quoting_options;
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x3a;
    set_char_quoting (eax);
    eax = *(obj.dired);
    if (al != 0) {
        eax = format;
        if (eax == 0) {
            goto label_13;
        }
        *(obj.dired) = 0;
    }
label_13:
    eax = time_type;
    if (eax != 1) {
        eax = time_type;
        if (eax != 2) {
            goto label_14;
        }
    }
    eax = *((ebp - 0x41));
    eax ^= 1;
    if (al != 0) {
        eax = format;
        if (eax == 0) {
            goto label_14;
        }
        *(obj.sort_type) = 4;
    }
label_14:
    eax = format;
    if (eax != 0) {
        goto label_15;
    }
    eax = *((ebp - 0x48));
    *((ebp - 0x18)) = eax;
    if (*((ebp - 0x18)) != 0) {
        goto label_16;
    }
    eax = getenv ("TIME_STYLE");
    *((ebp - 0x18)) = eax;
    if (*((ebp - 0x18)) != 0) {
        goto label_16;
    }
    *((ebp - 0x18)) = "locale";
    while (eax == 0) {
        *(esp) = 2;
        eax = hard_locale ();
        eax ^= 1;
        if (al != 0) {
            eax = optind;
            *((ebp - 0x6c)) = eax;
            goto label_17;
        }
        *((ebp - 0x18)) += 6;
label_16:
        eax = *((ebp - 0x18));
        eax = strncmp (eax, "posix-", 6);
    }
    eax = *((ebp - 0x18));
    eax = *(eax);
    if (al == 0x2b) {
        eax = *((ebp - 0x18));
        eax++;
        *((ebp - 0x14)) = eax;
        eax = *((ebp - 0x14));
        eax = strchr (eax, 0xa);
        *((ebp - 0x10)) = eax;
        if (*((ebp - 0x10)) == 0) {
            eax = *((ebp - 0x14));
            *((ebp - 0x10)) = eax;
        } else {
            eax = *((ebp - 0x10));
            eax++;
            eax = strchr (eax, 0xa);
            if (eax != 0) {
                eax = *((ebp - 0x14));
                *(esp) = eax;
                eax = quote ();
                ebx = eax;
                *(esp) = "invalid time style format %s";
                eax = gettext ();
                *((esp + 0xc)) = ebx;
                error (2, 0, eax);
            }
            eax = *((ebp - 0x10));
            *(eax) = 0;
            *((ebp - 0x10))++;
        }
        eax = *((ebp - 0x14));
        *(obj.long_time_format) = eax;
        eax = *((ebp - 0x10));
        *(str._b__e__H:_M) = eax;
        goto label_15;
    }
    eax = argmatch_die;
    edx = time_style_types;
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = 4;
    *((esp + 0xc)) = edx;
    *((esp + 8)) = 0x805e528;
    eax = *((ebp - 0x18));
    *((esp + 4)) = eax;
    *(esp) = "time style";
    _xargmatch_internal ();
    eax = *((eax*4 + obj.time_style_types));
    *((ebp - 0x68)) = eax;
    if (*((ebp - 0x68)) == 1) {
        goto label_18;
    }
    if (*((ebp - 0x68)) >= 1) {
        if (*((ebp - 0x68)) == 2) {
            goto label_19;
        }
        if (*((ebp - 0x68)) == 3) {
            goto label_20;
        }
        goto label_15;
    }
    *(str._b__e__H:_M) = 0x805f01d;
    eax = *(str._b__e__H:_M);
    *(obj.long_time_format) = eax;
    goto label_15;
    do {
label_18:
        *(str._b__e__H:_M) = 0x805f035;
        eax = *(str._b__e__H:_M);
        *(obj.long_time_format) = eax;
        goto label_15;
label_19:
        *(obj.long_time_format) = 0x805f044;
        *(str._b__e__H:_M) = 0x805f04e;
        goto label_15;
label_20:
        *(esp) = 2;
        al = hard_locale ();
        if (al == 0) {
            goto label_15;
        }
        *((ebp - 0xc)) = 0;
        goto label_21;
label_1:
        eax = *((ebp - 0xc));
        eax = *((eax*4 + obj.long_time_format));
        *((esp + 8)) = 2;
        eax = dcgettext (0, eax);
        *((ebp - 8)) = eax;
        eax = *((ebp - 0xc));
        eax = *((eax*4 + obj.long_time_format));
    } while (eax == *((ebp - 8)));
    edx = *((ebp - 0xc));
    eax = *((ebp - 8));
    *((edx*4 + obj.long_time_format)) = eax;
    *((ebp - 0xc))++;
label_21:
    if (*((ebp - 0xc)) <= 1) {
        goto label_1;
    }
label_15:
    edx = optind;
    *((ebp - 0x6c)) = edx;
label_17:
    eax = *((ebp - 0x6c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054e4e */
#include <stdint.h>
 
int32_t dbg_set_quoting_style (void) {
    uint32_t var_4h;
    quoting_options * o;
    quoting_style s;
    /* void set_quoting_style(quoting_options * o,quoting_style s); */
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 8));
        *((ebp - 4)) = eax;
    } else {
        *((ebp - 4)) = obj.default_quoting_options;
    }
    eax = *((ebp + 0xc));
    edx = *((ebp - 4));
    *(edx) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80497cc */
#include <stdint.h>
 
void isatty (void) {
    isatty ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80494bc */
#include <stdint.h>
 
void abort (void) {
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80495fc */
#include <stdint.h>
 
void getenv (void) {
    getenv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051a34 */
#include <stdint.h>
 
int32_t dbg_argmatch (void) {
    uint32_t var_14h;
    ptrdiff_t matchind;
    size_t arglen;
    size_t i;
    _Bool ambiguous;
    char const * arg;
    char const * const * arglist;
    char const * vallist;
    size_t valsize;
    char * s2;
    size_t n;
    /* ptrdiff_t argmatch(char const * arg,char const * const * arglist,char const * vallist,size_t valsize); */
    *((ebp - 0x10)) = 0xffffffff;
    *((ebp - 1)) = 0;
    eax = *((ebp + 8));
    eax = strlen (eax);
    *((ebp - 0xc)) = eax;
    *((ebp - 8)) = 0;
    while (eax != 0) {
        eax = *((ebp - 8));
        eax <<= 2;
        eax += *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = strncmp (edx, eax, eax);
        if (eax == 0) {
            eax = *((ebp - 8));
            eax <<= 2;
            eax += *((ebp + 0xc));
            eax = *(eax);
            eax = strlen (eax);
            if (eax == *((ebp - 0xc))) {
                eax = *((ebp - 8));
                *((ebp - 0x14)) = eax;
                goto label_0;
            }
            if (*((ebp - 0x10)) == -1) {
                eax = *((ebp - 8));
                *((ebp - 0x10)) = eax;
            } else {
                if (*((ebp + 0x10)) != 0) {
                    eax = *((ebp + 0x14));
                    eax *= *((ebp - 8));
                    ecx = eax;
                    ecx += *((ebp + 0x10));
                    eax = *((ebp - 0x10));
                    eax *= *((ebp + 0x14));
                    edx = eax;
                    edx += *((ebp + 0x10));
                    eax = *((ebp + 0x14));
                    eax = memcmp (edx, ecx, eax);
                    if (eax == 0) {
                        goto label_1;
                    }
                }
                *((ebp - 1)) = 1;
            }
        }
label_1:
        *((ebp - 8))++;
        eax = *((ebp - 8));
        eax <<= 2;
        eax += *((ebp + 0xc));
        eax = *(eax);
    }
    if (*((ebp - 1)) != 0) {
        *((ebp - 0x14)) = 0xfffffffe;
    } else {
        eax = *((ebp - 0x10));
        *((ebp - 0x14)) = eax;
    }
label_0:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80559d7 */
#include <stdint.h>
 
int32_t dbg_quotearg (void) {
    char const * arg;
    char * var_4h;
    /* char * quotearg(char const * arg); */
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = 0;
    quotearg_n ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80559ad */
#include <stdint.h>
 
int32_t dbg_quotearg_n (void) {
    int32_t n;
    char const * arg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* char * quotearg_n(int n,char const * arg); */
    *((esp + 0xc)) = 0x8064720;
    *((esp + 8)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    quotearg_n_options (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80557ed */
#include <stdint.h>
 
uint32_t dbg_quotearg_n_options (uint32_t arg_8h) {
    int32_t var_2ch;
    uint32_t var_28h;
    size_t qsize;
    char * val;
    size_t size;
    size_t n1;
    slotvec * sv;
    uint32_t n0;
    int32_t e;
    _Bool preallocated;
    char const * arg;
    size_t argsize;
    quoting_options const * options;
    int32_t c;
    size_t n;
    int32_t var_sp_ch;
    int32_t var_sp_10h;
    /* char * quotearg_n_options(int n,char const * arg,size_t argsize,quoting_options const * options); */
    eax = errno_location ();
    eax = *(eax);
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = slotvec;
    *((ebp - 0x14)) = eax;
    if (*((ebp + 8)) < 0) {
        abort ();
    }
    eax = nslots;
    if (eax <= *((ebp - 0x10))) {
        eax = *((ebp - 0x10));
        eax++;
        *((ebp - 0x18)) = eax;
        al = (*((ebp - 0x14)) == 0x80643d8) ? 1 : 0;
        *((ebp - 5)) = al;
        if (*((ebp - 0x18)) > 0x1fffffff) {
            xalloc_die ();
        }
        eax = *((ebp - 0x18));
        eax <<= 3;
        *((ebp - 0x2c)) = eax;
        if (*((ebp - 5)) != 0) {
            *((ebp - 0x28)) = 0;
        } else {
            eax = *((ebp - 0x14));
            *((ebp - 0x28)) = eax;
        }
        eax = *((ebp - 0x2c));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x28));
        *(esp) = eax;
        eax = xrealloc ();
        *((ebp - 0x14)) = eax;
        eax = *((ebp - 0x14));
        *(obj.slotvec) = eax;
        if (*((ebp - 5)) != 0) {
            ecx = *((ebp - 0x14));
            eax = slotvec0;
            edx = *(obj.slot0);
            *(ecx) = eax;
            *((ecx + 4)) = edx;
        }
        edx = nslots;
        eax = *((ebp - 0x18));
        eax -= edx;
        edx = eax*8;
        eax = nslots;
        eax <<= 3;
        eax += *((ebp - 0x14));
        memset (eax, 0, edx);
        eax = *((ebp - 0x18));
        *(obj.nslots) = eax;
    }
    eax = *((ebp + 8));
    eax <<= 3;
    eax += *((ebp - 0x14));
    eax = *(eax);
    *((ebp - 0x1c)) = eax;
    eax = *((ebp + 8));
    eax <<= 3;
    eax += *((ebp - 0x14));
    eax = *((eax + 4));
    *((ebp - 0x20)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1c));
    *((esp + 4)) = eax;
    eax = *((ebp - 0x20));
    *(esp) = eax;
    eax = quotearg_buffer ();
    *((ebp - 0x24)) = eax;
    eax = *((ebp - 0x1c));
    if (eax <= *((ebp - 0x24))) {
        eax = *((ebp + 8));
        eax <<= 3;
        edx = eax;
        edx += *((ebp - 0x14));
        eax = *((ebp - 0x24));
        eax++;
        *((ebp - 0x1c)) = eax;
        eax = *((ebp - 0x1c));
        *(edx) = eax;
        if (*((ebp - 0x20)) != 0x8064760) {
            eax = *((ebp - 0x20));
            free (eax);
        }
        eax = *((ebp + 8));
        eax <<= 3;
        ebx = eax;
        ebx += *((ebp - 0x14));
        eax = *((ebp - 0x1c));
        *(esp) = eax;
        eax = xcharalloc ();
        *((ebp - 0x20)) = eax;
        eax = *((ebp - 0x20));
        *((ebx + 4)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 0x10)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x1c));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x20));
        *(esp) = eax;
        quotearg_buffer ();
    }
    eax = errno_location ();
    edx = eax;
    eax = *((ebp - 0xc));
    *(edx) = eax;
    eax = *((ebp - 0x20));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80494cc */
#include <stdint.h>
 
void errno_location (void) {
    errno_location ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80519e4 */
#include <stdint.h>
 
uint32_t dbg_xalloc_die (void) {
    int32_t errname;
    char * format;
    int32_t var_ch;
    /* void xalloc_die(); */
    *(esp) = "memory exhausted";
    eax = gettext ();
    edx = exit_failure;
    *((esp + 0xc)) = eax;
    error (edx, 0, 0x80617e0);
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80496ec */
#include <stdint.h>
 
void gettext (void) {
    gettext ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804997c */
#include <stdint.h>
 
void error (void) {
    error ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058a0b */
#include <stdint.h>
 
int32_t dbg_xrealloc (void) {
    void * p;
    size_t n;
    size_t size;
    /* void * xrealloc(void * p,size_t n); */
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax = realloc (eax, eax);
    *((ebp + 8)) = eax;
    if (*((ebp + 8)) == 0) {
        if (*((ebp + 0xc)) == 0) {
            goto label_0;
        }
        xalloc_die ();
    }
label_0:
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80495ac */
#include <stdint.h>
 
void realloc (void) {
    realloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804964c */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8055667 */
#include <stdint.h>
 
int32_t dbg_quotearg_buffer (void) {
    size_t var_14h;
    size_t r;
    int32_t e;
    quoting_options const * p;
    char * buffer;
    size_t buffersize;
    char const * arg;
    size_t argsize;
    quoting_options const * o;
    int32_t var_sp_4h;
    size_t var_sp_8h;
    int32_t var_ch;
    int32_t var_10h;
    size_t var_sp_14h;
    /* size_t quotearg_buffer(char * buffer,size_t buffersize,char const * arg,size_t argsize,quoting_options const * o); */
    if (*((ebp + 0x18)) != 0) {
        eax = *((ebp + 0x18));
        *((ebp - 0x14)) = eax;
    } else {
        *((ebp - 0x14)) = obj.default_quoting_options;
    }
    eax = *((ebp - 0x14));
    *((ebp - 4)) = eax;
    eax = errno_location ();
    eax = *(eax);
    *((ebp - 8)) = eax;
    eax = *((ebp - 4));
    edx = *(eax);
    eax = *((ebp - 4));
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = edx;
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = quotearg_buffer_restyled ();
    *((ebp - 0xc)) = eax;
    eax = errno_location ();
    edx = eax;
    eax = *((ebp - 8));
    *(edx) = eax;
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80589ce */
#include <stdint.h>
 
int32_t dbg_xcharalloc (void) {
    size_t n;
    /* char * xcharalloc(size_t n); */
    eax = *((ebp + 8));
    *(esp) = eax;
    xmalloc ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80589e1 */
#include <stdint.h>
 
int32_t dbg_xmalloc (void) {
    void * p;
    size_t n;
    /* void * xmalloc(size_t n); */
    eax = *((ebp + 8));
    eax = malloc (eax);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        if (*((ebp + 8)) == 0) {
            goto label_0;
        }
        xalloc_die ();
    }
label_0:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804993c */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054532 */
#include <stdint.h>
 
int32_t dbg_human_options (void) {
    strtol_error e;
    char const * spec;
    int * opts;
    uintmax_t * block_size;
    int32_t var_4h;
    int32_t var_8h;
    /* strtol_error human_options(char const * spec,int * opts,uintmax_t * block_size); */
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = humblock ();
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    edx = *((eax + 4));
    eax = *(eax);
    eax |= edx;
    if (eax == 0) {
        eax = default_block_size ();
        ecx = *((ebp + 0x10));
        *(ecx) = eax;
        *((ecx + 4)) = edx;
        *((ebp - 4)) = 4;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80543d0 */
#include <stdint.h>
 
uint32_t dbg_humblock (void) {
    uint32_t var_14h;
    strtol_error e;
    char * ptr;
    int32_t opts;
    int32_t i;
    char const * spec;
    uintmax_t * block_size;
    int * options;
    int32_t var_4h;
    int32_t var_sp_8h;
    int32_t var_ch;
    char * var_10h;
    /* strtol_error humblock(char const * spec,uintmax_t * block_size,int * options); */
    *((ebp - 8)) = 0;
    if (*((ebp + 8)) == 0) {
        eax = getenv ("BLOCK_SIZE");
        *((ebp + 8)) = eax;
        if (*((ebp + 8)) != 0) {
            goto label_1;
        }
        eax = getenv ("BLOCKSIZE");
        *((ebp + 8)) = eax;
        if (*((ebp + 8)) != 0) {
            goto label_1;
        }
        eax = default_block_size ();
        ecx = *((ebp + 0xc));
        *(ecx) = eax;
        *((ecx + 4)) = edx;
        goto label_2;
    }
label_1:
    eax = *((ebp + 8));
    eax = *(eax);
    if (al == 0x27) {
        *((ebp - 8)) |= 4;
        *((ebp + 8))++;
    }
    eax = block_size_opts;
    *((esp + 0xc)) = 4;
    *((esp + 8)) = eax;
    *((esp + 4)) = 0x806191c;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = argmatch ();
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) >= 0) {
        eax = *((ebp - 4));
        eax = *((eax*4 + obj.block_size_opts));
        *((ebp - 8)) |= eax;
        eax = *((ebp + 0xc));
        *(eax) = 1;
        *((eax + 4)) = 0;
        goto label_2;
    }
    *((esp + 0x10)) = "eEgGkKmMpPtTyYzZ0";
    eax = *((ebp + 0xc));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0;
    eax = ebp - 0xc;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    eax = xstrtoumax (eax);
    *((ebp - 0x10)) = eax;
    if (*((ebp - 0x10)) == 0) {
        goto label_3;
    }
    eax = *((ebp + 0x10));
    *(eax) = 0;
    eax = *((ebp - 0x10));
    *((ebp - 0x14)) = eax;
    goto label_4;
    do {
label_0:
        eax = *((ebp - 0xc));
        if (*((ebp + 8)) == eax) {
            *((ebp - 8)) |= 0x80;
            eax = *((ebp - 0xc));
            eax--;
            eax = *(eax);
            if (al == 0x42) {
                *((ebp - 8)) |= 0x100;
            }
            eax = *((ebp - 0xc));
            eax--;
            eax = *(eax);
            if (al == 0x42) {
                eax = *((ebp - 0xc));
                eax -= 2;
                eax = *(eax);
                if (al != 0x69) {
                    goto label_2;
                }
            }
            *((ebp - 8)) |= 0x20;
            goto label_2;
        }
        *((ebp + 8))++;
label_3:
        eax = *((ebp + 8));
        eax = *(eax);
    } while (al <= 0x2f);
    eax = *((ebp + 8));
    eax = *(eax);
    if (al > 0x39) {
        goto label_0;
    }
label_2:
    edx = *((ebp + 0x10));
    eax = *((ebp - 8));
    *(edx) = eax;
    *((ebp - 0x14)) = 0;
label_4:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054394 */
#include <stdint.h>
 
uint32_t dbg_default_block_size (void) {
    int32_t var_8h;
    int32_t var_4h;
    /* uintmax_t default_block_size(); */
    eax = getenv ("POSIXLY_CORRECT");
    if (eax != 0) {
        *((ebp - 8)) = 0x200;
        *((ebp - 4)) = 0;
    } else {
        *((ebp - 8)) = 0x400;
        *((ebp - 4)) = 0;
    }
    eax = *((ebp - 8));
    edx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058c92 */
#include <stdint.h>
 
uint32_t dbg_xstrtoul (char * str) {
    uint32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    strtol_error overflow;
    int32_t suffixes;
    int32_t var_1ch;
    char const * q;
    strtol_error err;
    long unsigned int tmp;
    char ** p;
    char * t_ptr;
    unsigned char ch;
    char ** ptr;
    int32_t strtol_base;
    long unsigned int * val;
    char const * valid_suffixes;
    char * endptr;
    int32_t base;
    char * function;
    /* strtol_error xstrtoul(char const * s,char ** ptr,int strtol_base,long unsigned int * val,char const * valid_suffixes); */
    *((ebp - 0x14)) = 0;
    if (*((ebp + 0x10)) >= 0) {
        if (*((ebp + 0x10)) <= 0x24) {
            goto label_0;
        }
    }
    assert_fail ("xstrtoul", "xstrtol.c", 0x53);
label_0:
    if (*((ebp + 0xc)) == 0) {
        eax = ebp - 8;
        *((ebp - 0x3c)) = eax;
    } else {
        edx = *((ebp + 0xc));
        *((ebp - 0x3c)) = edx;
    }
    eax = *((ebp - 0x3c));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0x18));
    eax = *(eax);
    *((ebp - 1)) = al;
    while (eax != 0) {
        *((ebp - 0x18))++;
        eax = *((ebp - 0x18));
        eax = *(eax);
        *((ebp - 1)) = al;
        eax = ctype_b_loc ();
        edx = *(eax);
        eax = *((ebp - 1));
        eax += eax;
        eax = edx + eax;
        eax = *(eax);
        eax = (int32_t) ax;
        eax &= 0x2000;
    }
    if (*((ebp - 1)) == 0x2d) {
        *((ebp - 0x38)) = 4;
    } else {
        errno_location ();
        *(eax) = 0;
        eax = *((ebp + 0x10));
        eax = *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = strtoul (eax, eax, eax);
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0xc));
        eax = *(eax);
        if (eax == *((ebp + 8))) {
            if (*((ebp + 0x18)) != 0) {
                eax = *((ebp - 0xc));
                eax = *(eax);
                eax = *(eax);
                if (al != 0) {
                    eax = *((ebp - 0xc));
                    eax = *(eax);
                    eax = *(eax);
                    eax = (int32_t) al;
                    eax = *((ebp + 0x18));
                    eax = strchr (eax, eax);
                    if (eax == 0) {
                        goto label_1;
                    }
                    *((ebp - 0x10)) = 1;
                }
label_1:
                *((ebp - 0x38)) = 4;
            } else {
            } else {
                eax = errno_location ();
                eax = *(eax);
                if (eax == 0) {
                    goto label_2;
                }
                eax = errno_location ();
                eax = *(eax);
                if (eax != 0x22) {
                    *((ebp - 0x38)) = 4;
                    goto label_3;
                }
                *((ebp - 0x14)) = 1;
            }
label_2:
            if (*((ebp + 0x18)) == 0) {
                edx = *((ebp - 0x10));
                eax = *((ebp + 0x14));
                *(eax) = edx;
                edx = *((ebp - 0x14));
                *((ebp - 0x38)) = edx;
            } else {
                eax = *((ebp - 0xc));
                eax = *(eax);
                eax = *(eax);
                if (al != 0) {
                    *((ebp - 0x1c)) = 0x400;
                    *((ebp - 0x20)) = 1;
                    eax = *((ebp - 0xc));
                    eax = *(eax);
                    eax = *(eax);
                    eax = (int32_t) al;
                    eax = *((ebp + 0x18));
                    eax = strchr (eax, eax);
                    if (eax == 0) {
                        eax = *((ebp - 0x10));
                        edx = *((ebp + 0x14));
                        *(edx) = eax;
                        eax = *((ebp - 0x14));
                        edx = *((ebp - 0x14));
                        edx |= 2;
                        *((ebp - 0x38)) = edx;
                        goto label_3;
                    }
                    eax = *((ebp + 0x18));
                    eax = strchr (eax, 0x30);
                    if (eax != 0) {
                        eax = *((ebp - 0xc));
                        eax = *(eax);
                        eax++;
                        eax = *(eax);
                        eax = (int32_t) al;
                        *((ebp - 0x34)) = eax;
                        if (*((ebp - 0x34)) != 0x44) {
                            if (*((ebp - 0x34)) != 0x69) {
                                if (*((ebp - 0x34)) != 0x42) {
                                } else {
                                    eax = *((ebp - 0xc));
                                }
                                eax = *(eax);
                                eax += 2;
                                eax = *(eax);
                                if (al != 0x42) {
                                    goto label_4;
                                }
                                *((ebp - 0x20)) += 2;
                            }
                        } else {
                            *((ebp - 0x1c)) = 0x3e8;
                            *((ebp - 0x20))++;
                        }
                    }
label_4:
                    eax = *((ebp - 0xc));
                    eax = *(eax);
                    eax = *(eax);
                    eax = (int32_t) al;
                    eax -= 0x42;
                    *((ebp - 0x40)) = eax;
                    if (*((ebp - 0x40)) <= 0x35) {
                        edx = *((ebp - 0x40));
                        eax = *((edx*4 + 0x8061f94));
                        /* switch table (54 cases) at 0x8061f94 */
                        void (*eax)() ();
                        eax = ebp - 0x10;
                        eax = bkm_scale (eax, 0x200);
                        *((ebp - 0x24)) = eax;
                        goto label_5;
                        eax = ebp - 0x10;
                        eax = bkm_scale (eax, 0x400);
                        *((ebp - 0x24)) = eax;
                        goto label_5;
                        *((ebp - 0x24)) = 0;
                        goto label_5;
                        eax = *((ebp - 0x1c));
                        eax = ebp - 0x10;
                        eax = bkm_scale_by_power (eax, eax, 6);
                        *((ebp - 0x24)) = eax;
                        goto label_5;
                        eax = *((ebp - 0x1c));
                        eax = ebp - 0x10;
                        eax = bkm_scale_by_power (eax, eax, 3);
                        *((ebp - 0x24)) = eax;
                        goto label_5;
                        eax = *((ebp - 0x1c));
                        eax = ebp - 0x10;
                        eax = bkm_scale_by_power (eax, eax, 1);
                        *((ebp - 0x24)) = eax;
                        goto label_5;
                        eax = *((ebp - 0x1c));
                        eax = ebp - 0x10;
                        eax = bkm_scale_by_power (eax, eax, 2);
                        *((ebp - 0x24)) = eax;
                        goto label_5;
                        eax = *((ebp - 0x1c));
                        eax = ebp - 0x10;
                        eax = bkm_scale_by_power (eax, eax, 5);
                        *((ebp - 0x24)) = eax;
                        goto label_5;
                        eax = *((ebp - 0x1c));
                        eax = ebp - 0x10;
                        eax = bkm_scale_by_power (eax, eax, 4);
                        *((ebp - 0x24)) = eax;
                        goto label_5;
                        eax = ebp - 0x10;
                        eax = bkm_scale (eax, 2);
                        *((ebp - 0x24)) = eax;
                        goto label_5;
                        eax = *((ebp - 0x1c));
                        eax = ebp - 0x10;
                        eax = bkm_scale_by_power (eax, eax, 8);
                        *((ebp - 0x24)) = eax;
                        goto label_5;
                        eax = *((ebp - 0x1c));
                        eax = ebp - 0x10;
                        eax = bkm_scale_by_power (eax, eax, 7);
                        *((ebp - 0x24)) = eax;
                    } else {
                        eax = *((ebp - 0x10));
                        edx = *((ebp + 0x14));
                        *(edx) = eax;
                        eax = *((ebp - 0x14));
                        edx = *((ebp - 0x14));
                        edx |= 2;
                        *((ebp - 0x38)) = edx;
                        goto label_3;
                    }
label_5:
                    eax = *((ebp - 0x24));
                    *((ebp - 0x14)) |= eax;
                    eax = *((ebp - 0xc));
                    edx = *(eax);
                    eax = *((ebp - 0x20));
                    edx += eax;
                    eax = *((ebp - 0xc));
                    *(eax) = edx;
                    eax = *((ebp - 0xc));
                    eax = *(eax);
                    eax = *(eax);
                    if (al == 0) {
                        goto label_6;
                    }
                    *((ebp - 0x14)) |= 2;
                }
label_6:
                edx = *((ebp - 0x10));
                eax = *((ebp + 0x14));
                *(eax) = edx;
                eax = *((ebp - 0x14));
                *((ebp - 0x38)) = eax;
            }
        }
    }
label_3:
    eax = *((ebp - 0x38));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804979c */
#include <stdint.h>
 
void ioctl (void) {
    ioctl ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804978c */
#include <stdint.h>
 
void getopt_long (void) {
    getopt_long ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804c66f */
#include <stdint.h>
 
uint32_t dbg_add_ignore_pattern (void) {
    ignore_pattern * ignore;
    char const * pattern;
    /* void add_ignore_pattern(char const * pattern); */
    *(esp) = 8;
    eax = xmalloc ();
    *((ebp - 4)) = eax;
    edx = *((ebp - 4));
    eax = *((ebp + 8));
    *(edx) = eax;
    edx = ignore_patterns;
    eax = *((ebp - 4));
    *((eax + 4)) = edx;
    eax = *((ebp - 4));
    *(obj.ignore_patterns) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051c92 */
#include <stdint.h>
 
int32_t dbg_xargmatch_internal (void) {
    int32_t var_14h;
    ptrdiff_t res;
    char const * context;
    char const * arg;
    char const * const * arglist;
    char const * vallist;
    size_t valsize;
    argmatch_exit_fn exit_fn;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* ptrdiff_t __xargmatch_internal(char const * context,char const * arg,char const * const * arglist,char const * vallist,size_t valsize,argmatch_exit_fn exit_fn); */
    eax = *((ebp + 0x18));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 8)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = argmatch ();
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) >= 0) {
        eax = *((ebp - 4));
        *((ebp - 0x14)) = eax;
    } else {
        eax = *((ebp - 4));
        *((esp + 8)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        argmatch_invalid ();
        eax = *((ebp + 0x18));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 4)) = eax;
        eax = *((ebp + 0x10));
        *(esp) = eax;
        argmatch_valid ();
        eax = *((ebp + 0x1c));
        void (*eax)() ();
        *((ebp - 0x14)) = 0xffffffff;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058bc6 */
#include <stdint.h>
 
int32_t dbg_xstrtol_fatal (char * arg_10h) {
    char c;
    strtol_error err;
    int32_t opt_idx;
    option const * long_options;
    char const * arg;
    int32_t var_sp_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    /* void xstrtol_fatal(strtol_error err,int opt_idx,char c,option const * long_options,char const * arg); */
    eax = *((ebp + 0x10));
    *((ebp - 4)) = al;
    eax = exit_failure;
    edx = *((ebp - 4));
    *((esp + 0x14)) = eax;
    eax = *((ebp + 0x18));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = edx;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    xstrtol_error (eax);
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058b08 */
#include <stdint.h>
 
int32_t dbg_xstrtol_error (int32_t arg_10h) {
    uint32_t var_18h;
    char c;
    char const * option;
    char const * msgid;
    char const * hyphens;
    char[2] option_buffer;
    int32_t var_1h;
    strtol_error err;
    int32_t opt_idx;
    option const * long_options;
    char const * arg;
    int32_t exit_status;
    int32_t errname;
    char * format;
    int32_t var_sp_ch;
    int32_t var_sp_10h;
    int32_t var_sp_14h;
    /* void xstrtol_error(strtol_error err,int opt_idx,char c,option const * long_options,char const * arg,int exit_status); */
    eax = *((ebp + 0x10));
    *((ebp - 0x14)) = al;
    *((ebp - 8)) = 0x8061ef4;
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    if (*((ebp - 0x18)) <= 3) {
        if (*((ebp - 0x18)) >= 2) {
            goto label_0;
        }
        if (*((ebp - 0x18)) == 1) {
            goto label_1;
        }
    } else {
        if (*((ebp - 0x18)) == 4) {
            goto label_2;
        }
    }
    abort ();
label_2:
    *((ebp - 0xc)) = "invalid %s%s argument `%s';
    goto label_3;
label_0:
    *((ebp - 0xc)) = "invalid suffix in %s%s argument `%s';
    goto label_3;
label_1:
    *((ebp - 0xc)) = "%s%s argument `%s' too large";
label_3:
    if (*((ebp + 0xc)) < 0) {
        eax = *((ebp + 0xc));
        eax = -eax;
        *((ebp - 8)) += eax;
        eax = *((ebp - 0x14));
        *((ebp - 2)) = al;
        *((ebp - 1)) = 0;
        eax = ebp - 2;
        *((ebp - 0x10)) = eax;
    } else {
        eax = *((ebp + 0xc));
        eax <<= 4;
        eax += *((ebp + 0x14));
        eax = *(eax);
        *((ebp - 0x10)) = eax;
    }
    eax = *((ebp - 0xc));
    *(esp) = eax;
    eax = gettext ();
    edx = eax;
    ecx = exit_failure;
    eax = *((ebp + 0x18));
    *((esp + 0x14)) = eax;
    eax = *((ebp - 0x10));
    *((esp + 0x10)) = eax;
    eax = *((ebp - 8));
    *((esp + 0xc)) = eax;
    error (ecx, 0, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805105c */
#include <stdint.h>
 
uint32_t dbg_usage (void) {
    int32_t status;
    char * format;
    int32_t var_8h;
    /* void usage(int status); */
    if (*((ebp + 8)) != 0) {
        ebx = program_name;
        *(esp) = "Try `%s --help' for more information.\n";
        eax = gettext ();
        edx = stderr;
        *((esp + 8)) = ebx;
        fprintf (edx, eax);
    } else {
        ebx = program_name;
        *(esp) = "Usage: %s [OPTION]... [FILE]...\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        printf (eax);
        ebx = stdout;
        *(esp) = "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort.\n\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "Mandatory arguments to long options are mandatory for short options too.\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print octal escapes for nongraphic characters\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "      --block-size=SIZE      use SIZE-byte blocks\n  -B, --ignore-backups       do not list implied entries ending with ~\n  -c                         with -lt: sort by, and show, ctime (time of last\n                               modification of file status information)\n                               with -l: show ctime and sort by name\n                               otherwise: sort by ctime\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -C                         list entries by columns\n      --color[=WHEN]         control whether color is used to distinguish file\n                               types.  WHEN may be `never', `always', or `auto'\n  -d, --directory            list directory entries instead of contents,\n                               and do not dereference symbolic links\n  -D, --dired                generate output designed for Emacs' dired mode\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -f                         do not sort, enable -aU, disable -ls --color\n  -F, --classify             append indicator (one of */=>@|) to entries\n      --file-type            likewise, except do not append `*'\n      --format=WORD          across -x, commas -m, horizontal -x, long -l,\n                               single-column -1, verbose -l, vertical -C\n      --full-time            like -l --time-style=full-iso\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -g                         like -l, but do not list owner\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "      --group-directories-first\n                             group directories before files\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -G, --no-group             in a long listing, don't print group names\n  -h, --human-readable       with -l, print sizes in human readable format\n                               (e.g., 1K 234M 2G)\n      --si                   likewise, but use powers of 1000 not 1024\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                               (overridden by -a or -A)\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "      --indicator-style=WORD  append indicator with style WORD to entry names:\n                               none (default), slash (-p),\n                               file-type (--file-type), classify (-F)\n  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n  -k                         like --block-size=1K\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -l                         use a long listing format\n  -L, --dereference          when showing file information for a symbolic\n                               link, show information for the file the link\n                               references rather than for the link itself\n  -m                         fill width with a comma separated list of entries\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print raw entry names (don't treat e.g. control\n                               characters specially)\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -q, --hide-control-chars   print ? instead of non graphic characters\n      --show-control-chars   show non graphic characters as-is (default\n                             unless program is `ls' and output is a terminal)\n  -Q, --quote-name           enclose entry names in double quotes\n      --quoting-style=WORD   use quoting style WORD for entry names:\n                               literal, locale, shell, shell-always, c, escape\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the size of each file, in blocks\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -S                         sort by file size\n      --sort=WORD            sort by WORD instead of name: none -U,\n                             extension -X, size -S, time -t, version -v\n      --time=WORD            with -l, show time as WORD instead of modification\n                             time: atime -u, access -u, use -u, ctime -c,\n                             or status -c; use specified time as sort key\n                             if --sort=time\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "      --time-style=STYLE     with -l, show times using style STYLE:\n                             full-iso, long-iso, iso, locale, +FORMAT.\n                             FORMAT is interpreted like `date'; if FORMAT is\n                             FORMAT1<newline>FORMAT2, FORMAT1 applies to\n                             non-recent files and FORMAT2 to recent files;\n                             if STYLE is prefixed with `posix-', STYLE\n                             takes effect only outside the POSIX locale\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -t                         sort by modification time\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -u                         with -lt: sort by, and show, access time\n                               with -l: show access time and sort by name\n                               otherwise: sort by access time\n  -U                         do not sort; list entries in directory order\n  -v                         sort by version\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -w, --width=COLS           assume screen width instead of current value\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any SELinux security context of each file\n  -1                         list one file per line\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "      --help     display this help and exit\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "      --version  output version information and exit\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "\nSIZE may be (or may be an integer optionally followed by) one of following:\nkB 1000, K 1024, MB 1000*1000, M 1024*1024, and so on for G, T, P, E, Z, Y.\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "\nBy default, color is not used to distinguish types of files.  That is\nequivalent to using --color=none.  Using the --color option without the\noptional WHEN argument is equivalent to using --color=always.  With\n--color=auto, color codes are output only if standard output is connected\nto a terminal (tty).  The environment variable LS_COLORS can influence the\ncolors, and can be set easily by the dircolors command.\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "\nExit status is 0 if OK, 1 if minor problems, 2 if serious trouble.\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        emit_bug_reporting_address ();
    }
    eax = *((ebp + 8));
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80519af */
#include <stdint.h>
 
uint32_t dbg_version_etc (char * arg_18h) {
    va_list authors;
    FILE * stream;
    char const * command_name;
    char const * package;
    char const * version;
    int32_t var_sp_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    /* void version_etc(FILE * stream,char const * command_name,char const * package,char const * version,va_args ...); */
    eax = ebp + 0x18;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    version_etc_va ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051750 */
#include <stdint.h>
 
int32_t dbg_version_etc_va (void) {
    va_list tmp_authors;
    size_t n_authors;
    FILE * stream;
    char const * command_name;
    char const * package;
    char const * version;
    va_list authors;
    char * format;
    char * var_sp_8h;
    char * var_sp_ch;
    char * var_10h;
    /* void version_etc_va(FILE * stream,char const * command_name,char const * package,char const * version,va_list authors); */
    eax = *((ebp + 0x18));
    *((ebp - 0xc)) = eax;
    *((ebp - 8)) = 0;
    while (eax != 0) {
        *((ebp - 8))++;
        edx = *((ebp - 0xc));
        eax = edx + 4;
        *((ebp - 0xc)) = eax;
        eax = edx;
        eax = *(eax);
    }
    if (*((ebp + 0xc)) != 0) {
        eax = *((ebp + 0x14));
        *((esp + 0x10)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 8));
        fprintf (eax, "%s (%s) %s\n");
    } else {
        eax = *((ebp + 0x14));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 8));
        fprintf (eax, "%s %s\n");
    }
    *(esp) = 0x806151b;
    eax = gettext ();
    *((esp + 0xc)) = 0x7d8;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    fprintf (eax, "Copyright %s %d Free Software Foundation, Inc.");
    *(esp) = "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n";
    eax = gettext ();
    edx = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = edx;
    fputs_unlocked ();
    if (*((ebp - 8)) <= 9) {
        eax = *((ebp - 8));
        eax <<= 2;
        eax = *((eax + 0x8061768));
        void (*eax)() ();
    }
    ebx = *((ebp + 0x18));
    *(esp) = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    eax = gettext ();
    eax = *((ebp + 8));
    rpl_vfprintf (eax, eax, ebx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049aac */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054de0 */
#include <stdint.h>
 
uint32_t dbg_clone_quoting_options (void) {
    uint32_t var_14h;
    quoting_options * p;
    int32_t e;
    quoting_options * o;
    int32_t var_sp_4h;
    /* quoting_options * clone_quoting_options(quoting_options * o); */
    eax = errno_location ();
    eax = *(eax);
    *((ebp - 4)) = eax;
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 8));
        *((ebp - 0x14)) = eax;
    } else {
        *((ebp - 0x14)) = obj.default_quoting_options;
    }
    *((esp + 4)) = 0x24;
    eax = *((ebp - 0x14));
    *(esp) = eax;
    eax = xmemdup ();
    *((ebp - 8)) = eax;
    eax = errno_location ();
    edx = eax;
    eax = *((ebp - 4));
    *(edx) = eax;
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054e2c */
#include <stdint.h>
 
int32_t dbg_get_quoting_style (void) {
    uint32_t var_4h;
    quoting_options * o;
    /* quoting_style get_quoting_style(quoting_options * o); */
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 8));
        *((ebp - 4)) = eax;
    } else {
        *((ebp - 4)) = obj.default_quoting_options;
    }
    edx = *((ebp - 4));
    eax = *(edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054e73 */
#include <stdint.h>
 
int32_t dbg_set_char_quoting (char * arg_ch) {
    uint32_t var_18h;
    char c;
    int32_t r;
    int32_t shift;
    unsigned int * p;
    unsigned char uc;
    quoting_options * o;
    int32_t i;
    /* int set_char_quoting(quoting_options * o,char c,int i); */
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = al;
    eax = *((ebp - 0x14));
    *((ebp - 1)) = al;
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 8));
        *((ebp - 0x18)) = eax;
    } else {
        *((ebp - 0x18)) = obj.default_quoting_options;
    }
    edx = *((ebp - 0x18));
    edx += 4;
    eax = *((ebp - 1));
    al >>= 5;
    eax = (int32_t) al;
    eax <<= 2;
    eax = edx + eax;
    *((ebp - 8)) = eax;
    eax = *((ebp - 1));
    eax &= 0x1f;
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 8));
    eax = *(eax);
    ecx = *((ebp - 0xc));
    eax >>= cl;
    eax &= 1;
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 8));
    edx = *(eax);
    eax = *((ebp + 0x10));
    eax &= 1;
    eax ^= *((ebp - 0x10));
    ecx = *((ebp - 0xc));
    eax <<= cl;
    edx ^= eax;
    eax = *((ebp - 8));
    *(eax) = edx;
    eax = *((ebp - 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80523a0 */
#include <stdint.h>
 
int32_t dbg_hard_locale (void) {
    char const * p;
    _Bool hard;
    int32_t category;
    char * locale;
    /* _Bool hard_locale(int category); */
    *((ebp - 1)) = 1;
    eax = *((ebp + 8));
    eax = setlocale (eax, 0);
    *((ebp - 8)) = eax;
    if (*((ebp - 8)) != 0) {
        eax = *((ebp - 8));
        eax = strcmp (eax, 0x8061857);
        if (eax != 0) {
            eax = *((ebp - 8));
            eax = strcmp (eax, "POSIX");
            if (eax != 0) {
                goto label_0;
            }
        }
        *((ebp - 1)) = 0;
    }
label_0:
    eax = *((ebp - 1));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049a1c */
#include <stdint.h>
 
void strncmp (void) {
    strncmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80495ec */
#include <stdint.h>
 
void strchr (void) {
    strchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054dc2 */
#include <stdint.h>
 
int32_t dbg_quote (void) {
    char const * name;
    int32_t var_4h;
    /* char const * quote(char const * name); */
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = 0;
    quote_n ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054da0 */
#include <stdint.h>
 
int32_t dbg_quote_n (void) {
    int32_t n;
    char const * name;
    int32_t var_4h;
    char * var_8h;
    /* char const * quote_n(int n,char const * name); */
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    *((esp + 4)) = 5;
    eax = *((ebp + 8));
    *(esp) = eax;
    quotearg_n_style ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8055a5f */
#include <stdint.h>
 
int32_t dbg_quotearg_n_style (void) {
    quoting_options const o;
    int32_t n;
    quoting_style s;
    char const * arg;
    int32_t var_4h_2;
    int32_t var_4h;
    int32_t var_ch;
    /* char * quotearg_n_style(int n,quoting_style s,char const * arg); */
    edx = ebp - 0x24;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    quoting_options_from_style (edx);
    eax = ebp - 0x24;
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0xffffffff;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    quotearg_n_options (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80559f2 */
#include <stdint.h>
 
int32_t dbg_quoting_options_from_style (int32_t arg_8h) {
    quoting_options o;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    quoting_style style;
    int32_t c;
    size_t n;
    /* quoting_options quoting_options_from_style(quoting_style style); */
    ebx = *((ebp + 8));
    eax = *((ebp + 0xc));
    *((ebp - 0x28)) = eax;
    eax = ebp - 0x28;
    eax += 4;
    memset (eax, 0, 0x20);
    eax = *((ebp - 0x28));
    *(ebx) = eax;
    eax = *((ebp - 0x24));
    *((ebx + 4)) = eax;
    eax = *((ebp - 0x20));
    *((ebx + 8)) = eax;
    eax = *((ebp - 0x1c));
    *((ebx + 0xc)) = eax;
    eax = *((ebp - 0x18));
    *((ebx + 0x10)) = eax;
    eax = *((ebp - 0x14));
    *((ebx + 0x14)) = eax;
    eax = *((ebp - 0x10));
    *((ebx + 0x18)) = eax;
    eax = *((ebp - 0xc));
    *((ebx + 0x1c)) = eax;
    eax = *((ebp - 8));
    *((ebx + 0x20)) = eax;
    eax = ebx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804974c */
#include <stdint.h>
 
void dcgettext (void) {
    dcgettext ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804bae2 */
#include <stdint.h>
 
uint32_t dbg_parse_ls_color (void) {
    int32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    char[3] label;
    int32_t var_22h;
    char * buf;
    char const * p;
    int32_t state;
    int32_t ind_no;
    color_ext_type * ext;
    color_ext_type * e;
    color_ext_type * e2;
    char * errname;
    size_t format;
    void * var_ch;
    /* void parse_ls_color(); */
    eax = getenv (0x805f77c);
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x1c));
    if (eax == 0) {
        goto label_1;
    }
    eax = *((ebp - 0x1c));
    eax = *(eax);
    if (al == 0) {
        goto label_1;
    }
    *((ebp - 0x10)) = 0;
    eax = ebp - 0x23;
    memcpy (eax, 0x805f786, 3);
    eax = *((ebp - 0x1c));
    *(esp) = eax;
    eax = xstrdup ();
    *(obj.color_buf) = eax;
    eax = color_buf;
    *((ebp - 0x20)) = eax;
    *((ebp - 0x18)) = 1;
    goto label_2;
label_0:
    eax = *((ebp - 0x18));
    *((ebp - 0x38)) = eax;
    if (*((ebp - 0x38)) != 2) {
        if (*((ebp - 0x38)) <= 2) {
            if (*((ebp - 0x38)) == 1) {
                goto label_3;
            }
            goto label_2;
        }
        if (*((ebp - 0x38)) == 3) {
            goto label_4;
        }
        if (*((ebp - 0x38)) == 4) {
            goto label_5;
        }
        goto label_2;
label_3:
        eax = *((ebp - 0x1c));
        eax = *(eax);
        eax = (int32_t) al;
        *((ebp - 0x34)) = eax;
        if (*((ebp - 0x34)) != 0x2a) {
            if (*((ebp - 0x34)) != 0x3a) {
                if (*((ebp - 0x34)) == 0) {
                    goto label_6;
                }
                goto label_7;
            }
            eax = *((ebp - 0x1c));
            eax++;
            *((ebp - 0x1c)) = eax;
            goto label_2;
        }
        *(esp) = 0x14;
        eax = xmalloc ();
        *((ebp - 0x10)) = eax;
        edx = color_ext_list;
        eax = *((ebp - 0x10));
        *((eax + 0x10)) = edx;
        eax = *((ebp - 0x10));
        *(obj.color_ext_list) = eax;
        eax = *((ebp - 0x1c));
        eax++;
        *((ebp - 0x1c)) = eax;
        edx = *((ebp - 0x20));
        eax = *((ebp - 0x10));
        *((eax + 4)) = edx;
        eax = *((ebp - 0x10));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 1;
        eax = ebp - 0x1c;
        *((esp + 4)) = eax;
        eax = ebp - 0x20;
        al = get_funky_string (eax);
        if (al != 0) {
            *((ebp - 0x30)) = 4;
        } else {
            *((ebp - 0x30)) = 0xffffffff;
        }
        eax = *((ebp - 0x30));
        *((ebp - 0x18)) = eax;
        goto label_2;
label_6:
        *((ebp - 0x18)) = 0;
        goto label_2;
label_7:
        eax = *((ebp - 0x1c));
        edx = *(eax);
        *((ebp - 0x23)) = dl;
        eax++;
        *((ebp - 0x1c)) = eax;
        *((ebp - 0x18)) = 2;
        goto label_2;
    }
    eax = *((ebp - 0x1c));
    eax = *(eax);
    if (al != 0) {
        eax = *((ebp - 0x1c));
        edx = *(eax);
        *((ebp - 0x22)) = dl;
        eax++;
        *((ebp - 0x1c)) = eax;
        *((ebp - 0x18)) = 3;
        goto label_2;
    }
    *((ebp - 0x18)) = 0xffffffff;
    goto label_2;
label_4:
    *((ebp - 0x18)) = 0xffffffff;
    edx = *((ebp - 0x1c));
    eax = *(edx);
    cl = (al == 0x3d) ? 1 : 0;
    eax = edx + 1;
    *((ebp - 0x1c)) = eax;
    if (cl == 0) {
        goto label_2;
    }
    *((ebp - 0x14)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x14));
        eax = *((eax*4 + obj.indicator_name));
        eax = ebp - 0x23;
        eax = strcmp (eax, eax);
        if (eax == 0) {
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x20));
            *((edx*8 + 0x80641e4)) = eax;
            eax = *((ebp - 0x14));
            eax <<= 3;
            eax += obj.color_indicator;
            *((esp + 0xc)) = eax;
            *((esp + 8)) = 0;
            eax = ebp - 0x1c;
            *((esp + 4)) = eax;
            eax = ebp - 0x20;
            al = get_funky_string (eax);
            if (al != 0) {
                *((ebp - 0x2c)) = 1;
            } else {
                *((ebp - 0x2c)) = 0xffffffff;
            }
            eax = *((ebp - 0x2c));
            *((ebp - 0x18)) = eax;
        } else {
            *((ebp - 0x14))++;
            eax = *((ebp - 0x14));
            eax = *((eax*4 + obj.indicator_name));
        }
    }
    if (*((ebp - 0x18)) == -1) {
        eax = ebp - 0x23;
        *(esp) = eax;
        eax = quotearg ();
        ebx = eax;
        *(esp) = "unrecognized prefix: %s";
        eax = gettext ();
        *((esp + 0xc)) = ebx;
        error (0, 0, eax);
        goto label_2;
label_5:
        edx = *((ebp - 0x1c));
        eax = *(edx);
        cl = (al == 0x3d) ? 1 : 0;
        eax = edx + 1;
        *((ebp - 0x1c)) = eax;
        if (cl != 0) {
            edx = *((ebp - 0x20));
            eax = *((ebp - 0x10));
            *((eax + 0xc)) = edx;
            eax = *((ebp - 0x10));
            eax += 8;
            *((esp + 0xc)) = eax;
            *((esp + 8)) = 0;
            eax = ebp - 0x1c;
            *((esp + 4)) = eax;
            eax = ebp - 0x20;
            al = get_funky_string (eax);
            if (al != 0) {
                *((ebp - 0x28)) = 1;
            } else {
                *((ebp - 0x28)) = 0xffffffff;
            }
            eax = *((ebp - 0x28));
            *((ebp - 0x18)) = eax;
        } else {
            *((ebp - 0x18)) = 0xffffffff;
        }
    }
label_2:
    if (*((ebp - 0x18)) > 0) {
        goto label_0;
    }
    if (*((ebp - 0x18)) >= 0) {
        goto label_8;
    }
    *(esp) = "unparsable value for LS_COLORS environment variable";
    eax = gettext ();
    error (0, 0, eax);
    eax = color_buf;
    free (eax);
    eax = color_ext_list;
    *((ebp - 0xc)) = eax;
    while (*((ebp - 0xc)) != 0) {
        eax = *((ebp - 0xc));
        *((ebp - 8)) = eax;
        eax = *((ebp - 0xc));
        eax = *((eax + 0x10));
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 8));
        free (eax);
    }
    *(obj.print_with_color) = 0;
label_8:
    eax = *(0x8064210);
    if (eax == 6) {
        eax = *(str.01_36);
        eax = strncmp (eax, "target", 6);
        if (eax != 0) {
            goto label_1;
        }
        *(obj.color_symlink_as_referent) = 1;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804ff72 */
#include <stdint.h>
 
int32_t dbg_prep_non_filename_text (void) {
    /* void prep_non_filename_text(); */
    eax = .comment;
    if (eax != 0) {
        *(esp) = 0x80641f0;
        put_indicator ();
    } else {
        *(esp) = obj.color_indicator;
        put_indicator ();
        *(esp) = 0x80641f8;
        put_indicator ();
        *(esp) = 0x80641e8;
        put_indicator ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804c7a5 */
#include <stdint.h>
 
int32_t dbg_clear_files (void) {
    size_t i;
    fileinfo * f;
    /* void clear_files(); */
    *((ebp - 8)) = 0;
    while (*((ebp - 8)) < eax) {
        edx = sorted_file;
        eax = *((ebp - 8));
        eax <<= 2;
        eax = edx + eax;
        *((ebp - 4)) = eax;
        eax = *((ebp - 4));
        eax = *(eax);
        free (eax);
        eax = *((ebp - 4));
        eax = *((eax + 4));
        free (eax);
        eax = *((ebp - 4));
        eax = *((eax + 0x70));
        if (eax != obj.UNKNOWN_SECURITY_CONTEXT) {
            eax = *((ebp - 4));
            eax = *((eax + 0x70));
            *(esp) = eax;
            freecon ();
        }
        *((ebp - 8))++;
        eax = cwd_n_used;
    }
    *(obj.cwd_n_used) = 0;
    *(obj.any_has_acl) = 0;
    *(obj.inode_number_width) = 0;
    *(obj.block_size_width) = 0;
    *(obj.nlink_width) = 0;
    *(obj.owner_width) = 0;
    *(obj.group_width) = 0;
    *(obj.author_width) = 0;
    *(obj.scontext_width) = 0;
    *(obj.major_device_number_width) = 0;
    *(obj.minor_device_number_width) = 0;
    *(obj.file_size_width) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804c888 */
#include <stdint.h>
 
int32_t dbg_gobble_file (struct sigaction * arg_10h, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_35ch;
    uint32_t var_358h;
    int32_t var_351h;
    int32_t var_350h;
    int32_t var_34ch;
    int32_t var_348h;
    _Bool command_line_arg;
    ino_t inode;
    struct sigaction * var_33ch;
    stat linkstats;
    int32_t var_31ch;
    char[21] buf;
    int32_t var_8ah;
    char[21] b;
    uintmax_t blocks;
    int32_t var_5ch;
    fileinfo * f;
    char * absolute_name;
    _Bool do_deref;
    int32_t err;
    _Bool need_lstat;
    _Bool have_acl;
    int32_t attr_len;
    int32_t n;
    char * linkname;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    size_t var_24h;
    int32_t b_len;
    size_t var_bp_1ch;
    uintmax_t size;
    int32_t var_bp_14h;
    int32_t var_bp_10h;
    int32_t len;
    int32_t var_bp_4h;
    char const * name;
    filetype type;
    char const * dirname;
    char * errname;
    size_t format;
    char * function;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_sp_20h;
    /* uintmax_t gobble_file(char const * name,filetype type,ino_t inode,_Bool command_line_arg,char const * dirname); */
    eax = *((ebp + 0x18));
    edx = *((ebp + 0x10));
    *((ebp - 0x340)) = edx;
    edx = *((ebp + 0x14));
    *((ebp - 0x33c)) = edx;
    *((ebp - 0x344)) = al;
    *((ebp - 0x60)) = 0;
    *((ebp - 0x5c)) = 0;
    if (*((ebp - 0x344)) != 0) {
        eax = *((ebp - 0x340));
        edx = *((ebp - 0x33c));
        eax |= edx;
        if (eax == 0) {
            goto label_0;
        }
        assert_fail (0x805f8bc, "ls.c", 0x9f7);
    }
label_0:
    edx = cwd_n_used;
    eax = cwd_n_alloc;
    if (edx == eax) {
        eax = cwd_n_alloc;
        edx = cwd_file;
        *((esp + 8)) = 0xf0;
        *((esp + 4)) = eax;
        *(esp) = edx;
        eax = xnrealloc ();
        *(obj.cwd_file) = eax;
        eax = cwd_n_alloc;
        eax += eax;
        *(obj.cwd_n_alloc) = eax;
    }
    ecx = cwd_file;
    eax = cwd_n_used;
    edx = eax*8;
    eax = edx;
    eax <<= 4;
    eax -= edx;
    eax = ecx + eax;
    *((ebp - 0x54)) = eax;
    eax = *((ebp - 0x54));
    memset (eax, 0, 0x78);
    ecx = *((ebp - 0x54));
    eax = *((ebp - 0x340));
    edx = *((ebp - 0x33c));
    *((ecx + 0x60)) = eax;
    *((ecx + 0x64)) = edx;
    edx = *((ebp - 0x54));
    eax = *((ebp + 0xc));
    *((edx + 0x68)) = eax;
    if (*((ebp - 0x344)) == 0) {
        eax = *(obj.format_needs_stat);
        if (al != 0) {
            goto label_1;
        }
        if (*((ebp + 0xc)) == 3) {
            eax = *(obj.print_with_color);
            if (al != 0) {
                goto label_1;
            }
        }
        eax = *(obj.print_inode);
        if (al == 0) {
            eax = *(obj.format_needs_type);
            if (al == 0) {
                goto label_2;
            }
        }
        if (*((ebp + 0xc)) != 6) {
            if (*((ebp + 0xc)) != 0) {
                goto label_2;
            }
        }
        eax = dereference;
        if (eax == 5) {
            goto label_1;
        }
        eax = *((ebp - 0x344));
        eax ^= 1;
        if (al == 0) {
            eax = dereference;
            if (eax != 2) {
                goto label_1;
            }
        }
        eax = *(obj.color_symlink_as_referent);
        if (al != 0) {
            goto label_1;
        }
        eax = *(obj.check_symlink_color);
        if (al != 0) {
            goto label_1;
        }
label_2:
        eax = *(obj.print_inode);
        eax ^= 1;
        if (al == 0) {
            eax = *((ebp - 0x340));
            edx = *((ebp - 0x33c));
            eax |= edx;
            if (eax == 0) {
                goto label_1;
            }
        }
        eax = *(obj.format_needs_type);
        eax ^= 1;
        if (al != 0) {
            goto label_3;
        }
        if (*((ebp + 0xc)) == 0) {
            goto label_1;
        }
        if (*((ebp - 0x344)) != 0) {
            goto label_1;
        }
        if (*((ebp + 0xc)) != 5) {
            goto label_3;
        }
        eax = indicator_style;
        if (eax == 3) {
            goto label_1;
        }
        eax = *(obj.print_with_color);
        eax ^= 1;
        if (al != 0) {
            goto label_3;
        }
        *(esp) = 0xd;
        al = is_colored ();
        if (al == 0) {
            goto label_3;
        }
    }
label_1:
    eax = *((ebp + 8));
    eax = *(eax);
    if (al != 0x2f) {
        eax = *((ebp + 0x1c));
        eax = *(eax);
        if (al != 0) {
            goto label_4;
        }
    }
    eax = *((ebp + 8));
    *((ebp - 0x50)) = eax;
    goto label_5;
label_4:
    eax = *((ebp + 8));
    eax = strlen (eax);
    ebx = eax;
    eax = *((ebp + 0x1c));
    strlen (eax);
    eax = ebx + eax;
    eax += 2;
    eax += 0xf;
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    eax = esp + 0x20;
    *((ebp - 0x35c)) = eax;
    eax = *((ebp - 0x35c));
    eax += 0xf;
    eax >>= 4;
    eax <<= 4;
    *((ebp - 0x35c)) = eax;
    edx = *((ebp - 0x35c));
    *((ebp - 0x50)) = edx;
    eax = *((ebp + 8));
    *((esp + 8)) = eax;
    eax = *((ebp + 0x1c));
    *((esp + 4)) = eax;
    eax = *((ebp - 0x50));
    *(esp) = eax;
    attach ();
label_5:
    eax = dereference;
    *((ebp - 0x358)) = eax;
    if (*((ebp - 0x358)) >= 3) {
        if (*((ebp - 0x358)) > 4) {
            if (*((ebp - 0x358)) != 5) {
                goto label_6;
            }
            eax = *((ebp - 0x54));
            eax += 8;
            eax = *((ebp - 0x50));
            eax = stat64 (eax, eax);
            *((ebp - 0x48)) = eax;
            *((ebp - 0x49)) = 1;
            goto label_7;
        }
        if (*((ebp - 0x344)) == 0) {
            goto label_6;
        }
        eax = *((ebp - 0x54));
        eax += 8;
        eax = *((ebp - 0x50));
        eax = stat64 (eax, eax);
        *((ebp - 0x48)) = eax;
        *((ebp - 0x49)) = 1;
        eax = dereference;
        if (eax == 3) {
            goto label_7;
        }
        if (*((ebp - 0x48)) < 0) {
            eax = errno_location ();
            eax = *(eax);
            ebp - 0x351 = (eax == 2) ? 1 : 0;
        } else {
            eax = *((ebp - 0x54));
            eax = *((eax + 0x18));
            eax &= 0xf000;
            ebp - 0x351 = (eax != 0x4000) ? 1 : 0;
        }
        edx = *((ebp - 0x351));
        *((ebp - 0x42)) = dl;
        eax = *((ebp - 0x42));
        eax ^= 1;
        if (al != 0) {
            goto label_7;
        }
    }
label_6:
    eax = *((ebp - 0x54));
    eax += 8;
    eax = *((ebp - 0x50));
    eax = lstat64 (eax, eax);
    *((ebp - 0x48)) = eax;
    *((ebp - 0x49)) = 0;
label_7:
    if (*((ebp - 0x48)) != 0) {
        *(esp) = "cannot access %s";
        eax = gettext ();
        ecx = *((ebp - 0x344));
        edx = *((ebp - 0x50));
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        file_failure (ecx);
        if (*((ebp - 0x344)) != 0) {
            *((ebp - 0x350)) = 0;
            *((ebp - 0x34c)) = 0;
        } else {
            eax = *((ebp + 8));
        }
        *(esp) = eax;
        eax = xstrdup ();
        edx = eax;
        eax = *((ebp - 0x54));
        *(eax) = edx;
        eax = cwd_n_used;
        eax++;
        *(obj.cwd_n_used) = eax;
        *((ebp - 0x350)) = 0;
        *((ebp - 0x34c)) = 0;
    } else {
        eax = *((ebp - 0x54));
        *((eax + 0x74)) = 1;
        eax = format;
        if (eax != 0) {
            eax = *(obj.print_scontext);
            if (al == 0) {
                goto label_8;
            }
        }
        *((ebp - 0x41)) = 0;
        if (*((ebp - 0x49)) != 0) {
            eax = *((ebp - 0x54));
            eax += 0x70;
            *((esp + 4)) = eax;
            eax = *((ebp - 0x50));
            *(esp) = eax;
            eax = getfilecon ();
            *((ebp - 0x348)) = eax;
        } else {
            eax = *((ebp - 0x54));
            eax += 0x70;
            *((esp + 4)) = eax;
            eax = *((ebp - 0x50));
            *(esp) = eax;
            eax = lgetfilecon ();
            *((ebp - 0x348)) = eax;
        }
        eax = *((ebp - 0x348));
        *((ebp - 0x40)) = eax;
        eax = *((ebp - 0x40));
        eax >>= 0x1f;
        *((ebp - 0x48)) = eax;
        if (*((ebp - 0x48)) == 0) {
            eax = *((ebp - 0x54));
            eax = *((eax + 0x70));
            eax = strcmp ("unlabeled", eax);
            al = (eax != 0) ? 1 : 0;
            *((ebp - 0x41)) = al;
        } else {
            eax = *((ebp - 0x54));
            *((eax + 0x70)) = 0x80641c8;
            eax = errno_location ();
            eax = *(eax);
            if (eax != 0x5f) {
                eax = errno_location ();
                eax = *(eax);
                if (eax != 0x3d) {
                    goto label_9;
                }
            }
            *((ebp - 0x48)) = 0;
        }
label_9:
        if (*((ebp - 0x48)) == 0) {
            eax = *((ebp - 0x41));
            eax ^= 1;
            if (al == 0) {
                goto label_10;
            }
            eax = format;
            if (eax != 0) {
                goto label_10;
            }
            eax = *((ebp - 0x54));
            eax += 8;
            *((esp + 4)) = eax;
            eax = *((ebp - 0x50));
            *(esp) = eax;
            eax = file_has_acl ();
            *((ebp - 0x3c)) = eax;
            eax = *((ebp - 0x3c));
            eax >>= 0x1f;
            *((ebp - 0x48)) = eax;
            al = (*((ebp - 0x3c)) > 0) ? 1 : 0;
            *((ebp - 0x41)) = al;
        }
label_10:
        edx = *((ebp - 0x54));
        eax = *((ebp - 0x41));
        *((edx + 0x76)) = al;
        eax = *(obj.any_has_acl);
        edx = (int32_t) al;
        eax = *((ebp - 0x41));
        eax |= edx;
        al = (eax != 0) ? 1 : 0;
        *(obj.any_has_acl) = al;
        if (*((ebp - 0x48)) != 0) {
            eax = *((ebp - 0x50));
            *(esp) = eax;
            eax = quotearg_colon ();
            ebx = eax;
            eax = errno_location ();
            eax = *(eax);
            *((esp + 0xc)) = ebx;
            error (0, eax, 0x805f916);
        }
label_8:
        eax = *((ebp - 0x54));
        eax = *((eax + 0x18));
        eax &= 0xf000;
        if (eax == 0xa000) {
            eax = format;
            if (eax != 0) {
                eax = *(obj.check_symlink_color);
                if (al == 0) {
                    goto label_11;
                }
            }
            eax = *((ebp - 0x344));
            *((esp + 8)) = eax;
            eax = *((ebp - 0x54));
            *((esp + 4)) = eax;
            eax = *((ebp - 0x50));
            get_link_name (eax);
            eax = *((ebp - 0x54));
            eax = *((eax + 4));
            *((esp + 4)) = eax;
            eax = *((ebp - 0x50));
            *(esp) = eax;
            eax = make_link_name ();
            *((ebp - 0x38)) = eax;
            if (*((ebp - 0x38)) != 0) {
                eax = indicator_style;
                if (eax <= 1) {
                    eax = *(obj.check_symlink_color);
                    if (al == 0) {
                        goto label_12;
                    }
                }
                eax = ebp - 0x32c;
                eax = *((ebp - 0x38));
                eax = stat64 (eax, eax);
                if (eax != 0) {
                    goto label_12;
                }
                eax = *((ebp - 0x54));
                *((eax + 0x75)) = 1;
                eax = *((ebp - 0x344));
                eax ^= 1;
                if (al == 0) {
                    eax = format;
                    if (eax == 0) {
                        goto label_13;
                    }
                    eax = *((ebp - 0x31c));
                    eax &= 0xf000;
                    if (eax == 0x4000) {
                        goto label_12;
                    }
                }
label_13:
                edx = *((ebp - 0x31c));
                eax = *((ebp - 0x54));
                *((eax + 0x6c)) = edx;
            }
label_12:
            eax = *((ebp - 0x38));
            free (eax);
        }
label_11:
        eax = *((ebp - 0x54));
        eax = *((eax + 0x18));
        eax &= 0xf000;
        if (eax == 0xa000) {
            eax = *(obj.check_symlink_color);
            eax ^= 1;
            if (al == 0) {
                goto label_14;
            }
            eax = *((ebp - 0x54));
            *((eax + 0x75)) = 1;
        }
label_14:
        eax = *((ebp - 0x54));
        eax = *((eax + 0x18));
        eax &= 0xf000;
        if (eax == 0xa000) {
            eax = *((ebp - 0x54));
            *((eax + 0x68)) = 6;
        } else {
            eax = *((ebp - 0x54));
            eax = *((eax + 0x18));
            eax &= 0xf000;
            if (eax == 0x4000) {
                edx = *((ebp - 0x344));
                eax = *(obj.immediate_dirs);
                eax ^= 1;
                eax = (int32_t) al;
                eax &= edx;
                if (eax != 0) {
                    eax = *((ebp - 0x54));
                    *((eax + 0x68)) = 9;
                } else {
                    eax = *((ebp - 0x54));
                }
                *((eax + 0x68)) = 3;
            } else {
                eax = *((ebp - 0x54));
                *((eax + 0x68)) = 5;
            }
        }
        eax = *((ebp - 0x54));
        edx = *((eax + 0x44));
        eax = *((eax + 0x40));
        *((ebp - 0x60)) = eax;
        *((ebp - 0x5c)) = edx;
        eax = format;
        if (eax != 0) {
            eax = *(obj.print_block_size);
            if (al == 0) {
                goto label_15;
            }
        }
        eax = output_block_size;
        edx = .comment;
        ecx = human_output_opts;
        *((esp + 0x18)) = eax;
        *((esp + 0x1c)) = edx;
        eax = ebp - 0x32c;
        eax = *((ebp - 0x60));
        edx = *((ebp - 0x5c));
        eax = human_readable (0x200, edx, eax);
        *((esp + 4)) = 0;
        *(esp) = eax;
        eax = gnu_mbswidth ();
        *((ebp - 0x34)) = eax;
        eax = block_size_width;
        if (eax < *((ebp - 0x34))) {
            eax = *((ebp - 0x34));
            *(obj.block_size_width) = eax;
        }
label_15:
        eax = format;
        if (eax == 0) {
            eax = *(obj.print_owner);
            if (al != 0) {
                eax = *((ebp - 0x54));
                eax = *((eax + 0x20));
                *(esp) = eax;
                eax = format_user_width ();
                *((ebp - 0x30)) = eax;
                eax = owner_width;
                if (eax >= *((ebp - 0x30))) {
                    goto label_16;
                }
                eax = *((ebp - 0x30));
                *(obj.owner_width) = eax;
            }
label_16:
            eax = *(obj.print_group);
            if (al != 0) {
                eax = *((ebp - 0x54));
                eax = *((eax + 0x24));
                *(esp) = eax;
                eax = format_group_width ();
                *((ebp - 0x2c)) = eax;
                eax = group_width;
                if (eax >= *((ebp - 0x2c))) {
                    goto label_17;
                }
                eax = *((ebp - 0x2c));
                *(obj.group_width) = eax;
            }
label_17:
            eax = *(obj.print_author);
            if (al == 0) {
                goto label_18;
            }
            eax = *((ebp - 0x54));
            eax = *((eax + 0x20));
            *(esp) = eax;
            eax = format_user_width ();
            *((ebp - 0x28)) = eax;
            eax = author_width;
            if (eax >= *((ebp - 0x28))) {
                goto label_18;
            }
            eax = *((ebp - 0x28));
            *(obj.author_width) = eax;
        }
label_18:
        eax = *(obj.print_scontext);
        if (al != 0) {
            eax = *((ebp - 0x54));
            eax = *((eax + 0x70));
            eax = strlen (eax);
            *((ebp - 0x24)) = eax;
            eax = scontext_width;
            if (eax >= *((ebp - 0x24))) {
                goto label_19;
            }
            eax = *((ebp - 0x24));
            *(obj.scontext_width) = eax;
        }
label_19:
        eax = format;
        if (eax == 0) {
            eax = *((ebp - 0x54));
            eax = *((eax + 0x1c));
            edx = *((eax + 0x1c));
            ecx = 0;
            eax = ebp - 0x75;
            *((esp + 8)) = eax;
            eax = umaxtostr (edx, ecx);
            eax = strlen (eax);
            *((ebp - 0x20)) = eax;
            eax = nlink_width;
            if (eax < *((ebp - 0x20))) {
                eax = *((ebp - 0x20));
                *(obj.nlink_width) = eax;
            }
            eax = *((ebp - 0x54));
            eax = *((eax + 0x18));
            eax &= 0xf000;
            if (eax != 0x2000) {
                eax = *((ebp - 0x54));
                eax = *((eax + 0x18));
                eax &= 0xf000;
                if (eax != 0x6000) {
                    goto label_20;
                }
            }
            eax = *((ebp - 0x54));
            edx = *((eax + 0x2c));
            eax = *((eax + 0x28));
            *(esp) = eax;
            *((esp + 4)) = edx;
            eax = gnu_dev_major ();
            edx = eax;
            ecx = 0;
            eax = ebp - 0x8a;
            *((esp + 8)) = eax;
            eax = umaxtostr (edx, ecx);
            eax = strlen (eax);
            *((ebp - 0x1c)) = eax;
            eax = major_device_number_width;
            if (eax < *((ebp - 0x1c))) {
                eax = *((ebp - 0x1c));
                *(obj.major_device_number_width) = eax;
            }
            eax = *((ebp - 0x54));
            edx = *((eax + 0x2c));
            eax = *((eax + 0x28));
            *(esp) = eax;
            *((esp + 4)) = edx;
            eax = gnu_dev_minor ();
            edx = eax;
            ecx = 0;
            eax = ebp - 0x8a;
            *((esp + 8)) = eax;
            eax = umaxtostr (edx, ecx);
            eax = strlen (eax);
            *((ebp - 0x1c)) = eax;
            eax = minor_device_number_width;
            if (eax < *((ebp - 0x1c))) {
                eax = *((ebp - 0x1c));
                *(obj.minor_device_number_width) = eax;
            }
            eax = major_device_number_width;
            edx = eax + 2;
            eax = minor_device_number_width;
            eax = edx + eax;
            *((ebp - 0x1c)) = eax;
            eax = file_size_width;
            if (eax >= *((ebp - 0x1c))) {
                goto label_3;
            }
            eax = *((ebp - 0x1c));
            *(obj.file_size_width) = eax;
            goto label_3;
label_20:
            eax = *((ebp - 0x54));
            edx = *((eax + 0x38));
            eax = *((eax + 0x34));
            eax = unsigned_file_size (eax, edx);
            *((ebp - 0x18)) = eax;
            *((ebp - 0x14)) = edx;
            eax = file_output_block_size;
            edx = .comment;
            ecx = human_output_opts;
            *((esp + 0x18)) = eax;
            *((esp + 0x1c)) = edx;
            eax = ebp - 0x32c;
            eax = *((ebp - 0x18));
            edx = *((ebp - 0x14));
            eax = human_readable (1, edx, eax);
            *((esp + 4)) = 0;
            *(esp) = eax;
            eax = gnu_mbswidth ();
            *((ebp - 0x10)) = eax;
            eax = file_size_width;
            if (eax >= *((ebp - 0x10))) {
                goto label_3;
            }
            eax = *((ebp - 0x10));
            *(obj.file_size_width) = eax;
        }
label_3:
        eax = *(obj.print_inode);
        if (al != 0) {
            eax = *((ebp - 0x54));
            edx = *((eax + 0x60));
            ecx = *((eax + 0x64));
            eax = ebp - 0x9f;
            *((esp + 8)) = eax;
            eax = umaxtostr (edx, ecx);
            eax = strlen (eax);
            *((ebp - 0xc)) = eax;
            eax = inode_number_width;
            if (eax >= *((ebp - 0xc))) {
                goto label_21;
            }
            eax = *((ebp - 0xc));
            *(obj.inode_number_width) = eax;
        }
label_21:
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = xstrdup ();
        edx = eax;
        eax = *((ebp - 0x54));
        *(eax) = edx;
        eax = cwd_n_used;
        eax++;
        *(obj.cwd_n_used) = eax;
        eax = *((ebp - 0x60));
        edx = *((ebp - 0x5c));
        *((ebp - 0x350)) = eax;
        *((ebp - 0x34c)) = edx;
    }
    eax = *((ebp - 0x350));
    edx = *((ebp - 0x34c));
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805891e */
#include <stdint.h>
 
int32_t dbg_xnrealloc (void) {
    void * p;
    size_t n;
    size_t s;
    int32_t var_4h;
    /* void * xnrealloc(void * p,size_t n,size_t s); */
    eax = 0xffffffff;
    edx = 0;
    eax = *(edx:eax) / ebp + 0x10;
    edx = *(edx:eax) % ebp + 0x10;
    if (eax < *((ebp + 0xc))) {
        xalloc_die ();
    }
    eax = *((ebp + 0xc));
    eax *= *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    xrealloc ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804985c */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8050baf */
#include <stdint.h>
 
int32_t dbg_attach (void) {
    char const * dirnamep;
    char * dest;
    char const * dirname;
    char const * name;
    /* void attach(char * dest,char const * dirname,char const * name); */
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0xc));
    eax = *(eax);
    if (al != 0x2e) {
        goto label_0;
    }
    eax = *((ebp + 0xc));
    eax++;
    eax = *(eax);
    if (al == 0) {
        goto label_1;
    }
    while (al != 0) {
        eax = *((ebp - 4));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dl;
        *((ebp + 8))++;
        *((ebp - 4))++;
label_0:
        eax = *((ebp - 4));
        eax = *(eax);
    }
    eax = *((ebp - 4));
    if (eax <= *((ebp + 0xc))) {
        goto label_1;
    }
    eax = *((ebp - 4));
    eax--;
    eax = *(eax);
    if (al == 0x2f) {
        goto label_1;
    }
    eax = *((ebp + 8));
    *(eax) = 0x2f;
    *((ebp + 8))++;
    while (al != 0) {
        eax = *((ebp + 0x10));
        edx = *(eax);
        eax = *((ebp + 8));
        *(eax) = dl;
        *((ebp + 8))++;
        *((ebp + 0x10))++;
label_1:
        eax = *((ebp + 0x10));
        eax = *(eax);
    }
    eax = *((ebp + 8));
    *(eax) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e3c0 */
#include <stdint.h>
 
int32_t stat64 (uint32_t arg_8h, char * arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    eax = *((ebp + 0xc));
    eax = _i686_get_pc_thunk_bx (ebx);
    ebx += 0x5c25;
    *(esp) = 3;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    xstat64 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e37a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80495bc */
#include <stdint.h>
 
void xstat64 (void) {
    xstat64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e440 */
#include <stdint.h>
 
int32_t lstat64 (int32_t arg_8h, char * arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    eax = *((ebp + 0xc));
    eax = _i686_get_pc_thunk_bx (ebx);
    ebx += 0x5ba5;
    *(esp) = 3;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    lxstat64 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804971c */
#include <stdint.h>
 
void lxstat64 (void) {
    lxstat64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804bec4 */
#include <stdint.h>
 
int32_t dbg_file_failure (uint32_t arg_8h) {
    _Bool serious;
    char const * message;
    char const * file;
    int32_t errname;
    char * format;
    int32_t var_ch;
    /* void file_failure(_Bool serious,char const * message,char const * file); */
    eax = *((ebp + 8));
    *((ebp - 8)) = al;
    eax = *((ebp + 0x10));
    *(esp) = eax;
    eax = quotearg_colon ();
    ebx = eax;
    eax = errno_location ();
    edx = *(eax);
    *((esp + 0xc)) = ebx;
    eax = *((ebp + 0xc));
    error (0, edx, eax);
    eax = *((ebp - 8));
    set_exit_status (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8055b8f */
#include <stdint.h>
 
int32_t dbg_quotearg_colon (void) {
    char const * arg;
    int32_t var_4h;
    /* char * quotearg_colon(char const * arg); */
    *((esp + 4)) = 0x3a;
    eax = *((ebp + 8));
    quotearg_char (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8055afc */
#include <stdint.h>
 
int32_t dbg_quotearg_char (int32_t arg_ch) {
    char ch;
    quoting_options options;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    char const * arg;
    int32_t var_sp_4h;
    int32_t var_sp_8h;
    int32_t var_sp_ch;
    /* char * quotearg_char(char const * arg,char ch); */
    eax = *((ebp + 0xc));
    *((ebp - 0x34)) = al;
    eax = default_quoting_options;
    *((ebp - 0x24)) = eax;
    eax = .comment;
    *((ebp - 0x20)) = eax;
    eax = .comment;
    *((ebp - 0x1c)) = eax;
    eax = .comment;
    *((ebp - 0x18)) = eax;
    eax = .comment;
    *((ebp - 0x14)) = eax;
    eax = .comment;
    *((ebp - 0x10)) = eax;
    eax = .comment;
    *((ebp - 0xc)) = eax;
    eax = .comment;
    *((ebp - 8)) = eax;
    eax = .comment;
    *((ebp - 4)) = eax;
    eax = *((ebp - 0x34));
    *((esp + 8)) = 1;
    *((esp + 4)) = eax;
    eax = ebp - 0x24;
    set_char_quoting (eax);
    eax = ebp - 0x24;
    *((esp + 0xc)) = eax;
    *((esp + 8)) = 0xffffffff;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    quotearg_n_options (0);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804be91 */
#include <stdint.h>
 
int32_t dbg_set_exit_status (int32_t arg_8h) {
    _Bool serious;
    /* void set_exit_status(_Bool serious); */
    eax = *((ebp + 8));
    *((ebp - 4)) = al;
    if (*((ebp - 4)) != 0) {
        *(obj.exit_status) = 2;
    } else {
        eax = exit_status;
        if (eax != 0) {
            goto label_0;
        }
        *(obj.exit_status) = 1;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058ae0 */
#include <stdint.h>
 
int32_t dbg_xstrdup (void) {
    char const * string;
    int32_t var_4h;
    /* char * xstrdup(char const * string); */
    eax = *((ebp + 8));
    eax = strlen (eax);
    eax++;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    xmemdup ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058ab5 */
#include <stdint.h>
 
int32_t dbg_xmemdup (void) {
     const * p;
    size_t s;
    void * s2;
    size_t n;
    /* void * xmemdup( const * p,size_t s); */
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = xmalloc ();
    edx = eax;
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    memcpy (edx, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804983c */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d30d */
#include <stdint.h>
 
int32_t dbg_getfilecon (void) {
    char const * s;
    char ** con;
    /* int getfilecon(char const * s,char ** con); */
    errno_location ();
    *(eax) = 0x5f;
    eax = 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d325 */
#include <stdint.h>
 
int32_t dbg_lgetfilecon (void) {
    char const * s;
    char ** con;
    /* int lgetfilecon(char const * s,char ** con); */
    errno_location ();
    *(eax) = 0x5f;
    eax = 0xffffffff;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049a9c */
#include <stdint.h>
 
void strcmp (void) {
    strcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051f54 */
#include <stdint.h>
 
int32_t dbg_file_has_acl (void) {
    char const * name;
    stat const * sb;
    /* int file_has_acl(char const * name,stat const * sb); */
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d36f */
#include <stdint.h>
 
int32_t dbg_get_link_name (size_t arg_10h) {
    _Bool command_line_arg;
    char const * filename;
    fileinfo * f;
    int32_t var_sp_4h;
    int32_t var_8h;
    /* void get_link_name(char const * filename,fileinfo * f,_Bool command_line_arg); */
    eax = *((ebp + 0x10));
    *((ebp - 4)) = al;
    eax = *((ebp + 0xc));
    edx = *((eax + 0x38));
    eax = *((eax + 0x34));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    eax = areadlink_with_size (eax);
    edx = eax;
    eax = *((ebp + 0xc));
    *((eax + 4)) = edx;
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    if (eax == 0) {
        *(esp) = "cannot read symbolic link %s";
        eax = gettext ();
        ecx = *((ebp - 4));
        edx = *((ebp + 8));
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        file_failure (ecx);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80513d8 */
#include <stdint.h>
 
int32_t dbg_areadlink_with_size (int32_t arg_ch) {
    uint32_t var_2ch;
    uint32_t var_28h;
    void * var_24h;
    int32_t saved_errno;
    char * buffer;
    size_t link_length;
    ssize_t r;
    size_t buf_size;
    size_t initial_limit;
    size_t INITIAL_LIMIT_BOUND;
    size_t symlink_max;
    char const * file;
    void * var_sp_4h;
    size_t var_sp_8h;
    /* char * areadlink_with_size(char const * file,size_t size); */
    *((ebp - 4)) = 0x400;
    *((ebp - 8)) = 0x2000;
    eax = *((ebp - 4));
    if (eax < *((ebp - 8))) {
        eax = *((ebp - 4));
        eax++;
        *((ebp - 0x2c)) = eax;
    } else {
        eax = *((ebp - 8));
        *((ebp - 0x2c)) = eax;
    }
    eax = *((ebp - 0x2c));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0xc));
    if (eax < *((ebp - 0xc))) {
        eax = *((ebp + 0xc));
        eax++;
        *((ebp - 0x28)) = eax;
    } else {
        eax = *((ebp - 0xc));
        *((ebp - 0x28)) = eax;
    }
    eax = *((ebp - 0x28));
    *((ebp - 0x10)) = eax;
    do {
label_0:
        eax = *((ebp - 0x10));
        eax = malloc (eax);
        *((ebp - 0x1c)) = eax;
        if (*((ebp - 0x1c)) == 0) {
            *((ebp - 0x24)) = 0;
            goto label_1;
        }
        eax = *((ebp - 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x1c));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = readlink ();
        *((ebp - 0x14)) = eax;
        eax = *((ebp - 0x14));
        *((ebp - 0x18)) = eax;
        if (*((ebp - 0x14)) < 0) {
            eax = errno_location ();
            eax = *(eax);
            if (eax == 0x22) {
                goto label_2;
            }
            eax = errno_location ();
            eax = *(eax);
            *((ebp - 0x20)) = eax;
            eax = *((ebp - 0x1c));
            free (eax);
            eax = errno_location ();
            edx = eax;
            eax = *((ebp - 0x20));
            *(edx) = eax;
            *((ebp - 0x24)) = 0;
            goto label_1;
        }
label_2:
        eax = *((ebp - 0x18));
        if (eax < *((ebp - 0x10))) {
            eax = *((ebp - 0x18));
            edx = *((ebp - 0x1c));
            eax = edx + eax;
            *(eax) = 0;
            eax = *((ebp - 0x1c));
            *((ebp - 0x24)) = eax;
            goto label_1;
        }
        eax = *((ebp - 0x1c));
        free (eax);
        if (*((ebp - 0x10)) > 0x3fffffff) {
            goto label_3;
        }
        *((ebp - 0x10)) <<= 1;
    } while (1);
label_3:
    if (*((ebp - 0x10)) <= 0x7ffffffe) {
        *((ebp - 0x10)) = 0x7fffffff;
        goto label_0;
    }
    errno_location ();
    *(eax) = 0xc;
    *((ebp - 0x24)) = 0;
label_1:
    eax = *((ebp - 0x24));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d3ca */
#include <stdint.h>
 
int32_t dbg_make_link_name (void) {
    char * var_14h;
    char * linkbuf;
    size_t bufsiz;
    char const * name;
    char const * linkname;
    char * src;
    size_t var_sp_8h;
    /* char * make_link_name(char const * name,char const * linkname); */
    if (*((ebp + 0xc)) == 0) {
        *((ebp - 0x14)) = 0;
    } else {
        eax = *((ebp + 0xc));
        eax = *(eax);
        if (al == 0x2f) {
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = xstrdup ();
            *((ebp - 0x14)) = eax;
        } else {
            eax = *((ebp + 8));
            eax = strrchr (eax, 0x2f);
            *((ebp - 8)) = eax;
            if (*((ebp - 8)) == 0) {
                eax = *((ebp + 0xc));
                *(esp) = eax;
                eax = xstrdup ();
                *((ebp - 0x14)) = eax;
            } else {
                edx = *((ebp - 8));
                eax = *((ebp + 8));
                ecx = edx;
                ecx -= eax;
                eax = ecx;
                eax++;
                *((ebp - 4)) = eax;
                eax = *((ebp + 0xc));
                eax = strlen (eax);
                eax += *((ebp - 4));
                eax++;
                *(esp) = eax;
                eax = xmalloc ();
                *((ebp - 8)) = eax;
                eax = *((ebp - 4));
                eax = *((ebp + 8));
                eax = *((ebp - 8));
                strncpy (eax, eax, eax);
                edx = *((ebp - 4));
                eax = *((ebp - 8));
                edx = eax + edx;
                eax = *((ebp + 0xc));
                strcpy (edx, eax);
                eax = *((ebp - 8));
                *((ebp - 0x14)) = eax;
            }
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805370f */
#include <stdint.h>
 
int32_t dbg_human_readable (int32_t arg_8h, char * arg_ch, int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h) {
    int32_t var_18ch;
    int32_t var_188h;
    int32_t var_184h;
    int32_t var_160h;
    int32_t var_15ch;
    int32_t var_158h;
    int32_t var_154h;
    int32_t var_150h;
    int32_t var_14ch;
    int32_t var_144h;
    int32_t var_140h;
    int32_t var_13ch;
    int32_t var_110h;
    int32_t var_10ch;
    int32_t var_108h;
    int32_t var_104h;
    int32_t var_100h;
    int32_t var_fch;
    uint32_t var_f1h;
    int32_t var_f0h;
    uint32_t var_e9h;
    int32_t var_e8h;
    int32_t var_e1h;
    uintmax_t to_block_size;
    uint32_t var_dch;
    uintmax_t from_block_size;
    uint32_t var_d4h;
    int32_t var_d0h;
    char * var_cch;
    long double e;
    int32_t var_c4h;
    int32_t var_c0h;
    long double damt;
    int32_t var_b4h;
    int32_t var_b0h;
    long double dto_block_size;
    uintmax_t power;
    int32_t var_94h;
    uint32_t var_90h;
    uint32_t var_8ch;
    int32_t var_88h;
    int32_t var_84h;
    uintmax_t divisor;
    char * var_7ch;
    uintmax_t multiplier;
    int32_t var_74h;
    uintmax_t amt;
    uint32_t var_6ch;
    int32_t digit;
    uint32_t r2;
    uint32_t r10;
    size_t nonintegerlen;
    size_t buflen;
    size_t pointlen;
    lconv const * l;
    char const * thousands_sep;
    char const * grouping;
    size_t decimal_pointlen;
    char const * decimal_point;
    int32_t rounding;
    char const * integerlim;
    char * psuffix;
    char * p;
    int32_t exponent_max;
    int32_t exponent;
    int32_t tenths;
    uint32_t base;
    int32_t inexact_style;
    char * buf;
    int32_t opts;
    char * s2;
    size_t n;
    int32_t var_ch;
    int32_t var_8h;
    char * format;
    size_t var_8h_3;
    int32_t var_ch_2;
    /* char * human_readable(uintmax_t n,char * buf,int opts,uintmax_t from_block_size,uintmax_t to_block_size); */
    eax = *((ebp + 8));
    *((ebp - 0xd0)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xcc)) = eax;
    eax = *((ebp + 0x18));
    *((ebp - 0xd8)) = eax;
    eax = *((ebp + 0x1c));
    *((ebp - 0xd4)) = eax;
    eax = *((ebp + 0x20));
    *((ebp - 0xe0)) = eax;
    eax = *((ebp + 0x24));
    *((ebp - 0xdc)) = eax;
    eax = *((ebp + 0x14));
    eax &= 3;
    *((ebp - 0x1c)) = eax;
    eax = *((ebp + 0x14));
    eax &= 0x20;
    if (eax != 0) {
        *((ebp - 0x144)) = 0x400;
    } else {
        *((ebp - 0x144)) = 0x3e8;
    }
    eax = *((ebp - 0x144));
    *((ebp - 0x20)) = eax;
    *((ebp - 0x28)) = 0xffffffff;
    *((ebp - 0x2c)) = 8;
    *((ebp - 0x40)) = 0x80618f9;
    *((ebp - 0x44)) = 1;
    *((ebp - 0x48)) = 0x80618fb;
    *((ebp - 0x4c)) = 0x80618fb;
    eax = localeconv ();
    *((ebp - 0x50)) = eax;
    eax = *((ebp - 0x50));
    eax = *(eax);
    eax = strlen (eax);
    *((ebp - 0x54)) = eax;
    if (*((ebp - 0x54)) != 0) {
        if (*((ebp - 0x54)) > 0x10) {
            goto label_1;
        }
        eax = *((ebp - 0x50));
        eax = *(eax);
        *((ebp - 0x40)) = eax;
        eax = *((ebp - 0x54));
        *((ebp - 0x44)) = eax;
    }
label_1:
    eax = *((ebp - 0x50));
    eax = *((eax + 8));
    *((ebp - 0x48)) = eax;
    eax = *((ebp - 0x50));
    eax = *((eax + 4));
    eax = strlen (eax);
    if (eax <= 0x10) {
        eax = *((ebp - 0x50));
        eax = *((eax + 4));
        *((ebp - 0x4c)) = eax;
    }
    eax = *((ebp + 0x10));
    eax += 0x288;
    *((ebp - 0x34)) = eax;
    eax = *((ebp - 0x34));
    *((ebp - 0x30)) = eax;
    edx = *((ebp - 0xe0));
    ecx = *((ebp - 0xdc));
    *((ebp - 0x150)) = edx;
    *((ebp - 0x14c)) = ecx;
    ecx = *((ebp - 0x14c));
    if (ecx <= *((ebp - 0xd4))) {
        eax = *((ebp - 0x14c));
        if (eax >= *((ebp - 0xd4))) {
            edx = *((ebp - 0x150));
            if (edx > *((ebp - 0xd8))) {
                goto label_2;
            }
        }
        ecx = *((ebp - 0xd8));
        ebx = *((ebp - 0xd4));
        eax = *((ebp - 0xe0));
        edx = *((ebp - 0xdc));
        eax = _umoddi3 (edx, ebx, eax);
        eax |= edx;
        if (eax != 0) {
            goto label_3;
        }
        eax = *((ebp - 0xe0));
        edx = *((ebp - 0xdc));
        eax = *((ebp - 0xd8));
        edx = *((ebp - 0xd4));
        eax = _udivdi3 (edx, edx, eax);
        *((ebp - 0x78)) = eax;
        *((ebp - 0x74)) = edx;
        eax = *((ebp - 0xcc));
        ecx = *((ebp - 0xcc));
        ecx *= *((ebp - 0x78));
        eax = *((ebp - 0x74));
        eax *= *((ebp - 0xd0));
        ecx += eax;
        eax = *((ebp - 0x78));
        edx:eax = eax * *((ebp - 0xd0));
        ecx += edx;
        edx = ecx;
        *((ebp - 0x70)) = eax;
        *((ebp - 0x6c)) = edx;
        *((ebp - 0x70)) = eax;
        *((ebp - 0x6c)) = edx;
        eax = *((ebp - 0x78));
        edx = *((ebp - 0x74));
        eax = *((ebp - 0x70));
        edx = *((ebp - 0x6c));
        eax = _udivdi3 (edx, edx, eax);
        ecx = edx;
        ecx ^= *((ebp - 0xcc));
        eax ^= *((ebp - 0xd0));
        eax |= ecx;
        if (eax != 0) {
            goto label_3;
        }
        *((ebp - 0x24)) = 0;
        *((ebp - 0x3c)) = 0;
        goto label_4;
    }
label_2:
    eax = *((ebp - 0xd8));
    edx = *((ebp - 0xd4));
    eax |= edx;
    if (eax != 0) {
        ecx = *((ebp - 0xe0));
        ebx = *((ebp - 0xdc));
        eax = *((ebp - 0xd8));
        edx = *((ebp - 0xd4));
        eax = _umoddi3 (edx, ebx, eax);
        eax |= edx;
        if (eax != 0) {
            goto label_3;
        }
        eax = *((ebp - 0xd8));
        edx = *((ebp - 0xd4));
        eax = *((ebp - 0xe0));
        edx = *((ebp - 0xdc));
        eax = _udivdi3 (edx, edx, eax);
        *((ebp - 0x80)) = eax;
        *((ebp - 0x7c)) = edx;
        ecx = *((ebp - 0xd0));
        ebx = *((ebp - 0xcc));
        eax = *((ebp - 0x80));
        edx = *((ebp - 0x7c));
        _umoddi3 (edx, ebx, eax);
        ecx = edx * 0xa;
        ebx = eax * 0;
        ecx += ebx;
        ebx = 0xa;
        edx:eax = eax * ebx;
        ecx += edx;
        edx = ecx;
        *((ebp - 0x88)) = eax;
        *((ebp - 0x84)) = edx;
        *((ebp - 0x88)) = eax;
        *((ebp - 0x84)) = edx;
        ecx = *((ebp - 0x88));
        ebx = *((ebp - 0x84));
        eax = *((ebp - 0x80));
        edx = *((ebp - 0x7c));
        eax = _umoddi3 (edx, ebx, eax);
        __asm ("shld edx, eax, 1");
        eax += eax;
        *((ebp - 0x90)) = eax;
        *((ebp - 0x8c)) = edx;
        eax = *((ebp - 0x80));
        edx = *((ebp - 0x7c));
        eax = *((ebp - 0xd0));
        edx = *((ebp - 0xcc));
        eax = _udivdi3 (edx, edx, eax);
        *((ebp - 0x70)) = eax;
        *((ebp - 0x6c)) = edx;
        eax = *((ebp - 0x80));
        edx = *((ebp - 0x7c));
        eax = *((ebp - 0x88));
        edx = *((ebp - 0x84));
        eax = _udivdi3 (edx, edx, eax);
        *((ebp - 0x24)) = eax;
        eax = *((ebp - 0x90));
        edx = *((ebp - 0x8c));
        *((ebp - 0x158)) = eax;
        *((ebp - 0x154)) = edx;
        edx = *((ebp - 0x154));
        if (edx <= *((ebp - 0x7c))) {
            ecx = *((ebp - 0x154));
            if (ecx >= *((ebp - 0x7c))) {
                eax = *((ebp - 0x158));
                if (eax >= *((ebp - 0x80))) {
                    goto label_5;
                }
            }
            edx = *((ebp - 0x8c));
            eax = *((ebp - 0x90));
            eax |= edx;
            al = (eax != 0) ? 1 : 0;
            eax = (int32_t) al;
            *((ebp - 0x140)) = eax;
        } else {
label_5:
            edx = *((ebp - 0x80));
            ecx = *((ebp - 0x7c));
            *((ebp - 0x160)) = edx;
            *((ebp - 0x15c)) = ecx;
            ecx = *((ebp - 0x15c));
            if (ecx <= *((ebp - 0x8c))) {
                eax = *((ebp - 0x15c));
                if (eax >= *((ebp - 0x8c))) {
                    edx = *((ebp - 0x160));
                    if (edx >= *((ebp - 0x90))) {
                        goto label_6;
                    }
                }
                *((ebp - 0x13c)) = 3;
            } else {
label_6:
                *((ebp - 0x13c)) = 2;
            }
            ecx = *((ebp - 0x13c));
            *((ebp - 0x140)) = ecx;
        }
        eax = *((ebp - 0x140));
        *((ebp - 0x3c)) = eax;
        goto label_4;
    }
label_3:
    *(fp_stack--) = *((ebp - 0xe0));
    ? = fp_stack[0];
    fp_stack--;
    if (*((ebp - 0xdc)) < 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = fp_stack[?];
    ? = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0xd0));
    ? = fp_stack[0];
    fp_stack--;
    if (*((ebp - 0xcc)) < 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *((ebp - 0xd8));
    ? = fp_stack[0];
    fp_stack--;
    if (*((ebp - 0xd4)) < 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    ? = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x14));
    eax &= 0x10;
    if (eax == 0) {
        eax = *((ebp - 0xb8));
        edx = *((ebp - 0xb4));
        ecx = *((ebp - 0xb0));
        *((esp + 4)) = eax;
        *((esp + 8)) = edx;
        eax = *((ebp - 0x1c));
        adjust_value (ecx);
        ? = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 0x10));
        sprintf (eax, "%.0Lf");
        eax = *((ebp + 0x10));
        eax = strlen (eax);
        *((ebp - 0x58)) = eax;
        *((ebp - 0x5c)) = 0;
        goto label_7;
    }
    eax = 0;
    edx = 0x80000000;
    ecx = 0x3fff;
    *((ebp - 0xc8)) = eax;
    *((ebp - 0xc4)) = edx;
    *((ebp - 0xc0)) = ecx;
    *((ebp - 0x28)) = 0;
    do {
        eax = *((ebp - 0x20));
        edx = 0;
        *(fp_stack--) = *(esp);
        esp = esp + 8;
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        ? = fp_stack[0];
        fp_stack--;
        *((ebp - 0x28))++;
        eax = *((ebp - 0x20));
        edx = 0;
        *(fp_stack--) = *(esp);
        esp = esp + 8;
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = fp_stack[?];
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        al = ((ah & 5) == 0) ? 1 : 0;
        eax ^= 1;
        if (al != 0) {
            goto label_8;
        }
        eax = *((ebp - 0x28));
    } while (eax < *((ebp - 0x2c)));
label_8:
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    ? = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0xb8));
    edx = *((ebp - 0xb4));
    ecx = *((ebp - 0xb0));
    *((esp + 4)) = eax;
    *((esp + 8)) = edx;
    eax = *((ebp - 0x1c));
    adjust_value (ecx);
    ? = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x10));
    sprintf (eax, "%.1Lf");
    eax = *((ebp + 0x10));
    eax = strlen (eax);
    *((ebp - 0x58)) = eax;
    eax = *((ebp - 0x44));
    eax++;
    *((ebp - 0x5c)) = eax;
    eax = *((ebp + 0x14));
    eax &= 0x20;
    al = (eax == 0) ? 1 : 0;
    eax = (int32_t) al;
    eax += *((ebp - 0x5c));
    eax++;
    if (eax >= *((ebp - 0x58))) {
        eax = *((ebp + 0x14));
        eax &= 8;
        if (eax == 0) {
            goto label_7;
        }
        eax = *((ebp - 0x58));
        eax--;
        eax += *((ebp + 0x10));
        eax = *(eax);
        if (al != 0x30) {
            goto label_7;
        }
    }
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    ? = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x1c));
    adjust_value (eax);
    *(fp_stack--) = fp_stack[?];
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    ? = fp_stack[0];
    fp_stack--;
    eax = *((ebp + 0x10));
    sprintf (eax, "%.0Lf");
    eax = *((ebp + 0x10));
    eax = strlen (eax);
    *((ebp - 0x58)) = eax;
    *((ebp - 0x5c)) = 0;
label_7:
    eax = *((ebp - 0x58));
    eax = -eax;
    eax += *((ebp - 0x34));
    *((ebp - 0x30)) = eax;
    eax = *((ebp - 0x58));
    eax = *((ebp + 0x10));
    eax = *((ebp - 0x30));
    memmove (eax, eax, eax);
    edx = *((ebp - 0x5c));
    eax = *((ebp - 0x58));
    eax -= edx;
    eax += *((ebp - 0x30));
    *((ebp - 0x38)) = eax;
    goto label_9;
label_4:
    eax = *((ebp + 0x14));
    eax &= 0x10;
    if (eax == 0) {
        goto label_10;
    }
    *((ebp - 0x28)) = 0;
    eax = *((ebp - 0x20));
    edx = 0;
    *((ebp - 0x110)) = eax;
    *((ebp - 0x10c)) = edx;
    edx = *((ebp - 0x10c));
    if (edx > *((ebp - 0x6c))) {
        goto label_10;
    }
    ecx = *((ebp - 0x10c));
    if (ecx < *((ebp - 0x6c))) {
        goto label_11;
    }
    eax = *((ebp - 0x110));
    if (eax > *((ebp - 0x70))) {
        goto label_10;
    }
    do {
label_11:
        eax = *((ebp - 0x20));
        edx = 0;
        ecx = *((ebp - 0x70));
        ebx = *((ebp - 0x6c));
        _umoddi3 (edx, ebx, eax);
        ecx = edx * 0xa;
        ebx = eax * 0;
        ecx += ebx;
        ebx = 0xa;
        edx:eax = eax * ebx;
        ecx += edx;
        edx = ecx;
        edx = eax;
        eax = *((ebp - 0x24));
        eax = edx + eax;
        *((ebp - 0x60)) = eax;
        edx = *((ebp - 0x60));
        *((ebp - 0x18c)) = edx;
        eax = *((ebp - 0x18c));
        edx = 0;
        eax = *(edx:eax) / ebp - 0x20;
        edx = *(edx:eax) % ebp - 0x20;
        eax = edx;
        edx = eax + eax;
        eax = *((ebp - 0x3c));
        eax >>= 1;
        eax = edx + eax;
        *((ebp - 0x64)) = eax;
        eax = *((ebp - 0x20));
        edx = 0;
        eax = *((ebp - 0x70));
        edx = *((ebp - 0x6c));
        eax = _udivdi3 (edx, edx, eax);
        *((ebp - 0x70)) = eax;
        *((ebp - 0x6c)) = edx;
        eax = *((ebp - 0x60));
        edx = 0;
        eax = *(edx:eax) / ebp - 0x20;
        edx = *(edx:eax) % ebp - 0x20;
        *((ebp - 0x24)) = eax;
        eax = *((ebp - 0x64));
        if (eax < *((ebp - 0x20))) {
            eax = *((ebp - 0x3c));
            eax += *((ebp - 0x64));
            al = (eax != 0) ? 1 : 0;
            eax = (int32_t) al;
            *((ebp - 0x108)) = eax;
        } else {
            eax = *((ebp - 0x3c));
            eax += *((ebp - 0x64));
            if (eax > *((ebp - 0x20))) {
                *((ebp - 0x104)) = 3;
            } else {
                *((ebp - 0x104)) = 2;
            }
            ecx = *((ebp - 0x104));
            *((ebp - 0x108)) = ecx;
        }
        eax = *((ebp - 0x108));
        *((ebp - 0x3c)) = eax;
        *((ebp - 0x28))++;
        edx = *((ebp - 0x20));
        ecx = 0;
        *((ebp - 0x100)) = edx;
        *((ebp - 0xfc)) = ecx;
        ecx = *((ebp - 0xfc));
        if (ecx > *((ebp - 0x6c))) {
            goto label_12;
        }
        eax = *((ebp - 0xfc));
        if (eax >= *((ebp - 0x6c))) {
            edx = *((ebp - 0x100));
            if (edx > *((ebp - 0x70))) {
                goto label_12;
            }
        }
        eax = *((ebp - 0x28));
    } while (eax < *((ebp - 0x2c)));
label_12:
    if (*((ebp - 0x6c)) <= 0) {
        if (*((ebp - 0x6c)) >= 0) {
            if (*((ebp - 0x70)) > 9) {
                goto label_10;
            }
        }
        if (*((ebp - 0x1c)) == 1) {
            eax = *((ebp - 0x24));
            eax &= 1;
            eax += *((ebp - 0x3c));
            ebp - 0xf1 = (eax > 2) ? 1 : 0;
        } else {
            if (*((ebp - 0x1c)) == 0) {
                if (*((ebp - 0x3c)) > 0) {
                    *((ebp - 0xf0)) = 1;
                }
            } else {
                *((ebp - 0xf0)) = 0;
            }
            ecx = *((ebp - 0xf0));
            *((ebp - 0xf1)) = cl;
        }
        if (*((ebp - 0xf1)) != 0) {
            *((ebp - 0x24))++;
            *((ebp - 0x3c)) = 0;
            if (*((ebp - 0x24)) != 0xa) {
                goto label_13;
            }
            *((ebp - 0x70))++;
            *((ebp - 0x6c)) += 0;
            *((ebp - 0x24)) = 0;
        }
label_13:
        if (*((ebp - 0x6c)) > 0) {
            goto label_10;
        }
        if (*((ebp - 0x6c)) >= 0) {
            if (*((ebp - 0x70)) > 9) {
                goto label_10;
            }
        }
        if (*((ebp - 0x24)) == 0) {
            eax = *((ebp + 0x14));
            eax &= 8;
            if (eax != 0) {
                goto label_10;
            }
        }
        *((ebp - 0x30))--;
        eax = *((ebp - 0x24));
        eax += 0x30;
        edx = eax;
        eax = *((ebp - 0x30));
        *(eax) = dl;
        eax = *((ebp - 0x44));
        eax = -eax;
        *((ebp - 0x30)) += eax;
        eax = *((ebp - 0x44));
        eax = *((ebp - 0x40));
        eax = *((ebp - 0x30));
        memcpy (eax, eax, eax);
        *((ebp - 0x3c)) = 0;
        eax = *((ebp - 0x3c));
        *((ebp - 0x24)) = eax;
    }
label_10:
    if (*((ebp - 0x1c)) == 1) {
        eax = *((ebp - 0x3c));
        esi = *((ebp - 0x3c));
        edi = eax;
        edi >>= 0x1f;
        ecx = *((ebp - 0x70));
        ebx = *((ebp - 0x6c));
        eax = ecx;
        eax &= 1;
        edx = ebx;
        edx = 0;
        eax += esi;
        edx += edi;
        eax |= edx;
        al = (eax != 0) ? 1 : 0;
        eax = (int32_t) al;
        eax += *((ebp - 0x24));
        ebp - 0xe9 = (eax > 5) ? 1 : 0;
    } else {
        if (*((ebp - 0x1c)) == 0) {
            eax = *((ebp - 0x3c));
            edx = *((ebp - 0x24));
            eax = edx + eax;
            if (eax > 0) {
                *((ebp - 0xe8)) = 1;
            }
        } else {
            *((ebp - 0xe8)) = 0;
        }
        eax = *((ebp - 0xe8));
        *((ebp - 0xe9)) = al;
    }
    if (*((ebp - 0xe9)) != 0) {
        *((ebp - 0x70))++;
        *((ebp - 0x6c)) += 0;
        eax = *((ebp + 0x14));
        eax &= 0x10;
        if (eax == 0) {
            goto label_14;
        }
        eax = *((ebp - 0x20));
        edx = 0;
        ecx = 0;
        ecx ^= *((ebp - 0x6c));
        eax ^= *((ebp - 0x70));
        eax |= ecx;
        if (eax != 0) {
            goto label_14;
        }
        eax = *((ebp - 0x28));
        if (eax >= *((ebp - 0x2c))) {
            goto label_14;
        }
        *((ebp - 0x28))++;
        eax = *((ebp + 0x14));
        eax &= 8;
        if (eax == 0) {
            *((ebp - 0x30))--;
            eax = *((ebp - 0x30));
            *(eax) = 0x30;
            eax = *((ebp - 0x44));
            eax = -eax;
            *((ebp - 0x30)) += eax;
            eax = *((ebp - 0x44));
            eax = *((ebp - 0x40));
            eax = *((ebp - 0x30));
            memcpy (eax, eax, eax);
        }
        *((ebp - 0x70)) = 1;
        *((ebp - 0x6c)) = 0;
    }
label_14:
    eax = *((ebp - 0x30));
    *((ebp - 0x38)) = eax;
    do {
        eax = *((ebp - 0x70));
        edx = *((ebp - 0x6c));
        eax = _umoddi3 (0, edx, 0xa);
        *((ebp - 0x68)) = eax;
        *((ebp - 0x30))--;
        eax = *((ebp - 0x68));
        eax += 0x30;
        edx = eax;
        eax = *((ebp - 0x30));
        *(eax) = dl;
        eax = *((ebp - 0x70));
        edx = *((ebp - 0x6c));
        eax = _udivdi3 (0, edx, 0xa);
        *((ebp - 0x70)) = eax;
        *((ebp - 0x6c)) = edx;
        edx = *((ebp - 0x70));
        eax = *((ebp - 0x6c));
        eax |= edx;
    } while (eax != 0);
label_9:
    eax = *((ebp + 0x14));
    eax &= 4;
    if (eax != 0) {
        edx = *((ebp - 0x38));
        eax = *((ebp - 0x30));
        ecx = edx;
        ecx -= eax;
        eax = ecx;
        edx = ecx;
        eax = *((ebp - 0x4c));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x48));
        eax = *((ebp - 0x30));
        eax = group_number (eax, edx, eax);
        *((ebp - 0x30)) = eax;
    }
    eax = *((ebp + 0x14));
    eax &= 0x80;
    if (eax == 0) {
        goto label_15;
    }
    if (*((ebp - 0x28)) >= 0) {
        goto label_16;
    }
    *((ebp - 0x28)) = 0;
    *((ebp - 0x98)) = 1;
    *((ebp - 0x94)) = 0;
    while (edx < *((ebp - 0xdc))) {
label_0:
        *((ebp - 0x28))++;
        eax = *((ebp - 0x28));
        if (eax == *((ebp - 0x2c))) {
            goto label_16;
        }
        eax = *((ebp - 0x20));
        edx = 0;
        ecx = *((ebp - 0x94));
        ecx *= eax;
        ebx = *((ebp - 0x98));
        ebx *= edx;
        ecx += ebx;
        edx:eax = eax * *((ebp - 0x98));
        ecx += edx;
        edx = ecx;
        *((ebp - 0x98)) = eax;
        *((ebp - 0x94)) = edx;
        *((ebp - 0x98)) = eax;
        *((ebp - 0x94)) = edx;
        eax = *((ebp - 0x98));
        edx = *((ebp - 0x94));
        *((ebp - 0x188)) = eax;
        *((ebp - 0x184)) = edx;
        edx = *((ebp - 0x184));
    }
    ecx = *((ebp - 0x184));
    if (ecx > *((ebp - 0xdc))) {
        goto label_16;
    }
    eax = *((ebp - 0x188));
    if (eax < *((ebp - 0xe0))) {
        goto label_0;
    }
label_16:
    eax = *((ebp + 0x14));
    eax &= 0x100;
    eax |= *((ebp - 0x28));
    if (eax != 0) {
        eax = *((ebp + 0x14));
        eax &= 0x40;
        if (eax == 0) {
            goto label_17;
        }
        eax = *((ebp - 0x34));
        *(eax) = 0x20;
        *((ebp - 0x34))++;
    }
label_17:
    if (*((ebp - 0x28)) != 0) {
        eax = *((ebp + 0x14));
        eax &= 0x20;
        if (eax == 0) {
            if (*((ebp - 0x28)) == 1) {
                goto label_18;
            }
        }
        eax = *((ebp - 0x28));
        eax = *((eax + obj.power_letter));
        *((ebp - 0xe1)) = al;
        goto label_19;
label_18:
        *((ebp - 0xe1)) = 0x6b;
label_19:
        eax = *((ebp - 0x34));
        edx = *((ebp - 0xe1));
        *(eax) = dl;
        *((ebp - 0x34))++;
    }
    eax = *((ebp + 0x14));
    eax &= 0x100;
    if (eax != 0) {
        eax = *((ebp + 0x14));
        eax &= 0x20;
        if (eax != 0) {
            if (*((ebp - 0x28)) == 0) {
                goto label_20;
            }
            eax = *((ebp - 0x34));
            *(eax) = 0x69;
            *((ebp - 0x34))++;
        }
label_20:
        eax = *((ebp - 0x34));
        *(eax) = 0x42;
        *((ebp - 0x34))++;
    }
label_15:
    eax = *((ebp - 0x34));
    *(eax) = 0;
    eax = *((ebp - 0x30));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805150c */
#include <stdint.h>
 
int32_t dbg_gnu_mbswidth (void) {
    char const * string;
    int32_t flags;
    size_t var_4h;
    char * var_8h;
    /* int gnu_mbswidth(char const * string,int flags); */
    eax = *((ebp + 8));
    eax = strlen (eax);
    edx = eax;
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    *((esp + 4)) = edx;
    eax = *((ebp + 8));
    *(esp) = eax;
    mbsnwidth ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051537 */
#include <stdint.h>
 
int32_t dbg_mbsnwidth (void) {
    int32_t var_38h;
    int32_t var_34h;
    mbstate_t mbstate;
    int32_t w;
    size_t bytes;
    wchar_t wc;
    int32_t width;
    char const * plimit;
    char const * p;
    int32_t var_1h;
    char const * string;
    size_t nbytes;
    int32_t flags;
    char * c;
    size_t n;
    mbstate_t * ps;
    /* int mbsnwidth(char const * string,size_t nbytes,int flags); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    edx = *((ebp + 0xc));
    eax = *((ebp - 8));
    eax += edx;
    *((ebp - 0xc)) = eax;
    *((ebp - 0x10)) = 0;
    eax = ctype_get_mb_cur_max ();
    if (eax <= 1) {
        goto label_1;
    }
    goto label_2;
label_0:
    eax = *((ebp - 8));
    eax = *(eax);
    eax = (int32_t) al;
    *((ebp - 0x38)) = eax;
    if (*((ebp - 0x38)) <= 0x5f) {
        if (*((ebp - 0x38)) >= 0x41) {
            goto label_3;
        }
        if (*((ebp - 0x38)) < 0x20) {
            goto label_4;
        }
        if (*((ebp - 0x38)) <= 0x23) {
            goto label_3;
        }
        eax = *((ebp - 0x38));
        eax -= 0x25;
        if (eax > 0x1a) {
            goto label_4;
        }
    } else {
        eax = *((ebp - 0x38));
        eax -= 0x61;
        if (eax > 0x1d) {
            goto label_4;
        }
    }
label_3:
    *((ebp - 8))++;
    *((ebp - 0x10))++;
    goto label_2;
label_4:
    eax = ebp - 0x24;
    memset (eax, 0, 8);
    do {
        edx = *((ebp - 0xc));
        eax = *((ebp - 8));
        ecx = edx;
        ecx -= eax;
        eax = ecx;
        edx = ecx;
        eax = ebp - 0x24;
        eax = *((ebp - 8));
        eax = ebp - 0x14;
        eax = mbrtowc (eax, eax, edx);
        *((ebp - 0x18)) = eax;
        if (*((ebp - 0x18)) == -1) {
            eax = *((ebp + 0x10));
            eax &= 1;
            if (eax == 0) {
                *((ebp - 8))++;
                *((ebp - 0x10))++;
                goto label_2;
            }
            *((ebp - 0x34)) = 0xffffffff;
            goto label_5;
        }
        if (*((ebp - 0x18)) == 0xfffffffe) {
            eax = *((ebp + 0x10));
            eax &= 1;
            if (eax == 0) {
                eax = *((ebp - 0xc));
                *((ebp - 8)) = eax;
                *((ebp - 0x10))++;
                goto label_2;
            }
            *((ebp - 0x34)) = 0xffffffff;
            goto label_5;
        }
        if (*((ebp - 0x18)) == 0) {
            *((ebp - 0x18)) = 1;
        }
        eax = *((ebp - 0x14));
        *(esp) = eax;
        eax = wcwidth ();
        *((ebp - 0x1c)) = eax;
        if (*((ebp - 0x1c)) >= 0) {
            eax = *((ebp - 0x1c));
            *((ebp - 0x10)) += eax;
        } else {
            eax = *((ebp + 0x10));
            eax &= 2;
            if (eax == 0) {
                eax = *((ebp - 0x14));
                eax = iswcntrl (eax);
                al = (eax == 0) ? 1 : 0;
                eax = (int32_t) al;
                *((ebp - 0x10)) += eax;
            } else {
                *((ebp - 0x34)) = 0xffffffff;
                goto label_5;
            }
        }
        eax = *((ebp - 0x18));
        *((ebp - 8)) += eax;
        eax = ebp - 0x24;
        eax = mbsinit (eax);
    } while (eax == 0);
label_2:
    eax = *((ebp - 8));
    if (eax < *((ebp - 0xc))) {
        goto label_0;
    }
    eax = *((ebp - 0x10));
    *((ebp - 0x34)) = eax;
    goto label_5;
    do {
        eax = *((ebp - 8));
        eax = *(eax);
        *((ebp - 1)) = al;
        *((ebp - 8))++;
        eax = ctype_b_loc ();
        edx = *(eax);
        eax = *((ebp - 1));
        eax += eax;
        eax = edx + eax;
        eax = *(eax);
        eax = (int32_t) ax;
        eax &= 0x4000;
        if (eax != 0) {
            *((ebp - 0x10))++;
        } else {
            eax = *((ebp + 0x10));
            eax &= 2;
            if (eax == 0) {
                eax = ctype_b_loc ();
                edx = *(eax);
                eax = *((ebp - 1));
                eax += eax;
                eax = edx + eax;
                eax = *(eax);
                eax = (int32_t) ax;
                eax &= 2;
                al = (eax == 0) ? 1 : 0;
                eax = (int32_t) al;
                *((ebp - 0x10)) += eax;
            } else {
                *((ebp - 0x34)) = 0xffffffff;
                goto label_5;
            }
        }
label_1:
        eax = *((ebp - 8));
    } while (eax < *((ebp - 0xc)));
    ecx = *((ebp - 0x10));
    *((ebp - 0x34)) = ecx;
label_5:
    eax = *((ebp - 0x34));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804efc9 */
#include <stdint.h>
 
uint32_t dbg_format_user_width (void) {
    int32_t var_4h;
    uid_t u;
    int32_t var_sp_4h;
    /* int format_user_width(uid_t u); */
    eax = *(obj.numeric_ids);
    if (al != 0) {
        *((ebp - 4)) = 0;
    } else {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = getuser ();
        *((ebp - 4)) = eax;
    }
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    eax = *((ebp - 4));
    *(esp) = eax;
    format_user_or_group_width ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804f005 */
#include <stdint.h>
 
uint32_t dbg_format_group_width (void) {
    int32_t var_4h;
    gid_t g;
    int32_t var_sp_4h;
    /* int format_group_width(gid_t g); */
    eax = *(obj.numeric_ids);
    if (al != 0) {
        *((ebp - 4)) = 0;
    } else {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = getgroup ();
        *((ebp - 4)) = eax;
    }
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    eax = *((ebp - 4));
    *(esp) = eax;
    format_user_or_group_width ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80586fc */
#include <stdint.h>
 
int32_t dbg_umaxtostr (int32_t arg_8h, char * arg_ch) {
    uintmax_t i;
    char * var_14h;
    char * p;
    char * buf;
    int32_t var_sp_4h;
    char * var_8h;
    int32_t var_ch;
    /* char * umaxtostr(uintmax_t i,char * buf); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0x10));
    eax += 0x14;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    *(eax) = 0;
    do {
        *((ebp - 4))--;
        eax = *((ebp - 0x18));
        edx = *((ebp - 0x14));
        eax = _umoddi3 (0, edx, 0xa);
        eax += 0x30;
        edx = eax;
        eax = *((ebp - 4));
        *(eax) = dl;
        eax = *((ebp - 0x18));
        edx = *((ebp - 0x14));
        eax = _udivdi3 (0, edx, 0xa);
        *((ebp - 0x18)) = eax;
        *((ebp - 0x14)) = edx;
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x14));
        eax |= edx;
    } while (eax != 0);
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e090 */
#include <stdint.h>
 
int32_t udivdi3 (uint32_t arg_8h, char * arg_ch, char * arg_10h, int32_t arg_14h) {
    uint32_t var_24h;
    int32_t var_20h;
    uint32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    eax = *((ebp + 0x10));
    edx = *((ebp + 8));
    ecx = *((ebp + 0xc));
    esi = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x14)) = edx;
    *((ebp - 0x24)) = ecx;
    if (eax == 0) {
        if (esi > ecx) {
            goto label_1;
        }
        if (esi == 0) {
            ecx = 1;
            edx = 0;
            eax = ecx;
            eax = edx:eax / esi;
            edx = edx:eax % esi;
            esi = eax;
        }
        edi = *((ebp - 0x24));
        edx = 0;
        ecx = *((ebp - 0x14));
        eax = edi;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        edi = eax;
        eax = ecx;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        esi = edi;
        ecx = eax;
        edx = esi;
        return eax;
    }
    while (esi > *((ebp - 0x14))) {
        ecx = 0;
        esi = 0;
label_0:
        eax = ecx;
        edx = esi;
        return eax;
label_1:
        ecx = edx;
        edx = *((ebp - 0x24));
        eax = ecx;
        eax = edx:eax / esi;
        edx = edx:eax % esi;
        esi = 0;
        ecx = eax;
        edx = esi;
        return eax;
        __asm ("bsr edi, eax");
        edi ^= 0x1f;
        if (eax != *((ebp - 0x24))) {
            goto label_2;
        }
        if (eax < *((ebp - 0x24))) {
            goto label_3;
        }
    }
label_3:
    ecx = 1;
    esi = 0;
    goto label_0;
label_2:
    ecx = edi;
    edx = esi;
    eax <<= cl;
    ecx = 0x20;
    ecx -= edi;
    *((ebp - 0x20)) = ecx;
    edx >>= cl;
    ecx = edi;
    esi <<= cl;
    ecx = *((ebp - 0x20));
    eax |= edx;
    *((ebp - 0xc)) = esi;
    esi = *((ebp - 0x24));
    edx = *((ebp - 0x24));
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x14));
    esi >>= cl;
    ecx = edi;
    edx <<= cl;
    ecx = *((ebp - 0x20));
    eax >>= cl;
    eax |= edx;
    edx = esi;
    eax = *(edx:eax) / ebp - 0x10;
    edx = *(edx:eax) % ebp - 0x10;
    esi = edx;
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0xc));
    edx:eax = eax * *((ebp - 0x20));
    *((ebp - 0x18)) = eax;
    if (esi < edx) {
        goto label_4;
    }
    while (eax >= *((ebp - 0x18))) {
        ecx = *((ebp - 0x20));
        esi = 0;
        goto label_0;
        eax = *((ebp - 0x14));
        ecx = edi;
        eax <<= cl;
    }
label_4:
    ecx = *((ebp - 0x20));
    esi = 0;
    ecx--;
    goto label_0;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80499fc */
#include <stdint.h>
 
void gnu_dev_major (void) {
    gnu_dev_major ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804962c */
#include <stdint.h>
 
void gnu_dev_minor (void) {
    gnu_dev_minor ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804c78b */
#include <stdint.h>
 
int32_t dbg_unsigned_file_size (int32_t arg_8h, char * arg_ch) {
    off_t size;
    char * var_4h;
    /* uintmax_t unsigned_file_size(off_t size); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 4)) = eax;
    eax = *((ebp - 8));
    edx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804bf12 */
#include <stdint.h>
 
int32_t dbg_queue_directory (struct sigaction * arg_10h) {
    void * var_1ch;
    void * var_18h;
    _Bool command_line_arg;
    pending * new;
    char const * name;
    char const * realname;
    /* void queue_directory(char const * name,char const * realname,_Bool command_line_arg); */
    eax = *((ebp + 0x10));
    *((ebp - 0x14)) = al;
    *(esp) = 0x10;
    eax = xmalloc ();
    *((ebp - 4)) = eax;
    if (*((ebp + 0xc)) != 0) {
        eax = *((ebp + 0xc));
        *(esp) = eax;
        eax = xstrdup ();
        *((ebp - 0x1c)) = eax;
    } else {
        *((ebp - 0x1c)) = 0;
    }
    eax = *((ebp - 4));
    edx = *((ebp - 0x1c));
    *((eax + 4)) = edx;
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = xstrdup ();
        *((ebp - 0x18)) = eax;
    } else {
        *((ebp - 0x18)) = 0;
    }
    eax = *((ebp - 4));
    edx = *((ebp - 0x18));
    *(eax) = edx;
    edx = *((ebp - 4));
    eax = *((ebp - 0x14));
    *((edx + 8)) = al;
    edx = pending_dirs;
    eax = *((ebp - 4));
    *((eax + 0xc)) = edx;
    eax = *((ebp - 4));
    *(obj.pending_dirs) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804eb01 */
#include <stdint.h>
 
int32_t dbg_sort_files (void) {
    int32_t var_1ch;
    _Bool use_strcmp;
    char * file;
    uint32_t line;
    char * function;
    /* void sort_files(); */
    eax = cwd_n_used;
    edx = cwd_n_used;
    edx >>= 1;
    eax = cwd_n_used;
    edx += eax;
    eax = sorted_file_alloc;
    if (edx > eax) {
        eax = sorted_file;
        free (eax);
        eax = cwd_n_used;
        *((esp + 4)) = 0xc;
        *(esp) = eax;
        eax = xnmalloc ();
        *(obj.sorted_file) = eax;
        edx = cwd_n_used;
        eax = cwd_n_used;
        eax += eax;
        eax += edx;
        *(obj.sorted_file_alloc) = eax;
    }
    initialize_ordering_vector ();
    eax = sort_type;
    if (eax != -1) {
        eax = setjmp (obj.failed_strcoll);
        if (eax == 0) {
            *((ebp - 9)) = 0;
        } else {
            *((ebp - 9)) = 1;
            eax = sort_type;
            if (eax == 3) {
                assert_fail ("sort_files", "ls.c", 0xc8c);
            }
            initialize_ordering_vector ();
        }
        eax = sort_type;
        if (eax == 4) {
            eax = time_type;
            *((ebp - 0x1c)) = eax;
        } else {
            *((ebp - 0x1c)) = 0;
        }
        eax = sort_type;
        edx = *((ebp - 0x1c));
        edx += eax;
        ecx = *((ebp - 9));
        eax = *(obj.sort_reverse);
        ebx = (int32_t) al;
        eax = *(obj.directories_first);
        esi = (int32_t) al;
        eax = edx + edx;
        eax += ecx;
        eax += eax;
        eax += ebx;
        eax += eax;
        eax += esi;
        eax = *((eax*4 + obj.sort_functions));
        edx = cwd_n_used;
        ecx = sorted_file;
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        *(esp) = ecx;
        mpsort ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d51e */
#include <stdint.h>
 
int32_t dbg_extract_dirs_from_files (char * arg_ch) {
    _Bool command_line_arg;
    size_t i;
    size_t j;
    _Bool ignore_dot_and_dot_dot;
    void ** var_ch;
    char * name;
    fileinfo * f;
    char const * dirname;
    uint32_t var_4h;
    int32_t var_8h;
    /* void extract_dirs_from_files(char const * dirname,_Bool command_line_arg); */
    eax = *((ebp + 0xc));
    *((ebp - 0x24)) = al;
    al = (*((ebp + 8)) != 0) ? 1 : 0;
    *((ebp - 0xd)) = al;
    if (*((ebp + 8)) != 0) {
        eax = active_dir_set;
        if (eax == 0) {
            goto label_0;
        }
        *((esp + 8)) = 0;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        queue_directory (0);
    }
label_0:
    eax = cwd_n_used;
    *((ebp - 0x18)) = eax;
    while (al != 0) {
        edx = sorted_file;
        eax = *((ebp - 0x18));
        eax <<= 2;
        eax = edx + eax;
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        al = is_directory ();
        if (al != 0) {
            eax = *((ebp - 0xd));
            eax ^= 1;
            if (al == 0) {
                eax = *((ebp - 0xc));
                eax = *(eax);
                *(esp) = eax;
                eax = basename_is_dot_or_dotdot ();
                eax ^= 1;
                if (al == 0) {
                    goto label_1;
                }
            }
            if (*((ebp + 8)) != 0) {
                eax = *((ebp - 0xc));
                eax = *(eax);
                eax = *(eax);
                if (al != 0x2f) {
                    goto label_2;
                }
            }
            edx = *((ebp - 0x24));
            eax = *((ebp - 0xc));
            ecx = *((eax + 4));
            eax = *((ebp - 0xc));
            eax = *(eax);
            *((esp + 8)) = edx;
            *((esp + 4)) = ecx;
            queue_directory (eax);
            goto label_3;
label_2:
            eax = *((ebp - 0xc));
            eax = *(eax);
            *((esp + 8)) = 0;
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = file_name_concat ();
            *((ebp - 8)) = eax;
            edx = *((ebp - 0x24));
            eax = *((ebp - 0xc));
            eax = *((eax + 4));
            *((esp + 8)) = edx;
            *((esp + 4)) = eax;
            eax = *((ebp - 8));
            queue_directory (eax);
            eax = *((ebp - 8));
            free (eax);
label_3:
            eax = *((ebp - 0xc));
            eax = *((eax + 0x68));
            if (eax != 9) {
                goto label_1;
            }
            eax = *((ebp - 0xc));
            eax = *(eax);
            free (eax);
        }
label_1:
        al = (*((ebp - 0x18)) != 0) ? 1 : 0;
        *((ebp - 0x18))--;
    }
    *((ebp - 0x18)) = 0;
    *((ebp - 0x14)) = 0;
    while (*((ebp - 0x18)) < eax) {
        edx = sorted_file;
        eax = *((ebp - 0x18));
        eax <<= 2;
        eax = edx + eax;
        *((ebp - 4)) = eax;
        edx = sorted_file;
        eax = *((ebp - 0x14));
        eax <<= 2;
        edx += eax;
        eax = *((ebp - 4));
        *(edx) = eax;
        eax = *((ebp - 4));
        eax = *((eax + 0x68));
        al = (eax != 9) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x14)) += eax;
        *((ebp - 0x18))++;
        eax = cwd_n_used;
    }
    eax = *((ebp - 0x14));
    *(obj.cwd_n_used) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804ec2e */
#include <stdint.h>
 
int32_t dbg_print_current_files (void) {
    uint32_t var_14h;
    size_t i;
    /* void print_current_files(); */
    eax = format;
    *((ebp - 0x14)) = eax;
    if (*((ebp - 0x14)) > 4) {
        goto label_0;
    }
    edx = *((ebp - 0x14));
    eax = *((edx*4 + 0x805f984));
    /* switch table (5 cases) at 0x805f984 */
    void (*eax)() ();
    *((ebp - 4)) = 0;
    while (*((ebp - 4)) < eax) {
        edx = sorted_file;
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
        *(esp) = eax;
        print_file_name_and_frills ();
        *(esp) = 0xa;
        putchar_unlocked ();
        *((ebp - 4))++;
        eax = cwd_n_used;
    }
    goto label_0;
    print_many_per_line ();
    goto label_0;
    print_horizontal ();
    goto label_0;
    print_with_commas ();
    goto label_0;
    *((ebp - 4)) = 0;
    while (*((ebp - 4)) < eax) {
        edx = sorted_file;
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
        *(esp) = eax;
        print_long_format ();
        *(esp) = 0xa;
        putchar_unlocked ();
        eax = dired_pos;
        eax++;
        *(obj.dired_pos) = eax;
        *((ebp - 4))++;
        eax = cwd_n_used;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804bf98 */
#include <stdint.h>
 
int32_t dbg_print_dir (struct sigaction * arg_10h) {
    uint32_t var_2e9h;
    uint32_t var_2e8h;
    int32_t var_2e4h;
    char * var_2e0h;
    _Bool command_line_arg;
    char[652] buf;
    int32_t var_2c8h;
    int32_t var_274h;
    int32_t var_270h;
    DIR * dirp;
    dirent * next;
    uintmax_t total_blocks;
    int32_t var_34h;
    int32_t fd;
    dev_ino * di;
    int32_t var_28h;
    int32_t var_24h;
    filetype type;
    int32_t var_bp_1ch;
    int32_t var_bp_18h;
    obstack * __o;
    int32_t __len;
    char const * p;
    char const * name;
    char const * realname;
    char * errname;
    char * format;
    int32_t var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    /* void print_dir(char const * name,char const * realname,_Bool command_line_arg); */
    eax = *((ebp + 0x10));
    *((ebp - 0x2dc)) = al;
    *((ebp - 0x38)) = 0;
    *((ebp - 0x34)) = 0;
    errno_location ();
    *(eax) = 0;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = opendir ();
    *((ebp - 0x40)) = eax;
    if (*((ebp - 0x40)) == 0) {
        *(esp) = "cannot open directory %s";
        eax = gettext ();
        ecx = *((ebp - 0x2dc));
        edx = *((ebp + 8));
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        file_failure (ecx);
        goto label_1;
    }
    eax = active_dir_set;
    if (eax != 0) {
        eax = *((ebp - 0x40));
        *(esp) = eax;
        eax = dirfd ();
        *((ebp - 0x30)) = eax;
        if (*((ebp - 0x30)) >= 0) {
            eax = ebp - 0x2cc;
            eax = *((ebp - 0x30));
            eax = fstat64 (eax, eax);
            eax >>= 0x1f;
            *((ebp - 0x2e9)) = al;
        } else {
            eax = ebp - 0x2cc;
            eax = *((ebp + 8));
            eax = stat64 (eax, eax);
            eax >>= 0x1f;
            *((ebp - 0x2e9)) = al;
        }
        if (*((ebp - 0x2e9)) != 0) {
            *(esp) = "cannot determine device and inode of %s";
            eax = gettext ();
            edx = eax;
            ecx = *((ebp - 0x2dc));
            eax = *((ebp + 8));
            *((esp + 8)) = eax;
            *((esp + 4)) = edx;
            file_failure (ecx);
            eax = *((ebp - 0x40));
            *(esp) = eax;
            closedir ();
            goto label_1;
        }
        eax = *((ebp - 0x274));
        edx = *((ebp - 0x270));
        ecx = *((ebp - 0x2cc));
        ebx = *((ebp - 0x2c8));
        al = visit_dir (edx, ebx, eax);
        if (al != 0) {
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = quotearg_colon ();
            ebx = eax;
            *(esp) = "%s: not listing already-listed directory";
            eax = gettext ();
            *((esp + 0xc)) = ebx;
            error (0, 0, eax);
            eax = *((ebp - 0x40));
            *(esp) = eax;
            closedir ();
            goto label_1;
        }
        *((ebp - 0x28)) = obj.dev_ino_obstack;
        *((ebp - 0x24)) = 0x10;
        eax = *((ebp - 0x28));
        eax = *((eax + 0x10));
        edx = *((eax + 0x10));
        eax = *((ebp - 0x28));
        eax = *((eax + 0xc));
        ecx = edx;
        ecx -= eax;
        eax = ecx;
        if (eax < *((ebp - 0x24))) {
            eax = *((ebp - 0x24));
            *((esp + 4)) = eax;
            eax = *((ebp - 0x28));
            *(esp) = eax;
            obstack_newchunk ();
        }
        eax = *((ebp - 0x28));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x24));
        edx += eax;
        eax = *((ebp - 0x28));
        *((eax + 0xc)) = edx;
        eax = .comment;
        eax -= 0x10;
        *((ebp - 0x2c)) = eax;
        eax = *((ebp - 0x2cc));
        edx = *((ebp - 0x2c8));
        ecx = *((ebp - 0x2c));
        *((ecx + 8)) = eax;
        *((ecx + 0xc)) = edx;
        eax = *((ebp - 0x274));
        edx = *((ebp - 0x270));
        ecx = *((ebp - 0x2c));
        *(ecx) = eax;
        *((ecx + 4)) = edx;
    }
    clear_files ();
    do {
label_0:
        errno_location ();
        *(eax) = 0;
        eax = *((ebp - 0x40));
        *(esp) = eax;
        eax = readdir64 ();
        *((ebp - 0x3c)) = eax;
        if (*((ebp - 0x3c)) == 0) {
            goto label_2;
        }
        eax = *((ebp - 0x3c));
        eax += 0x13;
        *(esp) = eax;
        eax = file_ignored ();
        eax ^= 1;
    } while (al == 0);
    *((ebp - 0x20)) = 0;
    eax = *((ebp - 0x3c));
    eax = *((eax + 0x12));
    eax = (int32_t) al;
    *((ebp - 0x2e8)) = eax;
    if (*((ebp - 0x2e8)) <= 0xe) {
        edx = *((ebp - 0x2e8));
        eax = *((edx*4 + 0x805f880));
        /* switch table (15 cases) at 0x805f880 */
        void (*eax)() ();
        *((ebp - 0x20)) = 4;
        goto label_3;
        *((ebp - 0x20)) = 2;
        goto label_3;
        *((ebp - 0x20)) = 3;
        goto label_3;
        *((ebp - 0x20)) = 1;
        goto label_3;
        *((ebp - 0x20)) = 6;
        goto label_3;
        *((ebp - 0x20)) = 5;
        goto label_3;
        *((ebp - 0x20)) = 7;
        goto label_3;
        *((ebp - 0x20)) = 8;
    }
label_3:
    eax = *((ebp - 0x3c));
    edx = *(eax);
    ecx = *((eax + 4));
    eax = *((ebp - 0x3c));
    ebx = eax + 0x13;
    eax = *((ebp + 8));
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = 0;
    *((esp + 8)) = edx;
    eax = *((ebp - 0x20));
    eax = gobble_file (ecx, eax);
    *((ebp - 0x38)) += eax;
    *((ebp - 0x34)) += edx;
    goto label_0;
label_2:
    eax = errno_location ();
    eax = *(eax);
    if (eax == 0) {
        goto label_4;
    }
    *(esp) = "reading directory %s";
    eax = gettext ();
    edx = eax;
    ecx = *((ebp - 0x2dc));
    eax = *((ebp + 8));
    *((esp + 8)) = eax;
    *((esp + 4)) = edx;
    file_failure (ecx);
    eax = errno_location ();
    eax = *(eax);
    if (eax == 0x4b) {
        goto label_0;
    }
label_4:
    eax = *((ebp - 0x40));
    *(esp) = eax;
    eax = closedir ();
    if (eax != 0) {
        *(esp) = "closing directory %s";
        eax = gettext ();
        ecx = *((ebp - 0x2dc));
        edx = *((ebp + 8));
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        file_failure (ecx);
    }
    sort_files ();
    eax = *(obj.recursive);
    if (al != 0) {
        eax = *((ebp - 0x2dc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        extract_dirs_from_files (eax);
    }
    eax = *(obj.recursive);
    edx = (int32_t) al;
    eax = *(obj.print_dir_name);
    eax = (int32_t) al;
    eax |= edx;
    if (eax != 0) {
        eax = *(0x8064288);
        eax ^= 1;
        if (al != 0) {
            *(esp) = 0xa;
            putchar_unlocked ();
            eax = dired_pos;
            eax++;
            *(obj.dired_pos) = eax;
        }
        *(0x8064288) = 0;
        eax = *(obj.dired);
        if (al != 0) {
            eax = stdout;
            *((esp + 0xc)) = eax;
            *((esp + 8)) = 2;
            *((esp + 4)) = 1;
            *(esp) = 0x805f873;
            fwrite_unlocked ();
            eax = dired_pos;
            eax += 2;
            *(obj.dired_pos) = eax;
        }
        eax = *(obj.dired);
        if (al != 0) {
            *((ebp - 0x1c)) = obj.subdired_obstack;
            *((ebp - 0x18)) = 4;
            eax = *((ebp - 0x1c));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x18));
            edx += eax;
            eax = *((ebp - 0x1c));
            eax = *((eax + 0x10));
            if (edx > eax) {
                eax = *((ebp - 0x18));
                *((esp + 4)) = eax;
                eax = *((ebp - 0x1c));
                *(esp) = eax;
                obstack_newchunk ();
            }
            edx = *((ebp - 0x18));
            eax = *((ebp - 0x1c));
            eax = *((eax + 0xc));
            memcpy (eax, 0x8064594, edx);
            eax = *((ebp - 0x1c));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x18));
            edx += eax;
            eax = *((ebp - 0x1c));
            *((eax + 0xc)) = edx;
        }
        ecx = dirname_quoting_options;
        *((ebp - 0x2e4)) = ecx;
        if (*((ebp + 0xc)) != 0) {
            eax = *((ebp + 0xc));
            *((ebp - 0x2e0)) = eax;
        } else {
            edx = *((ebp + 8));
            *((ebp - 0x2e0)) = edx;
        }
        eax = stdout;
        *((esp + 0xc)) = 0;
        ecx = *((ebp - 0x2e4));
        edx = *((ebp - 0x2e0));
        eax = quote_name (eax, edx, ecx);
        edx = eax;
        eax = dired_pos;
        eax = edx + eax;
        *(obj.dired_pos) = eax;
        eax = *(obj.dired);
        if (al != 0) {
            *((ebp - 0x14)) = obj.subdired_obstack;
            *((ebp - 0x10)) = 4;
            eax = *((ebp - 0x14));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x10));
            edx += eax;
            eax = *((ebp - 0x14));
            eax = *((eax + 0x10));
            if (edx > eax) {
                eax = *((ebp - 0x10));
                *((esp + 4)) = eax;
                eax = *((ebp - 0x14));
                *(esp) = eax;
                obstack_newchunk ();
            }
            edx = *((ebp - 0x10));
            eax = *((ebp - 0x14));
            eax = *((eax + 0xc));
            memcpy (eax, 0x8064594, edx);
            eax = *((ebp - 0x14));
            edx = *((eax + 0xc));
            eax = *((ebp - 0x10));
            edx += eax;
            eax = *((ebp - 0x14));
            *((eax + 0xc)) = edx;
        }
        eax = stdout;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 2;
        *((esp + 4)) = 1;
        *(esp) = 0x805f876;
        fwrite_unlocked ();
        eax = dired_pos;
        eax += 2;
        *(obj.dired_pos) = eax;
    }
    eax = format;
    if (eax != 0) {
        eax = *(obj.print_block_size);
        if (al == 0) {
            goto label_5;
        }
    }
    eax = *(obj.dired);
    if (al != 0) {
        eax = stdout;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 2;
        *((esp + 4)) = 1;
        *(esp) = 0x805f873;
        fwrite_unlocked ();
        eax = dired_pos;
        eax += 2;
        *(obj.dired_pos) = eax;
    }
    *(esp) = "total";
    eax = gettext ();
    *((ebp - 0xc)) = eax;
    eax = stdout;
    *((esp + 4)) = eax;
    eax = *((ebp - 0xc));
    *(esp) = eax;
    fputs_unlocked ();
    eax = *((ebp - 0xc));
    eax = strlen (eax);
    edx = eax;
    eax = dired_pos;
    eax = edx + eax;
    *(obj.dired_pos) = eax;
    *(esp) = 0x20;
    putchar_unlocked ();
    eax = dired_pos;
    eax++;
    *(obj.dired_pos) = eax;
    eax = output_block_size;
    edx = .comment;
    ecx = human_output_opts;
    *((esp + 0x18)) = eax;
    *((esp + 0x1c)) = edx;
    eax = ebp - 0x2cc;
    eax = *((ebp - 0x38));
    edx = *((ebp - 0x34));
    eax = human_readable (0x200, edx, eax);
    *((ebp - 0xc)) = eax;
    eax = stdout;
    *((esp + 4)) = eax;
    eax = *((ebp - 0xc));
    *(esp) = eax;
    fputs_unlocked ();
    eax = *((ebp - 0xc));
    eax = strlen (eax);
    edx = eax;
    eax = dired_pos;
    eax = edx + eax;
    *(obj.dired_pos) = eax;
    *(esp) = 0xa;
    putchar_unlocked ();
    eax = dired_pos;
    eax++;
    *(obj.dired_pos) = eax;
label_5:
    eax = cwd_n_used;
    if (eax != 0) {
        print_current_files ();
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804b7d9 */
#include <stdint.h>
 
int32_t dbg_get_funky_string (size_t arg_10h) {
    _Bool equals_end;
    char num;
    size_t count;
    uint32_t var_ch;
    char const * p;
    char * q;
    char ** dest;
    char const ** src;
    size_t * output_count;
    /* _Bool get_funky_string(char ** dest,char const ** src,_Bool equals_end,size_t * output_count); */
    eax = *((ebp + 0x10));
    *((ebp - 0x24)) = al;
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 4)) = eax;
    *((ebp - 0x10)) = 0;
    *((ebp - 0x11)) = 0;
    *((ebp - 0xc)) = 0;
    void (*0x804bab7)() ();
    if (*((ebp - 0xc)) > 4) {
        void (*0x804bab2)() ();
    }
    eax = *((ebp - 0xc));
    eax <<= 2;
    eax = *((eax + 0x805f4a8));
    return void (*eax)() ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804bab7 */
#include <stdint.h>
 
int32_t loc_0804bab7 (int32_t arg_8h, int32_t arg_ch, int32_t arg_14h) {
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    if (*((ebp - 0xc)) <= 4) {
        void (*0x804b80c)() ();
    }
    edx = *((ebp + 8));
    eax = *((ebp - 4));
    *(edx) = eax;
    edx = *((ebp + 0xc));
    eax = *((ebp - 8));
    *(edx) = eax;
    edx = *((ebp + 0x14));
    eax = *((ebp - 0x10));
    *(edx) = eax;
    al = (*((ebp - 0xc)) != 6) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804c6ef */
#include <stdint.h>
 
int32_t dbg_file_ignored (void) {
    int32_t var_8h;
    int32_t var_bp_4h;
    char const * name;
    int32_t var_4h;
    /* _Bool file_ignored(char const * name); */
    eax = ignore_mode;
    if (eax != 2) {
        eax = *((ebp + 8));
        eax = *(eax);
        if (al != 0x2e) {
            goto label_0;
        }
        eax = ignore_mode;
        if (eax == 0) {
            goto label_1;
        }
        eax = *((ebp + 8));
        eax++;
        eax = *(eax);
        if (al == 0x2e) {
            *((ebp - 4)) = 2;
        } else {
            *((ebp - 4)) = 1;
        }
        eax = *((ebp - 4));
        eax += *((ebp + 8));
        eax = *(eax);
        if (al == 0) {
            goto label_1;
        }
    }
label_0:
    eax = ignore_mode;
    if (eax == 0) {
        eax = hide_patterns;
        edx = *((ebp + 8));
        *((esp + 4)) = edx;
        *(esp) = eax;
        al = patterns_match ();
        if (al != 0) {
            goto label_1;
        }
    }
    eax = ignore_patterns;
    edx = *((ebp + 8));
    *((esp + 4)) = edx;
    *(esp) = eax;
    al = patterns_match ();
    if (al != 0) {
label_1:
        *((ebp - 8)) = 1;
    } else {
        *((ebp - 8)) = 0;
    }
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804fa54 */
#include <stdint.h>
 
int32_t dbg_quote_name (size_t n, mbstate_t * ps, size_t arg_sp_10h) {
    int32_t var_204ch;
    int32_t var_2048h;
    wchar_t wc;
    mbstate_t mbstate;
    int32_t var_2038h;
    char[8192] smallbuf;
    size_t len;
    char * buf;
    size_t displayed_width;
    int32_t var_28h;
    uint32_t var_24h;
    char * q;
    size_t bytes;
    int32_t w;
    uint32_t var_14h;
    uint32_t var_10h;
    char const * p;
    char const * plimit;
    uint32_t var_bp_4h;
    FILE * out;
    char const * name;
    quoting_options const * options;
    size_t * width;
    char * s;
    /* size_t quote_name(FILE * out,char const * name,quoting_options const * options,size_t * width); */
    eax = *((ebp + 0x10));
    *((esp + 0x10)) = eax;
    *((esp + 0xc)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0x2000;
    eax = ebp - 0x2034;
    *(esp) = eax;
    eax = quotearg_buffer ();
    *((ebp - 0x34)) = eax;
    if (*((ebp - 0x34)) <= 0x1fff) {
        eax = ebp - 0x2034;
        *((ebp - 0x30)) = eax;
    } else {
        eax = *((ebp - 0x34));
        eax++;
        eax += 0xf;
        eax += 0xf;
        eax >>= 4;
        eax <<= 4;
        eax = esp + 0x14;
        *((ebp - 0x204c)) = eax;
        eax = *((ebp - 0x204c));
        eax += 0xf;
        eax >>= 4;
        eax <<= 4;
        *((ebp - 0x204c)) = eax;
        ecx = *((ebp - 0x204c));
        *((ebp - 0x30)) = ecx;
        eax = *((ebp - 0x34));
        edx = eax + 1;
        eax = *((ebp + 0x10));
        *((esp + 0x10)) = eax;
        *((esp + 0xc)) = 0xffffffff;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        *((esp + 4)) = edx;
        eax = *((ebp - 0x30));
        *(esp) = eax;
        quotearg_buffer ();
    }
    eax = *(obj.qmark_funny_chars);
    if (al == 0) {
        goto label_2;
    }
    eax = ctype_get_mb_cur_max ();
    if (eax <= 1) {
        goto label_3;
    }
    eax = *((ebp - 0x30));
    *((ebp - 0x28)) = eax;
    edx = *((ebp - 0x34));
    eax = *((ebp - 0x30));
    eax += edx;
    *((ebp - 0x24)) = eax;
    eax = *((ebp - 0x30));
    *((ebp - 0x20)) = eax;
    *((ebp - 0x2c)) = 0;
    goto label_4;
label_1:
    eax = *((ebp - 0x28));
    eax = *(eax);
    eax = (int32_t) al;
    *((ebp - 0x2048)) = eax;
    if (*((ebp - 0x2048)) <= 0x5f) {
        if (*((ebp - 0x2048)) >= 0x41) {
            goto label_5;
        }
        if (*((ebp - 0x2048)) < 0x20) {
            goto label_6;
        }
        if (*((ebp - 0x2048)) <= 0x23) {
            goto label_5;
        }
        eax = *((ebp - 0x2048));
        eax -= 0x25;
        if (eax > 0x1a) {
            goto label_6;
        }
    } else {
        eax = *((ebp - 0x2048));
        eax -= 0x61;
        if (eax > 0x1d) {
            goto label_6;
        }
    }
label_5:
    eax = *((ebp - 0x28));
    edx = *(eax);
    eax = *((ebp - 0x20));
    *(eax) = dl;
    *((ebp - 0x20))++;
    *((ebp - 0x28))++;
    *((ebp - 0x2c))++;
    goto label_4;
label_6:
    *((ebp - 0x203c)) = 0;
    *((ebp - 0x2038)) = 0;
label_0:
    edx = *((ebp - 0x24));
    eax = *((ebp - 0x28));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    edx = ecx;
    eax = ebp - 0x203c;
    eax = *((ebp - 0x28));
    eax = ebp - 0x2040;
    eax = mbrtowc (eax, eax, edx);
    *((ebp - 0x1c)) = eax;
    if (*((ebp - 0x1c)) == -1) {
        *((ebp - 0x28))++;
        eax = *((ebp - 0x20));
        *(eax) = 0x3f;
        *((ebp - 0x20))++;
        *((ebp - 0x2c))++;
        goto label_4;
    }
    if (*((ebp - 0x1c)) == 0xfffffffe) {
        eax = *((ebp - 0x24));
        *((ebp - 0x28)) = eax;
        eax = *((ebp - 0x20));
        *(eax) = 0x3f;
        *((ebp - 0x20))++;
        *((ebp - 0x2c))++;
        goto label_4;
    }
    if (*((ebp - 0x1c)) == 0) {
        *((ebp - 0x1c)) = 1;
    }
    eax = *((ebp - 0x2040));
    *(esp) = eax;
    eax = wcwidth ();
    *((ebp - 0x18)) = eax;
    if (*((ebp - 0x18)) < 0) {
        goto label_7;
    }
    while (*((ebp - 0x1c)) != 0) {
        eax = *((ebp - 0x28));
        edx = *(eax);
        eax = *((ebp - 0x20));
        *(eax) = dl;
        *((ebp - 0x20))++;
        *((ebp - 0x28))++;
        *((ebp - 0x1c))--;
    }
    eax = *((ebp - 0x18));
    *((ebp - 0x2c)) += eax;
    goto label_8;
label_7:
    eax = *((ebp - 0x1c));
    *((ebp - 0x28)) += eax;
    eax = *((ebp - 0x20));
    *(eax) = 0x3f;
    *((ebp - 0x20))++;
    *((ebp - 0x2c))++;
label_8:
    eax = ebp - 0x203c;
    eax = mbsinit (eax);
    if (eax == 0) {
        goto label_0;
    }
label_4:
    eax = *((ebp - 0x28));
    if (eax < *((ebp - 0x24))) {
        goto label_1;
    }
    eax = *((ebp - 0x20));
    edx = *((ebp - 0x30));
    eax -= edx;
    *((ebp - 0x34)) = eax;
    goto label_9;
label_3:
    eax = *((ebp - 0x30));
    *((ebp - 0x14)) = eax;
    edx = *((ebp - 0x34));
    eax = *((ebp - 0x30));
    eax += edx;
    *((ebp - 0x10)) = eax;
    while (eax < *((ebp - 0x10))) {
        eax = ctype_b_loc ();
        ebx = *(eax);
        eax = *((ebp - 0x14));
        eax = *(eax);
        eax = (int32_t) al;
        al = to_uchar (eax);
        eax = (int32_t) al;
        eax += eax;
        eax = ebx + eax;
        eax = *(eax);
        eax = (int32_t) ax;
        eax &= 0x4000;
        if (eax == 0) {
            eax = *((ebp - 0x14));
            *(eax) = 0x3f;
        }
        *((ebp - 0x14))++;
        eax = *((ebp - 0x14));
    }
    eax = *((ebp - 0x34));
    *((ebp - 0x2c)) = eax;
    goto label_9;
label_2:
    if (*((ebp + 0x14)) == 0) {
        goto label_9;
    }
    eax = ctype_get_mb_cur_max ();
    if (eax > 1) {
        *((esp + 8)) = 0;
        eax = *((ebp - 0x34));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x30));
        *(esp) = eax;
        eax = mbsnwidth ();
        *((ebp - 0x2c)) = eax;
        goto label_9;
    }
    eax = *((ebp - 0x30));
    *((ebp - 0xc)) = eax;
    edx = *((ebp - 0x34));
    eax = *((ebp - 0x30));
    eax += edx;
    *((ebp - 8)) = eax;
    *((ebp - 0x2c)) = 0;
    while (eax < *((ebp - 8))) {
        eax = ctype_b_loc ();
        ebx = *(eax);
        eax = *((ebp - 0xc));
        eax = *(eax);
        eax = (int32_t) al;
        al = to_uchar (eax);
        eax = (int32_t) al;
        eax += eax;
        eax = ebx + eax;
        eax = *(eax);
        eax = (int32_t) ax;
        eax &= 0x4000;
        if (eax != 0) {
            *((ebp - 0x2c))++;
        }
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
    }
label_9:
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 8));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x34));
        *((esp + 8)) = eax;
        *((esp + 4)) = 1;
        eax = *((ebp - 0x30));
        *(esp) = eax;
        fwrite_unlocked ();
    }
    if (*((ebp + 0x14)) != 0) {
        edx = *((ebp + 0x14));
        eax = *((ebp - 0x2c));
        *(edx) = eax;
    }
    eax = *((ebp - 0x34));
    ebx = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804c6a2 */
#include <stdint.h>
 
int32_t dbg_patterns_match (void) {
    int32_t var_11h;
    ignore_pattern const * p;
    ignore_pattern const * patterns;
    char const * file;
    int32_t var_sp_4h;
    int32_t var_8h;
    /* _Bool patterns_match(ignore_pattern const * patterns,char const * file); */
    eax = *((ebp + 8));
    *((ebp - 4)) = eax;
    while (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
        edx = *(eax);
        *((esp + 8)) = 4;
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        *(esp) = edx;
        eax = fnmatch ();
        if (eax == 0) {
            *((ebp - 0x11)) = 1;
            goto label_0;
        }
        eax = *((ebp - 4));
        eax = *((eax + 4));
        *((ebp - 4)) = eax;
    }
    *((ebp - 0x11)) = 0;
label_0:
    eax = *((ebp - 0x11));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804c883 */
#include <stdint.h>
 
void dbg_freecon (void) {
    char * con;
    /* void freecon(char * con); */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d33d */
#include <stdint.h>
 
int32_t dbg_is_directory (void) {
    int32_t var_4h;
    fileinfo const * f;
    /* _Bool is_directory(fileinfo const * f); */
    eax = *((ebp + 8));
    eax = *((eax + 0x68));
    if (eax != 3) {
        eax = *((ebp + 8));
        eax = *((eax + 0x68));
        if (eax != 9) {
            goto label_0;
        }
    }
    *((ebp - 4)) = 1;
    goto label_1;
label_0:
    *((ebp - 4)) = 0;
label_1:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d495 */
#include <stdint.h>
 
int32_t dbg_basename_is_dot_or_dotdot (void) {
    char const * base;
    char const * name;
    /* _Bool basename_is_dot_or_dotdot(char const * name); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = last_component ();
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    *(esp) = eax;
    dot_or_dotdot ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051d70 */
#include <stdint.h>
 
int32_t dbg_last_component (void) {
    char const * p;
    char const * base;
    _Bool saw_slash;
    char const * name;
    /* char * last_component(char const * name); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    *((ebp - 1)) = 0;
    while (al == 0x2f) {
        *((ebp - 8))++;
        eax = *((ebp - 8));
        eax = *(eax);
    }
    eax = *((ebp - 8));
    *((ebp - 0xc)) = eax;
    while (al != 0) {
        eax = *((ebp - 0xc));
        eax = *(eax);
        if (al == 0x2f) {
            *((ebp - 1)) = 1;
        } else {
            if (*((ebp - 1)) == 0) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            *((ebp - 8)) = eax;
            *((ebp - 1)) = 0;
        }
label_0:
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
        eax = *(eax);
    }
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d4b6 */
#include <stdint.h>
 
int32_t dbg_dot_or_dotdot (void) {
    int32_t var_1ch;
    int32_t var_15h;
    int32_t var_14h;
    char sep;
    char const * file_name;
    /* _Bool dot_or_dotdot(char const * file_name); */
    eax = *((ebp + 8));
    eax = *(eax);
    if (al == 0x2e) {
        eax = *((ebp + 8));
        eax++;
        eax = *(eax);
        if (al == 0x2e) {
            *((ebp - 0x1c)) = 2;
        } else {
            *((ebp - 0x1c)) = 1;
        }
        eax = *((ebp - 0x1c));
        eax += *((ebp + 8));
        eax = *(eax);
        *((ebp - 1)) = al;
        if (*((ebp - 1)) != 0) {
            if (*((ebp - 1)) != 0x2f) {
                goto label_0;
            }
        }
        *((ebp - 0x14)) = 1;
        goto label_1;
label_0:
        *((ebp - 0x14)) = 0;
label_1:
        eax = *((ebp - 0x14));
        *((ebp - 0x15)) = al;
    } else {
        *((ebp - 0x15)) = 0;
    }
    eax = *((ebp - 0x15));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d6bb */
#include <stdint.h>
 
int32_t dbg_xstrcoll (void) {
    int32_t diff;
    char const * a;
    char const * b;
    char * errname;
    char * format;
    int32_t var_ch;
    int32_t var_sp_10h;
    /* int xstrcoll(char const * a,char const * b); */
    errno_location ();
    *(eax) = 0;
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax = strcoll (eax, eax);
    *((ebp - 0x10)) = eax;
    eax = errno_location ();
    eax = *(eax);
    if (eax != 0) {
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        *(esp) = 1;
        eax = quote_n ();
        edi = eax;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        *(esp) = 0;
        eax = quote_n ();
        ebx = eax;
        *(esp) = "cannot compare file names %s and %s";
        eax = gettext ();
        esi = eax;
        eax = errno_location ();
        eax = *(eax);
        *((esp + 0x10)) = edi;
        *((esp + 0xc)) = ebx;
        error (0, eax, esi);
        set_exit_status (0);
        longjmp (obj.failed_strcoll, 1);
    }
    eax = *((ebp - 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804953c */
#include <stdint.h>
 
void strcoll (void) {
    strcoll ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804989c */
#include <stdint.h>
 
void longjmp (void) {
    longjmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d775 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_ctime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_ctime(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_ctime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d797 */
#include <stdint.h>
 
int32_t dbg_cmp_ctime (void) {
    uint32_t var_24h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t diff;
    fileinfo const * a;
    fileinfo const * b;
    int (*)() cmp;
    int32_t var_4h_3;
    int32_t var_4h_2;
    int32_t var_4h;
    /* int cmp_ctime(fileinfo const * a,fileinfo const * b,int (*)() cmp); */
    eax = *((ebp + 8));
    eax += 8;
    edx = ebp - 0x14;
    *((esp + 4)) = eax;
    get_stat_ctime (edx);
    eax = *((ebp + 0xc));
    eax += 8;
    edx = ebp - 0xc;
    *((esp + 4)) = eax;
    get_stat_ctime (edx);
    eax = *((ebp - 0x14));
    edx = *((ebp - 0x10));
    *((esp + 8)) = eax;
    *((esp + 0xc)) = edx;
    eax = *((ebp - 0xc));
    edx = *((ebp - 8));
    eax = timespec_cmp (eax, edx);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        eax = *(eax);
        eax = *((ebp + 0x10));
        eax = void (*eax)(uint32_t, uint32_t) (eax, edx);
        *((ebp - 0x24)) = eax;
    } else {
        eax = *((ebp - 4));
        *((ebp - 0x24)) = eax;
    }
    eax = *((ebp - 0x24));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d81c */
#include <stdint.h>
 
int32_t dbg_get_stat_ctime (int32_t arg_8h) {
    stat const * st;
    /* timespec get_stat_ctime(stat const * st); */
    ecx = *((ebp + 8));
    eax = *((ebp + 0xc));
    edx = *((eax + 0x54));
    eax = *((eax + 0x50));
    *(ecx) = eax;
    *((ecx + 4)) = edx;
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d836 */
#include <stdint.h>
 
int32_t dbg_timespec_cmp (int32_t arg_ch, int32_t arg_14h) {
    int32_t var_8h;
    int32_t var_4h;
    timespec a;
    timespec b;
    /* int timespec_cmp(timespec a,timespec b); */
    edx = *((ebp + 8));
    eax = *((ebp + 0x10));
    if (edx >= eax) {
        edx = *((ebp + 8));
        eax = *((ebp + 0x10));
        if (edx <= eax) {
            edx = *((ebp + 0xc));
            eax = *((ebp + 0x14));
            ecx = edx;
            ecx -= eax;
            *((ebp - 4)) = ecx;
        } else {
            *((ebp - 4)) = 1;
        }
        eax = *((ebp - 4));
        *((ebp - 8)) = eax;
    } else {
        *((ebp - 8)) = 0xffffffff;
    }
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d87a */
#include <stdint.h>
 
int32_t dbg_strcmp_ctime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_ctime(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_ctime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d89c */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_ctime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_ctime(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_ctime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d8be */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_ctime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_ctime(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_ctime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d8e0 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_df_ctime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_df_ctime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_ctime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d958 */
#include <stdint.h>
 
int32_t dbg_strcmp_df_ctime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_df_ctime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_ctime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804d9d0 */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_df_ctime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_df_ctime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_ctime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804da48 */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_df_ctime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_df_ctime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_ctime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804dac0 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_mtime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_mtime(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_mtime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804dae2 */
#include <stdint.h>
 
int32_t dbg_cmp_mtime (void) {
    uint32_t var_24h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t diff;
    fileinfo const * a;
    fileinfo const * b;
    int (*)() cmp;
    int32_t var_4h_3;
    int32_t var_4h_2;
    int32_t var_4h;
    /* int cmp_mtime(fileinfo const * a,fileinfo const * b,int (*)() cmp); */
    eax = *((ebp + 8));
    eax += 8;
    edx = ebp - 0x14;
    *((esp + 4)) = eax;
    get_stat_mtime (edx);
    eax = *((ebp + 0xc));
    eax += 8;
    edx = ebp - 0xc;
    *((esp + 4)) = eax;
    get_stat_mtime (edx);
    eax = *((ebp - 0x14));
    edx = *((ebp - 0x10));
    *((esp + 8)) = eax;
    *((esp + 0xc)) = edx;
    eax = *((ebp - 0xc));
    edx = *((ebp - 8));
    eax = timespec_cmp (eax, edx);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        eax = *(eax);
        eax = *((ebp + 0x10));
        eax = void (*eax)(uint32_t, uint32_t) (eax, edx);
        *((ebp - 0x24)) = eax;
    } else {
        eax = *((ebp - 4));
        *((ebp - 0x24)) = eax;
    }
    eax = *((ebp - 0x24));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804db67 */
#include <stdint.h>
 
int32_t dbg_get_stat_mtime (int32_t arg_8h) {
    stat const * st;
    /* timespec get_stat_mtime(stat const * st); */
    ecx = *((ebp + 8));
    eax = *((ebp + 0xc));
    edx = *((eax + 0x4c));
    eax = *((eax + 0x48));
    *(ecx) = eax;
    *((ecx + 4)) = edx;
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804db81 */
#include <stdint.h>
 
int32_t dbg_strcmp_mtime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_mtime(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_mtime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804dba3 */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_mtime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_mtime(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_mtime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804dbc5 */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_mtime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_mtime(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_mtime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804dbe7 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_df_mtime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_df_mtime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_mtime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804dc5f */
#include <stdint.h>
 
int32_t dbg_strcmp_df_mtime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_df_mtime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_mtime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804dcd7 */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_df_mtime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_df_mtime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_mtime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804dd4f */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_df_mtime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_df_mtime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_mtime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804ddc7 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_atime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_atime(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_atime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804dde9 */
#include <stdint.h>
 
int32_t dbg_cmp_atime (void) {
    uint32_t var_24h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t diff;
    fileinfo const * a;
    fileinfo const * b;
    int (*)() cmp;
    int32_t var_4h_3;
    int32_t var_4h_2;
    int32_t var_4h;
    /* int cmp_atime(fileinfo const * a,fileinfo const * b,int (*)() cmp); */
    eax = *((ebp + 8));
    eax += 8;
    edx = ebp - 0x14;
    *((esp + 4)) = eax;
    get_stat_atime (edx);
    eax = *((ebp + 0xc));
    eax += 8;
    edx = ebp - 0xc;
    *((esp + 4)) = eax;
    get_stat_atime (edx);
    eax = *((ebp - 0x14));
    edx = *((ebp - 0x10));
    *((esp + 8)) = eax;
    *((esp + 0xc)) = edx;
    eax = *((ebp - 0xc));
    edx = *((ebp - 8));
    eax = timespec_cmp (eax, edx);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        eax = *(eax);
        eax = *((ebp + 0x10));
        eax = void (*eax)(uint32_t, uint32_t) (eax, edx);
        *((ebp - 0x24)) = eax;
    } else {
        eax = *((ebp - 4));
        *((ebp - 0x24)) = eax;
    }
    eax = *((ebp - 0x24));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804de6e */
#include <stdint.h>
 
int32_t dbg_get_stat_atime (int32_t arg_8h) {
    stat const * st;
    /* timespec get_stat_atime(stat const * st); */
    ecx = *((ebp + 8));
    eax = *((ebp + 0xc));
    edx = *((eax + 0x44));
    eax = *((eax + 0x40));
    *(ecx) = eax;
    *((ecx + 4)) = edx;
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804de88 */
#include <stdint.h>
 
int32_t dbg_strcmp_atime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_atime(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_atime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804deaa */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_atime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_atime(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_atime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804decc */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_atime (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_atime(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_atime ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804deee */
#include <stdint.h>
 
int32_t dbg_xstrcoll_df_atime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_df_atime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_atime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804df66 */
#include <stdint.h>
 
int32_t dbg_strcmp_df_atime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_df_atime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_atime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804dfde */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_df_atime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_df_atime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_atime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e056 */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_df_atime (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_df_atime(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_atime ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e0ce */
#include <stdint.h>
 
int32_t dbg_xstrcoll_size (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_size(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_size ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e0f0 */
#include <stdint.h>
 
int32_t dbg_cmp_size (void) {
    int32_t var_3ch;
    uint32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    uint32_t var_14h;
    int32_t diff;
    fileinfo const * a;
    fileinfo const * b;
    int (*)() cmp;
    int32_t var_sp_4h;
    /* int cmp_size(fileinfo const * a,fileinfo const * b,int (*)() cmp); */
    eax = *((ebp + 0xc));
    edx = *((eax + 0x34));
    ecx = *((eax + 0x38));
    *((ebp - 0x38)) = edx;
    *((ebp - 0x34)) = ecx;
    eax = *((ebp + 8));
    edx = *((eax + 0x34));
    ecx = *((eax + 0x38));
    *((ebp - 0x30)) = edx;
    *((ebp - 0x2c)) = ecx;
    ecx = *((ebp - 0x2c));
    if (*((ebp - 0x34)) >= ecx) {
        eax = *((ebp - 0x2c));
        if (*((ebp - 0x34)) <= eax) {
            edx = *((ebp - 0x30));
            if (*((ebp - 0x38)) < edx) {
                goto label_0;
            }
        }
        eax = *((ebp + 0xc));
        edx = *((eax + 0x34));
        ecx = *((eax + 0x38));
        *((ebp - 0x28)) = edx;
        *((ebp - 0x24)) = ecx;
        eax = *((ebp + 8));
        edx = *((eax + 0x34));
        ecx = *((eax + 0x38));
        *((ebp - 0x20)) = edx;
        *((ebp - 0x1c)) = ecx;
        *((ebp - 0x3c)) = 1;
        ecx = *((ebp - 0x1c));
        if (*((ebp - 0x24)) > ecx) {
            goto label_1;
        }
        eax = *((ebp - 0x1c));
        if (*((ebp - 0x24)) >= eax) {
            edx = *((ebp - 0x20));
            if (*((ebp - 0x28)) > edx) {
                goto label_1;
            }
        }
        *((ebp - 0x3c)) = 0;
    } else {
label_0:
        *((ebp - 0x3c)) = 0xffffffff;
    }
label_1:
    ecx = *((ebp - 0x3c));
    *((ebp - 4)) = ecx;
    if (*((ebp - 4)) == 0) {
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        eax = *(eax);
        eax = *((ebp + 0x10));
        eax = void (*eax)(uint32_t, uint32_t) (eax, edx);
        *((ebp - 0x14)) = eax;
    } else {
        eax = *((ebp - 4));
        *((ebp - 0x14)) = eax;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e1ab */
#include <stdint.h>
 
int32_t dbg_strcmp_size (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_size(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_size ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e1cd */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_size (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_size(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_size ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e1ef */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_size (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_size(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_size ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e211 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_df_size (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_df_size(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_size ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e289 */
#include <stdint.h>
 
int32_t dbg_strcmp_df_size (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_df_size(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_size ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e301 */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_df_size (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_df_size(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_size ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e379 */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_df_size (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_df_size(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_size ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e3f1 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_name (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_name(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_name ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e413 */
#include <stdint.h>
 
int32_t dbg_cmp_name (void) {
    fileinfo const * a;
    fileinfo const * b;
    int (*)() cmp;
    int32_t var_4h;
    /* int cmp_name(fileinfo const * a,fileinfo const * b,int (*)() cmp); */
    eax = *((ebp + 0xc));
    edx = *(eax);
    eax = *((ebp + 8));
    eax = *(eax);
    eax = *((ebp + 0x10));
    void (*eax)(uint32_t, uint32_t) (eax, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e431 */
#include <stdint.h>
 
int32_t dbg_strcmp_name (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_name(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_name ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e453 */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_name (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_name(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_name ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e475 */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_name (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_name(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_name ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e497 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_df_name (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_df_name(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_name ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e50f */
#include <stdint.h>
 
int32_t dbg_strcmp_df_name (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_df_name(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_name ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e587 */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_df_name (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_df_name(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_name ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e5ff */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_df_name (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_df_name(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_name ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e677 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_extension (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_extension(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_extension ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e699 */
#include <stdint.h>
 
int32_t dbg_cmp_extension (void) {
    char * var_1ch;
    char * var_18h;
    uint32_t var_14h;
    char const * base1;
    char const * base2;
    int32_t diff;
    fileinfo const * a;
    fileinfo const * b;
    int (*)() cmp;
    char * c;
    /* int cmp_extension(fileinfo const * a,fileinfo const * b,int (*)() cmp); */
    eax = *((ebp + 8));
    eax = *(eax);
    eax = strrchr (eax, 0x2e);
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0xc));
    eax = *(eax);
    eax = strrchr (eax, 0x2e);
    *((ebp - 8)) = eax;
    if (*((ebp - 8)) != 0) {
        eax = *((ebp - 8));
        *((ebp - 0x1c)) = eax;
    } else {
        *((ebp - 0x1c)) = 0x805ed70;
    }
    if (*((ebp - 0xc)) != 0) {
        eax = *((ebp - 0xc));
        *((ebp - 0x18)) = eax;
    } else {
        *((ebp - 0x18)) = 0x805ed70;
    }
    eax = *((ebp - 0x1c));
    eax = *((ebp - 0x18));
    eax = *((ebp + 0x10));
    eax = void (*eax)(uint32_t, uint32_t) (eax, eax);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        eax = *((ebp + 0xc));
        edx = *(eax);
        eax = *((ebp + 8));
        eax = *(eax);
        eax = *((ebp + 0x10));
        eax = void (*eax)(uint32_t, uint32_t) (eax, edx);
        *((ebp - 0x14)) = eax;
    } else {
        eax = *((ebp - 4));
        *((ebp - 0x14)) = eax;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e73a */
#include <stdint.h>
 
int32_t dbg_strcmp_extension (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_extension(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_extension ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e75c */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_extension (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_extension(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x804d6bb;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_extension ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e77e */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_extension (void) {
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_extension(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 8)) = 0x8049a9c;
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_extension ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e7a0 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_df_extension (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int xstrcoll_df_extension(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_extension ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e818 */
#include <stdint.h>
 
int32_t dbg_strcmp_df_extension (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int strcmp_df_extension(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_extension ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e890 */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_df_extension (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_xstrcoll_df_extension(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x804d6bb;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_extension ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e908 */
#include <stdint.h>
 
int32_t dbg_rev_strcmp_df_extension (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    int32_t var_8h;
    /* int rev_strcmp_df_extension(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 8)) = 0x8049a9c;
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_extension ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e980 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_version (void) {
    V a;
    V b;
    int32_t var_4h;
    /* int xstrcoll_version(V a,V b); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_version ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e99a */
#include <stdint.h>
 
int32_t dbg_cmp_version (void) {
    fileinfo const * a;
    fileinfo const * b;
    int32_t var_4h;
    /* int cmp_version(fileinfo const * a,fileinfo const * b); */
    eax = *((ebp + 0xc));
    edx = *(eax);
    eax = *((ebp + 8));
    eax = *(eax);
    *((esp + 4)) = edx;
    *(esp) = eax;
    strverscmp ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804976c */
#include <stdint.h>
 
void strverscmp (void) {
    strverscmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e9b8 */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_version (void) {
    V a;
    V b;
    int32_t var_4h;
    /* int rev_xstrcoll_version(V a,V b); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    *((esp + 4)) = eax;
    *(esp) = edx;
    cmp_version ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804e9d2 */
#include <stdint.h>
 
int32_t dbg_xstrcoll_df_version (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    /* int xstrcoll_df_version(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 0xc));
            edx = *((ebp + 8));
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_version ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804ea42 */
#include <stdint.h>
 
int32_t dbg_rev_xstrcoll_df_version (void) {
    int32_t var_14h;
    _Bool a_is_dir;
    _Bool b_is_dir;
    V a;
    V b;
    int32_t var_4h;
    /* int rev_xstrcoll_df_version(V a,V b); */
    eax = *((ebp + 8));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 2)) = al;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    al = is_directory ();
    *((ebp - 1)) = al;
    if (*((ebp - 2)) != 0) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            *((ebp - 0x14)) = 0xffffffff;
        }
    } else {
        eax = *((ebp - 2));
        eax ^= 1;
        if (al != 0) {
            if (*((ebp - 1)) != 0) {
                *((ebp - 0x14)) = 1;
            }
        } else {
            eax = *((ebp + 8));
            edx = *((ebp + 0xc));
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = cmp_version ();
            *((ebp - 0x14)) = eax;
        }
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804eab2 */
#include <stdint.h>
 
int32_t dbg_initialize_ordering_vector (void) {
    size_t i;
    /* void initialize_ordering_vector(); */
    *((ebp - 8)) = 0;
    while (*((ebp - 8)) < eax) {
        edx = sorted_file;
        eax = *((ebp - 8));
        eax <<= 2;
        ecx = edx + eax;
        ebx = cwd_file;
        eax = *((ebp - 8));
        edx = eax*8;
        eax = edx;
        eax <<= 4;
        eax -= edx;
        eax = ebx + eax;
        *(ecx) = eax;
        *((ebp - 8))++;
        eax = cwd_n_used;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804ffb5 */
#include <stdint.h>
 
uint32_t dbg_print_file_name_and_frills (void) {
    int32_t var_2c8h;
    int32_t var_2c4h;
    int32_t var_2c0h;
    int32_t var_2bch;
    int32_t var_2b8h;
    int32_t var_2b4h;
    int32_t var_2b0h;
    int32_t var_2ach;
    int32_t var_2a8h;
    int32_t var_2a4h;
    int32_t var_2a0h;
    char[652] buf;
    fileinfo const * f;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    /* void print_file_name_and_frills(fileinfo const * f); */
    eax = *(obj.print_inode);
    if (al != 0) {
        eax = *((ebp + 8));
        edx = *((eax + 0x60));
        ecx = *((eax + 0x64));
        eax = ebp - 0x298;
        *((esp + 8)) = eax;
        eax = umaxtostr (edx, ecx);
        *((ebp - 0x2c8)) = eax;
        eax = format;
        if (eax != 4) {
            eax = inode_number_width;
            *((ebp - 0x2c4)) = eax;
        } else {
            *((ebp - 0x2c4)) = 0;
        }
        edx = *((ebp - 0x2c8));
        *((esp + 8)) = edx;
        eax = *((ebp - 0x2c4));
        *((esp + 4)) = eax;
        printf ("%*s ");
    }
    eax = *(obj.print_block_size);
    if (al != 0) {
        ecx = output_block_size;
        ebx = .comment;
        edx = human_output_opts;
        *((ebp - 0x2c0)) = edx;
        eax = *((ebp + 8));
        edx = *((eax + 0x44));
        eax = *((eax + 0x40));
        esi = *((eax + 0x40));
        edi = edx;
        *((esp + 0x18)) = ecx;
        *((esp + 0x1c)) = ebx;
        eax = *((ebp - 0x2c0));
        eax = ebp - 0x298;
        eax = human_readable (0x200, edi, eax);
        *((ebp - 0x2bc)) = eax;
        eax = format;
        if (eax != 4) {
            edx = block_size_width;
            *((ebp - 0x2b8)) = edx;
        } else {
            *((ebp - 0x2b8)) = 0;
        }
        eax = *((ebp - 0x2bc));
        *((esp + 8)) = eax;
        edx = *((ebp - 0x2b8));
        *((esp + 4)) = edx;
        printf ("%*s ");
    }
    eax = *(obj.print_scontext);
    if (al != 0) {
        eax = *((ebp + 8));
        eax = *((eax + 0x70));
        *((ebp - 0x2b4)) = eax;
        eax = format;
        if (eax != 4) {
            eax = scontext_width;
            *((ebp - 0x2b0)) = eax;
        } else {
            *((ebp - 0x2b0)) = 0;
        }
        edx = *((ebp - 0x2b4));
        *((esp + 8)) = edx;
        eax = *((ebp - 0x2b0));
        *((esp + 4)) = eax;
        printf ("%*s ");
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x68));
    *((ebp - 0x2ac)) = eax;
    eax = *((ebp + 8));
    eax = *((eax + 0x74));
    eax = (int32_t) al;
    *((ebp - 0x2a8)) = eax;
    eax = *((ebp + 8));
    eax = *((eax + 0x75));
    eax = (int32_t) al;
    *((ebp - 0x2a4)) = eax;
    eax = *(obj.color_symlink_as_referent);
    edx = (int32_t) al;
    eax = *((ebp + 8));
    eax = *((eax + 0x75));
    eax = (int32_t) al;
    eax &= edx;
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = *((eax + 0x6c));
        *((ebp - 0x2a0)) = eax;
    } else {
        eax = *((ebp + 8));
        eax = *((eax + 0x18));
        *((ebp - 0x2a0)) = eax;
    }
    eax = *((ebp + 8));
    eax = *(eax);
    *((esp + 0x14)) = 0;
    edx = *((ebp - 0x2ac));
    *((esp + 0x10)) = edx;
    edx = *((ebp - 0x2a8));
    *((esp + 0xc)) = edx;
    edx = *((ebp - 0x2a4));
    *((esp + 8)) = edx;
    edx = *((ebp - 0x2a0));
    *((esp + 4)) = edx;
    print_name_with_quoting (eax);
    eax = indicator_style;
    if (eax != 0) {
        eax = *((ebp + 8));
        ecx = *((eax + 0x68));
        eax = *((ebp + 8));
        edx = *((eax + 0x18));
        eax = *((ebp + 8));
        eax = *((eax + 0x74));
        eax = (int32_t) al;
        *((esp + 8)) = ecx;
        *((esp + 4)) = edx;
        print_type_indicator (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8050817 */
#include <stdint.h>
 
uint32_t dbg_print_many_per_line (void) {
    int32_t var_3ch;
    size_t row;
    size_t cols;
    column_info const * line_fmt;
    size_t rows;
    size_t col;
    size_t filesno;
    size_t pos;
    fileinfo const * f;
    size_t name_length;
    size_t max_name_length;
    int32_t var_sp_4h;
    /* void print_many_per_line(); */
    eax = calculate_columns (1);
    *((ebp - 0x24)) = eax;
    ecx = column_info;
    edx = *((ebp - 0x24));
    eax = *((ebp - 0x24));
    eax += eax;
    eax += edx;
    eax <<= 2;
    eax -= 0xc;
    eax = ecx + eax;
    *((ebp - 0x20)) = eax;
    eax = cwd_n_used;
    edx = 0;
    eax = *(edx:eax) / ebp - 0x24;
    edx = *(edx:eax) % ebp - 0x24;
    ecx = eax;
    eax = cwd_n_used;
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0x3c));
    edx = 0;
    eax = *(edx:eax) / ebp - 0x24;
    edx = *(edx:eax) % ebp - 0x24;
    eax = edx;
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    eax = ecx + eax;
    *((ebp - 0x1c)) = eax;
    *((ebp - 0x28)) = 0;
    goto label_1;
label_0:
    *((ebp - 0x18)) = 0;
    eax = *((ebp - 0x28));
    *((ebp - 0x14)) = eax;
    *((ebp - 0x10)) = 0;
    do {
        edx = sorted_file;
        eax = *((ebp - 0x14));
        eax <<= 2;
        eax = edx + eax;
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        eax = length_of_file_name_and_frills ();
        *((ebp - 8)) = eax;
        eax = *((ebp - 0x20));
        edx = *((eax + 8));
        eax = *((ebp - 0x18));
        eax <<= 2;
        eax = edx + eax;
        *((ebp - 4)) = eax;
        *((ebp - 0x18))++;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        print_file_name_and_frills ();
        eax = *((ebp - 0x1c));
        *((ebp - 0x14)) += eax;
        eax = cwd_n_used;
        if (*((ebp - 0x14)) >= eax) {
            goto label_2;
        }
        edx = *((ebp - 4));
        eax = *((ebp - 0x10));
        ecx = eax + edx;
        edx = *((ebp - 8));
        eax = *((ebp - 0x10));
        eax += edx;
        *((esp + 4)) = ecx;
        *(esp) = eax;
        indent ();
        eax = *((ebp - 4));
        *((ebp - 0x10)) += eax;
    } while (1);
label_2:
    *(esp) = 0xa;
    putchar_unlocked ();
    *((ebp - 0x28))++;
label_1:
    eax = *((ebp - 0x28));
    if (eax < *((ebp - 0x1c))) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8050931 */
#include <stdint.h>
 
uint32_t dbg_print_horizontal (void) {
    int32_t var_28h;
    size_t filesno;
    size_t pos;
    size_t cols;
    column_info const * line_fmt;
    fileinfo const * f;
    size_t name_length;
    size_t max_name_length;
    size_t col;
    int32_t var_sp_4h;
    /* void print_horizontal(); */
    *((ebp - 0x1c)) = 0;
    eax = calculate_columns (0);
    *((ebp - 0x18)) = eax;
    ecx = column_info;
    edx = *((ebp - 0x18));
    eax = *((ebp - 0x18));
    eax += eax;
    eax += edx;
    eax <<= 2;
    eax -= 0xc;
    eax = ecx + eax;
    *((ebp - 0x14)) = eax;
    eax = sorted_file;
    eax = *(eax);
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    *(esp) = eax;
    eax = length_of_file_name_and_frills ();
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0x14));
    eax = *((eax + 8));
    eax = *(eax);
    *((ebp - 8)) = eax;
    eax = *((ebp - 0x10));
    *(esp) = eax;
    print_file_name_and_frills ();
    *((ebp - 0x20)) = 1;
    while (*((ebp - 0x20)) < eax) {
        eax = *((ebp - 0x20));
        *((ebp - 0x28)) = eax;
        eax = *((ebp - 0x28));
        edx = 0;
        eax = *(edx:eax) / ebp - 0x18;
        edx = *(edx:eax) % ebp - 0x18;
        *((ebp - 4)) = edx;
        if (*((ebp - 4)) == 0) {
            *(esp) = 0xa;
            putchar_unlocked ();
            *((ebp - 0x1c)) = 0;
        } else {
            edx = *((ebp - 8));
            eax = *((ebp - 0x1c));
            ecx = eax + edx;
            edx = *((ebp - 0xc));
            eax = *((ebp - 0x1c));
            eax += edx;
            *((esp + 4)) = ecx;
            *(esp) = eax;
            indent ();
            eax = *((ebp - 8));
            *((ebp - 0x1c)) += eax;
        }
        edx = sorted_file;
        eax = *((ebp - 0x20));
        eax <<= 2;
        eax = edx + eax;
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0x10));
        *(esp) = eax;
        print_file_name_and_frills ();
        eax = *((ebp - 0x10));
        *(esp) = eax;
        eax = length_of_file_name_and_frills ();
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0x14));
        edx = *((eax + 8));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
        *((ebp - 8)) = eax;
        *((ebp - 0x20))++;
        eax = cwd_n_used;
    }
    *(esp) = 0xa;
    putchar_unlocked ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8050a55 */
#include <stdint.h>
 
int32_t dbg_print_with_commas (void) {
    size_t filesno;
    size_t pos;
    fileinfo const * f;
    size_t len;
    char separator;
    /* void print_with_commas(); */
    *((ebp - 0x10)) = 0;
    *((ebp - 0x14)) = 0;
    while (*((ebp - 0x14)) < eax) {
        edx = sorted_file;
        eax = *((ebp - 0x14));
        eax <<= 2;
        eax = edx + eax;
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        eax = length_of_file_name_and_frills ();
        *((ebp - 8)) = eax;
        if (*((ebp - 0x14)) != 0) {
            edx = *((ebp - 8));
            eax = *((ebp - 0x10));
            eax += edx;
            edx = eax + 2;
            eax = line_length;
            if (edx < eax) {
                *((ebp - 0x10)) += 2;
                *((ebp - 1)) = 0x20;
            } else {
                *((ebp - 0x10)) = 0;
                *((ebp - 1)) = 0xa;
            }
            *(esp) = 0x2c;
            putchar_unlocked ();
            eax = *((ebp - 1));
            *(esp) = eax;
            putchar_unlocked ();
        }
        eax = *((ebp - 0xc));
        *(esp) = eax;
        print_file_name_and_frills ();
        eax = *((ebp - 8));
        *((ebp - 0x10)) += eax;
        *((ebp - 0x14))++;
        eax = cwd_n_used;
    }
    *(esp) = 0xa;
    putchar_unlocked ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804f041 */
#include <stdint.h>
 
int32_t dbg_print_long_format (void) {
    uint32_t var_11c8h;
    int32_t var_11c4h;
    int32_t var_11c0h;
    int32_t var_11bch;
    int32_t var_11b8h;
    int32_t var_11b4h;
    int32_t var_11b0h;
    int32_t var_11ach;
    int32_t var_11a8h;
    int32_t var_11a4h;
    int32_t var_11a0h;
    int32_t var_119ch;
    int32_t var_1198h;
    int32_t var_1194h;
    int32_t var_1189h;
    char[21] hbuf;
    char[21] minorbuf;
    char[21] majorbuf;
    int32_t var_ebeh;
    int32_t var_ea9h;
    timespec when_timespec;
    int32_t var_e90h;
    char[3643] buf;
    char[12] modebuf;
    int32_t var_46h;
    int32_t var_45h;
    size_t s;
    char * p;
    time_t when;
    int32_t when_ns;
    tm * when_local;
    char const * blocks;
    int32_t var_2ch;
    int32_t blanks_width;
    char const * size;
    int32_t pad;
    time_t six_months_ago;
    _Bool recent;
    char const * fmt;
    int32_t var_ch;
    fileinfo const * f;
    char * format;
    char * c;
    size_t n;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_sp_1ch;
    /* void print_long_format(fileinfo const * f); */
    eax = *((ebp + 8));
    eax = *((eax + 0x74));
    if (al != 0) {
        eax = *((ebp + 8));
        edx = eax + 8;
        eax = ebp - 0x50;
        *((esp + 4)) = eax;
        *(esp) = edx;
        filemodestring ();
    } else {
        eax = *((ebp + 8));
        eax = *((eax + 0x68));
        eax = *((eax + obj.filetype_letter));
        *((ebp - 0x50)) = al;
        eax = ebp - 0x50;
        eax++;
        memset (eax, 0x3f, 0xa);
        *((ebp - 0x45)) = 0;
    }
    eax = *(obj.any_has_acl);
    eax ^= 1;
    if (al != 0) {
        *((ebp - 0x46)) = 0;
    } else {
        eax = *((ebp + 8));
        eax = *((eax + 0x76));
        if (al == 0) {
            goto label_0;
        }
        *((ebp - 0x46)) = 0x2b;
    }
label_0:
    eax = time_type;
    *((ebp - 0x11c8)) = eax;
    if (*((ebp - 0x11c8)) != 1) {
        if (*((ebp - 0x11c8)) >= 1) {
            if (*((ebp - 0x11c8)) == 2) {
                goto label_1;
            }
        } else {
            eax = *((ebp + 8));
            eax += 8;
            edx = ebp - 0x1198;
            *((esp + 4)) = eax;
            get_stat_ctime (edx);
            eax = *((ebp - 0x1198));
            edx = *((ebp - 0x1194));
            *((ebp - 0xe94)) = eax;
            *((ebp - 0xe90)) = edx;
            goto label_2;
        }
        eax = *((ebp + 8));
        eax += 8;
        edx = ebp - 0x1198;
        *((esp + 4)) = eax;
        get_stat_mtime (edx);
        eax = *((ebp - 0x1198));
        edx = *((ebp - 0x1194));
        *((ebp - 0xe94)) = eax;
        *((ebp - 0xe90)) = edx;
        goto label_2;
label_1:
        eax = *((ebp + 8));
        eax += 8;
        edx = ebp - 0x1198;
        *((esp + 4)) = eax;
        get_stat_atime (edx);
        eax = *((ebp - 0x1198));
        edx = *((ebp - 0x1194));
        *((ebp - 0xe94)) = eax;
        *((ebp - 0xe90)) = edx;
        goto label_2;
    }
    abort ();
label_2:
    eax = *((ebp - 0xe94));
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0xe90));
    *((ebp - 0x38)) = eax;
    eax = ebp - 0xe8b;
    *((ebp - 0x40)) = eax;
    eax = *(obj.print_inode);
    if (al != 0) {
        eax = *((ebp + 8));
        edx = *((eax + 0x64));
        eax = *((eax + 0x60));
        eax |= edx;
        if (eax != 0) {
            eax = *((ebp + 8));
            edx = *((eax + 0x60));
            ecx = *((eax + 0x64));
            eax = ebp - 0xea9;
            *((esp + 8)) = eax;
            eax = umaxtostr (edx, ecx);
            *((ebp - 0x11c4)) = eax;
        } else {
            *((ebp - 0x11c4)) = 0x805f99e;
        }
        eax = inode_number_width;
        edx = *((ebp - 0x11c4));
        *((esp + 0xc)) = edx;
        eax = *((ebp - 0x40));
        sprintf (eax, "%*s ", eax);
        eax = *((ebp - 0x40));
        eax = strlen (eax);
        *((ebp - 0x40)) += eax;
    }
    eax = *(obj.print_block_size);
    if (al == 0) {
        goto label_3;
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x74));
    if (al != 0) {
        ecx = output_block_size;
        ebx = .comment;
        eax = human_output_opts;
        *((ebp - 0x11bc)) = eax;
        eax = *((ebp + 8));
        edx = *((eax + 0x44));
        eax = *((eax + 0x40));
        esi = *((eax + 0x40));
        edi = edx;
        *((esp + 0x18)) = ecx;
        *((esp + 0x1c)) = ebx;
        edx = *((ebp - 0x11bc));
        eax = ebp - 0x1189;
        eax = human_readable (0x200, edi, eax);
        *((ebp - 0x11c0)) = eax;
    } else {
        *((ebp - 0x11c0)) = 0x805f99e;
    }
    ecx = *((ebp - 0x11c0));
    *((ebp - 0x30)) = ecx;
    ebx = block_size_width;
    *((esp + 4)) = 0;
    eax = *((ebp - 0x30));
    *(esp) = eax;
    eax = gnu_mbswidth ();
    edx = ebx;
    edx -= eax;
    eax = edx;
    *((ebp - 0x2c)) = eax;
    while (*((ebp - 0x2c)) > 0) {
        eax = *((ebp - 0x40));
        *(eax) = 0x20;
        *((ebp - 0x40))++;
        *((ebp - 0x2c))--;
    }
    do {
        eax = *((ebp - 0x30));
        edx = *(eax);
        eax = *((ebp - 0x40));
        *(eax) = dl;
        eax = *((ebp - 0x40));
        eax = *(eax);
        al = (al != 0) ? 1 : 0;
        *((ebp - 0x40))++;
        *((ebp - 0x30))++;
    } while (al != 0);
    eax = *((ebp - 0x40));
    eax--;
    *(eax) = 0x20;
label_3:
    eax = *((ebp + 8));
    eax = *((eax + 0x74));
    if (al != 0) {
        eax = *((ebp + 8));
        eax = *((eax + 0x1c));
        edx = *((eax + 0x1c));
        ecx = 0;
        eax = ebp - 0xebe;
        *((esp + 8)) = eax;
        eax = umaxtostr (edx, ecx);
        *((ebp - 0x11b8)) = eax;
    } else {
        *((ebp - 0x11b8)) = 0x805f99e;
    }
    eax = nlink_width;
    ecx = *((ebp - 0x11b8));
    *((esp + 0x10)) = ecx;
    *((esp + 0xc)) = eax;
    eax = ebp - 0x50;
    eax = *((ebp - 0x40));
    sprintf (eax, "%s %*s ", eax);
    eax = *((ebp - 0x40));
    eax = strlen (eax);
    *((ebp - 0x40)) += eax;
    eax = *(obj.dired);
    if (al != 0) {
        eax = stdout;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 2;
        *((esp + 4)) = 1;
        *(esp) = 0x805f873;
        fwrite_unlocked ();
        eax = dired_pos;
        eax += 2;
        *(obj.dired_pos) = eax;
    }
    eax = *(obj.print_owner);
    edx = (int32_t) al;
    eax = *(obj.print_group);
    eax = (int32_t) al;
    edx |= eax;
    eax = *(obj.print_author);
    eax = (int32_t) al;
    edx |= eax;
    eax = *(obj.print_scontext);
    eax = (int32_t) al;
    eax |= edx;
    if (eax != 0) {
        eax = stdout;
        *((esp + 4)) = eax;
        eax = ebp - 0xe8b;
        *(esp) = eax;
        fputs_unlocked ();
        edx = *((ebp - 0x40));
        eax = ebp - 0xe8b;
        ecx = edx;
        ecx -= eax;
        eax = ecx;
        edx = ecx;
        eax = dired_pos;
        eax = edx + eax;
        *(obj.dired_pos) = eax;
        eax = *(obj.print_owner);
        if (al != 0) {
            eax = *((ebp + 8));
            eax = *((eax + 0x74));
            edx = (int32_t) al;
            ecx = owner_width;
            eax = *((ebp + 8));
            eax = *((eax + 0x20));
            *((esp + 8)) = edx;
            *((esp + 4)) = ecx;
            format_user (eax);
        }
        eax = *(obj.print_group);
        if (al != 0) {
            eax = *((ebp + 8));
            eax = *((eax + 0x74));
            edx = (int32_t) al;
            ecx = group_width;
            eax = *((ebp + 8));
            eax = *((eax + 0x24));
            *((esp + 8)) = edx;
            *((esp + 4)) = ecx;
            format_group (eax);
        }
        eax = *(obj.print_author);
        if (al != 0) {
            eax = *((ebp + 8));
            eax = *((eax + 0x74));
            edx = (int32_t) al;
            ecx = author_width;
            eax = *((ebp + 8));
            eax = *((eax + 0x20));
            *((esp + 8)) = edx;
            *((esp + 4)) = ecx;
            format_user (eax);
        }
        eax = *(obj.print_scontext);
        if (al != 0) {
            eax = scontext_width;
            edx = *((ebp + 8));
            edx = *((edx + 0x70));
            *((esp + 8)) = eax;
            *((esp + 4)) = 0;
            *(esp) = edx;
            format_user_or_group ();
        }
        eax = ebp - 0xe8b;
        *((ebp - 0x40)) = eax;
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x74));
    eax ^= 1;
    if (al == 0) {
        eax = *((ebp + 8));
        eax = *((eax + 0x18));
        eax &= 0xf000;
        if (eax != 0x2000) {
            eax = *((ebp + 8));
            eax = *((eax + 0x18));
            eax &= 0xf000;
            if (eax != 0x6000) {
                goto label_4;
            }
        }
        edx = major_device_number_width;
        eax = 0xfffffffe;
        ecx = 0xfffffffe;
        ecx -= edx;
        edx = ecx;
        eax = minor_device_number_width;
        edx -= eax;
        eax = file_size_width;
        eax = edx + eax;
        *((ebp - 0x28)) = eax;
        eax = *((ebp + 8));
        edx = *((eax + 0x2c));
        eax = *((eax + 0x28));
        *(esp) = eax;
        *((esp + 4)) = edx;
        eax = gnu_dev_minor ();
        edx = eax;
        ecx = 0;
        eax = ebp - 0xee8;
        *((esp + 8)) = eax;
        eax = umaxtostr (edx, ecx);
        ebx = eax;
        esi = minor_device_number_width;
        eax = *((ebp + 8));
        edx = *((eax + 0x2c));
        eax = *((eax + 0x28));
        *(esp) = eax;
        *((esp + 4)) = edx;
        eax = gnu_dev_major ();
        edx = eax;
        ecx = 0;
        eax = ebp - 0xed3;
        *((esp + 8)) = eax;
        eax = umaxtostr (edx, ecx);
        ecx = eax;
        eax = *((ebp - 0x28));
        eax >>= 0x1f;
        eax = ~eax;
        edx = eax;
        edx &= *((ebp - 0x28));
        eax = major_device_number_width;
        eax = edx + eax;
        *((esp + 0x14)) = ebx;
        *((esp + 0x10)) = esi;
        *((esp + 0xc)) = ecx;
        eax = *((ebp - 0x40));
        sprintf (eax, "%*s, %*s ", eax);
        eax = file_size_width;
        eax++;
        *((ebp - 0x40)) += eax;
        goto label_5;
    }
label_4:
    eax = *((ebp + 8));
    eax = *((eax + 0x74));
    if (al != 0) {
        ebx = file_output_block_size;
        esi = .comment;
        edi = human_output_opts;
        eax = *((ebp + 8));
        edx = *((eax + 0x38));
        eax = *((eax + 0x34));
        eax = unsigned_file_size (eax, edx);
        ecx = edx;
        edx = eax;
        *((esp + 0x18)) = ebx;
        *((esp + 0x1c)) = esi;
        eax = ebp - 0x1189;
        eax = human_readable (1, ecx, eax);
        *((ebp - 0x11b4)) = eax;
    } else {
        *((ebp - 0x11b4)) = 0x805f99e;
    }
    eax = *((ebp - 0x11b4));
    *((ebp - 0x24)) = eax;
    ebx = file_size_width;
    *((esp + 4)) = 0;
    eax = *((ebp - 0x24));
    *(esp) = eax;
    eax = gnu_mbswidth ();
    edx = ebx;
    edx -= eax;
    eax = edx;
    *((ebp - 0x20)) = eax;
    while (*((ebp - 0x20)) > 0) {
        eax = *((ebp - 0x40));
        *(eax) = 0x20;
        *((ebp - 0x40))++;
        *((ebp - 0x20))--;
    }
    do {
        eax = *((ebp - 0x24));
        edx = *(eax);
        eax = *((ebp - 0x40));
        *(eax) = dl;
        eax = *((ebp - 0x40));
        eax = *(eax);
        al = (al != 0) ? 1 : 0;
        *((ebp - 0x40))++;
        *((ebp - 0x24))++;
    } while (al != 0);
    eax = *((ebp - 0x40));
    eax--;
    *(eax) = 0x20;
label_5:
    eax = ebp - 0xe94;
    eax = localtime (eax);
    *((ebp - 0x34)) = eax;
    *((ebp - 0x44)) = 0;
    eax = *((ebp - 0x40));
    *(eax) = 1;
    eax = *((ebp + 8));
    eax = *((eax + 0x74));
    if (al != 0) {
        if (*((ebp - 0x34)) == 0) {
            goto label_6;
        }
        eax = current_time;
        if (eax >= *((ebp - 0x3c))) {
            eax = current_time;
            if (eax != *((ebp - 0x3c))) {
                goto label_7;
            }
            eax = current_time_ns;
            if (eax >= *((ebp - 0x38))) {
                goto label_7;
            }
        }
        get_current_time ();
label_7:
        eax = current_time;
        eax -= 0xf0c2ac;
        *((ebp - 0x1c)) = eax;
        eax = *((ebp - 0x1c));
        if (eax <= *((ebp - 0x3c))) {
            eax = current_time;
            if (*((ebp - 0x3c)) >= eax) {
                eax = current_time;
                if (*((ebp - 0x3c)) != eax) {
                    goto label_8;
                }
                eax = current_time_ns;
                if (*((ebp - 0x38)) > eax) {
                    goto label_8;
                }
            }
            *((ebp - 0x11b0)) = 1;
        } else {
label_8:
            *((ebp - 0x11b0)) = 0;
        }
        ecx = *((ebp - 0x11b0));
        *((ebp - 0x15)) = cl;
        eax = *((ebp - 0x15));
        eax = *((eax*4 + obj.long_time_format));
        *((ebp - 0x14)) = eax;
        eax = *((ebp - 0x38));
        *((esp + 0x14)) = eax;
        *((esp + 0x10)) = 0;
        eax = *((ebp - 0x34));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x3e9;
        eax = *((ebp - 0x40));
        *(esp) = eax;
        eax = nstrftime ();
        *((ebp - 0x44)) = eax;
    }
label_6:
    if (*((ebp - 0x44)) == 0) {
        eax = *((ebp - 0x40));
        eax = *(eax);
        if (al != 0) {
            goto label_9;
        }
    }
    eax = *((ebp - 0x44));
    *((ebp - 0x40)) += eax;
    eax = *((ebp - 0x40));
    *(eax) = 0x20;
    *((ebp - 0x40))++;
    eax = *((ebp - 0x40));
    *(eax) = 0;
    goto label_10;
label_9:
    eax = *((ebp + 8));
    eax = *((eax + 0x74));
    if (al != 0) {
        eax = *((ebp - 0x3c));
        edx = *((ebp - 0x3c));
        ecx = eax;
        ecx >>= 0x1f;
        eax = ebp - 0xefd;
        *((esp + 8)) = eax;
        eax = imaxtostr (edx, ecx);
        *((ebp - 0x11ac)) = eax;
    } else {
        *((ebp - 0x11ac)) = 0x805f99e;
    }
    eax = long_time_expected_width ();
    edx = *((ebp - 0x11ac));
    *((esp + 0xc)) = edx;
    eax = *((ebp - 0x40));
    sprintf (eax, "%*s ", eax);
    eax = *((ebp - 0x40));
    eax = strlen (eax);
    *((ebp - 0x40)) += eax;
label_10:
    eax = stdout;
    *((esp + 4)) = eax;
    eax = ebp - 0xe8b;
    *(esp) = eax;
    fputs_unlocked ();
    edx = *((ebp - 0x40));
    eax = ebp - 0xe8b;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    edx = ecx;
    eax = dired_pos;
    eax = edx + eax;
    *(obj.dired_pos) = eax;
    eax = *((ebp + 8));
    eax = *((eax + 0x68));
    *((ebp - 0x11a8)) = eax;
    eax = *((ebp + 8));
    eax = *((eax + 0x74));
    eax = (int32_t) al;
    *((ebp - 0x11a4)) = eax;
    eax = *((ebp + 8));
    eax = *((eax + 0x75));
    eax = (int32_t) al;
    *((ebp - 0x11a0)) = eax;
    eax = *(obj.color_symlink_as_referent);
    edx = (int32_t) al;
    eax = *((ebp + 8));
    eax = *((eax + 0x75));
    eax = (int32_t) al;
    eax &= edx;
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = *((eax + 0x6c));
        *((ebp - 0x119c)) = eax;
    } else {
        eax = *((ebp + 8));
        eax = *((eax + 0x18));
        *((ebp - 0x119c)) = eax;
    }
    eax = *((ebp + 8));
    eax = *(eax);
    *((esp + 0x14)) = 0x80645a0;
    edx = *((ebp - 0x11a8));
    *((esp + 0x10)) = edx;
    ecx = *((ebp - 0x11a4));
    *((esp + 0xc)) = ecx;
    edx = *((ebp - 0x11a0));
    *((esp + 8)) = edx;
    ecx = *((ebp - 0x119c));
    *((esp + 4)) = ecx;
    print_name_with_quoting (eax);
    eax = *((ebp + 8));
    eax = *((eax + 0x68));
    if (eax == 6) {
        eax = *((ebp + 8));
        eax = *((eax + 4));
        if (eax == 0) {
            goto label_11;
        }
        eax = stdout;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 4;
        *((esp + 4)) = 1;
        *(esp) = " -> ";
        fwrite_unlocked ();
        eax = dired_pos;
        eax += 4;
        *(obj.dired_pos) = eax;
        eax = *((ebp + 8));
        ebx = *((eax + 0x68));
        eax = *((ebp + 8));
        eax = *((eax + 0x74));
        esi = (int32_t) al;
        eax = *((ebp + 8));
        eax = *((eax + 0x75));
        eax = (int32_t) al;
        edx = eax - 1;
        eax = *((ebp + 8));
        ecx = *((eax + 0x6c));
        eax = *((ebp + 8));
        eax = *((eax + 4));
        *((esp + 0x14)) = 0;
        *((esp + 0x10)) = ebx;
        *((esp + 0xc)) = esi;
        *((esp + 8)) = edx;
        *((esp + 4)) = ecx;
        print_name_with_quoting (eax);
        eax = indicator_style;
        if (eax == 0) {
            goto label_11;
        }
        eax = *((ebp + 8));
        eax = *((eax + 0x6c));
        *((esp + 8)) = 0;
        *((esp + 4)) = eax;
        print_type_indicator (1);
    } else {
        eax = indicator_style;
        if (eax == 0) {
            goto label_11;
        }
        eax = *((ebp + 8));
        ecx = *((eax + 0x68));
        eax = *((ebp + 8));
        edx = *((eax + 0x18));
        eax = *((ebp + 8));
        eax = *((eax + 0x74));
        eax = (int32_t) al;
        *((esp + 8)) = ecx;
        *((esp + 4)) = edx;
        print_type_indicator (eax);
    }
label_11:
    esp = ebp - 0xc;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804ecf0 */
#include <stdint.h>
 
int32_t dbg_long_time_expected_width (void) {
    char[1001] buf;
    time_t epoch;
    tm const * tm;
    size_t len;
    uint32_t var_4h;
    int32_t var_sp_8h;
    tm* var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    /* int long_time_expected_width(); */
    eax = *(0x8064380);
    if (eax < 0) {
        *((ebp - 0xc)) = 0;
        eax = ebp - 0xc;
        eax = localtime (eax);
        *((ebp - 8)) = eax;
        if (*((ebp - 8)) != 0) {
            edx = long_time_format;
            *((esp + 0x14)) = 0;
            *((esp + 0x10)) = 0;
            eax = *((ebp - 8));
            *((esp + 0xc)) = eax;
            *((esp + 8)) = edx;
            *((esp + 4)) = 0x3e9;
            eax = ebp - 0x3f5;
            *(esp) = eax;
            eax = nstrftime ();
            *((ebp - 4)) = eax;
            if (*((ebp - 4)) == 0) {
                goto label_0;
            }
            *((esp + 8)) = 0;
            eax = *((ebp - 4));
            *((esp + 4)) = eax;
            eax = ebp - 0x3f5;
            *(esp) = eax;
            eax = mbsnwidth ();
            *(0x8064380) = eax;
        }
label_0:
        eax = *(0x8064380);
        if (eax >= 0) {
            goto label_1;
        }
        *(0x8064380) = 0;
    }
label_1:
    eax = *(0x8064380);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804ed9d */
#include <stdint.h>
 
uint32_t dbg_get_current_time (void) {
    timeval timeval;
    int32_t var_ch;
    timespec timespec;
    int32_t var_bp_4h;
    int32_t var_4h;
    /* void get_current_time(); */
    eax = ebp - 8;
    *((esp + 4)) = eax;
    *(esp) = 0;
    eax = clock_gettime ();
    if (eax == 0) {
        eax = *((ebp - 8));
        *(obj.current_time) = eax;
        eax = *((ebp - 4));
        *(obj.current_time_ns) = eax;
    } else {
        *((esp + 4)) = 0;
        eax = ebp - 0x10;
        *(esp) = eax;
        gettimeofday ();
        eax = *((ebp - 0x10));
        *(obj.current_time) = eax;
        eax = *((ebp - 0xc));
        eax *= 0x3e8;
        eax += 0x3e7;
        *(obj.current_time_ns) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804edfc */
#include <stdint.h>
 
int32_t dbg_format_user_or_group (void) {
    size_t len;
    int32_t width_gap;
    int32_t pad;
    char const * name;
    long unsigned int id;
    int32_t width;
    int32_t var_4h;
    int32_t var_8h;
    /* void format_user_or_group(char const * name,long unsigned int id,int width); */
    if (*((ebp + 8)) == 0) {
        goto label_0;
    }
    *((esp + 4)) = 0;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = gnu_mbswidth ();
    edx = eax;
    eax = *((ebp + 0x10));
    eax -= edx;
    *((ebp - 8)) = eax;
    eax = *((ebp - 8));
    eax >>= 0x1f;
    eax = ~eax;
    eax &= *((ebp - 8));
    *((ebp - 4)) = eax;
    eax = stdout;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    fputs_unlocked ();
    eax = *((ebp + 8));
    eax = strlen (eax);
    edx = eax;
    eax = *((ebp - 4));
    eax = edx + eax;
    *((ebp - 0xc)) = eax;
    do {
        *(esp) = 0x20;
        putchar_unlocked ();
        al = (*((ebp - 4)) != 0) ? 1 : 0;
        *((ebp - 4))--;
    } while (al != 0);
    goto label_1;
label_0:
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    printf (0x805f998);
    eax = *((ebp + 0x10));
    *((ebp - 0xc)) = eax;
label_1:
    eax = dired_pos;
    eax += *((ebp - 0xc));
    eax++;
    *(obj.dired_pos) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804eeac */
#include <stdint.h>
 
int32_t dbg_format_user (char * arg_10h) {
    int32_t var_ch;
    int32_t var_bp_8h;
    _Bool stat_ok;
    uid_t u;
    int32_t width;
    int32_t var_sp_4h;
    int32_t var_8h;
    /* void format_user(uid_t u,int width,_Bool stat_ok); */
    eax = *((ebp + 0x10));
    *((ebp - 4)) = al;
    if (*((ebp - 4)) != 0) {
        eax = *(obj.numeric_ids);
        if (al != 0) {
            *((ebp - 8)) = 0;
        } else {
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = getuser ();
            *((ebp - 8)) = eax;
        }
        eax = *((ebp - 8));
        *((ebp - 0xc)) = eax;
    } else {
        *((ebp - 0xc)) = 0x805f99e;
    }
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    eax = *((ebp - 0xc));
    *(esp) = eax;
    format_user_or_group ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804ef0a */
#include <stdint.h>
 
int32_t dbg_format_group (char * arg_10h) {
    int32_t var_ch;
    int32_t var_bp_8h;
    _Bool stat_ok;
    gid_t g;
    int32_t width;
    int32_t var_sp_4h;
    int32_t var_8h;
    /* void format_group(gid_t g,int width,_Bool stat_ok); */
    eax = *((ebp + 0x10));
    *((ebp - 4)) = al;
    if (*((ebp - 4)) != 0) {
        eax = *(obj.numeric_ids);
        if (al != 0) {
            *((ebp - 8)) = 0;
        } else {
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = getgroup ();
            *((ebp - 8)) = eax;
        }
        eax = *((ebp - 8));
        *((ebp - 0xc)) = eax;
    } else {
        *((ebp - 0xc)) = 0x805f99e;
    }
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    eax = *((ebp - 0xc));
    *(esp) = eax;
    format_user_or_group ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804ef68 */
#include <stdint.h>
 
int32_t dbg_format_user_or_group_width (void) {
    size_t var_14h;
    char[11] buf;
    int32_t len;
    char const * name;
    long unsigned int id;
    char * format;
    int32_t var_8h;
    /* int format_user_or_group_width(char const * name,long unsigned int id); */
    if (*((ebp + 8)) != 0) {
        *((esp + 4)) = 0;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = gnu_mbswidth ();
        *((ebp - 4)) = eax;
        eax = *((ebp - 4));
        eax >>= 0x1f;
        eax = ~eax;
        edx = *((ebp - 4));
        edx &= eax;
        *((ebp - 0x14)) = edx;
    } else {
        eax = *((ebp + 0xc));
        eax = ebp - 0xf;
        sprintf (eax, 0x805f9a0, eax);
        eax = ebp - 0xf;
        eax = strlen (eax);
        *((ebp - 0x14)) = eax;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804fe01 */
#include <stdint.h>
 
int32_t dbg_print_name_with_quoting (size_t arg_14h) {
    _Bool stat_ok;
    uint32_t var_10h;
    int32_t var_bp_ch;
    obstack * __o;
    int32_t __len;
    char const * p;
    mode_t mode;
    int32_t linkok;
    filetype type;
    obstack * stack;
    void * s2;
    size_t n;
    int32_t var_ch;
    int32_t var_sp_10h;
    /* void print_name_with_quoting(char const * p,mode_t mode,int linkok,_Bool stat_ok,filetype type,obstack * stack); */
    eax = *((ebp + 0x14));
    *((ebp - 0x14)) = al;
    eax = *(obj.print_with_color);
    if (al != 0) {
        edx = *((ebp - 0x14));
        eax = *((ebp + 0x18));
        *((esp + 0x10)) = eax;
        *((esp + 0xc)) = edx;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        print_color_indicator (eax);
    }
    if (*((ebp + 0x1c)) != 0) {
        eax = *(obj.dired);
        if (al == 0) {
            goto label_0;
        }
        eax = *((ebp + 0x1c));
        *((ebp - 0x10)) = eax;
        *((ebp - 0xc)) = 4;
        eax = *((ebp - 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        edx += eax;
        eax = *((ebp - 0x10));
        eax = *((eax + 0x10));
        if (edx > eax) {
            eax = *((ebp - 0xc));
            *((esp + 4)) = eax;
            eax = *((ebp - 0x10));
            *(esp) = eax;
            obstack_newchunk ();
        }
        edx = *((ebp - 0xc));
        eax = *((ebp - 0x10));
        eax = *((eax + 0xc));
        memcpy (eax, 0x8064594, edx);
        eax = *((ebp - 0x10));
        edx = *((eax + 0xc));
        eax = *((ebp - 0xc));
        edx += eax;
        eax = *((ebp - 0x10));
        *((eax + 0xc)) = edx;
    }
label_0:
    eax = filename_quoting_options;
    edx = stdout;
    *((esp + 0xc)) = 0;
    eax = *((ebp + 8));
    eax = quote_name (edx, eax, eax);
    edx = eax;
    eax = dired_pos;
    eax = edx + eax;
    *(obj.dired_pos) = eax;
    if (*((ebp + 0x1c)) != 0) {
        eax = *(obj.dired);
        if (al == 0) {
            goto label_1;
        }
        eax = *((ebp + 0x1c));
        *((ebp - 8)) = eax;
        *((ebp - 4)) = 4;
        eax = *((ebp - 8));
        edx = *((eax + 0xc));
        eax = *((ebp - 4));
        edx += eax;
        eax = *((ebp - 8));
        eax = *((eax + 0x10));
        if (edx > eax) {
            eax = *((ebp - 4));
            *((esp + 4)) = eax;
            eax = *((ebp - 8));
            *(esp) = eax;
            obstack_newchunk ();
        }
        edx = *((ebp - 4));
        eax = *((ebp - 8));
        eax = *((eax + 0xc));
        memcpy (eax, 0x8064594, edx);
        eax = *((ebp - 8));
        edx = *((eax + 0xc));
        eax = *((ebp - 4));
        edx += eax;
        eax = *((ebp - 8));
        *((eax + 0xc)) = edx;
    }
label_1:
    eax = *(obj.print_with_color);
    if (al != 0) {
        process_signals ();
        prep_non_filename_text ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8050368 */
#include <stdint.h>
 
int32_t dbg_print_type_indicator (int32_t arg_8h) {
    _Bool stat_ok;
    char c;
    mode_t mode;
    filetype type;
    int32_t var_4h;
    int32_t var_8h;
    /* void print_type_indicator(_Bool stat_ok,mode_t mode,filetype type); */
    eax = *((ebp + 8));
    *((ebp - 0x14)) = al;
    edx = *((ebp - 0x14));
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    al = get_type_indicator (edx);
    *((ebp - 1)) = al;
    if (*((ebp - 1)) != 0) {
        eax = *((ebp - 1));
        *(esp) = eax;
        putchar_unlocked ();
        eax = dired_pos;
        eax++;
        *(obj.dired_pos) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8050215 */
#include <stdint.h>
 
int32_t dbg_get_type_indicator (int32_t arg_8h) {
    uint32_t var_1eh;
    uint32_t var_1dh;
    int32_t var_1ch;
    uint32_t var_17h;
    uint32_t var_16h;
    uint32_t var_15h;
    _Bool stat_ok;
    char c;
    mode_t mode;
    filetype type;
    /* char get_type_indicator(_Bool stat_ok,mode_t mode,filetype type); */
    eax = *((ebp + 8));
    *((ebp - 0x14)) = al;
    if (*((ebp - 0x14)) != 0) {
        eax = *((ebp + 0xc));
        eax &= 0xf000;
        ebp - 0x1e = (eax == 0x8000) ? 1 : 0;
    } else {
        ebp - 0x1e = (*((ebp + 0x10)) == 5) ? 1 : 0;
    }
    if (*((ebp - 0x1e)) != 0) {
        eax = *((ebp - 0x14));
        eax ^= 1;
        if (al == 0) {
            eax = indicator_style;
            if (eax == 3) {
                eax = *((ebp + 0xc));
                eax &= 0x49;
                if (eax == 0) {
                    goto label_0;
                }
                *((ebp - 1)) = 0x2a;
            }
label_0:
            *((ebp - 1)) = 0;
        } else {
        } else {
        }
    }
    if (*((ebp - 0x14)) != 0) {
        eax = *((ebp + 0xc));
        eax &= 0xf000;
        ebp - 0x1d = (eax == 0x4000) ? 1 : 0;
    } else {
        if (*((ebp + 0x10)) != 3) {
            if (*((ebp + 0x10)) != 9) {
                goto label_1;
            }
        }
        *((ebp - 0x1c)) = 1;
        goto label_2;
label_1:
        *((ebp - 0x1c)) = 0;
label_2:
        eax = *((ebp - 0x1c));
        *((ebp - 0x1d)) = al;
    }
    if (*((ebp - 0x1d)) != 0) {
        *((ebp - 1)) = 0x2f;
    } else {
        eax = indicator_style;
        if (eax == 1) {
            *((ebp - 1)) = 0;
        } else {
            if (*((ebp - 0x14)) != 0) {
                eax = *((ebp + 0xc));
                eax &= 0xf000;
                ebp - 0x17 = (eax == 0xa000) ? 1 : 0;
            } else {
                ebp - 0x17 = (*((ebp + 0x10)) == 6) ? 1 : 0;
            }
            if (*((ebp - 0x17)) != 0) {
                *((ebp - 1)) = 0x40;
            } else {
                if (*((ebp - 0x14)) != 0) {
                    eax = *((ebp + 0xc));
                    eax &= 0xf000;
                    ebp - 0x16 = (eax == 0x1000) ? 1 : 0;
                } else {
                    ebp - 0x16 = (*((ebp + 0x10)) == 1) ? 1 : 0;
                }
                if (*((ebp - 0x16)) != 0) {
                    *((ebp - 1)) = 0x7c;
                } else {
                    if (*((ebp - 0x14)) != 0) {
                        eax = *((ebp + 0xc));
                        eax &= 0xf000;
                        ebp - 0x15 = (eax == 0xc000) ? 1 : 0;
                    } else {
                        ebp - 0x15 = (*((ebp + 0x10)) == 7) ? 1 : 0;
                    }
                    if (*((ebp - 0x15)) != 0) {
                        *((ebp - 1)) = 0x3d;
                    } else {
                        *((ebp - 1)) = 0;
                    }
                }
            }
        }
    }
    eax = *((ebp - 1));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049abc */
#include <stdint.h>
 
void putchar_unlocked (void) {
    putchar_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804fdef */
#include <stdint.h>
 
int32_t dbg_to_uchar (int32_t arg_8h) {
    char ch;
    /* unsigned char to_uchar(char ch); */
    eax = *((ebp + 8));
    *((ebp - 4)) = al;
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80503b2 */
#include <stdint.h>
 
int32_t dbg_print_color_indicator (int32_t arg_14h) {
    int32_t var_1ch;
    int32_t var_18h;
    _Bool stat_ok;
    int32_t type;
    color_ext_type * ext;
    size_t len;
    char const * name;
    mode_t mode;
    int32_t linkok;
    filetype filetype;
    char * s2;
    size_t n;
    /* void print_color_indicator(char const * name,mode_t mode,int linkok,_Bool stat_ok,filetype filetype); */
    eax = *((ebp + 0x14));
    *((ebp - 0x14)) = al;
    if (*((ebp + 0x10)) == -1) {
        eax = .comment;
        if (eax != 0) {
            *((ebp - 0xc)) = 0xb;
        }
    } else {
        eax = *((ebp - 0x14));
        eax ^= 1;
        if (al != 0) {
            eax = *((ebp + 0x18));
            eax = *((eax*4 + 0x80643a0));
            *((ebp - 0xc)) = eax;
        } else {
            eax = *((ebp + 0xc));
            eax &= 0xf000;
            if (eax == 0x8000) {
                *((ebp - 0xc)) = 4;
                eax = *((ebp + 0xc));
                eax &= 0x800;
                if (eax != 0) {
                    *((ebp - 0xc)) = 0xf;
                } else {
                    eax = *((ebp + 0xc));
                }
                eax &= 0x400;
                if (eax != 0) {
                    *((ebp - 0xc)) = 0x10;
                } else {
                    eax = *((ebp + 0xc));
                }
                eax &= 0x49;
                if (eax == 0) {
                    goto label_0;
                }
                *((ebp - 0xc)) = 0xd;
            } else {
                eax = *((ebp + 0xc));
                eax &= 0xf000;
                if (eax == 0x4000) {
                    eax = *((ebp + 0xc));
                    eax &= 0x200;
                    if (eax != 0) {
                        eax = *((ebp + 0xc));
                        eax &= 2;
                        if (eax != 0) {
                            *((ebp - 0xc)) = 0x13;
                        }
                        eax = *((ebp + 0xc));
                        eax &= 2;
                    } else {
                    } else {
                    }
                }
            }
        }
    }
    if (eax != 0) {
        *((ebp - 0xc)) = 0x12;
    } else {
        eax = *((ebp + 0xc));
        eax &= 0x200;
        if (eax != 0) {
            *((ebp - 0xc)) = 0x11;
        } else {
            *((ebp - 0xc)) = 5;
            eax = *((ebp + 0xc));
            eax &= 0xf000;
            if (eax == 0xa000) {
                if (*((ebp + 0x10)) == 0) {
                    eax = .comment;
                    if (eax != 0) {
                        *((ebp - 0x1c)) = 0xc;
                    }
                } else {
                    *((ebp - 0x1c)) = 6;
                }
                eax = *((ebp - 0x1c));
                *((ebp - 0xc)) = eax;
            } else {
                eax = *((ebp + 0xc));
                eax &= 0xf000;
                if (eax == 0x1000) {
                    *((ebp - 0xc)) = 7;
                } else {
                    eax = *((ebp + 0xc));
                    eax &= 0xf000;
                    if (eax == 0xc000) {
                        *((ebp - 0xc)) = 8;
                    } else {
                        eax = *((ebp + 0xc));
                        eax &= 0xf000;
                        if (eax == 0x6000) {
                            *((ebp - 0xc)) = 9;
                        } else {
                            eax = *((ebp + 0xc));
                            eax &= 0xf000;
                            if (eax == 0x2000) {
                                *((ebp - 0xc)) = 0xa;
                            } else {
                                *((ebp - 0xc)) = 0xc;
                            }
                        }
                    }
                }
            }
        }
    }
label_0:
    *((ebp - 8)) = 0;
    if (*((ebp - 0xc)) != 4) {
        goto label_1;
    }
    eax = *((ebp + 8));
    eax = strlen (eax);
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    *((ebp + 8)) += eax;
    eax = color_ext_list;
    *((ebp - 8)) = eax;
    while (*((ebp - 8)) != 0) {
        eax = *((ebp - 8));
        eax = *(eax);
        if (eax <= *((ebp - 4))) {
            eax = *((ebp - 8));
            edx = *(eax);
            eax = *((ebp - 8));
            ecx = *((eax + 4));
            eax = *((ebp - 8));
            eax = *(eax);
            eax = -eax;
            eax += *((ebp + 8));
            eax = strncmp (eax, ecx, edx);
            if (eax == 0) {
                goto label_1;
            }
        }
        eax = *((ebp - 8));
        eax = *((eax + 0x10));
        *((ebp - 8)) = eax;
    }
label_1:
    *(esp) = obj.color_indicator;
    put_indicator ();
    if (*((ebp - 8)) != 0) {
        eax = *((ebp - 8));
        eax += 8;
        *((ebp - 0x18)) = eax;
    } else {
        eax = *((ebp - 0xc));
        eax <<= 3;
        eax += obj.color_indicator;
        *((ebp - 0x18)) = eax;
    }
    eax = *((ebp - 0x18));
    *(esp) = eax;
    put_indicator ();
    *(esp) = 0x80641e8;
    put_indicator ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8050649 */
#include <stdint.h>
 
uint32_t dbg_length_of_file_name_and_frills (void) {
    int32_t var_2bch;
    int32_t var_2b8h;
    int32_t var_2b4h;
    int32_t var_2b0h;
    char[652] buf;
    size_t name_width;
    size_t len;
    char c;
    fileinfo const * f;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_sp_14h;
    int32_t var_sp_18h;
    int32_t var_1ch;
    /* size_t length_of_file_name_and_frills(fileinfo const * f); */
    *((ebp - 0x14)) = 0;
    eax = *(obj.print_inode);
    if (al != 0) {
        eax = format;
        if (eax == 4) {
            eax = *((ebp + 8));
            edx = *((eax + 0x60));
            ecx = *((eax + 0x64));
            eax = ebp - 0x2a4;
            *((esp + 8)) = eax;
            eax = umaxtostr (edx, ecx);
            eax = strlen (eax);
            eax++;
            *((ebp - 0x2bc)) = eax;
        } else {
            eax = inode_number_width;
            eax++;
            *((ebp - 0x2bc)) = eax;
        }
        eax = *((ebp - 0x2bc));
        *((ebp - 0x14)) += eax;
    }
    eax = *(obj.print_block_size);
    if (al != 0) {
        eax = format;
        if (eax == 4) {
            ecx = output_block_size;
            ebx = .comment;
            eax = human_output_opts;
            *((ebp - 0x2b4)) = eax;
            eax = *((ebp + 8));
            edx = *((eax + 0x44));
            eax = *((eax + 0x40));
            esi = *((eax + 0x40));
            edi = edx;
            *((esp + 0x18)) = ecx;
            *((esp + 0x1c)) = ebx;
            eax = *((ebp - 0x2b4));
            eax = ebp - 0x2a4;
            eax = human_readable (0x200, edi, eax);
            eax = strlen (eax);
            eax++;
            *((ebp - 0x2b8)) = eax;
        } else {
            eax = block_size_width;
            eax++;
            *((ebp - 0x2b8)) = eax;
        }
        eax = *((ebp - 0x2b8));
        *((ebp - 0x14)) += eax;
    }
    eax = *(obj.print_scontext);
    if (al != 0) {
        eax = format;
        if (eax == 4) {
            eax = *((ebp + 8));
            eax = *((eax + 0x70));
            eax = strlen (eax);
            eax++;
            *((ebp - 0x2b0)) = eax;
        } else {
            eax = scontext_width;
            eax++;
            *((ebp - 0x2b0)) = eax;
        }
        eax = *((ebp - 0x2b0));
        *((ebp - 0x14)) += eax;
    }
    edx = filename_quoting_options;
    eax = *((ebp + 8));
    ecx = *(eax);
    eax = ebp - 0x18;
    *((esp + 0xc)) = eax;
    quote_name (0, ecx, edx);
    eax = *((ebp - 0x18));
    *((ebp - 0x14)) += eax;
    eax = indicator_style;
    if (eax != 0) {
        eax = *((ebp + 8));
        ecx = *((eax + 0x68));
        eax = *((ebp + 8));
        edx = *((eax + 0x18));
        eax = *((ebp + 8));
        eax = *((eax + 0x74));
        eax = (int32_t) al;
        *((esp + 8)) = ecx;
        *((esp + 4)) = edx;
        al = get_type_indicator (eax);
        *((ebp - 0xd)) = al;
        al = (*((ebp - 0xd)) != 0) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x14)) += eax;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8050e06 */
#include <stdint.h>
 
int32_t dbg_calculate_columns (int32_t arg_8h) {
    int32_t var_50h;
    int32_t var_4ch;
    uint32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    _Bool by_columns;
    size_t filesno;
    size_t cols;
    size_t max_cols;
    fileinfo const * f;
    size_t name_length;
    size_t i;
    size_t idx;
    size_t real_length;
    /* size_t calculate_columns(_Bool by_columns); */
    eax = *((ebp + 8));
    *((ebp - 0x2c)) = al;
    eax = cwd_n_used;
    edx = max_idx;
    *((ebp - 0x38)) = edx;
    *((ebp - 0x3c)) = eax;
    ecx = *((ebp - 0x38));
    if (*((ebp - 0x3c)) > ecx) {
        eax = *((ebp - 0x38));
        *((ebp - 0x3c)) = eax;
    }
    edx = *((ebp - 0x3c));
    *((ebp - 0x20)) = edx;
    init_column_info ();
    *((ebp - 0x28)) = 0;
    goto label_1;
label_0:
    edx = sorted_file;
    eax = *((ebp - 0x28));
    eax <<= 2;
    eax = edx + eax;
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x1c));
    *(esp) = eax;
    eax = length_of_file_name_and_frills ();
    *((ebp - 0x18)) = eax;
    *((ebp - 0x14)) = 0;
    while (eax < *((ebp - 0x20))) {
        ecx = column_info;
        edx = *((ebp - 0x14));
        eax = *((ebp - 0x14));
        eax += eax;
        eax += edx;
        eax <<= 2;
        eax = ecx + eax;
        eax = *(eax);
        if (al != 0) {
            if (*((ebp - 0x2c)) != 0) {
                eax = cwd_n_used;
                ecx = *((ebp - 0x14));
                ecx += eax;
                *((ebp - 0x4c)) = ecx;
                eax = *((ebp - 0x14));
                eax++;
                *((ebp - 0x50)) = eax;
                eax = *((ebp - 0x4c));
                edx = 0;
                eax = *(edx:eax) / ebp - 0x50;
                edx = *(edx:eax) % ebp - 0x50;
                *((ebp - 0x50)) = eax;
                ecx = *((ebp - 0x50));
                *((ebp - 0x4c)) = ecx;
                eax = *((ebp - 0x28));
                edx = 0;
                eax = *(edx:eax) / ebp - 0x4c;
                edx = *(edx:eax) % ebp - 0x4c;
                *((ebp - 0x34)) = eax;
            } else {
                eax = *((ebp - 0x14));
                edx = eax + 1;
                ecx = *((ebp - 0x28));
                *((ebp - 0x50)) = ecx;
                eax = *((ebp - 0x50));
                ecx = edx;
                edx = 0;
                eax = edx:eax / ecx;
                edx = edx:eax % ecx;
                *((ebp - 0x34)) = edx;
            }
            eax = *((ebp - 0x34));
            *((ebp - 0x10)) = eax;
            eax = *((ebp - 0x10));
            if (eax == *((ebp - 0x14))) {
                *((ebp - 0x30)) = 0;
            } else {
                *((ebp - 0x30)) = 2;
            }
            eax = *((ebp - 0x30));
            eax += *((ebp - 0x18));
            *((ebp - 0xc)) = eax;
            ecx = column_info;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x14));
            eax += eax;
            eax += edx;
            eax <<= 2;
            eax = ecx + eax;
            edx = *((eax + 8));
            eax = *((ebp - 0x10));
            eax <<= 2;
            eax = edx + eax;
            if (eax >= *((ebp - 0xc))) {
                goto label_2;
            }
            ecx = column_info;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x14));
            eax += eax;
            eax += edx;
            eax <<= 2;
            ebx = ecx + eax;
            ecx = column_info;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x14));
            eax += eax;
            eax += edx;
            eax <<= 2;
            eax = ecx + eax;
            esi = *((eax + 4));
            ecx = column_info;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x14));
            eax += eax;
            eax += edx;
            eax <<= 2;
            eax = ecx + eax;
            edx = *((eax + 8));
            eax = *((ebp - 0x10));
            eax <<= 2;
            eax = edx + eax;
            edx = *(eax);
            eax = *((ebp - 0xc));
            eax -= edx;
            eax = esi + eax;
            *((ebx + 4)) = eax;
            ecx = column_info;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x14));
            eax += eax;
            eax += edx;
            eax <<= 2;
            eax = ecx + eax;
            edx = *((eax + 8));
            eax = *((ebp - 0x10));
            eax <<= 2;
            edx += eax;
            eax = *((ebp - 0xc));
            *(edx) = eax;
            ecx = column_info;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x14));
            eax += eax;
            eax += edx;
            eax <<= 2;
            ebx = ecx + eax;
            ecx = column_info;
            edx = *((ebp - 0x14));
            eax = *((ebp - 0x14));
            eax += eax;
            eax += edx;
            eax <<= 2;
            eax = ecx + eax;
            edx = *((eax + 4));
            eax = line_length;
            al = (edx < eax) ? 1 : 0;
            *(ebx) = al;
        }
label_2:
        *((ebp - 0x14))++;
        eax = *((ebp - 0x14));
    }
    *((ebp - 0x28))++;
label_1:
    eax = cwd_n_used;
    if (*((ebp - 0x28)) < eax) {
        goto label_0;
    }
    eax = *((ebp - 0x20));
    *((ebp - 0x24)) = eax;
    while (*((ebp - 0x24)) > 1) {
        ecx = column_info;
        edx = *((ebp - 0x24));
        eax = *((ebp - 0x24));
        eax += eax;
        eax += edx;
        eax <<= 2;
        eax -= 0xc;
        eax = ecx + eax;
        eax = *(eax);
        if (al != 0) {
            goto label_3;
        }
        *((ebp - 0x24))--;
    }
label_3:
    eax = *((ebp - 0x24));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8050b05 */
#include <stdint.h>
 
int32_t dbg_indent (void) {
    int32_t var_18h;
    int32_t var_14h;
    size_t from;
    size_t to;
    /* void indent(size_t from,size_t to); */
    while (eax < *((ebp + 0xc))) {
        eax = tabsize;
        if (eax != 0) {
            eax = tabsize;
            *((ebp - 0x18)) = eax;
            eax = *((ebp + 0xc));
            edx = 0;
            eax = *(edx:eax) / ebp - 0x18;
            edx = *(edx:eax) % ebp - 0x18;
            ecx = eax;
            eax = *((ebp + 8));
            eax++;
            *((ebp - 0x18)) = eax;
            ebx = tabsize;
            *((ebp - 0x14)) = ebx;
            eax = *((ebp - 0x18));
            edx = 0;
            eax = *(edx:eax) / ebp - 0x14;
            edx = *(edx:eax) % ebp - 0x14;
            *((ebp - 0x14)) = eax;
            eax = *((ebp - 0x14));
            if (ecx > eax) {
                *(esp) = 9;
                putchar_unlocked ();
                ecx = tabsize;
                edx = tabsize;
                ebx = *((ebp + 8));
                *((ebp - 0x14)) = ebx;
                eax = *((ebp - 0x14));
                ebx = edx;
                edx = 0;
                eax = edx:eax / ebx;
                edx = edx:eax % ebx;
                eax = edx;
                edx = ecx;
                edx -= eax;
                eax = edx;
                *((ebp + 8)) += eax;
            }
        } else {
            *(esp) = 0x20;
            putchar_unlocked ();
            *((ebp + 8))++;
        }
        eax = *((ebp + 8));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8050c37 */
#include <stdint.h>
 
int32_t dbg_init_column_info (void) {
    uint32_t var_28h;
    int32_t var_24h;
    size_t i;
    size_t max_cols;
    size_t new_column_info_alloc;
    size_t * p;
    size_t column_info_growth;
    size_t s;
    size_t t;
    size_t j;
    uint32_t var_sp_4h;
    int32_t var_8h;
    /* void init_column_info(); */
    eax = cwd_n_used;
    edx = max_idx;
    *((ebp - 0x24)) = edx;
    *((ebp - 0x28)) = eax;
    eax = *((ebp - 0x24));
    if (*((ebp - 0x28)) > eax) {
        edx = *((ebp - 0x24));
        *((ebp - 0x28)) = edx;
    }
    eax = *((ebp - 0x28));
    *((ebp - 0x1c)) = eax;
    eax = .comment;
    if (eax >= *((ebp - 0x1c))) {
        goto label_1;
    }
    eax = max_idx;
    eax >>= 1;
    if (eax > *((ebp - 0x1c))) {
        edx = column_info;
        *((esp + 8)) = 0x18;
        eax = *((ebp - 0x1c));
        *((esp + 4)) = eax;
        *(esp) = edx;
        eax = xnrealloc ();
        *(obj.column_info) = eax;
        eax = *((ebp - 0x1c));
        eax += eax;
        *((ebp - 0x18)) = eax;
    } else {
        eax = max_idx;
        edx = column_info;
        *((esp + 8)) = 0xc;
        *((esp + 4)) = eax;
        *(esp) = edx;
        eax = xnrealloc ();
        *(obj.column_info) = eax;
        eax = max_idx;
        *((ebp - 0x18)) = eax;
    }
    edx = .comment;
    eax = *((ebp - 0x18));
    eax -= edx;
    *((ebp - 0x10)) = eax;
    eax = .comment;
    eax += *((ebp - 0x18));
    eax++;
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    eax *= *((ebp - 0x10));
    *((ebp - 8)) = eax;
    eax = *((ebp - 0xc));
    if (eax >= *((ebp - 0x18))) {
        eax = *((ebp - 8));
        edx = 0;
        eax = *(edx:eax) / ebp - 0x10;
        edx = *(edx:eax) % ebp - 0x10;
        if (eax == *((ebp - 0xc))) {
            goto label_2;
        }
    }
    xalloc_die ();
label_2:
    eax = *((ebp - 8));
    eax >>= 1;
    *((esp + 4)) = 4;
    *(esp) = eax;
    eax = xnmalloc ();
    *((ebp - 0x14)) = eax;
    eax = .comment;
    *((ebp - 0x20)) = eax;
    while (eax < *((ebp - 0x18))) {
        ecx = column_info;
        edx = *((ebp - 0x20));
        eax = *((ebp - 0x20));
        eax += eax;
        eax += edx;
        eax <<= 2;
        edx = ecx + eax;
        eax = *((ebp - 0x14));
        *((edx + 8)) = eax;
        eax = *((ebp - 0x20));
        eax++;
        eax <<= 2;
        *((ebp - 0x14)) += eax;
        *((ebp - 0x20))++;
        eax = *((ebp - 0x20));
    }
    eax = *((ebp - 0x18));
    *(0x8064444) = eax;
label_1:
    *((ebp - 0x20)) = 0;
    goto label_3;
label_0:
    ecx = column_info;
    edx = *((ebp - 0x20));
    eax = *((ebp - 0x20));
    eax += eax;
    eax += edx;
    eax <<= 2;
    eax = ecx + eax;
    *(eax) = 1;
    ecx = column_info;
    edx = *((ebp - 0x20));
    eax = *((ebp - 0x20));
    eax += eax;
    eax += edx;
    eax <<= 2;
    ecx += eax;
    eax = *((ebp - 0x20));
    edx = eax + 1;
    eax = edx;
    eax += eax;
    eax += edx;
    *((ecx + 4)) = eax;
    *((ebp - 4)) = 0;
    while (eax <= *((ebp - 0x20))) {
        ecx = column_info;
        edx = *((ebp - 0x20));
        eax = *((ebp - 0x20));
        eax += eax;
        eax += edx;
        eax <<= 2;
        eax = ecx + eax;
        edx = *((eax + 8));
        eax = *((ebp - 4));
        eax <<= 2;
        eax = edx + eax;
        *(eax) = 3;
        *((ebp - 4))++;
        eax = *((ebp - 4));
    }
    *((ebp - 0x20))++;
label_3:
    eax = *((ebp - 0x20));
    if (eax < *((ebp - 0x1c))) {
        goto label_0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80513b2 */
#include <stdint.h>
 
uint32_t dbg_emit_bug_reporting_address (void) {
    char * var_4h;
    /* void emit_bug_reporting_address(); */
    *(esp) = "\nReport bugs to <%s>.\n";
    eax = gettext ();
    *((esp + 4)) = "bug-coreutils@gnu.org";
    printf (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80498ac */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051a20 */
#include <stdint.h>
 
void dbg_argmatch_die (void) {
    /* void __argmatch_die(); */
    *(esp) = 1;
    return usage ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051f60 */
#include <stdint.h>
 
int32_t dbg_ftypelet (void) {
    int32_t var_1h;
    mode_t bits;
    /* char ftypelet(mode_t bits); */
    eax = *((ebp + 8));
    eax &= 0xf000;
    if (eax == 0x8000) {
        *((ebp - 1)) = 0x2d;
    } else {
        eax = *((ebp + 8));
        eax &= 0xf000;
        if (eax == 0x4000) {
            *((ebp - 1)) = 0x64;
        } else {
            eax = *((ebp + 8));
            eax &= 0xf000;
            if (eax == 0x6000) {
                *((ebp - 1)) = 0x62;
            } else {
                eax = *((ebp + 8));
                eax &= 0xf000;
                if (eax == 0x2000) {
                    *((ebp - 1)) = 0x63;
                } else {
                    eax = *((ebp + 8));
                    eax &= 0xf000;
                    if (eax == 0xa000) {
                        *((ebp - 1)) = 0x6c;
                    } else {
                        eax = *((ebp + 8));
                        eax &= 0xf000;
                        if (eax == 0x1000) {
                            *((ebp - 1)) = 0x70;
                        } else {
                            eax = *((ebp + 8));
                            eax &= 0xf000;
                            if (eax == 0xc000) {
                                *((ebp - 1)) = 0x73;
                            } else {
                                *((ebp - 1)) = 0x3f;
                            }
                        }
                    }
                }
            }
        }
    }
    eax = *((ebp - 1));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805223c */
#include <stdint.h>
 
int32_t dbg_longest_relative_suffix (void) {
    char const * f;
    /* char const * longest_relative_suffix(char const * f); */
    while (al == 0x2f) {
        *((ebp + 8))++;
        eax = *((ebp + 8));
        eax = *(eax);
    }
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80528aa */
#include <stdint.h>
 
int32_t dbg_is_prime (void) {
    uint32_t var_1ch;
    size_t square;
    size_t divisor;
    size_t candidate;
    /* _Bool is_prime(size_t candidate); */
    *((ebp - 4)) = 3;
    eax = *((ebp - 4));
    eax *= *((ebp - 4));
    *((ebp - 8)) = eax;
    while (eax != 0) {
        *((ebp - 4))++;
        eax = *((ebp - 4));
        eax <<= 2;
        *((ebp - 8)) += eax;
        *((ebp - 4))++;
        eax = *((ebp - 8));
        if (eax >= *((ebp + 8))) {
            goto label_0;
        }
        eax = *((ebp + 8));
        *((ebp - 0x1c)) = eax;
        eax = *((ebp - 0x1c));
        edx = 0;
        eax = *(edx:eax) / ebp - 4;
        edx = *(edx:eax) % ebp - 4;
        eax = edx;
    }
label_0:
    eax = *((ebp + 8));
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x1c));
    edx = 0;
    eax = *(edx:eax) / ebp - 4;
    edx = *(edx:eax) % ebp - 4;
    eax = edx;
    al = (eax != 0) ? 1 : 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805290d */
#include <stdint.h>
 
int32_t dbg_next_prime (void) {
    size_t candidate;
    /* size_t next_prime(size_t candidate); */
    if (*((ebp + 8)) <= 9) {
        *((ebp + 8)) = 0xa;
    }
    *((ebp + 8)) |= 1;
    while (al != 0) {
        *((ebp + 8)) += 2;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = is_prime ();
        eax ^= 1;
    }
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052978 */
#include <stdint.h>
 
int32_t dbg_check_tuning (void) {
    int32_t var_11h;
    float epsilon;
    Hash_tuning const * tuning;
    Hash_table * table;
    /* _Bool check_tuning(Hash_table * table); */
    eax = *((ebp + 8));
    eax = *((eax + 0x14));
    *((ebp - 4)) = eax;
    eax = 0x3dcccccd;
    *((ebp - 8)) = eax;
    eax = *((ebp - 4));
    *(fp_stack--) = *((eax + 8));
    *(fp_stack--) = *((ebp - 8));
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    if (? > ?) {
        eax = *((ebp - 4));
        *(fp_stack--) = *((eax + 8));
        *(fp_stack--) = 1.0;
        fp_stack[0] -= *((ebp - 8));
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (? > ?) {
            *(fp_stack--) = *((ebp - 8));
            *(fp_stack--) = 1.0;
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            eax = *((ebp - 4));
            *(fp_stack--) = *((eax + 0xc));
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (? <= ?) {
                goto label_0;
            }
            eax = *((ebp - 4));
            *(fp_stack--) = *(eax);
            *(fp_stack--) = 0.0;
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (? < ?) {
                goto label_0;
            }
            eax = *((ebp - 4));
            *(fp_stack--) = *(eax);
            fp_stack[0] += *((ebp - 8));
            eax = *((ebp - 4));
            *(fp_stack--) = *((eax + 4));
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (? <= ?) {
                goto label_0;
            }
            eax = *((ebp - 4));
            *(fp_stack--) = *((eax + 4));
            *(fp_stack--) = 1.0;
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (? < ?) {
                goto label_0;
            }
            eax = *((ebp - 4));
            *(fp_stack--) = *(eax);
            fp_stack[0] += *((ebp - 8));
            eax = *((ebp - 4));
            *(fp_stack--) = *((eax + 8));
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (? <= ?) {
                goto label_0;
            }
            *((ebp - 0x11)) = 1;
        }
    } else {
label_0:
        eax = *((ebp + 8));
        *((eax + 0x14)) = 0x8061860;
        *((ebp - 0x11)) = 0;
    }
    eax = *((ebp - 0x11));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052d72 */
#include <stdint.h>
 
int32_t dbg_allocate_entry (void) {
    hash_entry * new;
    Hash_table * table;
    /* hash_entry * allocate_entry(Hash_table * table); */
    eax = *((ebp + 8));
    eax = *((eax + 0x24));
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = *((eax + 0x24));
        *((ebp - 4)) = eax;
        eax = *((ebp - 4));
        edx = *((eax + 4));
        eax = *((ebp + 8));
        *((eax + 0x24)) = edx;
    } else {
        eax = malloc (8);
        *((ebp - 4)) = eax;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052dad */
#include <stdint.h>
 
int32_t dbg_free_entry (void) {
    Hash_table * table;
    hash_entry * entry;
    /* void free_entry(Hash_table * table,hash_entry * entry); */
    eax = *((ebp + 0xc));
    *(eax) = 0;
    eax = *((ebp + 8));
    edx = *((eax + 0x24));
    eax = *((ebp + 0xc));
    *((eax + 4)) = edx;
    edx = *((ebp + 8));
    eax = *((ebp + 0xc));
    *((edx + 0x24)) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052dd0 */
#include <stdint.h>
 
int32_t dbg_hash_find_entry (int32_t arg_14h) {
    int32_t var_2ch;
    _Bool delete;
    hash_entry * next;
    void * data;
    int32_t var_14h;
    int32_t var_10h;
    hash_entry * cursor;
    hash_entry * bucket;
    Hash_table * table;
     const * entry;
    hash_entry ** bucket_head;
    int32_t var_4h;
    /* void * hash_find_entry(Hash_table * table, const * entry,hash_entry ** bucket_head,_Bool delete); */
    eax = *((ebp + 0x14));
    *((ebp - 0x28)) = al;
    eax = *((ebp + 8));
    ebx = *(eax);
    eax = *((ebp + 8));
    edx = *((eax + 0x18));
    eax = *((ebp + 8));
    eax = *((eax + 8));
    eax = *((ebp + 0xc));
    eax = void (*edx)(uint32_t, uint32_t) (ebx, eax);
    eax <<= 3;
    eax = ebx + eax;
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax <= *((ebp - 8))) {
        abort ();
    }
    edx = *((ebp + 0x10));
    eax = *((ebp - 8));
    *(edx) = eax;
    eax = *((ebp - 8));
    eax = *(eax);
    if (eax == 0) {
        *((ebp - 0x2c)) = 0;
        goto label_0;
    }
    eax = *((ebp + 8));
    edx = *((eax + 0x1c));
    eax = *((ebp - 8));
    eax = *(eax);
    eax = *((ebp + 0xc));
    al = void (*edx)(uint32_t, uint32_t) (eax, eax);
    if (al != 0) {
        eax = *((ebp - 8));
        eax = *(eax);
        *((ebp - 0x10)) = eax;
        if (*((ebp - 0x28)) != 0) {
            eax = *((ebp - 8));
            eax = *((eax + 4));
            if (eax != 0) {
                eax = *((ebp - 8));
                eax = *((eax + 4));
                *((ebp - 0x14)) = eax;
                eax = *((ebp - 0x14));
                edx = *((eax + 4));
                eax = *(eax);
                ecx = *((ebp - 8));
                *(ecx) = eax;
                *((ecx + 4)) = edx;
                eax = *((ebp - 0x14));
                *((esp + 4)) = eax;
                eax = *((ebp + 8));
                *(esp) = eax;
                free_entry ();
            } else {
                eax = *((ebp - 8));
                *(eax) = 0;
            }
        }
        eax = *((ebp - 0x10));
        *((ebp - 0x2c)) = eax;
        goto label_0;
    }
    eax = *((ebp - 8));
    *((ebp - 0xc)) = eax;
    while (eax != 0) {
        eax = *((ebp + 8));
        edx = *((eax + 0x1c));
        eax = *((ebp - 0xc));
        eax = *((eax + 4));
        eax = *(eax);
        eax = *((ebp + 0xc));
        al = void (*edx)(uint32_t, uint32_t) (eax, eax);
        if (al != 0) {
            eax = *((ebp - 0xc));
            eax = *((eax + 4));
            eax = *(eax);
            *((ebp - 0x18)) = eax;
            if (*((ebp - 0x28)) != 0) {
                eax = *((ebp - 0xc));
                eax = *((eax + 4));
                *((ebp - 0x1c)) = eax;
                eax = *((ebp - 0x1c));
                edx = *((eax + 4));
                eax = *((ebp - 0xc));
                *((eax + 4)) = edx;
                eax = *((ebp - 0x1c));
                *((esp + 4)) = eax;
                eax = *((ebp + 8));
                *(esp) = eax;
                free_entry ();
            }
            eax = *((ebp - 0x18));
            *((ebp - 0x2c)) = eax;
            goto label_0;
        }
        eax = *((ebp - 0xc));
        eax = *((eax + 4));
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0xc));
        eax = *((eax + 4));
    }
    *((ebp - 0x2c)) = 0;
label_0:
    eax = *((ebp - 0x2c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80534c8 */
#include <stdint.h>
 
uint32_t dbg_adjust_value (int32_t arg_10h, int32_t arg_14h) {
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_2ch;
    int32_t var_1ch;
    int32_t var_1ah;
    uintmax_t u;
    uint32_t var_ch;
    int32_t inexact_style;
    long double value;
    int32_t var_8h;
    /* long double adjust_value(int inexact_style,long double value); */
    if (*((ebp + 8)) != 1) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (*((ebp + 8)) <= 1) {
            goto label_0;
        }
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[?];
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (*((ebp + 8)) < 1) {
            *(fp_stack--) = fp_stack[?];
            eax = *((ebp - 0x1a));
            ah = 0xc;
            *((ebp - 0x1c)) = ax;
            *((ebp - 0x10)) = fp_stack[0];
            fp_stack--;
        } else {
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_stack[0] -= fp_stack[1];
            fp_stack++;
            eax = *((ebp - 0x1a));
            ah = 0xc;
            *((ebp - 0x1c)) = ax;
            *((ebp - 0x10)) = fp_stack[0];
            fp_stack--;
            ecx = *((ebp - 0x10));
            ebx = *((ebp - 0xc));
            eax = ecx;
            ah ^= 0;
            edx = ebx;
            edx ^= 0x80000000;
            *((ebp - 0x10)) = eax;
            *((ebp - 0xc)) = edx;
        }
        eax = *((ebp - 0x10));
        edx = *((ebp - 0xc));
        *((ebp - 0x10)) = eax;
        *((ebp - 0xc)) = edx;
        if (*((ebp + 8)) == 0) {
            *(fp_stack--) = *((ebp - 0x10));
            ? = fp_stack[0];
            fp_stack--;
            if (*((ebp - 0xc)) < 0) {
                *(fp_stack--) = fp_stack[?];
                *(fp_stack--) = fp_stack[?];
                fp_stack[0] += fp_stack[1];
                fp_stack++;
                ? = fp_stack[0];
                fp_stack--;
            }
            *(fp_stack--) = fp_stack[?];
            *(fp_stack--) = fp_stack[?];
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            al = (*((ebp - 0xc)) != 0) ? 1 : 0;
            __asm ("setp dl");
            eax |= edx;
            eax ^= 1;
            if (al == 0) {
                *((ebp - 0x2c)) = 1;
            }
        } else {
            *((ebp - 0x2c)) = 0;
        }
        eax = *((ebp - 0x2c));
        edx = *((ebp - 0x2c));
        edx >>= 0x1f;
        *((ebp - 0x60)) = eax;
        *((ebp - 0x5c)) = edx;
        eax = *((ebp - 0x60));
        edx = *((ebp - 0x5c));
        eax += *((ebp - 0x10));
        edx += *((ebp - 0xc));
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
        ? = fp_stack[0];
        fp_stack--;
    }
label_0:
    eax = *((ebp + 0xc));
    edx = *((ebp + 0x10));
    ecx = *((ebp + 0x14));
    *((ebp - 0x58)) = eax;
    *((ebp - 0x54)) = edx;
    *((ebp - 0x50)) = ecx;
    *(fp_stack--) = fp_stack[?];
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8053603 */
#include <stdint.h>
 
int32_t dbg_group_number (void * arg_8h, size_t arg_10h, int32_t arg_14h) {
    uint32_t var_54h;
    char * d;
    char const * thousands_sep;
    char const * grouping;
    char * number;
    size_t i;
    size_t thousands_seplen;
    size_t grouplen;
    unsigned char g;
    char[41] buf;
    void * var_4h;
    size_t numberlen;
    char * s2;
    size_t n;
    /* char * group_number(char * number,size_t numberlen,char const * grouping,char const * thousands_sep); */
    eax = *((ebp + 8));
    *((ebp - 0x44)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x48)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x4c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 4)) = eax;
    eax = 0;
    *((ebp - 0x34)) = 0xffffffff;
    eax = *((ebp - 0x4c));
    eax = strlen (eax);
    *((ebp - 0x38)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x3c)) = eax;
    eax = *((ebp + 0xc));
    eax = *((ebp - 0x44));
    eax = ebp - 0x2d;
    memcpy (eax, eax, eax);
    edx = *((ebp + 0xc));
    eax = *((ebp - 0x44));
    eax += edx;
    *((ebp - 0x50)) = eax;
    do {
        eax = *((ebp - 0x48));
        eax = *(eax);
        *((ebp - 0x2e)) = al;
        if (*((ebp - 0x2e)) != 0) {
            if (*((ebp - 0x2e)) <= 0x7e) {
                edx = *((ebp - 0x2e));
                *((ebp - 0x54)) = edx;
            } else {
                eax = *((ebp - 0x3c));
                *((ebp - 0x54)) = eax;
            }
            edx = *((ebp - 0x54));
            *((ebp - 0x34)) = edx;
            *((ebp - 0x48))++;
        }
        eax = *((ebp - 0x3c));
        if (eax < *((ebp - 0x34))) {
            eax = *((ebp - 0x3c));
            *((ebp - 0x34)) = eax;
        }
        eax = *((ebp - 0x34));
        eax = -eax;
        *((ebp - 0x50)) += eax;
        eax = *((ebp - 0x34));
        *((ebp - 0x3c)) -= eax;
        eax = ebp - 0x2d;
        eax += *((ebp - 0x3c));
        edx = *((ebp - 0x34));
        eax = *((ebp - 0x50));
        memcpy (eax, eax, edx);
        if (*((ebp - 0x3c)) == 0) {
            eax = *((ebp - 0x50));
            edx = *((ebp - 4));
            edx ^= *(gs:0x14);
            if (*((ebp - 0x3c)) == 0) {
                goto label_0;
            }
        } else {
            eax = *((ebp - 0x38));
            eax = -eax;
            *((ebp - 0x50)) += eax;
            eax = *((ebp - 0x38));
            eax = *((ebp - 0x4c));
            eax = *((ebp - 0x50));
            memcpy (eax, eax, eax);
        } while (1);
    }
    stack_chk_fail ();
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054a84 */
#include <stdint.h>
 
int32_t dbg_mpsort_into_tmp (uint32_t arg_ch) {
     const * bb;
     const * ba;
    size_t blim;
    size_t b;
    size_t alim;
    size_t a;
    size_t n2;
    size_t n1;
     const ** base;
     const ** tmp;
    comparison_function cmp;
    void * s2;
    size_t n;
    int32_t var_sp_ch;
    /* void mpsort_into_tmp( const ** base,size_t n, const ** tmp,comparison_function cmp); */
    eax = *((ebp + 0xc));
    eax >>= 1;
    *((ebp - 4)) = eax;
    edx = *((ebp - 4));
    eax = *((ebp + 0xc));
    eax -= edx;
    *((ebp - 8)) = eax;
    *((ebp - 0xc)) = 0;
    eax = *((ebp - 4));
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 4));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 4));
    eax <<= 2;
    edx = eax;
    edx += *((ebp + 8));
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp - 8));
    *((esp + 4)) = eax;
    mpsort_with_tmp (edx);
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp - 4));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    mpsort_with_tmp (eax);
    eax = *((ebp - 0xc));
    eax <<= 2;
    eax += *((ebp + 8));
    eax = *(eax);
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x14));
    eax <<= 2;
    eax += *((ebp + 8));
    eax = *(eax);
    *((ebp - 0x20)) = eax;
    do {
label_0:
        eax = *((ebp - 0x20));
        eax = *((ebp - 0x1c));
        eax = *((ebp + 0x14));
        eax = void (*eax)(uint32_t, uint32_t) (eax, eax);
        if (eax > 0) {
            goto label_1;
        }
        eax = *((ebp + 0x10));
        edx = *((ebp - 0x1c));
        *(eax) = edx;
        *((ebp + 0x10)) += 4;
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
        if (eax == *((ebp - 0x10))) {
            eax = *((ebp - 0x14));
            *((ebp - 0xc)) = eax;
            eax = *((ebp - 0x18));
            *((ebp - 0x10)) = eax;
            goto label_2;
        }
        eax = *((ebp - 0xc));
        eax <<= 2;
        eax += *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x1c)) = eax;
    } while (1);
label_1:
    eax = *((ebp + 0x10));
    edx = *((ebp - 0x20));
    *(eax) = edx;
    *((ebp + 0x10)) += 4;
    *((ebp - 0x14))++;
    eax = *((ebp - 0x14));
    if (eax != *((ebp - 0x18))) {
        eax = *((ebp - 0x14));
        eax <<= 2;
        eax += *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x20)) = eax;
        goto label_0;
    }
label_2:
    edx = *((ebp - 0xc));
    eax = *((ebp - 0x10));
    eax -= edx;
    edx = eax*4;
    eax = *((ebp - 0xc));
    eax <<= 2;
    eax += *((ebp + 8));
    eax = *((ebp + 0x10));
    memcpy (eax, eax, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054bbb */
#include <stdint.h>
 
int32_t dbg_mpsort_with_tmp (uint32_t arg_ch) {
     const * tt;
     const * bb;
    size_t blim;
    size_t b;
    size_t tlim;
    size_t t;
    size_t i;
    size_t n2;
    size_t n1;
     const * p1;
     const * p0;
     const ** base;
     const ** tmp;
    comparison_function cmp;
    void * s2;
    size_t n;
    int32_t var_sp_ch;
    do {
        /* void mpsort_with_tmp( const ** base,size_t n, const ** tmp,comparison_function cmp); */
        if (*((ebp + 0xc)) <= 2) {
            if (*((ebp + 0xc)) != 2) {
                goto label_1;
            }
            eax = *((ebp + 8));
            eax = *(eax);
            *((ebp - 4)) = eax;
            eax = *((ebp + 8));
            eax += 4;
            eax = *(eax);
            *((ebp - 8)) = eax;
            eax = *((ebp - 8));
            eax = *((ebp - 4));
            eax = *((ebp + 0x14));
            eax = void (*eax)(uint32_t, uint32_t) (eax, eax);
            if (eax <= 0) {
                goto label_1;
            }
            edx = *((ebp + 8));
            eax = *((ebp - 8));
            *(edx) = eax;
            eax = *((ebp + 8));
            edx = eax + 4;
            eax = *((ebp - 4));
            *(edx) = eax;
            goto label_1;
        }
        eax = *((ebp + 0xc));
        eax >>= 1;
        *((ebp - 0xc)) = eax;
        edx = *((ebp - 0xc));
        eax = *((ebp + 0xc));
        eax -= edx;
        *((ebp - 0x10)) = eax;
        *((ebp - 0x18)) = 0;
        eax = *((ebp - 0xc));
        *((ebp - 0x1c)) = eax;
        eax = *((ebp - 0xc));
        *((ebp - 0x20)) = eax;
        eax = *((ebp + 0xc));
        *((ebp - 0x24)) = eax;
        eax = *((ebp - 0xc));
        eax <<= 2;
        edx = eax;
        edx += *((ebp + 8));
        eax = *((ebp + 0x14));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x10));
        *((esp + 4)) = eax;
        mpsort_with_tmp (edx);
    } while (1);
    if (*((ebp - 0xc)) <= 1) {
        eax = *((ebp + 8));
        edx = *(eax);
        eax = *((ebp + 0x10));
        *(eax) = edx;
    } else {
        eax = *((ebp + 0x14));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp - 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        mpsort_into_tmp (eax);
    }
    eax = *((ebp - 0x18));
    eax <<= 2;
    eax += *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x2c)) = eax;
    eax = *((ebp - 0x20));
    eax <<= 2;
    eax += *((ebp + 8));
    eax = *(eax);
    *((ebp - 0x28)) = eax;
    *((ebp - 0x14)) = 0;
    do {
label_0:
        eax = *((ebp - 0x28));
        eax = *((ebp - 0x2c));
        eax = *((ebp + 0x14));
        eax = void (*eax)(uint32_t, uint32_t) (eax, eax);
        if (eax > 0) {
            goto label_2;
        }
        eax = *((ebp - 0x14));
        eax <<= 2;
        edx = eax;
        edx += *((ebp + 8));
        eax = *((ebp - 0x2c));
        *(edx) = eax;
        *((ebp - 0x14))++;
        *((ebp - 0x18))++;
        eax = *((ebp - 0x18));
        if (eax == *((ebp - 0x1c))) {
            goto label_1;
        }
        eax = *((ebp - 0x18));
        eax <<= 2;
        eax += *((ebp + 0x10));
        eax = *(eax);
        *((ebp - 0x2c)) = eax;
    } while (1);
label_2:
    eax = *((ebp - 0x14));
    eax <<= 2;
    edx = eax;
    edx += *((ebp + 8));
    eax = *((ebp - 0x28));
    *(edx) = eax;
    *((ebp - 0x14))++;
    *((ebp - 0x20))++;
    eax = *((ebp - 0x20));
    if (eax == *((ebp - 0x24))) {
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x1c));
        eax -= edx;
        ecx = eax*4;
        eax = *((ebp - 0x18));
        eax <<= 2;
        edx = eax;
        edx += *((ebp + 0x10));
        eax = *((ebp - 0x14));
        eax <<= 2;
        eax += *((ebp + 8));
        memcpy (eax, edx, ecx);
    } else {
        eax = *((ebp - 0x20));
        eax <<= 2;
        eax += *((ebp + 8));
        eax = *(eax);
        *((ebp - 0x28)) = eax;
        goto label_0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054eed */
#include <stdint.h>
 
int32_t dbg_gettext_quote (void) {
    char const * translation;
    char const * msgid;
    quoting_style s;
    /* char const * gettext_quote(char const * msgid,quoting_style s); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = gettext ();
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    if (eax == *((ebp + 8))) {
        if (*((ebp + 0xc)) != 6) {
            goto label_0;
        }
        *((ebp - 4)) = 0x8061a3c;
    }
label_0:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054f1b */
#include <stdint.h>
 
uint32_t dbg_quotearg_buffer_restyled (void) {
    uint32_t var_5ch;
    uint32_t var_58h;
    uint32_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    uint32_t var_46h;
    uint32_t var_45h;
    int32_t var_44h;
    mbstate_t mbstate;
    size_t ilim;
    size_t j;
    size_t bytes;
    wchar_t w;
    size_t m;
    char const * right;
    char const * left;
    size_t quote_string_len;
    char const * quote_string;
    size_t len;
    size_t i;
    _Bool printable;
    unsigned char esc;
    unsigned char c;
    _Bool unibyte_locale;
    _Bool backslash_escapes;
    char * buffer;
    size_t buffersize;
    char const * arg;
    size_t argsize;
    quoting_style quoting_style;
    quoting_options const * o;
    char * s2;
    size_t n;
    mbstate_t * ps;
    int32_t var_sp_10h;
    int32_t var_sp_14h;
    /* size_t quotearg_buffer_restyled(char * buffer,size_t buffersize,char const * arg,size_t argsize,quoting_style quoting_style,quoting_options const * o); */
label_2:
    *((ebp - 0x10)) = 0;
    *((ebp - 0x14)) = 0;
    *((ebp - 0x18)) = 0;
    *((ebp - 1)) = 0;
    eax = ctype_get_mb_cur_max ();
    al = (eax == 1) ? 1 : 0;
    *((ebp - 2)) = al;
    if (*((ebp + 0x18)) <= 6) {
        eax = *((ebp + 0x18));
        eax <<= 2;
        eax = *((eax + 0x8061a44));
        void (*eax)() ();
    }
    *((ebp - 0xc)) = 0;
    goto label_3;
label_1:
    if (*((ebp - 1)) != 0) {
        if (*((ebp - 0x18)) == 0) {
            goto label_4;
        }
        eax = *((ebp - 0x18));
        edx = *((ebp - 0xc));
        eax = edx + eax;
        if (eax > *((ebp + 0x14))) {
            goto label_4;
        }
        edx = *((ebp - 0xc));
        eax = *((ebp + 0x10));
        edx = eax + edx;
        eax = *((ebp - 0x18));
        eax = *((ebp - 0x14));
        eax = memcmp (edx, eax, eax);
        if (eax != 0) {
            goto label_4;
        }
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x5c;
        }
        *((ebp - 0x10))++;
    }
label_4:
    edx = *((ebp - 0xc));
    eax = *((ebp + 0x10));
    eax += edx;
    eax = *(eax);
    *((ebp - 3)) = al;
    eax = *((ebp - 3));
    *((ebp - 0x4c)) = eax;
    if (*((ebp - 0x4c)) <= 0x7e) {
        edx = *((ebp - 0x4c));
        eax = *((edx*4 + 0x8061a60));
        /* switch table (127 cases) at 0x8061a60 */
        void (*eax)() ();
        if (*((ebp - 1)) == 0) {
            goto label_5;
        }
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x5c;
        }
        *((ebp - 0x10))++;
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x30;
        }
        *((ebp - 0x10))++;
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x30;
        }
        *((ebp - 0x10))++;
        *((ebp - 3)) = 0x30;
        goto label_5;
        ecx = *((ebp + 0x18));
        *((ebp - 0x50)) = ecx;
        if (*((ebp - 0x50)) == 1) {
            goto label_6;
        }
        if (*((ebp - 0x50)) != 3) {
            goto label_5;
        }
        eax = *((ebp - 0xc));
        eax += 2;
        if (eax >= *((ebp + 0x14))) {
            goto label_5;
        }
        eax = *((ebp - 0xc));
        eax++;
        eax += *((ebp + 0x10));
        eax = *(eax);
        if (al != 0x3f) {
            goto label_5;
        }
        eax = *((ebp - 0xc));
        eax += 2;
        eax += *((ebp + 0x10));
        eax = *(eax);
        eax = (int32_t) al;
        eax -= 0x21;
        *((ebp - 0x54)) = eax;
        if (*((ebp - 0x54)) > 0x1d) {
            goto label_5;
        }
        eax = 1;
        ecx = *((ebp - 0x54));
        eax <<= cl;
        eax &= 0x380051c1;
        if (eax == 0) {
            goto label_5;
        }
        eax = *((ebp - 0xc));
        eax += 2;
        eax += *((ebp + 0x10));
        eax = *(eax);
        *((ebp - 3)) = al;
        *((ebp - 0xc)) += 2;
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x3f;
        }
        *((ebp - 0x10))++;
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x5c;
        }
        *((ebp - 0x10))++;
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x3f;
        }
        *((ebp - 0x10))++;
        goto label_5;
        *((ebp - 4)) = 0x61;
        goto label_7;
        *((ebp - 4)) = 0x62;
        goto label_7;
        *((ebp - 4)) = 0x66;
        goto label_7;
        *((ebp - 4)) = 0x6e;
        goto label_8;
        *((ebp - 4)) = 0x72;
        goto label_8;
        *((ebp - 4)) = 0x74;
        goto label_8;
        *((ebp - 4)) = 0x76;
        goto label_7;
        eax = *((ebp - 3));
        *((ebp - 4)) = al;
label_8:
        if (*((ebp + 0x18)) == 1) {
            goto label_6;
        }
label_7:
        if (*((ebp - 1)) == 0) {
            goto label_5;
        }
        eax = *((ebp - 4));
        *((ebp - 3)) = al;
        goto label_9;
        if (*((ebp + 0x14)) == -1) {
            eax = *((ebp + 0x10));
            eax++;
            eax = *(eax);
            ebp - 0x46 = (al != 0) ? 1 : 0;
        } else {
            ebp - 0x46 = (*((ebp + 0x14)) != 1) ? 1 : 0;
        }
        if (*((ebp - 0x46)) != 0) {
            goto label_5;
        }
        if (*((ebp - 0xc)) != 0) {
            goto label_5;
        }
        if (*((ebp + 0x18)) == 1) {
            goto label_6;
        }
        goto label_5;
        eax = *((ebp + 0x18));
        *((ebp - 0x58)) = eax;
        if (*((ebp - 0x58)) == 1) {
            goto label_6;
        }
        if (*((ebp - 0x58)) != 2) {
            goto label_5;
        }
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x27;
        }
        *((ebp - 0x10))++;
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x5c;
        }
        *((ebp - 0x10))++;
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x27;
        }
        *((ebp - 0x10))++;
        goto label_5;
    }
    if (*((ebp - 2)) != 0) {
        *((ebp - 0x24)) = 1;
        eax = ctype_b_loc ();
        edx = *(eax);
        eax = *((ebp - 3));
        eax += eax;
        eax = edx + eax;
        eax = *(eax);
        eax = (int32_t) ax;
        eax &= 0x4000;
        al = (eax != 0) ? 1 : 0;
        *((ebp - 5)) = al;
        goto label_10;
    }
    eax = ebp - 0x3c;
    memset (eax, 0, 8);
    *((ebp - 0x24)) = 0;
    *((ebp - 5)) = 1;
    if (*((ebp + 0x14)) == -1) {
        eax = *((ebp + 0x10));
        eax = strlen (eax);
        *((ebp + 0x14)) = eax;
    }
label_0:
    edx = *((ebp - 0x24));
    eax = *((ebp - 0xc));
    edx = eax + edx;
    eax = *((ebp + 0x14));
    ecx = *((ebp + 0x14));
    ecx -= edx;
    edx = *((ebp - 0x24));
    eax = *((ebp - 0xc));
    eax += edx;
    edx = eax;
    edx += *((ebp + 0x10));
    eax = ebp - 0x3c;
    eax = ebp - 0x28;
    eax = mbrtowc (eax, edx, ecx);
    *((ebp - 0x2c)) = eax;
    if (*((ebp - 0x2c)) == 0) {
        goto label_10;
    }
    if (*((ebp - 0x2c)) == -1) {
        *((ebp - 5)) = 0;
        goto label_10;
    }
    if (*((ebp - 0x2c)) != 0xfffffffe) {
        goto label_11;
    }
    *((ebp - 5)) = 0;
    while (al != 0) {
        *((ebp - 0x24))++;
        eax = *((ebp - 0x24));
        edx = *((ebp - 0xc));
        eax = edx + eax;
        if (eax >= *((ebp + 0x14))) {
            goto label_10;
        }
        edx = *((ebp - 0x24));
        eax = *((ebp - 0xc));
        eax += edx;
        eax += *((ebp + 0x10));
        eax = *(eax);
    }
    goto label_10;
label_11:
    if (*((ebp + 0x18)) != 1) {
        goto label_12;
    }
    *((ebp - 0x30)) = 1;
    while (eax < *((ebp - 0x2c))) {
        edx = *((ebp - 0x24));
        eax = *((ebp - 0xc));
        eax += edx;
        eax += *((ebp - 0x30));
        eax += *((ebp + 0x10));
        eax = *(eax);
        eax = (int32_t) al;
        eax -= 0x5b;
        *((ebp - 0x5c)) = eax;
        if (*((ebp - 0x5c)) <= 0x21) {
            edx = *((ebp - 0x5c));
            eax = *((edx*4 + 0x8061c5c));
            /* switch table (34 cases) at 0x8061c5c */
            void (*eax)() ();
        }
        *((ebp - 0x30))++;
        eax = *((ebp - 0x30));
    }
label_12:
    eax = *((ebp - 0x28));
    eax = iswprint (eax);
    if (eax == 0) {
        *((ebp - 5)) = 0;
    }
    eax = *((ebp - 0x2c));
    *((ebp - 0x24)) += eax;
    eax = ebp - 0x3c;
    eax = mbsinit (eax);
    if (eax == 0) {
        goto label_0;
    }
label_10:
    if (*((ebp - 0x24)) <= 1) {
        eax = *((ebp - 1));
        eax ^= 1;
        if (al != 0) {
            goto label_5;
        }
        eax = *((ebp - 5));
        eax ^= 1;
        if (al == 0) {
            goto label_5;
        }
    }
    eax = *((ebp - 0x24));
    edx = *((ebp - 0xc));
    eax = edx + eax;
    *((ebp - 0x34)) = eax;
    do {
        if (*((ebp - 1)) != 0) {
            eax = *((ebp - 5));
            eax ^= 1;
            if (al == 0) {
                goto label_13;
            }
            eax = *((ebp - 0x10));
            if (eax < *((ebp + 0xc))) {
                eax = *((ebp - 0x10));
                edx = *((ebp + 8));
                eax = edx + eax;
                *(eax) = 0x5c;
            }
            *((ebp - 0x10))++;
            eax = *((ebp - 0x10));
            if (eax < *((ebp + 0xc))) {
                edx = *((ebp - 0x10));
                eax = *((ebp + 8));
                edx = eax + edx;
                eax = *((ebp - 3));
                al >>= 6;
                eax += 0x30;
                *(edx) = al;
            }
            *((ebp - 0x10))++;
            eax = *((ebp - 0x10));
            if (eax < *((ebp + 0xc))) {
                edx = *((ebp - 0x10));
                eax = *((ebp + 8));
                edx = eax + edx;
                eax = *((ebp - 3));
                al >>= 3;
                eax &= 7;
                eax += 0x30;
                *(edx) = al;
            }
            *((ebp - 0x10))++;
            eax = *((ebp - 3));
            eax &= 7;
            eax += 0x30;
            *((ebp - 3)) = al;
        }
label_13:
        eax = *((ebp - 0xc));
        eax++;
        if (eax >= *((ebp - 0x34))) {
            goto label_14;
        }
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            edx = *((ebp - 0x10));
            eax = *((ebp + 8));
            edx = eax + edx;
            eax = *((ebp - 3));
            *(edx) = al;
        }
        *((ebp - 0x10))++;
        *((ebp - 0xc))++;
        edx = *((ebp - 0xc));
        eax = *((ebp + 0x10));
        eax += edx;
        eax = *(eax);
        *((ebp - 3)) = al;
    } while (1);
label_5:
    eax = *((ebp - 1));
    eax ^= 1;
    if (al == 0) {
        eax = *((ebp - 3));
        al >>= 5;
        edx = (int32_t) al;
        eax = *((ebp + 0x1c));
        edx = *((eax + edx*4 + 4));
        eax = *((ebp - 3));
        ecx = eax;
        ecx &= 0x1f;
        eax = 1;
        eax <<= cl;
        eax &= edx;
        if (eax == 0) {
            goto label_14;
        }
label_9:
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            eax = *((ebp - 0x10));
            edx = *((ebp + 8));
            eax = edx + eax;
            *(eax) = 0x5c;
        }
        *((ebp - 0x10))++;
    }
label_14:
    eax = *((ebp - 0x10));
    if (eax < *((ebp + 0xc))) {
        edx = *((ebp - 0x10));
        eax = *((ebp + 8));
        edx = eax + edx;
        eax = *((ebp - 3));
        *(edx) = al;
    }
    *((ebp - 0x10))++;
    *((ebp - 0xc))++;
label_3:
    if (*((ebp + 0x14)) == -1) {
        edx = *((ebp - 0xc));
        eax = *((ebp + 0x10));
        eax += edx;
        eax = *(eax);
        ebp - 0x45 = (al != 0) ? 1 : 0;
    } else {
        eax = *((ebp - 0xc));
        ebp - 0x45 = (eax != *((ebp + 0x14))) ? 1 : 0;
    }
    if (*((ebp - 0x45)) != 0) {
        goto label_1;
    }
    if (*((ebp - 0xc)) == 0) {
        if (*((ebp + 0x18)) == 1) {
            goto label_6;
        }
    }
    if (*((ebp - 0x14)) == 0) {
        goto label_15;
    }
    while (al != 0) {
        eax = *((ebp - 0x10));
        if (eax < *((ebp + 0xc))) {
            edx = *((ebp - 0x10));
            eax = *((ebp + 8));
            edx = eax + edx;
            eax = *((ebp - 0x14));
            eax = *(eax);
            *(edx) = al;
        }
        *((ebp - 0x10))++;
        *((ebp - 0x14))++;
        eax = *((ebp - 0x14));
        eax = *(eax);
    }
label_15:
    eax = *((ebp - 0x10));
    if (eax < *((ebp + 0xc))) {
        eax = *((ebp - 0x10));
        edx = *((ebp + 8));
        eax = edx + eax;
        *(eax) = 0;
    }
    ecx = *((ebp - 0x10));
    *((ebp - 0x44)) = ecx;
    goto label_16;
label_6:
    eax = *((ebp + 0x1c));
    *((esp + 0x14)) = eax;
    *((esp + 0x10)) = 2;
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = quotearg_buffer_restyled ();
    goto label_2;
    *((ebp - 0x44)) = eax;
label_16:
    eax = *((ebp - 0x44));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8055bac */
#include <stdint.h>
 
int32_t dbg_memcpy_lowcase (void) {
    char * dest;
    char const * src;
    size_t len;
    /* char * memcpy_lowcase(char * dest,char const * src,size_t len); */
    while (al != 0) {
        edx = *((ebp + 0x10));
        eax = *((ebp + 8));
        ebx = eax + edx;
        edx = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax += edx;
        eax = *(eax);
        eax = (int32_t) al;
        al = tolower (eax);
        *(ebx) = al;
        al = (*((ebp + 0x10)) != 0) ? 1 : 0;
        *((ebp + 0x10))--;
    }
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8055bee */
#include <stdint.h>
 
int32_t dbg_memcpy_uppcase (void) {
    char * dest;
    char const * src;
    size_t len;
    /* char * memcpy_uppcase(char * dest,char const * src,size_t len); */
    while (al != 0) {
        edx = *((ebp + 0x10));
        eax = *((ebp + 8));
        ebx = eax + edx;
        edx = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax += edx;
        eax = *(eax);
        eax = (int32_t) al;
        al = toupper (eax);
        *(ebx) = al;
        al = (*((ebp + 0x10)) != 0) ? 1 : 0;
        *((ebp + 0x10))--;
    }
    eax = *((ebp + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8055c30 */
#include <stdint.h>
 
int32_t dbg_strftime_case_ (int32_t arg_8h, int32_t arg_ch, int32_t arg_14h, int32_t arg_18h) {
    int32_t var_61ch;
    int32_t var_618h;
    int32_t var_614h;
    uint32_t var_610h;
    tm const * tp;
    char const * format;
    char * s;
    _Bool upcase;
    tm ltm;
    int32_t var_58ch;
    int32_t _incr;
    int32_t _delta;
    int32_t _n;
    int32_t flen;
    int32_t sec_diff;
    int32_t min_diff;
    int32_t hour_diff;
    int32_t diff;
    int32_t yy;
    int32_t d;
    int32_t days;
    int32_t year_adjust;
    int32_t year;
    time_t t;
    int32_t j;
    int32_t padding;
    int32_t century;
    size_t len;
    char * u;
    int32_t var_488h;
    int32_t var_484h;
    int32_t var_480h;
    size_t bytes;
    size_t fsize;
    int32_t var_474h;
    int32_t var_470h;
    int32_t var_46ch;
    int32_t var_468h;
    int32_t format_char;
    size_t colons;
    int32_t width;
    char * bufp;
    char const * subfmt;
    int32_t tz_colon_mask;
    uint32_t u_number_value;
    int32_t number_value;
    int32_t digits;
    int32_t modifier;
    int32_t pad;
    char const * format_end;
    char const * f;
    char * p;
    size_t i;
    char const * zone;
    int32_t hour12;
    _Bool change_case;
    _Bool to_uppcase;
    _Bool to_lowcase;
    char sign_char;
    _Bool always_output_a_sign;
    _Bool negative_number;
    char[1024] ubuf;
    char[14] buf;
    int32_t canary;
    size_t maxsize;
    int32_t ut;
    int32_t ns;
    size_t s2;
    size_t ps;
    /* size_t strftime_case_(_Bool upcase,char * s,size_t maxsize,char const * format,tm const * tp,int ut,int ns); */
    eax = *((ebp + 8));
    *((ebp - 0x59c)) = al;
    eax = *((ebp + 0xc));
    *((ebp - 0x5a0)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x5a4)) = eax;
    eax = *((ebp + 0x18));
    *((ebp - 0x5a8)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x5a8));
    eax = *((eax + 8));
    *((ebp - 0x424)) = eax;
    *((ebp - 0x42c)) = 0;
    eax = *((ebp - 0x5a0));
    *((ebp - 0x430)) = eax;
    *((ebp - 0x438)) = 0;
    *((ebp - 0x428)) = 0;
    eax = *((ebp - 0x5a8));
    eax = *((eax + 0x28));
    *((ebp - 0x428)) = eax;
    if (*((ebp - 0x424)) > 0xc) {
        *((ebp - 0x424)) -= 0xc;
    } else {
        if (*((ebp - 0x424)) != 0) {
            goto label_2;
        }
        *((ebp - 0x424)) = 0xc;
    }
label_2:
    eax = *((ebp - 0x5a4));
    *((ebp - 0x434)) = eax;
    goto label_3;
label_1:
    *((ebp - 0x43c)) = 0;
    *((ebp - 0x444)) = 0;
    *((ebp - 0x45c)) = 0xffffffff;
    *((ebp - 0x41e)) = 0;
    eax = *((ebp - 0x59c));
    *((ebp - 0x41f)) = al;
    *((ebp - 0x420)) = 0;
    eax = *((ebp - 0x434));
    eax = *(eax);
    eax = (int32_t) al;
    *((ebp - 0x61c)) = eax;
    if (*((ebp - 0x61c)) <= 0x3f) {
        if (*((ebp - 0x61c)) < 0x26) {
            if (*((ebp - 0x61c)) <= 0x23) {
                if (*((ebp - 0x61c)) >= 0x20) {
                    goto label_4;
                }
                eax = *((ebp - 0x61c));
                eax -= 8;
                if (eax > 5) {
                    goto label_5;
                }
            } else {
            } else {
            }
        }
        if (*((ebp - 0x61c)) == 0x25) {
            goto label_0;
        }
        if (*((ebp - 0x61c)) < 0x41) {
            goto label_5;
        }
        if (*((ebp - 0x61c)) <= 0x5f) {
            goto label_4;
        }
        eax = *((ebp - 0x61c));
        eax -= 0x61;
        if (eax > 0x1d) {
            goto label_5;
        }
label_4:
        *((ebp - 0x468)) = 1;
        edx = *((ebp - 0x468));
        eax = *((ebp - 0x45c));
        eax -= edx;
        *((ebp - 0x46c)) = eax;
        eax = *((ebp - 0x46c));
        eax >>= 0x1f;
        eax = ~eax;
        eax &= *((ebp - 0x46c));
        eax += *((ebp - 0x468));
        *((ebp - 0x470)) = eax;
        ecx = *((ebp - 0x470));
        edx = *((ebp - 0x42c));
        eax = *((ebp + 0x10));
        eax -= edx;
        if (ecx >= eax) {
            *((ebp - 0x618)) = 0;
            goto label_6;
        }
        if (*((ebp - 0x430)) != 0) {
            if (*((ebp - 0x444)) == 0) {
                if (*((ebp - 0x46c)) <= 0) {
                    goto label_7;
                }
                if (*((ebp - 0x43c)) == 0x30) {
                    eax = *((ebp - 0x46c));
                    eax = *((ebp - 0x430));
                    memset (eax, 0x30, eax);
                    eax = *((ebp - 0x46c));
                    *((ebp - 0x430)) += eax;
                } else {
                    eax = *((ebp - 0x46c));
                    eax = *((ebp - 0x430));
                    memset (eax, 0x20, eax);
                    eax = *((ebp - 0x46c));
                    *((ebp - 0x430)) += eax;
                }
            }
label_7:
            eax = *((ebp - 0x434));
            edx = *(eax);
            eax = *((ebp - 0x430));
            *(eax) = dl;
            eax = *((ebp - 0x468));
            *((ebp - 0x430)) += eax;
        }
        eax = *((ebp - 0x470));
        *((ebp - 0x42c)) += eax;
        goto label_8;
    }
label_5:
    eax = mbstate_zero;
    edx = .comment;
    *((ebp - 0x590)) = eax;
    *((ebp - 0x58c)) = edx;
    *((ebp - 0x474)) = 0;
    if (*((ebp - 0x438)) == 0) {
        eax = *((ebp - 0x434));
        eax = strlen (eax);
        eax++;
        eax += *((ebp - 0x434));
        *((ebp - 0x438)) = eax;
    }
    eax = *((ebp - 0x438));
    edx = *((ebp - 0x434));
    eax -= edx;
    *((ebp - 0x478)) = eax;
    do {
        edx = *((ebp - 0x474));
        eax = *((ebp - 0x478));
        ecx = *((ebp - 0x478));
        ecx -= edx;
        edx = *((ebp - 0x474));
        eax = *((ebp - 0x434));
        edx = eax + edx;
        eax = ebp - 0x590;
        eax = mbrlen (edx, ecx, eax);
        *((ebp - 0x47c)) = eax;
        if (*((ebp - 0x47c)) == 0) {
            goto label_9;
        }
        if (*((ebp - 0x47c)) == 0xfffffffe) {
            edx = *((ebp - 0x474));
            eax = *((ebp - 0x434));
            eax += edx;
            eax = strlen (eax);
            *((ebp - 0x474)) += eax;
        } else {
            if (*((ebp - 0x47c)) == -1) {
                *((ebp - 0x474))++;
            } else {
                eax = *((ebp - 0x47c));
                *((ebp - 0x474)) += eax;
                eax = ebp - 0x590;
                eax = mbsinit (eax);
            }
        }
    } while (eax == 0);
label_9:
    eax = *((ebp - 0x474));
    *((ebp - 0x480)) = eax;
    edx = *((ebp - 0x480));
    eax = *((ebp - 0x45c));
    eax -= edx;
    *((ebp - 0x484)) = eax;
    eax = *((ebp - 0x484));
    eax >>= 0x1f;
    eax = ~eax;
    eax &= *((ebp - 0x484));
    eax += *((ebp - 0x480));
    *((ebp - 0x488)) = eax;
    ecx = *((ebp - 0x488));
    edx = *((ebp - 0x42c));
    eax = *((ebp + 0x10));
    eax -= edx;
    if (ecx >= eax) {
        *((ebp - 0x618)) = 0;
        goto label_6;
    }
    if (*((ebp - 0x430)) != 0) {
        if (*((ebp - 0x444)) == 0) {
            if (*((ebp - 0x484)) <= 0) {
                goto label_10;
            }
            if (*((ebp - 0x43c)) == 0x30) {
                eax = *((ebp - 0x484));
                eax = *((ebp - 0x430));
                memset (eax, 0x30, eax);
                eax = *((ebp - 0x484));
                *((ebp - 0x430)) += eax;
            } else {
                eax = *((ebp - 0x484));
                eax = *((ebp - 0x430));
                memset (eax, 0x20, eax);
                eax = *((ebp - 0x484));
                *((ebp - 0x430)) += eax;
            }
        }
label_10:
        if (*((ebp - 0x41e)) != 0) {
            eax = *((ebp - 0x480));
            *((esp + 8)) = eax;
            eax = *((ebp - 0x434));
            *((esp + 4)) = eax;
            eax = *((ebp - 0x430));
            *(esp) = eax;
            memcpy_lowcase ();
        } else {
            if (*((ebp - 0x41f)) != 0) {
                eax = *((ebp - 0x480));
                *((esp + 8)) = eax;
                eax = *((ebp - 0x434));
                *((esp + 4)) = eax;
                eax = *((ebp - 0x430));
                *(esp) = eax;
                memcpy_uppcase ();
            } else {
                eax = *((ebp - 0x480));
                eax = *((ebp - 0x434));
                eax = *((ebp - 0x430));
                memcpy (eax, eax, eax);
            }
        }
        eax = *((ebp - 0x480));
        *((ebp - 0x430)) += eax;
    }
    eax = *((ebp - 0x488));
    *((ebp - 0x42c)) += eax;
    eax = *((ebp - 0x474));
    eax--;
    *((ebp - 0x434)) += eax;
    goto label_8;
    do {
label_0:
        *((ebp - 0x434))++;
        eax = *((ebp - 0x434));
        eax = *(eax);
        eax = (int32_t) al;
        *((ebp - 0x614)) = eax;
        if (*((ebp - 0x614)) != 0x30) {
            if (*((ebp - 0x614)) <= 0x30) {
                if (*((ebp - 0x614)) == 0x23) {
                    goto label_11;
                }
                if (*((ebp - 0x614)) == 0x2d) {
                    goto label_12;
                }
                goto label_13;
            }
            if (*((ebp - 0x614)) == 0x5e) {
                goto label_14;
            }
            if (*((ebp - 0x614)) != 0x5f) {
                goto label_13;
            }
        }
label_12:
        eax = *((ebp - 0x434));
        eax = *(eax);
        eax = (int32_t) al;
        *((ebp - 0x43c)) = eax;
    } while (1);
label_14:
    *((ebp - 0x41f)) = 1;
    goto label_0;
label_11:
    *((ebp - 0x420)) = 1;
    goto label_0;
label_13:
    eax = *((ebp - 0x434));
    eax = *(eax);
    eax = (int32_t) al;
    eax -= 0x30;
    if (eax > 9) {
        goto label_15;
    }
    *((ebp - 0x45c)) = 0;
    do {
        if (*((ebp - 0x45c)) <= 0xccccccc) {
            if (*((ebp - 0x45c)) != 0xccccccc) {
                goto label_16;
            }
            eax = *((ebp - 0x434));
            eax = *(eax);
            eax = (int32_t) al;
            eax -= 0x30;
            if (eax <= 7) {
                goto label_16;
            }
        }
        *((ebp - 0x45c)) = 0x7fffffff;
        goto label_17;
label_16:
        edx = *((ebp - 0x45c));
        eax = *((ebp - 0x45c));
        eax <<= 2;
        eax += edx;
        eax += eax;
        *((ebp - 0x45c)) = eax;
        eax = *((ebp - 0x434));
        eax = *(eax);
        eax = (int32_t) al;
        eax -= 0x30;
        *((ebp - 0x45c)) += eax;
label_17:
        *((ebp - 0x434))++;
        eax = *((ebp - 0x434));
        eax = *(eax);
        eax = (int32_t) al;
        eax -= 0x30;
    } while (eax <= 9);
label_15:
    eax = *((ebp - 0x434));
    eax = *(eax);
    eax = (int32_t) al;
    *((ebp - 0x610)) = eax;
    if (*((ebp - 0x610)) != 0x45) {
        if (*((ebp - 0x610)) != 0x4f) {
            goto label_18;
        }
    }
    eax = *((ebp - 0x434));
    eax = *(eax);
    eax = (int32_t) al;
    *((ebp - 0x440)) = eax;
    *((ebp - 0x434))++;
    goto label_19;
label_18:
    *((ebp - 0x440)) = 0;
label_19:
    eax = *((ebp - 0x434));
    eax = *(eax);
    eax = (int32_t) al;
    *((ebp - 0x464)) = eax;
    if (*((ebp - 0x464)) <= 0x7a) {
        eax = *((ebp - 0x464));
        eax <<= 2;
        eax = *((eax + 0x8061d08));
        void (*eax)() ();
    }
    *((ebp - 0x558)) = 1;
    while (al != 0x25) {
        *((ebp - 0x558))++;
        eax = 1;
        eax -= *((ebp - 0x558));
        eax += *((ebp - 0x434));
        eax = *(eax);
    }
    eax = *((ebp - 0x558));
    *((ebp - 0x55c)) = eax;
    edx = *((ebp - 0x55c));
    eax = *((ebp - 0x45c));
    eax -= edx;
    *((ebp - 0x560)) = eax;
    eax = *((ebp - 0x560));
    eax >>= 0x1f;
    eax = ~eax;
    eax &= *((ebp - 0x560));
    eax += *((ebp - 0x55c));
    *((ebp - 0x564)) = eax;
    ecx = *((ebp - 0x564));
    edx = *((ebp - 0x42c));
    eax = *((ebp + 0x10));
    eax -= edx;
    if (ecx >= eax) {
        *((ebp - 0x618)) = 0;
        goto label_6;
    }
    if (*((ebp - 0x430)) != 0) {
        if (*((ebp - 0x444)) == 0) {
            if (*((ebp - 0x560)) <= 0) {
                goto label_20;
            }
            if (*((ebp - 0x43c)) == 0x30) {
                eax = *((ebp - 0x560));
                eax = *((ebp - 0x430));
                memset (eax, 0x30, eax);
                eax = *((ebp - 0x560));
                *((ebp - 0x430)) += eax;
            } else {
                eax = *((ebp - 0x560));
                eax = *((ebp - 0x430));
                memset (eax, 0x20, eax);
                eax = *((ebp - 0x560));
                *((ebp - 0x430)) += eax;
            }
        }
label_20:
        if (*((ebp - 0x41e)) != 0) {
            edx = *((ebp - 0x55c));
            eax = 1;
            eax -= *((ebp - 0x558));
            eax += *((ebp - 0x434));
            *((esp + 8)) = edx;
            *((esp + 4)) = eax;
            eax = *((ebp - 0x430));
            *(esp) = eax;
            memcpy_lowcase ();
        } else {
            if (*((ebp - 0x41f)) != 0) {
                edx = *((ebp - 0x55c));
                eax = 1;
                eax -= *((ebp - 0x558));
                eax += *((ebp - 0x434));
                *((esp + 8)) = edx;
                *((esp + 4)) = eax;
                eax = *((ebp - 0x430));
                *(esp) = eax;
                memcpy_uppcase ();
            } else {
                edx = *((ebp - 0x55c));
                eax = 1;
                eax -= *((ebp - 0x558));
                eax += *((ebp - 0x434));
                eax = *((ebp - 0x430));
                memcpy (eax, eax, edx);
            }
        }
        eax = *((ebp - 0x55c));
        *((ebp - 0x430)) += eax;
    }
    eax = *((ebp - 0x564));
    *((ebp - 0x42c)) += eax;
label_8:
    *((ebp - 0x434))++;
label_3:
    eax = *((ebp - 0x434));
    eax = *(eax);
    if (al != 0) {
        goto label_1;
    }
    if (*((ebp - 0x430)) != 0) {
        if (*((ebp + 0x10)) == 0) {
            goto label_21;
        }
        eax = *((ebp - 0x430));
        *(eax) = 0;
    }
label_21:
    edx = *((ebp - 0x42c));
    *((ebp - 0x618)) = edx;
label_6:
    eax = *((ebp - 0x618));
    ecx = *((ebp - 0xc));
    ecx ^= *(gs:0x14);
    if (*((ebp + 0x10)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805865e */
#include <stdint.h>
 
int32_t dbg_iso_week_days (void) {
    int32_t var_1ch;
    int32_t var_18h;
    int32_t big_enough_multiple_of_7;
    int32_t yday;
    int32_t wday;
    /* int iso_week_days(int yday,int wday); */
    *((ebp - 8)) = 0x17a;
    edx = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax -= edx;
    eax += 4;
    ecx = eax;
    ecx += *((ebp - 8));
    *((ebp - 0x1c)) = 0x92492493;
    eax = *((ebp - 0x1c));
    edx:eax = eax * ecx;
    eax = edx + ecx;
    edx = eax;
    edx >>= 2;
    eax = ecx;
    eax >>= 0x1f;
    ebx = edx;
    ebx -= eax;
    *((ebp - 0x18)) = ebx;
    eax = *((ebp - 0x18));
    eax <<= 3;
    eax -= *((ebp - 0x18));
    edx = ecx;
    edx -= eax;
    *((ebp - 0x18)) = edx;
    eax = *((ebp + 8));
    eax -= *((ebp - 0x18));
    eax += 3;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058c08 */
#include <stdint.h>
 
int32_t bkm_scale (long arg_8h, char * arg_ch) {
    int32_t var_ch;
    int32_t var_4h;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    eax = 0xffffffff;
    edx = 0;
    eax = *(edx:eax) / ebp - 0xc;
    edx = *(edx:eax) % ebp - 0xc;
    edx = eax;
    eax = *((ebp + 8));
    eax = *(eax);
    if (edx < eax) {
        eax = *((ebp + 8));
        *(eax) = 0xffffffff;
        *((ebp - 4)) = 1;
    } else {
        eax = *((ebp + 8));
        edx = *(eax);
        eax = *((ebp + 0xc));
        edx *= eax;
        eax = *((ebp + 8));
        *(eax) = edx;
        *((ebp - 4)) = 0;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058c5a */
#include <stdint.h>
 
int32_t bkm_scale_by_power (long arg_8h, char * arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_sp_4h;
    *((ebp - 4)) = 0;
    while (al != 0) {
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        eax = bkm_scale (eax, eax);
        *((ebp - 4)) |= eax;
        al = (*((ebp + 0x10)) != 0) ? 1 : 0;
        *((ebp + 0x10))--;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80590b8 */
#include <stdint.h>
 
int32_t dbg_bkm_scale (void) {
    int32_t var_24h;
    uint32_t var_20h;
    uint32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    uintmax_t * x;
    int32_t scale_factor;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* strtol_error bkm_scale(uintmax_t * x,int scale_factor); */
    eax = *((ebp + 0xc));
    edx = *((ebp + 0xc));
    edx >>= 0x1f;
    eax = _udivdi3 (ebx, esi, edi);
    *((ebp - 0x20)) = eax;
    *((ebp - 0x1c)) = edx;
    eax = *((ebp + 8));
    edx = *(eax);
    ecx = *((eax + 4));
    *((ebp - 0x18)) = edx;
    *((ebp - 0x14)) = ecx;
    ecx = *((ebp - 0x14));
    if (*((ebp - 0x1c)) <= ecx) {
        eax = *((ebp - 0x14));
        if (*((ebp - 0x1c)) >= eax) {
            edx = *((ebp - 0x18));
            if (*((ebp - 0x20)) >= edx) {
                goto label_0;
            }
        }
        eax = *((ebp + 8));
        *(eax) = 0xffffffff;
        *((eax + 4)) = 0xffffffff;
        *((ebp - 0x24)) = 1;
    } else {
label_0:
        eax = *((ebp + 8));
        ecx = *(eax);
        ebx = *((eax + 4));
        eax = *((ebp + 0xc));
        edx = *((ebp + 0xc));
        edx >>= 0x1f;
        esi = ebx;
        esi *= eax;
        edi = edx;
        edi *= ecx;
        esi += edi;
        edx:eax = eax * ecx;
        esi += edx;
        edx = esi;
        ecx = *((ebp + 8));
        *(ecx) = eax;
        *((ecx + 4)) = edx;
        *((ebp - 0x24)) = 0;
    }
    eax = *((ebp - 0x24));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8059166 */
#include <stdint.h>
 
int32_t dbg_bkm_scale_by_power (void) {
    strtol_error err;
    uintmax_t * x;
    int32_t base;
    int32_t power;
    char * var_sp_4h;
    /* strtol_error bkm_scale_by_power(uintmax_t * x,int base,int power); */
    *((ebp - 4)) = 0;
    while (al != 0) {
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = bkm_scale ();
        *((ebp - 4)) |= eax;
        al = (*((ebp + 0x10)) != 0) ? 1 : 0;
        *((ebp + 0x10))--;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8059634 */
#include <stdint.h>
 
int32_t dbg_is_infinitel (size_t arg_ch, size_t arg_10h) {
    int32_t var_bp_4h;
    long double x;
    int32_t var_4h;
    int32_t var_8h;
    /* int is_infinitel(long double x); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    *(esp) = eax;
    eax = rpl_isnanl (edx, ecx);
    if (eax == 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(fp_stack--) = fp_stack[?];
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        al = (eax == 0) ? 1 : 0;
        __asm ("setnp dl");
        eax &= edx;
        eax ^= 1;
        if (al != 0) {
            goto label_0;
        }
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = 0.0;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        if (al == 0) {
            goto label_1;
        }
        if (al == 0) {
            goto label_0;
        }
    }
label_1:
    *((ebp - 4)) = 1;
    goto label_2;
label_0:
    *((ebp - 4)) = 0;
label_2:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805cad5 */
#include <stdint.h>
 
int32_t dbg_xsum4 (void) {
    size_t size1;
    size_t size2;
    size_t size3;
    size_t size4;
    int32_t var_4h;
    /* size_t xsum4(size_t size1,size_t size2,size_t size3,size_t size4); */
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax = xsum (eax, eax);
    edx = eax;
    eax = *((ebp + 0x10));
    eax = xsum (edx, eax);
    edx = eax;
    eax = *((ebp + 0x14));
    xsum (edx, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805cb36 */
#include <stdint.h>
 
int32_t xsum (size_t arg_8h, size_t arg_ch) {
    int32_t var_14h;
    int32_t var_4h;
    edx = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax += edx;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    if (eax >= *((ebp + 8))) {
        eax = *((ebp - 4));
        *((ebp - 0x14)) = eax;
    } else {
        *((ebp - 0x14)) = 0xffffffff;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805cb11 */
#include <stdint.h>
 
int32_t dbg_xmax (void) {
    int32_t var_8h;
    uint32_t var_4h;
    size_t size1;
    size_t size2;
    /* size_t xmax(size_t size1,size_t size2); */
    eax = *((ebp + 0xc));
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    *((ebp - 4)) = eax;
    eax = *((ebp - 8));
    if (*((ebp - 4)) < eax) {
        eax = *((ebp - 8));
        *((ebp - 4)) = eax;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805dced */
#include <stdint.h>
 
int32_t dbg_xsum (void) {
    int32_t var_14h;
    size_t sum;
    size_t size1;
    size_t size2;
    /* size_t xsum(size_t size1,size_t size2); */
    edx = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax += edx;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    if (eax >= *((ebp + 8))) {
        eax = *((ebp - 4));
        *((ebp - 0x14)) = eax;
    } else {
        *((ebp - 0x14)) = 0xffffffff;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805575b */
#include <stdint.h>
 
int32_t dbg_quotearg_free (void) {
    uint32_t i;
    slotvec * sv;
    /* void quotearg_free(); */
    eax = slotvec;
    *((ebp - 4)) = eax;
    *((ebp - 8)) = 1;
    while (*((ebp - 8)) < eax) {
        eax = *((ebp - 8));
        eax <<= 3;
        eax += *((ebp - 4));
        eax = *((eax + 4));
        free (eax);
        *((ebp - 8))++;
        eax = nslots;
    }
    eax = *((ebp - 4));
    eax = *((eax + 4));
    if (eax != obj.slot0) {
        eax = *((ebp - 4));
        eax = *((eax + 4));
        free (eax);
        *(obj.slotvec0) = 0x100;
        *(obj.slot0) = 0x8064760;
    }
    if (*((ebp - 4)) != obj.slotvec0) {
        eax = *((ebp - 4));
        free (eax);
        *(obj.slotvec) = 0x80643d8;
    }
    *(obj.nslots) = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e310 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058788 */
#include <stdint.h>
 
int32_t dbg_rpl_vfprintf (FILE * arg_8h, char * arg_ch, char * arg_10h) {
    uint32_t var_800h;
    va_list args;
    char const * format;
    FILE * fp;
    int32_t saved_errno;
    size_t lenbuf;
    size_t len;
    char * output;
    char[2000] buf;
    uint32_t canary;
    size_t size;
    size_t nitems;
    FILE * stream;
    /* int rpl_vfprintf(FILE * fp,char const * format,va_list args); */
    eax = *((ebp + 8));
    *((ebp - 0x7f4)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x7f8)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x7fc)) = eax;
    eax = *(gs:0x14);
    *((ebp - 4)) = eax;
    eax = 0;
    *((ebp - 0x7e0)) = 0x7d0;
    eax = *((ebp - 0x7fc));
    eax = *((ebp - 0x7f8));
    eax = ebp - 0x7e0;
    eax = ebp - 0x7d4;
    eax = vasnprintf (eax, eax, eax);
    *((ebp - 0x7d8)) = eax;
    eax = *((ebp - 0x7e0));
    *((ebp - 0x7dc)) = eax;
    if (*((ebp - 0x7d8)) == 0) {
        eax = *((ebp - 0x7f4));
        *(esp) = eax;
        fseterr ();
        *((ebp - 0x800)) = 0xffffffff;
    } else {
        eax = *((ebp - 0x7f4));
        eax = *((ebp - 0x7dc));
        eax = *((ebp - 0x7d8));
        eax = fwrite (eax, 1, eax);
        if (eax < *((ebp - 0x7dc))) {
            eax = ebp - 0x7d4;
            if (*((ebp - 0x7d8)) != eax) {
                eax = errno_location ();
                eax = *(eax);
                *((ebp - 0x7e4)) = eax;
                eax = *((ebp - 0x7d8));
                free (eax);
                eax = errno_location ();
                edx = eax;
                eax = *((ebp - 0x7e4));
                *(edx) = eax;
            }
            *((ebp - 0x800)) = 0xffffffff;
        } else {
            eax = *((ebp - 0x7dc));
            if (eax < 0) {
                errno_location ();
                *(eax) = 0x4b;
                eax = *((ebp - 0x7f4));
                *(esp) = eax;
                fseterr ();
                *((ebp - 0x800)) = 0xffffffff;
            } else {
                edx = *((ebp - 0x7dc));
                *((ebp - 0x800)) = edx;
            }
        }
    }
    eax = *((ebp - 0x800));
    edx = *((ebp - 4));
    edx ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805285e */
#include <stdint.h>
 
int32_t dbg_hash_string (void) {
    int32_t var_18h;
    size_t value;
    unsigned char ch;
    char const * string;
    size_t n_buckets;
    /* size_t hash_string(char const * string,size_t n_buckets); */
    *((ebp - 8)) = 0;
    while (*((ebp - 1)) != 0) {
        edx = *((ebp - 8));
        eax = *((ebp - 8));
        eax <<= 5;
        ecx = eax;
        ecx -= edx;
        edx = ecx;
        eax = *((ebp - 1));
        edx += eax;
        *((ebp - 0x18)) = edx;
        eax = *((ebp - 0x18));
        edx = 0;
        eax = *(edx:eax) / ebp + 0xc;
        edx = *(edx:eax) % ebp + 0xc;
        *((ebp - 8)) = edx;
        *((ebp + 8))++;
        eax = *((ebp + 8));
        eax = *(eax);
        *((ebp - 1)) = al;
    }
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805221c */
#include <stdint.h>
 
int32_t dbg_filemodestring (void) {
    stat const * statp;
    char * str;
    char * bp;
    /* void filemodestring(stat const * statp,char * str); */
    eax = *((ebp + 8));
    edx = *((eax + 0x10));
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    *(esp) = edx;
    strmode ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052006 */
#include <stdint.h>
 
int32_t dbg_strmode (void) {
    int32_t var_48h;
    int32_t var_41h;
    int32_t var_40h;
    int32_t var_39h;
    int32_t var_38h;
    int32_t var_33h;
    int32_t var_32h;
    int32_t var_31h;
    int32_t var_30h;
    int32_t var_29h;
    int32_t var_28h;
    int32_t var_21h;
    int32_t var_20h;
    int32_t var_1bh;
    int32_t var_1ah;
    int32_t var_19h;
    int32_t var_18h;
    int32_t var_11h;
    int32_t var_10h;
    int32_t var_9h;
    int32_t var_8h;
    int32_t var_3h;
    int32_t var_2h;
    int32_t var_1h;
    mode_t mode;
    char * str;
    /* void strmode(mode_t mode,char * str); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = ftypelet ();
    edx = eax;
    eax = *((ebp + 0xc));
    *(eax) = dl;
    eax = *((ebp + 0xc));
    eax++;
    *((ebp - 0x48)) = eax;
    eax = *((ebp + 8));
    eax &= 0x100;
    if (eax != 0) {
        *((ebp - 0x41)) = 0x72;
    } else {
        *((ebp - 0x41)) = 0x2d;
    }
    eax = *((ebp - 0x41));
    edx = *((ebp - 0x48));
    *(edx) = al;
    eax = *((ebp + 0xc));
    eax += 2;
    *((ebp - 0x40)) = eax;
    eax = *((ebp + 8));
    eax &= 0x80;
    if (eax != 0) {
        *((ebp - 0x39)) = 0x77;
    } else {
        *((ebp - 0x39)) = 0x2d;
    }
    eax = *((ebp - 0x39));
    edx = *((ebp - 0x40));
    *(edx) = al;
    eax = *((ebp + 0xc));
    eax += 3;
    *((ebp - 0x38)) = eax;
    eax = *((ebp + 8));
    eax &= 0x800;
    if (eax != 0) {
        eax = *((ebp + 8));
        eax &= 0x40;
        if (eax != 0) {
            *((ebp - 0x32)) = 0x73;
        } else {
            *((ebp - 0x32)) = 0x53;
        }
        eax = *((ebp - 0x32));
        *((ebp - 0x33)) = al;
    } else {
        eax = *((ebp + 8));
        eax &= 0x40;
        if (eax != 0) {
            *((ebp - 0x31)) = 0x78;
        } else {
            *((ebp - 0x31)) = 0x2d;
        }
        edx = *((ebp - 0x31));
        *((ebp - 0x33)) = dl;
    }
    eax = *((ebp - 0x33));
    edx = *((ebp - 0x38));
    *(edx) = al;
    eax = *((ebp + 0xc));
    eax += 4;
    *((ebp - 0x30)) = eax;
    eax = *((ebp + 8));
    eax &= 0x20;
    if (eax != 0) {
        *((ebp - 0x29)) = 0x72;
    } else {
        *((ebp - 0x29)) = 0x2d;
    }
    eax = *((ebp - 0x29));
    edx = *((ebp - 0x30));
    *(edx) = al;
    eax = *((ebp + 0xc));
    eax += 5;
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 8));
    eax &= 0x10;
    if (eax != 0) {
        *((ebp - 0x21)) = 0x77;
    } else {
        *((ebp - 0x21)) = 0x2d;
    }
    eax = *((ebp - 0x21));
    edx = *((ebp - 0x28));
    *(edx) = al;
    eax = *((ebp + 0xc));
    eax += 6;
    *((ebp - 0x20)) = eax;
    eax = *((ebp + 8));
    eax &= 0x400;
    if (eax != 0) {
        eax = *((ebp + 8));
        eax &= 8;
        if (eax != 0) {
            *((ebp - 0x1a)) = 0x73;
        } else {
            *((ebp - 0x1a)) = 0x53;
        }
        eax = *((ebp - 0x1a));
        *((ebp - 0x1b)) = al;
    } else {
        eax = *((ebp + 8));
        eax &= 8;
        if (eax != 0) {
            *((ebp - 0x19)) = 0x78;
        } else {
            *((ebp - 0x19)) = 0x2d;
        }
        edx = *((ebp - 0x19));
        *((ebp - 0x1b)) = dl;
    }
    eax = *((ebp - 0x1b));
    edx = *((ebp - 0x20));
    *(edx) = al;
    eax = *((ebp + 0xc));
    eax += 7;
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 8));
    eax &= 4;
    if (eax != 0) {
        *((ebp - 0x11)) = 0x72;
    } else {
        *((ebp - 0x11)) = 0x2d;
    }
    eax = *((ebp - 0x11));
    edx = *((ebp - 0x18));
    *(edx) = al;
    eax = *((ebp + 0xc));
    eax += 8;
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 8));
    eax &= 2;
    if (eax != 0) {
        *((ebp - 9)) = 0x77;
    } else {
        *((ebp - 9)) = 0x2d;
    }
    eax = *((ebp - 9));
    edx = *((ebp - 0x10));
    *(edx) = al;
    eax = *((ebp + 0xc));
    eax += 9;
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    eax &= 0x200;
    if (eax != 0) {
        eax = *((ebp + 8));
        eax &= 1;
        if (al != 0) {
            *((ebp - 2)) = 0x74;
        } else {
            *((ebp - 2)) = 0x54;
        }
        eax = *((ebp - 2));
        *((ebp - 3)) = al;
    } else {
        eax = *((ebp + 8));
        eax &= 1;
        if (al != 0) {
            *((ebp - 1)) = 0x78;
        } else {
            *((ebp - 1)) = 0x2d;
        }
        edx = *((ebp - 1));
        *((ebp - 3)) = dl;
    }
    eax = *((ebp - 3));
    edx = *((ebp - 8));
    *(edx) = al;
    eax = *((ebp + 0xc));
    eax += 0xa;
    *(eax) = 0x20;
    eax = *((ebp + 0xc));
    eax += 0xb;
    *(eax) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80556d6 */
#include <stdint.h>
 
uint32_t dbg_quotearg_alloc (void) {
    char * buf;
    size_t bufsize;
    int32_t e;
    char const * arg;
    size_t argsize;
    quoting_options const * o;
    int32_t var_sp_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    /* char * quotearg_alloc(char const * arg,size_t argsize,quoting_options const * o); */
    eax = errno_location ();
    eax = *(eax);
    *((ebp - 4)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 8));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0;
    *(esp) = 0;
    eax = quotearg_buffer ();
    eax++;
    *((ebp - 8)) = eax;
    eax = *((ebp - 8));
    *(esp) = eax;
    eax = xcharalloc ();
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 8));
    *((esp + 8)) = eax;
    eax = *((ebp - 8));
    *((esp + 4)) = eax;
    eax = *((ebp - 0xc));
    *(esp) = eax;
    quotearg_buffer ();
    eax = errno_location ();
    edx = eax;
    eax = *((ebp - 4));
    *(edx) = eax;
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805cb64 */
#include <stdint.h>
 
int32_t dbg_rpl_isnanl (size_t arg_ch, size_t arg_10h) {
    int32_t var_1ch;
    memory_double m;
    int32_t var_14h;
    int32_t var_10h;
    uint32_t exponent;
    long double x;
    /* int rpl_isnanl(long double x); */
    eax = *((ebp + 8));
    edx = *((ebp + 0xc));
    ecx = *((ebp + 0x10));
    *((ebp - 0x18)) = eax;
    *((ebp - 0x14)) = edx;
    *((ebp - 0x10)) = ecx;
    eax = *((ebp - 0x10));
    eax &= 0x7fff;
    *((ebp - 0xc)) = eax;
    if (*((ebp - 0xc)) == 0) {
        eax = *((ebp - 0x14));
        eax >>= 0x1f;
        *((ebp - 0x1c)) = eax;
    } else {
        if (*((ebp - 0xc)) == 0x7fff) {
            eax = *((ebp - 0x14));
            edx = *((ebp - 0x14));
            edx ^= 0x80000000;
            eax = *((ebp - 0x18));
            eax |= edx;
            al = (eax != 0) ? 1 : 0;
            eax = (int32_t) al;
            *((ebp - 0x1c)) = eax;
        } else {
            eax = *((ebp - 0x14));
            eax >>= 0x1f;
            eax ^= 1;
            *((ebp - 0x1c)) = eax;
        }
    }
    eax = *((ebp - 0x1c));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805cbd0 */
#include <stdint.h>
 
int32_t dbg_printf_fetchargs (void) {
    uint32_t var_1ch;
    int32_t var_18h;
    argument * ap;
    size_t i;
    va_list args;
    arguments * a;
    /* int printf_fetchargs(va_list args,arguments * a); */
    *((ebp - 8)) = 0;
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    *((ebp - 0xc)) = eax;
    while (eax > *((ebp - 8))) {
        eax = *((ebp - 0xc));
        eax = *(eax);
        *((ebp - 0x1c)) = eax;
        if (*((ebp - 0x1c)) <= 0x16) {
            edx = *((ebp - 0x1c));
            eax = *((edx*4 + 0x8062204));
            /* switch table (23 cases) at 0x8062204 */
            void (*eax)() ();
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            eax = *(eax);
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = dl;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            eax = *(eax);
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = dl;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            eax = *(eax);
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = dx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            eax = *(eax);
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = dx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 8;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *((eax + 4));
            eax = *(eax);
            ecx = *((ebp - 0xc));
            *((ecx + 4)) = eax;
            *((ecx + 8)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 8;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *((eax + 4));
            eax = *(eax);
            ecx = *((ebp - 0xc));
            *((ecx + 4)) = eax;
            *((ecx + 8)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 8;
            *((ebp + 8)) = eax;
            eax = edx;
            *(fp_stack--) = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = fp_stack[0];
            fp_stack--;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 0xc;
            *((ebp + 8)) = eax;
            eax = edx;
            ecx = *((eax + 8));
            edx = *((eax + 4));
            eax = *(eax);
            ebx = *((ebp - 0xc));
            *((ebx + 4)) = eax;
            *((ebx + 8)) = edx;
            *((ebx + 0xc)) = ecx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            eax = *((ebp - 0xc));
            eax = *((eax + 4));
            if (eax != 0) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            *((eax + 4)) = "(NULL)";
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            eax = *((ebp - 0xc));
            eax = *((eax + 4));
            if (eax != 0) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            *((eax + 4)) = "(NULL)";
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            goto label_0;
            edx = *((ebp + 8));
            eax = edx + 4;
            *((ebp + 8)) = eax;
            eax = edx;
            edx = *(eax);
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
        } else {
            *((ebp - 0x18)) = 0xffffffff;
            goto label_1;
        }
label_0:
        *((ebp - 8))++;
        *((ebp - 0xc)) += 0x10;
        eax = *((ebp + 0xc));
        eax = *(eax);
    }
    *((ebp - 0x18)) = 0;
label_1:
    eax = *((ebp - 0x18));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051d0c */
#include <stdint.h>
 
int32_t dbg_argmatch_to_argument (void) {
    int32_t var_14h;
    size_t i;
    char const * value;
    char const * const * arglist;
    char const * vallist;
    size_t valsize;
    void * s2;
    size_t n;
    /* char const * argmatch_to_argument(char const * value,char const * const * arglist,char const * vallist,size_t valsize); */
    *((ebp - 4)) = 0;
    while (eax != 0) {
        eax = *((ebp + 0x14));
        eax *= *((ebp - 4));
        edx = eax;
        edx += *((ebp + 0x10));
        eax = *((ebp + 0x14));
        eax = *((ebp + 8));
        eax = memcmp (eax, edx, eax);
        if (eax == 0) {
            eax = *((ebp - 4));
            eax <<= 2;
            eax += *((ebp + 0xc));
            eax = *(eax);
            *((ebp - 0x14)) = eax;
            goto label_0;
        }
        *((ebp - 4))++;
        eax = *((ebp - 4));
        eax <<= 2;
        eax += *((ebp + 0xc));
        eax = *(eax);
    }
    *((ebp - 0x14)) = 0;
label_0:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805deb0 */
#include <stdint.h>
 
int32_t moddi3 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    int32_t var_50h;
    int32_t var_4ch;
    uint32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    uint32_t var_34h;
    uint32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    uint32_t var_20h;
    int32_t var_1ch;
    int32_t var_10h;
    int32_t var_ch;
    edx = *((ebp + 0x14));
    eax = *((ebp + 0x10));
    *((ebp - 0x30)) = 0;
    *((ebp - 0x4c)) = edx;
    edx = *((ebp + 0xc));
    *((ebp - 0x50)) = eax;
    edi = *((ebp - 0x4c));
    esi = *((ebp - 0x50));
    eax = *((ebp + 8));
    *((ebp - 0x3c)) = edi;
    *((ebp - 0x40)) = esi;
    if (edx < 0) {
        goto label_4;
    }
    ecx = *((ebp - 0x4c));
    if (ecx < 0) {
        goto label_5;
    }
label_0:
    ecx = *((ebp - 0x3c));
    edi = ebp - 0x10;
    esi = edx;
    *((ebp - 0x34)) = edi;
    edi = *((ebp - 0x40));
    *((ebp - 0x24)) = eax;
    *((ebp - 0x20)) = eax;
    *((ebp - 0x44)) = ecx;
    if (ecx != 0) {
        goto label_6;
    }
    if (edi <= edx) {
        goto label_7;
    }
    eax = edx:eax / edi;
    edx = edx:eax % edi;
    do {
        esi = *((ebp - 0x34));
        *(esi) = edx;
        *((esi + 4)) = 0;
        goto label_1;
label_6:
        if (*((ebp - 0x44)) <= edx) {
            goto label_8;
        }
        edi = *((ebp - 0x34));
        *(edi) = eax;
        *((edi + 4)) = edx;
label_1:
        eax = *((ebp - 0x30));
        if (eax != 0) {
            ebp - 0x10 = -ebp - 0x10;
            *((ebp - 0xc)) += 0;
            ebp - 0xc = -ebp - 0xc;
        }
        eax = *((ebp - 0x10));
        edx = *((ebp - 0xc));
        return eax;
label_7:
        if (edi == 0) {
            eax = 1;
            edx = 0;
            eax = edx:eax / edi;
            edx = edx:eax % edi;
            edi = eax;
        }
        eax = esi;
        edx = 0;
        eax = edx:eax / edi;
        edx = edx:eax % edi;
        eax = *((ebp - 0x20));
        eax = edx:eax / edi;
        edx = edx:eax % edi;
    } while (1);
label_4:
    ecx = *((ebp - 0x4c));
    eax = -eax;
    edx += 0;
    edx = -edx;
    *((ebp - 0x30)) = 0xffffffff;
    if (ecx >= 0) {
        goto label_0;
    }
label_5:
    esi = *((ebp - 0x50));
    edi = *((ebp - 0x4c));
    esi = -esi;
    edi += 0;
    edi = -edi;
    *((ebp - 0x40)) = esi;
    *((ebp - 0x3c)) = edi;
    goto label_0;
label_8:
    __asm ("bsr eax, dword [ebp - 0x44]");
    eax ^= 0x1f;
    *((ebp - 0x28)) = eax;
    if (edi == 0) {
        if (*((ebp - 0x44)) >= edx) {
            if (edi > *((ebp - 0x20))) {
                goto label_9;
            }
        }
        edx = *((ebp - 0x20));
        edx -= edi;
        esi -= *((ebp - 0x44));
        *((ebp - 0x20)) = edx;
label_9:
        ecx = *((ebp - 0x34));
        edi = *((ebp - 0x20));
        *((ecx + 4)) = esi;
        *(ecx) = edi;
        goto label_1;
    }
    edx = *((ebp - 0x44));
    eax = 0x20;
    ecx = *((ebp - 0x28));
    eax -= *((ebp - 0x28));
    edx <<= cl;
    *((ebp - 0x2c)) = eax;
    ecx = *((ebp - 0x2c));
    eax = edi;
    eax >>= cl;
    ecx = *((ebp - 0x28));
    eax |= edx;
    edx = esi;
    *((ebp - 0x1c)) = eax;
    eax = esi;
    esi = *((ebp - 0x24));
    edi <<= cl;
    ecx = *((ebp - 0x2c));
    eax >>= cl;
    ecx = *((ebp - 0x28));
    *((ebp - 0x44)) = eax;
    eax = *((ebp - 0x24));
    edx <<= cl;
    ecx = *((ebp - 0x2c));
    eax >>= cl;
    ecx = *((ebp - 0x28));
    eax |= edx;
    edx = *((ebp - 0x44));
    eax = *(edx:eax) / ebp - 0x1c;
    edx = *(edx:eax) % ebp - 0x1c;
    *((ebp - 0x44)) = edx;
    esi <<= cl;
    edx:eax = eax * edi;
    if (*((ebp - 0x44)) >= edx) {
        goto label_10;
    }
label_3:
    eax -= edi;
    edx -= *((ebp - 0x1c));
    do {
label_2:
        ecx = *((ebp - 0x44));
        esi -= eax;
        ecx -= edx;
        *((ebp - 0x44)) = ecx;
        ecx = *((ebp - 0x28));
        eax = esi;
        edx = *((ebp - 0x44));
        esi = *((ebp - 0x34));
        eax >>= cl;
        ecx = *((ebp - 0x2c));
        edx <<= cl;
        ecx = *((ebp - 0x28));
        eax |= edx;
        edx = *((ebp - 0x44));
        *(esi) = eax;
        edx >>= cl;
        *((esi + 4)) = edx;
        goto label_1;
label_10:
    } while (edx != 0);
    if (esi >= eax) {
        goto label_2;
    }
    goto label_3;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e4ac */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x805e4b8)(uint32_t) (ebx);
    ebx += 0x5b3c;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e400 */
#include <stdint.h>
 
int32_t fstat64 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    eax = *((ebp + 0xc));
    eax = _i686_get_pc_thunk_bx (ebx);
    ebx += 0x5be5;
    *(esp) = 3;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    fxstat64 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80499ec */
#include <stdint.h>
 
void fxstat64 (void) {
    fxstat64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805497c */
#include <stdint.h>
 
int32_t dbg_imaxtostr (int32_t arg_8h, char * arg_ch) {
    intmax_t i;
    uint32_t var_14h;
    char * p;
    char * buf;
    int32_t var_sp_4h;
    uint32_t var_8h;
    int32_t var_ch;
    /* char * imaxtostr(intmax_t i,char * buf); */
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0x10));
    eax += 0x14;
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    *(eax) = 0;
    if (*((ebp - 0x14)) >= 0) {
        goto label_0;
    }
    do {
        *((ebp - 4))--;
        eax = *((ebp - 0x18));
        edx = *((ebp - 0x14));
        eax = _moddi3 (0, edx, 0xa);
        edx = eax;
        eax = 0x30;
        al -= dl;
        edx = eax;
        eax = *((ebp - 4));
        *(eax) = dl;
        eax = *((ebp - 0x18));
        edx = *((ebp - 0x14));
        eax = _divdi3 (0, edx, 0xa);
        *((ebp - 0x18)) = eax;
        *((ebp - 0x14)) = edx;
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x14));
        eax |= edx;
    } while (eax != 0);
    *((ebp - 4))--;
    eax = *((ebp - 4));
    *(eax) = 0x2d;
    goto label_1;
    do {
label_0:
        *((ebp - 4))--;
        eax = *((ebp - 0x18));
        edx = *((ebp - 0x14));
        eax = _moddi3 (0, edx, 0xa);
        eax += 0x30;
        edx = eax;
        eax = *((ebp - 4));
        *(eax) = dl;
        eax = *((ebp - 0x18));
        edx = *((ebp - 0x14));
        eax = _divdi3 (0, edx, 0xa);
        *((ebp - 0x18)) = eax;
        *((ebp - 0x14)) = edx;
        edx = *((ebp - 0x18));
        eax = *((ebp - 0x14));
        eax |= edx;
    } while (eax != 0);
label_1:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052421 */
#include <stdint.h>
 
int32_t dbg_hash_get_max_bucket_length (void) {
    size_t bucket_length;
    hash_entry const * cursor;
    size_t max_bucket_length;
    hash_entry const * bucket;
    Hash_table const * table;
    /* size_t hash_get_max_bucket_length(Hash_table const * table); */
    *((ebp - 8)) = 0;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 4)) = eax;
    goto label_1;
label_0:
    eax = *((ebp - 4));
    eax = *(eax);
    if (eax == 0) {
        goto label_2;
    }
    eax = *((ebp - 4));
    *((ebp - 0xc)) = eax;
    *((ebp - 0x10)) = 1;
    while (*((ebp - 0xc)) != 0) {
        *((ebp - 0x10))++;
        eax = *((ebp - 0xc));
        eax = *((eax + 4));
        *((ebp - 0xc)) = eax;
    }
    eax = *((ebp - 0x10));
    if (eax > *((ebp - 8))) {
        eax = *((ebp - 0x10));
        *((ebp - 8)) = eax;
    }
label_2:
    *((ebp - 4)) += 8;
label_1:
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax > *((ebp - 4))) {
        goto label_0;
    }
    eax = *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054d6f */
#include <stdint.h>
 
int32_t dbg_mpsort (void) {
     const ** base;
    size_t n;
    comparison_function cmp;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void mpsort( const ** base,size_t n,comparison_function cmp); */
    eax = *((ebp + 0xc));
    eax <<= 2;
    edx = eax;
    edx += *((ebp + 8));
    eax = *((ebp + 0x10));
    *((esp + 0xc)) = eax;
    *((esp + 8)) = edx;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    mpsort_with_tmp (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052485 */
#include <stdint.h>
 
int32_t dbg_hash_table_ok (void) {
    int32_t var_11h;
    hash_entry const * cursor;
    size_t n_entries;
    size_t n_buckets_used;
    hash_entry const * bucket;
    Hash_table const * table;
    /* _Bool hash_table_ok(Hash_table const * table); */
    *((ebp - 8)) = 0;
    *((ebp - 0xc)) = 0;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 4)) = eax;
    goto label_1;
label_0:
    eax = *((ebp - 4));
    eax = *(eax);
    if (eax == 0) {
        goto label_2;
    }
    eax = *((ebp - 4));
    *((ebp - 0x10)) = eax;
    *((ebp - 8))++;
    *((ebp - 0xc))++;
    while (*((ebp - 0x10)) != 0) {
        *((ebp - 0xc))++;
        eax = *((ebp - 0x10));
        eax = *((eax + 4));
        *((ebp - 0x10)) = eax;
    }
label_2:
    *((ebp - 4)) += 8;
label_1:
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax > *((ebp - 4))) {
        goto label_0;
    }
    eax = *((ebp + 8));
    eax = *((eax + 0xc));
    if (eax == *((ebp - 8))) {
        eax = *((ebp + 8));
        eax = *((eax + 0x10));
        if (eax == *((ebp - 0xc))) {
            *((ebp - 0x11)) = 1;
        }
    } else {
        *((ebp - 0x11)) = 0;
    }
    eax = *((ebp - 0x11));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8055ada */
#include <stdint.h>
 
int32_t dbg_quotearg_style (void) {
    quoting_style s;
    char const * arg;
    int32_t var_4h;
    int32_t var_8h;
    /* char * quotearg_style(quoting_style s,char const * arg); */
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = 0;
    quotearg_n_style ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054851 */
#include <stdint.h>
 
int32_t dbg_getgidbyname (void) {
    void * var_14h;
    group * grent;
    userid * tail;
    char const * group;
    char * src;
    /* gid_t * getgidbyname(char const * group); */
    eax = group_alist;
    *((ebp - 4)) = eax;
    while (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
        edx = *((eax + 8));
        eax = *((ebp + 8));
        eax = *(eax);
        if (dl == al) {
            eax = *((ebp - 4));
            edx = eax + 8;
            eax = *((ebp + 8));
            eax = strcmp (edx, eax);
            if (eax != 0) {
                goto label_0;
            }
            eax = *((ebp - 4));
            *((ebp - 0x14)) = eax;
            goto label_1;
        }
label_0:
        eax = *((ebp - 4));
        eax = *((eax + 4));
        *((ebp - 4)) = eax;
    }
    eax = nogroup_alist;
    *((ebp - 4)) = eax;
    while (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
        edx = *((eax + 8));
        eax = *((ebp + 8));
        eax = *(eax);
        if (dl == al) {
            eax = *((ebp - 4));
            edx = eax + 8;
            eax = *((ebp + 8));
            eax = strcmp (edx, eax);
            if (eax != 0) {
                goto label_2;
            }
            *((ebp - 0x14)) = 0;
            goto label_1;
        }
label_2:
        eax = *((ebp - 4));
        eax = *((eax + 4));
        *((ebp - 4)) = eax;
    }
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = getgrnam ();
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    eax = strlen (eax);
    eax += 9;
    *(esp) = eax;
    eax = xmalloc ();
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    edx = eax + 8;
    eax = *((ebp + 8));
    strcpy (edx, eax);
    if (*((ebp - 8)) != 0) {
        eax = *((ebp - 8));
        edx = *((eax + 8));
        eax = *((ebp - 4));
        *(eax) = edx;
        edx = group_alist;
        eax = *((ebp - 4));
        *((eax + 4)) = edx;
        eax = *((ebp - 4));
        *(obj.group_alist) = eax;
        eax = *((ebp - 4));
        *((ebp - 0x14)) = eax;
    } else {
        eax = nogroup_alist;
        edx = *((ebp - 4));
        *((edx + 4)) = eax;
        eax = *((ebp - 4));
        *(obj.nogroup_alist) = eax;
        *((ebp - 0x14)) = 0;
    }
label_1:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051e80 */
#include <stdint.h>
 
int32_t dbg_close_stdout_set_file_name (void) {
    char const * file;
    /* void close_stdout_set_file_name(char const * file); */
    eax = *((ebp + 8));
    *(obj.file_name) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e380 */
#include <stdint.h>
 
int32_t atexit (int32_t arg_8h) {
    int32_t var_4h;
    int32_t var_8h;
    eax = 0;
    _i686_get_pc_thunk_bx (ebx);
    ebx += 0x5c69;
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
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804952c */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80586bb */
#include <stdint.h>
 
int32_t dbg_nstrftime (void) {
    char * s;
    size_t maxsize;
    char const * format;
    tm const * tp;
    int32_t ut;
    int32_t ns;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    /* size_t nstrftime(char * s,size_t maxsize,char const * format,tm const * tp,int ut,int ns); */
    eax = *((ebp + 0x1c));
    *((esp + 0x18)) = eax;
    eax = *((ebp + 0x18));
    *((esp + 0x14)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x10));
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    strftime_case_ (eax, eax, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051e43 */
#include <stdint.h>
 
int32_t dbg_base_len (void) {
    size_t prefix_len;
    size_t len;
    char const * name;
    /* size_t base_len(char const * name); */
    *((ebp - 8)) = 0;
    eax = *((ebp + 8));
    eax = strlen (eax);
    *((ebp - 4)) = eax;
    while (al == 0x2f) {
        *((ebp - 4))--;
        if (*((ebp - 4)) <= 1) {
            goto label_0;
        }
        eax = *((ebp - 4));
        eax--;
        eax += *((ebp + 8));
        eax = *(eax);
    }
label_0:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805457c */
#include <stdint.h>
 
int32_t dbg_getuser (void) {
    int32_t var_18h;
    int32_t var_14h;
    char const * name;
    passwd * pwent;
    userid * match;
    userid * tail;
    uid_t uid;
    char * src;
    /* char * getuser(uid_t uid); */
    *((ebp - 8)) = 0;
    eax = user_alist;
    *((ebp - 4)) = eax;
    while (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
        eax = *(eax);
        if (eax == *((ebp + 8))) {
            eax = *((ebp - 4));
            *((ebp - 8)) = eax;
        } else {
            eax = *((ebp - 4));
            eax = *((eax + 4));
            *((ebp - 4)) = eax;
        }
    }
    if (*((ebp - 8)) == 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = getpwuid ();
        *((ebp - 0xc)) = eax;
        if (*((ebp - 0xc)) != 0) {
            eax = *((ebp - 0xc));
            eax = *(eax);
            *((ebp - 0x18)) = eax;
        } else {
            *((ebp - 0x18)) = 0x80619ac;
        }
        eax = *((ebp - 0x18));
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0x10));
        eax = strlen (eax);
        eax += 9;
        *(esp) = eax;
        eax = xmalloc ();
        *((ebp - 8)) = eax;
        edx = *((ebp - 8));
        eax = *((ebp + 8));
        *(edx) = eax;
        eax = *((ebp - 8));
        edx = eax + 8;
        eax = *((ebp - 0x10));
        strcpy (edx, eax);
        edx = user_alist;
        eax = *((ebp - 8));
        *((eax + 4)) = edx;
        eax = *((ebp - 8));
        *(obj.user_alist) = eax;
    }
    eax = *((ebp - 8));
    eax = *((eax + 8));
    if (al != 0) {
        eax = *((ebp - 8));
        eax += 8;
        *((ebp - 0x14)) = eax;
    } else {
        *((ebp - 0x14)) = 0;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805240b */
#include <stdint.h>
 
int32_t dbg_hash_get_n_buckets_used (void) {
    Hash_table const * table;
    /* size_t hash_get_n_buckets_used(Hash_table const * table); */
    eax = *((ebp + 8));
    eax = *((eax + 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058a3c */
#include <stdint.h>
 
int32_t dbg_x2realloc (void) {
    void * p;
    size_t * pn;
    int32_t var_4h;
    int32_t var_8h;
    /* void * x2realloc(void * p,size_t * pn); */
    *((esp + 8)) = 1;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    x2nrealloc ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058953 */
#include <stdint.h>
 
int32_t dbg_x2nrealloc (void) {
    size_t n;
    void * p;
    size_t * pn;
    size_t s;
    int32_t var_sp_4h;
    /* void * x2nrealloc(void * p,size_t * pn,size_t s); */
    eax = *((ebp + 0xc));
    eax = *(eax);
    *((ebp - 4)) = eax;
    if (*((ebp + 8)) == 0) {
        if (*((ebp - 4)) != 0) {
            goto label_0;
        }
        eax = 0x40;
        edx = 0;
        eax = *(edx:eax) / ebp + 0x10;
        edx = *(edx:eax) % ebp + 0x10;
        *((ebp - 4)) = eax;
        al = (*((ebp - 4)) == 0) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 4)) += eax;
    } else {
        eax = 0xaaaaaaaa;
        edx = 0;
        eax = *(edx:eax) / ebp + 0x10;
        edx = *(edx:eax) % ebp + 0x10;
        if (eax <= *((ebp - 4))) {
            xalloc_die ();
        }
        eax = *((ebp - 4));
        eax++;
        eax >>= 1;
        *((ebp - 4)) += eax;
    }
label_0:
    edx = *((ebp + 0xc));
    eax = *((ebp - 4));
    *(edx) = eax;
    eax = *((ebp - 4));
    eax *= *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    xrealloc ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80526c6 */
#include <stdint.h>
 
int32_t dbg_hash_get_next (void) {
    int32_t var_18h;
    hash_entry const * cursor;
    hash_entry const * bucket;
    Hash_table const * table;
     const * entry;
    int32_t var_4h;
    /* void * hash_get_next(Hash_table const * table, const * entry); */
    eax = *((ebp + 8));
    ebx = *(eax);
    eax = *((ebp + 8));
    edx = *((eax + 0x18));
    eax = *((ebp + 8));
    eax = *((eax + 8));
    eax = *((ebp + 0xc));
    eax = void (*edx)(uint32_t, uint32_t) (ebx, eax);
    eax <<= 3;
    eax = ebx + eax;
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax <= *((ebp - 8))) {
        abort ();
    }
    eax = *((ebp - 8));
    *((ebp - 0xc)) = eax;
    while (*((ebp - 0xc)) != 0) {
        eax = *((ebp - 0xc));
        eax = *(eax);
        if (eax == *((ebp + 0xc))) {
            eax = *((ebp - 0xc));
            eax = *((eax + 4));
            if (eax == 0) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            eax = *((eax + 4));
            eax = *(eax);
            *((ebp - 0x18)) = eax;
            goto label_1;
        }
label_0:
        eax = *((ebp - 0xc));
        eax = *((eax + 4));
        *((ebp - 0xc)) = eax;
    }
    while (*((ebp - 8)) < eax) {
        eax = *((ebp - 8));
        eax = *(eax);
        if (eax != 0) {
            eax = *((ebp - 8));
            eax = *(eax);
            *((ebp - 0x18)) = eax;
            goto label_1;
        }
        *((ebp - 8)) += 8;
        eax = *((ebp + 8));
        eax = *((eax + 4));
    }
    *((ebp - 0x18)) = 0;
label_1:
    eax = *((ebp - 0x18));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052254 */
#include <stdint.h>
 
int32_t dbg_mfile_name_concat (void) {
    int32_t var_28h;
    void * var_24h;
    char * p;
    char * p_concat;
    size_t baselen;
    char const * base;
    size_t needs_separator;
    size_t dirlen;
    size_t dirbaselen;
    char const * dirbase;
    char const * dir;
    char const * abase;
    char ** base_in_result;
    char * var_sp_4h;
    size_t var_sp_8h;
    /* char * mfile_name_concat(char const * dir,char const * abase,char ** base_in_result); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = last_component ();
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    *(esp) = eax;
    eax = base_len ();
    *((ebp - 8)) = eax;
    edx = *((ebp - 4));
    eax = *((ebp + 8));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    eax += *((ebp - 8));
    *((ebp - 0xc)) = eax;
    if (*((ebp - 8)) != 0) {
        eax = *((ebp - 8));
        eax--;
        eax += *((ebp - 4));
        eax = *(eax);
        if (al != 0x2f) {
            *((ebp - 0x28)) = 1;
        }
    } else {
        *((ebp - 0x28)) = 0;
    }
    eax = *((ebp - 0x28));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = longest_relative_suffix ();
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x14));
    eax = strlen (eax);
    *((ebp - 0x18)) = eax;
    edx = *((ebp - 0x10));
    eax = *((ebp - 0xc));
    eax += edx;
    eax += *((ebp - 0x18));
    eax++;
    eax = malloc (eax);
    *((ebp - 0x1c)) = eax;
    if (*((ebp - 0x1c)) == 0) {
        *((ebp - 0x24)) = 0;
    } else {
        eax = *((ebp - 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x1c));
        *(esp) = eax;
        eax = mempcpy ();
        *((ebp - 0x20)) = eax;
        eax = *((ebp - 0x20));
        *(eax) = 0x2f;
        eax = *((ebp - 0x10));
        *((ebp - 0x20)) += eax;
        if (*((ebp + 0x10)) != 0) {
            eax = *((ebp + 0xc));
            eax = *(eax);
            al = (al == 0x2f) ? 1 : 0;
            eax = (int32_t) al;
            eax = -eax;
            edx = eax;
            edx += *((ebp - 0x20));
            eax = *((ebp + 0x10));
            *(eax) = edx;
        }
        eax = *((ebp - 0x18));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x20));
        *(esp) = eax;
        eax = mempcpy ();
        *((ebp - 0x20)) = eax;
        eax = *((ebp - 0x20));
        *(eax) = 0;
        ecx = *((ebp - 0x1c));
        *((ebp - 0x24)) = ecx;
    }
    eax = *((ebp - 0x24));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80527e6 */
#include <stdint.h>
 
int32_t dbg_hash_do_for_each (void) {
    int32_t var_14h;
    hash_entry const * cursor;
    hash_entry const * bucket;
    size_t counter;
    Hash_table const * table;
    Hash_processor processor;
    void * processor_data;
    int32_t var_sp_4h;
    /* size_t hash_do_for_each(Hash_table const * table,Hash_processor processor,void * processor_data); */
    *((ebp - 4)) = 0;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 8)) = eax;
    goto label_1;
label_0:
    eax = *((ebp - 8));
    eax = *(eax);
    if (eax == 0) {
        goto label_2;
    }
    eax = *((ebp - 8));
    *((ebp - 0xc)) = eax;
    while (*((ebp - 0xc)) != 0) {
        eax = *((ebp - 0xc));
        edx = *(eax);
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = void (*eax)(uint32_t, uint32_t) (edx, eax);
        eax ^= 1;
        if (al != 0) {
            eax = *((ebp - 4));
            *((ebp - 0x14)) = eax;
            goto label_3;
        }
        *((ebp - 4))++;
        eax = *((ebp - 0xc));
        eax = *((eax + 4));
        *((ebp - 0xc)) = eax;
    }
label_2:
    *((ebp - 8)) += 8;
label_1:
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax > *((ebp - 8))) {
        goto label_0;
    }
    eax = *((ebp - 4));
    *((ebp - 0x14)) = eax;
label_3:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805236d */
#include <stdint.h>
 
int32_t dbg_file_name_concat (void) {
    char * p;
    char const * dir;
    char const * abase;
    char ** base_in_result;
    int32_t var_4h;
    int32_t var_8h;
    /* char * file_name_concat(char const * dir,char const * abase,char ** base_in_result); */
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = mfile_name_concat ();
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        xalloc_die ();
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051ba8 */
#include <stdint.h>
 
uint32_t dbg_argmatch_valid (void) {
    char const * last_val;
    size_t i;
    char const * const * arglist;
    char const * vallist;
    size_t valsize;
    char * format;
    size_t n;
    /* void argmatch_valid(char const * const * arglist,char const * vallist,size_t valsize); */
    *((ebp - 8)) = 0;
    *(esp) = "Valid arguments are:";
    eax = gettext ();
    edx = stderr;
    fprintf (edx, eax);
    *((ebp - 4)) = 0;
    while (eax != 0) {
        if (*((ebp - 4)) != 0) {
            eax = *((ebp + 0x10));
            eax *= *((ebp - 4));
            edx = eax;
            edx += *((ebp + 0xc));
            eax = *((ebp + 0x10));
            eax = *((ebp - 8));
            eax = memcmp (eax, edx, eax);
            if (eax == 0) {
                goto label_0;
            }
        }
        eax = *((ebp - 4));
        eax <<= 2;
        eax += *((ebp + 8));
        eax = *(eax);
        edx = stderr;
        *((esp + 8)) = eax;
        fprintf (edx, "\n  - `%s');
        eax = *((ebp + 0x10));
        eax *= *((ebp - 4));
        eax += *((ebp + 0xc));
        *((ebp - 8)) = eax;
        goto label_1;
label_0:
        eax = *((ebp - 4));
        eax <<= 2;
        eax += *((ebp + 8));
        eax = *(eax);
        edx = stderr;
        *((esp + 8)) = eax;
        fprintf (edx, ", `%s');
label_1:
        *((ebp - 4))++;
        eax = *((ebp - 4));
        eax <<= 2;
        eax += *((ebp + 8));
        eax = *(eax);
    }
    eax = stderr;
    *((esp + 4)) = eax;
    *(esp) = 0xa;
    putc_unlocked ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805e320 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x5cc9;
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
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052941 */
#include <stdint.h>
 
int32_t dbg_hash_reset_tuning (void) {
    Hash_tuning * tuning;
    /* void hash_reset_tuning(Hash_tuning * tuning); */
    edx = *((ebp + 8));
    eax = 0;
    *(edx) = eax;
    edx = *((ebp + 8));
    eax = 0x3f800000;
    *((edx + 4)) = eax;
    edx = *((ebp + 8));
    eax = 0x3f4ccccd;
    *((edx + 8)) = eax;
    edx = *((ebp + 8));
    eax = 0x3fb4fdf4;
    *((edx + 0xc)) = eax;
    eax = *((ebp + 8));
    *((eax + 0x10)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052677 */
#include <stdint.h>
 
int32_t dbg_hash_get_first (void) {
    int32_t var_14h;
    hash_entry const * bucket;
    Hash_table const * table;
    /* void * hash_get_first(Hash_table const * table); */
    eax = *((ebp + 8));
    eax = *((eax + 0x10));
    if (eax == 0) {
        *((ebp - 0x14)) = 0;
        goto label_0;
    }
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 4)) = eax;
    do {
        eax = *((ebp + 8));
        eax = *((eax + 4));
        if (eax <= *((ebp - 4))) {
            abort ();
        }
        eax = *((ebp - 4));
        eax = *(eax);
        if (eax != 0) {
            eax = *((ebp - 4));
            eax = *(eax);
            *((ebp - 0x14)) = eax;
        } else {
            *((ebp - 4)) += 8;
        } while (1);
    }
label_0:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052a2a */
#include <stdint.h>
 
uint32_t dbg_hash_initialize (void) {
    void ** var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_12h;
    float new_candidate;
    Hash_table * table;
    size_t candidate;
    Hash_tuning const * tuning;
    Hash_hasher hasher;
    Hash_comparator comparator;
    Hash_data_freer data_freer;
    int32_t var_8h;
    size_t size;
    /* Hash_table * hash_initialize(size_t candidate,Hash_tuning const * tuning,Hash_hasher hasher,Hash_comparator comparator,Hash_data_freer data_freer); */
    if (*((ebp + 0x10)) != 0) {
        if (*((ebp + 0x14)) != 0) {
            goto label_0;
        }
    }
    *((ebp - 0x24)) = 0;
    goto label_1;
label_0:
    eax = malloc (0x28);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        *((ebp - 0x24)) = 0;
    } else {
        if (*((ebp + 0xc)) == 0) {
            *((ebp + 0xc)) = obj.default_tuning;
        }
        edx = *((ebp - 4));
        eax = *((ebp + 0xc));
        *((edx + 0x14)) = eax;
        eax = *((ebp - 4));
        *(esp) = eax;
        eax = check_tuning ();
        eax ^= 1;
        if (al == 0) {
            eax = *((ebp + 0xc));
            eax = *((eax + 0x10));
            eax ^= 1;
            if (al != 0) {
                eax = *((ebp + 8));
                edx = 0;
                *(fp_stack--) = *(esp);
                esp = esp + 8;
                eax = *((ebp + 0xc));
                *(fp_stack--) = *((eax + 8));
                fp_stack[0] /= fp_stack[1];
                fp_stack++;
                *((ebp - 8)) = fp_stack[0];
                fp_stack--;
                *(fp_stack--) = *((ebp - 8));
                *(fp_stack--) = *(0x80618e8);
                fp_tmp_0 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_0;
                fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                ax = fp_status;
                __asm ("sahf");
                if (al >= 0) {
                    goto label_2;
                }
                *(fp_stack--) = *((ebp - 8));
                eax = *((ebp - 0x12));
                ah = 0xc;
                *((ebp - 0x14)) = ax;
                *((ebp - 0x20)) = fp_stack[0];
                fp_stack--;
                eax = *((ebp - 0x20));
                edx = *((ebp - 0x1c));
                *((ebp + 8)) = eax;
            }
            if (*((ebp + 8)) <= 0x1fffffff) {
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = next_prime ();
                edx = eax;
                eax = *((ebp - 4));
                *((eax + 8)) = edx;
                eax = *((ebp - 4));
                eax = *((eax + 8));
                if (eax > 0x1fffffff) {
                    goto label_2;
                }
                eax = *((ebp - 4));
                eax = *((eax + 8));
                eax = calloc (eax, 8);
                edx = eax;
                eax = *((ebp - 4));
                *(eax) = edx;
                eax = *((ebp - 4));
                eax = *(eax);
                if (eax == 0) {
                    goto label_2;
                }
                eax = *((ebp - 4));
                edx = *(eax);
                eax = *((ebp - 4));
                eax = *((eax + 8));
                eax <<= 3;
                edx += eax;
                eax = *((ebp - 4));
                *((eax + 4)) = edx;
                eax = *((ebp - 4));
                *((eax + 0xc)) = 0;
                eax = *((ebp - 4));
                *((eax + 0x10)) = 0;
                edx = *((ebp - 4));
                eax = *((ebp + 0x10));
                *((edx + 0x18)) = eax;
                edx = *((ebp - 4));
                eax = *((ebp + 0x14));
                *((edx + 0x1c)) = eax;
                edx = *((ebp - 4));
                eax = *((ebp + 0x18));
                *((edx + 0x20)) = eax;
                eax = *((ebp - 4));
                *((eax + 0x24)) = 0;
                eax = *((ebp - 4));
                *((ebp - 0x24)) = eax;
            }
        } else {
label_2:
            eax = *((ebp - 4));
            free (eax);
            *((ebp - 0x24)) = 0;
        }
    }
label_1:
    eax = *((ebp - 0x24));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052bb8 */
#include <stdint.h>
 
int32_t dbg_hash_clear (void) {
    hash_entry * next;
    hash_entry * cursor;
    hash_entry * bucket;
    Hash_table * table;
    /* void hash_clear(Hash_table * table); */
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 4)) = eax;
    goto label_1;
label_0:
    eax = *((ebp - 4));
    eax = *(eax);
    if (eax == 0) {
        goto label_2;
    }
    eax = *((ebp - 4));
    eax = *((eax + 4));
    *((ebp - 8)) = eax;
    while (*((ebp - 8)) != 0) {
        eax = *((ebp + 8));
        eax = *((eax + 0x20));
        if (eax != 0) {
            eax = *((ebp + 8));
            edx = *((eax + 0x20));
            eax = *((ebp - 8));
            eax = *(eax);
            void (*edx)(uint32_t) (eax);
        }
        eax = *((ebp - 8));
        *(eax) = 0;
        eax = *((ebp - 8));
        eax = *((eax + 4));
        *((ebp - 0xc)) = eax;
        eax = *((ebp + 8));
        edx = *((eax + 0x24));
        eax = *((ebp - 8));
        *((eax + 4)) = edx;
        edx = *((ebp + 8));
        eax = *((ebp - 8));
        *((edx + 0x24)) = eax;
        eax = *((ebp - 0xc));
        *((ebp - 8)) = eax;
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x20));
    if (eax != 0) {
        eax = *((ebp + 8));
        edx = *((eax + 0x20));
        eax = *((ebp - 4));
        eax = *(eax);
        void (*edx)(uint32_t) (eax);
    }
    eax = *((ebp - 4));
    *(eax) = 0;
    eax = *((ebp - 4));
    *((eax + 4)) = 0;
label_2:
    *((ebp - 4)) += 8;
label_1:
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax > *((ebp - 4))) {
        goto label_0;
    }
    eax = *((ebp + 8));
    *((eax + 0xc)) = 0;
    eax = *((ebp + 8));
    *((eax + 0x10)) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052f2d */
#include <stdint.h>
 
int32_t dbg_hash_rehash (void) {
    int32_t var_25h;
    hash_entry * new_entry;
    hash_entry * new_bucket;
    void * data;
    hash_entry * next;
    hash_entry * cursor;
    hash_entry * bucket;
    Hash_table * new_table;
    Hash_table * table;
    size_t candidate;
    uint32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    /* _Bool hash_rehash(Hash_table * table,size_t candidate); */
    eax = *((ebp + 8));
    ecx = *((eax + 0x20));
    eax = *((ebp + 8));
    ebx = *((eax + 0x1c));
    eax = *((ebp + 8));
    edx = *((eax + 0x18));
    eax = *((ebp + 8));
    eax = *((eax + 0x14));
    *((esp + 0x10)) = ecx;
    *((esp + 0xc)) = ebx;
    *((esp + 8)) = edx;
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = hash_initialize ();
    *((ebp - 8)) = eax;
    if (*((ebp - 8)) == 0) {
        *((ebp - 0x25)) = 0;
        goto label_1;
    }
    eax = *((ebp + 8));
    edx = *((eax + 0x24));
    eax = *((ebp - 8));
    *((eax + 0x24)) = edx;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 0xc)) = eax;
    goto label_2;
label_0:
    eax = *((ebp - 0xc));
    eax = *(eax);
    if (eax == 0) {
        goto label_3;
    }
    eax = *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) != 0) {
        eax = *((ebp - 0x10));
        eax = *(eax);
        *((ebp - 0x18)) = eax;
        eax = *((ebp - 8));
        ebx = *(eax);
        eax = *((ebp - 8));
        edx = *((eax + 0x18));
        eax = *((ebp - 8));
        eax = *((eax + 8));
        eax = *((ebp - 0x18));
        eax = void (*edx)(uint32_t, uint32_t) (eax, eax);
        eax <<= 3;
        eax = ebx + eax;
        *((ebp - 0x1c)) = eax;
        eax = *((ebp - 8));
        eax = *((eax + 4));
        if (eax <= *((ebp - 0x1c))) {
            abort ();
        }
        eax = *((ebp - 0x10));
        eax = *((eax + 4));
        *((ebp - 0x14)) = eax;
        eax = *((ebp - 0x1c));
        eax = *(eax);
        if (eax != 0) {
            eax = *((ebp - 0x10));
            if (eax == *((ebp - 0xc))) {
                eax = *((ebp - 8));
                *(esp) = eax;
                eax = allocate_entry ();
                *((ebp - 0x20)) = eax;
                if (*((ebp - 0x20)) == 0) {
                    *((ebp - 0x25)) = 0;
                    goto label_1;
                }
                edx = *((ebp - 0x20));
                eax = *((ebp - 0x18));
                *(edx) = eax;
                eax = *((ebp - 0x1c));
                edx = *((eax + 4));
                eax = *((ebp - 0x20));
                *((eax + 4)) = edx;
                edx = *((ebp - 0x1c));
                eax = *((ebp - 0x20));
                *((edx + 4)) = eax;
                eax = *((ebp - 0x1c));
                edx = *((eax + 4));
                eax = *((ebp - 0x10));
                *((eax + 4)) = edx;
                edx = *((ebp - 0x1c));
                eax = *((ebp - 0x10));
                *((edx + 4)) = eax;
            } else {
            } else {
                edx = *((ebp - 0x1c));
                eax = *((ebp - 0x18));
                *(edx) = eax;
                eax = *((ebp - 8));
                eax = *((eax + 0xc));
                edx = eax + 1;
                eax = *((ebp - 8));
                *((eax + 0xc)) = edx;
                eax = *((ebp - 0x10));
            }
        }
        if (eax == *((ebp - 0xc))) {
            goto label_4;
        }
        eax = *((ebp - 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp - 8));
        *(esp) = eax;
        free_entry ();
label_4:
        eax = *((ebp - 0x14));
        *((ebp - 0x10)) = eax;
    }
label_3:
    *((ebp - 0xc)) += 8;
label_2:
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax > *((ebp - 0xc))) {
        goto label_0;
    }
    eax = *((ebp + 8));
    eax = *(eax);
    free (eax);
    eax = *((ebp - 8));
    edx = *(eax);
    eax = *((ebp + 8));
    *(eax) = edx;
    eax = *((ebp - 8));
    edx = *((eax + 4));
    eax = *((ebp + 8));
    *((eax + 4)) = edx;
    eax = *((ebp - 8));
    edx = *((eax + 8));
    eax = *((ebp + 8));
    *((eax + 8)) = edx;
    eax = *((ebp - 8));
    edx = *((eax + 0xc));
    eax = *((ebp + 8));
    *((eax + 0xc)) = edx;
    eax = *((ebp - 8));
    edx = *((eax + 0x24));
    eax = *((ebp + 8));
    *((eax + 0x24)) = edx;
    eax = *((ebp - 8));
    free (eax);
    *((ebp - 0x25)) = 1;
label_1:
    eax = *((ebp - 0x25));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052400 */
#include <stdint.h>
 
int32_t dbg_hash_get_n_buckets (void) {
    Hash_table const * table;
    /* size_t hash_get_n_buckets(Hash_table const * table); */
    eax = *((ebp + 8));
    eax = *((eax + 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8053109 */
#include <stdint.h>
 
uint32_t dbg_hash_insert (void) {
    uint32_t var_38h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_24h;
    int32_t var_22h;
    float candidate;
    Hash_tuning const * tuning;
    hash_entry * new_entry;
    hash_entry * bucket;
    void * data;
    Hash_table * table;
     const * entry;
    int32_t var_4h_2;
    uint32_t var_4h;
    int32_t var_sp_8h;
    int32_t var_ch;
    /* void * hash_insert(Hash_table * table, const * entry); */
    if (*((ebp + 0xc)) == 0) {
        abort ();
    }
    *((esp + 0xc)) = 0;
    eax = ebp - 8;
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    eax = hash_find_entry (eax);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
        *((ebp - 0x38)) = eax;
    } else {
        eax = *((ebp - 8));
        eax = *(eax);
        if (eax != 0) {
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = allocate_entry ();
            *((ebp - 0xc)) = eax;
            if (*((ebp - 0xc)) == 0) {
                *((ebp - 0x38)) = 0;
            } else {
                edx = *((ebp - 0xc));
            }
            eax = *((ebp + 0xc));
            *(edx) = eax;
            eax = *((ebp - 8));
            edx = *((eax + 4));
            eax = *((ebp - 0xc));
            *((eax + 4)) = edx;
            edx = *((ebp - 8));
            eax = *((ebp - 0xc));
            *((edx + 4)) = eax;
            eax = *((ebp + 8));
            eax = *((eax + 0x10));
            edx = eax + 1;
            eax = *((ebp + 8));
            *((eax + 0x10)) = edx;
            eax = *((ebp + 0xc));
            *((ebp - 0x38)) = eax;
        } else {
            edx = *((ebp - 8));
            eax = *((ebp + 0xc));
            *(edx) = eax;
            eax = *((ebp + 8));
            eax = *((eax + 0x10));
            edx = eax + 1;
            eax = *((ebp + 8));
            *((eax + 0x10)) = edx;
            eax = *((ebp + 8));
            eax = *((eax + 0xc));
            edx = eax + 1;
            eax = *((ebp + 8));
            *((eax + 0xc)) = edx;
            eax = *((ebp + 8));
            eax = *((eax + 0xc));
            edx = 0;
            *(fp_stack--) = *(esp);
            esp = esp + 8;
            eax = *((ebp + 8));
            eax = *((eax + 0x14));
            *(fp_stack--) = *((eax + 8));
            eax = *((ebp + 8));
            eax = *((eax + 8));
            edx = 0;
            *(fp_stack--) = *(esp);
            esp = esp + 8;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (*((ebp - 0xc)) > 0) {
                eax = *((ebp + 8));
                *(esp) = eax;
                check_tuning ();
                eax = *((ebp + 8));
                eax = *((eax + 0xc));
                edx = 0;
                *(fp_stack--) = *(esp);
                esp = esp + 8;
                eax = *((ebp + 8));
                eax = *((eax + 0x14));
                *(fp_stack--) = *((eax + 8));
                eax = *((ebp + 8));
                eax = *((eax + 8));
                edx = 0;
                *(fp_stack--) = *(esp);
                esp = esp + 8;
                fp_stack[0] *= fp_stack[1];
                fp_stack++;
                fp_tmp_1 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_1;
                fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                ax = fp_status;
                __asm ("sahf");
                if (*((ebp - 0xc)) <= 0) {
                    goto label_0;
                }
                eax = *((ebp + 8));
                eax = *((eax + 0x14));
                *((ebp - 0x10)) = eax;
                eax = *((ebp - 0x10));
                eax = *((eax + 0x10));
                if (al != 0) {
                    eax = *((ebp + 8));
                    eax = *((eax + 8));
                    edx = 0;
                    *(fp_stack--) = *(esp);
                    esp = esp + 8;
                    eax = *((ebp - 0x10));
                    *(fp_stack--) = *((eax + 0xc));
                    fp_stack[0] *= fp_stack[1];
                    fp_stack++;
                    *((ebp - 0x34)) = fp_stack[0];
                    fp_stack--;
                } else {
                    eax = *((ebp + 8));
                    eax = *((eax + 8));
                    edx = 0;
                    *(fp_stack--) = *(esp);
                    esp = esp + 8;
                    eax = *((ebp - 0x10));
                    *(fp_stack--) = *((eax + 0xc));
                    fp_stack[0] *= fp_stack[1];
                    fp_stack++;
                    eax = *((ebp - 0x10));
                    *(fp_stack--) = *((eax + 8));
                    fp_stack[0] *= fp_stack[1];
                    fp_stack++;
                    *((ebp - 0x34)) = fp_stack[0];
                    fp_stack--;
                }
                *(fp_stack--) = *((ebp - 0x34));
                *((ebp - 0x14)) = fp_stack[0];
                fp_stack--;
                *(fp_stack--) = *((ebp - 0x14));
                *(fp_stack--) = *(0x80618e8);
                fp_tmp_2 = fp_stack[1];
                fp_stack[1] = fp_stack[0];
                fp_stack[0] = fp_tmp_2;
                fp_status = fp_compare(fp_stack[0], fp_stack[1]);
                ax = fp_status;
                __asm ("sahf");
                if (al >= 0) {
                    *((ebp - 0x38)) = 0;
                    goto label_1;
                }
                *(fp_stack--) = *((ebp - 0x14));
                eax = *((ebp - 0x22));
                ah = 0xc;
                *((ebp - 0x24)) = ax;
                *((ebp - 0x30)) = fp_stack[0];
                fp_stack--;
                eax = *((ebp - 0x30));
                edx = *((ebp - 0x2c));
                *((esp + 4)) = eax;
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = hash_rehash ();
                eax ^= 1;
                if (al == 0) {
                    goto label_0;
                }
                *((ebp + 0xc)) = 0;
            }
label_0:
            eax = *((ebp + 0xc));
            *((ebp - 0x38)) = eax;
        }
    }
label_1:
    eax = *((ebp - 0x38));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80588f0 */
#include <stdint.h>
 
int32_t dbg_xnmalloc (void) {
    size_t n;
    size_t s;
    /* void * xnmalloc(size_t n,size_t s); */
    eax = 0xffffffff;
    edx = 0;
    eax = *(edx:eax) / ebp + 0xc;
    edx = *(edx:eax) % ebp + 0xc;
    if (eax < *((ebp + 8))) {
        xalloc_die ();
    }
    eax = *((ebp + 8));
    eax *= *((ebp + 0xc));
    *(esp) = eax;
    xmalloc ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80595a4 */
#include <stdint.h>
 
int32_t dbg_close_stream (void) {
    int32_t var_14h;
    _Bool fclose_fail;
    _Bool prev_fail;
    _Bool some_pending;
    FILE * stream;
    /* int close_stream(FILE * stream); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = fpending ();
    al = (eax != 0) ? 1 : 0;
    *((ebp - 1)) = al;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = ferror_unlocked ();
    al = (eax != 0) ? 1 : 0;
    *((ebp - 2)) = al;
    eax = *((ebp + 8));
    eax = fclose (eax);
    al = (eax != 0) ? 1 : 0;
    *((ebp - 3)) = al;
    if (*((ebp - 2)) == 0) {
        eax = *((ebp - 3));
        eax ^= 1;
        if (al != 0) {
            goto label_0;
        }
        if (*((ebp - 1)) != 0) {
            goto label_1;
        }
        eax = errno_location ();
        eax = *(eax);
        if (eax == 9) {
            goto label_0;
        }
    }
label_1:
    eax = *((ebp - 3));
    eax ^= 1;
    if (al != 0) {
        errno_location ();
        *(eax) = 0;
    }
    *((ebp - 0x14)) = 0xffffffff;
    goto label_2;
label_0:
    *((ebp - 0x14)) = 0;
label_2:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805ce8c */
#include <stdint.h>
 
int32_t dbg_printf_parse (void) {
    uint32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    int32_t var_b4h;
    void * var_b0h;
    int32_t var_ach;
    int32_t var_a8h;
    int32_t var_a4h;
    int32_t var_a0h;
    void * var_9ch;
    int32_t var_98h;
    int32_t var_94h;
    void * var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    int32_t var_84h;
    char_directive * memory;
    size_t memory_size;
    void * var_70h;
    size_t var_6ch;
    size_t n;
    int32_t flags;
    arg_type type;
    size_t precision_length;
    void * var_58h;
    size_t var_54h;
    uint32_t var_50h;
    uint32_t var_4ch;
    char const * np;
    size_t width_length;
    void * var_40h;
    size_t var_3ch;
    uint32_t var_38h;
    uint32_t var_34h;
    int32_t var_30h;
    uint32_t var_2ch;
    int32_t var_28h;
    char_directive * dp;
    size_t arg_index;
    size_t max_precision_length;
    size_t max_width_length;
    size_t a_allocated;
    size_t d_allocated;
    size_t arg_posn;
    char const * cp;
    char c;
    char const * format;
    char_directives * d;
    arguments * a;
    size_t var_4h;
    /* int printf_parse(char const * format,char_directives * d,arguments * a); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    *((ebp - 0xc)) = 0;
    *((ebp - 0x18)) = 0;
    *((ebp - 0x1c)) = 0;
    eax = *((ebp + 0xc));
    *(eax) = 0;
    *((ebp - 0x10)) = 1;
    eax = *((ebp - 0x10));
    eax *= 0x2c;
    eax = malloc (eax);
    edx = eax;
    eax = *((ebp + 0xc));
    *((eax + 4)) = edx;
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    if (eax == 0) {
        goto label_3;
    }
    eax = *((ebp + 0x10));
    *(eax) = 0;
    *((ebp - 0x14)) = 0;
    eax = *((ebp + 0x10));
    *((eax + 4)) = 0;
    goto label_4;
label_2:
    eax = *((ebp - 8));
    eax = *(eax);
    *((ebp - 1)) = al;
    *((ebp - 8))++;
    if (*((ebp - 1)) != 0x25) {
        goto label_4;
    }
    *((ebp - 0x20)) = 0xffffffff;
    eax = *((ebp + 0xc));
    edx = *((eax + 4));
    eax = *((ebp + 0xc));
    eax = *(eax);
    eax *= 0x2c;
    eax = edx + eax;
    *((ebp - 0x24)) = eax;
    eax = *((ebp - 8));
    edx = eax - 1;
    eax = *((ebp - 0x24));
    *(eax) = edx;
    eax = *((ebp - 0x24));
    *((eax + 8)) = 0;
    eax = *((ebp - 0x24));
    *((eax + 0xc)) = 0;
    eax = *((ebp - 0x24));
    *((eax + 0x10)) = 0;
    eax = *((ebp - 0x24));
    *((eax + 0x14)) = 0xffffffff;
    eax = *((ebp - 0x24));
    *((eax + 0x18)) = 0;
    eax = *((ebp - 0x24));
    *((eax + 0x1c)) = 0;
    eax = *((ebp - 0x24));
    *((eax + 0x20)) = 0xffffffff;
    eax = *((ebp - 0x24));
    *((eax + 0x28)) = 0xffffffff;
    eax = *((ebp - 8));
    eax = *(eax);
    if (al <= 0x2f) {
        goto label_0;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al > 0x39) {
        goto label_0;
    }
    eax = *((ebp - 8));
    *((ebp - 0x28)) = eax;
    while (al <= 0x39) {
        *((ebp - 0x28))++;
        eax = *((ebp - 0x28));
        eax = *(eax);
        if (al <= 0x2f) {
            goto label_5;
        }
        eax = *((ebp - 0x28));
        eax = *(eax);
    }
label_5:
    eax = *((ebp - 0x28));
    eax = *(eax);
    if (al != 0x24) {
        goto label_0;
    }
    *((ebp - 0x2c)) = 0;
    eax = *((ebp - 8));
    *((ebp - 0x28)) = eax;
    while (al <= 0x39) {
        eax = *((ebp - 0x28));
        eax = *(eax);
        eax = (int32_t) al;
        eax -= 0x30;
        *((ebp - 0xc8)) = eax;
        if (*((ebp - 0x2c)) <= 0x19999999) {
            eax = *((ebp - 0x2c));
            edx = *((ebp - 0x2c));
            edx <<= 2;
            edx += eax;
            eax = edx + edx;
            *((ebp - 0xc4)) = eax;
        } else {
            *((ebp - 0xc4)) = 0xffffffff;
        }
        eax = *((ebp - 0xc8));
        *((esp + 4)) = eax;
        edx = *((ebp - 0xc4));
        *(esp) = edx;
        eax = xsum ();
        *((ebp - 0x2c)) = eax;
        *((ebp - 0x28))++;
        eax = *((ebp - 0x28));
        eax = *(eax);
        if (al <= 0x2f) {
            goto label_6;
        }
        eax = *((ebp - 0x28));
        eax = *(eax);
    }
label_6:
    if (*((ebp - 0x2c)) == 0) {
        goto label_7;
    }
    if (*((ebp - 0x2c)) == -1) {
        goto label_7;
    }
    eax = *((ebp - 0x2c));
    eax--;
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0x28));
    eax++;
    *((ebp - 8)) = eax;
    do {
label_0:
        eax = *((ebp - 8));
        eax = *(eax);
        if (al != 0x27) {
            goto label_8;
        }
        eax = *((ebp - 0x24));
        eax = *((eax + 8));
        edx = *((eax + 8));
        edx |= 1;
        eax = *((ebp - 0x24));
        *((eax + 8)) = edx;
        *((ebp - 8))++;
    } while (1);
label_8:
    eax = *((ebp - 8));
    eax = *(eax);
    if (al == 0x2d) {
        eax = *((ebp - 0x24));
        eax = *((eax + 8));
        edx = *((eax + 8));
        edx |= 2;
        eax = *((ebp - 0x24));
        *((eax + 8)) = edx;
        *((ebp - 8))++;
        goto label_0;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al == 0x2b) {
        eax = *((ebp - 0x24));
        eax = *((eax + 8));
        edx = *((eax + 8));
        edx |= 4;
        eax = *((ebp - 0x24));
        *((eax + 8)) = edx;
        *((ebp - 8))++;
        goto label_0;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al == 0x20) {
        eax = *((ebp - 0x24));
        eax = *((eax + 8));
        edx = *((eax + 8));
        edx |= 8;
        eax = *((ebp - 0x24));
        *((eax + 8)) = edx;
        *((ebp - 8))++;
        goto label_0;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al == 0x23) {
        eax = *((ebp - 0x24));
        eax = *((eax + 8));
        edx = *((eax + 8));
        edx |= 0x10;
        eax = *((ebp - 0x24));
        *((eax + 8)) = edx;
        *((ebp - 8))++;
        goto label_0;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al == 0x30) {
        eax = *((ebp - 0x24));
        eax = *((eax + 8));
        edx = *((eax + 8));
        edx |= 0x20;
        eax = *((ebp - 0x24));
        *((eax + 8)) = edx;
        *((ebp - 8))++;
        goto label_0;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al != 0x2a) {
        goto label_9;
    }
    edx = *((ebp - 0x24));
    eax = *((ebp - 8));
    *((edx + 0xc)) = eax;
    *((ebp - 8))++;
    edx = *((ebp - 0x24));
    eax = *((ebp - 8));
    *((edx + 0x10)) = eax;
    if (*((ebp - 0x18)) == 0) {
        *((ebp - 0x18)) = 1;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al <= 0x2f) {
        goto label_10;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al > 0x39) {
        goto label_10;
    }
    eax = *((ebp - 8));
    *((ebp - 0x30)) = eax;
    while (al <= 0x39) {
        *((ebp - 0x30))++;
        eax = *((ebp - 0x30));
        eax = *(eax);
        if (al <= 0x2f) {
            goto label_11;
        }
        eax = *((ebp - 0x30));
        eax = *(eax);
    }
label_11:
    eax = *((ebp - 0x30));
    eax = *(eax);
    if (al != 0x24) {
        goto label_10;
    }
    *((ebp - 0x34)) = 0;
    eax = *((ebp - 8));
    *((ebp - 0x30)) = eax;
    while (al <= 0x39) {
        eax = *((ebp - 0x30));
        eax = *(eax);
        eax = (int32_t) al;
        eax -= 0x30;
        *((ebp - 0xc0)) = eax;
        if (*((ebp - 0x34)) <= 0x19999999) {
            eax = *((ebp - 0x34));
            edx = *((ebp - 0x34));
            edx <<= 2;
            edx += eax;
            eax = edx + edx;
            *((ebp - 0xbc)) = eax;
        } else {
            *((ebp - 0xbc)) = 0xffffffff;
        }
        ecx = *((ebp - 0xc0));
        *((esp + 4)) = ecx;
        eax = *((ebp - 0xbc));
        *(esp) = eax;
        eax = xsum ();
        *((ebp - 0x34)) = eax;
        *((ebp - 0x30))++;
        eax = *((ebp - 0x30));
        eax = *(eax);
        if (al <= 0x2f) {
            goto label_12;
        }
        eax = *((ebp - 0x30));
        eax = *(eax);
    }
label_12:
    if (*((ebp - 0x34)) == 0) {
        goto label_7;
    }
    if (*((ebp - 0x34)) == -1) {
        goto label_7;
    }
    eax = *((ebp - 0x34));
    edx = eax - 1;
    eax = *((ebp - 0x24));
    *((eax + 0x14)) = edx;
    eax = *((ebp - 0x30));
    eax++;
    *((ebp - 8)) = eax;
label_10:
    eax = *((ebp - 0x24));
    eax = *((eax + 0x14));
    if (eax == -1) {
        edx = *((ebp - 0x24));
        eax = *((ebp - 0xc));
        *((edx + 0x14)) = eax;
        *((ebp - 0xc))++;
        eax = *((ebp - 0x24));
        eax = *((eax + 0x14));
        if (eax == -1) {
            goto label_7;
        }
    }
    eax = *((ebp - 0x24));
    eax = *((eax + 0x14));
    *((ebp - 0x38)) = eax;
    eax = *((ebp - 0x38));
    if (eax < *((ebp - 0x14))) {
        goto label_13;
    }
    eax = *((ebp - 0x14));
    if (eax >= 0) {
        eax = *((ebp - 0x14));
        eax += eax;
        *((ebp - 0xb8)) = eax;
    } else {
        *((ebp - 0xb8)) = 0xffffffff;
    }
    edx = *((ebp - 0xb8));
    *((ebp - 0x14)) = edx;
    eax = *((ebp - 0x14));
    if (eax <= *((ebp - 0x38))) {
        *((esp + 4)) = 1;
        eax = *((ebp - 0x38));
        *(esp) = eax;
        eax = xsum ();
        *((ebp - 0x14)) = eax;
    }
    if (*((ebp - 0x14)) <= 0xfffffff) {
        eax = *((ebp - 0x14));
        ecx = *((ebp - 0x14));
        ecx <<= 4;
        *((ebp - 0xb4)) = ecx;
    } else {
        *((ebp - 0xb4)) = 0xffffffff;
    }
    eax = *((ebp - 0xb4));
    *((ebp - 0x3c)) = eax;
    if (*((ebp - 0x3c)) == -1) {
        goto label_14;
    }
    eax = *((ebp + 0x10));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x10));
        edx = *((eax + 4));
        eax = *((ebp - 0x3c));
        eax = realloc (edx, eax);
        *((ebp - 0xb0)) = eax;
    } else {
        eax = *((ebp - 0x3c));
        eax = malloc (eax);
        *((ebp - 0xb0)) = eax;
    }
    edx = *((ebp - 0xb0));
    *((ebp - 0x40)) = edx;
    if (*((ebp - 0x40)) == 0) {
        goto label_14;
    }
    edx = *((ebp + 0x10));
    eax = *((ebp - 0x40));
    *((edx + 4)) = eax;
    while (eax <= *((ebp - 0x38))) {
        eax = *((ebp + 0x10));
        ecx = *((eax + 4));
        eax = *((ebp + 0x10));
        edx = *(eax);
        eax = *(eax);
        eax <<= 4;
        eax = ecx + eax;
        *(eax) = 0;
        edx++;
        eax = *((ebp + 0x10));
        *(eax) = edx;
label_13:
        eax = *((ebp + 0x10));
        eax = *(eax);
    }
    eax = *((ebp + 0x10));
    edx = *((eax + 4));
    eax = *((ebp - 0x38));
    eax <<= 4;
    eax = edx + eax;
    if (eax == 0) {
        eax = *((ebp + 0x10));
        edx = *((eax + 4));
        eax = *((ebp - 0x38));
        eax <<= 4;
        eax = edx + eax;
        *(eax) = 5;
        goto label_15;
    }
    eax = *((ebp + 0x10));
    edx = *((eax + 4));
    eax = *((ebp - 0x38));
    eax <<= 4;
    eax = edx + eax;
    if (eax != 5) {
        goto label_7;
    }
    goto label_15;
label_9:
    eax = *((ebp - 8));
    eax = *(eax);
    if (al <= 0x2f) {
        goto label_15;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al > 0x39) {
        goto label_15;
    }
    edx = *((ebp - 0x24));
    eax = *((ebp - 8));
    *((edx + 0xc)) = eax;
    while (al <= 0x39) {
        *((ebp - 8))++;
        eax = *((ebp - 8));
        eax = *(eax);
        if (al <= 0x2f) {
            goto label_16;
        }
        eax = *((ebp - 8));
        eax = *(eax);
    }
label_16:
    edx = *((ebp - 0x24));
    eax = *((ebp - 8));
    *((edx + 0x10)) = eax;
    eax = *((ebp - 0x24));
    eax = *((eax + 0x10));
    edx = *((eax + 0x10));
    eax = *((ebp - 0x24));
    eax = *((eax + 0xc));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x44)) = eax;
    eax = *((ebp - 0x18));
    if (eax < *((ebp - 0x44))) {
        eax = *((ebp - 0x44));
        *((ebp - 0x18)) = eax;
    }
label_15:
    eax = *((ebp - 8));
    eax = *(eax);
    if (al != 0x2e) {
        goto label_17;
    }
    *((ebp - 8))++;
    eax = *((ebp - 8));
    eax = *(eax);
    if (al != 0x2a) {
        goto label_18;
    }
    eax = *((ebp - 8));
    edx = eax - 1;
    eax = *((ebp - 0x24));
    *((eax + 0x18)) = edx;
    *((ebp - 8))++;
    edx = *((ebp - 0x24));
    eax = *((ebp - 8));
    *((edx + 0x1c)) = eax;
    if (*((ebp - 0x1c)) <= 1) {
        *((ebp - 0x1c)) = 2;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al <= 0x2f) {
        goto label_19;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al > 0x39) {
        goto label_19;
    }
    eax = *((ebp - 8));
    *((ebp - 0x48)) = eax;
    while (al <= 0x39) {
        *((ebp - 0x48))++;
        eax = *((ebp - 0x48));
        eax = *(eax);
        if (al <= 0x2f) {
            goto label_20;
        }
        eax = *((ebp - 0x48));
        eax = *(eax);
    }
label_20:
    eax = *((ebp - 0x48));
    eax = *(eax);
    if (al != 0x24) {
        goto label_19;
    }
    *((ebp - 0x4c)) = 0;
    eax = *((ebp - 8));
    *((ebp - 0x48)) = eax;
    while (al <= 0x39) {
        eax = *((ebp - 0x48));
        eax = *(eax);
        eax = (int32_t) al;
        eax -= 0x30;
        *((ebp - 0xac)) = eax;
        if (*((ebp - 0x4c)) <= 0x19999999) {
            eax = *((ebp - 0x4c));
            edx = *((ebp - 0x4c));
            edx <<= 2;
            edx += eax;
            eax = edx + edx;
            *((ebp - 0xa8)) = eax;
        } else {
            *((ebp - 0xa8)) = 0xffffffff;
        }
        eax = *((ebp - 0xac));
        *((esp + 4)) = eax;
        edx = *((ebp - 0xa8));
        *(esp) = edx;
        eax = xsum ();
        *((ebp - 0x4c)) = eax;
        *((ebp - 0x48))++;
        eax = *((ebp - 0x48));
        eax = *(eax);
        if (al <= 0x2f) {
            goto label_21;
        }
        eax = *((ebp - 0x48));
        eax = *(eax);
    }
label_21:
    if (*((ebp - 0x4c)) == 0) {
        goto label_7;
    }
    if (*((ebp - 0x4c)) == -1) {
        goto label_7;
    }
    eax = *((ebp - 0x4c));
    edx = eax - 1;
    eax = *((ebp - 0x24));
    *((eax + 0x20)) = edx;
    eax = *((ebp - 0x48));
    eax++;
    *((ebp - 8)) = eax;
label_19:
    eax = *((ebp - 0x24));
    eax = *((eax + 0x20));
    if (eax == -1) {
        edx = *((ebp - 0x24));
        eax = *((ebp - 0xc));
        *((edx + 0x20)) = eax;
        *((ebp - 0xc))++;
        eax = *((ebp - 0x24));
        eax = *((eax + 0x20));
        if (eax == -1) {
            goto label_7;
        }
    }
    eax = *((ebp - 0x24));
    eax = *((eax + 0x20));
    *((ebp - 0x50)) = eax;
    eax = *((ebp - 0x50));
    if (eax < *((ebp - 0x14))) {
        goto label_22;
    }
    eax = *((ebp - 0x14));
    if (eax >= 0) {
        eax = *((ebp - 0x14));
        eax += eax;
        *((ebp - 0xa4)) = eax;
    } else {
        *((ebp - 0xa4)) = 0xffffffff;
    }
    ecx = *((ebp - 0xa4));
    *((ebp - 0x14)) = ecx;
    eax = *((ebp - 0x14));
    if (eax <= *((ebp - 0x50))) {
        *((esp + 4)) = 1;
        eax = *((ebp - 0x50));
        *(esp) = eax;
        eax = xsum ();
        *((ebp - 0x14)) = eax;
    }
    if (*((ebp - 0x14)) <= 0xfffffff) {
        eax = *((ebp - 0x14));
        edx = *((ebp - 0x14));
        edx <<= 4;
        *((ebp - 0xa0)) = edx;
    } else {
        *((ebp - 0xa0)) = 0xffffffff;
    }
    ecx = *((ebp - 0xa0));
    *((ebp - 0x54)) = ecx;
    if (*((ebp - 0x54)) == -1) {
        goto label_14;
    }
    eax = *((ebp + 0x10));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x10));
        edx = *((eax + 4));
        eax = *((ebp - 0x54));
        eax = realloc (edx, eax);
        *((ebp - 0x9c)) = eax;
    } else {
        eax = *((ebp - 0x54));
        eax = malloc (eax);
        *((ebp - 0x9c)) = eax;
    }
    eax = *((ebp - 0x9c));
    *((ebp - 0x58)) = eax;
    if (*((ebp - 0x58)) == 0) {
        goto label_14;
    }
    edx = *((ebp + 0x10));
    eax = *((ebp - 0x58));
    *((edx + 4)) = eax;
    while (eax <= *((ebp - 0x50))) {
        eax = *((ebp + 0x10));
        ecx = *((eax + 4));
        eax = *((ebp + 0x10));
        edx = *(eax);
        eax = *(eax);
        eax <<= 4;
        eax = ecx + eax;
        *(eax) = 0;
        edx++;
        eax = *((ebp + 0x10));
        *(eax) = edx;
label_22:
        eax = *((ebp + 0x10));
        eax = *(eax);
    }
    eax = *((ebp + 0x10));
    edx = *((eax + 4));
    eax = *((ebp - 0x50));
    eax <<= 4;
    eax = edx + eax;
    if (eax == 0) {
        eax = *((ebp + 0x10));
        edx = *((eax + 4));
        eax = *((ebp - 0x50));
        eax <<= 4;
        eax = edx + eax;
        *(eax) = 5;
        goto label_17;
    }
    eax = *((ebp + 0x10));
    edx = *((eax + 4));
    eax = *((ebp - 0x50));
    eax <<= 4;
    eax = edx + eax;
    if (eax != 5) {
        goto label_7;
    }
    goto label_17;
label_18:
    eax = *((ebp - 8));
    edx = eax - 1;
    eax = *((ebp - 0x24));
    *((eax + 0x18)) = edx;
    while (al <= 0x39) {
        *((ebp - 8))++;
        eax = *((ebp - 8));
        eax = *(eax);
        if (al <= 0x2f) {
            goto label_23;
        }
        eax = *((ebp - 8));
        eax = *(eax);
    }
label_23:
    edx = *((ebp - 0x24));
    eax = *((ebp - 8));
    *((edx + 0x1c)) = eax;
    eax = *((ebp - 0x24));
    eax = *((eax + 0x1c));
    edx = *((eax + 0x1c));
    eax = *((ebp - 0x24));
    eax = *((eax + 0x18));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x5c)) = eax;
    eax = *((ebp - 0x1c));
    if (eax < *((ebp - 0x5c))) {
        eax = *((ebp - 0x5c));
        *((ebp - 0x1c)) = eax;
    }
label_17:
    *((ebp - 0x64)) = 0;
    do {
label_1:
        eax = *((ebp - 8));
        eax = *(eax);
        if (al != 0x68) {
            goto label_24;
        }
        eax = *((ebp - 0x64));
        ecx = *((ebp - 0x64));
        ecx &= 1;
        eax = 1;
        eax <<= cl;
        *((ebp - 0x64)) |= eax;
        *((ebp - 8))++;
    } while (1);
label_24:
    eax = *((ebp - 8));
    eax = *(eax);
    if (al == 0x4c) {
        *((ebp - 0x64)) |= 4;
        *((ebp - 8))++;
        goto label_1;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al == 0x6c) {
        *((ebp - 0x64)) += 8;
        *((ebp - 8))++;
        goto label_1;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al == 0x6a) {
        *((ebp - 0x64)) += 0x10;
        *((ebp - 8))++;
        goto label_1;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (al != 0x7a) {
        eax = *((ebp - 8));
        eax = *(eax);
        if (al != 0x5a) {
            goto label_25;
        }
    }
    *((ebp - 8))++;
    goto label_1;
label_25:
    eax = *((ebp - 8));
    eax = *(eax);
    if (al == 0x74) {
        *((ebp - 8))++;
        goto label_1;
    }
    eax = *((ebp - 8));
    eax = *(eax);
    *((ebp - 1)) = al;
    *((ebp - 8))++;
    eax = *((ebp - 1));
    eax -= 0x25;
    *((ebp - 0xcc)) = eax;
    if (*((ebp - 0xcc)) > 0x53) {
        goto label_7;
    }
    edx = *((ebp - 0xcc));
    eax = *((edx*4 + 0x8062260));
    /* switch table (84 cases) at 0x8062260 */
    void (*eax)() ();
    if (*((ebp - 0x64)) <= 0xf) {
        eax = *((ebp - 0x64));
        eax &= 4;
        if (eax == 0) {
            goto label_26;
        }
    }
    *((ebp - 0x60)) = 9;
    goto label_27;
label_26:
    if (*((ebp - 0x64)) > 7) {
        *((ebp - 0x60)) = 7;
    } else {
        eax = *((ebp - 0x64));
        eax &= 2;
        if (eax != 0) {
            *((ebp - 0x60)) = 1;
        } else {
            eax = *((ebp - 0x64));
            eax &= 1;
            if (al != 0) {
                *((ebp - 0x60)) = 3;
            } else {
                *((ebp - 0x60)) = 5;
                goto label_27;
                if (*((ebp - 0x64)) <= 0xf) {
                    eax = *((ebp - 0x64));
                    eax &= 4;
                    if (eax == 0) {
                        goto label_28;
                    }
                }
                *((ebp - 0x60)) = 0xa;
                goto label_27;
label_28:
                if (*((ebp - 0x64)) > 7) {
                    *((ebp - 0x60)) = 8;
                } else {
                    eax = *((ebp - 0x64));
                    eax &= 2;
                    if (eax != 0) {
                        *((ebp - 0x60)) = 2;
                    } else {
                        eax = *((ebp - 0x64));
                        eax &= 1;
                        if (al != 0) {
                            *((ebp - 0x60)) = 4;
                        } else {
                            *((ebp - 0x60)) = 6;
                            goto label_27;
                            if (*((ebp - 0x64)) <= 0xf) {
                                eax = *((ebp - 0x64));
                                eax &= 4;
                                if (eax == 0) {
                                    goto label_29;
                                }
                            }
                            *((ebp - 0x60)) = 0xc;
                            goto label_27;
label_29:
                            *((ebp - 0x60)) = 0xb;
                            goto label_27;
                            if (*((ebp - 0x64)) > 7) {
                                *((ebp - 0x60)) = 0xe;
                            } else {
                                *((ebp - 0x60)) = 0xd;
                                goto label_27;
                                *((ebp - 0x60)) = 0xe;
                                *((ebp - 1)) = 0x63;
                                goto label_27;
                                if (*((ebp - 0x64)) > 7) {
                                    *((ebp - 0x60)) = 0x10;
                                } else {
                                    *((ebp - 0x60)) = 0xf;
                                    goto label_27;
                                    *((ebp - 0x60)) = 0x10;
                                    *((ebp - 1)) = 0x73;
                                    goto label_27;
                                    *((ebp - 0x60)) = 0x11;
                                    goto label_27;
                                    if (*((ebp - 0x64)) <= 0xf) {
                                        eax = *((ebp - 0x64));
                                        eax &= 4;
                                        if (eax == 0) {
                                            goto label_30;
                                        }
                                    }
                                    *((ebp - 0x60)) = 0x16;
                                    goto label_27;
label_30:
                                    if (*((ebp - 0x64)) > 7) {
                                        *((ebp - 0x60)) = 0x15;
                                    } else {
                                        eax = *((ebp - 0x64));
                                        eax &= 2;
                                        if (eax != 0) {
                                            *((ebp - 0x60)) = 0x12;
                                        } else {
                                            eax = *((ebp - 0x64));
                                            eax &= 1;
                                            if (al != 0) {
                                                *((ebp - 0x60)) = 0x13;
                                            } else {
                                                *((ebp - 0x60)) = 0x14;
                                                goto label_27;
                                                *((ebp - 0x60)) = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
label_27:
    if (*((ebp - 0x60)) == 0) {
        goto label_31;
    }
    edx = *((ebp - 0x24));
    eax = *((ebp - 0x20));
    *((edx + 0x28)) = eax;
    eax = *((ebp - 0x24));
    eax = *((eax + 0x28));
    if (eax == -1) {
        edx = *((ebp - 0x24));
        eax = *((ebp - 0xc));
        *((edx + 0x28)) = eax;
        *((ebp - 0xc))++;
        eax = *((ebp - 0x24));
        eax = *((eax + 0x28));
        if (eax == -1) {
            goto label_7;
        }
    }
    eax = *((ebp - 0x24));
    eax = *((eax + 0x28));
    *((ebp - 0x68)) = eax;
    eax = *((ebp - 0x68));
    if (eax < *((ebp - 0x14))) {
        goto label_32;
    }
    eax = *((ebp - 0x14));
    if (eax >= 0) {
        eax = *((ebp - 0x14));
        eax += eax;
        *((ebp - 0x98)) = eax;
    } else {
        *((ebp - 0x98)) = 0xffffffff;
    }
    ecx = *((ebp - 0x98));
    *((ebp - 0x14)) = ecx;
    eax = *((ebp - 0x14));
    if (eax <= *((ebp - 0x68))) {
        *((esp + 4)) = 1;
        eax = *((ebp - 0x68));
        *(esp) = eax;
        eax = xsum ();
        *((ebp - 0x14)) = eax;
    }
    if (*((ebp - 0x14)) <= 0xfffffff) {
        eax = *((ebp - 0x14));
        edx = *((ebp - 0x14));
        edx <<= 4;
        *((ebp - 0x94)) = edx;
    } else {
        *((ebp - 0x94)) = 0xffffffff;
    }
    ecx = *((ebp - 0x94));
    *((ebp - 0x6c)) = ecx;
    if (*((ebp - 0x6c)) == -1) {
        goto label_14;
    }
    eax = *((ebp + 0x10));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x10));
        edx = *((eax + 4));
        eax = *((ebp - 0x6c));
        eax = realloc (edx, eax);
        *((ebp - 0x90)) = eax;
    } else {
        eax = *((ebp - 0x6c));
        eax = malloc (eax);
        *((ebp - 0x90)) = eax;
    }
    eax = *((ebp - 0x90));
    *((ebp - 0x70)) = eax;
    if (*((ebp - 0x70)) == 0) {
        goto label_14;
    }
    edx = *((ebp + 0x10));
    eax = *((ebp - 0x70));
    *((edx + 4)) = eax;
    while (eax <= *((ebp - 0x68))) {
        eax = *((ebp + 0x10));
        ecx = *((eax + 4));
        eax = *((ebp + 0x10));
        edx = *(eax);
        eax = *(eax);
        eax <<= 4;
        eax = ecx + eax;
        *(eax) = 0;
        edx++;
        eax = *((ebp + 0x10));
        *(eax) = edx;
label_32:
        eax = *((ebp + 0x10));
        eax = *(eax);
    }
    eax = *((ebp + 0x10));
    edx = *((eax + 4));
    eax = *((ebp - 0x68));
    eax <<= 4;
    eax = edx + eax;
    if (eax == 0) {
        eax = *((ebp + 0x10));
        edx = *((eax + 4));
        eax = *((ebp - 0x68));
        eax <<= 4;
        edx += eax;
        eax = *((ebp - 0x60));
        *(edx) = eax;
    } else {
        eax = *((ebp + 0x10));
        edx = *((eax + 4));
        eax = *((ebp - 0x68));
        eax <<= 4;
        eax = edx + eax;
        if (eax != *((ebp - 0x60))) {
            goto label_7;
        }
    }
label_31:
    edx = *((ebp - 0x24));
    eax = *((ebp - 1));
    *((edx + 0x24)) = al;
    edx = *((ebp - 0x24));
    eax = *((ebp - 8));
    *((edx + 4)) = eax;
    eax = *((ebp + 0xc));
    eax = *(eax);
    edx = eax + 1;
    eax = *((ebp + 0xc));
    *(eax) = edx;
    eax = *((ebp + 0xc));
    eax = *(eax);
    if (eax >= *((ebp - 0x10))) {
        eax = *((ebp - 0x10));
        if (eax >= 0) {
            eax = *((ebp - 0x10));
            eax += eax;
            *((ebp - 0x8c)) = eax;
        } else {
            *((ebp - 0x8c)) = 0xffffffff;
        }
        edx = *((ebp - 0x8c));
        *((ebp - 0x10)) = edx;
        if (*((ebp - 0x10)) <= 0x5d1745d) {
            eax = *((ebp - 0x10));
            eax *= 0x2c;
            *((ebp - 0x88)) = eax;
        } else {
            *((ebp - 0x88)) = 0xffffffff;
        }
        ecx = *((ebp - 0x88));
        *((ebp - 0x74)) = ecx;
        if (*((ebp - 0x74)) == -1) {
            goto label_14;
        }
        eax = *((ebp + 0xc));
        edx = *((eax + 4));
        eax = *((ebp - 0x74));
        eax = realloc (edx, eax);
        *((ebp - 0x78)) = eax;
        if (*((ebp - 0x78)) == 0) {
            goto label_14;
        }
        edx = *((ebp + 0xc));
        eax = *((ebp - 0x78));
        *((edx + 4)) = eax;
    }
label_4:
    eax = *((ebp - 8));
    eax = *(eax);
    if (al != 0) {
        goto label_2;
    }
    eax = *((ebp + 0xc));
    edx = *((eax + 4));
    eax = *((ebp + 0xc));
    eax = *(eax);
    eax *= 0x2c;
    edx += eax;
    eax = *((ebp - 8));
    *(edx) = eax;
    edx = *((ebp + 0xc));
    eax = *((ebp - 0x18));
    *((edx + 8)) = eax;
    edx = *((ebp + 0xc));
    eax = *((ebp - 0x1c));
    *((edx + 0xc)) = eax;
    *((ebp - 0x84)) = 0;
    goto label_33;
label_7:
    eax = *((ebp + 0x10));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
        free (eax);
    }
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
        free (eax);
    }
    errno_location ();
    *(eax) = 0x16;
    *((ebp - 0x84)) = 0xffffffff;
    goto label_33;
label_14:
    eax = *((ebp + 0x10));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0x10));
        eax = *((eax + 4));
        free (eax);
    }
    eax = *((ebp + 0xc));
    eax = *((eax + 4));
    if (eax != 0) {
        eax = *((ebp + 0xc));
        eax = *((eax + 4));
        free (eax);
    }
label_3:
    errno_location ();
    *(eax) = 0xc;
    *((ebp - 0x84)) = 0xffffffff;
label_33:
    eax = *((ebp - 0x84));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805969a */
#include <stdint.h>
 
int32_t dbg_vasnprintf (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    int32_t var_4dch;
    uint32_t var_4d4h;
    void * var_4d0h;
    int32_t var_4cch;
    int32_t var_4c8h;
    int32_t var_4c4h;
    int32_t var_4c0h;
    int32_t var_4bch;
    int32_t var_4b8h;
    int32_t var_4b4h;
    int32_t var_4b0h;
    int32_t var_4ach;
    int32_t var_4a8h;
    int32_t var_4a4h;
    int32_t var_4a0h;
    int32_t var_49ch;
    int32_t var_480h;
    int32_t var_47ch;
    va_list args;
    char const * format;
    size_t * lengthp;
    char * resultbuf;
    char_directives d;
    void * ptr;
    int32_t var_460h;
    int32_t var_45ch;
    int32_t var_448h;
    int32_t var_444h;
    int32_t var_440h;
    int[2] prefixes;
    arguments a;
    void * var_40ch;
    char * memory;
    void * var_404h;
    size_t memory_size;
    size_t bigger_need;
    void * arg;
    size_t maxlen;
    int32_t retcount;
    int32_t count;
    void * var_3a4h;
    size_t var_3a0h;
    int32_t var_398h;
    int32_t var_390h;
    uint32_t prefix_count;
    char * fbp;
    int32_t flags;
    arg_type type;
    void * var_37ch;
    size_t var_378h;
    int32_t var_374h;
    uint32_t var_370h;
    char * q;
    int32_t var_368h;
    char * end;
    size_t pad;
    int32_t sign;
    size_t tmp_memsize;
    char const * digitp;
    int32_t var_350h;
    uint32_t var_34ch;
    uint32_t var_348h;
    char * p;
    char * pad_ptr;
    char * tmp;
    size_t tmp_length;
    size_t precision;
    int32_t has_precision;
    size_t width;
    int32_t has_width;
    int32_t var_324h;
    void * var_320h;
    size_t var_31ch;
    size_t augmented_length;
    void * s1;
    size_t var_310h;
    int32_t var_30ch;
    int32_t var_308h;
    size_t buf_memsize;
    size_t length;
    size_t allocated;
    char * result;
    char_directive * dp;
    size_t i;
    char const * cp;
    char * buf_malloced;
    char * buf;
    size_t buf_neededlength;
    fpucw_t oldcw;
    char[700] tmpbuf;
    void * canary;
    int32_t var_bp_ch;
    size_t s2;
    size_t n;
    int32_t var_ch;
    int32_t var_24h;
    /* char * vasnprintf(char * resultbuf,size_t * lengthp,char const * format,va_list args); */
    eax = *((ebp + 8));
    *((ebp - 0x46c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x470)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x474)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x478)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0x1c)) = eax;
    eax = 0;
    eax = ebp - 0x410;
    *((esp + 8)) = eax;
    eax = ebp - 0x468;
    *((esp + 4)) = eax;
    eax = *((ebp - 0x474));
    *(esp) = eax;
    eax = printf_parse ();
    if (eax < 0) {
        *((ebp - 0x4d0)) = 0;
        goto label_1;
    }
    eax = ebp - 0x410;
    *((esp + 4)) = eax;
    eax = *((ebp - 0x478));
    *(esp) = eax;
    eax = printf_fetchargs ();
    if (eax < 0) {
        eax = *((ebp - 0x464));
        free (eax);
        eax = *((ebp - 0x40c));
        if (eax != 0) {
            eax = *((ebp - 0x40c));
            free (eax);
        }
        errno_location ();
        *(eax) = 0x16;
        *((ebp - 0x4d0)) = 0;
        goto label_1;
    }
    eax = *((ebp - 0x45c));
    edx = *((ebp - 0x460));
    *((esp + 0xc)) = 6;
    *((esp + 8)) = eax;
    *((esp + 4)) = edx;
    *(esp) = 7;
    eax = xsum4 ();
    *((ebp - 0x2e0)) = eax;
    if (*((ebp - 0x2e0)) <= 0xf9f) {
        eax = *((ebp - 0x2e0));
        eax += 0xf;
        eax += 0xf;
        eax >>= 4;
        eax <<= 4;
        edx = esp + 0x24;
        *((ebp - 0x4cc)) = edx;
        eax = *((ebp - 0x4cc));
        eax += 0xf;
        eax >>= 4;
        eax <<= 4;
        *((ebp - 0x4cc)) = eax;
        ecx = *((ebp - 0x4cc));
        *((ebp - 0x2e4)) = ecx;
        *((ebp - 0x2e8)) = 0;
    } else {
        eax = *((ebp - 0x2e0));
        *((ebp - 0x304)) = eax;
        if (*((ebp - 0x304)) == -1) {
            goto label_2;
        }
        eax = *((ebp - 0x304));
        eax = malloc (eax);
        *((ebp - 0x2e4)) = eax;
        if (*((ebp - 0x2e4)) == 0) {
            goto label_2;
        }
        eax = *((ebp - 0x2e4));
        *((ebp - 0x2e8)) = eax;
    }
    if (*((ebp - 0x46c)) != 0) {
        eax = *((ebp - 0x46c));
        *((ebp - 0x2f8)) = eax;
        eax = *((ebp - 0x470));
        eax = *(eax);
        *((ebp - 0x2fc)) = eax;
    } else {
        *((ebp - 0x2f8)) = 0;
        *((ebp - 0x2fc)) = 0;
    }
    *((ebp - 0x300)) = 0;
    eax = *((ebp - 0x474));
    *((ebp - 0x2ec)) = eax;
    *((ebp - 0x2f0)) = 0;
    eax = *((ebp - 0x464));
    *((ebp - 0x2f4)) = eax;
label_0:
    eax = *((ebp - 0x2f4));
    eax = *(eax);
    if (eax != *((ebp - 0x2ec))) {
        eax = *((ebp - 0x2f4));
        eax = *(eax);
        edx = *(eax);
        eax = *((ebp - 0x2ec));
        ecx = edx;
        ecx -= eax;
        eax = ecx;
        *((ebp - 0x308)) = eax;
        eax = *((ebp - 0x308));
        eax = *((ebp - 0x300));
        eax = xsum (eax, eax);
        *((ebp - 0x30c)) = eax;
        eax = *((ebp - 0x30c));
        if (eax > *((ebp - 0x2fc))) {
            if (*((ebp - 0x2fc)) != 0) {
                eax = *((ebp - 0x2fc));
                if (eax >= 0) {
                    eax = *((ebp - 0x2fc));
                    eax += eax;
                    *((ebp - 0x4c4)) = eax;
                } else {
                    *((ebp - 0x4c4)) = 0xffffffff;
                }
                eax = *((ebp - 0x4c4));
                *((ebp - 0x4c8)) = eax;
            } else {
                *((ebp - 0x4c8)) = 0xc;
            }
            edx = *((ebp - 0x4c8));
            *((ebp - 0x2fc)) = edx;
            eax = *((ebp - 0x30c));
            if (eax > *((ebp - 0x2fc))) {
                eax = *((ebp - 0x30c));
                *((ebp - 0x2fc)) = eax;
            }
            eax = *((ebp - 0x2fc));
            *((ebp - 0x310)) = eax;
            if (*((ebp - 0x310)) == -1) {
                goto label_3;
            }
            eax = *((ebp - 0x2f8));
            if (eax != *((ebp - 0x46c))) {
                if (*((ebp - 0x2f8)) != 0) {
                    goto label_4;
                }
            }
            eax = *((ebp - 0x310));
            eax = malloc (eax);
            *((ebp - 0x314)) = eax;
            goto label_5;
label_4:
            eax = *((ebp - 0x310));
            eax = *((ebp - 0x2f8));
            eax = realloc (eax, eax);
            *((ebp - 0x314)) = eax;
label_5:
            if (*((ebp - 0x314)) == 0) {
                goto label_3;
            }
            eax = *((ebp - 0x2f8));
            if (eax == *((ebp - 0x46c))) {
                if (*((ebp - 0x300)) == 0) {
                    goto label_6;
                }
                eax = *((ebp - 0x300));
                eax = *((ebp - 0x2f8));
                eax = *((ebp - 0x314));
                memcpy (eax, eax, eax);
            }
label_6:
            eax = *((ebp - 0x314));
            *((ebp - 0x2f8)) = eax;
        }
        edx = *((ebp - 0x300));
        eax = *((ebp - 0x2f8));
        edx = eax + edx;
        eax = *((ebp - 0x308));
        eax = *((ebp - 0x2ec));
        memcpy (edx, eax, eax);
        eax = *((ebp - 0x30c));
        *((ebp - 0x300)) = eax;
    }
    eax = *((ebp - 0x468));
    if (eax == *((ebp - 0x2f0))) {
        goto label_7;
    }
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x24));
    if (al == 0x25) {
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x28));
        if (eax != -1) {
            abort ();
        }
        eax = *((ebp - 0x300));
        eax = xsum (eax, 1);
        *((ebp - 0x318)) = eax;
        eax = *((ebp - 0x318));
        if (eax > *((ebp - 0x2fc))) {
            if (*((ebp - 0x2fc)) != 0) {
                eax = *((ebp - 0x2fc));
                if (eax >= 0) {
                    eax = *((ebp - 0x2fc));
                    eax += eax;
                    *((ebp - 0x4bc)) = eax;
                } else {
                    *((ebp - 0x4bc)) = 0xffffffff;
                }
                ecx = *((ebp - 0x4bc));
                *((ebp - 0x4c0)) = ecx;
            } else {
                *((ebp - 0x4c0)) = 0xc;
            }
            eax = *((ebp - 0x4c0));
            *((ebp - 0x2fc)) = eax;
            eax = *((ebp - 0x318));
            if (eax > *((ebp - 0x2fc))) {
                eax = *((ebp - 0x318));
                *((ebp - 0x2fc)) = eax;
            }
            eax = *((ebp - 0x2fc));
            *((ebp - 0x31c)) = eax;
            if (*((ebp - 0x31c)) == -1) {
                goto label_3;
            }
            eax = *((ebp - 0x2f8));
            if (eax != *((ebp - 0x46c))) {
                if (*((ebp - 0x2f8)) != 0) {
                    goto label_8;
                }
            }
            eax = *((ebp - 0x31c));
            eax = malloc (eax);
            *((ebp - 0x320)) = eax;
            goto label_9;
label_8:
            eax = *((ebp - 0x31c));
            eax = *((ebp - 0x2f8));
            eax = realloc (eax, eax);
            *((ebp - 0x320)) = eax;
label_9:
            if (*((ebp - 0x320)) == 0) {
                goto label_3;
            }
            eax = *((ebp - 0x2f8));
            if (eax == *((ebp - 0x46c))) {
                if (*((ebp - 0x300)) == 0) {
                    goto label_10;
                }
                eax = *((ebp - 0x300));
                eax = *((ebp - 0x2f8));
                eax = *((ebp - 0x320));
                memcpy (eax, eax, eax);
            }
label_10:
            eax = *((ebp - 0x320));
            *((ebp - 0x2f8)) = eax;
        }
        edx = *((ebp - 0x300));
        eax = *((ebp - 0x2f8));
        eax += edx;
        *(eax) = 0x25;
        eax = *((ebp - 0x318));
        *((ebp - 0x300)) = eax;
        goto label_11;
    }
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x28));
    if (eax == -1) {
        abort ();
    }
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x24));
    if (al == 0x6e) {
        edx = *((ebp - 0x40c));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x28));
        eax <<= 4;
        eax = edx + eax;
        eax -= 0x12;
        *((ebp - 0x4d4)) = eax;
        if (*((ebp - 0x4d4)) <= 4) {
            edx = *((ebp - 0x4d4));
            eax = *((edx*4 + 0x8062184));
            /* switch table (5 cases) at 0x8062184 */
            void (*eax)() ();
            edx = *((ebp - 0x40c));
            eax = *((ebp - 0x2f4));
            eax = *((eax + 0x28));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 4));
            eax = *((ebp - 0x300));
            *(edx) = al;
            goto label_11;
            edx = *((ebp - 0x40c));
            eax = *((ebp - 0x2f4));
            eax = *((eax + 0x28));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 4));
            eax = *((ebp - 0x300));
            *(edx) = ax;
            goto label_11;
            edx = *((ebp - 0x40c));
            eax = *((ebp - 0x2f4));
            eax = *((eax + 0x28));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 4));
            eax = *((ebp - 0x300));
            *(edx) = eax;
            goto label_11;
            edx = *((ebp - 0x40c));
            eax = *((ebp - 0x2f4));
            eax = *((eax + 0x28));
            eax <<= 4;
            eax = edx + eax;
            edx = *((eax + 4));
            eax = *((ebp - 0x300));
            *(edx) = eax;
            goto label_11;
            edx = *((ebp - 0x40c));
            eax = *((ebp - 0x2f4));
            eax = *((eax + 0x28));
            eax <<= 4;
            eax = edx + eax;
            ecx = *((eax + 4));
            eax = *((ebp - 0x300));
            edx = 0;
            *(ecx) = eax;
            *((ecx + 4)) = edx;
            goto label_11;
        }
        abort ();
    }
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x24));
    if (al != 0x66) {
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x24));
        if (al == 0x46) {
            goto label_12;
        }
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x24));
        if (al == 0x65) {
            goto label_12;
        }
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x24));
        if (al == 0x45) {
            goto label_12;
        }
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x24));
        if (al == 0x67) {
            goto label_12;
        }
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x24));
        if (al == 0x47) {
            goto label_12;
        }
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x24));
        if (al == 0x61) {
            goto label_12;
        }
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x24));
        if (al != 0x41) {
            goto label_13;
        }
    }
label_12:
    edx = *((ebp - 0x40c));
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x28));
    eax <<= 4;
    eax = edx + eax;
    if (eax != 0xc) {
        goto label_13;
    }
    edx = *((ebp - 0x40c));
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x28));
    eax <<= 4;
    eax = edx + eax;
    ecx = *((eax + 0xc));
    edx = *((eax + 8));
    eax = *((eax + 4));
    *(esp) = eax;
    eax = is_infinitel (edx, ecx);
    if (eax == 0) {
        goto label_13;
    }
    eax = *((ebp - 0x2f4));
    eax = *((eax + 8));
    *((ebp - 0x324)) = eax;
    *((ebp - 0x328)) = 0;
    *((ebp - 0x32c)) = 0;
    eax = *((ebp - 0x2f4));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x10));
    if (edx == eax) {
        goto label_14;
    }
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x14));
    if (eax != -1) {
        edx = *((ebp - 0x40c));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x14));
        eax <<= 4;
        eax = edx + eax;
        if (eax != 5) {
            abort ();
        }
        edx = *((ebp - 0x40c));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x14));
        eax <<= 4;
        eax = edx + eax;
        eax = *((eax + 4));
        *((ebp - 0x348)) = eax;
        if (*((ebp - 0x348)) < 0) {
            *((ebp - 0x324)) |= 2;
            eax = *((ebp - 0x348));
            eax = -eax;
            *((ebp - 0x32c)) = eax;
            goto label_15;
        }
        eax = *((ebp - 0x348));
        *((ebp - 0x32c)) = eax;
        goto label_15;
    }
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0xc));
    *((ebp - 0x34c)) = eax;
    do {
        eax = *((ebp - 0x34c));
        eax = *(eax);
        eax = (int32_t) al;
        eax -= 0x30;
        *((ebp - 0x4b8)) = eax;
        *((ebp - 0x34c))++;
        if (*((ebp - 0x32c)) <= 0x19999999) {
            eax = *((ebp - 0x32c));
            edx = *((ebp - 0x32c));
            edx <<= 2;
            edx += eax;
            eax = edx + edx;
            *((ebp - 0x4b4)) = eax;
        } else {
            *((ebp - 0x4b4)) = 0xffffffff;
        }
        ecx = *((ebp - 0x4b8));
        eax = *((ebp - 0x4b4));
        eax = xsum (eax, ecx);
        *((ebp - 0x32c)) = eax;
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x10));
    } while (eax != *((ebp - 0x34c)));
label_15:
    *((ebp - 0x328)) = 1;
label_14:
    *((ebp - 0x330)) = 0;
    *((ebp - 0x334)) = 0;
    eax = *((ebp - 0x2f4));
    edx = *((eax + 0x18));
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x1c));
    if (edx == eax) {
        goto label_16;
    }
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x20));
    if (eax != -1) {
        edx = *((ebp - 0x40c));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x20));
        eax <<= 4;
        eax = edx + eax;
        if (eax != 5) {
            abort ();
        }
        edx = *((ebp - 0x40c));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x20));
        eax <<= 4;
        eax = edx + eax;
        eax = *((eax + 4));
        *((ebp - 0x350)) = eax;
        if (*((ebp - 0x350)) < 0) {
            goto label_16;
        }
        eax = *((ebp - 0x350));
        *((ebp - 0x334)) = eax;
        *((ebp - 0x330)) = 1;
        goto label_16;
    }
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x18));
    eax++;
    *((ebp - 0x354)) = eax;
    *((ebp - 0x334)) = 0;
    while (eax != *((ebp - 0x354))) {
        eax = *((ebp - 0x354));
        eax = *(eax);
        eax = (int32_t) al;
        eax -= 0x30;
        *((ebp - 0x4b0)) = eax;
        *((ebp - 0x354))++;
        if (*((ebp - 0x334)) <= 0x19999999) {
            eax = *((ebp - 0x334));
            edx = *((ebp - 0x334));
            edx <<= 2;
            edx += eax;
            eax = edx + edx;
            *((ebp - 0x4ac)) = eax;
        } else {
            *((ebp - 0x4ac)) = 0xffffffff;
        }
        edx = *((ebp - 0x4b0));
        ecx = *((ebp - 0x4ac));
        eax = xsum (ecx, edx);
        *((ebp - 0x334)) = eax;
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x1c));
    }
    *((ebp - 0x330)) = 1;
label_16:
    if (*((ebp - 0x330)) == 0) {
        *((ebp - 0x334)) = 6;
    }
    *((ebp - 0x338)) = 0;
    eax = *((ebp - 0x338));
    if (eax < *((ebp - 0x334))) {
        eax = *((ebp - 0x334));
        *((ebp - 0x338)) = eax;
    }
    eax = *((ebp - 0x338));
    eax = xsum (eax, 0xc);
    *((ebp - 0x338)) = eax;
    eax = *((ebp - 0x338));
    if (eax < *((ebp - 0x32c))) {
        eax = *((ebp - 0x32c));
        *((ebp - 0x338)) = eax;
    }
    eax = *((ebp - 0x338));
    eax = xsum (eax, 1);
    *((ebp - 0x338)) = eax;
    if (*((ebp - 0x338)) <= 0x2bc) {
        eax = ebp - 0x2d8;
        *((ebp - 0x33c)) = eax;
    } else {
        eax = *((ebp - 0x338));
        *((ebp - 0x358)) = eax;
        if (*((ebp - 0x358)) == -1) {
            goto label_3;
        }
        eax = *((ebp - 0x358));
        eax = malloc (eax);
        *((ebp - 0x33c)) = eax;
        if (*((ebp - 0x33c)) == 0) {
            goto label_3;
        }
    }
    *((ebp - 0x340)) = 0;
    eax = *((ebp - 0x33c));
    *((ebp - 0x344)) = eax;
    edx = *((ebp - 0x40c));
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x28));
    eax <<= 4;
    eax = edx + eax;
    ecx = *((eax + 0xc));
    edx = *((eax + 8));
    eax = *((eax + 4));
    *((ebp - 0x448)) = eax;
    *((ebp - 0x444)) = edx;
    *((ebp - 0x440)) = ecx;
    eax = *((ebp - 0x448));
    edx = *((ebp - 0x444));
    ecx = *((ebp - 0x440));
    *(esp) = eax;
    eax = rpl_isnanl (edx, ecx);
    if (eax != 0) {
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x24));
        if (al > 0x40) {
            eax = *((ebp - 0x2f4));
            eax = *((eax + 0x24));
            if (al <= 0x5a) {
                eax = *((ebp - 0x344));
                *(eax) = 0x4e;
                *((ebp - 0x344))++;
                eax = *((ebp - 0x344));
                *(eax) = 0x41;
                *((ebp - 0x344))++;
                eax = *((ebp - 0x344));
                *(eax) = 0x4e;
                *((ebp - 0x344))++;
            }
            eax = *((ebp - 0x344));
            *(eax) = 0x6e;
            *((ebp - 0x344))++;
            eax = *((ebp - 0x344));
            *(eax) = 0x61;
            *((ebp - 0x344))++;
            eax = *((ebp - 0x344));
            *(eax) = 0x6e;
            *((ebp - 0x344))++;
        } else {
        } else {
            *((ebp - 0x35c)) = 0;
            eax = *((ebp - 0x3a8));
            *((ebp - 0x2da)) = ax;
            eax = *((ebp - 0x2da));
            ah |= 3;
            *((ebp - 0x3a8)) = ax;
            eax = *((ebp - 0x448));
            edx = *((ebp - 0x444));
            ecx = *((ebp - 0x440));
            *(esp) = eax;
            *((esp + 4)) = edx;
            *((esp + 8)) = ecx;
            eax = signbitl ();
        }
    }
    if (eax != 0) {
        *((ebp - 0x35c)) = 0xffffffff;
        *(fp_stack--) = fp_stack[?];
        fp_stack[0] = -fp_stack[0];
        ? = fp_stack[0];
        fp_stack--;
    }
    if (*((ebp - 0x35c)) < 0) {
        eax = *((ebp - 0x344));
        *(eax) = 0x2d;
        *((ebp - 0x344))++;
    } else {
        eax = *((ebp - 0x324));
        eax &= 4;
        if (eax != 0) {
            eax = *((ebp - 0x344));
            *(eax) = 0x2b;
            *((ebp - 0x344))++;
        } else {
            eax = *((ebp - 0x324));
            eax &= 8;
            if (eax == 0) {
                goto label_17;
            }
            eax = *((ebp - 0x344));
            *(eax) = 0x20;
            *((ebp - 0x344))++;
        }
    }
label_17:
    *(fp_stack--) = fp_stack[?];
    *(fp_stack--) = 0.0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_status = fp_compare(fp_stack[0], fp_stack[1]);
    ax = fp_status;
    __asm ("sahf");
    al = (*((ebp - 0x344)) > 0) ? 1 : 0;
    eax ^= 1;
    if (al == 0) {
        *(fp_stack--) = fp_stack[?];
        *(fp_stack--) = fp_stack[0];
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *(fp_stack--) = fp_stack[?];
        fp_status = fp_compare(fp_stack[0], fp_stack[1]);
        ax = fp_status;
        __asm ("sahf");
        al = (al == 0) ? 1 : 0;
        __asm ("setnp dl");
        eax &= edx;
        eax ^= 1;
        if (al == 0) {
            eax = *((ebp - 0x2f4));
            eax = *((eax + 0x24));
            if (al > 0x40) {
                eax = *((ebp - 0x2f4));
                eax = *((eax + 0x24));
                if (al <= 0x5a) {
                    eax = *((ebp - 0x344));
                    *(eax) = 0x49;
                    *((ebp - 0x344))++;
                    eax = *((ebp - 0x344));
                    *(eax) = 0x4e;
                    *((ebp - 0x344))++;
                    eax = *((ebp - 0x344));
                    *(eax) = 0x46;
                    *((ebp - 0x344))++;
                }
            } else {
                eax = *((ebp - 0x344));
                *(eax) = 0x69;
                *((ebp - 0x344))++;
                eax = *((ebp - 0x344));
                *(eax) = 0x6e;
                *((ebp - 0x344))++;
                eax = *((ebp - 0x344));
                *(eax) = 0x66;
                *((ebp - 0x344))++;
            }
            eax = *((ebp - 0x2da));
            *((ebp - 0x3a8)) = ax;
        }
    } else {
        abort ();
    }
    if (*((ebp - 0x328)) == 0) {
        goto label_18;
    }
    edx = *((ebp - 0x344));
    eax = *((ebp - 0x33c));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    if (eax >= *((ebp - 0x32c))) {
        goto label_18;
    }
    edx = *((ebp - 0x33c));
    eax = *((ebp - 0x344));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    eax += *((ebp - 0x32c));
    *((ebp - 0x360)) = eax;
    edx = *((ebp - 0x360));
    eax = *((ebp - 0x344));
    eax += edx;
    *((ebp - 0x364)) = eax;
    eax = *((ebp - 0x324));
    eax &= 2;
    if (eax == 0) {
        goto label_19;
    }
    while (*((ebp - 0x360)) != 0) {
        eax = *((ebp - 0x344));
        *(eax) = 0x20;
        *((ebp - 0x344))++;
        *((ebp - 0x360))--;
    }
    goto label_20;
label_19:
    eax = *((ebp - 0x324));
    eax &= 0x20;
    if (eax == 0) {
        goto label_21;
    }
    if (*((ebp - 0x340)) == 0) {
        goto label_21;
    }
    eax = *((ebp - 0x364));
    *((ebp - 0x368)) = eax;
    while (eax > *((ebp - 0x340))) {
        *((ebp - 0x368))--;
        *((ebp - 0x344))--;
        eax = *((ebp - 0x344));
        edx = *(eax);
        eax = *((ebp - 0x368));
        *(eax) = dl;
        eax = *((ebp - 0x344));
    }
    while (*((ebp - 0x360)) != 0) {
        eax = *((ebp - 0x344));
        *(eax) = 0x30;
        *((ebp - 0x344))++;
        *((ebp - 0x360))--;
    }
    goto label_20;
label_21:
    eax = *((ebp - 0x364));
    *((ebp - 0x36c)) = eax;
    while (eax > *((ebp - 0x33c))) {
        *((ebp - 0x36c))--;
        *((ebp - 0x344))--;
        eax = *((ebp - 0x344));
        edx = *(eax);
        eax = *((ebp - 0x36c));
        *(eax) = dl;
        eax = *((ebp - 0x344));
    }
    while (*((ebp - 0x360)) != 0) {
        eax = *((ebp - 0x344));
        *(eax) = 0x20;
        *((ebp - 0x344))++;
        *((ebp - 0x360))--;
    }
label_20:
    eax = *((ebp - 0x364));
    *((ebp - 0x344)) = eax;
label_18:
    edx = *((ebp - 0x344));
    eax = *((ebp - 0x33c));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 0x370)) = eax;
    eax = *((ebp - 0x370));
    if (eax >= *((ebp - 0x338))) {
        abort ();
    }
    eax = *((ebp - 0x300));
    edx = *((ebp - 0x2fc));
    ecx = *((ebp - 0x2fc));
    ecx -= eax;
    eax = ecx;
    if (eax <= *((ebp - 0x370))) {
        eax = *((ebp - 0x370));
        eax = *((ebp - 0x300));
        eax = xsum (eax, eax);
        *((ebp - 0x374)) = eax;
        eax = *((ebp - 0x374));
        if (eax <= *((ebp - 0x2fc))) {
            goto label_22;
        }
        if (*((ebp - 0x2fc)) != 0) {
            eax = *((ebp - 0x2fc));
            if (eax >= 0) {
                eax = *((ebp - 0x2fc));
                eax += eax;
                *((ebp - 0x4a4)) = eax;
            } else {
                *((ebp - 0x4a4)) = 0xffffffff;
            }
            eax = *((ebp - 0x4a4));
            *((ebp - 0x4a8)) = eax;
        } else {
            *((ebp - 0x4a8)) = 0xc;
        }
        edx = *((ebp - 0x4a8));
        *((ebp - 0x2fc)) = edx;
        eax = *((ebp - 0x374));
        if (eax > *((ebp - 0x2fc))) {
            eax = *((ebp - 0x374));
            *((ebp - 0x2fc)) = eax;
        }
        eax = *((ebp - 0x2fc));
        *((ebp - 0x378)) = eax;
        if (*((ebp - 0x378)) == -1) {
            goto label_3;
        }
        eax = *((ebp - 0x2f8));
        if (eax != *((ebp - 0x46c))) {
            if (*((ebp - 0x2f8)) != 0) {
                goto label_23;
            }
        }
        eax = *((ebp - 0x378));
        eax = malloc (eax);
        *((ebp - 0x37c)) = eax;
        goto label_24;
label_23:
        eax = *((ebp - 0x378));
        eax = *((ebp - 0x2f8));
        eax = realloc (eax, eax);
        *((ebp - 0x37c)) = eax;
label_24:
        if (*((ebp - 0x37c)) == 0) {
            goto label_3;
        }
        eax = *((ebp - 0x2f8));
        if (eax == *((ebp - 0x46c))) {
            if (*((ebp - 0x300)) == 0) {
                goto label_25;
            }
            eax = *((ebp - 0x300));
            eax = *((ebp - 0x2f8));
            eax = *((ebp - 0x37c));
            memcpy (eax, eax, eax);
        }
label_25:
        eax = *((ebp - 0x37c));
        *((ebp - 0x2f8)) = eax;
    }
label_22:
    edx = *((ebp - 0x300));
    eax = *((ebp - 0x2f8));
    edx = eax + edx;
    eax = *((ebp - 0x370));
    eax = *((ebp - 0x33c));
    memcpy (edx, eax, eax);
    eax = ebp - 0x2d8;
    if (*((ebp - 0x33c)) != eax) {
        eax = *((ebp - 0x33c));
        free (eax);
    }
    eax = *((ebp - 0x370));
    *((ebp - 0x300)) += eax;
    goto label_11;
label_13:
    edx = *((ebp - 0x40c));
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x28));
    eax <<= 4;
    eax = edx + eax;
    *((ebp - 0x380)) = eax;
    eax = *((ebp - 0x2f4));
    eax = *((eax + 8));
    *((ebp - 0x384)) = eax;
    eax = *((ebp - 0x2e4));
    *((ebp - 0x388)) = eax;
    eax = *((ebp - 0x388));
    *(eax) = 0x25;
    *((ebp - 0x388))++;
    eax = *((ebp - 0x384));
    eax &= 1;
    if (al != 0) {
        eax = *((ebp - 0x388));
        *(eax) = 0x27;
        *((ebp - 0x388))++;
    }
    eax = *((ebp - 0x384));
    eax &= 2;
    if (eax != 0) {
        eax = *((ebp - 0x388));
        *(eax) = 0x2d;
        *((ebp - 0x388))++;
    }
    eax = *((ebp - 0x384));
    eax &= 4;
    if (eax != 0) {
        eax = *((ebp - 0x388));
        *(eax) = 0x2b;
        *((ebp - 0x388))++;
    }
    eax = *((ebp - 0x384));
    eax &= 8;
    if (eax != 0) {
        eax = *((ebp - 0x388));
        *(eax) = 0x20;
        *((ebp - 0x388))++;
    }
    eax = *((ebp - 0x384));
    eax &= 0x10;
    if (eax != 0) {
        eax = *((ebp - 0x388));
        *(eax) = 0x23;
        *((ebp - 0x388))++;
    }
    eax = *((ebp - 0x384));
    eax &= 0x20;
    if (eax != 0) {
        eax = *((ebp - 0x388));
        *(eax) = 0x30;
        *((ebp - 0x388))++;
    }
    eax = *((ebp - 0x2f4));
    edx = *((eax + 0xc));
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x10));
    if (edx != eax) {
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x10));
        edx = *((eax + 0x10));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0xc));
        ecx = edx;
        ecx -= eax;
        eax = ecx;
        *((ebp - 0x390)) = eax;
        eax = *((ebp - 0x2f4));
        edx = *((eax + 0xc));
        eax = *((ebp - 0x390));
        eax = *((ebp - 0x388));
        memcpy (eax, edx, eax);
        eax = *((ebp - 0x390));
        *((ebp - 0x388)) += eax;
    }
    eax = *((ebp - 0x2f4));
    edx = *((eax + 0x18));
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x1c));
    if (edx != eax) {
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x1c));
        edx = *((eax + 0x1c));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x18));
        ecx = edx;
        ecx -= eax;
        eax = ecx;
        *((ebp - 0x398)) = eax;
        eax = *((ebp - 0x2f4));
        edx = *((eax + 0x18));
        eax = *((ebp - 0x398));
        eax = *((ebp - 0x388));
        memcpy (eax, edx, eax);
        eax = *((ebp - 0x398));
        *((ebp - 0x388)) += eax;
    }
    if (*((ebp - 0x380)) <= 0x10) {
        ecx = *((ebp - 0x380));
        eax = 1;
        edx = 1;
        edx <<= cl;
        *((ebp - 0x4dc)) = edx;
        eax = *((ebp - 0x4dc));
        eax &= 0x14180;
        if (eax == 0) {
            eax = *((ebp - 0x4dc));
            eax &= 0x1000;
            if (eax != 0) {
                goto label_26;
            }
            eax = *((ebp - 0x4dc));
            eax &= 0x600;
            if (eax == 0) {
                goto label_27;
            }
            eax = *((ebp - 0x388));
            *(eax) = 0x6c;
            *((ebp - 0x388))++;
        }
        eax = *((ebp - 0x388));
        *(eax) = 0x6c;
        *((ebp - 0x388))++;
        goto label_27;
label_26:
        eax = *((ebp - 0x388));
        *(eax) = 0x4c;
        *((ebp - 0x388))++;
    }
label_27:
    eax = *((ebp - 0x2f4));
    edx = *((eax + 0x24));
    eax = *((ebp - 0x388));
    *(eax) = dl;
    eax = *((ebp - 0x388));
    eax++;
    *(eax) = 0;
    *((ebp - 0x38c)) = 0;
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x14));
    if (eax != -1) {
        edx = *((ebp - 0x40c));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x14));
        eax <<= 4;
        eax = edx + eax;
        if (eax != 5) {
            abort ();
        }
        ecx = *((ebp - 0x38c));
        edx = *((ebp - 0x40c));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x14));
        eax <<= 4;
        eax = edx + eax;
        eax = *((eax + 4));
        *((ebp + ecx*4 - 0x418)) = eax;
        *((ebp - 0x38c))++;
    }
    eax = *((ebp - 0x2f4));
    eax = *((eax + 0x20));
    if (eax != -1) {
        edx = *((ebp - 0x40c));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x20));
        eax <<= 4;
        eax = edx + eax;
        if (eax != 5) {
            abort ();
        }
        ecx = *((ebp - 0x38c));
        edx = *((ebp - 0x40c));
        eax = *((ebp - 0x2f4));
        eax = *((eax + 0x20));
        eax <<= 4;
        eax = edx + eax;
        eax = *((eax + 4));
        *((ebp + ecx*4 - 0x418)) = eax;
        *((ebp - 0x38c))++;
    }
    eax = *((ebp - 0x300));
    eax = xsum (eax, 2);
    if (eax > *((ebp - 0x2fc))) {
        if (*((ebp - 0x2fc)) != 0) {
            eax = *((ebp - 0x2fc));
            if (eax >= 0) {
                eax = *((ebp - 0x2fc));
                eax += eax;
                *((ebp - 0x49c)) = eax;
            } else {
                *((ebp - 0x49c)) = 0xffffffff;
            }
            ecx = *((ebp - 0x49c));
            *((ebp - 0x4a0)) = ecx;
        } else {
            *((ebp - 0x4a0)) = 0xc;
        }
        eax = *((ebp - 0x4a0));
        *((ebp - 0x2fc)) = eax;
        eax = *((ebp - 0x300));
        eax = xsum (eax, 2);
        if (eax > *((ebp - 0x2fc))) {
            eax = *((ebp - 0x300));
            eax = xsum (eax, 2);
            *((ebp - 0x2fc)) = eax;
        }
        eax = *((ebp - 0x2fc));
        *((ebp - 0x3a0)) = eax;
        if (*((ebp - 0x3a0)) == -1) {
            goto label_3;
        }
        eax = *((ebp - 0x2f8));
        if (eax != *((ebp - 0x46c))) {
            if (*((ebp - 0x2f8)) != 0) {
                goto label_28;
            }
        }
        eax = *((ebp - 0x3a0));
        eax = malloc (eax);
        *((ebp - 0x3a4)) = eax;
        goto label_29;
label_28:
        eax = *((ebp - 0x3a0));
        eax = *((ebp - 0x2f8));
        eax = realloc (eax, eax);
        *((ebp - 0x3a4)) = eax;
label_29:
        if (*((ebp - 0x3a4)) == 0) {
            goto label_3;
        }
        eax = *((ebp - 0x2f8));
        if (eax == *((ebp - 0x46c))) {
            if (*((ebp - 0x300)) == 0) {
                goto label_30;
            }
            eax = *((ebp - 0x300));
            eax = *((ebp - 0x2f8));
            eax = *((ebp - 0x3a4));
            memcpy (eax, eax, eax);
        }
label_30:
        eax = *((ebp - 0x3a4));
        *((ebp - 0x2f8)) = eax;
    }
    eax = *((ebp - 0x300));
    edx = *((ebp - 0x2f8));
    eax = edx + eax;
    *(eax) = 0;
    *((ebp - 0x3a8)) = 0xffffffff;
    *((ebp - 0x3ac)) = 0;
    edx = *((ebp - 0x300));
    eax = *((ebp - 0x2fc));
    eax -= edx;
    *((ebp - 0x3b0)) = eax;
    eax = *((ebp - 0x3b0));
    if (eax < 0) {
        *((ebp - 0x3b0)) = 0x7fffffff;
    }
    if (*((ebp - 0x380)) <= 0x11) {
        eax = *((ebp - 0x380));
        eax <<= 2;
        eax = *((eax + 0x8062198));
        void (*eax)() ();
    }
    abort ();
label_11:
    eax = *((ebp - 0x2f4));
    eax = *((eax + 4));
    *((ebp - 0x2ec)) = eax;
    *((ebp - 0x2f0))++;
    *((ebp - 0x2f4)) += 0x2c;
    goto label_0;
label_7:
    eax = *((ebp - 0x300));
    eax = xsum (eax, 1);
    if (eax > *((ebp - 0x2fc))) {
        if (*((ebp - 0x2fc)) != 0) {
            eax = *((ebp - 0x2fc));
            if (eax >= 0) {
                eax = *((ebp - 0x2fc));
                eax += eax;
                *((ebp - 0x47c)) = eax;
            } else {
                *((ebp - 0x47c)) = 0xffffffff;
            }
            edx = *((ebp - 0x47c));
            *((ebp - 0x480)) = edx;
        } else {
            *((ebp - 0x480)) = 0xc;
        }
        ecx = *((ebp - 0x480));
        *((ebp - 0x2fc)) = ecx;
        eax = *((ebp - 0x300));
        eax = xsum (eax, 1);
        if (eax > *((ebp - 0x2fc))) {
            eax = *((ebp - 0x300));
            eax = xsum (eax, 1);
            *((ebp - 0x2fc)) = eax;
        }
        eax = *((ebp - 0x2fc));
        *((ebp - 0x400)) = eax;
        if (*((ebp - 0x400)) == -1) {
            goto label_3;
        }
        eax = *((ebp - 0x2f8));
        if (eax != *((ebp - 0x46c))) {
            if (*((ebp - 0x2f8)) != 0) {
                goto label_31;
            }
        }
        eax = *((ebp - 0x400));
        eax = malloc (eax);
        *((ebp - 0x404)) = eax;
        goto label_32;
label_31:
        eax = *((ebp - 0x400));
        eax = *((ebp - 0x2f8));
        eax = realloc (eax, eax);
        *((ebp - 0x404)) = eax;
label_32:
        if (*((ebp - 0x404)) == 0) {
            goto label_3;
        }
        eax = *((ebp - 0x2f8));
        if (eax == *((ebp - 0x46c))) {
            if (*((ebp - 0x300)) == 0) {
                goto label_33;
            }
            eax = *((ebp - 0x300));
            eax = *((ebp - 0x2f8));
            eax = *((ebp - 0x404));
            memcpy (eax, eax, eax);
        }
label_33:
        eax = *((ebp - 0x404));
        *((ebp - 0x2f8)) = eax;
    }
    edx = *((ebp - 0x300));
    eax = *((ebp - 0x2f8));
    eax += edx;
    *(eax) = 0;
    eax = *((ebp - 0x2f8));
    if (eax != *((ebp - 0x46c))) {
        eax = *((ebp - 0x300));
        eax++;
        if (eax >= *((ebp - 0x2fc))) {
            goto label_34;
        }
        eax = *((ebp - 0x300));
        eax++;
        eax = *((ebp - 0x2f8));
        eax = realloc (eax, eax);
        *((ebp - 0x408)) = eax;
        if (*((ebp - 0x408)) == 0) {
            goto label_34;
        }
        eax = *((ebp - 0x408));
        *((ebp - 0x2f8)) = eax;
    }
label_34:
    if (*((ebp - 0x2e8)) != 0) {
        eax = *((ebp - 0x2e8));
        free (eax);
    }
    eax = *((ebp - 0x464));
    free (eax);
    eax = *((ebp - 0x40c));
    if (eax != 0) {
        eax = *((ebp - 0x40c));
        free (eax);
    }
    edx = *((ebp - 0x470));
    eax = *((ebp - 0x300));
    *(edx) = eax;
    eax = *((ebp - 0x2f8));
    *((ebp - 0x4d0)) = eax;
    goto label_1;
label_3:
    eax = *((ebp - 0x2f8));
    if (eax != *((ebp - 0x46c))) {
        if (*((ebp - 0x2f8)) == 0) {
            goto label_35;
        }
        eax = *((ebp - 0x2f8));
        free (eax);
    }
label_35:
    if (*((ebp - 0x2e8)) != 0) {
        eax = *((ebp - 0x2e8));
        free (eax);
    }
label_2:
    eax = *((ebp - 0x464));
    free (eax);
    eax = *((ebp - 0x40c));
    if (eax != 0) {
        eax = *((ebp - 0x40c));
        free (eax);
    }
    errno_location ();
    *(eax) = 0xc;
    *((ebp - 0x4d0)) = 0;
label_1:
    eax = *((ebp - 0x4d0));
    edx = *((ebp - 0x1c));
    edx ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    esp = ebp - 0xc;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805477c */
#include <stdint.h>
 
int32_t dbg_getgroup (void) {
    int32_t var_18h;
    int32_t var_14h;
    char const * name;
    group * grent;
    userid * match;
    userid * tail;
    gid_t gid;
    char * src;
    /* char * getgroup(gid_t gid); */
    *((ebp - 8)) = 0;
    eax = group_alist;
    *((ebp - 4)) = eax;
    while (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
        eax = *(eax);
        if (eax == *((ebp + 8))) {
            eax = *((ebp - 4));
            *((ebp - 8)) = eax;
        } else {
            eax = *((ebp - 4));
            eax = *((eax + 4));
            *((ebp - 4)) = eax;
        }
    }
    if (*((ebp - 8)) == 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = getgrgid ();
        *((ebp - 0xc)) = eax;
        if (*((ebp - 0xc)) != 0) {
            eax = *((ebp - 0xc));
            eax = *(eax);
            *((ebp - 0x18)) = eax;
        } else {
            *((ebp - 0x18)) = 0x80619ac;
        }
        eax = *((ebp - 0x18));
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0x10));
        eax = strlen (eax);
        eax += 9;
        *(esp) = eax;
        eax = xmalloc ();
        *((ebp - 8)) = eax;
        edx = *((ebp - 8));
        eax = *((ebp + 8));
        *(edx) = eax;
        eax = *((ebp - 8));
        edx = eax + 8;
        eax = *((ebp - 0x10));
        strcpy (edx, eax);
        edx = group_alist;
        eax = *((ebp - 8));
        *((eax + 4)) = edx;
        eax = *((ebp - 8));
        *(obj.group_alist) = eax;
    }
    eax = *((ebp - 8));
    eax = *((eax + 8));
    if (al != 0) {
        eax = *((ebp - 8));
        eax += 8;
        *((ebp - 0x14)) = eax;
    } else {
        *((ebp - 0x14)) = 0;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80525dc */
#include <stdint.h>
 
int32_t dbg_hash_lookup (void) {
    int32_t var_18h;
    hash_entry const * cursor;
    hash_entry const * bucket;
    Hash_table const * table;
     const * entry;
    int32_t var_4h;
    /* void * hash_lookup(Hash_table const * table, const * entry); */
    eax = *((ebp + 8));
    ebx = *(eax);
    eax = *((ebp + 8));
    edx = *((eax + 0x18));
    eax = *((ebp + 8));
    eax = *((eax + 8));
    eax = *((ebp + 0xc));
    eax = void (*edx)(uint32_t, uint32_t) (ebx, eax);
    eax <<= 3;
    eax = ebx + eax;
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax <= *((ebp - 8))) {
        abort ();
    }
    eax = *((ebp - 8));
    eax = *(eax);
    if (eax == 0) {
        *((ebp - 0x18)) = 0;
        goto label_0;
    }
    eax = *((ebp - 8));
    *((ebp - 0xc)) = eax;
    while (*((ebp - 0xc)) != 0) {
        eax = *((ebp + 8));
        edx = *((eax + 0x1c));
        eax = *((ebp - 0xc));
        eax = *(eax);
        eax = *((ebp + 0xc));
        al = void (*edx)(uint32_t, uint32_t) (eax, eax);
        if (al != 0) {
            eax = *((ebp - 0xc));
            eax = *(eax);
            *((ebp - 0x18)) = eax;
            goto label_0;
        }
        eax = *((ebp - 0xc));
        eax = *((eax + 4));
        *((ebp - 0xc)) = eax;
    }
    *((ebp - 0x18)) = 0;
label_0:
    eax = *((ebp - 0x18));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051e8d */
#include <stdint.h>
 
int32_t dbg_close_stdout (void) {
    char const * write_error;
    int32_t errname;
    char * format;
    char * var_ch;
    int32_t var_10h;
    /* void close_stdout(); */
    eax = stdout;
    *(esp) = eax;
    eax = close_stream ();
    if (eax != 0) {
        *(esp) = "write error";
        eax = gettext ();
        *((ebp - 8)) = eax;
        eax = file_name;
        if (eax != 0) {
            eax = file_name;
            *(esp) = eax;
            eax = quotearg_colon ();
            ebx = eax;
            eax = errno_location ();
            edx = *(eax);
            eax = *((ebp - 8));
            *((esp + 0x10)) = eax;
            *((esp + 0xc)) = ebx;
            error (0, edx, "%s: %s");
        } else {
            eax = errno_location ();
            edx = *(eax);
            eax = *((ebp - 8));
            *((esp + 0xc)) = eax;
            error (0, edx, 0x8061854);
        }
        eax = exit_failure;
        exit (eax);
    }
    eax = stderr;
    *(esp) = eax;
    eax = close_stream ();
    if (eax != 0) {
        eax = exit_failure;
        exit (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8054651 */
#include <stdint.h>
 
int32_t dbg_getuidbyname (void) {
    void * var_14h;
    passwd * pwent;
    userid * tail;
    char const * user;
    char * src;
    /* uid_t * getuidbyname(char const * user); */
    eax = user_alist;
    *((ebp - 4)) = eax;
    while (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
        edx = *((eax + 8));
        eax = *((ebp + 8));
        eax = *(eax);
        if (dl == al) {
            eax = *((ebp - 4));
            edx = eax + 8;
            eax = *((ebp + 8));
            eax = strcmp (edx, eax);
            if (eax != 0) {
                goto label_0;
            }
            eax = *((ebp - 4));
            *((ebp - 0x14)) = eax;
            goto label_1;
        }
label_0:
        eax = *((ebp - 4));
        eax = *((eax + 4));
        *((ebp - 4)) = eax;
    }
    eax = nouser_alist;
    *((ebp - 4)) = eax;
    while (*((ebp - 4)) != 0) {
        eax = *((ebp - 4));
        edx = *((eax + 8));
        eax = *((ebp + 8));
        eax = *(eax);
        if (dl == al) {
            eax = *((ebp - 4));
            edx = eax + 8;
            eax = *((ebp + 8));
            eax = strcmp (edx, eax);
            if (eax != 0) {
                goto label_2;
            }
            *((ebp - 0x14)) = 0;
            goto label_1;
        }
label_2:
        eax = *((ebp - 4));
        eax = *((eax + 4));
        *((ebp - 4)) = eax;
    }
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = getpwnam ();
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    eax = strlen (eax);
    eax += 9;
    *(esp) = eax;
    eax = xmalloc ();
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    edx = eax + 8;
    eax = *((ebp + 8));
    strcpy (edx, eax);
    if (*((ebp - 8)) != 0) {
        eax = *((ebp - 8));
        edx = *((eax + 8));
        eax = *((ebp - 4));
        *(eax) = edx;
        edx = user_alist;
        eax = *((ebp - 4));
        *((eax + 4)) = edx;
        eax = *((ebp - 4));
        *(obj.user_alist) = eax;
        eax = *((ebp - 4));
        *((ebp - 0x14)) = eax;
    } else {
        eax = nouser_alist;
        edx = *((ebp - 4));
        *((edx + 4)) = eax;
        eax = *((ebp - 4));
        *(obj.nouser_alist) = eax;
        *((ebp - 0x14)) = 0;
    }
label_1:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805dd20 */
#include <stdint.h>
 
int32_t divdi3 (int32_t arg_8h, int32_t arg_ch, uint32_t arg_10h, int32_t arg_14h) {
    uint32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    edi = *((ebp + 0xc));
    eax = *((ebp + 0x10));
    edx = *((ebp + 0x14));
    esi = *((ebp + 8));
    *((ebp - 0x28)) = eax;
    *((ebp - 0x24)) = edx;
    *((ebp - 0x1c)) = 0;
    if (edi < 0) {
        goto label_3;
    }
    ecx = *((ebp - 0x24));
    if (ecx < 0) {
        goto label_4;
    }
label_0:
    *((ebp - 0x14)) = eax;
    eax = edx;
    *((ebp - 0x18)) = esi;
    *((ebp - 0x30)) = edi;
    if (edx == 0) {
        edx = edi;
        if (*((ebp - 0x14)) <= edi) {
            goto label_5;
        }
        eax = esi;
        esi = 0;
        eax = *(edx:eax) / ebp - 0x14;
        edx = *(edx:eax) % ebp - 0x14;
        ecx = eax;
    } else {
        if (edx <= *((ebp - 0x30))) {
            goto label_6;
        }
label_1:
        ecx = 0;
        esi = 0;
    }
    do {
label_2:
        eax = ecx;
        ecx = *((ebp - 0x1c));
        edx = esi;
        if (ecx != 0) {
            eax = -eax;
            edx += 0;
            edx = -edx;
        }
        return eax;
label_5:
        esi = *((ebp - 0x14));
        if (esi == 0) {
            ecx = 1;
            edx = 0;
            eax = ecx;
            eax = *(edx:eax) / ebp - 0x14;
            edx = *(edx:eax) % ebp - 0x14;
            *((ebp - 0x14)) = eax;
        }
        esi = *((ebp - 0x30));
        edx = 0;
        ecx = *((ebp - 0x18));
        eax = esi;
        eax = *(edx:eax) / ebp - 0x14;
        edx = *(edx:eax) % ebp - 0x14;
        esi = eax;
        eax = ecx;
        eax = *(edx:eax) / ebp - 0x14;
        edx = *(edx:eax) % ebp - 0x14;
        ecx = eax;
    } while (1);
label_3:
    ecx = *((ebp - 0x24));
    esi = -esi;
    edi += 0;
    edi = -edi;
    *((ebp - 0x1c)) = 0xffffffff;
    if (ecx >= 0) {
        goto label_0;
    }
label_4:
    eax = *((ebp - 0x28));
    edx = *((ebp - 0x24));
    ebp - 0x1c = ~ebp - 0x1c;
    eax = -eax;
    edx += 0;
    edx = -edx;
    goto label_0;
label_6:
    __asm ("bsr edx, edx");
    edx ^= 0x1f;
    *((ebp - 0x10)) = edx;
    if (edx != 0) {
        goto label_7;
    }
    if (eax < *((ebp - 0x30))) {
        goto label_8;
    }
    ecx = *((ebp - 0x18));
    if (*((ebp - 0x14)) > ecx) {
        goto label_1;
    }
label_8:
    ecx = 1;
    esi = 0;
    goto label_2;
label_7:
    ecx = *((ebp - 0x10));
    edi = *((ebp - 0x14));
    esi = *((ebp - 0x30));
    edx = *((ebp - 0x30));
    eax <<= cl;
    ecx = 0x20;
    ecx -= *((ebp - 0x10));
    edi >>= cl;
    *((ebp - 0x2c)) = ecx;
    edi |= eax;
    ecx = *((ebp - 0x10));
    eax = *((ebp - 0x14));
    eax <<= cl;
    ecx = *((ebp - 0x2c));
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0x18));
    esi >>= cl;
    ecx = *((ebp - 0x10));
    edx <<= cl;
    ecx = *((ebp - 0x2c));
    eax >>= cl;
    eax |= edx;
    edx = esi;
    eax = edx:eax / edi;
    edx = edx:eax % edi;
    esi = edx;
    *((ebp - 0x2c)) = eax;
    eax = *((ebp - 0xc));
    edx:eax = eax * *((ebp - 0x2c));
    edi = eax;
    if (esi < edx) {
        goto label_9;
    }
    while (eax >= edi) {
        ecx = *((ebp - 0x2c));
        esi = 0;
        goto label_2;
        eax = *((ebp - 0x18));
        ecx = *((ebp - 0x10));
        eax <<= cl;
    }
label_9:
    ecx = *((ebp - 0x2c));
    esi = 0;
    ecx--;
    goto label_2;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8053324 */
#include <stdint.h>
 
uint32_t dbg_hash_delete (void) {
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_12h;
    size_t candidate;
    Hash_tuning const * tuning;
    hash_entry * bucket;
    void * data;
    Hash_table * table;
     const * entry;
    int32_t var_4h_2;
    int32_t var_4h;
    int32_t var_sp_8h;
    int32_t var_ch;
    /* void * hash_delete(Hash_table * table, const * entry); */
    *((esp + 0xc)) = 1;
    eax = ebp - 8;
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    eax = hash_find_entry (eax);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        *((ebp - 0x28)) = 0;
    } else {
        eax = *((ebp + 8));
        eax = *((eax + 0x10));
        edx = eax - 1;
        eax = *((ebp + 8));
        *((eax + 0x10)) = edx;
        eax = *((ebp - 8));
        eax = *(eax);
        if (eax == 0) {
            eax = *((ebp + 8));
            eax = *((eax + 0xc));
            edx = eax - 1;
            eax = *((ebp + 8));
            *((eax + 0xc)) = edx;
            eax = *((ebp + 8));
            eax = *((eax + 0xc));
            edx = 0;
            *(fp_stack--) = *(esp);
            esp = esp + 8;
            eax = *((ebp + 8));
            eax = *((eax + 0x14));
            *(fp_stack--) = *(eax);
            eax = *((ebp + 8));
            eax = *((eax + 8));
            edx = 0;
            *(fp_stack--) = *(esp);
            esp = esp + 8;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (eax <= 0) {
                goto label_0;
            }
            eax = *((ebp + 8));
            *(esp) = eax;
            check_tuning ();
            eax = *((ebp + 8));
            eax = *((eax + 0xc));
            edx = 0;
            *(fp_stack--) = *(esp);
            esp = esp + 8;
            eax = *((ebp + 8));
            eax = *((eax + 0x14));
            *(fp_stack--) = *(eax);
            eax = *((ebp + 8));
            eax = *((eax + 8));
            edx = 0;
            *(fp_stack--) = *(esp);
            esp = esp + 8;
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_status = fp_compare(fp_stack[0], fp_stack[1]);
            ax = fp_status;
            __asm ("sahf");
            if (eax <= 0) {
                goto label_0;
            }
            eax = *((ebp + 8));
            eax = *((eax + 0x14));
            *((ebp - 0xc)) = eax;
            eax = *((ebp - 0xc));
            eax = *((eax + 0x10));
            if (al != 0) {
                eax = *((ebp + 8));
                eax = *((eax + 8));
                edx = 0;
                *(fp_stack--) = *(esp);
                esp = esp + 8;
                eax = *((ebp - 0xc));
                *(fp_stack--) = *((eax + 4));
                fp_stack[0] *= fp_stack[1];
                fp_stack++;
                eax = *((ebp - 0x12));
                ah = 0xc;
                *((ebp - 0x14)) = ax;
                *((ebp - 0x20)) = fp_stack[0];
                fp_stack--;
                eax = *((ebp - 0x20));
                edx = *((ebp - 0x1c));
                *((ebp - 0x24)) = eax;
            } else {
                eax = *((ebp + 8));
                eax = *((eax + 8));
                edx = 0;
                *(fp_stack--) = *(esp);
                esp = esp + 8;
                eax = *((ebp - 0xc));
                *(fp_stack--) = *((eax + 4));
                fp_stack[0] *= fp_stack[1];
                fp_stack++;
                eax = *((ebp - 0xc));
                *(fp_stack--) = *((eax + 8));
                fp_stack[0] *= fp_stack[1];
                fp_stack++;
                eax = *((ebp - 0x12));
                ah = 0xc;
                *((ebp - 0x14)) = ax;
                *((ebp - 0x20)) = fp_stack[0];
                fp_stack--;
                eax = *((ebp - 0x20));
                edx = *((ebp - 0x1c));
                *((ebp - 0x24)) = eax;
            }
            eax = *((ebp - 0x24));
            *((ebp - 0x10)) = eax;
            eax = *((ebp - 0x10));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            hash_rehash ();
        }
label_0:
        eax = *((ebp - 4));
        *((ebp - 0x28)) = eax;
    }
    eax = *((ebp - 0x28));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8059078 */
#include <stdint.h>
 
int32_t dbg_fseterr (void) {
    FILE * fp;
    /* void fseterr(FILE * fp); */
    eax = *((ebp + 8));
    eax = *(eax);
    edx = *(eax);
    edx |= 0x20;
    eax = *((ebp + 8));
    *(eax) = edx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805908c */
#include <stdint.h>
 
int32_t dbg_xstrndup (int32_t arg_ch) {
    char * s;
    char const * string;
    int32_t n;
    /* char * xstrndup(char const * string,size_t n); */
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax = strndup (eax, eax);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        xalloc_die ();
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80499cc */
#include <stdint.h>
 
void strndup (void) {
    strndup ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8055a9d */
#include <stdint.h>
 
int32_t dbg_quotearg_n_style_mem (void) {
    quoting_options const o;
    int32_t n;
    quoting_style s;
    char const * arg;
    size_t argsize;
    int32_t var_4h_2;
    int32_t var_4h;
    int32_t var_ch;
    /* char * quotearg_n_style_mem(int n,quoting_style s,char const * arg,size_t argsize); */
    edx = ebp - 0x24;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    quoting_options_from_style (edx);
    eax = ebp - 0x24;
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 8)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    quotearg_n_options (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051dcb */
#include <stdint.h>
 
int32_t dbg_base_name (void) {
    int32_t var_14h;
    size_t length;
    char const * base;
    char const * name;
    int32_t var_sp_4h;
    /* char * base_name(char const * name); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = last_component ();
    *((ebp - 4)) = eax;
    eax = *((ebp - 4));
    eax = *(eax);
    if (al == 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = base_len ();
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        eax = xstrndup (eax);
        *((ebp - 0x14)) = eax;
    } else {
        eax = *((ebp - 4));
        *(esp) = eax;
        eax = base_len ();
        *((ebp - 8)) = eax;
        edx = *((ebp - 8));
        eax = *((ebp - 4));
        eax += edx;
        eax = *(eax);
        if (al == 0x2f) {
            *((ebp - 8))++;
        }
        eax = *((ebp - 8));
        *((esp + 4)) = eax;
        eax = *((ebp - 4));
        eax = xstrndup (eax);
        *((ebp - 0x14)) = eax;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058a8a */
#include <stdint.h>
 
int32_t dbg_xcalloc (void) {
    void * p;
    size_t n;
    size_t s;
    size_t size;
    /* void * xcalloc(size_t n,size_t s); */
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax = calloc (eax, eax);
    *((ebp - 4)) = eax;
    if (*((ebp - 4)) == 0) {
        xalloc_die ();
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804960c */
#include <stdint.h>
 
void calloc (void) {
    calloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052416 */
#include <stdint.h>
 
int32_t dbg_hash_get_n_entries (void) {
    Hash_table const * table;
    /* size_t hash_get_n_entries(Hash_table const * table); */
    eax = *((ebp + 8));
    eax = *((eax + 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052c86 */
#include <stdint.h>
 
int32_t dbg_hash_free (void) {
    hash_entry * next;
    hash_entry * cursor;
    hash_entry * bucket;
    Hash_table * table;
    /* void hash_free(Hash_table * table); */
    eax = *((ebp + 8));
    eax = *((eax + 0x20));
    if (eax == 0) {
        goto label_2;
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x10));
    if (eax == 0) {
        goto label_2;
    }
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 4)) = eax;
    goto label_3;
label_0:
    eax = *((ebp - 4));
    eax = *(eax);
    if (eax == 0) {
        goto label_4;
    }
    eax = *((ebp - 4));
    *((ebp - 8)) = eax;
    while (*((ebp - 8)) != 0) {
        eax = *((ebp + 8));
        edx = *((eax + 0x20));
        eax = *((ebp - 8));
        eax = *(eax);
        void (*edx)(uint32_t) (eax);
        eax = *((ebp - 8));
        eax = *((eax + 4));
        *((ebp - 8)) = eax;
    }
label_4:
    *((ebp - 4)) += 8;
label_3:
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax > *((ebp - 4))) {
        goto label_0;
    }
label_2:
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 4)) = eax;
    goto label_5;
label_1:
    eax = *((ebp - 4));
    eax = *((eax + 4));
    *((ebp - 8)) = eax;
    while (*((ebp - 8)) != 0) {
        eax = *((ebp - 8));
        eax = *((eax + 4));
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 8));
        free (eax);
        eax = *((ebp - 0xc));
        *((ebp - 8)) = eax;
    }
    *((ebp - 4)) += 8;
label_5:
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax > *((ebp - 4))) {
        goto label_1;
    }
    eax = *((ebp + 8));
    eax = *((eax + 0x24));
    *((ebp - 8)) = eax;
    while (*((ebp - 8)) != 0) {
        eax = *((ebp - 8));
        eax = *((eax + 4));
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 8));
        free (eax);
        eax = *((ebp - 0xc));
        *((ebp - 8)) = eax;
    }
    eax = *((ebp + 8));
    eax = *(eax);
    free (eax);
    eax = *((ebp + 8));
    free (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8058a5e */
#include <stdint.h>
 
int32_t dbg_xzalloc (void) {
    size_t s;
    int32_t c;
    size_t n;
    /* void * xzalloc(size_t s); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = xmalloc ();
    edx = eax;
    eax = *((ebp + 8));
    memset (edx, 0, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8051b1c */
#include <stdint.h>
 
uint32_t dbg_argmatch_invalid (void) {
    int32_t var_18h;
    int32_t var_8h;
    char const * context;
    char const * value;
    ptrdiff_t problem;
    int32_t errname;
    char * format;
    int32_t var_ch;
    int32_t var_10h;
    /* void argmatch_invalid(char const * context,char const * value,ptrdiff_t problem); */
    if (*((ebp + 0x10)) == -1) {
        *(esp) = "invalid argument %s for %s";
        eax = gettext ();
        *((ebp - 0x18)) = eax;
    } else {
        *(esp) = "ambiguous argument %s for %s";
        eax = gettext ();
        *((ebp - 0x18)) = eax;
    }
    eax = *((ebp - 0x18));
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = 1;
    eax = quote_n ();
    ebx = eax;
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    *((esp + 4)) = 5;
    *(esp) = 0;
    eax = quotearg_n_style ();
    *((esp + 0x10)) = ebx;
    *((esp + 0xc)) = eax;
    eax = *((ebp - 8));
    error (0, 0, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805919e */
#include <stdint.h>
 
uint32_t dbg_xstrtoumax (char * str) {
    uint32_t var_40h;
    uint32_t var_3ch;
    int32_t var_38h;
    uint32_t var_34h;
    uintmax_t tmp;
    uintmax_t var_24h;
    strtol_error overflow;
    int32_t suffixes;
    int32_t var_18h;
    char const * q;
    strtol_error err;
    char ** p;
    char * t_ptr;
    unsigned char ch;
    char ** ptr;
    int32_t strtol_base;
    uintmax_t * val;
    char const * valid_suffixes;
    char * endptr;
    int32_t base;
    char * function;
    /* strtol_error xstrtoumax(char const * s,char ** ptr,int strtol_base,uintmax_t * val,char const * valid_suffixes); */
    *((ebp - 0x10)) = 0;
    if (*((ebp + 0x10)) >= 0) {
        if (*((ebp + 0x10)) <= 0x24) {
            goto label_0;
        }
    }
    assert_fail (global___PRETTY_FUNCTION__.1, "xstrtol.c", 0x53);
label_0:
    if (*((ebp + 0xc)) == 0) {
        eax = ebp - 8;
        *((ebp - 0x3c)) = eax;
    } else {
        edx = *((ebp + 0xc));
        *((ebp - 0x3c)) = edx;
    }
    eax = *((ebp - 0x3c));
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x14));
    eax = *(eax);
    *((ebp - 1)) = al;
    while (eax != 0) {
        *((ebp - 0x14))++;
        eax = *((ebp - 0x14));
        eax = *(eax);
        *((ebp - 1)) = al;
        eax = ctype_b_loc ();
        edx = *(eax);
        eax = *((ebp - 1));
        eax += eax;
        eax = edx + eax;
        eax = *(eax);
        eax = (int32_t) ax;
        eax &= 0x2000;
    }
    if (*((ebp - 1)) == 0x2d) {
        *((ebp - 0x38)) = 4;
    } else {
        errno_location ();
        *(eax) = 0;
        eax = *((ebp + 0x10));
        eax = *((ebp - 0xc));
        eax = *((ebp + 8));
        eax = strtoumax (eax, eax, eax);
        *((ebp - 0x28)) = eax;
        *((ebp - 0x24)) = edx;
        eax = *((ebp - 0xc));
        eax = *(eax);
        if (eax == *((ebp + 8))) {
            if (*((ebp + 0x18)) != 0) {
                eax = *((ebp - 0xc));
                eax = *(eax);
                eax = *(eax);
                if (al != 0) {
                    eax = *((ebp - 0xc));
                    eax = *(eax);
                    eax = *(eax);
                    eax = (int32_t) al;
                    eax = *((ebp + 0x18));
                    eax = strchr (eax, eax);
                    if (eax == 0) {
                        goto label_1;
                    }
                    *((ebp - 0x28)) = 1;
                    *((ebp - 0x24)) = 0;
                }
label_1:
                *((ebp - 0x38)) = 4;
            } else {
            } else {
                eax = errno_location ();
                eax = *(eax);
                if (eax == 0) {
                    goto label_2;
                }
                eax = errno_location ();
                eax = *(eax);
                if (eax != 0x22) {
                    *((ebp - 0x38)) = 4;
                    goto label_3;
                }
                *((ebp - 0x10)) = 1;
            }
label_2:
            if (*((ebp + 0x18)) == 0) {
                eax = *((ebp - 0x28));
                edx = *((ebp - 0x24));
                ecx = *((ebp + 0x14));
                *(ecx) = eax;
                *((ecx + 4)) = edx;
                edx = *((ebp - 0x10));
                *((ebp - 0x38)) = edx;
            } else {
                eax = *((ebp - 0xc));
                eax = *(eax);
                eax = *(eax);
                if (al != 0) {
                    *((ebp - 0x18)) = 0x400;
                    *((ebp - 0x1c)) = 1;
                    eax = *((ebp - 0xc));
                    eax = *(eax);
                    eax = *(eax);
                    eax = (int32_t) al;
                    eax = *((ebp + 0x18));
                    eax = strchr (eax, eax);
                    if (eax == 0) {
                        eax = *((ebp - 0x28));
                        edx = *((ebp - 0x24));
                        ecx = *((ebp + 0x14));
                        *(ecx) = eax;
                        *((ecx + 4)) = edx;
                        eax = *((ebp - 0x10));
                        edx = *((ebp - 0x10));
                        edx |= 2;
                        *((ebp - 0x38)) = edx;
                        goto label_3;
                    }
                    eax = *((ebp + 0x18));
                    eax = strchr (eax, 0x30);
                    if (eax != 0) {
                        eax = *((ebp - 0xc));
                        eax = *(eax);
                        eax++;
                        eax = *(eax);
                        eax = (int32_t) al;
                        *((ebp - 0x34)) = eax;
                        if (*((ebp - 0x34)) != 0x44) {
                            if (*((ebp - 0x34)) != 0x69) {
                                if (*((ebp - 0x34)) != 0x42) {
                                } else {
                                    eax = *((ebp - 0xc));
                                }
                                eax = *(eax);
                                eax += 2;
                                eax = *(eax);
                                if (al != 0x42) {
                                    goto label_4;
                                }
                                *((ebp - 0x1c)) += 2;
                            }
                        } else {
                            *((ebp - 0x18)) = 0x3e8;
                            *((ebp - 0x1c))++;
                        }
                    }
label_4:
                    eax = *((ebp - 0xc));
                    eax = *(eax);
                    eax = *(eax);
                    eax = (int32_t) al;
                    eax -= 0x42;
                    *((ebp - 0x40)) = eax;
                    if (*((ebp - 0x40)) <= 0x35) {
                        edx = *((ebp - 0x40));
                        eax = *((edx*4 + 0x80620ac));
                        /* switch table (54 cases) at 0x80620ac */
                        void (*eax)() ();
                        *((esp + 4)) = 0x200;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale ();
                        *((ebp - 0x20)) = eax;
                        goto label_5;
                        *((esp + 4)) = 0x400;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale ();
                        *((ebp - 0x20)) = eax;
                        goto label_5;
                        *((ebp - 0x20)) = 0;
                        goto label_5;
                        *((esp + 8)) = 6;
                        eax = *((ebp - 0x18));
                        *((esp + 4)) = eax;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale_by_power ();
                        *((ebp - 0x20)) = eax;
                        goto label_5;
                        *((esp + 8)) = 3;
                        eax = *((ebp - 0x18));
                        *((esp + 4)) = eax;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale_by_power ();
                        *((ebp - 0x20)) = eax;
                        goto label_5;
                        *((esp + 8)) = 1;
                        eax = *((ebp - 0x18));
                        *((esp + 4)) = eax;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale_by_power ();
                        *((ebp - 0x20)) = eax;
                        goto label_5;
                        *((esp + 8)) = 2;
                        eax = *((ebp - 0x18));
                        *((esp + 4)) = eax;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale_by_power ();
                        *((ebp - 0x20)) = eax;
                        goto label_5;
                        *((esp + 8)) = 5;
                        eax = *((ebp - 0x18));
                        *((esp + 4)) = eax;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale_by_power ();
                        *((ebp - 0x20)) = eax;
                        goto label_5;
                        *((esp + 8)) = 4;
                        eax = *((ebp - 0x18));
                        *((esp + 4)) = eax;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale_by_power ();
                        *((ebp - 0x20)) = eax;
                        goto label_5;
                        *((esp + 4)) = 2;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale ();
                        *((ebp - 0x20)) = eax;
                        goto label_5;
                        *((esp + 8)) = 8;
                        eax = *((ebp - 0x18));
                        *((esp + 4)) = eax;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale_by_power ();
                        *((ebp - 0x20)) = eax;
                        goto label_5;
                        *((esp + 8)) = 7;
                        eax = *((ebp - 0x18));
                        *((esp + 4)) = eax;
                        eax = ebp - 0x28;
                        *(esp) = eax;
                        eax = bkm_scale_by_power ();
                        *((ebp - 0x20)) = eax;
                    } else {
                        eax = *((ebp - 0x28));
                        edx = *((ebp - 0x24));
                        ecx = *((ebp + 0x14));
                        *(ecx) = eax;
                        *((ecx + 4)) = edx;
                        eax = *((ebp - 0x10));
                        edx = *((ebp - 0x10));
                        edx |= 2;
                        *((ebp - 0x38)) = edx;
                        goto label_3;
                    }
label_5:
                    eax = *((ebp - 0x20));
                    *((ebp - 0x10)) |= eax;
                    eax = *((ebp - 0xc));
                    edx = *(eax);
                    eax = *((ebp - 0x1c));
                    edx += eax;
                    eax = *((ebp - 0xc));
                    *(eax) = edx;
                    eax = *((ebp - 0xc));
                    eax = *(eax);
                    eax = *(eax);
                    if (al == 0) {
                        goto label_6;
                    }
                    *((ebp - 0x10)) |= 2;
                }
label_6:
                eax = *((ebp - 0x28));
                edx = *((ebp - 0x24));
                ecx = *((ebp + 0x14));
                *(ecx) = eax;
                *((ecx + 4)) = edx;
                eax = *((ebp - 0x10));
                *((ebp - 0x38)) = eax;
            }
        }
    }
label_3:
    eax = *((ebp - 0x38));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8052504 */
#include <stdint.h>
 
int32_t dbg_hash_print_statistics (void) {
    size_t max_bucket_length;
    size_t n_buckets_used;
    size_t n_buckets;
    size_t n_entries;
    Hash_table const * table;
    FILE * stream;
    char * format;
    uint32_t var_sp_8h;
    /* void hash_print_statistics(Hash_table const * table,FILE * stream); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = hash_get_n_entries ();
    *((ebp - 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = hash_get_n_buckets ();
    *((ebp - 8)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = hash_get_n_buckets_used ();
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = hash_get_max_bucket_length ();
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 4));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    fprintf (eax, "# entries:         %lu\n");
    eax = *((ebp - 8));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    fprintf (eax, "# buckets:         %lu\n");
    eax = *((ebp - 0xc));
    edx = 0;
    *(fp_stack--) = *(esp);
    esp = esp + 8;
    *(fp_stack--) = *(0x80618e0);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    eax = *((ebp - 8));
    edx = 0;
    *(fp_stack--) = *(esp);
    esp = esp + 8;
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((esp + 0xc)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    fprintf (eax, "# buckets used:    %lu (%.2f%%)\n");
    eax = *((ebp - 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    fprintf (eax, "max bucket length: %lu\n");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804992c */
#include <stdint.h>
 
void fprintf (void) {
    fprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804a04a */
#include <stdint.h>
 
int32_t dbg_main (char ** argv) {
    int32_t var_ech;
    int32_t var_e8h;
    int32_t var_e4h;
    int32_t argc;
    int32_t var_dch;
    int32_t var_d8h;
    int32_t var_d4h;
    int32_t var_d0h;
    sigaction act;
    int32_t var_bch;
    int32_t var_3ch;
    dev_ino di;
    int32_t i;
    pending * thispend;
    int32_t n_files;
    int32_t var_18h;
    dev_ino * found;
    int32_t j;
    char * file;
    char * dirname;
    struct sigaction * function;
    char * var_ch;
    int32_t var_10h;
    int32_t var_14h;
    /* int main(int argc,char ** argv); */
    ecx = esp + 4;
    *((ebp - 0xe0)) = ecx;
    edx = *((ebp - 0xe0));
    eax = *((edx + 4));
    eax = *(eax);
    *(obj.program_name) = eax;
    setlocale (6, 0x805ed70);
    bindtextdomain ("coreutils", "/usr/local/share/locale");
    textdomain ("coreutils");
    *(esp) = 2;
    initialize_exit_failure ();
    atexit (dbg.close_stdout);
    *(obj.exit_status) = 0;
    *(obj.print_dir_name) = 1;
    *(obj.pending_dirs) = 0;
    ecx = *((ebp - 0xe0));
    eax = *((ecx + 4));
    *((esp + 4)) = eax;
    esi = *((ebp - 0xe0));
    eax = *(esi);
    *(esp) = eax;
    eax = decode_switches ();
    *((ebp - 0x24)) = eax;
    eax = *(obj.print_with_color);
    if (al != 0) {
        parse_ls_color ();
    }
    eax = *(obj.print_with_color);
    if (al == 0) {
        goto label_0;
    }
    *(esp) = 0xc;
    al = is_colored ();
    if (al == 0) {
        *(esp) = 0xd;
        eax = is_colored ();
        eax ^= 1;
        if (al == 0) {
            eax = *(obj.color_symlink_as_referent);
            if (al != 0) {
                goto label_1;
            }
        }
        *(esp) = 0xb;
        eax = is_colored ();
        eax ^= 1;
        if (al != 0) {
            goto label_2;
        }
        eax = format;
        if (eax != 0) {
            goto label_2;
        }
    }
label_1:
    *(obj.check_symlink_color) = 1;
label_2:
    *(esp) = 1;
    eax = tcgetpgrp ();
    if (eax < 0) {
        goto label_3;
    }
    *(esp) = obj.caught_signals;
    sigemptyset ();
    *((ebp - 0x18)) = 0;
    while (*((ebp - 0x18)) <= 0xb) {
        eax = *((ebp - 0x18));
        edx = *((eax*4 + 0x805ed40));
        eax = ebp - 0xc0;
        sigaction (edx, 0, eax);
        eax = *((ebp - 0xc0));
        if (eax != 1) {
            eax = *((ebp - 0x18));
            eax = *((eax*4 + 0x805ed40));
            *((esp + 4)) = eax;
            *(esp) = obj.caught_signals;
            sigaddset ();
        }
        *((ebp - 0x18))++;
    }
    edi = ebp - 0xbc;
    *((ebp - 0xe4)) = edi;
    *((ebp - 0xe8)) = 0x8064500;
    *((ebp - 0xec)) = 0x20;
    edi = *((ebp - 0xe4));
    esi = *((ebp - 0xe8));
    ecx = *((ebp - 0xec));
    *(es:edi) = *(esi);
    ecx--;
    esi += 4;
    es:edi += 4;
    *((ebp - 0x3c)) = 0x10000000;
    *((ebp - 0x18)) = 0;
    while (*((ebp - 0x18)) <= 0xb) {
        eax = *((ebp - 0x18));
        eax = *((eax*4 + 0x805ed40));
        *((esp + 4)) = eax;
        *(esp) = obj.caught_signals;
        eax = sigismember ();
        if (eax != 0) {
            eax = *((ebp - 0x18));
            eax = *((eax*4 + 0x805ed40));
            if (eax == 0x14) {
                *((ebp - 0xdc)) = dbg.stophandler;
            } else {
                *((ebp - 0xdc)) = dbg.sighandler;
            }
            eax = *((ebp - 0xdc));
            *((ebp - 0xc0)) = eax;
            eax = *((ebp - 0x18));
            edx = *((eax*4 + 0x805ed40));
            eax = ebp - 0xc0;
            sigaction (edx, eax, 0);
        }
        *((ebp - 0x18))++;
    }
label_3:
    prep_non_filename_text ();
label_0:
    eax = dereference;
    if (eax == 1) {
        eax = *(obj.immediate_dirs);
        if (al == 0) {
            eax = indicator_style;
            if (eax == 3) {
                goto label_4;
            }
            eax = format;
            if (eax != 0) {
                goto label_5;
            }
        }
label_4:
        *((ebp - 0xd8)) = 2;
        goto label_6;
label_5:
        *((ebp - 0xd8)) = 4;
label_6:
        edx = *((ebp - 0xd8));
        *(obj.dereference) = edx;
    }
    eax = *(obj.recursive);
    if (al != 0) {
        *((esp + 0x10)) = dbg.dev_ino_free;
        *((esp + 0xc)) = 0x8049d8b;
        *((esp + 8)) = 0x8049d54;
        *((esp + 4)) = 0;
        *(esp) = 0x1e;
        eax = hash_initialize ();
        *(obj.active_dir_set) = eax;
        eax = active_dir_set;
        if (eax == 0) {
            xalloc_die ();
        }
        eax = imp.malloc;
        *((esp + 0x10)) = 0x804970c;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0;
        *(esp) = obj.dev_ino_obstack;
        obstack_begin ();
    }
    eax = sort_type;
    if (eax != 4) {
        eax = sort_type;
        if (eax == 2) {
            goto label_7;
        }
        eax = format;
        if (eax == 0) {
            goto label_7;
        }
        eax = *(obj.print_scontext);
        if (al != 0) {
            goto label_7;
        }
        eax = *(obj.print_block_size);
        if (al == 0) {
            goto label_8;
        }
    }
label_7:
    *((ebp - 0xd4)) = 1;
    goto label_9;
label_8:
    *((ebp - 0xd4)) = 0;
label_9:
    eax = *((ebp - 0xd4));
    *(obj.format_needs_stat) = al;
    eax = *(obj.format_needs_stat);
    eax ^= 1;
    do {
        eax ^= 1;
    } while (ecx != 0);
    if (al == 0) {
        eax = *(obj.recursive);
        if (al == 0) {
            eax = *(obj.print_with_color);
            if (al != 0) {
                goto label_10;
            }
            eax = indicator_style;
            if (eax != 0) {
                goto label_10;
            }
            eax = *(obj.directories_first);
            if (al == 0) {
                goto label_11;
            }
        }
label_10:
        *((ebp - 0xd0)) = 1;
    } else {
label_11:
        *((ebp - 0xd0)) = 0;
    }
    eax = *((ebp - 0xd0));
    *(obj.format_needs_type) = al;
    eax = *(obj.dired);
    if (al != 0) {
        eax = imp.malloc;
        *((esp + 0x10)) = 0x804970c;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0;
        *(esp) = obj.dired_obstack;
        obstack_begin ();
        eax = imp.malloc;
        *((esp + 0x10)) = 0x804970c;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0;
        *(esp) = obj.subdired_obstack;
        obstack_begin ();
    }
    *(obj.cwd_n_alloc) = 0x64;
    eax = cwd_n_alloc;
    *((esp + 4)) = 0x78;
    *(esp) = eax;
    eax = xnmalloc ();
    *(obj.cwd_file) = eax;
    *(obj.cwd_n_used) = 0;
    clear_files ();
    edx = *((ebp - 0x24));
    ecx = *((ebp - 0xe0));
    eax = *(ecx);
    eax -= edx;
    *((ebp - 0x1c)) = eax;
    if (*((ebp - 0x1c)) > 0) {
        goto label_12;
    }
    eax = *(obj.immediate_dirs);
    if (al != 0) {
        *((esp + 0x14)) = 0x805ed70;
        *((esp + 0x10)) = 1;
        *((esp + 8)) = 0;
        gobble_file (0, 3);
        goto label_13;
    }
    *((esp + 8)) = 1;
    *((esp + 4)) = 0;
    queue_directory (0x805ed93);
    goto label_13;
    do {
label_12:
        eax = *((ebp - 0x24));
        eax <<= 2;
        esi = *((ebp - 0xe0));
        eax += *((esi + 4));
        eax = *(eax);
        *((ebp - 0x24))++;
        *((esp + 0x14)) = 0x805ed70;
        *((esp + 0x10)) = 1;
        *((esp + 8)) = 0;
        gobble_file (0, 0);
        eax = *((ebp - 0x24));
        edi = *((ebp - 0xe0));
    } while (eax < *(edi));
label_13:
    eax = cwd_n_used;
    if (eax != 0) {
        sort_files ();
        eax = *(obj.immediate_dirs);
        eax ^= 1;
        if (al == 0) {
            goto label_14;
        }
        *((esp + 4)) = 1;
        extract_dirs_from_files (0);
    }
label_14:
    eax = cwd_n_used;
    if (eax != 0) {
        print_current_files ();
        eax = pending_dirs;
        if (eax == 0) {
            goto label_15;
        }
        *(esp) = 0xa;
        putchar_unlocked ();
        eax = dired_pos;
        eax++;
        *(obj.dired_pos) = eax;
        goto label_15;
    }
    if (*((ebp - 0x1c)) > 1) {
        goto label_15;
    }
    eax = pending_dirs;
    if (eax == 0) {
        goto label_15;
    }
    eax = pending_dirs;
    eax = *((eax + 0xc));
    if (eax != 0) {
        goto label_15;
    }
    *(obj.print_dir_name) = 0;
    while (eax != 0) {
        eax = pending_dirs;
        *((ebp - 0x20)) = eax;
        eax = pending_dirs;
        eax = *((eax + 0xc));
        *(obj.pending_dirs) = eax;
        eax = active_dir_set;
        if (eax != 0) {
            eax = *((ebp - 0x20));
            eax = *(eax);
            if (eax == 0) {
                eax = ebp - 0x34;
                dev_ino_pop (eax);
                edx = active_dir_set;
                eax = ebp - 0x34;
                *((esp + 4)) = eax;
                *(esp) = edx;
                eax = hash_delete ();
                *((ebp - 0x14)) = eax;
                if (*((ebp - 0x14)) == 0) {
                    assert_fail ("main", "ls.c", 0x51e);
                }
                eax = *((ebp - 0x14));
                *(esp) = eax;
                dev_ino_free ();
                eax = *((ebp - 0x20));
                *(esp) = eax;
                free_pending_ent ();
            }
        } else {
            eax = *((ebp - 0x20));
            eax = *((eax + 8));
            edx = (int32_t) al;
            eax = *((ebp - 0x20));
            ecx = *((eax + 4));
            eax = *((ebp - 0x20));
            eax = *(eax);
            *((esp + 8)) = edx;
            *((esp + 4)) = ecx;
            print_dir (eax);
            eax = *((ebp - 0x20));
            *(esp) = eax;
            free_pending_ent ();
            *(obj.print_dir_name) = 1;
        }
label_15:
        eax = pending_dirs;
    }
    eax = *(obj.print_with_color);
    if (al == 0) {
        goto label_16;
    }
    restore_default_color ();
    eax = stdout;
    *(esp) = eax;
    fflush_unlocked ();
    *((ebp - 0x10)) = 0;
    while (*((ebp - 0x10)) <= 0xb) {
        eax = *((ebp - 0x10));
        eax = *((eax*4 + 0x805ed40));
        *((esp + 4)) = eax;
        *(esp) = obj.caught_signals;
        eax = sigismember ();
        if (eax != 0) {
            eax = *((ebp - 0x10));
            eax = *((eax*4 + 0x805ed40));
            *((esp + 4)) = 0;
            signal (eax);
        }
        *((ebp - 0x10))++;
    }
    eax = stop_signal_count;
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) != 0) {
        raise (0x13);
        *((ebp - 0x10))--;
    }
    eax = interrupt_signal;
    *((ebp - 0x10)) = eax;
    if (*((ebp - 0x10)) != 0) {
        eax = *((ebp - 0x10));
        raise (eax);
    }
label_16:
    eax = *(obj.dired);
    if (al != 0) {
        *((esp + 4)) = obj.dired_obstack;
        *(esp) = "//DIRED//";
        dired_dump_obstack ();
        *((esp + 4)) = 0x80645e0;
        *(esp) = "//SUBDIRED//";
        dired_dump_obstack ();
        eax = filename_quoting_options;
        *(esp) = eax;
        get_quoting_style ();
        eax = *((eax*4 + obj.quoting_style_args));
        *((esp + 4)) = eax;
        printf ("//DIRED-OPTIONS// --quoting-style=%s\n");
    }
    eax = active_dir_set;
    if (eax != 0) {
        eax = active_dir_set;
        *(esp) = eax;
        eax = hash_get_n_entries ();
        if (eax != 0) {
            assert_fail ("main", "ls.c", 0x554);
        }
        eax = active_dir_set;
        *(esp) = eax;
        hash_free ();
    }
    eax = exit_status;
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804947c */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x8049488)(uint32_t) (ebx);
    ebx += 0x1ab6c;
    edx = *((ebx - 8));
    if (edx != 0) {
        gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804959c */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x805276f */
#include <stdint.h>
 
int32_t dbg_hash_get_entries (void) {
    int32_t var_14h;
    hash_entry const * cursor;
    hash_entry const * bucket;
    size_t counter;
    Hash_table const * table;
    void ** buffer;
    size_t buffer_size;
    /* size_t hash_get_entries(Hash_table const * table,void ** buffer,size_t buffer_size); */
    *((ebp - 4)) = 0;
    eax = *((ebp + 8));
    eax = *(eax);
    *((ebp - 8)) = eax;
    goto label_1;
label_0:
    eax = *((ebp - 8));
    eax = *(eax);
    if (eax == 0) {
        goto label_2;
    }
    eax = *((ebp - 8));
    *((ebp - 0xc)) = eax;
    while (*((ebp - 0xc)) != 0) {
        eax = *((ebp - 4));
        if (eax >= *((ebp + 0x10))) {
            eax = *((ebp - 4));
            *((ebp - 0x14)) = eax;
            goto label_3;
        }
        eax = *((ebp - 4));
        eax <<= 2;
        edx = eax;
        edx += *((ebp + 0xc));
        eax = *((ebp - 0xc));
        eax = *(eax);
        *(edx) = eax;
        *((ebp - 4))++;
        eax = *((ebp - 0xc));
        eax = *((eax + 4));
        *((ebp - 0xc)) = eax;
    }
label_2:
    *((ebp - 8)) += 8;
label_1:
    eax = *((ebp + 8));
    eax = *((eax + 4));
    if (eax > *((ebp - 8))) {
        goto label_0;
    }
    eax = *((ebp - 4));
    *((ebp - 0x14)) = eax;
label_3:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80494dc */
#include <stdint.h>
 
void putc_unlocked (void) {
    putc_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80494ec */
#include <stdint.h>
 
void sigemptyset (void) {
    sigemptyset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80494fc */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804950c */
#include <stdint.h>
 
void localeconv (void) {
    localeconv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804951c */
#include <stdint.h>
 
void dirfd (void) {
    dirfd ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804954c */
#include <stdint.h>
 
void memcmp (void) {
    memcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804955c */
#include <stdint.h>
 
void fputs_unlocked (void) {
    fputs_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804956c */
#include <stdint.h>
 
void ctype_get_mb_cur_max (void) {
    ctype_get_mb_cur_max ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804957c */
#include <stdint.h>
 
void signal (void) {
    signal ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804958c */
#include <stdint.h>
 
void sigismember (void) {
    sigismember ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80495cc */
#include <stdint.h>
 
void localtime (void) {
    localtime ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80495dc */
#include <stdint.h>
 
void getgrnam (void) {
    getgrnam ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804961c */
#include <stdint.h>
 
void strncpy (void) {
    strncpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804963c */
#include <stdint.h>
 
void toupper (void) {
    toupper ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804966c */
#include <stdint.h>
 
void mempcpy (void) {
    mempcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804967c */
#include <stdint.h>
 
void obstack_begin (void) {
    obstack_begin ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804968c */
#include <stdint.h>
 
void ferror_unlocked (void) {
    ferror_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804969c */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80496ac */
#include <stdint.h>
 
void strrchr (void) {
    strrchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80496cc */
#include <stdint.h>
 
void bindtextdomain (void) {
    bindtextdomain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80496dc */
#include <stdint.h>
 
void mbrtowc (void) {
    mbrtowc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80496fc */
#include <stdint.h>
 
void gettimeofday (void) {
    gettimeofday ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804972c */
#include <stdint.h>
 
void strtoumax (void) {
    strtoumax ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804975c */
#include <stdint.h>
 
void sigaction (void) {
    sigaction ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804977c */
#include <stdint.h>
 
void opendir (void) {
    opendir ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80497ac */
#include <stdint.h>
 
void ctype_b_loc (void) {
    ctype_b_loc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80497bc */
#include <stdint.h>
 
void iswcntrl (void) {
    iswcntrl ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80497dc */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80497ec */
#include <stdint.h>
 
void mbsinit (void) {
    mbsinit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80497fc */
#include <stdint.h>
 
void setjmp (void) {
    setjmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804980c */
#include <stdint.h>
 
void tcgetpgrp (void) {
    tcgetpgrp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804981c */
#include <stdint.h>
 
void mktime (void) {
    mktime ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804982c */
#include <stdint.h>
 
void readdir64 (void) {
    readdir64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804984c */
#include <stdint.h>
 
void strtoul (void) {
    strtoul ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804986c */
#include <stdint.h>
 
void getpwuid (void) {
    getpwuid ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804987c */
#include <stdint.h>
 
void setlocale (void) {
    setlocale ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804988c */
#include <stdint.h>
 
void strcpy (void) {
    strcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80498bc */
#include <stdint.h>
 
void raise (void) {
    raise ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80498cc */
#include <stdint.h>
 
void mbrlen (void) {
    mbrlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80498dc */
#include <stdint.h>
 
void fwrite_unlocked (void) {
    fwrite_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80498ec */
#include <stdint.h>
 
void signbitl (void) {
    signbitl ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80498fc */
#include <stdint.h>
 
void clock_gettime (void) {
    clock_gettime ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804990c */
#include <stdint.h>
 
void closedir (void) {
    closedir ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804991c */
#include <stdint.h>
 
void fwrite (void) {
    fwrite ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804994c */
#include <stdint.h>
 
void sigprocmask (void) {
    sigprocmask ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804995c */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804996c */
#include <stdint.h>
 
void fpending (void) {
    fpending ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804998c */
#include <stdint.h>
 
void getgrgid (void) {
    getgrgid ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x804999c */
#include <stdint.h>
 
void sigaddset (void) {
    sigaddset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80499ac */
#include <stdint.h>
 
void readlink (void) {
    readlink ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x80499dc */
#include <stdint.h>
 
void textdomain (void) {
    textdomain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049a0c */
#include <stdint.h>
 
void fnmatch (void) {
    fnmatch ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049a2c */
#include <stdint.h>
 
void fflush_unlocked (void) {
    fflush_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049a3c */
#include <stdint.h>
 
void strftime (void) {
    strftime ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049a4c */
#include <stdint.h>
 
void snprintf (void) {
    snprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049a5c */
#include <stdint.h>
 
void wcwidth (void) {
    wcwidth ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049a6c */
#include <stdint.h>
 
void iswprint (void) {
    iswprint ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049a7c */
#include <stdint.h>
 
void getpwnam (void) {
    getpwnam ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/ls/ia32_elf_from_website/subject.exe @ 0x8049a8c */
#include <stdint.h>
 
void tolower (void) {
    tolower ();
}
