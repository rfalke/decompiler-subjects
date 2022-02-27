/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048dc0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 28476 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048bac */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048df0 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048e50 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804fcd0 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048f9b */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048c1c */
#include <stdint.h>
 
void gettext (void) {
    gettext ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048cbc */
#include <stdint.h>
 
void printf (void) {
    printf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048fbf */
#include <stdint.h>
 
int32_t dbg_next_line_num (void) {
    char * endp;
    /* void next_line_num(); */
    eax = line_num_end;
    *((ebp - 4)) = eax;
    do {
        eax = *((ebp - 4));
        eax = *(eax);
        cl = (al <= 0x38) ? 1 : 0;
        edx = eax + 1;
        eax = *((ebp - 4));
        *(eax) = dl;
        if (cl != 0) {
            goto label_0;
        }
        eax = *((ebp - 4));
        *(eax) = 0x30;
        *((ebp - 4))--;
        eax = line_num_start;
    } while (*((ebp - 4)) >= eax);
    eax = line_num_start;
    if (eax > obj.line_buf) {
        eax = line_num_start;
        eax--;
        *(obj.line_num_start) = eax;
        eax = line_num_start;
        *(eax) = 0x31;
    } else {
        *(obj.line_buf) = "                 0\t";
    }
    edx = line_num_start;
    eax = *(obj.line_num_print);
    if (edx < eax) {
        eax = *(obj.line_num_print);
        eax--;
        *(obj.line_num_print) = eax;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8049040 */
#include <stdint.h>
 
int32_t dbg_simple_cat (void) {
    int32_t var_15h;
    size_t n;
    size_t n_read;
    char * buf;
    size_t bufsize;
    int32_t errname;
    char * format;
    int32_t var_sp_ch;
    /* _Bool simple_cat(char * buf,size_t bufsize); */
    do {
label_0:
        edx = input_desc;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        eax = safe_read (edx);
        *((ebp - 8)) = eax;
        if (*((ebp - 8)) == -1) {
            ebx = infile;
            eax = errno_location ();
            eax = *(eax);
            *((esp + 0xc)) = ebx;
            error (0, eax, 0x8050132);
            *((ebp - 0x15)) = 0;
            goto label_1;
        }
        if (*((ebp - 8)) == 0) {
            *((ebp - 0x15)) = 1;
            goto label_1;
        }
        eax = *((ebp - 8));
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        *(esp) = 1;
        eax = full_write ();
    } while (eax == *((ebp - 0xc)));
    *(esp) = "write error";
    eax = gettext ();
    ebx = eax;
    eax = errno_location ();
    eax = *(eax);
    error (1, eax, ebx);
    goto label_0;
label_1:
    eax = *((ebp - 0x15));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8049108 */
#include <stdint.h>
 
int32_t dbg_cat (int32_t arg_18h, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h, int32_t arg_28h, int32_t arg_2ch) {
    int32_t var_55h;
    _Bool squeeze_blank;
    _Bool show_ends;
    _Bool number_nonblank;
    _Bool number;
    _Bool show_tabs;
    _Bool show_nonprinting;
    int32_t n_to_read;
    size_t remaining_bytes;
    char * wp;
    int32_t newlines;
    size_t n_read;
    char * bpout;
    char * eob;
    char * bpin;
    _Bool input_pending;
    _Bool use_fionread;
    unsigned char ch;
    char * inbuf;
    size_t insize;
    char * outbuf;
    size_t outsize;
    char * errname;
    char * format;
    int32_t var_ch;
    /* _Bool cat(char * inbuf,size_t insize,char * outbuf,size_t outsize,_Bool show_nonprinting,_Bool show_tabs,_Bool number,_Bool number_nonblank,_Bool show_ends,_Bool squeeze_blank); */
    eax = *((ebp + 0x18));
    edx = *((ebp + 0x1c));
    ecx = *((ebp + 0x20));
    ebx = *((ebp + 0x24));
    esi = *((ebp + 0x28));
    edi = *((ebp + 0x2c));
    *((ebp - 0x40)) = al;
    *((ebp - 0x44)) = dl;
    *((ebp - 0x48)) = cl;
    *((ebp - 0x4c)) = bl;
    eax = esi;
    *((ebp - 0x50)) = al;
    ecx = edi;
    *((ebp - 0x54)) = cl;
    eax = newlines2;
    *((ebp - 0x24)) = eax;
    *((ebp - 0xe)) = 1;
    eax = *((ebp + 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0x18));
    eax++;
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x1c)) = eax;
label_0:
    edx = *((ebp + 0x14));
    eax = *((ebp + 0x10));
    edx = eax + edx;
    eax = *((ebp - 0x1c));
    if (edx > eax) {
        goto label_1;
    }
    eax = *((ebp + 0x10));
    *((ebp - 0x28)) = eax;
    do {
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x28));
        *((esp + 4)) = eax;
        *(esp) = 1;
        eax = full_write ();
        if (eax != *((ebp + 0x14))) {
            *(esp) = "write error";
            eax = gettext ();
            ebx = eax;
            eax = errno_location ();
            eax = *(eax);
            error (1, eax, ebx);
        }
        eax = *((ebp + 0x14));
        *((ebp - 0x28)) += eax;
        eax = *((ebp - 0x1c));
        edx = *((ebp - 0x1c));
        eax = *((ebp - 0x28));
        ecx = edx;
        ecx -= eax;
        eax = ecx;
        *((ebp - 0x2c)) = eax;
        eax = *((ebp + 0x14));
    } while (eax <= *((ebp - 0x2c)));
    eax = *((ebp - 0x2c));
    eax = *((ebp - 0x28));
    eax = *((ebp + 0x10));
    memmove (eax, eax, eax);
    edx = *((ebp - 0x2c));
    eax = *((ebp + 0x10));
    eax += edx;
    *((ebp - 0x1c)) = eax;
label_1:
    eax = *((ebp - 0x14));
    if (eax > *((ebp - 0x18))) {
        *((ebp - 0xf)) = 0;
        *((ebp - 0x30)) = 0;
        if (*((ebp - 0xe)) != 0) {
            eax = input_desc;
            edx = ebp - 0x30;
            *((esp + 8)) = edx;
            eax = ioctl (eax, 0x541b);
            if (eax >= 0) {
                goto label_2;
            }
            eax = errno_location ();
            eax = *(eax);
            if (eax != 0x5f) {
                eax = errno_location ();
                eax = *(eax);
                if (eax == 0x19) {
                    goto label_3;
                }
                eax = errno_location ();
                eax = *(eax);
                if (eax == 0x16) {
                    goto label_3;
                }
                eax = errno_location ();
                eax = *(eax);
                if (eax == 0x13) {
                    goto label_3;
                }
                eax = errno_location ();
                eax = *(eax);
                if (eax != 0x26) {
                    goto label_4;
                }
            }
label_3:
            *((ebp - 0xe)) = 0;
            goto label_2;
label_4:
            eax = infile;
            *(esp) = eax;
            eax = quote ();
            esi = eax;
            *(esp) = "cannot do ioctl on %s";
            eax = gettext ();
            ebx = eax;
            eax = errno_location ();
            eax = *(eax);
            *((esp + 0xc)) = esi;
            error (0, eax, ebx);
            eax = *((ebp - 0x24));
            *(obj.newlines2) = eax;
            *((ebp - 0x55)) = 0;
            goto label_5;
        }
label_2:
        eax = *((ebp - 0x30));
        if (eax != 0) {
            *((ebp - 0xf)) = 1;
        }
        if (*((ebp - 0xf)) != 0) {
            eax = ebp - 0x1c;
            *((esp + 4)) = eax;
            eax = *((ebp + 0x10));
            *(esp) = eax;
            write_pending ();
        }
        edx = input_desc;
        eax = *((ebp + 0xc));
        *((esp + 8)) = eax;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        eax = safe_read (edx);
        *((ebp - 0x20)) = eax;
        if (*((ebp - 0x20)) == -1) {
            ebx = infile;
            eax = errno_location ();
            eax = *(eax);
            *((esp + 0xc)) = ebx;
            error (0, eax, 0x8050132);
            eax = ebp - 0x1c;
            *((esp + 4)) = eax;
            eax = *((ebp + 0x10));
            *(esp) = eax;
            write_pending ();
            eax = *((ebp - 0x24));
            *(obj.newlines2) = eax;
            *((ebp - 0x55)) = 0;
            goto label_5;
        }
        if (*((ebp - 0x20)) == 0) {
            eax = ebp - 0x1c;
            *((esp + 4)) = eax;
            eax = *((ebp + 0x10));
            *(esp) = eax;
            write_pending ();
            eax = *((ebp - 0x24));
            *(obj.newlines2) = eax;
            *((ebp - 0x55)) = 1;
            goto label_5;
        }
        eax = *((ebp + 8));
        *((ebp - 0x14)) = eax;
        edx = *((ebp - 0x20));
        eax = *((ebp - 0x14));
        eax += edx;
        *((ebp - 0x18)) = eax;
        eax = *((ebp - 0x18));
        *(eax) = 0xa;
    } else {
        *((ebp - 0x24))++;
        if (*((ebp - 0x24)) > 0) {
            if (*((ebp - 0x24)) > 1) {
                *((ebp - 0x24)) = 2;
                if (*((ebp - 0x54)) == 0) {
                    goto label_6;
                }
                eax = *((ebp - 0x14));
                eax = *(eax);
                *((ebp - 0xd)) = al;
                *((ebp - 0x14))++;
                goto label_7;
            }
label_6:
            edx = *((ebp - 0x48));
            eax = *((ebp - 0x4c));
            eax ^= 1;
            eax = (int32_t) al;
            eax &= edx;
            if (eax == 0) {
                goto label_8;
            }
            next_line_num ();
            eax = *(obj.line_num_print);
            edx = *((ebp - 0x1c));
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = stpcpy ();
            *((ebp - 0x1c)) = eax;
        }
label_8:
        if (*((ebp - 0x50)) != 0) {
            eax = *((ebp - 0x1c));
            *(eax) = 0x24;
            eax++;
            *((ebp - 0x1c)) = eax;
        }
        eax = *((ebp - 0x1c));
        *(eax) = 0xa;
        eax++;
        *((ebp - 0x1c)) = eax;
    }
    eax = *((ebp - 0x14));
    eax = *(eax);
    *((ebp - 0xd)) = al;
    *((ebp - 0x14))++;
label_7:
    if (*((ebp - 0xd)) == 0xa) {
        goto label_0;
    }
    if (*((ebp - 0x24)) >= 0) {
        if (*((ebp - 0x48)) == 0) {
            goto label_9;
        }
        next_line_num ();
        eax = *(obj.line_num_print);
        edx = *((ebp - 0x1c));
        *((esp + 4)) = eax;
        *(esp) = edx;
        eax = stpcpy ();
        *((ebp - 0x1c)) = eax;
    }
label_9:
    if (*((ebp - 0x40)) == 0) {
        goto label_10;
    }
    do {
        if (*((ebp - 0xd)) > 0x1f) {
            if (*((ebp - 0xd)) <= 0x7e) {
                eax = *((ebp - 0x1c));
                edx = *((ebp - 0xd));
                *(eax) = dl;
                eax++;
                *((ebp - 0x1c)) = eax;
            } else {
            }
            if (*((ebp - 0xd)) == 0x7f) {
                eax = *((ebp - 0x1c));
                *(eax) = 0x5e;
                eax++;
                *((ebp - 0x1c)) = eax;
                eax = *((ebp - 0x1c));
                *(eax) = 0x3f;
                eax++;
                *((ebp - 0x1c)) = eax;
            } else {
                eax = *((ebp - 0x1c));
            }
            *(eax) = 0x4d;
            eax++;
            *((ebp - 0x1c)) = eax;
            eax = *((ebp - 0x1c));
            *(eax) = 0x2d;
            eax++;
            *((ebp - 0x1c)) = eax;
            if (*((ebp - 0xd)) > 0x9f) {
                if (*((ebp - 0xd)) != 0xff) {
                    edx = *((ebp - 0x1c));
                    eax = *((ebp - 0xd));
                    eax += 0xffffff80;
                    *(edx) = al;
                    eax = edx + 1;
                    *((ebp - 0x1c)) = eax;
                } else {
                    eax = *((ebp - 0x1c));
                }
                *(eax) = 0x5e;
                eax++;
                *((ebp - 0x1c)) = eax;
                eax = *((ebp - 0x1c));
                *(eax) = 0x3f;
                eax++;
                *((ebp - 0x1c)) = eax;
            } else {
                eax = *((ebp - 0x1c));
            }
            *(eax) = 0x5e;
            eax++;
            *((ebp - 0x1c)) = eax;
            edx = *((ebp - 0x1c));
            eax = *((ebp - 0xd));
            eax -= 0x40;
            *(edx) = al;
            eax = edx + 1;
            *((ebp - 0x1c)) = eax;
        } else {
            if (*((ebp - 0xd)) == 9) {
                eax = *((ebp - 0x44));
                eax ^= 1;
                eax ^= 1;
                if (al == 0) {
                    eax = *((ebp - 0x1c));
                    *(eax) = 9;
                    eax++;
                    *((ebp - 0x1c)) = eax;
                }
            } else {
                if (*((ebp - 0xd)) == 0xa) {
                    *((ebp - 0x24)) = 0xffffffff;
                    goto label_0;
                }
                eax = *((ebp - 0x1c));
                *(eax) = 0x5e;
                eax++;
                *((ebp - 0x1c)) = eax;
                edx = *((ebp - 0x1c));
                eax = *((ebp - 0xd));
                eax += 0x40;
                *(edx) = al;
                eax = edx + 1;
                *((ebp - 0x1c)) = eax;
            }
        }
        eax = *((ebp - 0x14));
        eax = *(eax);
        *((ebp - 0xd)) = al;
        *((ebp - 0x14))++;
    } while (1);
    do {
label_10:
        if (*((ebp - 0xd)) == 9) {
            eax = *((ebp - 0x44));
            eax ^= 1;
            if (al == 0) {
                eax = *((ebp - 0x1c));
                *(eax) = 0x5e;
                eax++;
                *((ebp - 0x1c)) = eax;
                edx = *((ebp - 0x1c));
                eax = *((ebp - 0xd));
                eax += 0x40;
                *(edx) = al;
                eax = edx + 1;
                *((ebp - 0x1c)) = eax;
            }
        } else {
            if (*((ebp - 0xd)) != 0xa) {
                eax = *((ebp - 0x1c));
                edx = *((ebp - 0xd));
                *(eax) = dl;
                eax++;
                *((ebp - 0x1c)) = eax;
            } else {
                *((ebp - 0x24)) = 0xffffffff;
                goto label_0;
            }
        }
        eax = *((ebp - 0x14));
        eax = *(eax);
        *((ebp - 0xd)) = al;
        *((ebp - 0x14))++;
    } while (1);
label_5:
    eax = *((ebp - 0x55));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x80495fb */
#include <stdint.h>
 
int32_t dbg_write_pending (void) {
    size_t n_write;
    char * outbuf;
    char ** bpout;
    int32_t errname;
    char * format;
    /* void write_pending(char * outbuf,char ** bpout); */
    eax = *((ebp + 0xc));
    eax = *(eax);
    edx = *(eax);
    eax = *((ebp + 8));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp - 8)) = eax;
    if (*((ebp - 8)) != 0) {
        eax = *((ebp - 8));
        *((esp + 8)) = eax;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        *(esp) = 1;
        eax = full_write ();
        if (eax != *((ebp - 8))) {
            *(esp) = "write error";
            eax = gettext ();
            ebx = eax;
            eax = errno_location ();
            eax = *(eax);
            error (1, eax, ebx);
        }
        edx = *((ebp + 0xc));
        eax = *((ebp + 8));
        *(edx) = eax;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8049de8 */
#include <stdint.h>
 
int32_t dbg_full_write (void) {
    size_t n_rw;
    char const * ptr;
    size_t total;
    int32_t fd;
     const * buf;
    size_t count;
    int32_t var_sp_4h;
    int32_t var_sp_8h;
    /* size_t full_write(int fd, const * buf,size_t count); */
    *((ebp - 4)) = 0;
    eax = *((ebp + 0xc));
    *((ebp - 8)) = eax;
    while (*((ebp + 0x10)) != 0) {
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp - 8));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = safe_write ();
        *((ebp - 0xc)) = eax;
        if (*((ebp - 0xc)) == -1) {
            goto label_0;
        }
        if (*((ebp - 0xc)) == 0) {
            errno_location ();
            *(eax) = 0x1c;
        } else {
            eax = *((ebp - 0xc));
            *((ebp - 4)) += eax;
            eax = *((ebp - 0xc));
            *((ebp - 8)) += eax;
            eax = *((ebp - 0xc));
            *((ebp + 0x10)) -= eax;
        }
    }
label_0:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048afc */
#include <stdint.h>
 
void errno_location (void) {
    errno_location ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048d3c */
#include <stdint.h>
 
void error (void) {
    error ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8049db4 */
#include <stdint.h>
 
int32_t dbg_ptr_align (void) {
    int32_t var_18h;
    char const * p1;
    char const * p0;
     const * ptr;
    size_t alignment;
    /* void * ptr_align( const * ptr,size_t alignment); */
    eax = *((ebp + 8));
    *((ebp - 4)) = eax;
    eax = *((ebp + 0xc));
    eax--;
    eax += *((ebp - 4));
    *((ebp - 8)) = eax;
    eax = *((ebp - 8));
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0x18));
    edx = 0;
    eax = *(edx:eax) / ebp + 0xc;
    edx = *(edx:eax) % ebp + 0xc;
    eax = edx;
    eax = -eax;
    eax += *((ebp - 8));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a305 */
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
        *((ebp - 4)) = 0x805067c;
    }
label_0:
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a333 */
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
    uint32_t var_sp_14h;
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
        eax = *((eax + 0x8050684));
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
        eax = *((edx*4 + 0x80506a0));
        /* switch table (127 cases) at 0x80506a0 */
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
            eax = *((edx*4 + 0x805089c));
            /* switch table (34 cases) at 0x805089c */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804ac05 */
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
        al = (*((ebp - 0x14)) == 0x80520e8) ? 1 : 0;
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
        if (*((ebp - 0x20)) != 0x8052180) {
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048aec */
#include <stdint.h>
 
void abort (void) {
    abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b428 */
#include <stdint.h>
 
uint32_t dbg_xalloc_die (void) {
    int32_t errname;
    char * format;
    int32_t var_ch;
    /* void xalloc_die(); */
    *(esp) = 0x8050924;
    eax = gettext ();
    edx = exit_failure;
    *((esp + 0xc)) = eax;
    error (edx, 0, 0x8050935);
    return abort ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b317 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048b6c */
#include <stdint.h>
 
void realloc (void) {
    realloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048b9c */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804aa7f */
#include <stdint.h>
 
int32_t dbg_quotearg_buffer (void) {
    uint32_t var_14h;
    size_t r;
    int32_t e;
    quoting_options const * p;
    char * buffer;
    size_t buffersize;
    char const * arg;
    size_t argsize;
    quoting_options const * o;
    int32_t var_sp_4h;
    int32_t var_sp_8h;
    int32_t var_ch;
    int32_t var_10h;
    uint32_t var_sp_14h;
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048c2c */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b2da */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b2ed */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048d0c */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804ae0a */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b4f4 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804e995 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804e9f6 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804e9d1 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804fbad */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b22a */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804ab73 */
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
        *(obj.slot0) = 0x8052180;
    }
    if (*((ebp - 4)) != obj.slotvec0) {
        eax = *((ebp - 4));
        free (eax);
        *(obj.slotvec) = 0x80520e8;
    }
    *(obj.nslots) = 1;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a1b8 */
#include <stdint.h>
 
int32_t dbg_quote_n (void) {
    int32_t n;
    char const * name;
    int32_t var_4h;
    int32_t var_8h;
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804ae77 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804fbe0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b094 */
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
    char * nitems;
    char * stream;
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804adef */
#include <stdint.h>
 
int32_t dbg_quotearg (void) {
    char const * arg;
    int32_t var_4h;
    /* char * quotearg(char const * arg); */
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = 0;
    quotearg_n ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804adc5 */
#include <stdint.h>
 
int32_t dbg_quotearg_n (void) {
    int32_t n;
    char const * arg;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* char * quotearg_n(int n,char const * arg); */
    *((esp + 0xc)) = 0x8052140;
    *((esp + 8)) = 0xffffffff;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    quotearg_n_options (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804aaee */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b02c */
#include <stdint.h>
 
int32_t dbg_safe_write (void) {
    ssize_t var_14h;
    ssize_t result;
    int32_t fd;
     const * buf;
    size_t count;
    char * ptr;
    size_t nbytes;
    /* size_t safe_write(int fd, const * buf,size_t count); */
    do {
label_0:
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        eax = write (eax, eax, eax);
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) >= 0) {
            eax = *((ebp - 4));
            *((ebp - 0x14)) = eax;
            goto label_1;
        }
        eax = errno_location ();
        eax = *(eax);
    } while (eax == 4);
    eax = errno_location ();
    eax = *(eax);
    if (eax == 0x16) {
        if (*((ebp + 0x10)) <= 0x7fffe000) {
            goto label_2;
        }
        *((ebp + 0x10)) = 0x7fffe000;
        goto label_0;
    }
label_2:
    eax = *((ebp - 4));
    *((ebp - 0x14)) = eax;
label_1:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804ea24 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804ea90 */
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
            eax = *((edx*4 + 0x80509b8));
            /* switch table (23 cases) at 0x80509b8 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804fcfc */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x804fd08)(uint32_t) (ebx);
    ebx += 0x22ec;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804fc90 */
#include <stdint.h>
 
int32_t fstat64 (int32_t arg_8h, char * arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    eax = *((ebp + 0xc));
    eax = _i686_get_pc_thunk_bx (ebx);
    ebx += 0x2355;
    *(esp) = 3;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    fxstat64 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804fc4a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048d6c */
#include <stdint.h>
 
void fxstat64 (void) {
    fxstat64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8049e50 */
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
    *(esp) = 0x8050327;
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
        eax = *((eax + 0x8050574));
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804afc4 */
#include <stdint.h>
 
int32_t dbg_safe_read (char * arg_ch) {
    ssize_t var_14h;
    ssize_t result;
    int32_t fd;
    size_t count;
    void * buf;
    size_t nbyte;
    /* size_t safe_read(int fd,void * buf,size_t count); */
    do {
label_0:
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        eax = read (eax, eax, eax);
        *((ebp - 4)) = eax;
        if (*((ebp - 4)) >= 0) {
            eax = *((ebp - 4));
            *((ebp - 0x14)) = eax;
            goto label_1;
        }
        eax = errno_location ();
        eax = *(eax);
    } while (eax == 4);
    eax = errno_location ();
    eax = *(eax);
    if (eax == 0x16) {
        if (*((ebp + 0x10)) <= 0x7fffe000) {
            goto label_2;
        }
        *((ebp + 0x10)) = 0x7fffe000;
        goto label_0;
    }
label_2:
    eax = *((ebp - 4));
    *((ebp - 0x14)) = eax;
label_1:
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804aef2 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a0e4 */
#include <stdint.h>
 
int32_t dbg_close_stdout_set_file_name (void) {
    char const * file;
    /* void close_stdout_set_file_name(char const * file); */
    eax = *((ebp + 8));
    *(obj.file_name) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804fc50 */
#include <stdint.h>
 
int32_t atexit (int32_t arg_8h) {
    int32_t var_4h;
    int32_t var_8h;
    eax = 0;
    _i686_get_pc_thunk_bx (ebx);
    ebx += 0x2399;
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048b0c */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804af14 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a28b */
#include <stdint.h>
 
int32_t dbg_set_char_quoting (int32_t arg_ch) {
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b348 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b25f */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a266 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804fbf0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x23f9;
    _init ();
    edi = ebx - 0xec;
    eax = ebx - 0xec;
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
        uint32_t (*ebx + esi*4 - 0xec)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        esi++;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a0af */
#include <stdint.h>
 
uint32_t dbg_version_etc (char * arg_18h) {
    va_list authors;
    FILE * stream;
    char const * command_name;
    char const * package;
    char const * version;
    char * var_sp_4h;
    char * var_8h;
    char * var_ch;
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b1fc */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b464 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804afa7 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804ed4c */
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
    eax = *((edx*4 + 0x8050a14));
    /* switch table (84 cases) at 0x8050a14 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a1f8 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b55a */
#include <stdint.h>
 
int32_t dbg_vasnprintf (int32_t arg_8h, int32_t arg_ch, char * arg_10h, char * arg_14h) {
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
            eax = *((edx*4 + 0x8050938));
            /* switch table (5 cases) at 0x8050938 */
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
        eax = *((eax + 0x805094c));
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a0f1 */
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
            error (0, edx, 0x80505e2);
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b3ec */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048c9c */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b3c1 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048c8c */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b414 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048e74 */
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
        *(esp) = "Usage: %s [OPTION] [FILE]...\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        printf (eax);
        ebx = stdout;
        *(esp) = "Concatenate FILE(s), or standard input, to standard output.\n\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = stdout;
        *(esp) = "  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n";
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
        *(esp) = "\nWith no FILE, or when FILE is -, read standard input.\n";
        eax = gettext ();
        *((esp + 4)) = ebx;
        *(esp) = eax;
        fputs_unlocked ();
        ebx = program_name;
        esi = program_name;
        *(esp) = "\nExamples:\n  %s f - g  Output f's contents, then standard input, then g's contents.\n  %s        Copy standard input to standard output.\n";
        eax = gettext ();
        *((esp + 8)) = ebx;
        *((esp + 4)) = esi;
        printf (eax);
        emit_bug_reporting_address ();
    }
    eax = *((ebp + 8));
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804aeb5 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b396 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048b7c */
#include <stdint.h>
 
void calloc (void) {
    calloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a1da */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804b36a */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x804a244 */
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
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8049671 */
#include <stdint.h>
 
uint32_t dbg_main (char ** argv) {
    int32_t var_e0h;
    uint32_t var_dch;
    int32_t var_d8h;
    int32_t argc;
    int32_t var_d0h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_c4h;
    int32_t var_c0h;
    int32_t var_bch;
    int32_t var_b8h;
    int32_t status;
    stat stat_buf;
    int32_t var_ach;
    int32_t var_a0h;
    int32_t var_7ch;
    int32_t var_58h;
    int32_t var_54h;
    ino_t out_ino;
    int32_t var_4ch;
    dev_t out_dev;
    int32_t var_44h;
    int32_t file_open_mode;
    int32_t argind;
    int32_t c;
    char * outbuf;
    char * inbuf;
    size_t page_size;
    size_t insize;
    size_t outsize;
    _Bool show_tabs;
    _Bool show_nonprinting;
    _Bool show_ends;
    _Bool squeeze_blank;
    _Bool number_nonblank;
    _Bool number;
    _Bool have_read_stdin;
    _Bool check_redirection;
    _Bool ok;
    char * errname;
    char * format;
    char * var_ch;
    char * var_10h;
    char * var_sp_14h;
    int32_t var_sp_18h;
    int32_t var_1ch;
    int32_t var_sp_20h;
    int32_t var_sp_24h;
    /* int main(int argc,char ** argv); */
    ecx = esp + 4;
    *((ebp - 0xd4)) = ecx;
    eax = getpagesize ();
    *((ebp - 0x28)) = eax;
    *((ebp - 0x11)) = 1;
    *((ebp - 0x12)) = 1;
    *((ebp - 0x13)) = 0;
    *((ebp - 0x14)) = 0;
    *((ebp - 0x15)) = 0;
    *((ebp - 0x16)) = 0;
    *((ebp - 0x17)) = 0;
    *((ebp - 0x18)) = 0;
    *((ebp - 0x19)) = 0;
    *((ebp - 0x3c)) = 0;
    edx = *((ebp - 0xd4));
    eax = *((edx + 4));
    eax = *(eax);
    *(obj.program_name) = eax;
    setlocale (6, 0x8050260);
    bindtextdomain ("coreutils", "/usr/local/share/locale");
    textdomain ("coreutils");
    atexit (dbg.close_stdout);
    while (*((ebp - 0x34)) != -1) {
        eax = *((ebp - 0x34));
        *((ebp - 0xd8)) = eax;
        if (*((ebp - 0xd8)) != 0x62) {
            if (*((ebp - 0xd8)) <= 0x62) {
                if (*((ebp - 0xd8)) != 0x41) {
                    if (*((ebp - 0xd8)) <= 0x41) {
                        if (*((ebp - 0xd8)) == 0xffffff7d) {
                            goto label_0;
                        }
                        if (*((ebp - 0xd8)) == 0xffffff7e) {
                            goto label_1;
                        }
                        goto label_2;
                    }
                    if (*((ebp - 0xd8)) == 0x45) {
                        goto label_3;
                    }
                    if (*((ebp - 0xd8)) == 0x54) {
                        goto label_4;
                    }
                } else {
                } else {
                }
            }
            if (*((ebp - 0xd8)) != 0x73) {
                if (*((ebp - 0xd8)) <= 0x73) {
                    if (*((ebp - 0xd8)) == 0x65) {
                        goto label_5;
                    }
                    if (*((ebp - 0xd8)) == 0x6e) {
                        goto label_6;
                    }
                    goto label_2;
                }
                if (*((ebp - 0xd8)) == 0x75) {
                    goto label_7;
                }
                if (*((ebp - 0xd8)) < 0x75) {
                    goto label_8;
                }
                if (*((ebp - 0xd8)) == 0x76) {
                    goto label_9;
                }
                *((ebp - 0x14)) = 1;
                *((ebp - 0x15)) = 1;
                goto label_7;
label_5:
                *((ebp - 0x17)) = 1;
                *((ebp - 0x18)) = 1;
                goto label_7;
label_6:
                *((ebp - 0x14)) = 1;
                goto label_7;
            }
            *((ebp - 0x16)) = 1;
            goto label_7;
label_8:
            *((ebp - 0x19)) = 1;
            *((ebp - 0x18)) = 1;
            goto label_7;
label_9:
            *((ebp - 0x18)) = 1;
            goto label_7;
            *((ebp - 0x18)) = 1;
            *((ebp - 0x17)) = 1;
            *((ebp - 0x19)) = 1;
            goto label_7;
label_3:
            *((ebp - 0x17)) = 1;
            goto label_7;
label_4:
            *((ebp - 0x19)) = 1;
            goto label_7;
label_1:
            *(esp) = 0;
            usage ();
            goto label_7;
label_0:
            eax = stdout;
            *((esp + 0x18)) = 0;
            *((esp + 0x14)) = "Richard M. Stallman";
            *((esp + 0x10)) = "Torbjorn Granlund";
            *((esp + 0xc)) = "6.10";
            *((esp + 8)) = "GNU coreutils";
            *((esp + 4)) = 0x80502bc;
            version_etc (eax);
            exit (0);
        }
label_2:
        *(esp) = 1;
        usage ();
label_7:
        *((esp + 0x10)) = 0;
        *((esp + 0xc)) = 0x80501c0;
        *((esp + 8)) = "benstuvAET";
        edx = *((ebp - 0xd4));
        eax = *((edx + 4));
        *((esp + 4)) = eax;
        edx = *((ebp - 0xd4));
        eax = *(edx);
        *(esp) = eax;
        eax = getopt_long ();
        *((ebp - 0x34)) = eax;
    }
    eax = ebp - 0xb0;
    eax = fstat64 (1, eax);
    if (eax < 0) {
        *(esp) = "standard output";
        eax = gettext ();
        ebx = eax;
        eax = errno_location ();
        eax = *(eax);
        error (1, eax, ebx);
    }
    eax = *((ebp - 0x7c));
    if (eax > 0) {
        eax = *((ebp - 0x7c));
        if (eax <= 0x20000000) {
            eax = *((ebp - 0x7c));
            *((ebp - 0xd0)) = eax;
        }
    } else {
        *((ebp - 0xd0)) = 0x200;
    }
    eax = *((ebp - 0xd0));
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0xa0));
    eax &= 0xf000;
    if (eax == 0x8000) {
        eax = *((ebp - 0xb0));
        edx = *((ebp - 0xac));
        *((ebp - 0x48)) = eax;
        *((ebp - 0x44)) = edx;
        eax = *((ebp - 0x58));
        edx = *((ebp - 0x54));
        *((ebp - 0x50)) = eax;
        *((ebp - 0x4c)) = edx;
    } else {
        *((ebp - 0x12)) = 0;
    }
    edx = *((ebp - 0x14));
    eax = *((ebp - 0x17));
    edx |= eax;
    eax = *((ebp - 0x16));
    eax |= edx;
    *(obj.infile) = 0x80502db;
    eax = optind;
    *((ebp - 0x38)) = eax;
    do {
        eax = *((ebp - 0x38));
        edx = *((ebp - 0xd4));
        if (eax < *(edx)) {
            eax = *((ebp - 0x38));
            eax <<= 2;
            edx = *((ebp - 0xd4));
            eax += *((edx + 4));
            eax = *(eax);
            *(obj.infile) = eax;
        }
        eax = infile;
        eax = strcmp (eax, 0x80502db);
        if (eax == 0) {
            *((ebp - 0x13)) = 1;
            *(obj.input_desc) = 0;
        } else {
            edx = infile;
            eax = *((ebp - 0x3c));
            *((esp + 4)) = eax;
            *(esp) = edx;
            eax = open64 ();
            *(obj.input_desc) = eax;
            eax = input_desc;
            if (eax >= 0) {
                goto label_10;
            }
            ebx = infile;
            eax = errno_location ();
            eax = *(eax);
            *((esp + 0xc)) = ebx;
            error (0, eax, 0x8050132);
            *((ebp - 0x11)) = 0;
            goto label_11;
        }
label_10:
        eax = input_desc;
        edx = ebp - 0xb0;
        eax = fstat64 (eax, edx);
        if (eax < 0) {
            ebx = infile;
            eax = errno_location ();
            eax = *(eax);
            *((esp + 0xc)) = ebx;
            error (0, eax, 0x8050132);
            *((ebp - 0x11)) = 0;
        } else {
            eax = *((ebp - 0x7c));
            if (eax > 0) {
                eax = *((ebp - 0x7c));
                if (eax <= 0x20000000) {
                    eax = *((ebp - 0x7c));
                    *((ebp - 0xcc)) = eax;
                }
            } else {
                *((ebp - 0xcc)) = 0x200;
            }
            eax = *((ebp - 0xcc));
            *((ebp - 0x24)) = eax;
            if (*((ebp - 0x12)) != 0) {
                eax = *((ebp - 0xb0));
                edx = *((ebp - 0xac));
                ecx = *((ebp - 0xac));
                ecx ^= *((ebp - 0x44));
                eax ^= *((ebp - 0x48));
                eax |= ecx;
                if (eax == 0) {
                    eax = *((ebp - 0x58));
                    edx = *((ebp - 0x54));
                    ecx = *((ebp - 0x54));
                    ecx ^= *((ebp - 0x4c));
                    eax ^= *((ebp - 0x50));
                    eax |= ecx;
                    if (eax != 0) {
                        goto label_12;
                    }
                    eax = input_desc;
                    if (eax == 0) {
                        goto label_12;
                    }
                    ebx = infile;
                    *(esp) = "%s: input file is output file";
                    eax = gettext ();
                    *((esp + 0xc)) = ebx;
                    error (0, 0, eax);
                    *((ebp - 0x11)) = 0;
                }
            } else {
label_12:
                edx = *((ebp - 0x14));
                eax = *((ebp - 0x17));
                edx |= eax;
                eax = *((ebp - 0x18));
                edx |= eax;
                eax = *((ebp - 0x19));
                edx |= eax;
                eax = *((ebp - 0x16));
                eax |= edx;
                if (eax == 0) {
                    edx = *((ebp - 0x24));
                    *((ebp - 0xe0)) = edx;
                    eax = *((ebp - 0x20));
                    *((ebp - 0xdc)) = eax;
                    edx = *((ebp - 0xe0));
                    if (*((ebp - 0xdc)) < edx) {
                        eax = *((ebp - 0xe0));
                        *((ebp - 0xdc)) = eax;
                    }
                    edx = *((ebp - 0xdc));
                    *((ebp - 0x24)) = edx;
                    edx = *((ebp - 0x28));
                    eax = *((ebp - 0x24));
                    eax += edx;
                    eax--;
                    *(esp) = eax;
                    eax = xmalloc ();
                    *((ebp - 0x2c)) = eax;
                    ebx = *((ebp - 0x11));
                    eax = *((ebp - 0x28));
                    *((esp + 4)) = eax;
                    eax = *((ebp - 0x2c));
                    *(esp) = eax;
                    eax = ptr_align ();
                    edx = eax;
                    eax = *((ebp - 0x24));
                    *((esp + 4)) = eax;
                    *(esp) = edx;
                    al = simple_cat ();
                    eax = (int32_t) al;
                    eax &= ebx;
                    al = (eax != 0) ? 1 : 0;
                    *((ebp - 0x11)) = al;
                } else {
                    edx = *((ebp - 0x28));
                    eax = *((ebp - 0x24));
                    eax += edx;
                    *(esp) = eax;
                    eax = xmalloc ();
                    *((ebp - 0x2c)) = eax;
                    eax = *((ebp - 0x24));
                    eax <<= 2;
                    eax += *((ebp - 0x20));
                    eax += *((ebp - 0x28));
                    eax += 0x12;
                    *(esp) = eax;
                    eax = xmalloc ();
                    *((ebp - 0x30)) = eax;
                    ebx = *((ebp - 0x11));
                    esi = *((ebp - 0x16));
                    edi = *((ebp - 0x17));
                    eax = *((ebp - 0x15));
                    *((ebp - 0xc8)) = eax;
                    edx = *((ebp - 0x14));
                    *((ebp - 0xc4)) = edx;
                    eax = *((ebp - 0x19));
                    *((ebp - 0xc0)) = eax;
                    edx = *((ebp - 0x18));
                    *((ebp - 0xbc)) = edx;
                    eax = *((ebp - 0x28));
                    *((esp + 4)) = eax;
                    eax = *((ebp - 0x30));
                    *(esp) = eax;
                    eax = ptr_align ();
                    *((ebp - 0xb8)) = eax;
                    eax = *((ebp - 0x28));
                    *((esp + 4)) = eax;
                    eax = *((ebp - 0x2c));
                    *(esp) = eax;
                    eax = ptr_align ();
                    edx = eax;
                    *((esp + 0x24)) = esi;
                    *((esp + 0x20)) = edi;
                    eax = *((ebp - 0xc8));
                    *((esp + 0x1c)) = eax;
                    eax = *((ebp - 0xc4));
                    *((esp + 0x18)) = eax;
                    eax = *((ebp - 0xc0));
                    eax = *((ebp - 0xbc));
                    eax = *((ebp - 0x20));
                    eax = *((ebp - 0xb8));
                    eax = *((ebp - 0x24));
                    al = cat (eax, eax, eax);
                    eax = (int32_t) al;
                    eax &= ebx;
                    al = (eax != 0) ? 1 : 0;
                    *((ebp - 0x11)) = al;
                    eax = *((ebp - 0x30));
                    free (eax);
                }
                eax = *((ebp - 0x2c));
                free (eax);
            }
        }
        eax = infile;
        eax = strcmp (eax, 0x80502db);
        if (eax != 0) {
            eax = input_desc;
            eax = close (eax);
            if (eax >= 0) {
                goto label_11;
            }
            ebx = infile;
            eax = errno_location ();
            eax = *(eax);
            *((esp + 0xc)) = ebx;
            error (0, eax, 0x8050132);
            *((ebp - 0x11)) = 0;
        }
label_11:
        *((ebp - 0x38))++;
        eax = *((ebp - 0x38));
        edx = *((ebp - 0xd4));
    } while (eax < *(edx));
    if (*((ebp - 0x13)) != 0) {
        eax = close (0);
        if (eax >= 0) {
            goto label_13;
        }
        *(esp) = "closing standard input";
        eax = gettext ();
        ebx = eax;
        eax = errno_location ();
        eax = *(eax);
        error (1, eax, ebx);
    }
label_13:
    if (*((ebp - 0x11)) != 0) {
        *((ebp - 0xb4)) = 0;
    } else {
        *((ebp - 0xb4)) = 1;
    }
    eax = *((ebp - 0xb4));
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048a9c */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x8048aa8)(uint32_t) (ebx);
    ebx += 0x954c;
    edx = *((ebx - 8));
    if (edx != 0) {
        gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048b5c */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048adc */
#include <stdint.h>
 
void getpagesize (void) {
    getpagesize ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048b1c */
#include <stdint.h>
 
void memcmp (void) {
    memcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048b2c */
#include <stdint.h>
 
void open64 (void) {
    open64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048b3c */
#include <stdint.h>
 
void fputs_unlocked (void) {
    fputs_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048b4c */
#include <stdint.h>
 
void ctype_get_mb_cur_max (void) {
    ctype_get_mb_cur_max ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048b8c */
#include <stdint.h>
 
void write (void) {
    write ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048bbc */
#include <stdint.h>
 
void stpcpy (void) {
    stpcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048bcc */
#include <stdint.h>
 
void ferror_unlocked (void) {
    ferror_unlocked ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048bdc */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048bec */
#include <stdint.h>
 
void bindtextdomain (void) {
    bindtextdomain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048bfc */
#include <stdint.h>
 
void mbrtowc (void) {
    mbrtowc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048c0c */
#include <stdint.h>
 
void read (void) {
    read ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048c3c */
#include <stdint.h>
 
void getopt_long (void) {
    getopt_long ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048c4c */
#include <stdint.h>
 
void ioctl (void) {
    ioctl ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048c5c */
#include <stdint.h>
 
void ctype_b_loc (void) {
    ctype_b_loc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048c6c */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048c7c */
#include <stdint.h>
 
void mbsinit (void) {
    mbsinit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048cac */
#include <stdint.h>
 
void setlocale (void) {
    setlocale ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048ccc */
#include <stdint.h>
 
void signbitl (void) {
    signbitl ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048cdc */
#include <stdint.h>
 
void close (void) {
    close ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048cec */
#include <stdint.h>
 
void fwrite (void) {
    fwrite ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048cfc */
#include <stdint.h>
 
void fprintf (void) {
    fprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048d1c */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048d2c */
#include <stdint.h>
 
void fpending (void) {
    fpending ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048d4c */
#include <stdint.h>
 
void memmove (void) {
    memmove ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048d5c */
#include <stdint.h>
 
void textdomain (void) {
    textdomain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048d7c */
#include <stdint.h>
 
void snprintf (void) {
    snprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048d8c */
#include <stdint.h>
 
void iswprint (void) {
    iswprint ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048d9c */
#include <stdint.h>
 
void strcmp (void) {
    strcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/cat/ia32_elf_from_website/subject.exe @ 0x8048dac */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
