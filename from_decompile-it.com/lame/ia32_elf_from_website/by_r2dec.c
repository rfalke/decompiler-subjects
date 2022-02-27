/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aad0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 40300 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a2bc */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a00c */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x804a018)(uint32_t) (ebx);
    ebx += 0x10fdc;
    edx = *((ebx - 4));
    if (edx != 0) {
        gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a18c */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ab60 */
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
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8054810 */
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
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x805483c */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x8054848)(uint32_t) (ebx);
    ebx += 0x67ac;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ab00 */
#include <stdint.h>
 
int32_t do_global_dtors_aux (void) {
    if (*(obj.completed.7065) != 0) {
        goto label_0;
    }
    eax = dtor_idx.7067;
    ebx = obj.__DTOR_END__;
    ebx -= obj.__DTOR_LIST__;
    ebx >>= 2;
    ebx--;
    if (eax >= ebx) {
        goto label_1;
    }
    do {
        eax++;
        *(obj.dtor_idx.7067) = eax;
        uint32_t (*eax*4 + obj.__DTOR_LIST__)() ();
        eax = dtor_idx.7067;
    } while (eax < ebx);
label_1:
    *(obj.completed.7065) = 1;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ab84 */
#include <stdint.h>
 
int32_t dbg_parse_args_from_string (char * arg_8054860h) {
    char *[128] r;
    int32_t ret;
    int32_t c;
    char * f;
    char * q;
    lame_global_flags * const gfp;
    char const * p;
    char * inPath;
    char * outPath;
    char * src;
    int32_t var_8h;
    size_t var_sp_ch;
    char ** var_sp_10h;
    int32_t var_sp_14h;
    int32_t var_18h;
    /* int parse_args_from_string(lame_global_flags * const gfp,char const * p,char * inPath,char * outPath); */
    *((ebp - 0x14)) = 0;
    if (*((ebp + 0xc)) != 0) {
        eax = *((ebp + 0xc));
        eax = *(eax);
        if (al != 0) {
            goto label_1;
        }
    }
    eax = 0;
    goto label_2;
label_1:
    eax = *((ebp + 0xc));
    eax = strlen (eax);
    eax++;
    eax = malloc (eax);
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    eax = *((ebp - 0xc));
    strcpy (eax, eax);
    eax = *((ebp - 0x14));
    *((ebp + eax*4 - 0x218)) = "lhama";
    *((ebp - 0x14))++;
label_0:
    eax = *((ebp - 0x14));
    edx = *((ebp - 0xc));
    *((ebp + eax*4 - 0x218)) = edx;
    *((ebp - 0x14))++;
    while (al != 0) {
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
        eax = *(eax);
        if (al == 0x20) {
            goto label_3;
        }
        eax = *((ebp - 0xc));
        eax = *(eax);
    }
label_3:
    eax = *((ebp - 0xc));
    eax = *(eax);
    if (al == 0) {
        eax = *((ebp - 0x14));
        *((ebp + eax*4 - 0x218)) = 0;
        *((esp + 0x18)) = 0;
        *((esp + 0x14)) = 0;
        eax = *((ebp + 0x14));
        *((esp + 0x10)) = eax;
        eax = *((ebp + 0x10));
        *((esp + 0xc)) = eax;
        eax = ebp - 0x218;
        *((esp + 8)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = parse_args ();
        *((ebp - 0x18)) = eax;
        eax = *((ebp - 0x10));
        free (eax);
        eax = *((ebp - 0x18));
    } else {
        eax = *((ebp - 0xc));
        *(eax) = 0;
        *((ebp - 0xc))++;
        goto label_0;
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ac92 */
#include <stdint.h>
 
int32_t dbg_init_files (void) {
    FILE * outf;
    lame_global_flags * gf;
    char * inPath;
    char * outPath;
    int * enc_delay;
    int * enc_padding;
    size_t s2;
    char ** var_8h;
    char ** var_ch;
    /* FILE * init_files(lame_global_flags * gf,char * inPath,char * outPath,int * enc_delay,int * enc_padding); */
    eax = *((ebp + 0x10));
    eax = strcmp (0x8054866, eax);
    if (eax != 0) {
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = strcmp (eax, eax);
        if (eax == 0) {
            error_printf ("Input file and Output file are the same. Abort.\n");
            eax = 0;
        }
    } else {
        eax = *((ebp + 0x18));
        *((esp + 0xc)) = eax;
        eax = *((ebp + 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        init_infile ();
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_decode_only ();
        *((esp + 4)) = eax;
        eax = *((ebp + 0x10));
        *(esp) = eax;
        eax = init_outfile ();
        *((ebp - 0xc)) = eax;
        if (*((ebp - 0xc)) == 0) {
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            error_printf ("Can't init outfile '%s'\n");
            eax = 0;
        } else {
            eax = *((ebp - 0xc));
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804b4f0 */
#include <stdint.h>
 
int32_t dbg_print_lame_tag_leading_info (void) {
    lame_global_flags * gf;
    /* void print_lame_tag_leading_info(lame_global_flags * gf); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_bWriteVbrTag ();
    if (eax != 0) {
        console_printf (0x8054a78);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a4dc */
#include <stdint.h>
 
void lame_get_bWriteVbrTag (void) {
    lame_get_bWriteVbrTag ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cb30 */
#include <stdint.h>
 
uint32_t dbg_console_printf (size_t arg_ch) {
    int32_t ret;
    va_list args;
    char const * format;
    char * var_4h;
    int32_t var_8h;
    /* int console_printf(char const * format,va_args ...); */
    eax = ebp + 0xc;
    *((ebp - 0xc)) = eax;
    edx = *((ebp - 0xc));
    eax = .comment;
    *((esp + 8)) = edx;
    edx = *((ebp + 8));
    eax = my_console_printing (eax, edx);
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804c6c0 */
#include <stdint.h>
 
int32_t dbg_my_console_printing (char * arg_ch, int32_t arg_10h) {
    FILE * fp;
    char * format;
    va_list ap;
    /* int my_console_printing(FILE * fp,char const * format,va_list ap); */
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        vfprintf (eax, eax, eax);
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804b513 */
#include <stdint.h>
 
int32_t dbg_print_trailing_info (void) {
    int32_t var_1ch;
    float noclipScale;
    float noclipGainChange;
    int32_t RadioGain;
    lame_global_flags * gf;
    int32_t var_4h;
    /* void print_trailing_info(lame_global_flags * gf); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_bWriteVbrTag ();
    if (eax != 0) {
        console_printf ("done\n");
    }
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_findReplayGain ();
    if (eax != 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_RadioGain ();
        *((ebp - 0xc)) = eax;
        *(fp_stack--) = *((ebp - 0xc));
        *(fp_stack--) = *(0x8054f18);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        if (*((ebp - 0xc)) > 0) {
            eax = 0x8054a92;
        } else {
            eax = 0x80548b4;
        }
        *((esp + 8)) = fp_stack[0];
        fp_stack--;
        *((esp + 4)) = eax;
        console_printf ("ReplayGain: %s%.1fdB\n");
        if (*((ebp - 0xc)) <= 0x1fe) {
            if (*((ebp - 0xc)) >= 0xfffffe02) {
                goto label_0;
            }
        }
        error_printf ("WARNING: ReplayGain exceeds the -51dB to +51dB range. Such a result is too\n         high to be stored in the header.\n");
    }
label_0:
    eax = print_clipping_info;
    if (eax != 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_decode_on_the_fly ();
        if (eax == 0) {
            goto label_1;
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_noclipGainChange ();
        *((ebp - 0x1c)) = eax;
        *(fp_stack--) = *((ebp - 0x1c));
        *(fp_stack--) = *(0x8054f20);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0x10)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_get_noclipScale ();
        *((ebp - 0x14)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x10));
        *(fp_stack--) = 0.0;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al != 0) {
            *(fp_stack--) = *((ebp - 0x10));
            *((esp + 4)) = fp_stack[0];
            fp_stack--;
            console_printf ("WARNING: clipping occurs at the current gain. Set your decoder to decrease\n         the  gain  by  at least %.1fdB or encode again ");
            *(fp_stack--) = *((ebp - 0x14));
            *(fp_stack--) = 0.0;
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            if (al != 0) {
                *(fp_stack--) = *((ebp - 0x14));
                *((esp + 4)) = fp_stack[0];
                fp_stack--;
                console_printf ("using  --scale %.2f\n");
                console_printf ("         or less (the value under --scale is approximate).\n");
            } else {
            }
            console_printf ("using --scale <arg>\n         (For   a   suggestion  on  the  optimal  value  of  <arg>  encode\n         with  --scale 1  first)\n");
        } else {
            *(fp_stack--) = *((ebp - 0x10));
            *(fp_stack--) = *(0x8054f28);
            fp_tmp_2 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_2;
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            if (al != 0) {
                console_printf ("\nThe waveform does not clip and is less than 0.1dB away from full scale.\n");
            } else {
                *(fp_stack--) = *((ebp - 0x10));
                fp_stack[0] = -fp_stack[0];
                *((esp + 4)) = fp_stack[0];
                fp_stack--;
                console_printf ("\nThe waveform does not clip and is at least %.1fdB away from full scale.\n");
            }
        }
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804b68b */
#include <stdint.h>
 
int32_t dbg_write_xing_frame (size_t nitems, char ** stream, size_t size) {
    FILE * outf;
    lame_global_flags * gf;
    size_t owrite;
    size_t imp3;
    unsigned char[147456] mp3buffer;
    uint32_t canary;
    /* int write_xing_frame(lame_global_flags * gf,FILE * outf); */
    eax = *((ebp + 8));
    *((ebp - 0x2401c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x24020)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((esp + 8)) = 0x24000;
    eax = ebp - 0x2400c;
    *((esp + 4)) = eax;
    eax = *((ebp - 0x2401c));
    *(esp) = eax;
    eax = lame_get_lametag_frame ();
    *((ebp - 0x24010)) = eax;
    if (*((ebp - 0x24010)) > 0x24000) {
        eax = *((ebp - 0x24010));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x24000;
        error_printf ("Error writing LAME-tag frame: buffer too small: buffer size=%d  frame size=%d\n");
        eax = 0xffffffff;
    } else {
        if (*((ebp - 0x24010)) == 0) {
            eax = 0;
        } else {
            eax = *((ebp - 0x24020));
            eax = *((ebp - 0x24010));
            eax = ebp - 0x2400c;
            eax = fwrite (eax, 1, eax);
            *((ebp - 0x24014)) = eax;
            eax = *((ebp - 0x24014));
            if (eax != *((ebp - 0x24010))) {
                error_printf ("Error writing LAME-tag \n");
                eax = 0xffffffff;
            } else {
                eax = flush_write;
                if (eax == 1) {
                    eax = *((ebp - 0x24020));
                    fflush (eax);
                }
                eax = *((ebp - 0x24010));
            }
        }
    }
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (eax != 1) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804b79a */
#include <stdint.h>
 
int32_t dbg_lame_encoder (char ** whence, char * stream, char ** arg_14h, char ** arg_18h, char ** offset) {
    char * outPath;
    char * inPath;
    FILE * outf;
    lame_global_flags * gf;
    int[2][1152] Buffer;
    int32_t id3v2_size;
    int32_t owrite;
    int32_t imp3;
    int32_t iread;
    unsigned char[147456] mp3buffer;
    int32_t canary;
    int32_t nogap;
    /* int lame_encoder(lame_global_flags * gf,FILE * outf,int nogap,char * inPath,char * outPath); */
    eax = *((ebp + 8));
    *((ebp - 0x2642c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x26430)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x26434)) = eax;
    eax = *((ebp + 0x18));
    *((ebp - 0x26438)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x26438));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x26434));
    *((esp + 4)) = eax;
    eax = *((ebp - 0x2642c));
    *(esp) = eax;
    encoder_progress_begin ();
    *((esp + 8)) = 0x24000;
    eax = ebp - 0x2400c;
    *((esp + 4)) = eax;
    eax = *((ebp - 0x2642c));
    *(esp) = eax;
    eax = lame_get_id3v2_tag ();
    *((ebp - 0x24014)) = eax;
    eax = *((ebp - 0x24014));
    if (eax > 0x24000) {
        eax = *((ebp - 0x2642c));
        *(esp) = eax;
        encoder_progress_end ();
        eax = *((ebp - 0x24014));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x24000;
        error_printf ("Error writing ID3v2 tag: buffer too small: buffer size=%d  ID3v2 size=%d\n");
        eax = 1;
        goto label_0;
    }
    eax = *((ebp - 0x24014));
    edx = *((ebp - 0x26430));
    eax = ebp - 0x2400c;
    eax = fwrite (edx, 1, eax);
    *((ebp - 0x24018)) = eax;
    eax = *((ebp - 0x24018));
    if (eax != *((ebp - 0x24014))) {
        eax = *((ebp - 0x2642c));
        *(esp) = eax;
        encoder_progress_end ();
        error_printf ("Error writing ID3v2 tag \n");
        eax = 1;
        goto label_0;
    }
    eax = flush_write;
    if (eax == 1) {
        eax = *((ebp - 0x26430));
        fflush (eax);
    }
    eax = *((ebp - 0x24014));
    *((ebp - 0x2401c)) = eax;
    do {
        eax = ebp - 0x2641c;
        *((esp + 4)) = eax;
        eax = *((ebp - 0x2642c));
        *(esp) = eax;
        eax = get_audio ();
        *((ebp - 0x24010)) = eax;
        if (*((ebp - 0x24010)) >= 0) {
            eax = *((ebp - 0x2642c));
            *(esp) = eax;
            encoder_progress ();
            eax = ebp - 0x2641c;
            ecx = eax + 0x1200;
            eax = ebp - 0x2641c;
            *((esp + 0x14)) = 0x24000;
            edx = ebp - 0x2400c;
            *((esp + 0x10)) = edx;
            edx = *((ebp - 0x24010));
            *((esp + 0xc)) = edx;
            *((esp + 8)) = ecx;
            *((esp + 4)) = eax;
            eax = *((ebp - 0x2642c));
            *(esp) = eax;
            eax = lame_encode_buffer_int ();
            *((ebp - 0x24014)) = eax;
            if (*((ebp - 0x24014)) < 0) {
                if (*((ebp - 0x24014)) == -1) {
                    error_printf ("mp3 buffer is not big enough... \n");
                } else {
                    eax = *((ebp - 0x24014));
                    *((esp + 4)) = eax;
                    error_printf ("mp3 internal error:  error code=%i\n");
                }
                eax = 1;
                goto label_0;
            }
            eax = *((ebp - 0x24014));
            edx = *((ebp - 0x26430));
            eax = ebp - 0x2400c;
            eax = fwrite (edx, 1, eax);
            *((ebp - 0x24018)) = eax;
            eax = *((ebp - 0x24018));
            if (eax == *((ebp - 0x24014))) {
                goto label_1;
            }
            error_printf ("Error writing mp3 output \n");
            eax = 1;
            goto label_0;
        }
label_1:
        eax = flush_write;
        if (eax == 1) {
            eax = *((ebp - 0x26430));
            fflush (eax);
        }
    } while (*((ebp - 0x24010)) > 0);
    if (*((ebp + 0x10)) != 0) {
        *((esp + 8)) = 0x24000;
        eax = ebp - 0x2400c;
        *((esp + 4)) = eax;
        eax = *((ebp - 0x2642c));
        *(esp) = eax;
        eax = lame_encode_flush_nogap ();
        *((ebp - 0x24014)) = eax;
    } else {
        *((esp + 8)) = 0x24000;
        eax = ebp - 0x2400c;
        *((esp + 4)) = eax;
        eax = *((ebp - 0x2642c));
        *(esp) = eax;
        eax = lame_encode_flush ();
        *((ebp - 0x24014)) = eax;
    }
    if (*((ebp - 0x24014)) < 0) {
        if (*((ebp - 0x24014)) == -1) {
            error_printf ("mp3 buffer is not big enough... \n");
        } else {
            eax = *((ebp - 0x24014));
            *((esp + 4)) = eax;
            error_printf ("mp3 internal error:  error code=%i\n");
        }
        eax = 1;
    } else {
        eax = *((ebp - 0x2642c));
        *(esp) = eax;
        encoder_progress_end ();
        eax = *((ebp - 0x24014));
        edx = *((ebp - 0x26430));
        eax = ebp - 0x2400c;
        eax = fwrite (edx, 1, eax);
        *((ebp - 0x24018)) = eax;
        eax = *((ebp - 0x24018));
        if (eax != *((ebp - 0x24014))) {
            error_printf ("Error writing mp3 output \n");
            eax = 1;
        } else {
            eax = flush_write;
            if (eax == 1) {
                eax = *((ebp - 0x26430));
                fflush (eax);
            }
            *((esp + 8)) = 0x24000;
            eax = ebp - 0x2400c;
            *((esp + 4)) = eax;
            eax = *((ebp - 0x2642c));
            *(esp) = eax;
            eax = lame_get_id3v1_tag ();
            *((ebp - 0x24014)) = eax;
            eax = *((ebp - 0x24014));
            if (eax > 0x24000) {
                eax = *((ebp - 0x24014));
                *((esp + 8)) = eax;
                *((esp + 4)) = 0x24000;
                error_printf ("Error writing ID3v1 tag: buffer too small: buffer size=%d  ID3v1 size=%d\n");
            } else {
                if (*((ebp - 0x24014)) <= 0) {
                    goto label_2;
                }
                eax = *((ebp - 0x24014));
                edx = *((ebp - 0x26430));
                eax = ebp - 0x2400c;
                eax = fwrite (edx, 1, eax);
                *((ebp - 0x24018)) = eax;
                eax = *((ebp - 0x24018));
                if (eax != *((ebp - 0x24014))) {
                    error_printf ("Error writing ID3v1 tag \n");
                    eax = 1;
                    goto label_0;
                }
                eax = flush_write;
                if (eax != 1) {
                    goto label_2;
                }
                eax = *((ebp - 0x26430));
                fflush (eax);
            }
label_2:
            eax = silent;
            if (eax <= 0) {
                eax = *((ebp - 0x2642c));
                *(esp) = eax;
                print_lame_tag_leading_info ();
            }
            eax = *((ebp - 0x2401c));
            eax = *((ebp - 0x26430));
            eax = fseek (eax, eax, 0);
            if (eax != 0) {
                error_printf ("fatal error: can't update LAME-tag frame!\n");
            } else {
                eax = *((ebp - 0x26430));
                eax = *((ebp - 0x2642c));
                write_xing_frame (eax, eax);
            }
            eax = silent;
            if (eax <= 0) {
                eax = *((ebp - 0x2642c));
                *(esp) = eax;
                print_trailing_info ();
            }
            eax = 0;
        }
    }
label_0:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804bc85 */
#include <stdint.h>
 
int32_t dbg_brhist_init_package (void) {
    lame_global_flags * gf;
    int32_t var_4h;
    int32_t var_8h;
    /* void brhist_init_package(lame_global_flags * gf); */
    eax = brhist;
    if (eax != 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_VBR_max_bitrate_kbps ();
        ebx = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_VBR_min_bitrate_kbps ();
        *((esp + 8)) = ebx;
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = brhist_init ();
        if (eax == 0) {
            goto label_0;
        }
        *(obj.brhist_1) = 0;
    } else {
        *((esp + 8)) = 0x80;
        *((esp + 4)) = 0x80;
        eax = *((ebp + 8));
        *(esp) = eax;
        brhist_init ();
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804bcf1 */
#include <stdint.h>
 
int32_t dbg_parse_nogap_filenames (void) {
    size_t var_10h;
    char * slasher;
    int32_t nogapout;
    char * inPath;
    char * outPath;
    char * outdir;
    char ** src;
    char * n;
    /* void parse_nogap_filenames(int nogapout,char * inPath,char * outPath,char * outdir); */
    eax = *((ebp + 0x14));
    eax = *((ebp + 0x10));
    strcpy (eax, eax);
    if (*((ebp + 8)) == 0) {
        eax = *((ebp + 0xc));
        eax = *((ebp + 0x10));
        strncpy (eax, eax, 0xffd);
        eax = *((ebp + 0x10));
        eax = strlen (eax);
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0x10));
        eax -= 3;
        eax += *((ebp + 0x10));
        eax = *(eax);
        if (al == 0x77) {
            eax = *((ebp - 0x10));
            eax -= 2;
            eax += *((ebp + 0x10));
            eax = *(eax);
            if (al != 0x61) {
                goto label_0;
            }
            eax = *((ebp - 0x10));
            eax--;
            eax += *((ebp + 0x10));
            eax = *(eax);
            if (al != 0x76) {
                goto label_0;
            }
            eax = *((ebp - 0x10));
            eax -= 4;
            eax += *((ebp + 0x10));
            eax = *(eax);
            if (al != 0x2e) {
                goto label_0;
            }
            eax = *((ebp - 0x10));
            eax -= 3;
            eax += *((ebp + 0x10));
            *(eax) = 0x6d;
            eax = *((ebp - 0x10));
            eax -= 2;
            eax += *((ebp + 0x10));
            *(eax) = 0x70;
            eax = *((ebp - 0x10));
            eax--;
            eax += *((ebp + 0x10));
            *(eax) = 0x33;
            goto label_1;
        }
label_0:
        eax = *((ebp - 0x10));
        edx = *((ebp + 0x10));
        eax = edx + eax;
        *(eax) = 0x2e;
        eax = *((ebp - 0x10));
        eax++;
        eax += *((ebp + 0x10));
        *(eax) = 0x6d;
        eax = *((ebp - 0x10));
        eax += 2;
        eax += *((ebp + 0x10));
        *(eax) = 0x70;
        eax = *((ebp - 0x10));
        eax += 3;
        eax += *((ebp + 0x10));
        *(eax) = 0x33;
        eax = *((ebp - 0x10));
        eax += 4;
        eax += *((ebp + 0x10));
        *(eax) = 0;
        goto label_1;
    }
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *((ebp - 0xc)) += 0xffd;
    while (al != 0x3a) {
        *((ebp - 0xc))--;
        eax = *((ebp - 0xc));
        eax = *(eax);
        if (al == 0x2f) {
            goto label_2;
        }
        eax = *((ebp - 0xc));
        eax = *(eax);
        if (al == 0x5c) {
            goto label_2;
        }
        eax = *((ebp - 0xc));
        if (eax == *((ebp + 0xc))) {
            goto label_2;
        }
        eax = *((ebp - 0xc));
        eax = *(eax);
    }
label_2:
    eax = *((ebp - 0xc));
    if (eax != *((ebp + 0xc))) {
        eax = *((ebp + 0x10));
        eax = strlen (eax);
        eax--;
        eax += *((ebp + 0x10));
        eax = *(eax);
        if (al != 0x2f) {
            eax = *((ebp + 0x10));
            eax = strlen (eax);
            eax--;
            eax += *((ebp + 0x10));
            eax = *(eax);
            if (al == 0x5c) {
                goto label_3;
            }
            eax = *((ebp + 0x10));
            eax = strlen (eax);
            eax--;
            eax += *((ebp + 0x10));
            eax = *(eax);
            if (al != 0x3a) {
                goto label_4;
            }
        }
label_3:
        *((ebp - 0xc))++;
    } else {
label_4:
        eax = *((ebp - 0xc));
        if (eax != *((ebp + 0xc))) {
            goto label_5;
        }
        eax = *((ebp + 0x10));
        eax = strlen (eax);
        eax--;
        eax += *((ebp + 0x10));
        eax = *(eax);
        if (al == 0x2f) {
            goto label_5;
        }
        eax = *((ebp + 0x10));
        eax = strlen (eax);
        eax--;
        eax += *((ebp + 0x10));
        eax = *(eax);
        if (al == 0x5c) {
            goto label_5;
        }
        eax = *((ebp + 0x10));
        eax = strlen (eax);
        eax--;
        eax += *((ebp + 0x10));
        eax = *(eax);
        if (al == 0x3a) {
            goto label_5;
        }
        eax = 0x8054ed7;
        eax = *((ebp + 0x10));
        strcat (eax, eax);
    }
label_5:
    eax = *((ebp - 0xc));
    eax = *((ebp + 0x10));
    strncat (eax, eax, 0xffd);
    eax = *((ebp + 0x10));
    eax = strlen (eax);
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    eax -= 3;
    eax += *((ebp + 0x10));
    eax = *(eax);
    if (al == 0x77) {
        eax = *((ebp - 0x10));
        eax -= 2;
        eax += *((ebp + 0x10));
        eax = *(eax);
        if (al == 0x61) {
            eax = *((ebp - 0x10));
            eax--;
            eax += *((ebp + 0x10));
            eax = *(eax);
            if (al != 0x76) {
                goto label_6;
            }
            eax = *((ebp - 0x10));
            eax -= 4;
            eax += *((ebp + 0x10));
            eax = *(eax);
            if (al != 0x2e) {
                goto label_6;
            }
            eax = *((ebp - 0x10));
            eax -= 3;
            eax += *((ebp + 0x10));
            *(eax) = 0x6d;
            eax = *((ebp - 0x10));
            eax -= 2;
            eax += *((ebp + 0x10));
            *(eax) = 0x70;
            eax = *((ebp - 0x10));
            eax--;
            eax += *((ebp + 0x10));
            *(eax) = 0x33;
        }
    } else {
label_6:
        eax = *((ebp - 0x10));
        edx = *((ebp + 0x10));
        eax = edx + eax;
        *(eax) = 0x2e;
        eax = *((ebp - 0x10));
        eax++;
        eax += *((ebp + 0x10));
        *(eax) = 0x6d;
        eax = *((ebp - 0x10));
        eax += 2;
        eax += *((ebp + 0x10));
        *(eax) = 0x70;
        eax = *((ebp - 0x10));
        eax += 3;
        eax += *((ebp + 0x10));
        *(eax) = 0x33;
        eax = *((ebp - 0x10));
        eax += 4;
        eax += *((ebp + 0x10));
        *(eax) = 0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804c6ee */
#include <stdint.h>
 
int32_t dbg_my_error_printing (int32_t arg_ch, int32_t arg_10h) {
    FILE * fp;
    char * format;
    va_list ap;
    /* int my_error_printing(FILE * fp,char const * format,va_list ap); */
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        vfprintf (eax, eax, eax);
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804c71c */
#include <stdint.h>
 
int32_t dbg_my_report_printing (int32_t arg_ch, int32_t arg_10h) {
    FILE * fp;
    char * format;
    va_list ap;
    /* int my_report_printing(FILE * fp,char const * format,va_list ap); */
    if (*((ebp + 8)) != 0) {
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        vfprintf (eax, eax, eax);
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804c74a */
#include <stdint.h>
 
int32_t dbg_apply_termcap_settings (void * arg_8h) {
    Console_IO_t * const mfp;
    int32_t val;
    char * tp;
    char const * term_name;
    char[2048] term_buff;
    char[10] tc;
    int32_t canary;
    char * src;
    /* void apply_termcap_settings(Console_IO_t * const mfp); */
    eax = *((ebp + 8));
    *((ebp - 0x82c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = getenv ("TERM");
    *((ebp - 0x81c)) = eax;
    if (*((ebp - 0x81c)) != 0) {
        eax = *((ebp - 0x81c));
        *((esp + 4)) = eax;
        eax = ebp - 0x816;
        *(esp) = eax;
        eax = tgetent ();
        if (eax == 1) {
            *(esp) = 0x8054f35;
            eax = tgetnum ();
            *((ebp - 0x824)) = eax;
            if (*((ebp - 0x824)) > 0x27) {
                if (*((ebp - 0x824)) > 0x200) {
                    goto label_0;
                }
                eax = *((ebp - 0x82c));
                edx = *((ebp - 0x824));
                *((eax + 0x14)) = edx;
            }
label_0:
            *(esp) = 0x8054f38;
            eax = tgetnum ();
            *((ebp - 0x824)) = eax;
            if (*((ebp - 0x824)) > 0xf) {
                if (*((ebp - 0x824)) > 0x100) {
                    goto label_1;
                }
                eax = *((ebp - 0x82c));
                edx = *((ebp - 0x824));
                *((eax + 0x18)) = edx;
            }
label_1:
            eax = ebp - 0x16;
            *((ebp - 0x820)) = eax;
            eax = *((ebp - 0x820));
            *(eax) = 0;
            eax = ebp - 0x820;
            *((esp + 4)) = eax;
            *(esp) = 0x8054f3b;
            eax = tgetstr ();
            *((ebp - 0x820)) = eax;
            eax = *((ebp - 0x820));
            if (eax != 0) {
                eax = *((ebp - 0x820));
                edx = *((ebp - 0x82c));
                edx += 0x1c;
                strcpy (edx, eax);
            }
            eax = ebp - 0x16;
            *((ebp - 0x820)) = eax;
            eax = *((ebp - 0x820));
            *(eax) = 0;
            eax = ebp - 0x820;
            *((esp + 4)) = eax;
            *(esp) = 0x8054f3e;
            eax = tgetstr ();
            *((ebp - 0x820)) = eax;
            eax = *((ebp - 0x820));
            if (eax != 0) {
                eax = *((ebp - 0x820));
                edx = *((ebp - 0x82c));
                edx += 0x26;
                strcpy (edx, eax);
            }
            eax = ebp - 0x16;
            *((ebp - 0x820)) = eax;
            eax = *((ebp - 0x820));
            *(eax) = 0;
            eax = ebp - 0x820;
            *((esp + 4)) = eax;
            *(esp) = 0x8054f41;
            eax = tgetstr ();
            *((ebp - 0x820)) = eax;
            eax = *((ebp - 0x820));
            if (eax != 0) {
                eax = *((ebp - 0x820));
                edx = *((ebp - 0x82c));
                edx += 0x30;
                strcpy (edx, eax);
            }
            eax = ebp - 0x16;
            *((ebp - 0x820)) = eax;
            eax = *((ebp - 0x820));
            *(eax) = 0;
            eax = ebp - 0x820;
            *((esp + 4)) = eax;
            *(esp) = 0x8054f44;
            eax = tgetstr ();
            *((ebp - 0x820)) = eax;
            eax = *((ebp - 0x820));
            if (eax == 0) {
                goto label_2;
            }
            eax = *((ebp - 0x820));
            edx = *((ebp - 0x82c));
            edx += 0x3a;
            strcpy (edx, eax);
        } else {
        } else {
        }
    }
label_2:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (edx != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804c978 */
#include <stdint.h>
 
int32_t dbg_init_console (void) {
    Console_IO_t * const mfp;
    char * buf;
    size_t mode;
    size_t size;
    /* int init_console(Console_IO_t * const mfp); */
    eax = *((ebp + 8));
    *((eax + 0x14)) = 0x50;
    eax = *((ebp + 8));
    *((eax + 0x18)) = 0x19;
    edx = stderr;
    eax = *((ebp + 8));
    *((eax + 8)) = edx;
    edx = stderr;
    eax = *((ebp + 8));
    *((eax + 0xc)) = edx;
    eax = *((ebp + 8));
    *((eax + 0x10)) = 0;
    eax = *((ebp + 8));
    edx = eax + 0x44;
    eax = *((ebp + 8));
    eax = *((eax + 8));
    setvbuf (0x800, edx, 0);
    eax = 0x8054f47;
    edx = *((ebp + 8));
    edx += 0x1c;
    memcpy (edx, eax, 4);
    eax = *((ebp + 8));
    apply_termcap_settings (eax);
    eax = *((ebp + 8));
    *(eax) = 0x434f4e53;
    eax = *((ebp + 8));
    *((eax + 0x844)) = 0;
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a68c */
#include <stdint.h>
 
void setvbuf (void) {
    setvbuf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a48c */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ca23 */
#include <stdint.h>
 
int32_t dbg_deinit_console (void) {
    Console_IO_t * const mfp;
    char * buf;
    size_t mode;
    size_t size;
    /* void deinit_console(Console_IO_t * const mfp); */
    eax = *((ebp + 8));
    eax = *((eax + 0x10));
    if (eax != 0) {
        eax = *((ebp + 8));
        eax = *((eax + 0x10));
        fclose (eax);
        eax = *((ebp + 8));
        *((eax + 0x10)) = 0;
    }
    eax = *((ebp + 8));
    eax = *((eax + 8));
    fflush (eax);
    eax = *((ebp + 8));
    eax = *((eax + 8));
    setvbuf (0, 0, 2);
    eax = *((ebp + 8));
    eax += 0x44;
    memset (eax, 0x55, 0x400);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a43c */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a3ec */
#include <stdint.h>
 
void fflush (void) {
    fflush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a25c */
#include <stdint.h>
 
void memset (void) {
    memset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cc8c */
#include <stdint.h>
 
int32_t dbg_min_size_t (void) {
    size_t a;
    size_t b;
    /* size_t min_size_t(size_t a,size_t b); */
    eax = *((ebp + 8));
    if (eax < *((ebp + 0xc))) {
        eax = *((ebp + 8));
    } else {
        eax = *((ebp + 0xc));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ccbe */
#include <stdint.h>
 
int32_t dbg_fskip (char * arg_8h, size_t arg_ch, size_t arg_10h) {
    FILE * fp;
    stat file_stat;
    int32_t var_1070h;
    size_t const read;
    size_t const bytes_to_skip;
    size_t var_1018h;
    int32_t var_1014h;
    int const fd;
    char[4096] buffer;
    int32_t canary;
    size_t offset;
    size_t whence;
    char * var_sp_ch;
    /* int fskip(FILE * fp,long int offset,int whence); */
    eax = *((ebp + 8));
    *((ebp - 0x108c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x108c));
    eax = fileno (eax);
    *((ebp - 0x1010)) = eax;
    eax = ebp - 0x1080;
    eax = *((ebp - 0x1010));
    eax = fstat64 (eax, eax);
    if (eax != 0) {
        goto label_0;
    }
    eax = *((ebp - 0x1070));
    eax &= 0xf000;
    if (eax != 0x1000) {
        goto label_0;
    }
    if (*((ebp + 0x10)) == 1) {
        if (*((ebp + 0xc)) >= 0) {
            goto label_1;
        }
    }
    eax = 0xffffffff;
    goto label_2;
    do {
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        *(esp) = 0x1000;
        eax = min_size_t ();
        *((ebp - 0x1014)) = eax;
        eax = *((ebp - 0x108c));
        eax = *((ebp - 0x1014));
        eax = ebp - 0x100c;
        eax = fread (eax, 1, eax);
        *((ebp - 0x1018)) = eax;
        if (*((ebp - 0x1018)) == 0) {
            eax = 0xffffffff;
            goto label_2;
        }
        eax = *((ebp + 0xc));
        eax -= *((ebp - 0x1018));
        *((ebp + 0xc)) = eax;
label_1:
    } while (*((ebp + 0xc)) > 0);
    eax = 0;
    goto label_2;
label_0:
    eax = *((ebp + 0x10));
    eax = *((ebp + 0xc));
    eax = *((ebp - 0x108c));
    eax = fseek (eax, eax, eax);
    if (eax == 0) {
        eax = 0;
        goto label_2;
    }
    if (*((ebp + 0x10)) == 1) {
        if (*((ebp + 0xc)) >= 0) {
            goto label_3;
        }
    }
    eax = silent;
    if (eax <= 9) {
        error_printf ("fskip problem: Mostly the return status of functions is not evaluate so it is more secure to polute <stderr>.\n");
    }
    eax = 0xffffffff;
    goto label_2;
    do {
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        *(esp) = 0x1000;
        eax = min_size_t ();
        *((ebp - 0x101c)) = eax;
        eax = *((ebp - 0x108c));
        eax = *((ebp - 0x101c));
        eax = ebp - 0x100c;
        eax = fread (eax, 1, eax);
        *((ebp - 0x1020)) = eax;
        if (*((ebp - 0x1020)) == 0) {
            eax = 0xffffffff;
            goto label_2;
        }
        eax = *((ebp + 0xc));
        eax -= *((ebp - 0x1020));
        *((ebp + 0xc)) = eax;
label_3:
    } while (*((ebp + 0xc)) > 0);
    eax = 0;
label_2:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (*((ebp + 0xc)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804d035 */
#include <stdint.h>
 
int32_t dbg_get_audio_common (int32_t c) {
    int[2304] insamp;
    short int[2][1152] buf_tmp16;
    int * p;
    int32_t i;
    uint32_t tmp_num_samples;
    uint32_t remaining;
    int32_t samples_to_read;
    int32_t framesize;
    int32_t samples_read;
    int32_t num_channels;
    lame_global_flags * const gfp;
    int[1152] * buffer;
    short int[1152] * buffer16;
    /* int get_audio_common(lame_global_flags * const gfp,int[1152] * buffer,short int[1152] * buffer16); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_num_channels ();
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_framesize ();
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x14));
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_num_samples ();
    *((ebp - 0x20)) = eax;
    eax = global;
    if (eax != 0) {
        edx = .comment;
        eax = *((ebp - 0x20));
        if (edx <= eax) {
            eax = edx;
        }
        edx = *((ebp - 0x20));
        ecx = *((ebp - 0x20));
        ecx -= eax;
        eax = ecx;
        *((ebp - 0x1c)) = eax;
        eax = *((ebp - 0x14));
        if (eax <= *((ebp - 0x1c))) {
            goto label_0;
        }
        if (*((ebp - 0x20)) == 0) {
            goto label_0;
        }
        eax = *((ebp - 0x1c));
        *((ebp - 0x18)) = eax;
    }
label_0:
    eax = input_format;
    *(esp) = eax;
    eax = is_mpeg_file_format ();
    if (eax != 0) {
        if (*((ebp + 0xc)) != 0) {
            eax = .comment;
            edx = ebp - 0x1228;
            *((esp + 8)) = edx;
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = read_samples_mp3 ();
            *((ebp - 0x10)) = eax;
        } else {
            eax = .comment;
            edx = *((ebp + 0x10));
            *((esp + 8)) = edx;
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = read_samples_mp3 ();
            *((ebp - 0x10)) = eax;
        }
        if (*((ebp - 0x10)) >= 0) {
            goto label_1;
        }
        eax = *((ebp - 0x10));
        goto label_2;
    }
    eax = *((ebp - 0xc));
    edx = *((ebp - 0xc));
    edx *= *((ebp - 0x18));
    eax = .comment;
    *((esp + 8)) = edx;
    edx = ebp - 0x3628;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = read_samples_pcm ();
    *((ebp - 0x10)) = eax;
    if (*((ebp - 0x10)) < 0) {
        eax = *((ebp - 0x10));
        goto label_2;
    }
    eax = *((ebp - 0x10));
    edx = eax*4;
    eax = ebp - 0x3628;
    eax += edx;
    *((ebp - 0x28)) = eax;
    eax = *((ebp - 0x10));
    edx = *((ebp - 0x10));
    edx >>= 0x1f;
    eax = *(edx:eax) / ebp - 0xc;
    edx = *(edx:eax) % ebp - 0xc;
    *((ebp - 0x10)) = eax;
    if (*((ebp + 0xc)) == 0) {
        goto label_3;
    }
    if (*((ebp - 0xc)) != 2) {
        goto label_4;
    }
    eax = *((ebp - 0x10));
    *((ebp - 0x24)) = eax;
    while (*((ebp - 0x24)) >= 0) {
        eax = *((ebp + 0xc));
        ecx = eax + 0x1200;
        eax = *((ebp - 0x24));
        *((ebp - 0x28)) -= 4;
        edx = *((ebp - 0x28));
        edx = *(edx);
        *((ecx + eax*4)) = edx;
        edx = *((ebp - 0x24));
        *((ebp - 0x28)) -= 4;
        eax = *((ebp - 0x28));
        ecx = *(eax);
        eax = *((ebp + 0xc));
        *((eax + edx*4)) = ecx;
        *((ebp - 0x24))--;
    }
    goto label_1;
label_4:
    if (*((ebp - 0xc)) != 1) {
        goto label_1;
    }
    eax = *((ebp - 0x10));
    edx = eax*4;
    eax = *((ebp + 0xc));
    eax += 0x1200;
    memset (eax, 0, edx);
    eax = *((ebp - 0x10));
    *((ebp - 0x24)) = eax;
    while (*((ebp - 0x24)) >= 0) {
        edx = *((ebp - 0x24));
        *((ebp - 0x28)) -= 4;
        eax = *((ebp - 0x28));
        ecx = *(eax);
        eax = *((ebp + 0xc));
        *((eax + edx*4)) = ecx;
        *((ebp - 0x24))--;
    }
    goto label_1;
label_3:
    if (*((ebp - 0xc)) != 2) {
        goto label_5;
    }
    eax = *((ebp - 0x10));
    *((ebp - 0x24)) = eax;
    while (*((ebp - 0x24)) >= 0) {
        eax = *((ebp + 0x10));
        ecx = eax + 0x900;
        eax = *((ebp - 0x24));
        *((ebp - 0x28)) -= 4;
        edx = *((ebp - 0x28));
        edx = *(edx);
        edx >>= 0x10;
        *((ecx + eax*2)) = dx;
        edx = *((ebp - 0x24));
        *((ebp - 0x28)) -= 4;
        eax = *((ebp - 0x28));
        eax = *(eax);
        eax >>= 0x10;
        ecx = eax;
        eax = *((ebp + 0x10));
        *((eax + edx*2)) = cx;
        *((ebp - 0x24))--;
    }
    goto label_1;
label_5:
    if (*((ebp - 0xc)) != 1) {
        goto label_1;
    }
    eax = *((ebp - 0x10));
    edx = eax + eax;
    eax = *((ebp + 0x10));
    eax += 0x900;
    memset (eax, 0, edx);
    eax = *((ebp - 0x10));
    *((ebp - 0x24)) = eax;
    while (*((ebp - 0x24)) >= 0) {
        edx = *((ebp - 0x24));
        *((ebp - 0x28)) -= 4;
        eax = *((ebp - 0x28));
        eax = *(eax);
        eax >>= 0x10;
        ecx = eax;
        eax = *((ebp + 0x10));
        *((eax + edx*2)) = cx;
        *((ebp - 0x24))--;
    }
label_1:
    eax = input_format;
    *(esp) = eax;
    eax = is_mpeg_file_format ();
    if (eax == 0) {
        goto label_6;
    }
    if (*((ebp + 0xc)) == 0) {
        goto label_6;
    }
    eax = *((ebp - 0x10));
    *((ebp - 0x24)) = eax;
    while (*((ebp - 0x24)) >= 0) {
        edx = *((ebp - 0x24));
        eax = *((ebp - 0x24));
        eax = *((ebp + eax*2 - 0x1228));
        eax = (int32_t) ax;
        ecx = eax;
        ecx <<= 0x10;
        eax = *((ebp + 0xc));
        *((eax + edx*4)) = ecx;
        *((ebp - 0x24))--;
    }
    if (*((ebp - 0xc)) != 2) {
        goto label_7;
    }
    eax = *((ebp - 0x10));
    *((ebp - 0x24)) = eax;
    while (*((ebp - 0x24)) >= 0) {
        eax = *((ebp + 0xc));
        edx = eax + 0x1200;
        eax = *((ebp - 0x24));
        ecx = *((ebp - 0x24));
        ecx += 0x480;
        ecx = *((ebp + ecx*2 - 0x1228));
        ecx = (int32_t) cx;
        ecx <<= 0x10;
        *((edx + eax*4)) = ecx;
        *((ebp - 0x24))--;
    }
    goto label_6;
label_7:
    if (*((ebp - 0xc)) == 1) {
        eax = *((ebp - 0x10));
        edx = eax*4;
        eax = *((ebp + 0xc));
        eax += 0x1200;
        memset (eax, 0, edx);
    }
label_6:
    if (*((ebp - 0x20)) != -1) {
        edx = .comment;
        eax = *((ebp - 0x10));
        eax = edx + eax;
        *(0x805b3dc) = eax;
    }
    eax = *((ebp - 0x10));
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804d384 */
#include <stdint.h>
 
int32_t dbg_read_samples_mp3 (void) {
    int32_t out;
    lame_global_flags * const gfp;
    FILE * const musicin;
    short int[1152] * mpg123pcm;
    char[9] const type_name;
    int32_t c;
    size_t n;
    int32_t var_ch;
    /* int read_samples_mp3(lame_global_flags * const gfp,FILE * const musicin,short int[1152] * mpg123pcm); */
    eax = *((ebp + 0x10));
    edx = eax + 0x900;
    eax = *((ebp + 0x10));
    eax = *((ebp + 0xc));
    eax = lame_decode_fromfile (0x805c560, eax, edx);
    *((ebp - 0xc)) = eax;
    if (*((ebp - 0xc)) < 0) {
        eax = *((ebp + 0x10));
        memset (eax, 0, 0x1200);
        eax = 0;
    } else {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_num_channels ();
        edx = .comment;
        if (eax != edx) {
            eax = silent;
            if (eax <= 9) {
                *((esp + 4)) = obj.type_name.4755;
                error_printf ("Error: number of channels has changed in %s - not supported\n");
            }
            *((ebp - 0xc)) = 0xffffffff;
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_in_samplerate ();
        edx = .comment;
        if (eax != edx) {
            eax = silent;
            if (eax <= 9) {
                *((esp + 4)) = obj.type_name.4755;
                error_printf ("Error: sample frequency has changed in %s - not supported\n");
            }
            *((ebp - 0xc)) = 0xffffffff;
        }
        eax = *((ebp - 0xc));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804d9ab */
#include <stdint.h>
 
int32_t dbg_read_samples_pcm (void) {
    int32_t swap_byte_order;
    int32_t samples_read;
    FILE * musicin;
    int * sample_buffer;
    int32_t samples_to_read;
    int32_t var_4h;
    uint32_t var_8h;
    int32_t var_ch;
    int32_t var_sp_10h;
    /* int read_samples_pcm(FILE * musicin,int * sample_buffer,int samples_to_read); */
    eax = .comment;
    if (eax != 0x10) {
        if (eax <= 0x10) {
            if (eax == 8) {
                goto label_0;
            }
            goto label_1;
        }
        if (eax == 0x18) {
            goto label_2;
        }
        if (eax != 0x20) {
            goto label_1;
        }
    }
label_2:
    eax = *(obj.in_signed);
    if (eax == 0) {
        error_printf ("Unsigned input only supported with bitwidth 8\n");
        exit (1);
    }
    eax = in_endian;
    al = (eax != 0) ? 1 : 0;
    eax = (int32_t) al;
    *((ebp - 0x10)) = eax;
    eax = .comment;
    if (eax != 0) {
        al = (*((ebp - 0x10)) == 0) ? 1 : 0;
        eax = (int32_t) al;
        *((ebp - 0x10)) = eax;
    }
    eax = .comment;
    edx = eax + 7;
    __asm ("cmovs eax, edx");
    eax >>= 3;
    edx = *((ebp + 8));
    *((esp + 0x10)) = edx;
    edx = *((ebp + 0xc));
    *((esp + 0xc)) = edx;
    edx = *((ebp - 0x10));
    *((esp + 8)) = edx;
    *((esp + 4)) = eax;
    eax = *((ebp + 0x10));
    *(esp) = eax;
    eax = unpack_read_samples ();
    *((ebp - 0xc)) = eax;
    goto label_3;
label_0:
    eax = .comment;
    edx = *((ebp + 8));
    *((esp + 0x10)) = edx;
    edx = *((ebp + 0xc));
    *((esp + 0xc)) = edx;
    *((esp + 8)) = eax;
    *((esp + 4)) = 1;
    eax = *((ebp + 0x10));
    *(esp) = eax;
    eax = unpack_read_samples ();
    *((ebp - 0xc)) = eax;
    goto label_3;
label_1:
    eax = silent;
    if (eax <= 9) {
        error_printf ("Only 8, 16, 24 and 32 bit input files supported \n");
    }
    exit (1);
label_3:
    eax = *((ebp + 8));
    eax = ferror (eax);
    if (eax != 0) {
        eax = silent;
        if (eax <= 9) {
            error_printf ("Error reading input file\n");
        }
        exit (1);
    }
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804d5a8 */
#include <stdint.h>
 
int32_t dbg_unpack_read_samples (void) {
    int const b;
    unsigned char * ip;
    int * op;
    int32_t i;
    size_t samples_read;
    int const samples_to_read;
    int const bytes_per_sample;
    int const swap_order;
    int * sample_buffer;
    FILE * pcm_in;
    size_t size;
    size_t nmemb;
    FILE * stream;
    /* int unpack_read_samples(int const samples_to_read,int const bytes_per_sample,int const swap_order,int * sample_buffer,FILE * pcm_in); */
    eax = *((ebp + 0x14));
    *((ebp - 0x18)) = eax;
    *((ebp - 0x1c)) = 0x20;
    edx = *((ebp + 8));
    eax = *((ebp + 0xc));
    ecx = *((ebp + 0x18));
    eax = *((ebp + 0x14));
    eax = fread (ecx, eax, edx);
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    eax <<= 2;
    eax += *((ebp + 0x14));
    *((ebp - 0x14)) = eax;
    if (*((ebp + 0x10)) != 0) {
        goto label_0;
    }
    if (*((ebp + 0xc)) != 1) {
        goto label_1;
    }
    eax = *((ebp + 0xc));
    eax *= *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) >= 0) {
        *((ebp - 0x14)) -= 4;
        eax = *((ebp - 0x10));
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 8;
        ecx = eax;
        edx <<= cl;
        eax = *((ebp - 0x14));
        *(eax) = edx;
        eax = *((ebp + 0xc));
        *((ebp - 0x10)) -= eax;
    }
label_1:
    if (*((ebp + 0xc)) != 2) {
        goto label_2;
    }
    eax = *((ebp + 0xc));
    eax *= *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) >= 0) {
        *((ebp - 0x14)) -= 4;
        eax = *((ebp - 0x10));
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x10;
        ebx = edx;
        ecx = eax;
        ebx <<= cl;
        eax = *((ebp - 0x10));
        eax++;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 8;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        edx = ebx;
        edx |= eax;
        eax = *((ebp - 0x14));
        *(eax) = edx;
        eax = *((ebp + 0xc));
        *((ebp - 0x10)) -= eax;
    }
label_2:
    if (*((ebp + 0xc)) != 3) {
        goto label_3;
    }
    eax = *((ebp + 0xc));
    eax *= *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) >= 0) {
        *((ebp - 0x14)) -= 4;
        eax = *((ebp - 0x10));
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x18;
        ebx = edx;
        ecx = eax;
        ebx <<= cl;
        eax = *((ebp - 0x10));
        eax++;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x10;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        ebx |= eax;
        eax = *((ebp - 0x10));
        eax += 2;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 8;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        edx = ebx;
        edx |= eax;
        eax = *((ebp - 0x14));
        *(eax) = edx;
        eax = *((ebp + 0xc));
        *((ebp - 0x10)) -= eax;
    }
label_3:
    if (*((ebp + 0xc)) != 4) {
        goto label_4;
    }
    eax = *((ebp + 0xc));
    eax *= *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) >= 0) {
        *((ebp - 0x14)) -= 4;
        eax = *((ebp - 0x10));
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x20;
        ebx = edx;
        ecx = eax;
        ebx <<= cl;
        eax = *((ebp - 0x10));
        eax++;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x18;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        ebx |= eax;
        eax = *((ebp - 0x10));
        eax += 2;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x10;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        ebx |= eax;
        eax = *((ebp - 0x10));
        eax += 3;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 8;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        edx = ebx;
        edx |= eax;
        eax = *((ebp - 0x14));
        *(eax) = edx;
        eax = *((ebp + 0xc));
        *((ebp - 0x10)) -= eax;
    }
    goto label_4;
label_0:
    if (*((ebp + 0xc)) != 1) {
        goto label_5;
    }
    eax = *((ebp + 0xc));
    eax *= *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) >= 0) {
        *((ebp - 0x14)) -= 4;
        eax = *((ebp - 0x10));
        eax += *((ebp - 0x18));
        eax = *(eax);
        eax ^= 0xffffff80;
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 8;
        ebx = edx;
        ecx = eax;
        ebx <<= cl;
        eax = *((ebp - 0x1c));
        eax -= 0x10;
        edx = 0x7f;
        esi = 0x7f;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        edx = ebx;
        edx |= eax;
        eax = *((ebp - 0x14));
        *(eax) = edx;
        eax = *((ebp + 0xc));
        *((ebp - 0x10)) -= eax;
    }
label_5:
    if (*((ebp + 0xc)) != 2) {
        goto label_6;
    }
    eax = *((ebp + 0xc));
    eax *= *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) >= 0) {
        *((ebp - 0x14)) -= 4;
        eax = *((ebp - 0x10));
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 8;
        ebx = edx;
        ecx = eax;
        ebx <<= cl;
        eax = *((ebp - 0x10));
        eax++;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x10;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        edx = ebx;
        edx |= eax;
        eax = *((ebp - 0x14));
        *(eax) = edx;
        eax = *((ebp + 0xc));
        *((ebp - 0x10)) -= eax;
    }
label_6:
    if (*((ebp + 0xc)) != 3) {
        goto label_7;
    }
    eax = *((ebp + 0xc));
    eax *= *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) >= 0) {
        *((ebp - 0x14)) -= 4;
        eax = *((ebp - 0x10));
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 8;
        ebx = edx;
        ecx = eax;
        ebx <<= cl;
        eax = *((ebp - 0x10));
        eax++;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x10;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        ebx |= eax;
        eax = *((ebp - 0x10));
        eax += 2;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x18;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        edx = ebx;
        edx |= eax;
        eax = *((ebp - 0x14));
        *(eax) = edx;
        eax = *((ebp + 0xc));
        *((ebp - 0x10)) -= eax;
    }
label_7:
    if (*((ebp + 0xc)) != 4) {
        goto label_4;
    }
    eax = *((ebp + 0xc));
    eax *= *((ebp - 0xc));
    *((ebp - 0x10)) = eax;
    while (*((ebp - 0x10)) >= 0) {
        *((ebp - 0x14)) -= 4;
        eax = *((ebp - 0x10));
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 8;
        ebx = edx;
        ecx = eax;
        ebx <<= cl;
        eax = *((ebp - 0x10));
        eax++;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x10;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        ebx |= eax;
        eax = *((ebp - 0x10));
        eax += 2;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x18;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        ebx |= eax;
        eax = *((ebp - 0x10));
        eax += 3;
        eax += *((ebp - 0x18));
        eax = *(eax);
        edx = (int32_t) al;
        eax = *((ebp - 0x1c));
        eax -= 0x20;
        esi = edx;
        ecx = eax;
        esi <<= cl;
        eax = esi;
        edx = ebx;
        edx |= eax;
        eax = *((ebp - 0x14));
        *(eax) = edx;
        eax = *((ebp + 0xc));
        *((ebp - 0x10)) -= eax;
    }
label_4:
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804dae3 */
#include <stdint.h>
 
int32_t dbg_parse_wave_header (void) {
    int32_t var_3ch;
    int32_t type;
    int32_t loop_sanity;
    long int subSize;
    long int file_length;
    long int data_length;
    int32_t is_wav;
    int32_t avg_bytes_per_sec;
    int32_t samples_per_sec;
    int32_t bits_per_sample;
    int32_t block_align;
    int32_t channels;
    int32_t format_tag;
    lame_global_flags * gfp;
    FILE * sf;
    uint32_t var_4h;
    int32_t var_8h;
    /* int parse_wave_header(lame_global_flags * gfp,FILE * sf); */
    *((ebp - 0xc)) = 0;
    *((ebp - 0x10)) = 0;
    *((ebp - 0x14)) = 0;
    *((ebp - 0x18)) = 0;
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x20)) = 0;
    *((ebp - 0x24)) = 0;
    *((ebp - 0x28)) = 0;
    *((ebp - 0x30)) = 0;
    *((ebp - 0x34)) = 0;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = Read32BitsHighLow ();
    *((ebp - 0x2c)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = Read32BitsHighLow ();
    edx = WAV_ID_WAVE;
    if (eax != edx) {
        eax = 0xffffffff;
        goto label_0;
    }
    *((ebp - 0x34)) = 0;
    while (*((ebp - 0x34)) <= 0x13) {
        eax = *((ebp + 0xc));
        *(esp) = eax;
        eax = Read32BitsHighLow ();
        *((ebp - 0x38)) = eax;
        eax = WAV_ID_FMT;
        if (*((ebp - 0x38)) == eax) {
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read32Bits ();
            *((ebp - 0x30)) = eax;
            if (*((ebp - 0x30)) <= 0xf) {
                eax = 0xffffffff;
                goto label_0;
            }
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read16BitsLowHigh ();
            *((ebp - 0xc)) = eax;
            *((ebp - 0x30)) -= 2;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read16BitsLowHigh ();
            *((ebp - 0x10)) = eax;
            *((ebp - 0x30)) -= 2;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read32Bits ();
            *((ebp - 0x1c)) = eax;
            *((ebp - 0x30)) -= 4;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read32Bits ();
            *((ebp - 0x20)) = eax;
            *((ebp - 0x30)) -= 4;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read16BitsLowHigh ();
            *((ebp - 0x14)) = eax;
            *((ebp - 0x30)) -= 2;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read16BitsLowHigh ();
            *((ebp - 0x18)) = eax;
            *((ebp - 0x30)) -= 2;
            if (*((ebp - 0x30)) > 9) {
                eax = *(obj.WAVE_FORMAT_EXTENSIBLE);
                eax = (int32_t) ax;
                if (eax != *((ebp - 0xc))) {
                    goto label_1;
                }
                eax = *((ebp + 0xc));
                *(esp) = eax;
                Read16BitsLowHigh ();
                eax = *((ebp + 0xc));
                *(esp) = eax;
                Read16BitsLowHigh ();
                eax = *((ebp + 0xc));
                *(esp) = eax;
                Read32Bits ();
                eax = *((ebp + 0xc));
                *(esp) = eax;
                eax = Read16BitsLowHigh ();
                *((ebp - 0xc)) = eax;
                *((ebp - 0x30)) -= 0xa;
            }
label_1:
            if (*((ebp - 0x30)) <= 0) {
                goto label_2;
            }
            eax = *((ebp - 0x30));
            eax = *((ebp + 0xc));
            eax = fskip (eax, eax, 1);
            if (eax == 0) {
                goto label_2;
            }
            eax = 0xffffffff;
            goto label_0;
        }
        eax = WAV_ID_DATA;
        if (*((ebp - 0x38)) == eax) {
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read32Bits ();
            *((ebp - 0x30)) = eax;
            eax = *((ebp - 0x30));
            *((ebp - 0x28)) = eax;
            *((ebp - 0x24)) = 1;
        } else {
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read32Bits ();
            *((ebp - 0x30)) = eax;
            eax = *((ebp - 0x30));
            eax = *((ebp + 0xc));
            eax = fskip (eax, eax, 1);
            if (eax != 0) {
                eax = 0xffffffff;
                goto label_0;
            }
label_2:
            *((ebp - 0x34))++;
        }
    }
    if (*((ebp - 0x24)) != 0) {
        eax = *(obj.WAVE_FORMAT_PCM);
        eax = (int32_t) ax;
        if (eax != *((ebp - 0xc))) {
            eax = silent;
            if (eax <= 9) {
                eax = *((ebp - 0xc));
                *((esp + 4)) = eax;
                error_printf ("Unsupported data format: 0x%04X\n");
            }
            eax = 0;
            eax = *((ebp - 0x10));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_set_num_channels ();
        } else {
        } else {
        }
    }
    if (eax == -1) {
        eax = silent;
        if (eax <= 9) {
            eax = *((ebp - 0x10));
            *((esp + 4)) = eax;
            error_printf ("Unsupported number of channels: %u\n");
        }
        eax = 0;
    } else {
        eax = *((ebp - 0x1c));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_in_samplerate ();
        eax = *((ebp - 0x18));
        *(0x805b3d0) = eax;
        *(0x805b3d8) = 1;
        eax = *((ebp - 0x18));
        eax += 7;
        edx = eax + 7;
        __asm ("cmovs eax, edx");
        eax >>= 3;
        edx = eax;
        edx *= *((ebp - 0x10));
        *((ebp - 0x3c)) = edx;
        eax = *((ebp - 0x28));
        edx = *((ebp - 0x28));
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp - 0x3c;
        edx = *(edx:eax) % ebp - 0x3c;
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_num_samples ();
        eax = 1;
        eax = 0xffffffff;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ddd0 */
#include <stdint.h>
 
int32_t dbg_aiff_check2 (void) {
    IFF_AIFF * const pcm_aiff_data;
    /* int aiff_check2(IFF_AIFF * const pcm_aiff_data); */
    eax = *((ebp + 8));
    edx = *((eax + 0x14));
    eax = IFF_ID_SSND;
    if (edx != eax) {
        eax = silent;
        if (eax <= 9) {
            error_printf ("ERROR: input sound data is not PCM\n");
        }
        eax = 1;
    } else {
        eax = *((ebp + 8));
        eax = *((eax + 8));
        eax = (int32_t) ax;
        eax -= 8;
        if (eax <= 0x18) {
            edx = 1;
            ebx = 1;
            ecx = eax;
            ebx <<= cl;
            eax = ebx;
            eax &= 0x1010101;
            if (eax != 0) {
                eax = *((ebp + 8));
                eax = *(eax);
                if (ax != 1) {
                    goto label_0;
                }
            }
        } else {
            eax = silent;
            if (eax <= 9) {
                error_printf ("ERROR: input sound data is not 8, 16, 24 or 32 bits\n");
            }
            eax = 1;
            goto label_1;
label_0:
            eax = *((ebp + 8));
            eax = *(eax);
            if (ax == 2) {
                goto label_2;
            }
            eax = silent;
            if (eax <= 9) {
                error_printf ("ERROR: input sound data is not mono or stereo\n");
            }
            eax = 1;
            goto label_1;
        }
label_2:
        eax = *((ebp + 8));
        eax = *((eax + 0x1c));
        if (eax != 0) {
            eax = silent;
            if (eax <= 9) {
                error_printf ("ERROR: block size of input sound data is not 0 bytes\n");
            }
            eax = 1;
        } else {
            eax = 0;
        }
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804deb2 */
#include <stdint.h>
 
int32_t dbg_make_even_number_of_bytes_in_length (void) {
    long int x;
    /* long int make_even_number_of_bytes_in_length(long int x); */
    eax = *((ebp + 8));
    eax &= 1;
    if (al != 0) {
        eax = *((ebp + 8));
        eax++;
    } else {
        eax = *((ebp + 8));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804decc */
#include <stdint.h>
 
int32_t dbg_parse_aiff_header (void) {
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_5ah;
    IFF_AIFF aiff_info;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t type;
    long int ckSize;
    long int pcm_data_pos;
    int32_t seen_ssnd_chunk;
    int32_t seen_comm_chunk;
    long int dataType;
    long int typeID;
    long int subSize;
    long int chunkSize;
    lame_global_flags * gfp;
    FILE * sf;
    long offset;
    size_t whence;
    /* int parse_aiff_header(lame_global_flags * gfp,FILE * sf); */
    *((ebp - 0xc)) = 0;
    *((ebp - 0x10)) = 0;
    *((ebp - 0x14)) = 0;
    eax = IFF_ID_NONE;
    *((ebp - 0x18)) = eax;
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x20)) = 0;
    *((ebp - 0x24)) = 0xffffffff;
    eax = ebp - 0x4c;
    memset (eax, 0, 0x20);
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = Read32BitsHighLow ();
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = Read32BitsHighLow ();
    *((ebp - 0x14)) = eax;
    eax = IFF_ID_AIFF;
    if (*((ebp - 0x14)) == eax) {
        goto label_0;
    }
    eax = IFF_ID_AIFC;
    if (*((ebp - 0x14)) == eax) {
        goto label_0;
    }
    eax = 0xffffffff;
    goto label_1;
    do {
        eax = *((ebp + 0xc));
        *(esp) = eax;
        eax = Read32BitsHighLow ();
        *((ebp - 0x2c)) = eax;
        *((ebp - 0xc)) -= 4;
        eax = IFF_ID_COMM;
        if (*((ebp - 0x2c)) == eax) {
            eax = *((ebp - 0x20));
            eax++;
            *((ebp - 0x1c)) = eax;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read32BitsHighLow ();
            *((ebp - 0x10)) = eax;
            eax = *((ebp - 0x10));
            *(esp) = eax;
            eax = make_even_number_of_bytes_in_length ();
            *((ebp - 0x28)) = eax;
            eax = *((ebp - 0x28));
            *((ebp - 0xc)) -= eax;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            ax = Read16BitsHighLow ();
            *((ebp - 0x4c)) = ax;
            *((ebp - 0x28)) -= 2;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read32BitsHighLow ();
            *((ebp - 0x48)) = eax;
            *((ebp - 0x28)) -= 4;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            ax = Read16BitsHighLow ();
            *((ebp - 0x44)) = ax;
            *((ebp - 0x28)) -= 2;
            eax = *((ebp + 0xc));
            ReadIeeeExtendedHighLow (eax);
            *((ebp - 0x40)) = fp_stack[0];
            fp_stack--;
            *((ebp - 0x28)) -= 0xa;
            eax = IFF_ID_AIFC;
            if (*((ebp - 0x14)) == eax) {
                eax = *((ebp + 0xc));
                *(esp) = eax;
                eax = Read32BitsHighLow ();
                *((ebp - 0x18)) = eax;
                *((ebp - 0x28)) -= 4;
            }
            eax = *((ebp - 0x28));
            eax = *((ebp + 0xc));
            eax = fskip (eax, eax, 1);
            if (eax == 0) {
                goto label_0;
            }
            eax = 0xffffffff;
            goto label_1;
        }
        eax = IFF_ID_SSND;
        if (*((ebp - 0x2c)) == eax) {
            *((ebp - 0x20)) = 1;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read32BitsHighLow ();
            *((ebp - 0x10)) = eax;
            eax = *((ebp - 0x10));
            *(esp) = eax;
            eax = make_even_number_of_bytes_in_length ();
            *((ebp - 0x28)) = eax;
            eax = *((ebp - 0x28));
            *((ebp - 0xc)) -= eax;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read32BitsHighLow ();
            *((ebp - 0x34)) = eax;
            *((ebp - 0x28)) -= 4;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            eax = Read32BitsHighLow ();
            *((ebp - 0x30)) = eax;
            *((ebp - 0x28)) -= 4;
            eax = IFF_ID_SSND;
            *((ebp - 0x38)) = eax;
            if (*((ebp - 0x1c)) > 0) {
                eax = *((ebp - 0x34));
                eax = *((ebp + 0xc));
                eax = fskip (eax, eax, 1);
                if (eax == 0) {
                    goto label_2;
                }
                eax = 0xffffffff;
                goto label_1;
            }
            eax = *((ebp + 0xc));
            eax = ftell (eax);
            *((ebp - 0x24)) = eax;
            if (*((ebp - 0x24)) >= 0) {
                edx = *((ebp - 0x34));
                eax = *((ebp - 0x24));
                eax = edx + eax;
                *((ebp - 0x24)) = eax;
            }
            eax = *((ebp - 0x28));
            eax = *((ebp + 0xc));
            eax = fskip (eax, eax, 1);
            if (eax == 0) {
                goto label_0;
            }
            eax = 0xffffffff;
            goto label_1;
        }
        eax = *((ebp + 0xc));
        *(esp) = eax;
        eax = Read32BitsHighLow ();
        *((ebp - 0x10)) = eax;
        eax = *((ebp - 0x10));
        *(esp) = eax;
        eax = make_even_number_of_bytes_in_length ();
        *((ebp - 0x28)) = eax;
        eax = *((ebp - 0x28));
        *((ebp - 0xc)) -= eax;
        eax = *((ebp - 0x28));
        eax = *((ebp + 0xc));
        eax = fskip (eax, eax, 1);
        if (eax != 0) {
            eax = 0xffffffff;
            goto label_1;
        }
label_0:
    } while (*((ebp - 0xc)) > 0);
    goto label_3;
label_2:
label_3:
    eax = IFF_ID_2CLE;
    if (*((ebp - 0x18)) == eax) {
        eax = swapbytes;
        *(0x805b3d4) = eax;
    } else {
        eax = IFF_ID_2CBE;
        if (*((ebp - 0x18)) == eax) {
            eax = swapbytes;
            al = (eax == 0) ? 1 : 0;
            eax = (int32_t) al;
            *(0x805b3d4) = eax;
        } else {
            eax = IFF_ID_NONE;
            if (*((ebp - 0x18)) == eax) {
                eax = swapbytes;
                al = (eax == 0) ? 1 : 0;
                eax = (int32_t) al;
                *(0x805b3d4) = eax;
            } else {
                eax = 0xffffffff;
                goto label_1;
            }
        }
    }
    if (*((ebp - 0x1c)) != 0) {
        if (*((ebp - 0x20)) <= 0) {
            eax = *((ebp - 0x48));
            if (eax != 0) {
                goto label_4;
            }
        }
        eax = ebp - 0x4c;
        *(esp) = eax;
        eax = aiff_check2 ();
        if (eax != 0) {
            eax = 0;
        } else {
            eax = *((ebp - 0x4c));
        }
        eax = (int32_t) ax;
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_set_num_channels ();
        if (eax == -1) {
            eax = silent;
            if (eax <= 9) {
                eax = *((ebp - 0x4c));
                eax = (int32_t) ax;
                *((esp + 4)) = eax;
                error_printf ("Unsupported number of channels: %u\n");
            }
            eax = 0;
            *(fp_stack--) = *((ebp - 0x40));
            eax = *((ebp - 0x5a));
            ah = 0xc;
            *((ebp - 0x5c)) = ax;
            *((ebp - 0x60)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x60));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_in_samplerate ();
            eax = *((ebp - 0x48));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_num_samples ();
            eax = *((ebp - 0x44));
            eax = (int32_t) ax;
            *(0x805b3d0) = eax;
            *(0x805b3d8) = 0;
        } else {
        } else {
        }
    }
    if (*((ebp - 0x24)) >= 0) {
        eax = *((ebp - 0x24));
        eax = *((ebp + 0xc));
        eax = fseek (eax, eax, 0);
        if (eax != 0) {
            eax = silent;
            if (eax <= 9) {
                error_printf ("Can't rewind stream to audio data position\n");
            }
            eax = 0;
        }
    } else {
        eax = 1;
label_4:
        eax = 0xffffffff;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804e2e4 */
#include <stdint.h>
 
int32_t dbg_parse_file_header (void) {
    int const ret;
    int32_t var_10h;
    int32_t type;
    lame_global_flags * gfp;
    FILE * sf;
    char * var_4h;
    /* int parse_file_header(lame_global_flags * gfp,FILE * sf); */
    eax = *((ebp + 0xc));
    *(esp) = eax;
    eax = Read32BitsHighLow ();
    *((ebp - 0xc)) = eax;
    *(obj.global) = 0;
    eax = *(obj.in_signed);
    al = (eax != 1) ? 1 : 0;
    eax = (int32_t) al;
    *(0x805b3d8) = eax;
    eax = WAV_ID_RIFF;
    if (*((ebp - 0xc)) == eax) {
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = parse_wave_header ();
        *((ebp - 0x10)) = eax;
        if (*((ebp - 0x10)) > 0) {
            *(obj.global) = 1;
            eax = 2;
            goto label_0;
        }
        if (*((ebp - 0x10)) >= 0) {
            goto label_1;
        }
        eax = silent;
        if (eax > 9) {
            goto label_1;
        }
        error_printf ("Warning: corrupt or unsupported WAVE format\n");
    } else {
        eax = "MROFFFIACFIAMMOCDNSSGEPMENONsowttwosFFIREVAW tmfatad";
        if (*((ebp - 0xc)) == eax) {
            eax = *((ebp + 0xc));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = parse_aiff_header ();
            *((ebp - 0x14)) = eax;
            if (*((ebp - 0x14)) > 0) {
                *(obj.global) = 1;
                eax = 3;
                goto label_0;
            }
            if (*((ebp - 0x14)) >= 0) {
                goto label_1;
            }
            eax = silent;
            if (eax > 9) {
                goto label_1;
            }
            error_printf ("Warning: corrupt or unsupported AIFF format\n");
        } else {
            eax = silent;
            if (eax > 9) {
                goto label_1;
            }
            error_printf ("Warning: unsupported audio format\n");
        }
    }
label_1:
    eax = 0;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804e748 */
#include <stdint.h>
 
int32_t dbg_check_aid (void) {
    unsigned char const * header;
    void * s2;
    size_t n;
    /* int check_aid(unsigned char const * header); */
    eax = *((ebp + 8));
    eax = memcmp (eax, 0x805540a, 4);
    al = (eax == 0) ? 1 : 0;
    eax = (int32_t) al;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a0fc */
#include <stdint.h>
 
void memcmp (void) {
    memcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804e773 */
#include <stdint.h>
 
int32_t dbg_is_syncword_mp123 (void) {
    unsigned char const * const p;
     const * const headerptr;
    char[16] const abl2;
    /* int is_syncword_mp123( const * const headerptr); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    eax = *((ebp - 8));
    eax = *(eax);
    if (al != 0xff) {
        eax = 0;
    } else {
        eax = *((ebp - 8));
        eax++;
        eax = *(eax);
        eax = (int32_t) al;
        eax &= 0xe0;
        if (eax != 0xe0) {
            eax = 0;
        } else {
            eax = *((ebp - 8));
            eax++;
            eax = *(eax);
            eax = (int32_t) al;
            eax &= 0x18;
            if (eax == 8) {
                eax = 0;
            } else {
                eax = *((ebp - 8));
                eax++;
                eax = *(eax);
                eax = (int32_t) al;
                eax &= 6;
                if (eax != 4) {
                    if (eax != 6) {
                        if (eax != 2) {
                            eax = 0;
                            goto label_0;
                        }
                        eax = input_format;
                        if (eax != 6) {
                            eax = input_format;
                            if (eax == 7) {
                                goto label_1;
                            }
                            eax = 0;
                            goto label_0;
                        }
label_1:
                        *(obj.input_format) = 6;
                        eax = input_format;
                    } else {
                    } else {
                        if (eax != 5) {
                            eax = input_format;
                            if (eax == 7) {
                                goto label_2;
                            }
                            eax = 0;
                            goto label_0;
                        }
label_2:
                        *(obj.input_format) = 5;
                        eax = input_format;
                    }
                }
                if (eax != 4) {
                    eax = input_format;
                    if (eax == 7) {
                        goto label_3;
                    }
                    eax = 0;
                    goto label_0;
                }
label_3:
                *(obj.input_format) = 4;
                eax = *((ebp - 8));
                eax++;
                eax = *(eax);
                eax = (int32_t) al;
                eax &= 6;
                if (eax == 0) {
                    eax = 0;
                } else {
                    eax = *((ebp - 8));
                    eax += 2;
                    eax = *(eax);
                    eax = (int32_t) al;
                    eax &= 0xf0;
                    if (eax == 0xf0) {
                        eax = 0;
                    } else {
                        eax = *((ebp - 8));
                        eax += 2;
                        eax = *(eax);
                        eax = (int32_t) al;
                        eax &= 0xc;
                        if (eax == 0xc) {
                            eax = 0;
                        } else {
                            eax = *((ebp - 8));
                            eax++;
                            eax = *(eax);
                            eax = (int32_t) al;
                            eax &= 0x18;
                            if (eax == 0x18) {
                                eax = *((ebp - 8));
                                eax++;
                                eax = *(eax);
                                eax = (int32_t) al;
                                eax &= 6;
                                if (eax == 4) {
                                    eax = *((ebp - 8));
                                    eax += 2;
                                    eax = *(eax);
                                    al >>= 4;
                                    eax = (int32_t) al;
                                    eax = *((eax + obj.abl2.5481));
                                    edx = (int32_t) al;
                                    eax = *((ebp - 8));
                                    eax += 3;
                                    eax = *(eax);
                                    al >>= 6;
                                    eax = (int32_t) al;
                                    ebx = edx;
                                    ecx = eax;
                                    ebx >>= cl;
                                    eax = ebx;
                                    eax &= 1;
                                    if (al == 0) {
                                        goto label_4;
                                    }
                                    eax = 0;
                                }
                            } else {
label_4:
                                eax = *((ebp - 8));
                                eax += 3;
                                eax = *(eax);
                                eax = (int32_t) al;
                                eax &= 3;
                                if (eax == 2) {
                                    eax = 0;
                                } else {
                                    eax = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f120 */
#include <stdint.h>
 
int32_t dbg_set_id3tag (void) {
    lame_global_flags * gfp;
    int32_t type;
    char const * str;
    char * var_4h;
    /* int set_id3tag(lame_global_flags * gfp,int type,char const * str); */
    eax = *((ebp + 0xc));
    eax -= 0x61;
    if (eax <= 0x18) {
        eax = *((eax*4 + 0x80554e0));
        /* switch table (25 cases) at 0x80554e0 */
        void (*eax)() ();
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_set_artist ();
        eax = 0;
        goto label_0;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_set_title ();
        eax = 0;
        goto label_0;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_set_album ();
        eax = 0;
        goto label_0;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_set_genre ();
        goto label_0;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_set_comment ();
        eax = 0;
        goto label_0;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_set_track ();
        goto label_0;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_set_year ();
        eax = 0;
        goto label_0;
        eax = *((ebp + 0x10));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_set_fieldvalue ();
    } else {
        eax = 0;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f204 */
#include <stdint.h>
 
int32_t dbg_id3_tag (void) {
    int32_t result;
    void * x;
    lame_global_flags * gfp;
    int32_t type;
    TextEncoding enc;
    char * str;
    char * var_4h;
    char * var_8h;
    /* int id3_tag(lame_global_flags * gfp,int type,TextEncoding enc,char * str); */
    *((ebp - 0xc)) = 0;
    eax = *((ebp + 0x14));
    eax = strdup (eax);
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = set_id3tag ();
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0xc));
    free (eax);
    eax = *((ebp - 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a9ec */
#include <stdint.h>
 
void strdup (void) {
    strdup ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a37c */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f24b */
#include <stdint.h>
 
uint32_t dbg_lame_version_print (void) {
    size_t const sw;
    size_t const lw;
    size_t const lenu;
    size_t const lenv;
    size_t const lenb;
    char const * u;
    char const * v;
    char const * b;
    FILE * const fp;
    char * format;
    char * var_8h;
    char * var_sp_ch;
    char * var_sp_10h;
    char * var_sp_14h;
    char * var_sp_18h;
    /* int lame_version_print(FILE * const fp); */
    eax = get_lame_os_bitness ();
    *((ebp - 0xc)) = eax;
    eax = get_lame_version ();
    *((ebp - 0x10)) = eax;
    eax = get_lame_url ();
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0xc));
    eax = strlen (eax);
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0x10));
    eax = strlen (eax);
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x14));
    eax = strlen (eax);
    *((ebp - 0x20)) = eax;
    *((ebp - 0x24)) = 0x50;
    *((ebp - 0x28)) = 0x10;
    eax = *((ebp - 0x1c));
    edx = *((ebp - 0x18));
    eax = edx + eax;
    eax += *((ebp - 0x20));
    eax += *((ebp - 0x28));
    if (eax > *((ebp - 0x24))) {
        eax = *((ebp - 0x20));
        eax += 2;
        if (eax <= *((ebp - 0x24))) {
            goto label_0;
        }
    }
    if (*((ebp - 0x18)) != 0) {
        eax = 0x8055544;
        edx = *((ebp - 0x14));
        *((esp + 0x10)) = edx;
        edx = *((ebp - 0x10));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0xc));
        *((esp + 8)) = edx;
        eax = *((ebp + 8));
        fprintf (eax, eax);
    } else {
        eax = "LAME version %s (%s)\n\n";
        edx = *((ebp - 0x14));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x10));
        *((esp + 8)) = edx;
        eax = *((ebp + 8));
        fprintf (eax, eax);
        goto label_1;
label_0:
        if (*((ebp - 0x18)) != 0) {
            eax = *((ebp - 0x20));
            edx = *((ebp - 0x24));
            ecx = *((ebp - 0x24));
            ecx -= eax;
            eax = ecx;
            ecx = eax - 2;
            eax = "LAME %s version %s\n%*s(%s)\n\n";
            edx = *((ebp - 0x14));
            *((esp + 0x18)) = edx;
            *((esp + 0x14)) = 0x8055592;
            *((esp + 0x10)) = ecx;
            edx = *((ebp - 0x10));
            *((esp + 0xc)) = edx;
            edx = *((ebp - 0xc));
            *((esp + 8)) = edx;
            eax = *((ebp + 8));
            fprintf (eax, eax);
        } else {
            eax = *((ebp - 0x20));
            edx = *((ebp - 0x24));
            ecx = *((ebp - 0x24));
            ecx -= eax;
            eax = ecx;
            ecx = eax - 2;
            eax = "LAME version %s\n%*s(%s)\n\n";
            edx = *((ebp - 0x14));
            *((esp + 0x14)) = edx;
            *((esp + 0x10)) = 0x8055592;
            *((esp + 0xc)) = ecx;
            edx = *((ebp - 0x10));
            *((esp + 8)) = edx;
            eax = *((ebp + 8));
            fprintf (eax, eax);
        }
    }
label_1:
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f3ab */
#include <stdint.h>
 
int32_t dbg_print_license (void) {
    FILE * const fp;
    size_t size;
    size_t nitems;
    FILE * stream;
    /* int print_license(FILE * const fp); */
    eax = *((ebp + 8));
    *(esp) = eax;
    lame_version_print ();
    eax = "Can I use LAME in my commercial program?\n\nYes, you can, under the restrictions of the LGPL.  In particular, you\ncan include a compiled version of the LAME library (for example,\nlame.dll) with a commercial program.  Some notable requirements of\nthe LGPL:\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0xff);
    eax = "1. In your program, you cannot include any source code from LAME, with\n   the exception of files whose only purpose is to describe the library\n   interface (such as lame.h).\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0xaf);
    eax = "2. Any modifications of LAME must be released under the LGPL.\n   The LAME project (www.mp3dev.org) would appreciate being\n   notified of any modifications.\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x9d);
    eax = "3. You must give prominent notice that your program is:\n      A. using LAME (including version number)\n      B. LAME is under the LGPL\n      C. Provide a copy of the LGPL.  (the file COPYING contains the LGPL)\n      D. Provide a copy of LAME source, or a pointer where the LAME\n         source can be obtained (such as www.mp3dev.org)\n   An example of prominent notice would be an \"About the LAME encoding engine\"\n   button in some pull down menu within the executable of your program.\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x1e7);
    eax = "4. If you determine that distribution of LAME requires a patent license,\n   you must obtain such license.\n\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x6c);
    eax = "*** IMPORTANT NOTE ***\n\nThe decoding functions provided in LAME use the mpglib decoding engine which\nis under the GPL.  They may not be used by any program not released under the\nGPL unless you obtain such permission from the MPG123 project (www.mpg123.de).\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x103);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a64c */
#include <stdint.h>
 
void fwrite (void) {
    fwrite ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f588 */
#include <stdint.h>
 
int32_t dbg_wait_for (void) {
    FILE * const fp;
    int32_t lessmode;
    char * var_4h;
    /* void wait_for(FILE * const fp,int lessmode); */
    if (*((ebp + 0xc)) != 0) {
        eax = *((ebp + 8));
        fflush (eax);
        getchar ();
    } else {
        eax = *((ebp + 8));
        fputc (0xa, eax);
    }
    eax = *((ebp + 8));
    fputc (0xa, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f991 */
#include <stdint.h>
 
int32_t dbg_display_bitrate (void) {
    int32_t nBitrates;
    int32_t i;
    FILE * const fp;
    char const * const version;
    int const d;
    int const indx;
    char * format;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_sp_10h;
    /* void display_bitrate(FILE * const fp,char const * const version,int const d,int const indx); */
    *((ebp - 0x10)) = 0xe;
    if (*((ebp + 0x10)) == 4) {
        *((ebp - 0x10)) = 8;
    }
    *(fp_stack--) = *((ebp + 0x10));
    *(fp_stack--) = *(0x8059820);
    fp_stack[1] /= fp_stack[0];
    fp_stack++;
    eax = 0x30;
    edx = 0x30;
    edx >>= 0x1f;
    eax = *(edx:eax) / ebp + 0x10;
    edx = *(edx:eax) % ebp + 0x10;
    ecx = eax;
    eax = 0x20;
    edx = 0x20;
    edx >>= 0x1f;
    eax = *(edx:eax) / ebp + 0x10;
    edx = *(edx:eax) % ebp + 0x10;
    edx = eax;
    eax = "\nMPEG-%-3s layer III sample frequencies (kHz):  %2d  %2d  %g\nbitrates (kbps):";
    *((esp + 0x14)) = fp_stack[0];
    fp_stack--;
    *((esp + 0x10)) = ecx;
    *((esp + 0xc)) = edx;
    edx = *((ebp + 0xc));
    *((esp + 8)) = edx;
    eax = *((ebp + 8));
    fprintf (eax, eax);
    *((ebp - 0xc)) = 1;
    while (eax <= *((ebp - 0x10))) {
        edx = *((ebp + 0x14));
        eax = *((ebp - 0xc));
        edx <<= 4;
        eax = edx + eax;
        edx = *((eax*4 + loc._edata));
        eax = " %2i";
        *((esp + 8)) = edx;
        eax = *((ebp + 8));
        fprintf (eax, eax);
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
    }
    eax = *((ebp + 8));
    fputc (0xa, eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804fae4 */
#include <stdint.h>
 
int32_t dbg_presets_longinfo_dm (void) {
    FILE * msgfp;
    size_t size;
    size_t nitems;
    FILE * stream;
    /* void presets_longinfo_dm(FILE * msgfp); */
    eax = "\nThe --preset switches are aliases over LAME settings.\n\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x39);
    eax = "To activate these presets:\n\n   For VBR modes (generally highest quality):\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x4b);
    eax = "     \"--preset medium\" This preset should provide near transparency\n                             to most people on most music.\n\n     \"--preset standard\" This preset should generally be transparent\n                             to most people on most music and is already\n                             quite high in quality.\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x143);
    eax = "     \"--preset extreme\" If you have extremely good hearing and similar\n                             equipment, this preset will generally provide\n                             slightly higher quality than the \"standard\"\n                             mode.\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0xff);
    eax = "   For CBR 320kbps (highest quality possible from the --preset switches):\n\n     \"--preset insane\"  This preset will usually be overkill for most\n                             people and most situations, but if you must\n                             have the absolute highest quality with no\n                             regard to filesize, this is the way to go.\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x16a);
    eax = "   For ABR modes (high quality per given bitrate but not as high as VBR):\n\n     \"--preset <kbps>\"  Using this preset will usually give you good\n                             quality at a specified bitrate. Depending on the\n                             bitrate entered, this preset will determine the\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x12b);
    eax = "                             optimal settings for that particular situation.\n                             While this approach works, it is not nearly as\n                             flexible as VBR, and usually will not attain the\n                             same level of quality as VBR at higher bitrates.\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x136);
    eax = "The following options are also available for the corresponding profiles:\n\n   <fast>        standard\n   <fast>        extreme\n                 insane\n   <cbr> (ABR Mode) - The ABR Mode is implied. To use it,\n                      simply specify a bitrate. For example:\n                      \"--preset 185\" activates this\n                      preset and uses 185 as an average kbps.\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x17f);
    eax = "   \"fast\" - Enables the fast VBR mode for a particular profile.\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x41);
    eax = "   \"cbr\"  - If you use the ABR mode (read above) with a significant\n            bitrate such as 80, 96, 112, 128, 160, 192, 224, 256, 320,\n            you can use the \"cbr\" option to force CBR mode encoding\n            instead of the standard abr mode. ABR does provide higher\n            quality but CBR may be useful in situations such as when\n            streaming an mp3 over the internet may be important.\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0x19c);
    eax = "    For example:\n\n    \"--preset fast standard <input file> <output file>\"\n or \"--preset cbr 192 <input file> <output file>\"\n or \"--preset 172 <input file> <output file>\"\n or \"--preset extreme <input file> <output file>\"\n\n\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0xde);
    eax = "A few aliases are also available for ABR mode:\nphone => 16kbps/mono        phon+/lw/mw-eu/sw => 24kbps/mono\nmw-us => 40kbps/mono        voice => 56kbps/mono\nfm/radio/tape => 112kbps    hifi => 160kbps\ncd => 192kbps               studio => 256kbps\n";
    edx = *((ebp + 8));
    fwrite (edx, 1, 0xf7);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804fc9c */
#include <stdint.h>
 
int32_t dbg_presets_set (void) {
    int32_t mono;
    lame_t gfp;
    int32_t fast;
    int32_t cbr;
    char const * preset_name;
    char const * ProgramName;
    char * s2;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    /* int presets_set(lame_t gfp,int fast,int cbr,char const * preset_name,char const * ProgramName); */
    *((ebp - 0xc)) = 0;
    eax = *((ebp + 0x14));
    eax = strcmp (eax, "help");
    if (eax == 0) {
        if (*((ebp + 0xc)) <= 0) {
            if (*((ebp + 0x10)) > 0) {
                goto label_0;
            }
            eax = stdout;
            *(esp) = eax;
            lame_version_print ();
            eax = stdout;
            *(esp) = eax;
            presets_longinfo_dm ();
            eax = 0xffffffff;
        }
    } else {
label_0:
        eax = *((ebp + 0x14));
        eax = strcmp (eax, "phone");
        if (eax == 0) {
            *((ebp + 0x14)) = 0x805892f;
            *((ebp - 0xc)) = 1;
        }
        eax = *((ebp + 0x14));
        eax = strcmp (eax, "phon+");
        if (eax != 0) {
            eax = *((ebp + 0x14));
            eax = strcmp (eax, 0x8058938);
            if (eax == 0) {
                goto label_1;
            }
            eax = *((ebp + 0x14));
            eax = strcmp (eax, "mw-eu");
            if (eax == 0) {
                goto label_1;
            }
            eax = *((ebp + 0x14));
            eax = strcmp (eax, 0x8058941);
            if (eax != 0) {
                goto label_2;
            }
        }
label_1:
        *((ebp + 0x14)) = 0x8058944;
        *((ebp - 0xc)) = 1;
label_2:
        eax = *((ebp + 0x14));
        eax = strcmp (eax, "mw-us");
        if (eax == 0) {
            *((ebp + 0x14)) = 0x805894d;
            *((ebp - 0xc)) = 1;
        }
        eax = *((ebp + 0x14));
        eax = strcmp (eax, "voice");
        if (eax == 0) {
            *((ebp + 0x14)) = 0x8058956;
            *((ebp - 0xc)) = 1;
        }
        eax = *((ebp + 0x14));
        eax = strcmp (eax, 0x8058959);
        if (eax == 0) {
            *((ebp + 0x14)) = 0x805895c;
        }
        eax = *((ebp + 0x14));
        eax = strcmp (eax, "radio");
        if (eax != 0) {
            eax = *((ebp + 0x14));
            eax = strcmp (eax, "tape");
            if (eax != 0) {
                goto label_3;
            }
        }
        *((ebp + 0x14)) = 0x805895c;
label_3:
        eax = *((ebp + 0x14));
        eax = strcmp (eax, "hifi");
        if (eax == 0) {
            *((ebp + 0x14)) = 0x8058970;
        }
        eax = *((ebp + 0x14));
        eax = strcmp (eax, 0x8058974);
        if (eax == 0) {
            *((ebp + 0x14)) = 0x8058977;
        }
        eax = *((ebp + 0x14));
        eax = strcmp (eax, "studio");
        if (eax == 0) {
            *((ebp + 0x14)) = 0x8058982;
        }
        eax = *((ebp + 0x14));
        eax = strcmp (eax, "medium");
        if (eax == 0) {
            *((esp + 4)) = 4;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_VBR_q ();
            if (*((ebp + 0xc)) > 0) {
                *((esp + 4)) = 4;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_VBR ();
            } else {
                *((esp + 4)) = 2;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_VBR ();
            }
            eax = 0;
        } else {
            eax = *((ebp + 0x14));
            eax = strcmp (eax, "standard");
            if (eax == 0) {
                *((esp + 4)) = 2;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_VBR_q ();
                if (*((ebp + 0xc)) > 0) {
                    *((esp + 4)) = 4;
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    lame_set_VBR ();
                } else {
                    *((esp + 4)) = 2;
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    lame_set_VBR ();
                }
                eax = 0;
            } else {
                eax = *((ebp + 0x14));
                eax = strcmp (eax, "extreme");
                if (eax == 0) {
                    *((esp + 4)) = 0;
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    lame_set_VBR_q ();
                    if (*((ebp + 0xc)) > 0) {
                        *((esp + 4)) = 4;
                        eax = *((ebp + 8));
                        *(esp) = eax;
                        lame_set_VBR ();
                    } else {
                        *((esp + 4)) = 2;
                        eax = *((ebp + 8));
                        *(esp) = eax;
                        lame_set_VBR ();
                    }
                    eax = 0;
                } else {
                    eax = *((ebp + 0x14));
                    eax = strcmp (eax, "insane");
                    if (eax == 0) {
                        if (*((ebp + 0xc)) <= 0) {
                            *((esp + 4)) = 0x3eb;
                            eax = *((ebp + 8));
                            *(esp) = eax;
                            lame_set_preset ();
                            eax = 0;
                        }
                    } else {
                        eax = *((ebp + 0x14));
                        eax = atoi (eax);
                        if (eax > 0) {
                            if (*((ebp + 0xc)) <= 0) {
                                eax = *((ebp + 0x14));
                                eax = atoi (eax);
                                if (eax > 7) {
                                    eax = *((ebp + 0x14));
                                    eax = atoi (eax);
                                    if (eax > 0x140) {
                                        goto label_4;
                                    }
                                    eax = *((ebp + 0x14));
                                    eax = atoi (eax);
                                    *((esp + 4)) = eax;
                                    eax = *((ebp + 8));
                                    *(esp) = eax;
                                    lame_set_preset ();
                                    if (*((ebp + 0x10)) == 1) {
                                        *((esp + 4)) = 0;
                                        eax = *((ebp + 8));
                                        *(esp) = eax;
                                        lame_set_VBR ();
                                    }
                                    if (*((ebp - 0xc)) == 1) {
                                        *((esp + 4)) = 3;
                                        eax = *((ebp + 8));
                                        *(esp) = eax;
                                        lame_set_mode ();
                                    }
                                    eax = 0;
                                    goto label_5;
                                }
label_4:
                                eax = .comment;
                                *(esp) = eax;
                                lame_version_print ();
                                eax = *((ebp + 0x18));
                                *((esp + 4)) = eax;
                                error_printf ("Error: The bitrate specified is out of the valid range for this preset\n\nWhen using this mode you must enter a value between \"32\" and \"320\"\n\nFor further information try: \"%s --preset help\"\n");
                                eax = 0xffffffff;
                            }
                        } else {
                            eax = .comment;
                            *(esp) = eax;
                            lame_version_print ();
                            error_printf ("Error: You did not enter a valid profile and/or options with --preset\n\nAvailable profiles are:\n\n   <fast>        medium\n   <fast>        standard\n   <fast>        extreme\n                 insane\n          <cbr> (ABR Mode) - The ABR Mode is implied. To use it,\n                             simply specify a bitrate. For example:\n                             \"--preset 185\" activates this\n                             preset and uses 185 as an average kbps.\n\n");
                            eax = *((ebp + 0x18));
                            *((esp + 0x14)) = eax;
                            eax = *((ebp + 0x18));
                            *((esp + 0x10)) = eax;
                            eax = *((ebp + 0x18));
                            *((esp + 0xc)) = eax;
                            eax = *((ebp + 0x18));
                            *((esp + 8)) = eax;
                            eax = *((ebp + 0x18));
                            *((esp + 4)) = eax;
                            error_printf ("    Some examples:\n\n or \"%s --preset fast standard <input file> <output file>\"\n or \"%s --preset cbr 192 <input file> <output file>\"\n or \"%s --preset 172 <input file> <output file>\"\n or \"%s --preset extreme <input file> <output file>\"\n\nFor further information try: \"%s --preset help\"\n");
                            eax = 0xffffffff;
                        }
                    }
                }
            }
        }
    }
label_5:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x80500de */
#include <stdint.h>
 
int32_t dbg_genre_list_handler (void) {
    int32_t num;
    char const * name;
    void * cookie;
    int32_t var_4h;
    int32_t var_8h;
    /* void genre_list_handler(int num,char const * name,void * cookie); */
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    console_printf ("%3d %s\n");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8050100 */
#include <stdint.h>
 
int32_t dbg_local_strcasecmp (void) {
    unsigned char c2;
    unsigned char c1;
    char const * s1;
    char const * s2;
    /* int local_strcasecmp(char const * s1,char const * s2); */
    do {
        eax = *((ebp + 8));
        eax = *(eax);
        eax = (int32_t) al;
        al = tolower (eax);
        *((ebp - 9)) = al;
        eax = *((ebp + 0xc));
        eax = *(eax);
        eax = (int32_t) al;
        al = tolower (eax);
        *((ebp - 0xa)) = al;
        if (*((ebp - 9)) == 0) {
            goto label_0;
        }
        *((ebp + 8))++;
        *((ebp + 0xc))++;
        eax = *((ebp - 9));
    } while (al == *((ebp - 0xa)));
    goto label_1;
label_0:
label_1:
    edx = *((ebp - 9));
    eax = *((ebp - 0xa));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8050158 */
#include <stdint.h>
 
int32_t dbg_filename_to_type (void) {
    size_t len;
    char const * FileName;
    char * var_4h;
    /* int filename_to_type(char const * FileName); */
    eax = *((ebp + 8));
    eax = strlen (eax);
    *((ebp - 0xc)) = eax;
    if (*((ebp - 0xc)) <= 3) {
        eax = 0;
    } else {
        eax = *((ebp - 0xc));
        eax -= 4;
        *((ebp + 8)) += eax;
        *((esp + 4)) = ".mpg";
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = local_strcasecmp ();
        if (eax == 0) {
            eax = 7;
        } else {
            *((esp + 4)) = ".mp1";
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = local_strcasecmp ();
            if (eax == 0) {
                eax = 7;
            } else {
                *((esp + 4)) = ".mp2";
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = local_strcasecmp ();
                if (eax == 0) {
                    eax = 7;
                } else {
                    *((esp + 4)) = ".mp3";
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    eax = local_strcasecmp ();
                    if (eax == 0) {
                        eax = 7;
                    } else {
                        *((esp + 4)) = ".wav";
                        eax = *((ebp + 8));
                        *(esp) = eax;
                        eax = local_strcasecmp ();
                        if (eax == 0) {
                            eax = 2;
                        } else {
                            *((esp + 4)) = ".aif";
                            eax = *((ebp + 8));
                            *(esp) = eax;
                            eax = local_strcasecmp ();
                            if (eax == 0) {
                                eax = 3;
                            } else {
                                *((esp + 4)) = ".raw";
                                eax = *((ebp + 8));
                                *(esp) = eax;
                                eax = local_strcasecmp ();
                                if (eax == 0) {
                                    eax = 1;
                                } else {
                                    *((esp + 4)) = ".ogg";
                                    eax = *((ebp + 8));
                                    *(esp) = eax;
                                    eax = local_strcasecmp ();
                                    if (eax == 0) {
                                        eax = 8;
                                    } else {
                                        eax = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8050285 */
#include <stdint.h>
 
int32_t dbg_resample_rate (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_12h;
    double freq;
    int32_t var_ch;
    /* int resample_rate(double freq); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = *(0x8059828);
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
    if (al != 0) {
        *(fp_stack--) = *((ebp - 0x10));
        *(fp_stack--) = *(0x8059830);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0x10)) = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *((ebp - 0x10));
    eax = *((ebp - 0x12));
    ah = 0xc;
    *((ebp - 0x14)) = ax;
    *((ebp - 0x18)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x18));
    eax -= 8;
    if (eax <= 0x28) {
        eax = *((eax*4 + 0x8058da8));
        /* switch table (41 cases) at 0x8058da8 */
        void (*eax)() ();
        eax = 0x1f40;
        goto label_0;
        eax = 0x2b11;
        goto label_0;
        eax = 0x2ee0;
        goto label_0;
        eax = 0x3e80;
        goto label_0;
        eax = 0x5622;
        goto label_0;
        eax = 0x5dc0;
        goto label_0;
        eax = 0x7d00;
        goto label_0;
        eax = 0xac44;
        goto label_0;
        eax = 0xbb80;
    } else {
        *(fp_stack--) = *((ebp - 0x10));
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        error_printf ("Illegal resample frequency: %.3f kHz\n");
        eax = 0;
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8050341 */
#include <stdint.h>
 
int32_t dbg_set_id3_albumart (void) {
    size_t size;
    char * albumart;
    FILE * fpi;
    int32_t ret;
    lame_t gfp;
    char const * file_name;
    long offset;
    long whence;
    FILE * var_sp_ch;
    /* int set_id3_albumart(lame_t gfp,char const * file_name); */
    *((ebp - 0xc)) = 0xffffffff;
    *((ebp - 0x10)) = 0;
    *((ebp - 0x14)) = 0;
    if (*((ebp + 0xc)) == 0) {
        eax = 0;
    } else {
        eax = 0x8058e4c;
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        eax = fopen64 ();
        *((ebp - 0x10)) = eax;
        if (*((ebp - 0x10)) == 0) {
            *((ebp - 0xc)) = 1;
        } else {
            eax = *((ebp - 0x10));
            fseek (eax, 0, 2);
            eax = *((ebp - 0x10));
            eax = ftell (eax);
            *((ebp - 0x18)) = eax;
            eax = *((ebp - 0x10));
            fseek (eax, 0, 0);
            eax = *((ebp - 0x18));
            eax = malloc (eax);
            *((ebp - 0x14)) = eax;
            if (*((ebp - 0x14)) == 0) {
                *((ebp - 0xc)) = 2;
            } else {
                eax = *((ebp - 0x10));
                eax = *((ebp - 0x18));
                eax = *((ebp - 0x14));
                eax = fread (eax, 1, eax);
                if (eax != *((ebp - 0x18))) {
                    *((ebp - 0xc)) = 3;
                } else {
                    eax = *((ebp - 0x18));
                    *((esp + 8)) = eax;
                    eax = *((ebp - 0x14));
                    *((esp + 4)) = eax;
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    eax = id3tag_set_albumart ();
                    if (eax != 0) {
                        eax = 4;
                    } else {
                        eax = 0;
                    }
                    *((ebp - 0xc)) = eax;
                }
                eax = *((ebp - 0x14));
                free (eax);
            }
            eax = *((ebp - 0x10));
            fclose (eax);
        }
        eax = *((ebp - 0xc));
        if (eax != 2) {
            if (eax <= 2) {
                if (eax != 1) {
                } else {
                }
                if (eax != 3) {
                    if (eax != 4) {
                    } else {
                        eax = *((ebp + 0xc));
                    }
                    *((esp + 4)) = eax;
                    error_printf ("Could not find: '%s'.\n");
                } else {
                    error_printf ("Insufficient memory for reading the albumart.\n");
                } else {
                    eax = *((ebp + 0xc));
                }
                *((esp + 4)) = eax;
                error_printf ("Read error: '%s'.\n");
            } else {
                eax = *((ebp + 0xc));
            }
            *((esp + 4)) = eax;
            error_printf ("Unsupported image: '%s'.\nSpecify JPEG/PNG/GIF image (128KB maximum)\n");
        }
        eax = *((ebp - 0xc));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052d11 */
#include <stdint.h>
 
int32_t dbg_ConvertFromIeeeExtended (void) {
    int32_t var_2ch;
    double f;
    long unsigned int loMant;
    long unsigned int hiMant;
    long int expon;
    char * bytes;
    uint32_t var_8h;
    /* double ConvertFromIeeeExtended(char * bytes); */
    eax = *((ebp + 8));
    eax = *(eax);
    eax = (int32_t) al;
    eax &= 0x7f;
    edx = eax;
    edx <<= 8;
    eax = *((ebp + 8));
    eax++;
    eax = *(eax);
    eax = (int32_t) al;
    eax &= 0xff;
    eax |= edx;
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    eax += 2;
    eax = *(eax);
    eax = (int32_t) al;
    edx = eax;
    edx <<= 0x18;
    eax = *((ebp + 8));
    eax += 3;
    eax = *(eax);
    eax = (int32_t) al;
    eax &= 0xff;
    eax <<= 0x10;
    edx |= eax;
    eax = *((ebp + 8));
    eax += 4;
    eax = *(eax);
    eax = (int32_t) al;
    eax <<= 8;
    eax &= 0xffff;
    edx |= eax;
    eax = *((ebp + 8));
    eax += 5;
    eax = *(eax);
    eax = (int32_t) al;
    eax &= 0xff;
    eax |= edx;
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 8));
    eax += 6;
    eax = *(eax);
    eax = (int32_t) al;
    edx = eax;
    edx <<= 0x18;
    eax = *((ebp + 8));
    eax += 7;
    eax = *(eax);
    eax = (int32_t) al;
    eax &= 0xff;
    eax <<= 0x10;
    edx |= eax;
    eax = *((ebp + 8));
    eax += 8;
    eax = *(eax);
    eax = (int32_t) al;
    eax <<= 8;
    eax &= 0xffff;
    edx |= eax;
    eax = *((ebp + 8));
    eax += 9;
    eax = *(eax);
    eax = (int32_t) al;
    eax &= 0xff;
    eax |= edx;
    *((ebp - 0x14)) = eax;
    if (*((ebp - 0xc)) == 0) {
        if (*((ebp - 0x10)) == 0) {
            if (*((ebp - 0x14)) != 0) {
                goto label_0;
            }
            *(fp_stack--) = 0.0;
            *((ebp - 0x20)) = fp_stack[0];
            fp_stack--;
        }
    } else {
label_0:
        if (*((ebp - 0xc)) == 0x7fff) {
            *(fp_stack--) = *(0x8059868);
            *((ebp - 0x20)) = fp_stack[0];
            fp_stack--;
        } else {
            *((ebp - 0xc)) -= 0x3fff;
            *((ebp - 0xc)) -= 0x1f;
            eax = *((ebp - 0x10));
            eax -= 0x80000000;
            *((ebp - 0x2c)) = eax;
            *(fp_stack--) = *((ebp - 0x2c));
            *(fp_stack--) = *(0x8059870);
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            eax = *((ebp - 0xc));
            *(esp) = fp_stack[0];
            fp_stack--;
            ldexp (eax);
            *((ebp - 0x20)) = fp_stack[0];
            fp_stack--;
            *((ebp - 0xc)) -= 0x20;
            eax = *((ebp - 0x14));
            eax -= 0x80000000;
            *((ebp - 0x2c)) = eax;
            *(fp_stack--) = *((ebp - 0x2c));
            *(fp_stack--) = *(0x8059870);
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            eax = *((ebp - 0xc));
            *(esp) = fp_stack[0];
            fp_stack--;
            ldexp (eax);
            *(fp_stack--) = *((ebp - 0x20));
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            *((ebp - 0x20)) = fp_stack[0];
            fp_stack--;
        }
    }
    eax = *((ebp + 8));
    eax = *(eax);
    if (al < 0) {
        *(fp_stack--) = *((ebp - 0x20));
        fp_stack[0] = -fp_stack[0];
    } else {
        *(fp_stack--) = *((ebp - 0x20));
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052edc */
#include <stdint.h>
 
int32_t dbg_ts_calc_times (void) {
    int32_t var_4h;
    timestatus_t * const tstime;
    int const sample_freq;
    int const frameNum;
    int const totalframes;
    int const framesize;
    /* void ts_calc_times(timestatus_t * const tstime,int const sample_freq,int const frameNum,int const totalframes,int const framesize); */
    if (*((ebp + 0x10)) > 0) {
        eax = *((ebp + 8));
        *(fp_stack--) = *((eax + 8));
        *(fp_stack--) = 0.0;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al != 0) {
            eax = *((ebp + 8));
            *(fp_stack--) = *((eax + 8));
            *(fp_stack--) = *((ebp + 0x14));
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            *(fp_stack--) = *((ebp + 0x10));
            fp_stack[0] /= fp_stack[1];
            fp_stack++;
            eax = *((ebp + 8));
            *((eax + 0x10)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp + 0x18));
            eax *= *((ebp + 0x10));
            *((ebp - 4)) = eax;
            *(fp_stack--) = *((ebp - 4));
            *(fp_stack--) = *((ebp + 0xc));
            eax = *((ebp + 8));
            *(fp_stack--) = *((eax + 8));
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[0] /= fp_stack[1];
            fp_stack++;
            eax = *((ebp + 8));
            *((eax + 0x18)) = fp_stack[0];
            fp_stack--;
        }
    } else {
        eax = *((ebp + 8));
        *(fp_stack--) = 0.0;
        *((eax + 0x10)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 8));
        *(fp_stack--) = 0.0;
        *((eax + 0x18)) = fp_stack[0];
        fp_stack--;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052f47 */
#include <stdint.h>
 
int32_t dbg_ts_time_decompose (int32_t arg_ch) {
    int32_t var_2ch;
    char const padded_char;
    unsigned int const sec;
    unsigned int const min;
    long unsigned int const hour;
    long unsigned int const time_in_sec;
    uint32_t var_4h;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_sp_10h;
    /* void ts_time_decompose(long unsigned int const time_in_sec,char const padded_char); */
    eax = *((ebp + 0xc));
    *((ebp - 0x1c)) = al;
    eax = *((ebp + 8));
    *((ebp - 0x2c)) = eax;
    edx = 0x91a2b3c5;
    eax = *((ebp - 0x2c));
    edx:eax = eax * edx;
    eax = edx;
    eax >>= 0xb;
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *((ebp - 0x2c)) = eax;
    edx = 0x88888889;
    eax = *((ebp - 0x2c));
    edx:eax = eax * edx;
    ecx = edx;
    ecx >>= 5;
    edx = 0x88888889;
    eax = ecx;
    edx:eax = eax * edx;
    eax = edx;
    eax >>= 5;
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    eax <<= 2;
    edx = eax;
    edx <<= 4;
    edx -= eax;
    eax = ecx;
    eax -= edx;
    *((ebp - 0x10)) = eax;
    ecx = *((ebp + 8));
    edx = 0x88888889;
    eax = ecx;
    edx:eax = eax * edx;
    eax = edx;
    eax >>= 5;
    eax <<= 2;
    edx = eax;
    edx <<= 4;
    edx -= eax;
    eax = ecx;
    eax -= edx;
    *((ebp - 0x14)) = eax;
    if (*((ebp - 0xc)) == 0) {
        eax = *((ebp - 0x1c));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x10));
        *((esp + 4)) = eax;
        console_printf (0x8059878);
    } else {
        if (*((ebp - 0xc)) <= 0x63) {
            eax = *((ebp - 0x1c));
            *((esp + 0x10)) = eax;
            eax = *((ebp - 0x14));
            *((esp + 0xc)) = eax;
            eax = *((ebp - 0x10));
            *((esp + 8)) = eax;
            eax = *((ebp - 0xc));
            *((esp + 4)) = eax;
            console_printf ("%2lu:%02u:%02u%c");
        } else {
            eax = *((ebp - 0x1c));
            *((esp + 8)) = eax;
            eax = *((ebp - 0xc));
            *((esp + 4)) = eax;
            console_printf ("%6lu h%c");
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x805303f */
#include <stdint.h>
 
int32_t dbg_timestatus (void) {
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_3ch;
    int32_t var_3ah;
    double delta;
    double tmx;
    int32_t framesize;
    int32_t totalframes;
    int32_t frameNum;
    int32_t samp_rate;
    int32_t percent;
    lame_global_flags const * const gfp;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_sp_10h;
    /* void timestatus(lame_global_flags const * const gfp); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_out_samplerate ();
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_frameNum ();
    *((ebp - 0x14)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_totalframes ();
    *((ebp - 0x18)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_framesize ();
    *((ebp - 0x1c)) = eax;
    eax = *((ebp - 0x18));
    if (eax < *((ebp - 0x14))) {
        eax = *((ebp - 0x14));
        *((ebp - 0x18)) = eax;
    }
    if (*((ebp - 0x14)) == 0) {
        GetRealTime ();
        *(0x805b420) = fp_stack[0];
        fp_stack--;
        GetCPUTime ();
        *(0x805b440) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *(0x805b428) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = 0.0;
        *(0x805b448) = fp_stack[0];
        fp_stack--;
    }
    GetRealTime ();
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x805b420);
    *(fp_stack--) = *((ebp - 0x28));
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    *((ebp - 0x30)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x30));
    *(fp_stack--) = 0.0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    if (al != 0) {
        *(fp_stack--) = 0.0;
        *((ebp - 0x30)) = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *(0x805b428);
    fp_stack[0] += *((ebp - 0x30));
    *(0x805b428) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x28));
    *(0x805b420) = fp_stack[0];
    fp_stack--;
    GetCPUTime ();
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *(0x805b440);
    *(fp_stack--) = *((ebp - 0x28));
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    *((ebp - 0x30)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x30));
    *(fp_stack--) = 0.0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    if (al != 0) {
        *(fp_stack--) = 0.0;
        *((ebp - 0x30)) = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *(0x805b448);
    fp_stack[0] += *((ebp - 0x30));
    *(0x805b448) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x28));
    *(0x805b440) = fp_stack[0];
    fp_stack--;
    if (*((ebp - 0x14)) == 0) {
        eax = .comment;
        if (eax == 0) {
            console_printf ("\r    Frame          |  CPU time/estim | REAL time/estim | play/CPU |    ETA \n     0/       ( 0%%)|    0:00/     :  |    0:00/     :  |         x|     :  \r");
            *(0x805b460) = 1;
        }
    } else {
        if (*((ebp - 0x14)) > 0) {
            *(0x805b460) = 0;
        }
        eax = *((ebp - 0x1c));
        *((esp + 0x10)) = eax;
        eax = *((ebp - 0x18));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x10));
        *((esp + 4)) = eax;
        *(esp) = 0x805b420;
        ts_calc_times ();
        eax = *((ebp - 0x1c));
        *((esp + 0x10)) = eax;
        eax = *((ebp - 0x18));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x10));
        *((esp + 4)) = eax;
        *(esp) = 0x805b440;
        ts_calc_times ();
        eax = *((ebp - 0x14));
        if (eax < *((ebp - 0x18))) {
            *(fp_stack--) = *((ebp - 0x14));
            *(fp_stack--) = *(0x8059ae8);
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            *(fp_stack--) = *((ebp - 0x18));
            fp_stack[0] /= fp_stack[1];
            fp_stack++;
            *(fp_stack--) = *(0x8059af0);
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            eax = *((ebp - 0x3a));
            ah = 0xc;
            *((ebp - 0x3c)) = ax;
            *((ebp - 0xc)) = fp_stack[0];
            fp_stack--;
        } else {
            *((ebp - 0xc)) = 0x64;
        }
        eax = *((ebp - 0x18));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x14));
        *((esp + 4)) = eax;
        console_printf ("\r%6i/%-6i");
        if (*((ebp - 0xc)) <= 0x63) {
            eax = " (%2d%%)|";
        } else {
            eax = "(%3.3d%%)|";
        }
        edx = *((ebp - 0xc));
        *((esp + 4)) = edx;
        console_printf (eax);
        *(fp_stack--) = *(0x805b448);
        eax = *((ebp - 0x3a));
        ah = 0xc;
        *((ebp - 0x3c)) = ax;
        *((ebp - 0x48)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x48));
        edx = *((ebp - 0x44));
        *((esp + 4)) = 0x2f;
        ts_time_decompose (eax);
        *(fp_stack--) = *(0x805b450);
        eax = *((ebp - 0x3a));
        ah = 0xc;
        *((ebp - 0x3c)) = ax;
        *((ebp - 0x48)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x48));
        edx = *((ebp - 0x44));
        *((esp + 4)) = 0x7c;
        ts_time_decompose (eax);
        *(fp_stack--) = *(0x805b428);
        eax = *((ebp - 0x3a));
        ah = 0xc;
        *((ebp - 0x3c)) = ax;
        *((ebp - 0x48)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x48));
        edx = *((ebp - 0x44));
        *((esp + 4)) = 0x2f;
        ts_time_decompose (eax);
        *(fp_stack--) = *(0x805b430);
        eax = *((ebp - 0x3a));
        ah = 0xc;
        *((ebp - 0x3c)) = ax;
        *((ebp - 0x48)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x48));
        edx = *((ebp - 0x44));
        *((esp + 4)) = 0x7c;
        ts_time_decompose (eax);
        *(fp_stack--) = *(0x805b458);
        *(fp_stack--) = *(0x805b458);
        *(fp_stack--) = 1.0;
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
        if (al != 0) {
            eax = "%9.4fx|";
        } else {
            eax = "%#9.5gx|";
        }
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        console_printf (eax);
        *(fp_stack--) = *(0x805b430);
        *(fp_stack--) = *(0x805b428);
        fp_stack[0] -= fp_stack[1];
        fp_stack++;
        eax = *((ebp - 0x3a));
        ah = 0xc;
        *((ebp - 0x3c)) = ax;
        *((ebp - 0x48)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x48));
        edx = *((ebp - 0x44));
        *((esp + 4)) = 0x20;
        ts_time_decompose (eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8053376 */
#include <stdint.h>
 
void dbg_timestatus_finish (void) {
    /* void timestatus_finish(); */
    console_printf (0x805996b);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8053a0c */
#include <stdint.h>
 
int32_t dbg_calculate_index (void) {
    int32_t i;
    int const * const array;
    int const len;
    int const value;
    /* int calculate_index(int const * const array,int const len,int const value); */
    *((ebp - 4)) = 0;
    while (eax < *((ebp + 0xc))) {
        eax = *((ebp - 4));
        eax <<= 2;
        eax += *((ebp + 8));
        eax = *(eax);
        if (eax == *((ebp + 0x10))) {
            eax = *((ebp - 4));
            goto label_0;
        }
        *((ebp - 4))++;
        eax = *((ebp - 4));
    }
    eax = 0xffffffff;
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8053b52 */
#include <stdint.h>
 
int32_t dbg_digits (void) {
    int32_t var_14h;
    int32_t ret;
    uint32_t number;
    /* int digits(unsigned int number); */
    *((ebp - 4)) = 1;
    if (*((ebp + 8)) > 0x5f5e0ff) {
        *((ebp - 4)) += 8;
        eax = *((ebp + 8));
        *((ebp - 0x14)) = eax;
        edx = 0x55e63b89;
        eax = *((ebp - 0x14));
        edx:eax = eax * edx;
        eax = edx;
        eax >>= 0x19;
        *((ebp + 8)) = eax;
    }
    if (*((ebp + 8)) > 0x270f) {
        *((ebp - 4)) += 4;
        eax = *((ebp + 8));
        *((ebp - 0x14)) = eax;
        edx = 0xd1b71759;
        eax = *((ebp - 0x14));
        edx:eax = eax * edx;
        eax = edx;
        eax >>= 0xd;
        *((ebp + 8)) = eax;
    }
    if (*((ebp + 8)) > 0x63) {
        *((ebp - 4)) += 2;
        eax = *((ebp + 8));
        *((ebp - 0x14)) = eax;
        edx = 0x51eb851f;
        eax = *((ebp - 0x14));
        edx:eax = eax * edx;
        eax = edx;
        eax >>= 5;
        *((ebp + 8)) = eax;
    }
    if (*((ebp + 8)) > 9) {
        *((ebp - 4))++;
    }
    eax = *((ebp - 4));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8053bda */
#include <stdint.h>
 
int32_t dbg_brhist_disp_line (void) {
    int32_t res;
    int32_t ppt;
    int32_t barlen_LR;
    int32_t barlen_TOT;
    char[14] brppt;
    int32_t canary;
    int32_t i;
    int32_t br_hist_TOT;
    int32_t br_hist_LR;
    int32_t full;
    int32_t frames;
    char * format;
    int32_t var_8h;
    int32_t var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_sp_20h;
    /* void brhist_disp_line(int i,int br_hist_TOT,int br_hist_LR,int full,int frames); */
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((ebp - 0x28)) = 0;
    eax = *((ebp + 0x18));
    *(esp) = eax;
    eax = digits ();
    eax += 8;
    *((ebp - 0x2c)) = eax;
    if (*((ebp + 0x14)) != 0) {
        eax = .comment;
        eax -= *((ebp - 0x2c));
        eax *= *((ebp + 0xc));
        eax += *((ebp + 0x14));
        eax--;
        edx = eax;
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp + 0x14;
        edx = *(edx:eax) % ebp + 0x14;
        *((ebp - 0x20)) = eax;
        eax = .comment;
        eax -= *((ebp - 0x2c));
        eax *= *((ebp + 0x10));
        eax += *((ebp + 0x14));
        eax--;
        edx = eax;
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp + 0x14;
        edx = *(edx:eax) % ebp + 0x14;
        *((ebp - 0x24)) = eax;
    } else {
        *((ebp - 0x24)) = 0;
        eax = *((ebp - 0x24));
        *((ebp - 0x20)) = eax;
    }
    if (*((ebp + 0x18)) > 0) {
        eax = *((ebp + 0xc));
        edx = eax * 0x3e8;
        eax = *((ebp + 0x18));
        ecx = *((ebp + 0x18));
        ecx >>= 0x1f;
        eax = ecx + eax;
        eax >>= 1;
        eax = edx + eax;
        edx = eax;
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp + 0x18;
        edx = *(edx:eax) % ebp + 0x18;
        *((ebp - 0x28)) = eax;
    }
    eax = *((ebp + 0x18));
    *(esp) = eax;
    eax = digits ();
    edx = " [%*i]";
    ecx = *((ebp + 0xc));
    *((esp + 0xc)) = ecx;
    eax = ebp - 0x1a;
    sprintf (eax, edx, eax);
    eax = *(0x805bd06);
    if (al != 0) {
        eax = *((ebp - 0x24));
        edx = *((ebp - 0x20));
        edx -= eax;
        eax = *((ebp + 8));
        eax = *((eax*4 + 0x805b488));
        *((esp + 0x1c)) = 0x805bd06;
        *((esp + 0x18)) = 0x805b4c4;
        *((esp + 0x14)) = edx;
        *((esp + 0x10)) = 0x805b6c5;
        edx = *((ebp - 0x24));
        *((esp + 0xc)) = edx;
        edx = ebp - 0x1a;
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        console_printf ("\n%3d%s %.*s%.*s%s");
    } else {
        eax = .comment;
        eax -= *((ebp - 0x2c));
        edx = eax;
        edx -= *((ebp - 0x20));
        eax = *((ebp - 0x24));
        ecx = *((ebp - 0x20));
        ecx -= eax;
        eax = *((ebp + 8));
        eax = *((eax*4 + 0x805b488));
        *((esp + 0x20)) = 0x8059b6f;
        *((esp + 0x1c)) = edx;
        *((esp + 0x18)) = 0x805b4c4;
        *((esp + 0x14)) = ecx;
        *((esp + 0x10)) = 0x805b6c5;
        edx = *((ebp - 0x24));
        *((esp + 0xc)) = edx;
        edx = ebp - 0x1a;
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        console_printf ("\n%3d%s %.*s%.*s%*s");
    }
    eax = .comment;
    eax++;
    *(0x805b4c0) = eax;
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8053d7c */
#include <stdint.h>
 
int32_t dbg_progress_line (int32_t arg_8h) {
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4eh;
    lame_global_flags const * gf;
    int32_t srate;
    int32_t fsize;
    uint32_t sec;
    uint32_t min;
    uint32_t hour;
    float time_in_sec;
    int32_t res;
    int32_t barlen_RST;
    int32_t barlen_COD;
    int32_t barlen_TOT;
    char[20] rst;
    int32_t var_1eh;
    int32_t var_1ah;
    int32_t var_16h;
    int32_t var_12h;
    int32_t var_eh;
    int32_t canary;
    int32_t full;
    int32_t frames;
    char * format;
    int32_t var_8h;
    uint32_t var_sp_ch;
    uint32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    /* void progress_line(lame_global_flags const * gf,int full,int frames); */
    eax = *((ebp + 8));
    *((ebp - 0x4c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *(0x8059bbd);
    *((ebp - 0x20)) = ax;
    *((ebp - 0x1e)) = 0;
    *((ebp - 0x1a)) = 0;
    *((ebp - 0x16)) = 0;
    *((ebp - 0x12)) = 0;
    *((ebp - 0xe)) = 0;
    *((ebp - 0x24)) = 0;
    *((ebp - 0x28)) = 0;
    *((ebp - 0x2c)) = 0;
    *((ebp - 0x30)) = 1;
    eax = 0;
    *((ebp - 0x34)) = eax;
    eax = *((ebp - 0x4c));
    *(esp) = eax;
    eax = lame_get_framesize ();
    *((ebp - 0x44)) = eax;
    eax = *((ebp - 0x4c));
    *(esp) = eax;
    eax = lame_get_out_samplerate ();
    *((ebp - 0x48)) = eax;
    eax = *((ebp + 0xc));
    if (eax < *((ebp + 0x10))) {
        eax = *((ebp + 0x10));
        *((ebp + 0xc)) = eax;
    }
    if (*((ebp - 0x48)) > 0) {
        eax = *((ebp + 0x10));
        edx = *((ebp + 0xc));
        ecx = *((ebp + 0xc));
        ecx -= eax;
        eax = ecx;
        *((ebp - 0x5c)) = eax;
        *(fp_stack--) = *((ebp - 0x5c));
        *((ebp - 0x34)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x44));
        *(fp_stack--) = *((ebp - 0x34));
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0x34)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x48));
        *(fp_stack--) = *((ebp - 0x34));
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        *((ebp - 0x34)) = fp_stack[0];
        fp_stack--;
    }
    *(fp_stack--) = *((ebp - 0x34));
    *(fp_stack--) = *(0x8059c48);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    eax = *((ebp - 0x4e));
    ah = 0xc;
    *((ebp - 0x50)) = ax;
    *((ebp - 0x58)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x58));
    edx = *((ebp - 0x54));
    *((ebp - 0x38)) = eax;
    eax = *((ebp - 0x38));
    eax *= 0xe10;
    edx = 0;
    *((ebp - 0x58)) = eax;
    *((ebp - 0x54)) = edx;
    *(fp_stack--) = *((ebp - 0x58));
    *(fp_stack--) = *((ebp - 0x34));
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    *((ebp - 0x34)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x34));
    *(fp_stack--) = *(0x8059c4c);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    *((ebp - 0x58)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x58));
    edx = *((ebp - 0x54));
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0x3c));
    eax <<= 2;
    edx = eax;
    edx <<= 4;
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    edx = 0;
    *((ebp - 0x58)) = eax;
    *((ebp - 0x54)) = edx;
    *(fp_stack--) = *((ebp - 0x58));
    *(fp_stack--) = *((ebp - 0x34));
    fp_stack[1] -= fp_stack[0];
    fp_stack++;
    *((ebp - 0x34)) = fp_stack[0];
    fp_stack--;
    *(fp_stack--) = *((ebp - 0x34));
    *((ebp - 0x58)) = fp_stack[0];
    fp_stack--;
    eax = *((ebp - 0x58));
    edx = *((ebp - 0x54));
    *((ebp - 0x40)) = eax;
    if (*((ebp + 0xc)) != 0) {
        if (*((ebp - 0x38)) != 0) {
            eax = *((ebp - 0x38));
            *(esp) = eax;
            eax = digits ();
            edx = "%*d:%02u:%02u";
            ecx = *((ebp - 0x40));
            *((esp + 0x14)) = ecx;
            ecx = *((ebp - 0x3c));
            *((esp + 0x10)) = ecx;
            ecx = *((ebp - 0x38));
            *((esp + 0xc)) = ecx;
            eax = ebp - 0x20;
            sprintf (eax, edx, eax);
            eax = *((ebp - 0x38));
            *(esp) = eax;
            eax = digits ();
            eax += 6;
            *((ebp - 0x30)) += eax;
        } else {
            eax = "%02u:%02u";
            edx = *((ebp - 0x40));
            *((esp + 0xc)) = edx;
            edx = *((ebp - 0x3c));
            eax = ebp - 0x20;
            sprintf (eax, eax, edx);
            *((ebp - 0x30)) += 5;
        }
        eax = .comment;
        eax -= *((ebp - 0x30));
        eax++;
        eax *= *((ebp + 0xc));
        eax--;
        edx = eax;
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp + 0xc;
        edx = *(edx:eax) % ebp + 0xc;
        *((ebp - 0x24)) = eax;
        eax = .comment;
        eax -= *((ebp - 0x30));
        eax *= *((ebp + 0x10));
        eax += *((ebp + 0xc));
        eax--;
        edx = eax;
        edx >>= 0x1f;
        eax = *(edx:eax) / ebp + 0xc;
        edx = *(edx:eax) % ebp + 0xc;
        *((ebp - 0x28)) = eax;
        eax = *((ebp - 0x28));
        edx = *((ebp - 0x24));
        ecx = *((ebp - 0x24));
        ecx -= eax;
        eax = ecx;
        *((ebp - 0x2c)) = eax;
        if (*((ebp - 0x2c)) != 0) {
            goto label_0;
        }
        eax = *((ebp - 0x30));
        edx = eax - 1;
        eax = "%.*s";
        *((esp + 0xc)) = 0x805b8c6;
        eax = ebp - 0x20;
        sprintf (eax, eax, edx);
    } else {
        *((ebp - 0x2c)) = 0;
        eax = *((ebp - 0x2c));
        *((ebp - 0x28)) = eax;
        eax = *((ebp - 0x28));
        *((ebp - 0x24)) = eax;
    }
label_0:
    eax = *(0x805bd06);
    if (al != 0) {
        *((esp + 0x18)) = 0x805bd06;
        *((esp + 0x14)) = 0x805bac7;
        eax = *((ebp - 0x2c));
        *((esp + 0x10)) = eax;
        eax = ebp - 0x20;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0x805b8c6;
        eax = *((ebp - 0x28));
        *((esp + 4)) = eax;
        console_printf ("\n%.*s%s%.*s%s");
    } else {
        eax = .comment;
        eax -= *((ebp - 0x30));
        eax -= *((ebp - 0x24));
        *((esp + 0x1c)) = 0x8059b6f;
        *((esp + 0x18)) = eax;
        *((esp + 0x14)) = 0x805bac7;
        eax = *((ebp - 0x2c));
        *((esp + 0x10)) = eax;
        eax = ebp - 0x20;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0x805b8c6;
        eax = *((ebp - 0x28));
        *((esp + 4)) = eax;
        console_printf ("\n%.*s%s%.*s%*s");
    }
    eax = .comment;
    eax++;
    *(0x805b4c0) = eax;
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x805409d */
#include <stdint.h>
 
int32_t dbg_stats_value (int32_t arg_8h, int32_t arg_ch) {
    double x;
    int32_t var_ch;
    /* int stats_value(double x); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = 0.0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    if (al != 0) {
        *(fp_stack--) = *((ebp - 0x10));
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        console_printf (" %5.1f");
        eax = 6;
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x80540e2 */
#include <stdint.h>
 
int32_t dbg_stats_head (int32_t arg_8h, int32_t arg_ch) {
    double x;
    int32_t var_ch;
    char const * txt;
    /* int stats_head(double x,char const * txt); */
    eax = *((ebp + 8));
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0x10));
    *(fp_stack--) = 0.0;
    fp_tmp_0 = fp_stack[1];
    fp_stack[1] = fp_stack[0];
    fp_stack[0] = fp_tmp_0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    if (al != 0) {
        eax = *((ebp + 0x10));
        console_printf (eax);
        eax = 6;
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x805411f */
#include <stdint.h>
 
int32_t dbg_stats_line (void) {
    int32_t n;
    double * stat;
    int32_t var_4h;
    char * var_8h;
    /* void stats_line(double * stat); */
    *((ebp - 0xc)) = 1;
    console_printf ("\n   kbps     ");
    *((ebp - 0xc)) += 0xc;
    eax = *((ebp + 8));
    eax += 8;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_head ("  mono");
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x10;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_head ("   IS ");
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x18;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_head ("   LR ");
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x20;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_head ("   MS ");
    *((ebp - 0xc)) += eax;
    console_printf (" %%    ");
    *((ebp - 0xc)) += 6;
    eax = *((ebp + 8));
    eax += 0x28;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_head (" long ");
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x30;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_head ("switch");
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x38;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_head (" short");
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x40;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_head (" mixed");
    *((ebp - 0xc)) += eax;
    eax = console_printf (0x8059c26);
    *((ebp - 0xc)) += eax;
    eax = *(0x805bd06);
    if (al != 0) {
        *((esp + 4)) = 0x805bd06;
        console_printf (0x8059c2a);
    } else {
        eax = .comment;
        eax -= *((ebp - 0xc));
        *((esp + 8)) = 0x8059b6f;
        *((esp + 4)) = eax;
        console_printf (0x8059c2d);
    }
    eax = .comment;
    eax++;
    *(0x805b4c0) = eax;
    *((ebp - 0xc)) = 1;
    eax = *((ebp + 8));
    *(fp_stack--) = *(eax);
    *((esp + 4)) = fp_stack[0];
    fp_stack--;
    console_printf ("\n  %5.1f     ");
    *((ebp - 0xc)) += 0xc;
    eax = *((ebp + 8));
    eax += 8;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_value ();
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x10;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_value ();
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x18;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_value ();
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x20;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_value ();
    *((ebp - 0xc)) += eax;
    console_printf ("      ");
    *((ebp - 0xc)) += 6;
    eax = *((ebp + 8));
    eax += 0x28;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_value ();
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x30;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_value ();
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x38;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_value ();
    *((ebp - 0xc)) += eax;
    eax = *((ebp + 8));
    eax += 0x40;
    *(fp_stack--) = *(eax);
    *(esp) = fp_stack[0];
    fp_stack--;
    eax = stats_value ();
    *((ebp - 0xc)) += eax;
    eax = *(0x805bd06);
    if (al != 0) {
        *((esp + 4)) = 0x805bd06;
        console_printf (0x8059c2a);
    } else {
        eax = .comment;
        eax -= *((ebp - 0xc));
        *((esp + 8)) = 0x8059b6f;
        *((esp + 4)) = eax;
        console_printf (0x8059c2d);
    }
    eax = .comment;
    eax++;
    *(0x805b4c0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052b17 */
#include <stdint.h>
 
int32_t dbg_Read32BitsHighLow (void) {
    int32_t result;
    int32_t second;
    int32_t first;
    FILE * fp;
    /* int Read32BitsHighLow(FILE * fp); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = Read16BitsHighLow ();
    eax &= 0xffff;
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = Read16BitsHighLow ();
    eax &= 0xffff;
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0xc));
    eax <<= 0x10;
    eax += *((ebp - 0x10));
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052995 */
#include <stdint.h>
 
int32_t dbg_Read16BitsHighLow (void) {
    int32_t result;
    int32_t second;
    int32_t first;
    FILE * fp;
    /* int Read16BitsHighLow(FILE * fp); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = IO_getc ();
    eax &= 0xff;
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = IO_getc ();
    eax &= 0xff;
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0xc));
    eax <<= 8;
    eax += *((ebp - 0x10));
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x14));
    eax &= 0x8000;
    if (eax != 0) {
        *((ebp - 0x14)) -= 0x10000;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a2ec */
#include <stdint.h>
 
void IO_getc (void) {
    IO_getc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cca1 */
#include <stdint.h>
 
uint32_t dbg_machine_byte_order (void) {
    long int one;
    /* ByteOrder machine_byte_order(); */
    *((ebp - 4)) = 1;
    eax = ebp - 4;
    eax = *(eax);
    al = (al == 0) ? 1 : 0;
    eax = (int32_t) al;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052914 */
#include <stdint.h>
 
int32_t dbg_ReadByte (void) {
    int32_t result;
    FILE * fp;
    /* int ReadByte(FILE * fp); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = IO_getc ();
    eax &= 0xff;
    *((ebp - 0xc)) = eax;
    eax = *((ebp - 0xc));
    eax &= 0x80;
    if (eax != 0) {
        *((ebp - 0xc)) -= 0x100;
    }
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f0f0 */
#include <stdint.h>
 
uint32_t dbg_lame_get_file_size (void) {
    stat sb;
    int32_t var_3ch;
    int32_t var_38h;
    char const * const filename;
    int32_t var_4h;
    /* off_t lame_get_file_size(char const * const filename); */
    eax = ebp - 0x68;
    eax = *((ebp + 8));
    eax = stat64 (eax, eax);
    if (eax == 0) {
        eax = *((ebp - 0x3c));
        edx = *((ebp - 0x38));
    } else {
        eax = 0xffffffff;
        edx = 0xffffffff;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052bf0 */
#include <stdint.h>
 
int32_t dbg_ReadBytes (void) {
    FILE * fp;
    char * p;
    int32_t n;
    /* void ReadBytes(FILE * fp,char * p,int n); */
    while (al != 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = IO_getc ();
        edx = eax;
        eax = *((ebp + 0xc));
        *(eax) = dl;
        *((ebp + 0xc))++;
        eax = *((ebp + 8));
        eax = feof (eax);
        dl = (eax == 0) ? 1 : 0;
        al = (*((ebp + 0x10)) > 0) ? 1 : 0;
        eax &= edx;
        *((ebp + 0x10))--;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052bbc */
#include <stdint.h>
 
int32_t dbg_Write32BitsHighLow (void) {
    FILE * fp;
    int32_t i;
    int32_t var_4h;
    /* void Write32BitsHighLow(FILE * fp,int i); */
    eax = *((ebp + 0xc));
    eax >>= 0x10;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write16BitsHighLow ();
    eax = *((ebp + 0xc));
    eax &= 0xffff;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write16BitsHighLow ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052a37 */
#include <stdint.h>
 
int32_t dbg_Write16BitsHighLow (void) {
    FILE * fp;
    int32_t i;
    int32_t var_4h;
    /* void Write16BitsHighLow(FILE * fp,int i); */
    eax = *((ebp + 0xc));
    eax >>= 8;
    edx = (int32_t) al;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = edx;
    IO_putc ();
    eax = *((ebp + 0xc));
    edx = (int32_t) al;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = edx;
    IO_putc ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a90c */
#include <stdint.h>
 
void IO_putc (void) {
    IO_putc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8054720 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cbfc */
#include <stdint.h>
 
int32_t dbg_console_up (void) {
    int32_t n_lines;
    FILE * stream;
    /* void console_up(int n_lines); */
    while (al != 0) {
        edx = .comment;
        eax = 0x805bcfc;
        fputs (eax, edx);
        al = (*((ebp + 8)) > 0) ? 1 : 0;
        *((ebp + 8))--;
    }
    console_flush ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8054399 */
#include <stdint.h>
 
int32_t dbg_brhist_disp (void) {
    int32_t var_1bch;
    int[14][4] br_sm_hist;
    double[9] stat;
    int[14] br_hist;
    int[6] bl_type;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int[4] st_mode;
    int32_t var_30h;
    double sum;
    int32_t show;
    int32_t st_frames;
    int32_t most_often;
    int32_t frames;
    int32_t lines_used;
    int32_t i;
    int32_t var_8h;
    lame_global_flags const * gf;
    int32_t var_4h;
    int32_t var_sp_8h;
    int32_t var_sp_ch;
    int32_t var_sp_10h;
    /* void brhist_disp(lame_global_flags const * gf); */
    *((ebp - 0x10)) = 0;
    *(fp_stack--) = 0.0;
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    ebx = ebp - 0xd0;
    eax = 0;
    edx = 0x12;
    edi = ebx;
    ecx = edx;
    memset (edi, eax, ecx);
    *((ebp - 0x1c)) = 0;
    *(0x805b4c0) = 0;
    eax = ebp - 0x1b0;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    lame_bitrate_stereo_mode_hist ();
    eax = ebp - 0x88;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    lame_bitrate_hist ();
    eax = ebp - 0x38;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    lame_stereo_mode_hist ();
    eax = ebp - 0x50;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    lame_block_type_hist ();
    *((ebp - 0x18)) = 0;
    eax = *((ebp - 0x18));
    *((ebp - 0x14)) = eax;
    *((ebp - 0xc)) = 0;
    while (*((ebp - 0xc)) <= 0xd) {
        eax = *((ebp - 0xc));
        eax = *((ebp + eax*4 - 0x88));
        *((ebp - 0x14)) += eax;
        eax = *((ebp - 0xc));
        edx = *((ebp + eax*4 - 0x88));
        eax = *((ebp - 0xc));
        eax = *((eax*4 + 0x805b488));
        eax *= edx;
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        *(fp_stack--) = *((ebp - 0x28));
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        *((ebp - 0x28)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0xc));
        eax = *((ebp + eax*4 - 0x88));
        if (eax > *((ebp - 0x18))) {
            eax = *((ebp - 0xc));
            eax = *((ebp + eax*4 - 0x88));
            *((ebp - 0x18)) = eax;
        }
        eax = *((ebp - 0xc));
        eax = *((ebp + eax*4 - 0x88));
        if (eax != 0) {
            *((ebp - 0x10))++;
        }
        *((ebp - 0xc))++;
    }
    *((ebp - 0xc)) = 0;
    while (*((ebp - 0xc)) <= 0xd) {
        eax = *((ebp - 0xc));
        eax = *((ebp + eax*4 - 0x88));
        *((ebp - 0x20)) = eax;
        if (*((ebp - 0x20)) != 0) {
            if (*((ebp - 0x10)) > 1) {
                eax = 1;
            }
        } else {
            eax = 0;
        }
        *((ebp - 0x20)) = eax;
        if (*((ebp - 0x20)) == 0) {
            eax = brhist;
            if (eax > *((ebp - 0xc))) {
                goto label_0;
            }
            eax = .comment;
            if (eax < *((ebp - 0xc))) {
                goto label_0;
            }
        }
        eax = *((ebp - 0xc));
        eax <<= 4;
        edx = ebp - 8;
        eax += edx;
        eax -= 0x1a8;
        edx = *(eax);
        eax = *((ebp - 0xc));
        eax = *((ebp + eax*4 - 0x88));
        ecx = *((ebp - 0x14));
        *((esp + 0x10)) = ecx;
        ecx = *((ebp - 0x18));
        *((esp + 0xc)) = ecx;
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        brhist_disp_line ();
label_0:
        *((ebp - 0xc))++;
    }
    *((ebp - 0xc)) = 0;
    while (*((ebp - 0xc)) <= 3) {
        eax = *((ebp - 0xc));
        eax = *((ebp + eax*4 - 0x38));
        *((ebp - 0x1c)) += eax;
        *((ebp - 0xc))++;
    }
    if (*((ebp - 0x14)) > 0) {
        *(fp_stack--) = *((ebp - 0x14));
        *(fp_stack--) = *((ebp - 0x28));
        fp_stack[1] /= fp_stack[0];
        fp_stack++;
        *((ebp - 0xd0)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x1c));
        edx = *((ebp - 0x14));
        ecx = *((ebp - 0x14));
        ecx -= eax;
        eax = ecx;
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        *(fp_stack--) = *(0x8059c50);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 0x14));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0xc8)) = fp_stack[0];
        fp_stack--;
    }
    if (*((ebp - 0x1c)) > 0) {
        *(fp_stack--) = 0.0;
        *((ebp - 0xc0)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x38));
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        *(fp_stack--) = *(0x8059c50);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 0x1c));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0xb8)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x30));
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        *(fp_stack--) = *(0x8059c50);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *((ebp - 0x1c));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0xb0)) = fp_stack[0];
        fp_stack--;
    }
    eax = *((ebp - 0x3c));
    if (eax > 0) {
        eax = *((ebp - 0x50));
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        *(fp_stack--) = *(0x8059c50);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        eax = *((ebp - 0x3c));
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0xa8)) = fp_stack[0];
        fp_stack--;
        edx = *((ebp - 0x4c));
        eax = *((ebp - 0x44));
        eax = edx + eax;
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        *(fp_stack--) = *(0x8059c50);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        eax = *((ebp - 0x3c));
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0xa0)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x48));
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        *(fp_stack--) = *(0x8059c50);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        eax = *((ebp - 0x3c));
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0x98)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x40));
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        *(fp_stack--) = *(0x8059c50);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        eax = *((ebp - 0x3c));
        *((ebp - 0x1bc)) = eax;
        *(fp_stack--) = *((ebp - 0x1bc));
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0x90)) = fp_stack[0];
        fp_stack--;
    }
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_totalframes ();
    edx = *((ebp - 0x14));
    *((esp + 8)) = edx;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    progress_line (eax);
    eax = ebp - 0xd0;
    *(esp) = eax;
    stats_line ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052a02 */
#include <stdint.h>
 
int32_t dbg_Write16BitsLowHigh (void) {
    FILE * fp;
    int32_t i;
    char * var_4h;
    /* void Write16BitsLowHigh(FILE * fp,int i); */
    eax = *((ebp + 0xc));
    edx = (int32_t) al;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = edx;
    IO_putc ();
    eax = *((ebp + 0xc));
    eax >>= 8;
    edx = (int32_t) al;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = edx;
    IO_putc ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cf6f */
#include <stdint.h>
 
int32_t dbg_SwapBytesInWords (void) {
    long unsigned int * p;
    long unsigned int val;
    short int * ptr;
    int32_t short_words;
    /* void SwapBytesInWords(short int * ptr,int short_words); */
    eax = *((ebp + 8));
    *((ebp - 8)) = eax;
    while (*((ebp + 0xc)) > 1) {
        eax = *((ebp - 8));
        eax = *(eax);
        *((ebp - 4)) = eax;
        eax = *((ebp - 4));
        eax <<= 8;
        edx = eax;
        edx &= 0xff00ff00;
        eax = *((ebp - 4));
        eax >>= 8;
        eax &= 0xff00ff;
        edx |= eax;
        eax = *((ebp - 8));
        *(eax) = edx;
        *((ebp + 0xc)) -= 2;
        *((ebp - 8)) += 4;
    }
    eax = *((ebp - 8));
    *((ebp + 8)) = eax;
    while (*((ebp + 0xc)) > 0) {
        eax = *((ebp + 8));
        eax = *(eax);
        eax = (int32_t) ax;
        *((ebp - 4)) = eax;
        eax = *((ebp - 4));
        edx = *((ebp - 4));
        edx <<= 8;
        eax = *((ebp - 4));
        eax >>= 8;
        ax &= 0xff;
        eax |= edx;
        edx = eax;
        eax = *((ebp + 8));
        *(eax) = dx;
        *((ebp + 0xc))--;
        *((ebp + 8)) += 2;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804fa50 */
#include <stdint.h>
 
int32_t dbg_display_bitrates (void) {
    FILE * const fp;
    char * stream;
    int32_t var_8h;
    int32_t var_ch;
    /* int display_bitrates(FILE * const fp); */
    *((esp + 0xc)) = 1;
    *((esp + 8)) = 1;
    *((esp + 4)) = 0x8057d43;
    eax = *((ebp + 8));
    *(esp) = eax;
    display_bitrate ();
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 2;
    *((esp + 4)) = 0x8057d45;
    eax = *((ebp + 8));
    *(esp) = eax;
    display_bitrate ();
    *((esp + 0xc)) = 0;
    *((esp + 8)) = 4;
    *((esp + 4)) = 0x8057d47;
    eax = *((ebp + 8));
    *(esp) = eax;
    display_bitrate ();
    eax = *((ebp + 8));
    fputc (0xa, eax);
    eax = *((ebp + 8));
    fflush (eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a73c */
#include <stdint.h>
 
void fputc (void) {
    fputc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x80547d0 */
#include <stdint.h>
 
int32_t fstat64 (int32_t arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    eax = *((ebp + 0xc));
    eax = _i686_get_pc_thunk_bx (ebx);
    ebx += 0x6815;
    *(esp) = 3;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    fxstat64 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x805478a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a83c */
#include <stdint.h>
 
void fxstat64 (void) {
    fxstat64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x80537be */
#include <stdint.h>
 
int32_t dbg_encoder_progress (void) {
    double const dif;
    double const act;
    int const frames;
    lame_global_flags const * gf;
    /* void encoder_progress(lame_global_flags const * gf); */
    eax = silent;
    if (eax <= 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_frameNum ();
        *((ebp - 0xc)) = eax;
        *(fp_stack--) = *(obj.update_interval);
        *(fp_stack--) = 0.0;
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
        if (al != 0) {
            ecx = *((ebp - 0xc));
            edx = 0x51eb851f;
            eax = ecx;
            edx:eax = eax * edx;
            edx >>= 5;
            eax = ecx;
            eax >>= 0x1f;
            ebx = edx;
            ebx -= eax;
            eax = ebx;
            eax *= 0x64;
            edx = ecx;
            edx -= eax;
            eax = edx;
            if (eax != 0) {
            } else {
                if (*((ebp - 0xc)) != 0) {
                    if (*((ebp - 0xc)) == 9) {
                        goto label_0;
                    }
                    GetRealTime ();
                    *((ebp - 0x18)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *(0x805b408);
                    *(fp_stack--) = *((ebp - 0x18));
                    fp_stack[1] -= fp_stack[0];
                    fp_stack++;
                    *((ebp - 0x20)) = fp_stack[0];
                    fp_stack--;
                    *(fp_stack--) = *((ebp - 0x20));
                    *(fp_stack--) = 0.0;
                    fp_tmp_0 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_0;
                    fp_stack--;
                    fp_stack++;
                    al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
                    if (al == 0) {
                        goto label_0;
                    }
                    *(fp_stack--) = *(obj.update_interval);
                    *(fp_stack--) = *((ebp - 0x20));
                    fp_tmp_1 = fp_stack[1];
                    fp_stack[1] = fp_stack[0];
                    fp_stack[0] = fp_tmp_1;
                    fp_stack--;
                    fp_stack++;
                    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
                    if (al != 0) {
                        goto label_1;
                    }
                }
label_0:
                GetRealTime ();
                *(0x805b408) = fp_stack[0];
                fp_stack--;
            }
            eax = brhist;
            if (eax != 0) {
                brhist_jump_back ();
            }
            eax = *((ebp + 8));
            *(esp) = eax;
            timestatus ();
            eax = brhist;
            if (eax != 0) {
                eax = *((ebp + 8));
                *(esp) = eax;
                brhist_disp ();
            }
            console_flush ();
            goto label_2;
label_1:
        }
    }
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052c9e */
#include <stdint.h>
 
int32_t dbg_WriteBytes (void) {
    FILE * fp;
    char * p;
    int32_t n;
    int32_t var_4h;
    /* void WriteBytes(FILE * fp,char * p,int n); */
    while (al != 0) {
        eax = *((ebp + 0xc));
        eax = *(eax);
        eax = (int32_t) al;
        *((ebp + 0xc))++;
        edx = *((ebp + 8));
        *((esp + 4)) = edx;
        *(esp) = eax;
        IO_putc ();
        al = (*((ebp + 0x10)) > 0) ? 1 : 0;
        *((ebp + 0x10))--;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052cd3 */
#include <stdint.h>
 
int32_t dbg_WriteBytesSwapped (void) {
    FILE * fp;
    char * p;
    int32_t n;
    int32_t var_4h;
    /* void WriteBytesSwapped(FILE * fp,char * p,int n); */
    eax = *((ebp + 0x10));
    eax--;
    *((ebp + 0xc)) += eax;
    while (al != 0) {
        eax = *((ebp + 0xc));
        eax = *(eax);
        eax = (int32_t) al;
        *((ebp + 0xc))--;
        edx = *((ebp + 8));
        *((esp + 4)) = edx;
        *(esp) = eax;
        IO_putc ();
        al = (*((ebp + 0x10)) > 0) ? 1 : 0;
        *((ebp + 0x10))--;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804e41a */
#include <stdint.h>
 
int32_t dbg_OpenSndFile (void) {
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2eh;
    int32_t var_2ch;
    double totalseconds;
    double flen;
    long unsigned int tmp_num_samples;
    FILE * musicin;
    lame_global_flags * gfp;
    char * inPath;
    int * enc_delay;
    int * enc_padding;
    char * s2;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* FILE * OpenSndFile(lame_global_flags * gfp,char * inPath,int * enc_delay,int * enc_padding); */
    *((esp + 4)) = 0xffffffff;
    eax = *((ebp + 8));
    *(esp) = eax;
    lame_set_num_samples ();
    eax = *((ebp + 0xc));
    eax = strcmp (eax, 0x8055007);
    if (eax == 0) {
        eax = stdin;
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        lame_set_stream_binary_mode ();
    } else {
        edx = 0x8055332;
        eax = *((ebp + 0xc));
        *((esp + 4)) = edx;
        *(esp) = eax;
        eax = fopen64 ();
        *((ebp - 0xc)) = eax;
        if (*((ebp - 0xc)) != 0) {
            goto label_0;
        }
        eax = silent;
        if (eax <= 9) {
            eax = *((ebp + 0xc));
            *((esp + 4)) = eax;
            error_printf ("Could not find \"%s\".\n");
        }
        exit (1);
    }
label_0:
    eax = input_format;
    *(esp) = eax;
    eax = is_mpeg_file_format ();
    if (eax != 0) {
        eax = *((ebp + 0x14));
        eax = *((ebp + 0x10));
        eax = *((ebp - 0xc));
        eax = lame_decode_initfile (eax, 0x805c560, eax);
        if (eax == -1) {
            eax = silent;
            if (eax <= 9) {
                eax = *((ebp + 0xc));
                *((esp + 4)) = eax;
                error_printf ("Error reading headers in mp3 input file %s.\n");
            }
            exit (1);
        }
        eax = .comment;
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_set_num_channels ();
        if (eax == -1) {
            eax = silent;
            if (eax <= 9) {
                eax = .comment;
                *((esp + 4)) = eax;
                error_printf ("Unsupported number of channels: %ud\n");
            }
            exit (1);
        }
        eax = .comment;
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_in_samplerate ();
        eax = .comment;
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_num_samples ();
    } else {
        eax = input_format;
        if (eax == 8) {
            eax = silent;
            if (eax <= 9) {
                error_printf ("sorry, vorbis support in LAME is deprecated.\n");
            }
            exit (1);
        }
        eax = input_format;
        if (eax == 1) {
            eax = silent;
            if (eax <= 9) {
                console_printf ("Assuming raw pcm input file");
                eax = swapbytes;
                if (eax != 0) {
                    console_printf (" : Forcing byte-swapping\n");
                } else {
                    console_printf (0x8055408);
                }
            }
            eax = swapbytes;
            *(0x805b3d4) = eax;
        } else {
            eax = *((ebp - 0xc));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = parse_file_header ();
            *(obj.input_format) = eax;
        }
    }
    eax = input_format;
    if (eax == 0) {
        exit (1);
    }
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_num_samples ();
    if (eax == -1) {
        eax = stdin;
        if (*((ebp - 0xc)) == eax) {
            goto label_1;
        }
        eax = *((ebp + 0xc));
        *(esp) = eax;
        eax = lame_get_file_size ();
        *((ebp - 0x38)) = eax;
        *((ebp - 0x34)) = edx;
        *(fp_stack--) = *((ebp - 0x38));
        *((ebp - 0x18)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x18));
        *(fp_stack--) = 0.0;
        fp_tmp_0 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_0;
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
        if (al == 0) {
            goto label_1;
        }
        eax = input_format;
        *(esp) = eax;
        eax = is_mpeg_file_format ();
        if (eax != 0) {
            eax = .comment;
            if (eax <= 0) {
                goto label_1;
            }
            *(fp_stack--) = *((ebp - 0x18));
            *(fp_stack--) = *(0x80554c0);
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            eax = .comment;
            *((ebp - 0x2c)) = eax;
            *(fp_stack--) = *((ebp - 0x2c));
            *(fp_stack--) = *(0x80554c8);
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            fp_stack[0] /= fp_stack[1];
            fp_stack++;
            *((ebp - 0x20)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_in_samplerate ();
            *((ebp - 0x2c)) = eax;
            *(fp_stack--) = *((ebp - 0x2c));
            fp_stack[0] *= *((ebp - 0x20));
            eax = *((ebp - 0x2e));
            ah = 0xc;
            *((ebp - 0x30)) = ax;
            *((ebp - 0x38)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x38));
            edx = *((ebp - 0x34));
            *((ebp - 0x10)) = eax;
            eax = *((ebp - 0x10));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_num_samples ();
            eax = *((ebp - 0x10));
            *(0x805c57c) = eax;
        } else {
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_num_channels ();
            eax += eax;
            *((ebp - 0x2c)) = eax;
            *(fp_stack--) = *((ebp - 0x2c));
            *(fp_stack--) = *((ebp - 0x18));
            fp_stack[1] /= fp_stack[0];
            fp_stack++;
            eax = *((ebp - 0x2e));
            ah = 0xc;
            *((ebp - 0x30)) = ax;
            *((ebp - 0x38)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x38));
            edx = *((ebp - 0x34));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_num_samples ();
        }
    }
label_1:
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052b54 */
#include <stdint.h>
 
int32_t dbg_Write32Bits (void) {
    FILE * fp;
    int32_t i;
    int32_t var_4h;
    /* void Write32Bits(FILE * fp,int i); */
    eax = *((ebp + 0xc));
    eax &= 0xffff;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write16BitsLowHigh ();
    eax = *((ebp + 0xc));
    eax >>= 0x10;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write16BitsLowHigh ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cab3 */
#include <stdint.h>
 
void dbg_frontend_close_console (void) {
    /* void frontend_close_console(); */
    *(esp) = obj.Console_IO;
    deinit_console ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f0af */
#include <stdint.h>
 
uint32_t dbg_GetRealTime (void) {
    int32_t var_1ch;
    timeval t;
    int32_t var_ch;
    int32_t var_4h;
    /* double GetRealTime(); */
    *((esp + 4)) = 0;
    eax = ebp - 0x10;
    *(esp) = eax;
    gettimeofday ();
    eax = *((ebp - 0x10));
    *((ebp - 0x1c)) = eax;
    *(fp_stack--) = *((ebp - 0x1c));
    eax = *((ebp - 0xc));
    *((ebp - 0x1c)) = eax;
    *(fp_stack--) = *((ebp - 0x1c));
    *(fp_stack--) = *(0x80554d8);
    fp_stack[0] *= fp_stack[1];
    fp_stack++;
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a36c */
#include <stdint.h>
 
void gettimeofday (void) {
    gettimeofday ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052c31 */
#include <stdint.h>
 
int32_t dbg_ReadBytesSwapped (char * q) {
    FILE * fp;
    char * p;
    int32_t n;
    ebx = q;
    /* void ReadBytesSwapped(FILE * fp,char * p,int n); */
    ebx = *((ebp + 0xc));
    while (al != 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        al = IO_getc ();
        *(ebx) = al;
        ebx++;
        eax = *((ebp + 8));
        eax = feof (eax);
        dl = (eax == 0) ? 1 : 0;
        al = (*((ebp + 0x10)) > 0) ? 1 : 0;
        eax &= edx;
        *((ebp + 0x10))--;
    }
    ebx--;
    while (*((ebp + 0xc)) < ebx) {
        eax = *((ebp + 0xc));
        eax = *(eax);
        eax = (int32_t) al;
        *((ebp + 0x10)) = eax;
        edx = *(ebx);
        eax = *((ebp + 0xc));
        *(eax) = dl;
        eax = *((ebp + 0x10));
        *(ebx) = al;
        *((ebp + 0xc))++;
        ebx--;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8053a43 */
#include <stdint.h>
 
int32_t dbg_brhist_init (void) {
    lame_global_flags const * gf;
    int const bitrate_kbps_min;
    int const bitrate_kbps_max;
    int32_t c;
    size_t n;
    /* int brhist_init(lame_global_flags const * gf,int const bitrate_kbps_min,int const bitrate_kbps_max); */
    *(0x805b4c0) = 0;
    *((esp + 4)) = 0x805b488;
    eax = *((ebp + 8));
    *(esp) = eax;
    lame_bitrate_kbps ();
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0xe;
    *(esp) = 0x805b488;
    eax = calculate_index ();
    *(obj.brhist) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0xe;
    *(esp) = 0x805b488;
    eax = calculate_index ();
    *(0x805b484) = eax;
    eax = brhist;
    if (eax <= 0xd) {
        eax = .comment;
        if (eax <= 0xd) {
            goto label_0;
        }
    }
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    error_printf (0x8059b10);
    eax = 0xffffffff;
    goto label_1;
label_0:
    memset (0x805b4c4, 0x2a, 0x200);
    memset (0x805b6c5, 0x25, 0x200);
    memset (0x805bac7, 0x2d, 0x200);
    memset (0x805b8c6, 0x2d, 0x200);
    eax = 0;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cbe7 */
#include <stdint.h>
 
int32_t dbg_report_flush (void) {
    /* void report_flush(); */
    eax = .comment;
    fflush (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804d013 */
#include <stdint.h>
 
int32_t dbg_get_audio16 (void) {
    lame_global_flags * const gfp;
    short int[1152] * buffer;
    int32_t var_4h;
    char * var_8h;
    /* int get_audio16(lame_global_flags * const gfp,short int[1152] * buffer); */
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0;
    eax = *((ebp + 8));
    get_audio_common (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cac7 */
#include <stdint.h>
 
int32_t dbg_frontend_debugf (void) {
    char const * format;
    va_list ap;
    int32_t var_4h;
    int32_t var_8h;
    /* void frontend_debugf(char const * format,va_list ap); */
    eax = .comment;
    edx = *((ebp + 0xc));
    *((esp + 8)) = edx;
    edx = *((ebp + 8));
    my_report_printing (eax, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ee68 */
#include <stdint.h>
 
int32_t dbg_lame_decode_fromfile (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h, int32_t arg_14h) {
    mp3data_struct * mp3data;
    short int * pcm_r;
    short int * pcm_l;
    FILE * fd;
    size_t len;
    int32_t ret;
    unsigned char[1024] buf;
    int32_t canary;
    size_t size;
    size_t nmemb;
    FILE * stream;
    int32_t var_10h;
    int32_t var_14h;
    /* int lame_decode_fromfile(FILE * fd,short int * pcm_l,short int * pcm_r,mp3data_struct * mp3data); */
    eax = *((ebp + 8));
    *((ebp - 0x41c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x420)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x424)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x428)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((ebp - 0x410)) = 0;
    *((ebp - 0x414)) = 0;
    eax = .comment;
    edx = *((ebp - 0x428));
    *((esp + 0x14)) = edx;
    edx = *((ebp - 0x424));
    *((esp + 0x10)) = edx;
    edx = *((ebp - 0x420));
    *((esp + 0xc)) = edx;
    edx = *((ebp - 0x414));
    *((esp + 8)) = edx;
    edx = ebp - 0x40c;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = hip_decode1_headers ();
    *((ebp - 0x410)) = eax;
    if (*((ebp - 0x410)) == 0) {
        goto label_0;
    }
    eax = *((ebp - 0x410));
    goto label_1;
    do {
label_0:
        eax = *((ebp - 0x41c));
        eax = ebp - 0x40c;
        eax = fread (eax, 1, 0x400);
        *((ebp - 0x414)) = eax;
        if (*((ebp - 0x414)) == 0) {
            eax = .comment;
            edx = *((ebp - 0x428));
            *((esp + 0x14)) = edx;
            edx = *((ebp - 0x424));
            *((esp + 0x10)) = edx;
            edx = *((ebp - 0x420));
            *((esp + 0xc)) = edx;
            edx = *((ebp - 0x414));
            *((esp + 8)) = edx;
            edx = ebp - 0x40c;
            *((esp + 4)) = edx;
            *(esp) = eax;
            eax = hip_decode1_headers ();
            *((ebp - 0x410)) = eax;
            if (*((ebp - 0x410)) > 0) {
                goto label_2;
            }
            eax = .comment;
            *(esp) = eax;
            hip_decode_exit ();
            *(0x805b3e4) = 0;
            eax = 0xffffffff;
            goto label_1;
        }
        eax = .comment;
        edx = *((ebp - 0x428));
        *((esp + 0x14)) = edx;
        edx = *((ebp - 0x424));
        *((esp + 0x10)) = edx;
        edx = *((ebp - 0x420));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x414));
        *((esp + 8)) = edx;
        edx = ebp - 0x40c;
        *((esp + 4)) = edx;
        *(esp) = eax;
        eax = hip_decode1_headers ();
        *((ebp - 0x410)) = eax;
        if (*((ebp - 0x410)) == -1) {
            eax = .comment;
            *(esp) = eax;
            hip_decode_exit ();
            *(0x805b3e4) = 0;
            eax = 0xffffffff;
            goto label_1;
        }
    } while (*((ebp - 0x410)) <= 0);
    goto label_3;
label_2:
label_3:
    eax = *((ebp - 0x410));
label_1:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (*((ebp - 0x410)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f0e6 */
#include <stdint.h>
 
int32_t dbg_lame_set_stream_binary_mode (void) {
    FILE * const fp;
    /* int lame_set_stream_binary_mode(FILE * const fp); */
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8054790 */
#include <stdint.h>
 
int32_t stat64 (char * arg_8h, int32_t arg_ch) {
    int32_t var_4h;
    int32_t var_8h;
    eax = *((ebp + 0xc));
    eax = _i686_get_pc_thunk_bx (ebx);
    ebx += 0x6855;
    *(esp) = 3;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    xstat64 ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a1ac */
#include <stdint.h>
 
void xstat64 (void) {
    xstat64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x80539f8 */
#include <stdint.h>
 
void dbg_decoder_progress_finish (void) {
    /* void decoder_progress_finish(); */
    console_printf (0x805996b);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x80529e5 */
#include <stdint.h>
 
int32_t dbg_Write8Bits (void) {
    FILE * fp;
    int32_t i;
    int32_t var_4h;
    /* void Write8Bits(FILE * fp,int i); */
    eax = *((ebp + 0xc));
    edx = (int32_t) al;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = edx;
    IO_putc ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cbd2 */
#include <stdint.h>
 
int32_t dbg_error_flush (void) {
    /* void error_flush(); */
    eax = .comment;
    fflush (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052e8b */
#include <stdint.h>
 
int32_t dbg_ReadIeeeExtendedHighLow (char * arg_8h) {
    FILE * fp;
    char[10] bytes;
    int32_t canary;
    int32_t var_4h;
    int32_t var_8h;
    /* double ReadIeeeExtendedHighLow(FILE * fp); */
    eax = *((ebp + 8));
    *((ebp - 0x1c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((esp + 8)) = 0xa;
    eax = ebp - 0x16;
    *((esp + 4)) = eax;
    eax = *((ebp - 0x1c));
    *(esp) = eax;
    ReadBytes ();
    eax = ebp - 0x16;
    *(esp) = eax;
    ConvertFromIeeeExtended ();
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (? != ?) {
        fp_stack++;
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a70c */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f04d */
#include <stdint.h>
 
int32_t dbg_is_mpeg_file_format (void) {
    int32_t input_file_format;
    /* int is_mpeg_file_format(int input_file_format); */
    eax = *((ebp + 8));
    if (eax != 5) {
        if (eax <= 5) {
            if (eax != 4) {
            } else {
                if (eax != 6) {
                    if (eax == 7) {
                        goto label_0;
                    }
                    eax = 1;
                } else {
                } else {
                    eax = 2;
                    goto label_1;
                }
            }
            eax = 3;
            goto label_1;
label_0:
            eax = 0xffffffff;
            goto label_1;
        }
        eax = 0;
    }
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8054730 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x68b9;
    _init ();
    edi = ebx - 0xf8;
    eax = ebx - 0xf8;
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
        uint32_t (*ebx + esi*4 - 0xf8)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        esi++;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ce8d */
#include <stdint.h>
 
int32_t dbg_init_outfile (void) {
    FILE * outf;
    char * outPath;
    int32_t decode;
    char * s2;
    /* FILE * init_outfile(char * outPath,int decode); */
    eax = *((ebp + 8));
    eax = strcmp (eax, 0x8055007);
    if (eax == 0) {
        eax = stdout;
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0xc));
        *(esp) = eax;
        lame_set_stream_binary_mode ();
    } else {
        edx = 0x8055009;
        eax = *((ebp + 8));
        *((esp + 4)) = edx;
        *(esp) = eax;
        eax = fopen64 ();
        *((ebp - 0xc)) = eax;
        if (*((ebp - 0xc)) != 0) {
            goto label_0;
        }
        eax = 0;
        goto label_1;
    }
label_0:
    eax = *((ebp - 0xc));
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cf50 */
#include <stdint.h>
 
int32_t dbg_close_infile (void) {
    int32_t var_4h;
    /* void close_infile(); */
    edx = .comment;
    eax = input_format;
    *((esp + 4)) = edx;
    *(esp) = eax;
    CloseSndFile ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804e3e1 */
#include <stdint.h>
 
int32_t dbg_CloseSndFile (void) {
    sound_file_format input;
    FILE * musicin;
    /* void CloseSndFile(sound_file_format input,FILE * musicin); */
    eax = *((ebp + 0xc));
    eax = fclose (eax);
    if (eax != 0) {
        eax = silent;
        if (eax <= 9) {
            error_printf ("Could not close audio input file\n");
        }
        exit (2);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cb5f */
#include <stdint.h>
 
uint32_t dbg_error_printf (char * arg_ch) {
    int32_t ret;
    va_list args;
    char const * format;
    int32_t var_4h;
    int32_t var_8h;
    /* int error_printf(char const * format,va_args ...); */
    eax = ebp + 0xc;
    *((ebp - 0xc)) = eax;
    edx = *((ebp - 0xc));
    eax = .comment;
    *((esp + 8)) = edx;
    edx = *((ebp + 8));
    eax = my_console_printing (eax, edx);
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aa7c */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f4ea */
#include <stdint.h>
 
int32_t dbg_short_help (void) {
    lame_global_flags const * gfp;
    FILE * const fp;
    char const * ProgramName;
    char * format;
    size_t nitems;
    FILE * var_ch;
    /* int short_help(lame_global_flags const * gfp,FILE * const fp,char const * ProgramName); */
    eax = *((ebp + 0xc));
    *(esp) = eax;
    lame_version_print ();
    eax = "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n";
    edx = *((ebp + 0x10));
    *((esp + 8)) = edx;
    eax = *((ebp + 0xc));
    fprintf (eax, eax);
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_VBR_q ();
    edx = "OPTIONS:\n    -b bitrate      set the bitrate, default 128 kbps\n    -h              higher quality, but a little slower.  Recommended.\n    -f              fast mode (lower quality)\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n";
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    fprintf (eax, edx);
    eax = "    --preset type   type must be \"medium\", \"standard\", \"extreme\", \"insane\",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    \"--preset help\" gives more info on these\n\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x141);
    eax = "    --longhelp      full list of options\n\n    --license       print License information\n\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x59);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a65c */
#include <stdint.h>
 
void fprintf (void) {
    fprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aa9c */
#include <stdint.h>
 
void lame_get_VBR_q (void) {
    lame_get_VBR_q ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ca9f */
#include <stdint.h>
 
void dbg_frontend_open_console (void) {
    /* int frontend_open_console(); */
    *(esp) = obj.Console_IO;
    init_console ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804ad3a */
#include <stdint.h>
 
int32_t dbg_lame_decoder (void) {
    int32_t var_124ch;
    int32_t var_1238h;
    int32_t var_1234h;
    int32_t var_1230h;
    int32_t var_122ch;
    int32_t var_122ah;
    short int[2][1152] Buffer;
    double wavsize;
    int32_t tmp_num_channels;
    void (*)() WriteFunction;
    int32_t i;
    int32_t skip_end;
    int32_t iread;
    lame_global_flags * gfp;
    FILE * outf;
    int32_t skip_start;
    char * inPath;
    char * outPath;
    int * enc_delay;
    int * enc_padding;
    char * offset;
    int32_t whence;
    uint32_t var_sp_ch;
    int32_t var_sp_10h;
    uint32_t var_sp_14h;
    int32_t var_sp_18h;
    /* int lame_decoder(lame_global_flags * gfp,FILE * outf,int skip_start,char * inPath,char * outPath,int * enc_delay,int * enc_padding); */
    *((ebp - 0x10)) = 0;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_num_channels ();
    *((ebp - 0x1c)) = eax;
    eax = silent;
    if (eax <= 9) {
        if (*((ebp - 0x1c)) != 1) {
            esi = 0x80548b2;
        } else {
            esi = 0x80548b4;
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_in_samplerate ();
        *((ebp - 0x1230)) = eax;
        *(fp_stack--) = *((ebp - 0x1230));
        *(fp_stack--) = *(0x8054f08);
        fp_stack[0] /= fp_stack[1];
        fp_stack++;
        *((ebp - 0x1240)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 0x14));
        eax = strlen (eax);
        if (eax > 0x1a) {
            ebx = 0x80548b5;
        } else {
            ebx = 0x80548b8;
        }
        eax = *((ebp + 0x14));
        eax = strcmp (eax, 0x8054866);
        if (eax != 0) {
            eax = *((ebp + 0x14));
        } else {
            eax = "<stdin>";
        }
        *((esp + 0x18)) = esi;
        edx = *((ebp - 0x1c));
        *((esp + 0x14)) = edx;
        *(fp_stack--) = *((ebp - 0x1240));
        *((esp + 0xc)) = fp_stack[0];
        fp_stack--;
        *((esp + 8)) = ebx;
        *((esp + 4)) = eax;
        console_printf ("\rinput:  %s%s(%g kHz, %i channel%s, ");
    }
    eax = input_format;
    if (eax <= 7) {
        eax = *((eax*4 + 0x8054a58));
        /* switch table (8 cases) at 0x8054a58 */
        void (*eax)() ();
        error_printf ("Internal error.  Aborting.");
        exit (0xffffffff);
        if (*((ebp + 0x10)) == 0) {
            eax = *((ebp + 0x1c));
            eax = *(eax);
            if (eax < 0) {
                eax = *((ebp + 0x20));
                eax = *(eax);
                if (eax < 0) {
                    goto label_1;
                }
            }
            eax = *((ebp + 0x1c));
            eax = *(eax);
            if (eax >= 0) {
                eax = *((ebp + 0x1c));
                eax = *(eax);
                eax += 0x211;
                *((ebp + 0x10)) = eax;
            }
            eax = *((ebp + 0x20));
            eax = *(eax);
            if (eax >= 0) {
                eax = *((ebp + 0x20));
                eax = *(eax);
                eax -= 0x211;
                *((ebp - 0x10)) = eax;
                goto label_2;
label_1:
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = lame_get_encoder_delay ();
                eax += 0x211;
                *((ebp + 0x10)) = eax;
            } else {
                *((ebp + 0x10)) += 0x211;
            } else {
            }
        }
label_2:
        eax = silent;
        if (eax <= 9) {
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_out_samplerate ();
            if (eax <= 0x3e7f) {
                ebx = 0x8054904;
            } else {
                ebx = 0x80548b4;
            }
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_version ();
            edx = 2;
            ecx = 2;
            ecx -= eax;
            eax = ecx;
            *((esp + 0xc)) = 0x8054907;
            *((esp + 8)) = ebx;
            *((esp + 4)) = eax;
            console_printf ("MPEG-%u%s Layer %s");
            goto label_3;
            *((ebp + 0x10)) += 0xf1;
            eax = silent;
            if (eax <= 9) {
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = lame_get_out_samplerate ();
                if (eax <= 0x3e7f) {
                    ebx = 0x8054904;
                } else {
                    ebx = 0x80548b4;
                }
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = lame_get_version ();
                edx = 2;
                ecx = 2;
                ecx -= eax;
                eax = ecx;
                *((esp + 0xc)) = 0x805491e;
                *((esp + 8)) = ebx;
                *((esp + 4)) = eax;
                console_printf ("MPEG-%u%s Layer %s");
                goto label_3;
                *((ebp + 0x10)) += 0xf1;
                eax = silent;
                if (eax <= 9) {
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    eax = lame_get_out_samplerate ();
                    if (eax <= 0x3e7f) {
                        ebx = 0x8054904;
                    } else {
                        ebx = 0x80548b4;
                    }
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    eax = lame_get_version ();
                    edx = 2;
                    ecx = 2;
                    ecx -= eax;
                    eax = ecx;
                    *((esp + 0xc)) = 0x8054921;
                    *((esp + 8)) = ebx;
                    *((esp + 4)) = eax;
                    console_printf ("MPEG-%u%s Layer %s");
                    goto label_3;
                    eax = silent;
                    if (eax <= 9) {
                        console_printf ("raw PCM data");
                    }
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    eax = lame_get_num_samples ();
                    *(0x805c57c) = eax;
                    *(0x805c578) = 0x480;
                    *((ebp + 0x10)) = 0;
                    goto label_3;
                    eax = silent;
                    if (eax <= 9) {
                        console_printf ("Microsoft WAVE");
                    }
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    eax = lame_get_num_samples ();
                    *(0x805c57c) = eax;
                    *(0x805c578) = 0x480;
                    *((ebp + 0x10)) = 0;
                    goto label_3;
                    eax = silent;
                    if (eax <= 9) {
                        console_printf ("SGI/Apple AIFF");
                    }
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    eax = lame_get_num_samples ();
                    *(0x805c57c) = eax;
                    *(0x805c578) = 0x480;
                    *((ebp + 0x10)) = 0;
                    eax = silent;
                } else {
                } else {
                } else {
                } else {
                    if (eax <= 9) {
                        console_printf ("unknown");
                    }
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    eax = lame_get_num_samples ();
                    *(0x805c57c) = eax;
                    *(0x805c578) = 0x480;
                    *((ebp + 0x10)) = 0;
                }
            }
        }
    }
label_3:
    eax = silent;
    if (eax <= 9) {
        eax = *((ebp + 0x18));
        eax = strlen (eax);
        if (eax > 0x2d) {
            ebx = 0x80548b5;
        } else {
            ebx = 0x80548b8;
        }
        eax = *((ebp + 0x18));
        eax = strcmp (eax, 0x8054866);
        if (eax != 0) {
            eax = *((ebp + 0x18));
        } else {
            eax = "<stdout>";
        }
        *((esp + 8)) = ebx;
        *((esp + 4)) = eax;
        console_printf (")\noutput: %s%s(16 bit, Microsoft WAVE)\n");
        if (*((ebp + 0x10)) > 0) {
            eax = *((ebp + 0x10));
            *((esp + 4)) = eax;
            console_printf ("skipping initial %i samples (encoder+decoder delay)\n");
        }
        if (*((ebp - 0x10)) <= 0) {
            goto label_4;
        }
        eax = *((ebp - 0x10));
        *((esp + 4)) = eax;
        console_printf ("skipping final %i samples (encoder padding-decoder delay)\n");
    }
label_4:
    eax = disable_wav_header;
    if (eax == 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_in_samplerate ();
        *((esp + 0x10)) = 0x10;
        edx = *((ebp - 0x1c));
        *((esp + 0xc)) = edx;
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x7fffffff;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        WriteWaveHeader ();
    }
    eax = *((ebp - 0x10));
    edx = *((ebp + 0x10));
    eax = edx + eax;
    eax = -eax;
    *((ebp - 0x1230)) = eax;
    *(fp_stack--) = *((ebp - 0x1230));
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    eax = swapbytes;
    if (eax != 0) {
        eax = WriteBytesSwapped;
    } else {
        eax = WriteBytes;
    }
    *((ebp - 0x18)) = eax;
    eax = .comment;
    edx = .comment;
    *((ebp - 0x124c)) = edx;
    edx = 0;
    eax = *(edx:eax) / ebp - 0x124c;
    edx = *(edx:eax) % ebp - 0x124c;
    *(0x805c580) = eax;
label_0:
    eax = ebp - 0x1228;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = get_audio16 ();
    *((ebp - 0xc)) = eax;
    if (*((ebp - 0xc)) < 0) {
        goto label_5;
    }
    ecx = .comment;
    eax = .comment;
    *((ebp - 0x124c)) = eax;
    eax = *((ebp - 0xc));
    edx = *((ebp - 0xc));
    edx >>= 0x1f;
    eax = *(edx:eax) / ebp - 0x124c;
    edx = *(edx:eax) % ebp - 0x124c;
    eax = ecx + eax;
    *(0x805c584) = eax;
    *(fp_stack--) = *((ebp - 0xc));
    *(fp_stack--) = *((ebp - 0x28));
    fp_stack[0] += fp_stack[1];
    fp_stack++;
    *((ebp - 0x28)) = fp_stack[0];
    fp_stack--;
    eax = silent;
    if (eax <= 0) {
        *(esp) = obj.mp3input_data;
        decoder_progress ();
        console_flush ();
    }
    eax = *((ebp + 0x10));
    if (*((ebp - 0xc)) <= eax) {
        eax = *((ebp - 0xc));
    }
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x14));
    *((ebp + 0x10)) -= eax;
    if (*((ebp - 0x10)) > 0x480) {
        eax = .comment;
        edx = eax + 2;
        eax = .comment;
        if (edx <= eax) {
            goto label_6;
        }
        eax = 0x480;
        eax -= *((ebp - 0x10));
        *((ebp - 0xc)) += eax;
        *((ebp - 0x10)) = 0x480;
        goto label_7;
    }
label_6:
    edx = .comment;
    eax = .comment;
    if (edx != eax) {
        goto label_7;
    }
    if (*((ebp - 0xc)) == 0) {
        goto label_7;
    }
    eax = *((ebp - 0x10));
    *((ebp - 0xc)) -= eax;
    while (eax < *((ebp - 0xc))) {
        eax = disable_wav_header;
        if (eax != 0) {
            eax = ebp - 0x1228;
            edx = *((ebp - 0x14));
            edx += edx;
            eax += edx;
            eax = *((ebp + 0xc));
            eax = *((ebp - 0x18));
            void (*eax)(uint32_t, uint32_t, uint32_t) (eax, eax, 2);
            if (*((ebp - 0x1c)) != 2) {
                goto label_8;
            }
            eax = ebp - 0x1228;
            edx = *((ebp - 0x14));
            edx += 0x480;
            edx += edx;
            eax += edx;
            eax = *((ebp + 0xc));
            eax = *((ebp - 0x18));
            void (*eax)(uint32_t, uint32_t, uint32_t) (eax, eax, 2);
        } else {
            eax = *((ebp - 0x14));
            eax = *((ebp + eax*2 - 0x1228));
            eax = (int32_t) ax;
            *((esp + 4)) = eax;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            Write16BitsLowHigh ();
            if (*((ebp - 0x1c)) != 2) {
                goto label_8;
            }
            eax = *((ebp - 0x14));
            eax += 0x480;
            eax = *((ebp + eax*2 - 0x1228));
            eax = (int32_t) ax;
            *((esp + 4)) = eax;
            eax = *((ebp + 0xc));
            *(esp) = eax;
            Write16BitsLowHigh ();
        }
label_8:
        *((ebp - 0x14))++;
label_7:
        eax = *((ebp - 0x14));
    }
    eax = flush_write;
    if (eax == 1) {
        eax = *((ebp + 0xc));
        fflush (eax);
    }
label_5:
    if (*((ebp - 0xc)) > 0) {
        goto label_0;
    }
    eax = *((ebp - 0x1c));
    eax += eax;
    *((ebp - 0x14)) = eax;
    *(fp_stack--) = *((ebp - 0x28));
    *(fp_stack--) = 0.0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
    if (al != 0) {
        eax = silent;
        if (eax <= 9) {
            error_printf ("WAVE file contains 0 PCM samples\n");
        }
        *(fp_stack--) = 0.0;
        *((ebp - 0x28)) = fp_stack[0];
        fp_stack--;
    } else {
        ecx = *((ebp - 0x14));
        *((ebp - 0x124c)) = ecx;
        eax = 0xffffffd0;
        edx = 0;
        eax = *(edx:eax) / ebp - 0x124c;
        edx = *(edx:eax) % ebp - 0x124c;
        edx = 0;
        *((ebp - 0x1238)) = eax;
        *((ebp - 0x1234)) = edx;
        *(fp_stack--) = *((ebp - 0x1238));
        *(fp_stack--) = *((ebp - 0x28));
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al != 0) {
            eax = silent;
            if (eax <= 9) {
                error_printf ("Very huge WAVE file, can't set filesize accordingly\n");
            }
            *(fp_stack--) = *(0x8054f10);
            *((ebp - 0x28)) = fp_stack[0];
            fp_stack--;
        } else {
            *(fp_stack--) = *((ebp - 0x14));
            *(fp_stack--) = *((ebp - 0x28));
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            *((ebp - 0x28)) = fp_stack[0];
            fp_stack--;
        }
    }
    eax = disable_wav_header;
    if (eax == 0) {
        eax = *((ebp + 0x18));
        eax = strcmp (0x8054866, eax);
        if (eax == 0) {
            goto label_9;
        }
        eax = *((ebp + 0xc));
        eax = fseek (eax, 0, 0);
        if (eax != 0) {
            goto label_9;
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_in_samplerate ();
        edx = eax;
        *(fp_stack--) = *((ebp - 0x28));
        eax = *((ebp - 0x122a));
        ah = 0xc;
        *((ebp - 0x122c)) = ax;
        *((ebp - 0x1230)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x1230));
        *((esp + 0x10)) = 0x10;
        ecx = *((ebp - 0x1c));
        *((esp + 0xc)) = ecx;
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        eax = *((ebp + 0xc));
        *(esp) = eax;
        WriteWaveHeader ();
    }
label_9:
    eax = *((ebp + 0xc));
    fclose (eax);
    eax = silent;
    if (eax <= 0) {
        decoder_progress_finish ();
    }
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cee8 */
#include <stdint.h>
 
int32_t dbg_init_infile (void) {
    lame_global_flags * gfp;
    char * inPath;
    int * enc_delay;
    int * enc_padding;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void init_infile(lame_global_flags * gfp,char * inPath,int * enc_delay,int * enc_padding); */
    *(obj.global) = 0;
    *(0x805b3dc) = 0;
    eax = *(obj.in_bitwidth);
    *(0x805b3d0) = eax;
    eax = swapbytes;
    *(0x805b3d4) = eax;
    eax = *(obj.in_signed);
    al = (eax != 1) ? 1 : 0;
    eax = (int32_t) al;
    *(0x805b3d8) = eax;
    eax = *((ebp + 0x14));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = OpenSndFile ();
    *(0x805b3e0) = eax;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052945 */
#include <stdint.h>
 
int32_t dbg_Read16BitsLowHigh (void) {
    int32_t result;
    int32_t second;
    int32_t first;
    FILE * fp;
    /* int Read16BitsLowHigh(FILE * fp); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = IO_getc ();
    eax &= 0xff;
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = IO_getc ();
    eax &= 0xff;
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    eax <<= 8;
    eax += *((ebp - 0xc));
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x14));
    eax &= 0x8000;
    if (eax != 0) {
        *((ebp - 0x14)) -= 0x10000;
    }
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052b88 */
#include <stdint.h>
 
int32_t dbg_Write32BitsLowHigh (void) {
    FILE * fp;
    int32_t i;
    int32_t var_4h;
    /* void Write32BitsLowHigh(FILE * fp,int i); */
    eax = *((ebp + 0xc));
    eax &= 0xffff;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write16BitsLowHigh ();
    eax = *((ebp + 0xc));
    eax >>= 0x10;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write16BitsLowHigh ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cff1 */
#include <stdint.h>
 
int32_t dbg_get_audio (void) {
    lame_global_flags * const gfp;
    int[1152] * buffer;
    int32_t var_4h;
    int32_t var_8h;
    /* int get_audio(lame_global_flags * const gfp,int[1152] * buffer); */
    *((esp + 8)) = 0;
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    get_audio_common (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cb8e */
#include <stdint.h>
 
uint32_t dbg_report_printf (int32_t arg_ch) {
    int32_t ret;
    va_list args;
    char const * format;
    int32_t var_4h;
    int32_t var_8h;
    /* int report_printf(char const * format,va_args ...); */
    eax = ebp + 0xc;
    *((ebp - 0xc)) = eax;
    edx = *((ebp - 0xc));
    eax = .comment;
    *((esp + 8)) = edx;
    edx = *((ebp + 8));
    eax = my_console_printing (eax, edx);
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x80546f4 */
#include <stdint.h>
 
int32_t dbg_brhist_jump_back (void) {
    /* void brhist_jump_back(); */
    eax = .comment;
    *(esp) = eax;
    console_up ();
    *(0x805b4c0) = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804d455 */
#include <stdint.h>
 
int32_t dbg_WriteWaveHeader (void) {
    int32_t bytes;
    FILE * const fp;
    int const pcmbytes;
    int const freq;
    int const channels;
    int const bits;
    size_t size;
    size_t nitems;
    FILE * stream;
    /* int WriteWaveHeader(FILE * const fp,int const pcmbytes,int const freq,int const channels,int const bits); */
    eax = *((ebp + 0x18));
    eax += 7;
    edx = eax + 7;
    __asm ("cmovs eax, edx");
    eax >>= 3;
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    fwrite (eax, 1, 4);
    eax = *((ebp + 0xc));
    eax += 0x24;
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write32BitsLowHigh ();
    eax = *((ebp + 8));
    fwrite (eax, 2, 4);
    *((esp + 4)) = 0x10;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write32BitsLowHigh ();
    *((esp + 4)) = 1;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write16BitsLowHigh ();
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write16BitsLowHigh ();
    eax = *((ebp + 0x10));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write32BitsLowHigh ();
    eax = *((ebp + 0x10));
    eax *= *((ebp + 0x14));
    eax *= *((ebp - 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write32BitsLowHigh ();
    eax = *((ebp + 0x14));
    eax *= *((ebp - 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write16BitsLowHigh ();
    eax = *((ebp + 0x18));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write16BitsLowHigh ();
    eax = *((ebp + 8));
    fwrite (eax, 1, 4);
    eax = *((ebp + 0xc));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    Write32BitsLowHigh ();
    eax = *((ebp + 8));
    eax = ferror (eax);
    if (eax != 0) {
        eax = 0xffffffff;
    } else {
        eax = 0;
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f5ce */
#include <stdint.h>
 
int32_t dbg_long_help (void) {
    lame_global_flags const * gfp;
    FILE * const fp;
    char const * ProgramName;
    int32_t lessmode;
    char * format;
    size_t nitems;
    char * var_ch;
    /* int long_help(lame_global_flags const * gfp,FILE * const fp,char const * ProgramName,int lessmode); */
    eax = *((ebp + 0xc));
    *(esp) = eax;
    lame_version_print ();
    eax = "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nRECOMMENDED:\n    lame -V2 input.wav output.mp3\n\n";
    edx = *((ebp + 0x10));
    *((esp + 8)) = edx;
    eax = *((ebp + 0xc));
    fprintf (eax, eax);
    eax = "OPTIONS:\n  Input options:\n    --scale <arg>   scale input (multiply PCM data) by <arg>\n    --scale-l <arg> scale channel 0 (left) input (multiply PCM data) by <arg>\n    --scale-r <arg> scale channel 1 (right) input (multiply PCM data) by <arg>\n    --mp1input      input file is a MPEG Layer I   file\n    --mp2input      input file is a MPEG Layer II  file\n    --mp3input      input file is a MPEG Layer III file\n    --nogap <file1> <file2> <...>\n                    gapless encoding for a set of contiguous files\n    --nogapout <dir>\n                    output dir for gapless encoding (must precede --nogap)\n    --nogaptags     allow the use of VBR tags in gapless encoding\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x2a3);
    eax = "\n  Input options for RAW PCM:\n    -r              input is raw pcm\n    -x              force byte-swapping of input\n    -s sfreq        sampling frequency of input file (kHz) - default 44.1 kHz\n    --bitwidth w    input bit width is w (default 16)\n    --signed        input is signed (default)\n    --unsigned      input is unsigned\n    --little-endian input is little-endian (default)\n    --big-endian    input is big-endian\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x1a9);
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    wait_for ();
    eax = "  Operational options:\n    -a              downmix from stereo to mono file for mono encoding\n    -m <mode>       (j)oint, (s)imple, (f)orce, (d)dual-mono, (m)ono\n                    default is (j) or (s) depending on bitrate\n                    joint  = joins the best possible of MS and LR stereo\n                    simple = force LR stereo on all frames\n                    force  = force MS stereo on all frames.\n    --preset type   type must be \"medium\", \"standard\", \"extreme\", \"insane\",\n                    or a value for an average desired bitrate and depending\n                    on the value specified, appropriate quality settings will\n                    be used.\n                    \"--preset help\" gives more info on these\n    --comp  <arg>   choose bitrate to achive a compression ratio of <arg>\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x32c);
    eax = "    --replaygain-fast   compute RG fast but slightly inaccurately (default)\n    --replaygain-accurate   compute RG more accurately and find the peak sample\n    --noreplaygain  disable ReplayGain analysis\n    --clipdetect    enable --replaygain-accurate and print a message whether\n                    clipping occurs and how far the waveform is from full scale\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x169);
    eax = "    --flush         flush output stream as soon as possible\n    --freeformat    produce a free format bitstream\n    --decode        input=mp3 file, output=wav\n    -t              disable writing wav header when using --decode\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0xe2);
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    wait_for ();
    eax = "  Verbosity:\n    --disptime <arg>print progress report every arg seconds\n    -S              don't print progress report, VBR histograms\n    --nohist        disable VBR histogram display\n    --silent        don't print anything on screen\n    --quiet         don't print anything on screen\n    --brief         print more useful information\n    --verbose       print a lot of useful information\n\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x18a);
    eax = "  Noise shaping & psycho acoustic algorithms:\n    -q <arg>        <arg> = 0...9.  Default  -q 5 \n                    -q 0:  Highest quality, very slow \n                    -q 9:  Poor quality, but fast \n    -h              Same as -q 2.   Recommended.\n    -f              Same as -q 7.   Fast, ok quality\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x131);
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    wait_for ();
    eax = "  CBR (constant bitrate, the default) options:\n    -b <bitrate>    set the bitrate in kbps, default 128 kbps\n    --cbr           enforce use of constant bitrate\n\n  ABR options:\n    --abr <bitrate> specify average bitrate desired (instead of quality)\n\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0xfb);
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = lame_get_VBR_q ();
    edx = "  VBR options:\n    -V n            quality setting for VBR.  default n=%i\n                    0=high quality,bigger files. 9=smaller files\n    -v              the same as -V 4\n    --vbr-old       use old variable bitrate (VBR) routine\n    --vbr-new       use new variable bitrate (VBR) routine (default)\n";
    *((esp + 8)) = eax;
    eax = *((ebp + 0xc));
    fprintf (eax, edx);
    eax = "    -b <bitrate>    specify minimum allowed bitrate, default  32 kbps\n    -B <bitrate>    specify maximum allowed bitrate, default 320 kbps\n    -F              strictly enforce the -b option, for use with players that\n                    do not support low bitrate mp3\n    -t              disable writing LAME Tag\n    -T              enable and force writing LAME Tag\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x170);
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    wait_for ();
    eax = "  PSY related:\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0xf);
    eax = "    --temporal-masking x   x=0 disables, x=1 enables temporal masking effect\n    --nssafejoint   M/S switching criterion\n    --nsmsfix <arg> M/S switching tuning [effective 0-3.5]\n    --interch x     adjust inter-channel masking ratio\n    --ns-bass x     adjust masking for sfbs  0 -  6 (long)  0 -  5 (short)\n    --ns-alto x     adjust masking for sfbs  7 - 13 (long)  6 - 10 (short)\n    --ns-treble x   adjust masking for sfbs 14 - 21 (long) 11 - 12 (short)\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x1cc);
    eax = "    --ns-sfb21 x    change ns-treble by x dB for sfb21\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x37);
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    wait_for ();
    eax = "  experimental switches:\n    -Y              lets LAME ignore noise in sfb21, like in CBR\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x5a);
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    wait_for ();
    eax = "  MP3 header/stream options:\n    -e <emp>        de-emphasis n/5/c  (obsolete)\n    -c              mark as copyright\n    -o              mark as non-original\n    -p              error protection.  adds 16 bit checksum to every frame\n                    (the checksum is computed correctly)\n    --nores         disable the bit reservoir\n    --strictly-enforce-ISO   comply as much as possible to ISO MPEG spec\n\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x19a);
    eax = "  Filter options:\n  --lowpass <freq>        frequency(kHz), lowpass filter cutoff above freq\n  --lowpass-width <freq>  frequency(kHz) - default 15%% of lowpass freq\n  --highpass <freq>       frequency(kHz), highpass filter cutoff below freq\n  --highpass-width <freq> frequency(kHz) - default 15%% of highpass freq\n";
    eax = *((ebp + 0xc));
    fprintf (eax, eax);
    eax = "  --resample <sfreq>  sampling frequency of output file(kHz)- default=automatic\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x50);
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    wait_for ();
    eax = "  ID3 tag options:\n    --tt <title>    audio/song title (max 30 chars for version 1 tag)\n    --ta <artist>   audio/song artist (max 30 chars for version 1 tag)\n    --tl <album>    audio/song album (max 30 chars for version 1 tag)\n    --ty <year>     audio/song year of issue (1 to 9999)\n    --tc <comment>  user-defined text (max 30 chars for v1 tag, 28 for v1.1)\n    --tn <track[/total]>   audio/song track number and (optionally) the total\n                           number of tracks on the original recording. (track\n                           and total each 1 to 255. just the track number\n                           creates v1.1 tag, providing a total forces v2.0).\n    --tg <genre>    audio/song genre (name or number in list)\n    --ti <file>     audio/song albumArt (jpeg/png/gif file, 128KB max, v2.3)\n    --tv <id=value> user-defined frame specified by id and value (v2.3 tag)\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x376);
    eax = "    --add-id3v2     force addition of version 2 tag\n    --id3v1-only    add only a version 1 tag\n    --id3v2-only    add only a version 2 tag\n    --space-id3v1   pad version 1 tag with spaces instead of nulls\n    --pad-id3v2     same as '--pad-id3v2-size 128'\n    --pad-id3v2-size <value> adds version 2 tag, pad with extra <value> bytes\n    --genre-list    print alphabetically sorted ID3 genre list and exit\n    --ignore-tag-errors  ignore errors in values passed for tags\n\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x1dc);
    eax = "    Note: A version 2 tag will NOT be added unless one of the input fields\n    won't fit in a version 1 tag (e.g. the title string is longer than 30\n    characters), or the '--add-id3v2' or '--id3v2-only' options are used,\n    or output is redirected to stdout.\n\nMisc:\n    --license       print License information\n\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x13c);
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    wait_for ();
    eax = "  Platform specific:\n    --noasm <instructions> disable assembly optimizations for mmx/3dnow/sse\n";
    edx = *((ebp + 0xc));
    fwrite (edx, 1, 0x61);
    eax = *((ebp + 0x14));
    *((esp + 4)) = eax;
    eax = *((ebp + 0xc));
    *(esp) = eax;
    wait_for ();
    eax = *((ebp + 0xc));
    *(esp) = eax;
    display_bitrates ();
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cb0d */
#include <stdint.h>
 
int32_t dbg_frontend_errorf (void) {
    char const * format;
    va_list ap;
    int32_t var_4h;
    int32_t var_8h;
    /* void frontend_errorf(char const * format,va_list ap); */
    eax = .comment;
    edx = *((ebp + 0xc));
    *((esp + 8)) = edx;
    edx = *((ebp + 8));
    my_error_printing (eax, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cc31 */
#include <stdint.h>
 
int32_t dbg_set_debug_file (void) {
    char const * fn;
    int32_t var_4h;
    /* void set_debug_file(char const * fn); */
    eax = .comment;
    if (eax == 0) {
        eax = 0x8054f4b;
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = fopen64 ();
        *(0x805bcf0) = eax;
        eax = .comment;
        if (eax != 0) {
            eax = *((ebp + 8));
            *((esp + 4)) = eax;
            error_printf ("writing debug info into: %s\n");
        } else {
            eax = *((ebp + 8));
            *((esp + 4)) = eax;
            error_printf ("Error: can't open for debug info: %s\n");
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x80504d7 */
#include <stdint.h>
 
int32_t dbg_parse_args (void) {
    int32_t var_b4h;
    int32_t var_b0h;
    int32_t var_aeh;
    double d;
    double val;
    int32_t y;
    uint32_t var_78h;
    int32_t x;
    int32_t tmp_quality;
    int32_t cbr;
    int32_t fast;
    FILE * fp;
    int32_t k;
    uint32_t var_4ch;
    int32_t ret;
    uint32_t var_44h;
    int32_t argUsed;
    char * nextArg;
    char * arg;
    char * token;
    int32_t id3tag_mode;
    int32_t noreplaygain;
    int32_t count_nogap;
    char const * ProgramName;
    int32_t nogap_tags;
    int32_t nogap;
    int32_t autoconvert;
    int32_t i;
    int32_t input_file;
    char c;
    lame_global_flags * gfp;
    int32_t argc;
    char ** argv;
    char * const inPath;
    char * const outPath;
    char ** nogap_inPath;
    int * num_nogap;
    char * format;
    size_t n;
    char * var_ch;
    int32_t var_sp_10h;
    /* int parse_args(lame_global_flags * gfp,int argc,char ** argv,char * const inPath,char * const outPath,char ** nogap_inPath,int * num_nogap); */
    *((ebp - 0x10)) = 0;
    *((ebp - 0x18)) = 0;
    *((ebp - 0x1c)) = 0;
    *((ebp - 0x20)) = 0;
    eax = *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x24)) = eax;
    *((ebp - 0x28)) = 0;
    *((ebp - 0x2c)) = 0;
    *((ebp - 0x30)) = 0;
    eax = *((ebp + 0x14));
    *(eax) = 0;
    eax = *((ebp + 0x18));
    *(eax) = 0;
    *(obj.silent) = 0;
    *(obj.ignore_tag_errors) = 0;
    *(obj.brhist_1) = 1;
    *(obj.mp3_delay) = 0;
    *(obj.mp3_delay_set) = 0;
    *(obj.print_clipping_info) = 0;
    *(obj.disable_wav_header) = 0;
    eax = *((ebp + 8));
    *(esp) = eax;
    id3tag_init ();
    *((ebp - 0x14)) = 0;
    goto label_1;
label_0:
    eax = *((ebp - 0x14));
    eax <<= 2;
    eax += *((ebp + 0x10));
    eax = *(eax);
    *((ebp - 0x34)) = eax;
    eax = *((ebp - 0x34));
    eax = *(eax);
    al = (al == 0x2d) ? 1 : 0;
    *((ebp - 0x34))++;
    if (al == 0) {
        goto label_2;
    }
    *((ebp - 0x40)) = 0;
    eax = *((ebp - 0x14));
    eax++;
    if (eax < *((ebp + 0xc))) {
        eax = *((ebp - 0x14));
        eax++;
        eax <<= 2;
        eax += *((ebp + 0x10));
        eax = *(eax);
    } else {
        eax = 0x8055592;
    }
    *((ebp - 0x3c)) = eax;
    eax = *((ebp - 0x34));
    eax = *(eax);
    if (al == 0) {
        *((ebp - 0x10)) = 1;
        eax = *((ebp + 0x14));
        eax = *(eax);
        if (al == 0) {
            eax = *((ebp - 0x14));
            eax <<= 2;
            eax += *((ebp + 0x10));
            eax = *(eax);
            eax = *((ebp + 0x14));
            strncpy (eax, eax, 0x1001);
        } else {
            eax = *((ebp + 0x18));
            eax = *(eax);
            if (al != 0) {
                goto label_3;
            }
            eax = *((ebp - 0x14));
            eax <<= 2;
            eax += *((ebp + 0x10));
            eax = *(eax);
            eax = *((ebp + 0x18));
            strncpy (eax, eax, 0x1001);
        }
    }
label_3:
    eax = *((ebp - 0x34));
    eax = *(eax);
    if (al != 0x2d) {
        goto label_4;
    }
    *((ebp - 0x34))++;
    *((esp + 4)) = "resample";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        atof (eax);
        *(esp) = fp_stack[0];
        fp_stack--;
        eax = resample_rate ();
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_out_samplerate ();
        goto label_5;
    }
    *((esp + 4)) = "vbr-old";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 2;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_VBR ();
        goto label_5;
    }
    *((esp + 4)) = "vbr-new";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 4;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_VBR ();
        goto label_5;
    }
    *((esp + 4)) = "vbr-mtrh";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 4;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_VBR ();
        goto label_5;
    }
    *((esp + 4)) = 0x8058f13;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 0;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_VBR ();
        goto label_5;
    }
    *((esp + 4)) = 0x8058f17;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        *((esp + 4)) = 3;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_VBR ();
        eax = *((ebp - 0x3c));
        eax = atoi (eax);
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_VBR_mean_bitrate_kbps ();
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_VBR_mean_bitrate_kbps ();
        if (eax > 0x1f3f) {
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_get_VBR_mean_bitrate_kbps ();
            ecx = eax + 0x1f4;
            edx = 0x10624dd3;
            eax = ecx;
            edx:eax = eax * edx;
            edx >>= 6;
            eax = ecx;
            eax >>= 0x1f;
            ecx = edx;
            ecx -= eax;
            eax = ecx;
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_VBR_mean_bitrate_kbps ();
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_VBR_mean_bitrate_kbps ();
        if (eax <= 0x13f) {
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_get_VBR_mean_bitrate_kbps ();
        } else {
            eax = 0x140;
        }
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_VBR_mean_bitrate_kbps ();
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_VBR_mean_bitrate_kbps ();
        if (eax > 8) {
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_get_VBR_mean_bitrate_kbps ();
        } else {
            eax = 8;
        }
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_VBR_mean_bitrate_kbps ();
        goto label_5;
    }
    *((esp + 4)) = "r3mix";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 0x3e8;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_preset ();
        goto label_5;
    }
    *((esp + 4)) = "bitwidth";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        eax = atoi (eax);
        *(obj.in_bitwidth) = eax;
        goto label_5;
    }
    *((esp + 4)) = "signed";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.in_signed) = 1;
        goto label_5;
    }
    *((esp + 4)) = "unsigned";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.in_signed) = 0;
        goto label_5;
    }
    *((esp + 4)) = "little-endian";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.in_endian) = 0;
        goto label_5;
    }
    *((esp + 4)) = "big-endian";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.in_endian) = 1;
        goto label_5;
    }
    *((esp + 4)) = "mp1input";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.input_format) = 4;
        goto label_5;
    }
    *((esp + 4)) = "mp2input";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.input_format) = 5;
        goto label_5;
    }
    *((esp + 4)) = "mp3input";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.input_format) = 6;
        goto label_5;
    }
    *((esp + 4)) = "ogginput";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        error_printf ("sorry, vorbis support in LAME is deprecated.\n");
        eax = 0xffffffff;
        goto label_6;
    }
    *((esp + 4)) = "phone";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp - 0x24));
        *((esp + 0x10)) = eax;
        eax = *((ebp - 0x34));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = presets_set ();
        if (eax < 0) {
            eax = 0xffffffff;
            goto label_6;
        }
        error_printf ("Warning: --phone is deprecated, use --preset phone instead!");
        goto label_5;
    }
    *((esp + 4)) = "voice";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp - 0x24));
        *((esp + 0x10)) = eax;
        eax = *((ebp - 0x34));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = presets_set ();
        if (eax < 0) {
            eax = 0xffffffff;
            goto label_6;
        }
        error_printf ("Warning: --voice is deprecated, use --preset voice instead!");
        goto label_5;
    }
    *((esp + 4)) = "decode";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 1;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_decode_only ();
        goto label_5;
    }
    *((esp + 4)) = "flush";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.flush_write) = 1;
        goto label_5;
    }
    *((esp + 4)) = "decode-mp3delay";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp - 0x3c));
        eax = atoi (eax);
        *(obj.mp3_delay) = eax;
        *(obj.mp3_delay_set) = 1;
        *((ebp - 0x40)) = 1;
        goto label_5;
    }
    *((esp + 4)) = "nores";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 1;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_disable_reservoir ();
        goto label_5;
    }
    *((esp + 4)) = "strictly-enforce-ISO";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 1;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_strict_ISO ();
        goto label_5;
    }
    *((esp + 4)) = "scale";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        atof (eax);
        *((ebp - 0xac)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xac));
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_scale ();
        goto label_5;
    }
    *((esp + 4)) = "scale-l";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        atof (eax);
        *((ebp - 0xac)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xac));
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_scale_left ();
        goto label_5;
    }
    *((esp + 4)) = "scale-r";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        atof (eax);
        *((ebp - 0xac)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xac));
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_scale_right ();
        goto label_5;
    }
    *((esp + 4)) = "noasm";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        eax = strcmp (eax, 0x8059074);
        if (eax == 0) {
            *((esp + 8)) = 0;
            *((esp + 4)) = 1;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_asm_optimizations ();
        }
        eax = *((ebp - 0x3c));
        eax = strcmp (eax, "3dnow");
        if (eax == 0) {
            *((esp + 8)) = 0;
            *((esp + 4)) = 2;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_asm_optimizations ();
        }
        eax = *((ebp - 0x3c));
        eax = strcmp (eax, 0x805907e);
        if (eax != 0) {
            goto label_5;
        }
        *((esp + 8)) = 0;
        *((esp + 4)) = 3;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_asm_optimizations ();
        goto label_5;
    }
    *((esp + 4)) = "freeformat";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 1;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_free_format ();
        goto label_5;
    }
    *((esp + 4)) = "replaygain-fast";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 1;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_findReplayGain ();
        goto label_5;
    }
    *((esp + 4)) = "replaygain-accurate";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 1;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_decode_on_the_fly ();
        *((esp + 4)) = 1;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_findReplayGain ();
        goto label_5;
    }
    *((esp + 4)) = "noreplaygain";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x2c)) = 1;
        *((esp + 4)) = 0;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_findReplayGain ();
        goto label_5;
    }
    *((esp + 4)) = "clipdetect";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.print_clipping_info) = 1;
        *((esp + 4)) = 1;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_decode_on_the_fly ();
        goto label_5;
    }
    *((esp + 4)) = "nohist";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.brhist_1) = 0;
        goto label_5;
    }
    *((esp + 4)) = 0x80590d0;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0x74;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3_tag ();
        goto label_5;
    }
    *((esp + 4)) = 0x80590d3;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0x61;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3_tag ();
        goto label_5;
    }
    *((esp + 4)) = 0x80590d6;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0x6c;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3_tag ();
        goto label_5;
    }
    *((esp + 4)) = 0x80590d9;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0x79;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3_tag ();
        goto label_5;
    }
    *((esp + 4)) = 0x80590dc;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0x63;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3_tag ();
        goto label_5;
    }
    *((esp + 4)) = 0x80590df;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp - 0x3c));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0x6e;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = id3_tag ();
        *((ebp - 0x44)) = eax;
        *((ebp - 0x40)) = 1;
        if (*((ebp - 0x44)) == 0) {
            goto label_5;
        }
        eax = ignore_tag_errors;
        if (eax != 0) {
            goto label_5;
        }
        if (*((ebp - 0x30)) == 1) {
            error_printf ("The track number has to be between 1 and 255 for ID3v1.\n");
            eax = 0xffffffff;
            goto label_6;
        }
        if (*((ebp - 0x30)) == 2) {
            goto label_5;
        }
        eax = silent;
        if (eax > 9) {
            goto label_5;
        }
        error_printf ("The track number has to be between 1 and 255 for ID3v1, ignored for ID3v1.\n");
        goto label_5;
    }
    *((esp + 4)) = 0x805916c;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp - 0x3c));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0x67;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = id3_tag ();
        *((ebp - 0x48)) = eax;
        *((ebp - 0x40)) = 1;
        if (*((ebp - 0x48)) == 0) {
            goto label_5;
        }
        eax = ignore_tag_errors;
        if (eax != 0) {
            goto label_5;
        }
        if (*((ebp - 0x48)) == -1) {
            eax = *((ebp - 0x3c));
            *((esp + 4)) = eax;
            error_printf ("Unknown ID3v1 genre number: '%s'.\n");
            eax = 0xffffffff;
            goto label_6;
        }
        if (*((ebp - 0x48)) == 0xfffffffe) {
            if (*((ebp - 0x30)) == 1) {
                eax = *((ebp - 0x3c));
                *((esp + 4)) = eax;
                error_printf ("Unknown ID3v1 genre: '%s'.\n");
                eax = 0xffffffff;
                goto label_6;
            }
            if (*((ebp - 0x30)) == 2) {
                goto label_5;
            }
            eax = silent;
            if (eax > 9) {
                goto label_5;
            }
            eax = *((ebp - 0x3c));
            *((esp + 4)) = eax;
            error_printf ("Unknown ID3v1 genre: '%s'.  Setting ID3v1 genre to 'Other'\n");
            goto label_5;
        }
        error_printf ("Internal error.\n");
        eax = 0xffffffff;
        goto label_6;
    }
    *((esp + 4)) = 0x80591fd;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        *((esp + 4)) = 0x76;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = id3_tag ();
        if (eax == 0) {
            goto label_5;
        }
        eax = silent;
        if (eax > 9) {
            goto label_5;
        }
        eax = *((ebp - 0x3c));
        *((esp + 4)) = eax;
        error_printf ("Invalid field value: '%s'. Ignored\n");
        goto label_5;
    }
    *((esp + 4)) = 0x8059224;
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = set_id3_albumart ();
        if (eax == 0) {
            goto label_5;
        }
        eax = ignore_tag_errors;
        if (eax != 0) {
            goto label_5;
        }
        eax = 0xffffffff;
        goto label_6;
    }
    *((esp + 4)) = "ignore-tag-errors";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *(obj.ignore_tag_errors) = 1;
        goto label_5;
    }
    *((esp + 4)) = "add-id3v2";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_add_v2 ();
        goto label_5;
    }
    *((esp + 4)) = "id3v1-only";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_v1_only ();
        *((ebp - 0x30)) = 1;
        goto label_5;
    }
    *((esp + 4)) = "id3v2-only";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_v2_only ();
        *((ebp - 0x30)) = 2;
        goto label_5;
    }
    *((esp + 4)) = "space-id3v1";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_space_v1 ();
        goto label_5;
    }
    *((esp + 4)) = "pad-id3v2";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_pad_v2 ();
        goto label_5;
    }
    *((esp + 4)) = "pad-id3v2-size";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp - 0x3c));
        eax = atoi (eax);
        *((ebp - 0x4c)) = eax;
        eax = 0x1f400;
        if (*((ebp - 0x4c)) <= 0x1f400) {
            eax = *((ebp - 0x4c));
        }
        *((ebp - 0x4c)) = eax;
        eax = 0;
        __asm ("cmovns eax, dword [ebp - 0x4c]");
        *((ebp - 0x4c)) = eax;
        eax = *((ebp - 0x4c));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        id3tag_set_pad ();
        *((ebp - 0x40)) = 1;
        goto label_5;
    }
    *((esp + 4)) = "genre-list";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 0;
        *(esp) = dbg.genre_list_handler;
        id3tag_genre_list ();
        eax = 0xfffffffe;
        goto label_6;
    }
    *((esp + 4)) = "lowpass";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp - 0x3c));
        atof (eax);
        *((ebp - 0x88)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x40)) = 1;
        *(fp_stack--) = *((ebp - 0x88));
        *(fp_stack--) = 0.0;
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al != 0) {
            *((esp + 4)) = 0xffffffff;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_lowpassfreq ();
            goto label_5;
        }
        *(fp_stack--) = *((ebp - 0x88));
        *(fp_stack--) = *(0x8059830);
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al == 0) {
            *(fp_stack--) = *((ebp - 0x88));
            *(fp_stack--) = *(0x8059838);
            fp_tmp_0 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_0;
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            if (al == 0) {
                goto label_7;
            }
        }
        error_printf ("Must specify lowpass with --lowpass freq, freq >= 0.001 kHz\n");
        eax = 0xffffffff;
        goto label_6;
label_7:
        *(fp_stack--) = *((ebp - 0x88));
        *(fp_stack--) = *(0x8059840);
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al != 0) {
            *(fp_stack--) = *(0x8059828);
        } else {
            *(fp_stack--) = 1.0;
        }
        fp_stack[0] *= *((ebp - 0x88));
        *(fp_stack--) = *(0x8059848);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        eax = *((ebp - 0xae));
        ah = 0xc;
        *((ebp - 0xb0)) = ax;
        *((ebp - 0xb4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0xb4));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_lowpassfreq ();
        goto label_5;
    }
    *((esp + 4)) = "lowpass-width";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp - 0x3c));
        atof (eax);
        *((ebp - 0x88)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x40)) = 1;
        *(fp_stack--) = *((ebp - 0x88));
        *(fp_stack--) = *(0x8059830);
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al == 0) {
            *(fp_stack--) = *((ebp - 0x88));
            *(fp_stack--) = *(0x8059838);
            fp_tmp_1 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_1;
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            if (al == 0) {
                goto label_8;
            }
        }
        error_printf ("Must specify lowpass width with --lowpass-width freq, freq >= 0.001 kHz\n");
        eax = 0xffffffff;
        goto label_6;
label_8:
        *(fp_stack--) = *((ebp - 0x88));
        *(fp_stack--) = *(0x8059850);
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al != 0) {
            *(fp_stack--) = *(0x8059828);
        } else {
            *(fp_stack--) = 1.0;
        }
        fp_stack[0] *= *((ebp - 0x88));
        *(fp_stack--) = *(0x8059848);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        eax = *((ebp - 0xae));
        ah = 0xc;
        *((ebp - 0xb0)) = ax;
        *((ebp - 0xb4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0xb4));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_lowpasswidth ();
        goto label_5;
    }
    *((esp + 4)) = "highpass";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax != 0) {
        goto label_9;
    }
    eax = *((ebp - 0x3c));
    atof (eax);
    *((ebp - 0x88)) = fp_stack[0];
    fp_stack--;
    *((ebp - 0x40)) = 1;
    *(fp_stack--) = *((ebp - 0x88));
    *(fp_stack--) = 0.0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    if (al != 0) {
        *((esp + 4)) = 0xffffffff;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_highpassfreq ();
        goto label_5;
    }
    *(fp_stack--) = *((ebp - 0x88));
    *(fp_stack--) = *(0x8059830);
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    if (al == 0) {
        *(fp_stack--) = *((ebp - 0x88));
        *(fp_stack--) = *(0x8059838);
        fp_tmp_2 = fp_stack[1];
        fp_stack[1] = fp_stack[0];
        fp_stack[0] = fp_tmp_2;
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al == 0) {
            goto label_10;
        }
    }
    error_printf ("Must specify highpass with --highpass freq, freq >= 0.001 kHz\n");
    eax = 0xffffffff;
    goto label_6;
label_10:
    *(fp_stack--) = *((ebp - 0x88));
    *(fp_stack--) = *(0x8059850);
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    if (al == 0) {
        void (*0x8051665)() ();
    }
label_9:
    *((esp + 4)) = "highpass-width";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        eax = *((ebp - 0x3c));
        atof (eax);
        *((ebp - 0x88)) = fp_stack[0];
        fp_stack--;
        *((ebp - 0x40)) = 1;
        *(fp_stack--) = *((ebp - 0x88));
        *(fp_stack--) = *(0x8059830);
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al == 0) {
            *(fp_stack--) = *((ebp - 0x88));
            *(fp_stack--) = *(0x8059838);
            fp_tmp_3 = fp_stack[1];
            fp_stack[1] = fp_stack[0];
            fp_stack[0] = fp_tmp_3;
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
            if (al == 0) {
                goto label_11;
            }
        }
        error_printf ("Must specify highpass width with --highpass-width freq, freq >= 0.001 kHz\n");
        eax = 0xffffffff;
        goto label_6;
label_11:
        *(fp_stack--) = *((ebp - 0x88));
        eax = *((ebp - 0xae));
        ah = 0xc;
        *((ebp - 0xb0)) = ax;
        *((ebp - 0xb4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0xb4));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_highpasswidth ();
        goto label_5;
    }
    *((esp + 4)) = "comp";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((ebp - 0x40)) = 1;
        eax = *((ebp - 0x3c));
        atof (eax);
        *((ebp - 0x88)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0x88));
        *(fp_stack--) = 1.0;
        fp_stack--;
        fp_stack++;
        al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
        if (al != 0) {
            error_printf ("Must specify compression ratio >= 1.0\n");
            eax = 0xffffffff;
            goto label_6;
        }
        *(fp_stack--) = *((ebp - 0x88));
        *((ebp - 0xac)) = fp_stack[0];
        fp_stack--;
        *(fp_stack--) = *((ebp - 0xac));
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_compression_ratio ();
        goto label_5;
    }
    *((esp + 4)) = "notemp";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax == 0) {
        *((esp + 4)) = 0;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_set_useTemporal ();
        goto label_5;
    }
    *((esp + 4)) = "interch";
    eax = *((ebp - 0x34));
    *(esp) = eax;
    eax = local_strcasecmp ();
    if (eax != 0) {
        void (*0x805186e)() ();
    }
label_5:
    eax = *((ebp - 0x40));
    *((ebp - 0x14)) += eax;
    goto label_1;
    do {
        eax = *((ebp - 0x34));
        eax = *(eax);
        if (al != 0) {
            eax = *((ebp - 0x34));
        } else {
            eax = *((ebp - 0x3c));
        }
        *((ebp - 0x38)) = eax;
        eax = *((ebp - 9));
        eax -= 0x3f;
        if (eax <= 0x39) {
            eax = *((eax*4 + 0x80596e8));
            /* switch table (58 cases) at 0x80596e8 */
            void (*eax)() ();
            *((ebp - 0x40)) = 1;
            eax = *((ebp - 0x38));
            eax = *(eax);
            eax = (int32_t) al;
            eax -= 0x61;
            if (eax <= 0x12) {
                eax = *((eax*4 + 0x80597d0));
                /* switch table (19 cases) at 0x80597d0 */
                void (*eax)() ();
                *((esp + 4)) = 0;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_mode ();
                goto label_12;
                *((esp + 4)) = 2;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_mode ();
                goto label_12;
                *((esp + 4)) = 1;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_force_ms ();
                *((esp + 4)) = 1;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_mode ();
                goto label_12;
                *((esp + 4)) = 3;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_mode ();
                goto label_12;
                *((esp + 4)) = 1;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_mode ();
            } else {
                eax = *((ebp - 0x38));
                *((esp + 8)) = eax;
                eax = *((ebp - 0x24));
                *((esp + 4)) = eax;
                error_printf ("%s: -m mode must be s/d/j/f/m not %s\n");
                eax = 0xffffffff;
                goto label_6;
            }
label_12:
            goto label_13;
            *((ebp - 0x40)) = 1;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_VBR ();
            if (eax == 0) {
                *((esp + 4)) = 4;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_VBR ();
            }
            eax = *((ebp - 0x38));
            atof (eax);
            *((ebp - 0xac)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *((ebp - 0xac));
            *((esp + 4)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_VBR_quality ();
            goto label_13;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_VBR ();
            if (eax != 0) {
                goto label_14;
            }
            *((esp + 4)) = 4;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_VBR ();
            goto label_13;
            *((ebp - 0x40)) = 1;
            eax = *((ebp - 0x38));
            eax = atoi (eax);
            *((ebp - 0x70)) = eax;
            if (*((ebp - 0x70)) < 0) {
                *((ebp - 0x70)) = 0;
            }
            if (*((ebp - 0x70)) > 9) {
                *((ebp - 0x70)) = 9;
            }
            eax = *((ebp - 0x70));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_quality ();
            goto label_13;
            *((esp + 4)) = 7;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_quality ();
            goto label_13;
            *((esp + 4)) = 2;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_quality ();
            goto label_13;
            *((ebp - 0x40)) = 1;
            eax = *((ebp - 0x38));
            atof (eax);
            *((ebp - 0x88)) = fp_stack[0];
            fp_stack--;
            *(fp_stack--) = *((ebp - 0x88));
            *(fp_stack--) = *(0x8059860);
            fp_stack--;
            fp_stack++;
            al = (fp_stack[0] >= fp_stack[1]) ? 1 : 0;
            if (al != 0) {
                *(fp_stack--) = *(0x8059828);
            } else {
                *(fp_stack--) = 1.0;
            }
            fp_stack[0] *= *((ebp - 0x88));
            *(fp_stack--) = *(0x8059848);
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            eax = *((ebp - 0xae));
            ah = 0xc;
            *((ebp - 0xb0)) = ax;
            *((ebp - 0xb4)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0xb4));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_in_samplerate ();
            goto label_13;
            *((ebp - 0x40)) = 1;
            eax = *((ebp - 0x38));
            eax = atoi (eax);
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_brate ();
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_brate ();
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_VBR_min_bitrate_kbps ();
            goto label_13;
            *((ebp - 0x40)) = 1;
            eax = *((ebp - 0x38));
            eax = atoi (eax);
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_VBR_max_bitrate_kbps ();
            goto label_13;
            *((esp + 4)) = 1;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_VBR_hard_min ();
            goto label_13;
            *((esp + 4)) = 0;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_bWriteVbrTag ();
            *(obj.disable_wav_header) = 1;
            goto label_13;
            *((esp + 4)) = 1;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_bWriteVbrTag ();
            *((ebp - 0x20)) = 1;
            *(obj.disable_wav_header) = 0;
            goto label_13;
            *(obj.input_format) = 1;
            goto label_13;
            *(obj.swapbytes) = 1;
            goto label_13;
            *((esp + 4)) = 1;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_error_protection ();
            goto label_13;
            *((ebp - 0x18)) = 1;
            *((esp + 4)) = 3;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_mode ();
            goto label_13;
            eax = *((ebp - 9));
            *((esp + 4)) = eax;
            error_printf ("WARNING: -%c is obsolete.\n");
            goto label_13;
            *(obj.silent) = 0xa;
            goto label_13;
            edx = "%d,%d";
            eax = *((ebp - 0x38));
            ecx = ebp - 0x7c;
            ecx = ebp - 0x74;
            eax = isoc99_sscanf (ecx, edx, ecx);
            *((ebp - 0x78)) = eax;
            if (*((ebp - 0x78)) == 1) {
                eax = *((ebp - 0x74));
                *((ebp - 0x7c)) = eax;
            }
            *((ebp - 0x40)) = 1;
            goto label_13;
            *((esp + 4)) = 1;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_experimentalY ();
            goto label_13;
            *((ebp - 0x7c)) = 1;
            edx = 0x805955f;
            eax = *((ebp - 0x38));
            ecx = ebp - 0x7c;
            eax = isoc99_sscanf (eax, edx, ecx);
            *((ebp - 0x40)) = eax;
            goto label_13;
            *((ebp - 0x40)) = 1;
            eax = *((ebp - 0x38));
            eax = *(eax);
            eax = (int32_t) al;
            if (eax != 0x63) {
                if (eax != 0x6e) {
                    if (eax != 0x35) {
                    } else {
                        *((esp + 4)) = 0;
                        eax = *((ebp + 8));
                        *(esp) = eax;
                        lame_set_emphasis ();
                        goto label_15;
                    }
                    *((esp + 4)) = 1;
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    lame_set_emphasis ();
                } else {
                    *((esp + 4)) = 3;
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    lame_set_emphasis ();
                    goto label_15;
                }
                eax = *((ebp - 0x38));
                *((esp + 8)) = eax;
                eax = *((ebp - 0x24));
                *((esp + 4)) = eax;
                error_printf ("%s: -e emp must be n/5/c not %s\n");
                eax = 0xffffffff;
                goto label_6;
            }
label_15:
            goto label_13;
            *((esp + 4)) = 1;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_copyright ();
            goto label_13;
            *((esp + 4)) = 0;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_original ();
            goto label_13;
            eax = stdout;
            *((esp + 0xc)) = 0;
            edx = *((ebp - 0x24));
            *((esp + 8)) = edx;
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            long_help ();
            eax = 0xffffffff;
            goto label_6;
        }
        eax = *((ebp - 9));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x24));
        *((esp + 4)) = eax;
        error_printf ("%s: unrecognized option -%c\n");
        eax = 0xffffffff;
        goto label_6;
label_14:
label_13:
        if (*((ebp - 0x40)) != 0) {
            eax = *((ebp - 0x38));
            if (eax == *((ebp - 0x34))) {
                *((ebp - 0x34)) = 0x8055592;
            } else {
                *((ebp - 0x14))++;
            }
            *((ebp - 0x38)) = 0x8055592;
            *((ebp - 0x40)) = 0;
        }
label_4:
        eax = *((ebp - 0x34));
        eax = *(eax);
        *((ebp - 9)) = al;
        al = (*((ebp - 9)) != 0) ? 1 : 0;
        *((ebp - 0x34))++;
    } while (al != 0);
    goto label_1;
label_2:
    if (*((ebp - 0x1c)) != 0) {
        if (*((ebp + 0x20)) != 0) {
            eax = *((ebp + 0x20));
            eax = *(eax);
            if (eax <= *((ebp - 0x28))) {
                goto label_16;
            }
            eax = *((ebp - 0x14));
            eax <<= 2;
            eax += *((ebp + 0x10));
            eax = *(eax);
            edx = *(eax);
            eax = *((ebp - 0x28));
            eax <<= 2;
            eax += *((ebp + 0x1c));
            eax = *(eax);
            *((ebp - 0x28))++;
            strncpy (eax, edx, 0x1001);
            *((ebp - 0x10)) = 1;
            goto label_1;
        }
label_16:
        error_printf ("Error: 'nogap option'.  Calling program does not allow nogap option, or\nyou have exceeded maximum number of input files for the nogap option\n");
        eax = *((ebp + 0x20));
        *(eax) = 0xffffffff;
        eax = 0xffffffff;
        goto label_6;
    }
    eax = *((ebp + 0x14));
    eax = *(eax);
    if (al == 0) {
        eax = *((ebp - 0x14));
        eax <<= 2;
        eax += *((ebp + 0x10));
        eax = *(eax);
        eax = *((ebp + 0x14));
        strncpy (eax, eax, 0x1001);
        *((ebp - 0x10)) = 1;
    } else {
        eax = *((ebp + 0x18));
        eax = *(eax);
        if (al == 0) {
            eax = *((ebp - 0x14));
            eax <<= 2;
            eax += *((ebp + 0x10));
            eax = *(eax);
            eax = *((ebp + 0x18));
            strncpy (eax, eax, 0x1001);
        } else {
            eax = *((ebp - 0x14));
            eax <<= 2;
            eax += *((ebp + 0x10));
            eax = *(eax);
            *((esp + 8)) = eax;
            eax = *((ebp - 0x24));
            *((esp + 4)) = eax;
            error_printf ("%s: excess arg %s\n");
            eax = 0xffffffff;
            goto label_6;
        }
    }
label_1:
    *((ebp - 0x14))++;
    eax = *((ebp - 0x14));
    if (eax < *((ebp + 0xc))) {
        goto label_0;
    }
    if (*((ebp - 0x10)) == 0) {
        eax = .comment;
        edx = *((ebp - 0x24));
        *((esp + 4)) = edx;
        *(esp) = eax;
        usage ();
        eax = 0xffffffff;
    } else {
        eax = *((ebp + 0x14));
        eax = *(eax);
        if (al == 0x2d) {
            eax = silent;
            edx = 1;
            if (eax <= 0) {
                eax = edx;
            }
            *(obj.silent) = eax;
        }
        eax = *((ebp + 0x18));
        eax = *(eax);
        if (al == 0) {
            if (*((ebp - 0x28)) != 0) {
                goto label_17;
            }
            eax = *((ebp + 0x14));
            eax = *(eax);
            if (al == 0x2d) {
                eax = 0x8059645;
                eax = *((ebp + 0x18));
                memcpy (eax, eax, 2);
            } else {
                eax = *((ebp + 0x14));
                eax = *((ebp + 0x18));
                strncpy (eax, eax, 0xffd);
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = lame_get_decode_only ();
                if (eax != 0) {
                    eax = ".wav";
                    eax = *((ebp + 0x18));
                    strcat (eax, eax);
                } else {
                    eax = ".mp3";
                    eax = *((ebp + 0x18));
                    strcat (eax, eax);
                }
            }
        }
label_17:
        if (*((ebp - 0x2c)) == 0) {
            *((esp + 4)) = 1;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_findReplayGain ();
        }
        if (*((ebp - 0x1c)) != 0) {
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_bWriteVbrTag ();
            if (eax == 0) {
                goto label_18;
            }
            if (*((ebp - 0x20)) != 0) {
                goto label_18;
            }
            console_printf ("Note: Disabling VBR Xing/Info tag since it interferes with --nogap\n");
            *((esp + 4)) = 0;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_bWriteVbrTag ();
        }
label_18:
        eax = *((ebp + 0x18));
        eax = *(eax);
        if (al == 0x2d) {
            *((esp + 4)) = 0;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_set_bWriteVbrTag ();
        }
        eax = input_format;
        if (eax == 0) {
            eax = *((ebp + 0x14));
            *(esp) = eax;
            eax = filename_to_type ();
            *(obj.input_format) = eax;
        }
        eax = input_format;
        if (eax == 8) {
            error_printf ("sorry, vorbis support in LAME is deprecated.\n");
            eax = 0xffffffff;
        } else {
            if (*((ebp - 0x18)) != 0) {
                *((esp + 4)) = 2;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_set_num_channels ();
            } else {
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = lame_get_mode ();
                if (eax == 3) {
                    *((esp + 4)) = 1;
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    lame_set_num_channels ();
                } else {
                    *((esp + 4)) = 2;
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    lame_set_num_channels ();
                }
            }
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_free_format ();
            if (eax != 0) {
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = lame_get_brate ();
                if (eax > 7) {
                    eax = *((ebp + 8));
                    *(esp) = eax;
                    eax = lame_get_brate ();
                    if (eax <= 0x280) {
                        goto label_19;
                    }
                }
                error_printf ("For free format, specify a bitrate between 8 and 640 kbps\n");
                error_printf ("with the -b <bitrate> option\n");
                eax = 0xffffffff;
            } else {
label_19:
                if (*((ebp + 0x20)) != 0) {
                    eax = *((ebp + 0x20));
                    edx = *((ebp - 0x28));
                    *(eax) = edx;
                }
                eax = 0;
            }
        }
    }
label_6:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804caea */
#include <stdint.h>
 
int32_t dbg_frontend_msgf (void) {
    char const * format;
    va_list ap;
    int32_t var_4h;
    int32_t var_8h;
    /* void frontend_msgf(char const * format,va_list ap); */
    eax = .comment;
    edx = *((ebp + 0xc));
    *((esp + 8)) = edx;
    edx = *((ebp + 8));
    my_console_printing (eax, edx);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x80538af */
#include <stdint.h>
 
int32_t dbg_encoder_progress_end (void) {
    lame_global_flags const * gf;
    /* void encoder_progress_end(lame_global_flags const * gf); */
    eax = silent;
    if (eax <= 0) {
        eax = brhist;
        if (eax != 0) {
            brhist_jump_back ();
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        timestatus ();
        eax = brhist;
        if (eax != 0) {
            eax = *((ebp + 8));
            *(esp) = eax;
            brhist_disp ();
        }
        timestatus_finish ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f094 */
#include <stdint.h>
 
uint32_t dbg_GetCPUTime (void) {
    clock_t t;
    /* double GetCPUTime(); */
    eax = clock ();
    *((ebp - 0xc)) = eax;
    *(fp_stack--) = *((ebp - 0xc));
    *(fp_stack--) = *(0x80554d0);
    fp_stack[0] /= fp_stack[1];
    fp_stack++;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a47c */
#include <stdint.h>
 
void clock (void) {
    clock ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804cbbd */
#include <stdint.h>
 
int32_t dbg_console_flush (void) {
    /* void console_flush(); */
    eax = .comment;
    fflush (eax);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804f49b */
#include <stdint.h>
 
int32_t dbg_usage (void) {
    FILE * const fp;
    char const * ProgramName;
    char * format;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    /* int usage(FILE * const fp,char const * ProgramName); */
    eax = *((ebp + 8));
    *(esp) = eax;
    lame_version_print ();
    eax = "usage: %s [options] <infile> [outfile]\n\n    <infile> and/or <outfile> can be \"-\", which means stdin/stdout.\n\nTry:\n     \"%s --help\"           for general usage information\n or:\n     \"%s --preset help\"    for information on suggested predefined settings\n or:\n     \"%s --longhelp\"\n  or \"%s -?\"              for a complete options list\n\n";
    edx = *((ebp + 0xc));
    *((esp + 0x18)) = edx;
    edx = *((ebp + 0xc));
    *((esp + 0x14)) = edx;
    edx = *((ebp + 0xc));
    *((esp + 0x10)) = edx;
    edx = *((ebp + 0xc));
    *((esp + 0xc)) = edx;
    edx = *((ebp + 0xc));
    *((esp + 8)) = edx;
    eax = *((ebp + 8));
    fprintf (eax, eax);
    eax = 0;
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052ada */
#include <stdint.h>
 
int32_t dbg_Read32Bits (void) {
    int32_t result;
    int32_t second;
    int32_t first;
    FILE * fp;
    /* int Read32Bits(FILE * fp); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = Read16BitsLowHigh ();
    eax &= 0xffff;
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = Read16BitsLowHigh ();
    eax &= 0xffff;
    *((ebp - 0x10)) = eax;
    eax = *((ebp - 0x10));
    eax <<= 0x10;
    eax += *((ebp - 0xc));
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x14));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x805338a */
#include <stdint.h>
 
int32_t dbg_encoder_progress_begin (void) {
    int32_t var_54h;
    int32_t var_44h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_1ah;
    lame_global_flags const * gf;
    char const * inPath;
    char const * outPath;
    char * s2;
    int32_t var_8h;
    int32_t var_ch;
    int32_t var_18h;
    int32_t var_sp_1ch;
    /* void encoder_progress_begin(lame_global_flags const * gf,char const * inPath,char const * outPath); */
    eax = silent;
    if (eax <= 9) {
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_print_config ();
        eax = *((ebp + 0x10));
        eax = strcmp (eax, 0x805996d);
        if (eax != 0) {
            esi = *((ebp + 0x10));
        } else {
            esi = "<stdout>";
        }
        eax = *((ebp + 0xc));
        eax = strlen (eax);
        ebx = eax;
        eax = *((ebp + 0x10));
        strlen (eax);
        eax = ebx + eax;
        if (eax <= 0x41) {
            ebx = 0x8059978;
        } else {
            ebx = "\n     ";
        }
        eax = *((ebp + 0xc));
        eax = strcmp (eax, 0x805996d);
        if (eax != 0) {
            eax = *((ebp + 0xc));
        } else {
            eax = "<stdin>";
        }
        *((esp + 0xc)) = esi;
        *((esp + 8)) = ebx;
        *((esp + 4)) = eax;
        console_printf ("Encoding %s%s to %s\n");
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_out_samplerate ();
        *((ebp - 0x20)) = eax;
        *(fp_stack--) = *((ebp - 0x20));
        *(fp_stack--) = *(0x8059af8);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((esp + 4)) = fp_stack[0];
        fp_stack--;
        console_printf ("Encoding as %g kHz ");
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_VBR ();
        if (eax != 2) {
            if (eax <= 2) {
                if (eax != 1) {
                } else {
                }
                if (eax == 3) {
                    goto label_0;
                }
                if (eax == 4) {
                    goto label_1;
                }
            } else {
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = lame_get_quality ();
                edi = eax;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_get_VBR_quality ();
                *((ebp - 0x60)) = fp_stack[0];
                fp_stack--;
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = lame_get_out_samplerate ();
                if (eax <= 0x3e7f) {
                    esi = 0x80599b1;
                } else {
                    esi = 0x8059978;
                }
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = lame_get_version ();
                edx = 2;
                ecx = 2;
                ecx -= eax;
                *((ebp - 0x54)) = ecx;
                eax = *((ebp + 8));
                *(esp) = eax;
                eax = lame_get_force_ms ();
                ebx = eax;
                eax = *((ebp + 8));
                *(esp) = eax;
                lame_get_mode ();
                edx = ebx*4;
                eax = edx + eax;
                eax = *((eax*4 + 0x805b2c0));
                *((esp + 0x18)) = edi;
                *(fp_stack--) = *((ebp - 0x60));
                *((esp + 0x10)) = fp_stack[0];
                fp_stack--;
                *((esp + 0xc)) = esi;
                edx = *((ebp - 0x54));
                *((esp + 8)) = edx;
                *((esp + 4)) = eax;
                console_printf ("%s MPEG-%u%s Layer III VBR(q=%g) qval=%i\n");
                goto label_2;
            }
label_1:
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_get_VBR_quality ();
            *((ebp - 0x50)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_out_samplerate ();
            if (eax <= 0x3e7f) {
                edi = 0x80599b1;
            } else {
                edi = 0x8059978;
            }
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_version ();
            edx = 2;
            esi = 2;
            esi -= eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_force_ms ();
            ebx = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_get_mode ();
            edx = ebx*4;
            eax = edx + eax;
            eax = *((eax*4 + 0x805b2c0));
            *(fp_stack--) = *((ebp - 0x50));
            *((esp + 0x10)) = fp_stack[0];
            fp_stack--;
            *((esp + 0xc)) = edi;
            *((esp + 8)) = esi;
            *((esp + 4)) = eax;
            console_printf ("%s MPEG-%u%s Layer III VBR(q=%g)\n");
            goto label_2;
label_0:
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_quality ();
            ebx = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_VBR_mean_bitrate_kbps ();
            *((ebp - 0x44)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_get_compression_ratio ();
            *(fp_stack--) = *(0x8059b00);
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            *(fp_stack--) = *(0x8059af0);
            fp_stack[0] += fp_stack[1];
            fp_stack++;
            eax = *((ebp - 0x1a));
            ah = 0xc;
            *((ebp - 0x1c)) = ax;
            *((ebp - 0x20)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp - 0x20));
            *((ebp - 0x20)) = eax;
            *(fp_stack--) = *((ebp - 0x20));
            *(fp_stack--) = *(0x8059b08);
            fp_stack[0] *= fp_stack[1];
            fp_stack++;
            *((ebp - 0x40)) = fp_stack[0];
            fp_stack--;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_out_samplerate ();
            if (eax <= 0x3e7f) {
                edi = 0x80599b1;
            } else {
                edi = 0x8059978;
            }
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_version ();
            edx = 2;
            ecx = 2;
            ecx -= eax;
            *((ebp - 0x38)) = ecx;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = lame_get_force_ms ();
            esi = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            lame_get_mode ();
            edx = esi*4;
            eax = edx + eax;
            eax = *((eax*4 + 0x805b2c0));
            *((esp + 0x1c)) = ebx;
            edx = *((ebp - 0x44));
            *((esp + 0x18)) = edx;
            *(fp_stack--) = *((ebp - 0x40));
            *((esp + 0x10)) = fp_stack[0];
            fp_stack--;
            *((esp + 0xc)) = edi;
            edx = *((ebp - 0x38));
            *((esp + 8)) = edx;
            *((esp + 4)) = eax;
            console_printf ("%s MPEG-%u%s Layer III (%gx) average %d kbps qval=%i\n");
            goto label_2;
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_quality ();
        ebx = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_brate ();
        *((ebp - 0x34)) = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_get_compression_ratio ();
        *(fp_stack--) = *(0x8059b00);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *(fp_stack--) = *(0x8059af0);
        fp_stack[0] += fp_stack[1];
        fp_stack++;
        eax = *((ebp - 0x1a));
        ah = 0xc;
        *((ebp - 0x1c)) = ax;
        *((ebp - 0x20)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp - 0x20));
        *((ebp - 0x20)) = eax;
        *(fp_stack--) = *((ebp - 0x20));
        *(fp_stack--) = *(0x8059b08);
        fp_stack[0] *= fp_stack[1];
        fp_stack++;
        *((ebp - 0x30)) = fp_stack[0];
        fp_stack--;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_out_samplerate ();
        if (eax <= 0x3e7f) {
            edi = 0x80599b1;
        } else {
            edi = 0x8059978;
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_version ();
        edx = 2;
        ecx = 2;
        ecx -= eax;
        *((ebp - 0x24)) = ecx;
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = lame_get_force_ms ();
        esi = eax;
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_get_mode ();
        edx = esi*4;
        eax = edx + eax;
        eax = *((eax*4 + 0x805b2c0));
        *((esp + 0x1c)) = ebx;
        edx = *((ebp - 0x34));
        *((esp + 0x18)) = edx;
        *(fp_stack--) = *((ebp - 0x30));
        *((esp + 0x10)) = fp_stack[0];
        fp_stack--;
        *((esp + 0xc)) = edi;
        edx = *((ebp - 0x24));
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        console_printf ("%s MPEG-%u%s Layer III (%gx) %3d kbps qval=%i\n");
label_2:
        eax = silent;
        if (eax >= 0xfffffff7) {
            goto label_3;
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        lame_print_internals ();
    }
label_3:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x80538f2 */
#include <stdint.h>
 
int32_t dbg_decoder_progress (void) {
    int32_t curr;
    mp3data_struct const * const mp3data;
    int32_t var_4h;
    int32_t var_8h;
    int32_t var_ch;
    /* void decoder_progress(mp3data_struct const * const mp3data); */
    eax = *((ebp + 8));
    ecx = *((eax + 0xc));
    eax = *((ebp + 8));
    edx = *((eax + 0x20));
    eax = *((ebp + 8));
    eax = *((eax + 0x24));
    *((esp + 0xc)) = ecx;
    *((esp + 8)) = edx;
    *((esp + 4)) = eax;
    console_printf ("\rFrame#%6i/%-6i %3i kbps");
    eax = *((ebp + 8));
    eax = *((eax + 0x10));
    if (eax == 1) {
        eax = *((ebp + 8));
        eax = *((eax + 0x14));
        *((ebp - 0xc)) = eax;
        eax = *((ebp - 0xc));
        eax &= 1;
        if (al != 0) {
            eax = .comment;
            eax &= 1;
            if (al != 0) {
                eax = 0x49;
            } else {
                eax = 0x69;
            }
            edx = 0x69;
        } else {
            eax = .comment;
            eax &= 1;
            if (al != 0) {
                eax = 0x69;
            } else {
                eax = 0x20;
            }
            edx = 0x20;
        }
        eax = *((ebp - 0xc));
        eax &= 2;
        if (eax != 0) {
            eax = .comment;
            eax &= 2;
            if (eax != 0) {
                eax = " MS ";
            } else {
                eax = "LMSR";
            }
        } else {
            eax = .comment;
            eax &= 2;
            if (eax != 0) {
                eax = "LMSR";
            } else {
                eax = "L  R";
            }
        }
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        console_printf ("  %s  %c");
        eax = *((ebp - 0xc));
        *(0x805b400) = eax;
    } else {
        console_printf ("         ");
        *(0x805b400) = 0;
    }
    console_printf ("        \b\b\b\b\b\b\b\b");
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804e961 */
#include <stdint.h>
 
int32_t dbg_lame_decode_initfile (uint32_t arg_8h, size_t arg_ch, size_t arg_10h, FILE * arg_14h) {
    int * enc_padding;
    int * enc_delay;
    mp3data_struct * mp3data;
    FILE * fd;
    short int[1152] pcm_r;
    short int[1152] pcm_l;
    uint32_t i;
    int32_t freeformat;
    int32_t aid_header;
    size_t len;
    int32_t ret;
    unsigned char[100] buf;
    int32_t var_6fh;
    int32_t var_6eh;
    int32_t var_6dh;
    int32_t var_6ch;
    int32_t var_6bh;
    int32_t canary;
    size_t size;
    size_t nmemb;
    FILE * stream;
    int32_t var_10h;
    void * var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    /* int lame_decode_initfile(FILE * fd,mp3data_struct * mp3data,int * enc_delay,int * enc_padding); */
label_1:
    eax = *((ebp + 8));
    *((ebp - 0x128c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1290)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x1294)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x1298)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((ebp - 0x80)) = 0;
    eax = *((ebp - 0x1290));
    memset (eax, 0, 0x28);
    eax = .comment;
    if (eax != 0) {
        eax = .comment;
        *(esp) = eax;
        hip_decode_exit ();
    }
    eax = hip_decode_init ();
    *(0x805b3e4) = eax;
    *((ebp - 0x78)) = 4;
    eax = *((ebp - 0x128c));
    eax = *((ebp - 0x78));
    eax = ebp - 0x70;
    eax = fread (eax, 1, eax);
    if (eax != *((ebp - 0x78))) {
        eax = 0xffffffff;
        goto label_2;
    }
    eax = *((ebp - 0x70));
    if (al == 0x49) {
        eax = *((ebp - 0x6f));
        if (al != 0x44) {
            goto label_3;
        }
        eax = *((ebp - 0x6e));
        if (al != 0x33) {
            goto label_3;
        }
        eax = silent;
        if (eax <= 9) {
            console_printf ("ID3v2 found. Be aware that the ID3 tag is currently lost when transcoding.\n");
        }
        *((ebp - 0x78)) = 6;
        eax = *((ebp - 0x128c));
        eax = *((ebp - 0x78));
        eax = ebp - 0x70;
        eax = fread (eax, 1, eax);
        if (eax != *((ebp - 0x78))) {
            eax = 0xffffffff;
            goto label_2;
        }
        eax = *((ebp - 0x6e));
        eax &= 0x7f;
        *((ebp - 0x6e)) = al;
        eax = *((ebp - 0x6d));
        eax &= 0x7f;
        *((ebp - 0x6d)) = al;
        eax = *((ebp - 0x6c));
        eax &= 0x7f;
        *((ebp - 0x6c)) = al;
        eax = *((ebp - 0x6b));
        eax &= 0x7f;
        *((ebp - 0x6b)) = al;
        eax = *((ebp - 0x6e));
        eax = (int32_t) al;
        edx = eax;
        edx <<= 7;
        eax = *((ebp - 0x6d));
        eax = (int32_t) al;
        eax = edx + eax;
        edx = eax;
        edx <<= 7;
        eax = *((ebp - 0x6c));
        eax = (int32_t) al;
        eax = edx + eax;
        edx = eax;
        edx <<= 7;
        eax = *((ebp - 0x6b));
        eax = (int32_t) al;
        eax = edx + eax;
        *((ebp - 0x78)) = eax;
        eax = *((ebp - 0x78));
        eax = *((ebp - 0x128c));
        fskip (eax, eax, 1);
        *((ebp - 0x78)) = 4;
        eax = *((ebp - 0x128c));
        eax = *((ebp - 0x78));
        eax = ebp - 0x70;
        eax = fread (eax, 1, eax);
        if (eax == *((ebp - 0x78))) {
            goto label_3;
        }
        eax = 0xffffffff;
        goto label_2;
    }
label_3:
    eax = ebp - 0x70;
    *(esp) = eax;
    eax = check_aid ();
    *((ebp - 0x7c)) = eax;
    if (*((ebp - 0x7c)) != 0) {
        eax = *((ebp - 0x128c));
        eax = ebp - 0x70;
        eax = fread (eax, 1, 2);
        if (eax != 2) {
            eax = 0xffffffff;
            goto label_2;
        }
        eax = *((ebp - 0x70));
        eax = (int32_t) al;
        edx = *((ebp - 0x6f));
        edx = (int32_t) dl;
        edx <<= 8;
        eax += edx;
        *((ebp - 0x7c)) = eax;
        eax = silent;
        if (eax <= 9) {
            eax = *((ebp - 0x7c));
            *((esp + 4)) = eax;
            console_printf ("Album ID found.  length=%i \n");
        }
        eax = *((ebp - 0x7c));
        eax -= 6;
        eax = *((ebp - 0x128c));
        fskip (eax, eax, 1);
        eax = *((ebp - 0x128c));
        eax = *((ebp - 0x78));
        eax = ebp - 0x70;
        eax = fread (eax, 1, eax);
        if (eax == *((ebp - 0x78))) {
            goto label_4;
        }
        eax = 0xffffffff;
        goto label_2;
    }
label_4:
    *((ebp - 0x78)) = 4;
    goto label_5;
label_0:
    *((ebp - 0x84)) = 0;
    while (eax > *((ebp - 0x84))) {
        eax = *((ebp - 0x84));
        edx = *((ebp - 0x84));
        edx++;
        edx = *((ebp + edx - 0x70));
        *((ebp + eax - 0x70)) = dl;
        *((ebp - 0x84))++;
        eax = *((ebp - 0x78));
        eax--;
    }
    eax = *((ebp - 0x78));
    edx = eax - 1;
    eax = ebp - 0x70;
    eax += edx;
    edx = *((ebp - 0x128c));
    eax = fread (edx, 1, 1);
    if (eax != 1) {
        eax = 0xffffffff;
        goto label_2;
    }
label_5:
    eax = ebp - 0x70;
    *(esp) = eax;
    eax = is_syncword_mp123 ();
    if (eax == 0) {
        goto label_0;
    }
    eax = *((ebp - 0x6e));
    eax = (int32_t) al;
    eax &= 0xf0;
    if (eax == 0) {
        eax = silent;
        if (eax <= 9) {
            console_printf ("Input file is freeformat.\n");
        }
        *((ebp - 0x80)) = 1;
    }
    eax = .comment;
    edx = *((ebp - 0x1298));
    *((esp + 0x1c)) = edx;
    edx = *((ebp - 0x1294));
    *((esp + 0x18)) = edx;
    edx = *((ebp - 0x1290));
    *((esp + 0x14)) = edx;
    edx = ebp - 0x1284;
    *((esp + 0x10)) = edx;
    edx = ebp - 0x984;
    *((esp + 0xc)) = edx;
    edx = *((ebp - 0x78));
    *((esp + 8)) = edx;
    edx = ebp - 0x70;
    *((esp + 4)) = edx;
    *(esp) = eax;
    eax = hip_decode1_headersB ();
    *((ebp - 0x74)) = eax;
    if (*((ebp - 0x74)) != -1) {
        goto label_6;
    }
    eax = 0xffffffff;
    goto label_2;
    do {
        eax = *((ebp - 0x128c));
        eax = ebp - 0x70;
        eax = fread (eax, 1, 0x64);
        *((ebp - 0x78)) = eax;
        if (*((ebp - 0x78)) != 0x64) {
            eax = 0xffffffff;
            goto label_2;
        }
        eax = .comment;
        edx = *((ebp - 0x1298));
        *((esp + 0x1c)) = edx;
        edx = *((ebp - 0x1294));
        *((esp + 0x18)) = edx;
        edx = *((ebp - 0x1290));
        *((esp + 0x14)) = edx;
        edx = ebp - 0x1284;
        *((esp + 0x10)) = edx;
        edx = ebp - 0x984;
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x78));
        *((esp + 8)) = edx;
        edx = ebp - 0x70;
        *((esp + 4)) = edx;
        *(esp) = eax;
        eax = hip_decode1_headersB ();
        *((ebp - 0x74)) = eax;
        if (*((ebp - 0x74)) == -1) {
            eax = 0xffffffff;
            goto label_2;
label_6:
        }
        eax = *((ebp - 0x1290));
        eax = *(eax);
    } while (eax == 0);
    eax = *((ebp - 0x1290));
    eax = *((eax + 0xc));
    if (eax == 0) {
        if (*((ebp - 0x80)) == 0) {
            eax = silent;
            if (eax <= 9) {
                error_printf ("fail to sync...\n");
            }
            eax = *((ebp - 0x1298));
            eax = *((ebp - 0x1294));
            eax = *((ebp - 0x1290));
            eax = *((ebp - 0x128c));
            lame_decode_initfile (eax, eax, eax);
            goto label_1;
        }
    } else {
        eax = *((ebp - 0x1290));
        eax = *((eax + 0x20));
        if (eax <= 0) {
            eax = *((ebp - 0x1290));
            *((eax + 0x1c)) = 0xffffffff;
        }
        eax = 0;
    }
label_2:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804bfa5 */
#include <stdint.h>
 
int32_t dbg_main (char ** envp, size_t n, int32_t arg_14h, int32_t arg_18h, uint32_t canary) {
    int32_t argc;
    char * src;
    char ** argv;
    char[200][4097] nogap_inPath_;
    char *[200] nogap_inPath;
    int32_t use_flush_nogap;
    FILE * outf;
    int32_t i;
    int32_t max_nogap;
    int32_t nogapout;
    int32_t enc_padding;
    int32_t enc_delay;
    lame_global_flags * gf;
    int32_t ret;
    char[4097] inPath;
    char[4097] nogapdir;
    char[4097] outPath;
    /* int main(int argc,char ** argv); */
    eax = *((ebp + 0xc));
    *((esp + 0x2c)) = eax;
    eax = *(gs:0x14);
    *((esp + 0xcb44c)) = eax;
    eax = 0;
    *((esp + 0xc843c)) = 0xffffffff;
    *((esp + 0xc8438)) = 0xffffffff;
    *((esp + 0xc8434)) = 0;
    *((esp + 0xc8430)) = 0xc8;
    eax = esp + 0x3c;
    memset (eax, 0, 0xc80c8);
    *((esp + 0xc842c)) = 0;
    while (*((esp + 0xc842c)) <= 0xc7) {
        ecx = *((esp + 0xc842c));
        ebx = esp + 0x3c;
        edx = *((esp + 0xc842c));
        eax = *((esp + 0xc842c));
        eax <<= 0xc;
        eax += edx;
        eax = ebx + eax;
        *((esp + ecx*4 + 0xc8104)) = eax;
    }
    eax = esp + 0xc8449;
    memset (eax, 0, 0x1001);
    frontend_open_console ();
    *(obj.input_format) = 0;
    eax = lame_init ();
    *((esp + 0xc8440)) = eax;
    if (*((esp + 0xc8440)) == 0) {
        error_printf ("fatal error during initialization\n");
        frontend_close_console ();
        eax = 1;
        goto label_0;
    }
    *((esp + 4)) = dbg.frontend_errorf;
    eax = *((esp + 0xc8440));
    *(esp) = eax;
    lame_set_errorf ();
    *((esp + 4)) = 0x804cac7;
    eax = *((esp + 0xc8440));
    *(esp) = eax;
    lame_set_debugf ();
    *((esp + 4)) = 0x804caea;
    eax = *((esp + 0xc8440));
    *(esp) = eax;
    lame_set_msgf ();
    if (*((ebp + 8)) <= 1) {
        eax = *((esp + 0x2c));
        edx = *(eax);
        eax = stderr;
        *((esp + 4)) = edx;
        *(esp) = eax;
        usage ();
        eax = *((esp + 0xc8440));
        *(esp) = eax;
        lame_close ();
        frontend_close_console ();
        eax = 1;
        goto label_0;
    }
    eax = getenv ("LAMEOPT");
    edx = esp + 0xca44b;
    *((esp + 0xc)) = edx;
    edx = esp + 0xc8449;
    *((esp + 8)) = edx;
    *((esp + 4)) = eax;
    eax = *((esp + 0xc8440));
    parse_args_from_string (eax);
    eax = esp + 0xc8430;
    *((esp + 0x18)) = eax;
    eax = esp + 0xc8104;
    *((esp + 0x14)) = eax;
    eax = esp + 0xca44b;
    *((esp + 0x10)) = eax;
    eax = esp + 0xc8449;
    *((esp + 0xc)) = eax;
    eax = *((esp + 0x2c));
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    eax = *((esp + 0xc8440));
    *(esp) = eax;
    eax = parse_args ();
    *((esp + 0xc8444)) = eax;
    if (*((esp + 0xc8444)) < 0) {
        eax = *((esp + 0xc8440));
        *(esp) = eax;
        lame_close ();
        frontend_close_console ();
        al = (*((esp + 0xc8444)) != 0xfffffffe) ? 1 : 0;
        eax = (int32_t) al;
        goto label_0;
    }
    *(fp_stack--) = *(obj.update_interval);
    *(fp_stack--) = 0.0;
    fp_stack--;
    fp_stack++;
    al = (fp_stack[0] > fp_stack[1]) ? 1 : 0;
    if (al != 0) {
        eax = 0x40000000;
        *(obj.update_interval) = eax;
    }
    eax = *((esp + 0xca44b));
    if (al != 0) {
        eax = *((esp + 0xc8430));
        if (eax <= 0) {
            goto label_1;
        }
        eax = esp + 0xca44b;
        eax = esp + 0xc944a;
        strncpy (eax, eax, 0x1001);
        *((esp + 0xc8434)) = 1;
    }
label_1:
    eax = *((esp + 0xc8430));
    if (eax > 0) {
        eax = *((esp + 0xc8104));
        edx = esp + 0xc944a;
        *((esp + 0xc)) = edx;
        edx = esp + 0xca44b;
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        eax = *((esp + 0xc8434));
        *(esp) = eax;
        parse_nogap_filenames ();
        eax = *((esp + 0xc8104));
        edx = esp + 0xc8438;
        *((esp + 0x10)) = edx;
        edx = esp + 0xc843c;
        *((esp + 0xc)) = edx;
        edx = esp + 0xca44b;
        *((esp + 8)) = edx;
        *((esp + 4)) = eax;
        eax = *((esp + 0xc8440));
        *(esp) = eax;
        eax = init_files ();
        *((esp + 0xc8428)) = eax;
    } else {
        eax = esp + 0xc8438;
        *((esp + 0x10)) = eax;
        eax = esp + 0xc843c;
        *((esp + 0xc)) = eax;
        eax = esp + 0xca44b;
        *((esp + 8)) = eax;
        eax = esp + 0xc8449;
        *((esp + 4)) = eax;
        eax = *((esp + 0xc8440));
        *(esp) = eax;
        eax = init_files ();
        *((esp + 0xc8428)) = eax;
    }
    if (*((esp + 0xc8428)) == 0) {
        eax = *((esp + 0xc8440));
        *(esp) = eax;
        lame_close ();
        frontend_close_console ();
        eax = 0xffffffff;
        goto label_0;
    }
    *((esp + 4)) = 0;
    eax = *((esp + 0xc8440));
    *(esp) = eax;
    lame_set_write_id3tag_automatic ();
    eax = *((esp + 0xc8440));
    *(esp) = eax;
    eax = lame_init_params ();
    *((esp + 0xc842c)) = eax;
    if (*((esp + 0xc842c)) < 0) {
        if (*((esp + 0xc842c)) == -1) {
            eax = stderr;
            *(esp) = eax;
            display_bitrates ();
        }
        error_printf ("fatal error during initialization\n");
        eax = *((esp + 0xc8440));
        *(esp) = eax;
        lame_close ();
        frontend_close_console ();
        eax = *((esp + 0xc842c));
        goto label_0;
    }
    eax = silent;
    if (eax > 0) {
        *(obj.brhist_1) = 0;
    }
    eax = *((esp + 0xc8440));
    *(esp) = eax;
    eax = lame_get_decode_only ();
    if (eax != 0) {
        eax = mp3_delay_set;
        if (eax != 0) {
            eax = mp3_delay;
            edx = esp + 0xc8438;
            *((esp + 0x18)) = edx;
            edx = esp + 0xc843c;
            *((esp + 0x14)) = edx;
            edx = esp + 0xca44b;
            *((esp + 0x10)) = edx;
            edx = esp + 0xc8449;
            *((esp + 0xc)) = edx;
            *((esp + 8)) = eax;
            eax = *((esp + 0xc8428));
            *((esp + 4)) = eax;
            eax = *((esp + 0xc8440));
            *(esp) = eax;
            lame_decoder ();
            goto label_2;
        }
        eax = esp + 0xc8438;
        *((esp + 0x18)) = eax;
        eax = esp + 0xc843c;
        *((esp + 0x14)) = eax;
        eax = esp + 0xca44b;
        *((esp + 0x10)) = eax;
        eax = esp + 0xc8449;
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0;
        eax = *((esp + 0xc8428));
        *((esp + 4)) = eax;
        eax = *((esp + 0xc8440));
        *(esp) = eax;
        lame_decoder ();
        goto label_2;
    }
    eax = *((esp + 0xc8430));
    if (eax <= 0) {
        goto label_3;
    }
    *((esp + 0xc842c)) = 0;
    while (*((esp + 0xc842c)) < eax) {
        eax = *((esp + 0xc8430));
        eax--;
        al = (eax != *((esp + 0xc842c))) ? 1 : 0;
        eax = (int32_t) al;
        *((esp + 0xc8424)) = eax;
        if (*((esp + 0xc842c)) > 0) {
            eax = *((esp + 0xc842c));
            eax = *((esp + eax*4 + 0xc8104));
            edx = esp + 0xc944a;
            *((esp + 0xc)) = edx;
            edx = esp + 0xca44b;
            *((esp + 8)) = edx;
            *((esp + 4)) = eax;
            eax = *((esp + 0xc8434));
            *(esp) = eax;
            parse_nogap_filenames ();
            eax = *((esp + 0xc842c));
            eax = *((esp + eax*4 + 0xc8104));
            edx = esp + 0xc8438;
            *((esp + 0x10)) = edx;
            edx = esp + 0xc843c;
            *((esp + 0xc)) = edx;
            edx = esp + 0xca44b;
            *((esp + 8)) = edx;
            *((esp + 4)) = eax;
            eax = *((esp + 0xc8440));
            *(esp) = eax;
            eax = init_files ();
            *((esp + 0xc8428)) = eax;
            eax = *((esp + 0xc8440));
            *(esp) = eax;
            lame_init_bitstream ();
        }
        eax = *((esp + 0xc8440));
        *(esp) = eax;
        brhist_init_package ();
        eax = *((esp + 0xc8430));
        *((esp + 4)) = eax;
        eax = *((esp + 0xc8440));
        *(esp) = eax;
        lame_set_nogap_total ();
        eax = *((esp + 0xc842c));
        *((esp + 4)) = eax;
        eax = *((esp + 0xc8440));
        *(esp) = eax;
        lame_set_nogap_currentindex ();
        eax = *((esp + 0xc842c));
        eax = *((esp + eax*4 + 0xc8104));
        edx = esp + 0xca44b;
        eax = *((esp + 0xc8424));
        eax = *((esp + 0xc8428));
        eax = *((esp + 0xc8440));
        eax = lame_encoder (edx, eax, eax);
        *((esp + 0xc8444)) = eax;
        eax = *((esp + 0xc8428));
        fclose (eax);
        close_infile ();
        eax = *((esp + 0xc8430));
    }
    goto label_2;
label_3:
    eax = *((esp + 0xc8440));
    *(esp) = eax;
    brhist_init_package ();
    eax = esp + 0xca44b;
    eax = esp + 0xc8449;
    eax = *((esp + 0xc8428));
    eax = *((esp + 0xc8440));
    eax = lame_encoder (eax, eax, 0);
    *((esp + 0xc8444)) = eax;
    eax = *((esp + 0xc8428));
    fclose (eax);
    close_infile ();
label_2:
    eax = *((esp + 0xc8440));
    *(esp) = eax;
    lame_close ();
    frontend_close_console ();
    eax = *((esp + 0xc8444));
label_0:
    edx = *((esp + 0xcb44c));
    edx ^= *(gs:0x14);
    if (*((esp + 0xc842c)) != eax) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x8052a6c */
#include <stdint.h>
 
int32_t dbg_Read24BitsHighLow (void) {
    int32_t result;
    int32_t third;
    int32_t second;
    int32_t first;
    FILE * fp;
    /* int Read24BitsHighLow(FILE * fp); */
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = IO_getc ();
    eax &= 0xff;
    *((ebp - 0xc)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = IO_getc ();
    eax &= 0xff;
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = IO_getc ();
    eax &= 0xff;
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0xc));
    edx = *((ebp - 0xc));
    edx <<= 0x10;
    eax = *((ebp - 0x10));
    eax <<= 8;
    eax = edx + eax;
    eax += *((ebp - 0x14));
    *((ebp - 0x18)) = eax;
    eax = *((ebp - 0x18));
    eax &= 0x800000;
    if (eax != 0) {
        *((ebp - 0x18)) -= 0x1000000;
    }
    eax = *((ebp - 0x18));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a04c */
#include <stdint.h>
 
void fileno (void) {
    fileno ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a05c */
#include <stdint.h>
 
void ldexp (void) {
    ldexp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a06c */
#include <stdint.h>
 
void lame_get_in_samplerate (void) {
    lame_get_in_samplerate ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a07c */
#include <stdint.h>
 
void fputs (void) {
    fputs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a08c */
#include <stdint.h>
 
void get_lame_version (void) {
    get_lame_version ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a09c */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a0ac */
#include <stdint.h>
 
void popen (void) {
    popen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a0bc */
#include <stdint.h>
 
void lame_set_num_channels (void) {
    lame_set_num_channels ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a0cc */
#include <stdint.h>
 
void id3tag_v1_only (void) {
    id3tag_v1_only ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a0dc */
#include <stdint.h>
 
void id3tag_v2_only (void) {
    id3tag_v2_only ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a0ec */
#include <stdint.h>
 
void id3tag_set_albumart (void) {
    id3tag_set_albumart ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a10c */
#include <stdint.h>
 
void lame_stereo_mode_hist (void) {
    lame_stereo_mode_hist ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a11c */
#include <stdint.h>
 
void lame_get_RadioGain (void) {
    lame_get_RadioGain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a12c */
#include <stdint.h>
 
void lame_set_scale_right (void) {
    lame_set_scale_right ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a13c */
#include <stdint.h>
 
void getchar (void) {
    getchar ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a14c */
#include <stdint.h>
 
void lame_set_decode_only (void) {
    lame_set_decode_only ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a15c */
#include <stdint.h>
 
void lame_bitrate_hist (void) {
    lame_bitrate_hist ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a16c */
#include <stdint.h>
 
void lame_get_noclipGainChange (void) {
    lame_get_noclipGainChange ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a17c */
#include <stdint.h>
 
void id3tag_init (void) {
    id3tag_init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a19c */
#include <stdint.h>
 
void isoc99_sscanf (void) {
    isoc99_sscanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a1bc */
#include <stdint.h>
 
void lame_get_id3v2_tag (void) {
    lame_get_id3v2_tag ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a1cc */
#include <stdint.h>
 
void get_lame_os_bitness (void) {
    get_lame_os_bitness ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a1dc */
#include <stdint.h>
 
void getenv (void) {
    getenv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a1ec */
#include <stdint.h>
 
void strncpy (void) {
    strncpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a1fc */
#include <stdint.h>
 
void lame_set_error_protection (void) {
    lame_set_error_protection ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a20c */
#include <stdint.h>
 
void lame_get_num_samples (void) {
    lame_get_num_samples ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a21c */
#include <stdint.h>
 
void lame_set_debugf (void) {
    lame_set_debugf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a22c */
#include <stdint.h>
 
void lame_get_noclipScale (void) {
    lame_get_noclipScale ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a23c */
#include <stdint.h>
 
void lame_get_compression_ratio (void) {
    lame_get_compression_ratio ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a24c */
#include <stdint.h>
 
void lame_get_VBR_max_bitrate_kbps (void) {
    lame_get_VBR_max_bitrate_kbps ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a26c */
#include <stdint.h>
 
void fopen64 (void) {
    fopen64 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a27c */
#include <stdint.h>
 
void lame_encode_buffer_int (void) {
    lame_encode_buffer_int ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a28c */
#include <stdint.h>
 
void lame_get_VBR_min_bitrate_kbps (void) {
    lame_get_VBR_min_bitrate_kbps ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a29c */
#include <stdint.h>
 
void get_lame_url (void) {
    get_lame_url ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a2ac */
#include <stdint.h>
 
void lame_set_write_id3tag_automatic (void) {
    lame_set_write_id3tag_automatic ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a2cc */
#include <stdint.h>
 
void id3tag_set_comment (void) {
    id3tag_set_comment ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a2dc */
#include <stdint.h>
 
void lame_set_decode_on_the_fly (void) {
    lame_set_decode_on_the_fly ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a2fc */
#include <stdint.h>
 
void lame_set_VBR_hard_min (void) {
    lame_set_VBR_hard_min ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a30c */
#include <stdint.h>
 
void lame_get_decode_only (void) {
    lame_get_decode_only ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a31c */
#include <stdint.h>
 
void lame_get_lametag_frame (void) {
    lame_get_lametag_frame ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a32c */
#include <stdint.h>
 
void lame_set_strict_ISO (void) {
    lame_set_strict_ISO ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a33c */
#include <stdint.h>
 
void lame_set_useTemporal (void) {
    lame_set_useTemporal ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a34c */
#include <stdint.h>
 
void lame_set_force_ms (void) {
    lame_set_force_ms ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a35c */
#include <stdint.h>
 
void lame_set_compression_ratio (void) {
    lame_set_compression_ratio ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a38c */
#include <stdint.h>
 
void lame_set_VBR_quality (void) {
    lame_set_VBR_quality ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a39c */
#include <stdint.h>
 
void lame_set_disable_reservoir (void) {
    lame_set_disable_reservoir ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a3ac */
#include <stdint.h>
 
void hip_decode1_headers (void) {
    hip_decode1_headers ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a3bc */
#include <stdint.h>
 
void lame_close (void) {
    lame_close ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a3cc */
#include <stdint.h>
 
void lame_set_nogap_total (void) {
    lame_set_nogap_total ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a3dc */
#include <stdint.h>
 
void tgetent (void) {
    tgetent ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a3fc */
#include <stdint.h>
 
void lame_get_encoder_delay (void) {
    lame_get_encoder_delay ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a40c */
#include <stdint.h>
 
void fseek (void) {
    fseek ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a41c */
#include <stdint.h>
 
void lame_set_VBR_min_bitrate_kbps (void) {
    lame_set_VBR_min_bitrate_kbps ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a42c */
#include <stdint.h>
 
void lame_set_free_format (void) {
    lame_set_free_format ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a44c */
#include <stdint.h>
 
void lame_set_errorf (void) {
    lame_set_errorf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a45c */
#include <stdint.h>
 
void lame_init_bitstream (void) {
    lame_init_bitstream ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a46c */
#include <stdint.h>
 
void lame_set_exp_nspsytune (void) {
    lame_set_exp_nspsytune ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a49c */
#include <stdint.h>
 
void lame_get_decode_on_the_fly (void) {
    lame_get_decode_on_the_fly ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a4ac */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a4bc */
#include <stdint.h>
 
void lame_set_VBR (void) {
    lame_set_VBR ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a4cc */
#include <stdint.h>
 
void lame_print_config (void) {
    lame_print_config ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a4ec */
#include <stdint.h>
 
void lame_bitrate_stereo_mode_hist (void) {
    lame_bitrate_stereo_mode_hist ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a4fc */
#include <stdint.h>
 
void lame_set_nogap_currentindex (void) {
    lame_set_nogap_currentindex ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a50c */
#include <stdint.h>
 
void lame_set_msfix (void) {
    lame_set_msfix ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a51c */
#include <stdint.h>
 
void lame_get_VBR (void) {
    lame_get_VBR ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a52c */
#include <stdint.h>
 
void lame_set_athaa_sensitivity (void) {
    lame_set_athaa_sensitivity ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a53c */
#include <stdint.h>
 
void feof (void) {
    feof ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a54c */
#include <stdint.h>
 
void strcpy (void) {
    strcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a55c */
#include <stdint.h>
 
void ftell (void) {
    ftell ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a56c */
#include <stdint.h>
 
void lame_set_out_samplerate (void) {
    lame_set_out_samplerate ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a57c */
#include <stdint.h>
 
void lame_set_asm_optimizations (void) {
    lame_set_asm_optimizations ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a58c */
#include <stdint.h>
 
void lame_get_quality (void) {
    lame_get_quality ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a59c */
#include <stdint.h>
 
void id3tag_set_title (void) {
    id3tag_set_title ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a5ac */
#include <stdint.h>
 
void lame_block_type_hist (void) {
    lame_block_type_hist ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a5bc */
#include <stdint.h>
 
void lame_set_brate (void) {
    lame_set_brate ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a5cc */
#include <stdint.h>
 
void atoi (void) {
    atoi ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a5dc */
#include <stdint.h>
 
void lame_bitrate_kbps (void) {
    lame_bitrate_kbps ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a5ec */
#include <stdint.h>
 
void lame_set_findReplayGain (void) {
    lame_set_findReplayGain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a5fc */
#include <stdint.h>
 
void lame_get_framesize (void) {
    lame_get_framesize ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a60c */
#include <stdint.h>
 
void atof (void) {
    atof ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a61c */
#include <stdint.h>
 
void id3tag_set_artist (void) {
    id3tag_set_artist ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a62c */
#include <stdint.h>
 
void lame_encode_flush (void) {
    lame_encode_flush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a63c */
#include <stdint.h>
 
void lame_set_highpassfreq (void) {
    lame_set_highpassfreq ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a66c */
#include <stdint.h>
 
void lame_set_VBR_mean_bitrate_kbps (void) {
    lame_set_VBR_mean_bitrate_kbps ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a67c */
#include <stdint.h>
 
void lame_set_quality (void) {
    lame_set_quality ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a69c */
#include <stdint.h>
 
void strncat (void) {
    strncat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a6ac */
#include <stdint.h>
 
void lame_get_mode (void) {
    lame_get_mode ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a6bc */
#include <stdint.h>
 
void lame_set_msgf (void) {
    lame_set_msgf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a6cc */
#include <stdint.h>
 
void id3tag_set_year (void) {
    id3tag_set_year ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a6dc */
#include <stdint.h>
 
void id3tag_set_album (void) {
    id3tag_set_album ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a6ec */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a6fc */
#include <stdint.h>
 
void lame_get_totalframes (void) {
    lame_get_totalframes ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a71c */
#include <stdint.h>
 
void id3tag_set_pad (void) {
    id3tag_set_pad ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a72c */
#include <stdint.h>
 
void lame_encode_flush_nogap (void) {
    lame_encode_flush_nogap ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a74c */
#include <stdint.h>
 
void lame_set_VBR_max_bitrate_kbps (void) {
    lame_set_VBR_max_bitrate_kbps ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a75c */
#include <stdint.h>
 
void lame_get_num_channels (void) {
    lame_get_num_channels ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a76c */
#include <stdint.h>
 
void hip_decode_init (void) {
    hip_decode_init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a77c */
#include <stdint.h>
 
void lame_set_original (void) {
    lame_set_original ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a78c */
#include <stdint.h>
 
void id3tag_pad_v2 (void) {
    id3tag_pad_v2 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a79c */
#include <stdint.h>
 
void tgetnum (void) {
    tgetnum ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a7ac */
#include <stdint.h>
 
void lame_get_version (void) {
    lame_get_version ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a7bc */
#include <stdint.h>
 
void id3tag_add_v2 (void) {
    id3tag_add_v2 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a7cc */
#include <stdint.h>
 
void lame_init_params (void) {
    lame_init_params ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a7dc */
#include <stdint.h>
 
void lame_set_bWriteVbrTag (void) {
    lame_set_bWriteVbrTag ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a7ec */
#include <stdint.h>
 
void strcat (void) {
    strcat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a7fc */
#include <stdint.h>
 
void lame_get_id3v1_tag (void) {
    lame_get_id3v1_tag ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a80c */
#include <stdint.h>
 
void id3tag_genre_list (void) {
    id3tag_genre_list ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a81c */
#include <stdint.h>
 
void lame_get_exp_nspsytune (void) {
    lame_get_exp_nspsytune ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a82c */
#include <stdint.h>
 
void id3tag_set_track (void) {
    id3tag_set_track ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a84c */
#include <stdint.h>
 
void lame_get_frameNum (void) {
    lame_get_frameNum ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a85c */
#include <stdint.h>
 
void lame_set_interChRatio (void) {
    lame_set_interChRatio ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a86c */
#include <stdint.h>
 
void id3tag_set_genre (void) {
    id3tag_set_genre ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a87c */
#include <stdint.h>
 
void lame_set_num_samples (void) {
    lame_set_num_samples ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a88c */
#include <stdint.h>
 
void lame_set_preset (void) {
    lame_set_preset ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a89c */
#include <stdint.h>
 
void lame_get_free_format (void) {
    lame_get_free_format ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a8ac */
#include <stdint.h>
 
void lame_set_emphasis (void) {
    lame_set_emphasis ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a8bc */
#include <stdint.h>
 
void lame_set_mode (void) {
    lame_set_mode ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a8cc */
#include <stdint.h>
 
void hip_decode_exit (void) {
    hip_decode_exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a8dc */
#include <stdint.h>
 
void lame_print_internals (void) {
    lame_print_internals ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a8ec */
#include <stdint.h>
 
void vfprintf (void) {
    vfprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a8fc */
#include <stdint.h>
 
void lame_set_experimentalY (void) {
    lame_set_experimentalY ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a91c */
#include <stdint.h>
 
void lame_get_VBR_quality (void) {
    lame_get_VBR_quality ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a92c */
#include <stdint.h>
 
void lame_get_findReplayGain (void) {
    lame_get_findReplayGain ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a93c */
#include <stdint.h>
 
void lame_set_in_samplerate (void) {
    lame_set_in_samplerate ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a94c */
#include <stdint.h>
 
void fread (void) {
    fread ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a95c */
#include <stdint.h>
 
void lame_get_out_samplerate (void) {
    lame_get_out_samplerate ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a96c */
#include <stdint.h>
 
void lame_set_VBR_q (void) {
    lame_set_VBR_q ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a97c */
#include <stdint.h>
 
void tgetstr (void) {
    tgetstr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a98c */
#include <stdint.h>
 
void lame_get_force_ms (void) {
    lame_get_force_ms ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a99c */
#include <stdint.h>
 
void lame_set_lowpassfreq (void) {
    lame_set_lowpassfreq ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a9ac */
#include <stdint.h>
 
void lame_set_scale_left (void) {
    lame_set_scale_left ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a9bc */
#include <stdint.h>
 
void lame_get_brate (void) {
    lame_get_brate ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a9cc */
#include <stdint.h>
 
void lame_init (void) {
    lame_init ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a9dc */
#include <stdint.h>
 
void lame_set_highpasswidth (void) {
    lame_set_highpasswidth ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804a9fc */
#include <stdint.h>
 
void id3tag_set_fieldvalue (void) {
    id3tag_set_fieldvalue ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aa0c */
#include <stdint.h>
 
void lame_set_scale (void) {
    lame_set_scale ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aa1c */
#include <stdint.h>
 
void ferror (void) {
    ferror ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aa2c */
#include <stdint.h>
 
void hip_decode1_headersB (void) {
    hip_decode1_headersB ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aa3c */
#include <stdint.h>
 
void tolower (void) {
    tolower ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aa4c */
#include <stdint.h>
 
void lame_set_copyright (void) {
    lame_set_copyright ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aa5c */
#include <stdint.h>
 
void lame_set_lowpasswidth (void) {
    lame_set_lowpasswidth ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aa6c */
#include <stdint.h>
 
void strcmp (void) {
    strcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aa8c */
#include <stdint.h>
 
void id3tag_space_v1 (void) {
    id3tag_space_v1 ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aaac */
#include <stdint.h>
 
void pclose (void) {
    pclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/lame/ia32_elf_from_website/subject.exe @ 0x804aabc */
#include <stdint.h>
 
void lame_get_VBR_mean_bitrate_kbps (void) {
    lame_get_VBR_mean_bitrate_kbps ();
}
