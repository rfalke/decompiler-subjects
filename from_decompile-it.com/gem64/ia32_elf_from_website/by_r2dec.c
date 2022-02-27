/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048dd0 */
#include <stdint.h>
 
void entry0 (void) {
    /* [13] -r-x section size 47660 named .text */
    ebp = 0;
    ecx = esp;
    return libc_start_main (dbg.main, esi, ecx, sym.__libc_csu_init, sym.__libc_csu_fini, edx, esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048bb4 */
#include <stdint.h>
 
void libc_start_main (void) {
    libc_start_main ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049554 */
#include <stdint.h>
 
int32_t dbg_basename (void) {
    char * backup;
    char * element;
    char * copy;
    char * path;
    char * s2;
    /* char * basename(char * path); */
    eax = *((ebp + 8));
    eax = strdup (eax);
    *((ebp - 0xc)) = eax;
    *((ebp - 0x14)) = 0;
    eax = 0x8054a00;
    eax = *((ebp - 0xc));
    eax = strtok (eax, eax);
    *((ebp - 0x10)) = eax;
    if (*((ebp - 0x10)) == 0) {
        if (*((ebp - 0xc)) != 0) {
            eax = *((ebp - 0xc));
            free (eax);
        }
        eax = 0;
        goto label_0;
    }
    eax = *((ebp - 0x10));
    eax = strdup (eax);
    *((ebp - 0x14)) = eax;
    while (*((ebp - 0x10)) != 0) {
        eax = 0x8054a00;
        eax = strtok (0, eax);
        *((ebp - 0x10)) = eax;
        if (*((ebp - 0x14)) != 0) {
            if (*((ebp - 0x10)) == 0) {
                goto label_1;
            }
            eax = *((ebp - 0x14));
            free (eax);
        }
label_1:
        if (*((ebp - 0x10)) != 0) {
            eax = *((ebp - 0x10));
            eax = *(eax);
            if (al == 0) {
                goto label_2;
            }
            eax = *((ebp - 0x10));
            eax = strdup (eax);
            *((ebp - 0x14)) = eax;
        }
label_2:
    }
    if (*((ebp - 0xc)) != 0) {
        eax = *((ebp - 0xc));
        free (eax);
    }
    eax = *((ebp - 0x14));
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048e00 */
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
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048e60 */
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
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x80547d0 */
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
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804a146 */
#include <stdint.h>
 
int32_t dbg_is_text (void) {
    int32_t nonws;
    int32_t i;
    char * s;
    /* int is_text(char * s); */
    *((ebp - 0x10)) = 0;
    eax = *((ebp + 8));
    eax = strlen (eax);
    eax--;
    *((ebp - 0xc)) = eax;
    while (*((ebp - 0xc)) >= 0) {
        eax = *((ebp - 0xc));
        eax += *((ebp + 8));
        eax = *(eax);
        if (al != 0x20) {
            eax = *((ebp - 0xc));
            eax += *((ebp + 8));
            eax = *(eax);
            if (al == 9) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            eax += *((ebp + 8));
            eax = *(eax);
            if (al == 0xa) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            eax += *((ebp + 8));
            eax = *(eax);
            if (al == 0xc) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            eax += *((ebp + 8));
            eax = *(eax);
            if (al != 0xd) {
                goto label_1;
            }
        }
label_0:
        *((ebp - 0x10)) = 0;
        *((ebp - 0xc))--;
        goto label_2;
label_1:
        *((ebp - 0x10)) = 1;
        goto label_3;
label_2:
    }
label_3:
    eax = *((ebp - 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804d896 */
#include <stdint.h>
 
int32_t dbg_restore_entries_gisman (char * arg_8h, char * n, int32_t arg_10h, char * arg_14h, char * arg_18h, int32_t arg_1ch, char * arg_20h, int32_t arg_24h) {
    char * gisbase;
    int32_t n_files;
    int32_t num_restored;
    dirent * ep;
    DIR * dirp;
    FILE * f_out;
    FILE * f_in;
    FILE * f_gisman;
    int32_t line_no;
    int32_t i;
    int32_t n_lines;
    int32_t n_entries;
    char ** line;
    int32_t len;
    char[2048] pkg_short_name;
    char[2048] dir;
    char[2048] file;
    char[2048] menu;
    char[2048] str;
    int32_t canary;
    char * format;
    /* int restore_entries_gisman(char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x284c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "%s/etc/dm/menu.tcl";
    edx = *((ebp - 0x284c));
    eax = ebp - 0x180c;
    sprintf (eax, eax, edx);
    edx = 0x80553f1;
    eax = ebp - 0x180c;
    eax = fopen (eax, edx);
    *((ebp - 0x282c)) = eax;
    if (*((ebp - 0x282c)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            eax = 0;
            goto label_2;
        }
        eax = *((ebp - 0x282c));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x180c;
        *((esp + 8)) = eax;
        print_error (0xffffffeb, "checking for file '%s': %s\n");
    }
    eax = "/tmp/grass.extensions.db.XXXXXX";
    memcpy (obj.TMP_GISMAN, eax, 0x20);
    mkstemp (obj.TMP_GISMAN);
    edx = 0x8055444;
    eax = TMP_GISMAN;
    eax = fopen (eax, edx);
    *((ebp - 0x2830)) = eax;
    if (*((ebp - 0x2830)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0x80642c0;
        print_error (0xffffffeb, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit (dbg.exit_db);
    eax = VERBOSE;
    if (eax != 0) {
        eax = "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;";
        edx = *((ebp - 0x284c));
        *((esp + 0x18)) = edx;
        edx = *((ebp - 0x284c));
        *((esp + 0x14)) = edx;
        *((esp + 0x10)) = 0x80642c0;
        edx = *((ebp - 0x284c));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x284c));
        eax = ebp - 0x80c;
        sprintf (eax, eax, edx);
    } else {
        eax = "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;";
        *((esp + 0x24)) = 0x80672c0;
        edx = *((ebp - 0x284c));
        *((esp + 0x20)) = edx;
        *((esp + 0x1c)) = 0x80672c0;
        edx = *((ebp - 0x284c));
        *((esp + 0x18)) = edx;
        *((esp + 0x14)) = 0x80642c0;
        *((esp + 0x10)) = 0x80672c0;
        edx = *((ebp - 0x284c));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x284c));
        eax = ebp - 0x80c;
        sprintf (eax, eax, edx);
    }
    eax = ebp - 0x80c;
    strcpy (obj.GISMAN_CMD, eax);
    eax = "%s/etc/dm/gem-entries";
    edx = *((ebp - 0x284c));
    eax = ebp - 0x200c;
    sprintf (eax, eax, edx);
    eax = ebp - 0x200c;
    *(esp) = eax;
    eax = opendir ();
    *((ebp - 0x2834)) = eax;
    if (*((ebp - 0x2834)) == 0) {
        eax = 0;
        goto label_2;
    }
    *((ebp - 0x2818)) = 0;
    *((ebp - 0x2840)) = 0;
    goto label_3;
label_0:
    eax = *((ebp - 0x2838));
    edx = eax + 0xb;
    eax = "%s/%s";
    *((esp + 0xc)) = edx;
    edx = ebp - 0x200c;
    eax = ebp - 0x180c;
    sprintf (eax, eax, edx);
    edx = 0x80553f1;
    eax = ebp - 0x180c;
    eax = fopen (eax, edx);
    *((ebp - 0x2828)) = eax;
    eax = *((ebp - 0x2838));
    eax += 0xb;
    eax = strcmp (eax, 0x8055a4f);
    if (eax != 0) {
        eax = *((ebp - 0x2838));
        eax += 0xb;
        eax = strcmp (eax, 0x8055a51);
        if (eax != 0) {
            goto label_4;
        }
    }
    eax = *((ebp - 0x2828));
    fclose (eax);
    goto label_3;
label_4:
    if (*((ebp - 0x2828)) != 0) {
        goto label_5;
    }
    eax = *((ebp - 0x2828));
    fclose (eax);
    goto label_3;
    do {
        *((ebp - 0x2818))++;
        goto label_6;
label_5:
label_6:
        eax = *((ebp - 0x2828));
        eax = ebp - 0x80c;
        eax = fgets (eax, 0x800, eax);
    } while (eax != 0);
    *((ebp - 0x2840))++;
    eax = *((ebp - 0x2828));
    fclose (eax);
label_3:
    eax = *((ebp - 0x2834));
    *(esp) = eax;
    eax = readdir ();
    *((ebp - 0x2838)) = eax;
    if (*((ebp - 0x2838)) != 0) {
        goto label_0;
    }
    eax = *((ebp - 0x2834));
    *(esp) = eax;
    closedir ();
    *((ebp - 0x281c)) = 0;
    while (eax != 0) {
        *((ebp - 0x281c))++;
        eax = *((ebp - 0x282c));
        eax = ebp - 0x80c;
        eax = fgets (eax, 0x800, eax);
    }
    if (*((ebp - 0x281c)) == 0) {
        eax = 0;
        goto label_2;
    }
    eax = *((ebp - 0x282c));
    rewind (eax);
    eax = *((ebp - 0x2818));
    ecx = eax + eax;
    edx = *((ebp - 0x2840));
    eax = *((ebp - 0x2840));
    eax <<= 2;
    eax += edx;
    eax = ecx + eax;
    eax += *((ebp - 0x281c));
    eax++;
    eax = calloc (eax, 4);
    *((ebp - 0x2814)) = eax;
    *((ebp - 0x2820)) = 0;
    while (eax > *((ebp - 0x2820))) {
        eax = *((ebp - 0x2820));
        eax <<= 2;
        eax += *((ebp - 0x2814));
        *(eax) = 0;
        *((ebp - 0x2820))++;
        eax = *((ebp - 0x2818));
        ecx = eax + eax;
        edx = *((ebp - 0x2840));
        eax = *((ebp - 0x2840));
        eax <<= 2;
        eax += edx;
        eax = ecx + eax;
        eax += *((ebp - 0x281c));
        eax++;
    }
    *((ebp - 0x2820)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x2820));
        eax <<= 2;
        ebx = eax;
        ebx += *((ebp - 0x2814));
        eax = ebp - 0x80c;
        eax = strlen (eax);
        eax++;
        eax = malloc (eax);
        *(ebx) = eax;
        edx = ebp - 0x80c;
        eax = *((ebp - 0x2820));
        eax <<= 2;
        eax += *((ebp - 0x2814));
        eax = *(eax);
        strcpy (eax, edx);
        *((ebp - 0x2820))++;
        eax = *((ebp - 0x282c));
        eax = ebp - 0x80c;
        eax = fgets (eax, 0x800, eax);
    }
    eax = *((ebp - 0x2820));
    eax <<= 2;
    eax += *((ebp - 0x2814));
    *(eax) = 0;
    eax = *((ebp - 0x2814));
    *(esp) = eax;
    check_ext_menu ();
    eax = ebp - 0x200c;
    *(esp) = eax;
    eax = opendir ();
    *((ebp - 0x2834)) = eax;
    *((ebp - 0x283c)) = 0;
    goto label_7;
label_1:
    eax = *((ebp - 0x2838));
    edx = eax + 0xb;
    eax = "%s/%s";
    *((esp + 0xc)) = edx;
    edx = ebp - 0x200c;
    eax = ebp - 0x180c;
    sprintf (eax, eax, edx);
    eax = *((ebp - 0x2838));
    eax += 0xb;
    eax = strcmp (eax, 0x8055a4f);
    if (eax == 0) {
        goto label_8;
    }
    eax = *((ebp - 0x2838));
    eax += 0xb;
    eax = strcmp (eax, 0x8055a51);
    if (eax == 0) {
        goto label_9;
    }
    edx = 0x80553f1;
    eax = ebp - 0x180c;
    eax = fopen (eax, edx);
    *((ebp - 0x2828)) = eax;
    if (*((ebp - 0x2828)) == 0) {
        goto label_10;
    }
    *((ebp - 0x2820)) = 1;
    while (eax != 0) {
        if (*((ebp - 0x2820)) == 1) {
            eax = ebp - 0x80c;
            eax = strrchr (eax, 0x5d);
            ebx = eax;
            eax = ebp - 0x80c;
            eax = strchr (eax, 0x5b);
            edx = ebx;
            edx -= eax;
            eax = edx;
            *((ebp - 0x2810)) = eax;
            ebx = *((ebp - 0x2810));
            eax = ebp - 0x80c;
            eax = strchr (eax, 0x5b);
            eax++;
            eax = ebp - 0x100c;
            strncpy (eax, eax, ebx);
            eax = *((ebp - 0x2810));
            eax--;
            *((ebp + eax - 0x100c)) = 0;
            eax = *((ebp - 0x2814));
            eax = ebp - 0x80c;
            eax = ebp - 0x280c;
            eax = new_submenu (eax, eax, eax);
            *((ebp - 0x2824)) = eax;
            if (*((ebp - 0x2824)) < 0) {
                goto label_11;
            }
            *((ebp - 0x2820))++;
            *((ebp - 0x283c))++;
        } else {
            eax = *((ebp - 0x2824));
            *((esp + 0xc)) = eax;
            eax = *((ebp - 0x2814));
            eax = ebp - 0x100c;
            eax = ebp - 0x80c;
            eax = new_item (eax, eax, eax);
            *((ebp - 0x2824)) = eax;
            if (*((ebp - 0x2824)) < 0) {
                goto label_12;
            }
            *((ebp - 0x2820))++;
            *((ebp - 0x283c))++;
        }
        eax = *((ebp - 0x2828));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x800;
        eax = ebp - 0x80c;
        eax = nc_fgets_nb (eax);
    }
    goto label_13;
label_11:
    goto label_13;
label_12:
label_13:
    eax = *((ebp - 0x2828));
    fclose (eax);
    goto label_7;
label_8:
    goto label_7;
label_9:
    goto label_7;
label_10:
label_7:
    eax = *((ebp - 0x2834));
    *(esp) = eax;
    eax = readdir ();
    *((ebp - 0x2838)) = eax;
    if (*((ebp - 0x2838)) != 0) {
        goto label_1;
    }
    eax = *((ebp - 0x2834));
    *(esp) = eax;
    closedir ();
    *((ebp - 0x2820)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x2820));
        eax <<= 2;
        eax += *((ebp - 0x2814));
        eax = *(eax);
        eax = *((ebp - 0x2830));
        fprintf (eax, eax);
        *((ebp - 0x2820))++;
        eax = *((ebp - 0x2820));
        eax <<= 2;
        eax += *((ebp - 0x2814));
        eax = *(eax);
    }
    eax = *((ebp - 0x2830));
    fflush (eax);
    eax = *((ebp - 0x282c));
    fclose (eax);
    eax = *((ebp - 0x2830));
    fclose (eax);
    *((ebp - 0x2820)) = 0;
    while (eax > *((ebp - 0x2820))) {
        eax = *((ebp - 0x2820));
        eax <<= 2;
        eax += *((ebp - 0x2814));
        eax = *(eax);
        free (eax);
        *((ebp - 0x2820))++;
        eax = *((ebp - 0x2818));
        ecx = eax + eax;
        edx = *((ebp - 0x2840));
        eax = *((ebp - 0x2840));
        eax <<= 2;
        eax += edx;
        eax = ecx + eax;
        eax += *((ebp - 0x281c));
        eax++;
    }
    eax = *((ebp - 0x2814));
    free (eax);
    eax = *((ebp - 0x283c));
label_2:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (eax != *((ebp - 0x2820))) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804f7e8 */
#include <stdint.h>
 
int32_t dbg_check_extension (char * arg_8h, size_t arg_ch, size_t arg_10h, char ** arg_14h, char ** arg_18h) {
    int * revision;
    int * minor;
    int * major;
    char * name;
    char * package;
    FILE * f;
    int32_t error;
    char[2048] tmp;
    int32_t var_808h;
    int32_t canary;
    size_t format;
    size_t nitems;
    FILE * stream;
    char ** var_10h;
    /* void check_extension(char * package,char * name,int * major,int * minor,int * revision); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x820)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x824)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x828)) = eax;
    eax = *((ebp + 0x18));
    *((ebp - 0x82c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((ebp - 0x80c)) = 0;
    ebx = ebp - 0x808;
    eax = 0;
    edx = 0x1ff;
    edi = ebx;
    ecx = edx;
    memset (edi, eax, ecx);
    eax = stdout;
    edx = stdout;
    eax = "Checking extension ...";
    fwrite (edx, 1, 0x16);
    eax = *((ebp - 0x81c));
    eax = ebp - 0x80c;
    strcpy (eax, eax);
    eax = ebp - 0x80c;
    *(esp) = eax;
    eax = chdir ();
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x81c));
        *((esp + 8)) = eax;
        print_error (0xfffffffe, "extension '%s' not accessible: %s\n");
    }
    edx = 0x8055e6b;
    eax = 0x8055e6d;
    eax = fopen (eax, edx);
    *((ebp - 0x814)) = eax;
    if (*((ebp - 0x814)) == 0) {
        print_error (0xfffffffa, 'id' file not readable.\n");
    }
    eax = "%[<GRASS extension package>] ";
    edx = ebp - 0x80c;
    eax = *((ebp - 0x814));
    isoc99_fscanf (eax, eax, edx);
    eax = ebp - 0x80c;
    eax = strcmp ("<GRASS extension package>", eax);
    if (eax != 0) {
        eax = *((ebp - 0x814));
        fclose (eax);
        print_error (0xfffffffa, "unknown file identifier.\n");
    }
    eax = *((ebp - 0x814));
    fclose (eax);
    eax = *((ebp - 0x820));
    get_package_name (0x8055edb, eax);
    edx = 0x8055e6b;
    eax = "version";
    eax = fopen (eax, edx);
    *((ebp - 0x814)) = eax;
    if (*((ebp - 0x814)) == 0) {
        print_error (0xfffffffa, 'version' file not readable.\n");
    }
    eax = *((ebp - 0x814));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0x800;
    eax = ebp - 0x80c;
    nc_fgets_nb (eax);
    eax = *((ebp - 0x828));
    *(eax) = 0;
    eax = *((ebp - 0x82c));
    *(eax) = 0;
    edx = "%i.%i.%i";
    eax = ebp - 0x80c;
    ecx = *((ebp - 0x82c));
    ecx = *((ebp - 0x828));
    ecx = *((ebp - 0x824));
    eax = isoc99_sscanf (ecx, edx, ecx);
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) <= 0) {
        eax = *((ebp - 0x814));
        fclose (eax);
        print_error (0xfffffffa, "invalid or missing version information.\n");
    }
    print_done ();
    *(esp) = 0x8055f35;
    chdir ();
    eax = *((ebp - 0x814));
    fclose (eax);
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x810)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8053242 */
#include <stdint.h>
 
int32_t dbg_get_configure_options (int32_t arg_8h) {
    char * gisbase;
    FILE * fp;
    char[2048] str;
    int32_t canary;
    char * format;
    file* var_8h;
    /* void get_configure_options(char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = CONFIG_OPTS;
    eax = *(eax);
    if (al == 0) {
        eax = "%s/etc/config.system";
        edx = *((ebp - 0x81c));
        eax = ebp - 0x80c;
        sprintf (eax, eax, edx);
        edx = 0x80578de;
        eax = ebp - 0x80c;
        eax = fopen (eax, edx);
        *((ebp - 0x810)) = eax;
        if (*((ebp - 0x810)) == 0) {
            eax = ebp - 0x80c;
            print_warning ("could not open %s for read access. Using default configure options.\n", eax);
        } else {
            eax = *((ebp - 0x810));
        }
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x800;
        eax = ebp - 0x80c;
        eax = nc_fgets_nb (eax);
        if (eax == 0) {
            goto label_0;
        }
        eax = ebp - 0x80c;
        strcpy (obj.CONFIG_OPTS, eax);
    } else {
    }
label_0:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804be84 */
#include <stdint.h>
 
int32_t dbg_is_submenu (void) {
    char * item;
    int32_t c;
    /* int is_submenu(char * item); */
    eax = *((ebp + 8));
    eax = strchr (eax, 0x5b);
    if (eax == 0) {
        eax = 0;
    } else {
        eax = *((ebp + 8));
        eax = strrchr (eax, 0x5d);
        if (eax == 0) {
            eax = 0;
        } else {
            eax = *((ebp + 8));
            eax = strchr (eax, 0x5b);
            ebx = eax;
            eax = *((ebp + 8));
            eax = strrchr (eax, 0x5d);
            if (ebx > eax) {
                eax = 0;
            } else {
                eax = 1;
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x80546e0 */
#include <stdint.h>
 
void libc_csu_fini (void) {
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804d743 */
#include <stdint.h>
 
int32_t dbg_deregister_entries_gisman2 (size_t arg_8h, size_t arg_ch) {
    char * gisbase;
    char * pkg_short_name;
    FILE * f_gisman2;
    char[2048] str;
    char[2048] file;
    int32_t canary;
    char * format;
    size_t var_8h;
    size_t var_sp_ch;
    /* void deregister_entries_gisman2(char * pkg_short_name,char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x101c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1020)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "%s/etc/gm/Xtns/%s.gem";
    edx = *((ebp - 0x101c));
    *((esp + 0xc)) = edx;
    edx = *((ebp - 0x1020));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    edx = 0x80553f1;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x1010)) = eax;
    if (*((ebp - 0x1010)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            goto label_0;
        }
        eax = *((ebp - 0x1010));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffdf, "checking for file '%s': %s\n");
    }
    eax = VERBOSE;
    if (eax != 0) {
        eax = "rm -vf %s/etc/gm/Xtns/%s.gem ; ";
        edx = *((ebp - 0x101c));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x1020));
        eax = ebp - 0x100c;
        sprintf (eax, eax, edx);
    } else {
        eax = "rm -f %s/etc/gm/Xtns/%s.gem ; ";
        edx = *((ebp - 0x101c));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x1020));
        eax = ebp - 0x100c;
        sprintf (eax, eax, edx);
    }
    eax = ebp - 0x100c;
    strcpy (obj.GISMAN_CMD, eax);
    goto label_1;
label_0:
label_1:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x805148a */
#include <stdint.h>
 
int32_t dbg_test_install (char * arg_8h, size_t arg_ch, size_t arg_10h, char * arg_20h) {
    char * grass_version;
    char * pkg_short_name;
    char * gisbase;
    char * package;
    stat buf;
    int32_t revision;
    int32_t minor;
    int32_t major;
    char * grass_revision;
    char * grass_minor;
    char * grass_major;
    char * verstr;
    FILE * f;
    int32_t error;
    char[2048] sysstr;
    char[2048] dir;
    char[2048] tmp;
    int32_t canary;
    int32_t pkg_major;
    int32_t pkg_minor;
    int32_t pkg_revision;
    char * format;
    char * nitems;
    char * stream;
    char ** var_10h;
    int32_t var_14h;
    /* void test_install(char * package,char * gisbase,char * pkg_short_name,int pkg_major,int pkg_minor,int pkg_revision,char * grass_version); */
    eax = *((ebp + 8));
    *((ebp - 0x188c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1890)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x1894)) = eax;
    eax = *((ebp + 0x20));
    *((ebp - 0x1898)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x1890));
    edx = ebp - 0x1888;
    eax = _stat (eax, edx);
    *((ebp - 0x1810)) = eax;
    if (*((ebp - 0x1810)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 8)) = eax;
        print_error (0xfffffffb, "installation directory invalid: %s\n");
    }
    eax = "GINSTALL_DST=%s";
    edx = *((ebp - 0x1890));
    sprintf (obj.GINSTALL_DST, eax, edx);
    *(esp) = obj.GINSTALL_DST;
    putenv ();
    eax = "%s/include";
    edx = *((ebp - 0x1890));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GINSTALL_INC=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GINSTALL_INC, eax, edx);
    *(esp) = obj.GINSTALL_INC;
    putenv ();
    eax = "%s/lib";
    edx = *((ebp - 0x1890));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GINSTALL_LIB=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GINSTALL_LIB, eax, edx);
    *(esp) = obj.GINSTALL_LIB;
    putenv ();
    eax = "GEM_GRASS_DIR=%s";
    edx = *((ebp - 0x1890));
    sprintf (obj.GEM_GRASS_DIR, eax, edx);
    *(esp) = obj.GEM_GRASS_DIR;
    putenv ();
    eax = *((ebp - 0x1898));
    eax = strdup (eax);
    *((ebp - 0x1818)) = eax;
    eax = 0x8055edb;
    eax = *((ebp - 0x1818));
    eax = strtok (eax, eax);
    *((ebp - 0x181c)) = eax;
    eax = 0x8055edb;
    eax = strtok (0, eax);
    *((ebp - 0x1820)) = eax;
    eax = 0x8055edb;
    eax = strtok (0, eax);
    *((ebp - 0x1824)) = eax;
    eax = *((ebp - 0x181c));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x1828)) = eax;
    eax = *((ebp - 0x1820));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x182c)) = eax;
    eax = *((ebp - 0x1824));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x1830)) = eax;
    eax = *((ebp - 0x1818));
    free (eax);
    atexit (dbg.exit_tmp);
    eax = *((ebp - 0x188c));
    *(esp) = eax;
    eax = basename ();
    edx = "%s/src";
    eax = ebp - 0x100c;
    sprintf (eax, edx, eax);
    eax = ebp - 0x100c;
    *(esp) = eax;
    eax = chdir ();
    *((ebp - 0x1810)) = eax;
    if (*((ebp - 0x1810)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x188c));
        *((esp + 8)) = eax;
        print_error (0xfffffffe, "extension files in '%s' not accessible: %s\n");
    }
    eax = SKIP_CFG;
    if (eax == 0) {
        eax = VERBOSE;
        if (eax != 0) {
            eax = stdout;
            edx = stdout;
            eax = "Running configure script:\n";
            fwrite (edx, 1, 0x1a);
            eax = "sh %s %s";
            *((esp + 0xc)) = 0x806aae0;
            eax = ebp - 0x180c;
            sprintf (eax, eax, 0x806b2e0);
            eax = ebp - 0x180c;
            eax = system (eax);
            *((ebp - 0x1810)) = eax;
        } else {
            eax = stdout;
            edx = stdout;
            eax = "Configuring...";
            fwrite (edx, 1, 0xe);
            eax = "sh %s %s --quiet &> %s";
            *((esp + 0x10)) = 0x80672c0;
            *((esp + 0xc)) = 0x806aae0;
            eax = ebp - 0x180c;
            sprintf (eax, eax, 0x806b2e0);
            eax = ebp - 0x180c;
            eax = system (eax);
            *((ebp - 0x1810)) = eax;
        }
        if (*((ebp - 0x1810)) == -1) {
            print_error (0xffffffe5, "could not run configure script.\n");
        }
        if (*((ebp - 0x1810)) > 0) {
            print_error (0xfffffffd, "system configuration failed.\n");
        }
        print_done ();
        print_cfg ();
    }
    eax = "GEM_EXT_NAME=%s";
    edx = *((ebp - 0x1894));
    sprintf (obj.GEM_EXT_NAME, eax, edx);
    *(esp) = obj.GEM_EXT_NAME;
    putenv ();
    eax = "%i.%i.%i";
    edx = *((ebp + 0x1c));
    *((esp + 0x10)) = edx;
    edx = *((ebp + 0x18));
    *((esp + 0xc)) = edx;
    edx = *((ebp + 0x14));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GEM_EXT_VERSION=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GEM_EXT_VERSION, eax, edx);
    *(esp) = obj.GEM_EXT_VERSION;
    putenv ();
    dump_plain ("../description", 0x8064ac0);
    dump_plain ("../info", 0x80652c0);
    dump_plain ("../depends", 0x8065ac0);
    dump_plain ("../bugs", 0x80662c0);
    dump_plain ("../authors", 0x8066ac0);
    eax = "GEM_EXT_DESCR=%s";
    sprintf (obj.GEM_EXT_DESCR, eax, 0x8064ac0);
    *(esp) = obj.GEM_EXT_DESCR;
    putenv ();
    eax = "GEM_EXT_INFO=%s";
    sprintf (obj.GEM_EXT_INFO, eax, 0x80652c0);
    *(esp) = obj.GEM_EXT_INFO;
    putenv ();
    eax = "GEM_EXT_DEPS=%s";
    sprintf (obj.GEM_EXT_DEPS, eax, 0x8065ac0);
    *(esp) = obj.GEM_EXT_DEPS;
    putenv ();
    eax = "GEM_EXT_BUGS=%s";
    sprintf (obj.GEM_EXT_BUGS, eax, 0x80662c0);
    *(esp) = obj.GEM_EXT_BUGS;
    putenv ();
    eax = "GEM_EXT_AUTHORS=%s";
    sprintf (obj.GEM_EXT_AUTHORS, eax, 0x8066ac0);
    *(esp) = obj.GEM_EXT_AUTHORS;
    putenv ();
    atexit (dbg.exit_tmp);
    eax = *((ebp - 0x1898));
    eax = *((ebp - 0x1890));
    eax = *((ebp - 0x188c));
    check_dependencies (eax, eax, eax);
    eax = VERBOSE;
    if (eax != 0) {
        edx = "Running '%s':\n";
        eax = stdout;
        *((esp + 8)) = 0x806bae0;
        fprintf (eax, edx);
        eax = "%s -f Makefile";
        eax = ebp - 0x180c;
        sprintf (eax, eax, 0x806bae0);
        eax = ebp - 0x180c;
        eax = system (eax);
        *((ebp - 0x1810)) = eax;
    } else {
        eax = stdout;
        edx = stdout;
        eax = "Compiling...";
        fwrite (edx, 1, 0xc);
        eax = "%s -f Makefile &> %s";
        *((esp + 0xc)) = 0x80672c0;
        eax = ebp - 0x180c;
        sprintf (eax, eax, 0x806bae0);
        eax = ebp - 0x180c;
        eax = system (eax);
        *((ebp - 0x1810)) = eax;
    }
    if (*((ebp - 0x1810)) == -1) {
        eax = VERBOSE;
        if (eax != 0) {
            goto label_0;
        }
        *((esp + 8)) = obj.MAKE_CMD;
        print_error (0xfffffff7, "could not run '%s' do you have make tools installed?\n");
    }
label_0:
    if (*((ebp - 0x1810)) > 0) {
        print_error (0xfffffffc, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n");
    }
    print_done ();
    eax = stdout;
    edx = stdout;
    eax = "Installing...";
    fwrite (edx, 1, 0xd);
    edx = 0x8055e6b;
    eax = "../uninstall";
    eax = fopen (eax, edx);
    *((ebp - 0x1814)) = eax;
    if (*((ebp - 0x1814)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        print_warning ("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", eax);
    } else {
        eax = *((ebp - 0x1814));
        fclose (eax);
    }
    eax = *((ebp + 0x1c));
    eax = *((ebp + 0x18));
    eax = *((ebp + 0x14));
    eax = *((ebp - 0x1894));
    eax = *((ebp - 0x1890));
    register_extension (eax, 0x80566df, eax);
    eax = *((ebp - 0x1898));
    eax = *((ebp - 0x1890));
    eax = *((ebp - 0x188c));
    check_dependencies (eax, eax, eax);
    if (*((ebp - 0x1828)) == 6) {
        if (*((ebp - 0x182c)) > 0) {
            goto label_1;
        }
        eax = *((ebp - 0x1890));
        eax = *((ebp - 0x1894));
        register_entries_gisman (eax, eax);
    }
label_1:
    eax = *((ebp - 0x1890));
    eax = *((ebp - 0x1894));
    register_entries_gisman2 (eax, eax);
    eax = *((ebp + 0x1c));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x18));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1890));
    eax = *((ebp - 0x1894));
    register_html (eax, eax);
    edx = "(skipping '%s install')...";
    eax = stdout;
    *((esp + 8)) = 0x806bae0;
    fprintf (eax, edx);
    print_done ();
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x182c)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049b5f */
#include <stdint.h>
 
int32_t dbg_find_pos (void) {
    int32_t j;
    int32_t i;
    char * str;
    char ** strarr;
    int32_t start;
    char * s2;
    /* int find_pos(char * str,char ** strarr,int start); */
    *((ebp - 0xc)) = 0;
    while (eax != 0) {
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
        eax <<= 2;
        eax += *((ebp + 0xc));
        eax = *(eax);
    }
    if (*((ebp + 0x10)) >= 0) {
        eax = *((ebp + 0x10));
        if (eax <= *((ebp - 0xc))) {
            goto label_0;
        }
    }
    exit (0xffffffeb);
label_0:
    eax = *((ebp + 0x10));
    *((ebp - 0x10)) = eax;
    while (eax < *((ebp - 0xc))) {
        eax = *((ebp - 0x10));
        eax <<= 2;
        eax += *((ebp + 0xc));
        eax = *(eax);
        edx = *((ebp + 8));
        eax = strstr (eax, edx);
        if (eax != 0) {
            eax = *((ebp - 0x10));
            goto label_1;
        }
        *((ebp - 0x10))++;
        eax = *((ebp - 0x10));
    }
    eax = 0xffffffff;
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804961d */
#include <stdint.h>
 
int32_t dbg_mkdir_s (int32_t arg_8h, size_t arg_ch) {
    char * mode;
    char * pathname;
    char[5000] tmp;
    int32_t canary;
    char * format;
    int32_t var_8h;
    size_t var_sp_ch;
    /* void mkdir_s(char * pathname,char * mode); */
    eax = *((ebp + 8));
    *((ebp - 0x139c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x13a0)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "mkdir %s --mode=%s -p";
    edx = *((ebp - 0x13a0));
    *((esp + 0xc)) = edx;
    edx = *((ebp - 0x139c));
    eax = ebp - 0x1394;
    sprintf (eax, eax, edx);
    eax = ebp - 0x1394;
    system (eax);
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (? != ?) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048aa4 */
#include <stdint.h>
 
void sprintf (void) {
    sprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048b84 */
#include <stdint.h>
 
void system (void) {
    system ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048d34 */
#include <stdint.h>
 
void stack_chk_fail (void) {
    stack_chk_fail ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804b961 */
#include <stdint.h>
 
int32_t dbg_check_dependencies (char * arg_8h, char * arg_ch, char * arg_10h, int32_t arg_sp_10h, int32_t arg_20h) {
    char * grass_version;
    char * gisbase;
    char * package;
    int32_t dep_revision;
    int32_t dep_minor;
    int32_t dep_major;
    int32_t revision;
    int32_t minor;
    int32_t major;
    FILE * f_db;
    FILE * f_deps;
    int32_t satisfied;
    int32_t db_exists;
    int32_t error;
    char[2048] dep_short_name;
    char[2048] short_name;
    char[2048] dbstr;
    char[2048] str;
    char[2048] file;
    int32_t canary;
    char * format;
    char * var_8h;
    char * var_ch;
    /* void check_dependencies(char * package,char * gisbase,char * grass_version); */
    eax = *((ebp + 8));
    *((ebp - 0x284c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x2850)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x2854)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0x1c)) = eax;
    eax = 0;
    eax = FORCE;
    if (eax != 0) {
        goto label_1;
    }
    edx = 0x8054d13;
    eax = "../depends";
    eax = fopen (eax, edx);
    *((ebp - 0x282c)) = eax;
    if (*((ebp - 0x282c)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            edx = "\n%s/depends ENOENT\n";
            eax = stderr;
            ecx = *((ebp - 0x284c));
            *((esp + 8)) = ecx;
            fprintf (eax, edx);
            goto label_2;
        }
        eax = *((ebp - 0x282c));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x81c;
        *((esp + 8)) = eax;
        print_error (0xffffffef, "checking for file '%s': %s\n");
    }
    *((ebp - 0x2824)) = 1;
    eax = "%s/etc/extensions.db";
    edx = *((ebp - 0x2850));
    eax = ebp - 0x81c;
    sprintf (eax, eax, edx);
    edx = 0x8054d13;
    eax = ebp - 0x81c;
    eax = fopen (eax, edx);
    *((ebp - 0x2830)) = eax;
    if (*((ebp - 0x2830)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            *((ebp - 0x2824)) = 0;
        } else {
            eax = *((ebp - 0x2830));
            fclose (eax);
            eax = errno_location ();
            eax = *(eax);
            eax = strerror (eax);
            *((esp + 0xc)) = eax;
            eax = ebp - 0x81c;
            *((esp + 8)) = eax;
            print_error (0xffffffef, "checking for file '%s': %s\n");
        }
    }
    *((ebp - 0x2828)) = 0;
    goto label_3;
label_0:
    *((ebp - 0x2834)) = 0;
    *((ebp - 0x2838)) = 0;
    *((ebp - 0x283c)) = 0;
    *((ebp - 0x2840)) = 0;
    *((ebp - 0x2844)) = 0;
    *((ebp - 0x2848)) = 0;
    edx = "%s\t%i.%i.%i";
    eax = ebp - 0x101c;
    ecx = ebp - 0x2848;
    ecx = ebp - 0x2844;
    ecx = ebp - 0x2840;
    ecx = ebp - 0x281c;
    eax = isoc99_sscanf (ecx, edx, ecx);
    *((ebp - 0x2820)) = eax;
    if (*((ebp - 0x2820)) <= 0) {
        goto label_3;
    }
    eax = ebp - 0x281c;
    eax = strcmp (eax, "GRASS");
    if (eax == 0) {
        edx = "%i.%i.%i";
        eax = *((ebp - 0x2854));
        ecx = ebp - 0x283c;
        ecx = ebp - 0x2838;
        ecx = ebp - 0x2834;
        isoc99_sscanf (ecx, edx, ecx);
        edi = *((ebp - 0x2848));
        esi = *((ebp - 0x2844));
        ebx = *((ebp - 0x2840));
        ecx = *((ebp - 0x283c));
        edx = *((ebp - 0x2838));
        eax = *((ebp - 0x2834));
        *((esp + 0x14)) = edi;
        *((esp + 0x10)) = esi;
        *((esp + 0xc)) = ebx;
        *((esp + 8)) = ecx;
        *((esp + 4)) = edx;
        *(esp) = eax;
        eax = vercmp ();
        if (eax < 0) {
            ecx = *((ebp - 0x2848));
            edx = *((ebp - 0x2844));
            eax = *((ebp - 0x2840));
            *((esp + 0x14)) = ecx;
            *((esp + 0x10)) = edx;
            *((esp + 0xc)) = eax;
            eax = *((ebp - 0x2854));
            *((esp + 8)) = eax;
            print_error (0xffffffee, "installed version (%s) of GRASS is too low. Required version is %i.%i.%i\n");
        }
        *((ebp - 0x2828)) = 1;
        goto label_3;
    }
    if (*((ebp - 0x2824)) == 0) {
        goto label_3;
    }
    *((ebp - 0x2828)) = 0;
    eax = *((ebp - 0x2830));
    rewind (eax);
    while (eax != 0) {
        *((ebp - 0x2834)) = 0;
        *((ebp - 0x2838)) = 0;
        *((ebp - 0x283c)) = 0;
        edx = "%s\t%i.%i.%i";
        eax = ebp - 0x181c;
        ecx = ebp - 0x283c;
        ecx = ebp - 0x2838;
        ecx = ebp - 0x2834;
        ecx = ebp - 0x201c;
        eax = isoc99_sscanf (ecx, edx, ecx);
        *((ebp - 0x2820)) = eax;
        if (*((ebp - 0x2820)) > 0) {
            eax = ebp - 0x281c;
            eax = ebp - 0x201c;
            eax = strcmp (eax, eax);
            if (eax != 0) {
                goto label_4;
            }
            edi = *((ebp - 0x2848));
            esi = *((ebp - 0x2844));
            ebx = *((ebp - 0x2840));
            ecx = *((ebp - 0x283c));
            edx = *((ebp - 0x2838));
            eax = *((ebp - 0x2834));
            *((esp + 0x14)) = edi;
            *((esp + 0x10)) = esi;
            *((esp + 0xc)) = ebx;
            *((esp + 8)) = ecx;
            *((esp + 4)) = edx;
            *(esp) = eax;
            eax = vercmp ();
            if (eax < 0) {
                edi = *((ebp - 0x2848));
                esi = *((ebp - 0x2844));
                ebx = *((ebp - 0x2840));
                ecx = *((ebp - 0x283c));
                edx = *((ebp - 0x2838));
                eax = *((ebp - 0x2834));
                *((esp + 0x20)) = edi;
                *((esp + 0x1c)) = esi;
                *((esp + 0x18)) = ebx;
                ebx = ebp - 0x281c;
                *((esp + 0x14)) = ebx;
                *((esp + 0x10)) = ecx;
                *((esp + 0xc)) = edx;
                *((esp + 8)) = eax;
                print_error (0xffffffee, "installed version %i.%i.%i of required extension '%s' is too low.\n \t\t\t\t\t\t\t\t\t\t\t\t\tRequired version is %i.%i.%i\n");
            }
            *((ebp - 0x2828)) = 1;
        }
label_4:
        eax = *((ebp - 0x2830));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x800;
        eax = ebp - 0x181c;
        eax = nc_fgets_nb (eax);
    }
    if (*((ebp - 0x2828)) == 0) {
        eax = *((ebp - 0x2850));
        *((esp + 0xc)) = eax;
        eax = ebp - 0x281c;
        *((esp + 8)) = eax;
        print_error (0xffffffee, "required extension '%s' not found in '%s'.\n");
    }
label_3:
    eax = *((ebp - 0x282c));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0x800;
    eax = ebp - 0x101c;
    eax = nc_fgets_nb (eax);
    if (eax != 0) {
        goto label_0;
    }
    if (*((ebp - 0x2824)) != 0) {
        eax = *((ebp - 0x2830));
        fclose (eax);
    }
    eax = *((ebp - 0x282c));
    fclose (eax);
    goto label_2;
label_1:
label_2:
    eax = *((ebp - 0x1c));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x2824)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804a51b */
#include <stdint.h>
 
int32_t dbg_dump_html (int32_t arg_8h, char * arg_ch) {
    char * tmpfile;
    char * file;
    int32_t fd;
    FILE * f_out;
    FILE * f_in;
    char[2048] line;
    char[2048] tmp;
    int32_t canary;
    char * format;
    size_t nitems;
    char * stream;
    /* void dump_html(char * file,char * tmpfile); */
    eax = *((ebp + 8));
    *((ebp - 0x101c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1020)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "/tmp/grass.extensions.db.XXXXXX";
    eax = *((ebp - 0x1020));
    memcpy (eax, eax, 0x20);
    eax = *((ebp - 0x1020));
    mkstemp (eax);
    edx = 0x8054b0c;
    eax = *((ebp - 0x1020));
    eax = fopen (eax, edx);
    *((ebp - 0x1014)) = eax;
    if (*((ebp - 0x1014)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x1020));
        *((esp + 8)) = eax;
        print_error (0xffffffe9, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit (dbg.exit_db);
    edx = 0x8054a6f;
    eax = *((ebp - 0x101c));
    eax = fopen (eax, edx);
    *((ebp - 0x1010)) = eax;
    while (eax != 0) {
        eax = ebp - 0x100c;
        *(esp) = eax;
        chop ();
        eax = ebp - 0x100c;
        *(esp) = eax;
        eax = is_text ();
        if (eax == 0) {
            eax = "<p>\n";
            edx = *((ebp - 0x1014));
            fwrite (edx, 1, 4);
        } else {
            eax = "%s <br>\n";
            edx = ebp - 0x100c;
            eax = ebp - 0x80c;
            sprintf (eax, eax, edx);
            eax = ebp - 0x80c;
            eax = *((ebp - 0x1014));
            fprintf (eax, eax);
        }
        eax = *((ebp - 0x1010));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x800;
        eax = ebp - 0x100c;
        eax = nc_fgets (eax);
    }
    eax = *((ebp - 0x1010));
    fclose (eax);
    eax = *((ebp - 0x1014));
    fclose (eax);
    eax = *((ebp - 0x1018));
    close (eax);
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8053170 */
#include <stdint.h>
 
int32_t dbg_show_version (void) {
    char * format;
    size_t nitems;
    FILE * stream;
    /* void show_version(); */
    edx = "gem64 (GRASS extensions manager) %.2f\n";
    eax = stdout;
    *(fp_stack--) = *(0x8057e40);
    *((esp + 8)) = fp_stack[0];
    fp_stack--;
    fprintf (eax, edx);
    eax = stdout;
    edx = stdout;
    eax = "Written by Benjamin Ducke\n";
    fwrite (edx, 1, 0x1a);
    eax = stdout;
    edx = stdout;
    eax = "\nCopyright (C) 2005 Benjamin Ducke\n";
    fwrite (edx, 1, 0x23);
    eax = stdout;
    edx = stdout;
    eax = "This is free software; see the source for copying conditions.  There is NO\n";
    fwrite (edx, 1, 0x4b);
    eax = stdout;
    edx = stdout;
    eax = "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n";
    fwrite (edx, 1, 0x4c);
    return exit (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048ce4 */
#include <stdint.h>
 
void fprintf (void) {
    fprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048cd4 */
#include <stdint.h>
 
void fwrite (void) {
    fwrite ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048db4 */
#include <stdint.h>
 
void exit (void) {
    exit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804c5f0 */
#include <stdint.h>
 
int32_t dbg_register_entries_gisman (size_t arg_8h, char * arg_ch) {
    char * gisbase;
    char * pkg_short_name;
    FILE * f_out;
    FILE * f_in;
    FILE * f_gisman;
    int32_t line_no;
    int32_t n_lines_new;
    int32_t n_lines_org;
    int32_t i;
    int32_t n_lines;
    int32_t n_entries;
    char ** line;
    int32_t len;
    char[2048] menu;
    char[2048] str;
    char[2048] file;
    int32_t canary;
    char * format;
    size_t n;
    char * var_sp_ch;
    size_t var_10h;
    char * var_14h;
    char * var_18h;
    char * var_1ch;
    char * var_20h;
    char * var_24h;
    int32_t var_28h;
    char * var_2ch;
    int32_t var_30h;
    char * var_34h;
    int32_t var_38h;
    /* void register_entries_gisman(char * pkg_short_name,char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x183c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1840)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "../entries-gisman";
    eax = ebp - 0x80c;
    memcpy (eax, eax, 0x12);
    edx = 0x80553f1;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x1830)) = eax;
    if (*((ebp - 0x1830)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            goto label_0;
        }
        eax = *((ebp - 0x1830));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffeb, "checking for file '%s': %s\n");
    }
    eax = "%s/etc/dm/menu.tcl";
    edx = *((ebp - 0x1840));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    edx = 0x80553f1;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x1834)) = eax;
    if (*((ebp - 0x1834)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            goto label_1;
        }
        eax = *((ebp - 0x1834));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffeb, "checking for file '%s': %s\n");
    }
    eax = "/tmp/grass.extensions.db.XXXXXX";
    memcpy (obj.TMP_GISMAN, eax, 0x20);
    mkstemp (obj.TMP_GISMAN);
    edx = 0x8055444;
    eax = TMP_GISMAN;
    eax = fopen (eax, edx);
    *((ebp - 0x1838)) = eax;
    if (*((ebp - 0x1838)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0x80642c0;
        print_error (0xffffffeb, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit (dbg.exit_db);
    eax = VERBOSE;
    if (eax != 0) {
        eax = "mkdir --verbose %s/etc/dm/gem-entries ; cp -vf ../entries-gisman %s/etc/dm/gem-entries/%s ; \t\t\t\t\tcp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;";
        edx = *((ebp - 0x1840));
        *((esp + 0x24)) = edx;
        edx = *((ebp - 0x1840));
        *((esp + 0x20)) = edx;
        *((esp + 0x1c)) = 0x80642c0;
        edx = *((ebp - 0x1840));
        *((esp + 0x18)) = edx;
        edx = *((ebp - 0x1840));
        *((esp + 0x14)) = edx;
        edx = *((ebp - 0x183c));
        *((esp + 0x10)) = edx;
        edx = *((ebp - 0x1840));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x1840));
        eax = ebp - 0x100c;
        sprintf (eax, eax, edx);
    } else {
        eax = "mkdir %s/etc/dm/gem-entries &> %s ; cp -f ../entries-gisman %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\tcp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;";
        *((esp + 0x38)) = 0x80672c0;
        edx = *((ebp - 0x1840));
        *((esp + 0x34)) = edx;
        *((esp + 0x30)) = 0x80672c0;
        edx = *((ebp - 0x1840));
        *((esp + 0x2c)) = edx;
        *((esp + 0x28)) = 0x80642c0;
        *((esp + 0x24)) = 0x80672c0;
        edx = *((ebp - 0x1840));
        *((esp + 0x20)) = edx;
        edx = *((ebp - 0x1840));
        *((esp + 0x1c)) = edx;
        *((esp + 0x18)) = 0x80672c0;
        edx = *((ebp - 0x183c));
        *((esp + 0x14)) = edx;
        edx = *((ebp - 0x1840));
        *((esp + 0x10)) = edx;
        *((esp + 0xc)) = 0x80672c0;
        edx = *((ebp - 0x1840));
        eax = ebp - 0x100c;
        sprintf (eax, eax, edx);
    }
    eax = ebp - 0x100c;
    strcpy (obj.GISMAN_CMD, eax);
    *((ebp - 0x1818)) = 0;
    while (eax != 0) {
        *((ebp - 0x1818))++;
        eax = *((ebp - 0x1830));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    if (*((ebp - 0x1818)) == 0) {
        goto label_2;
    }
    eax = *((ebp - 0x1830));
    rewind (eax);
    *((ebp - 0x181c)) = 0;
    while (eax != 0) {
        *((ebp - 0x181c))++;
        eax = *((ebp - 0x1834));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    if (*((ebp - 0x181c)) == 0) {
        goto label_3;
    }
    eax = *((ebp - 0x181c));
    *((ebp - 0x1824)) = eax;
    eax = *((ebp - 0x1834));
    rewind (eax);
    eax = *((ebp - 0x1818));
    eax += eax;
    eax += *((ebp - 0x181c));
    eax += 6;
    eax = calloc (eax, 4);
    *((ebp - 0x1814)) = eax;
    *((ebp - 0x1820)) = 0;
    while (eax > *((ebp - 0x1820))) {
        eax = *((ebp - 0x1820));
        eax <<= 2;
        eax += *((ebp - 0x1814));
        *(eax) = 0;
        *((ebp - 0x1820))++;
        eax = *((ebp - 0x1818));
        eax += eax;
        eax += *((ebp - 0x181c));
        eax += 6;
    }
    *((ebp - 0x1820)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x1820));
        eax <<= 2;
        ebx = eax;
        ebx += *((ebp - 0x1814));
        eax = ebp - 0x100c;
        eax = strlen (eax);
        eax++;
        eax = malloc (eax);
        *(ebx) = eax;
        edx = ebp - 0x100c;
        eax = *((ebp - 0x1820));
        eax <<= 2;
        eax += *((ebp - 0x1814));
        eax = *(eax);
        strcpy (eax, edx);
        *((ebp - 0x1820))++;
        eax = *((ebp - 0x1834));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    eax = *((ebp - 0x1814));
    *(esp) = eax;
    check_ext_menu ();
    *((ebp - 0x1820)) = 1;
    while (eax != 0) {
        if (*((ebp - 0x1820)) == 1) {
            eax = ebp - 0x100c;
            eax = strrchr (eax, 0x5d);
            ebx = eax;
            eax = ebp - 0x100c;
            eax = strchr (eax, 0x5b);
            edx = ebx;
            edx -= eax;
            eax = edx;
            *((ebp - 0x1810)) = eax;
            ebx = *((ebp - 0x1810));
            eax = ebp - 0x100c;
            eax = strchr (eax, 0x5b);
            eax++;
            eax = ebp - 0x180c;
            strncpy (eax, eax, ebx);
            eax = *((ebp - 0x1810));
            eax--;
            *((ebp + eax - 0x180c)) = 0;
            eax = *((ebp - 0x1814));
            eax = ebp - 0x100c;
            eax = *((ebp - 0x183c));
            eax = new_submenu (eax, eax, eax);
            *((ebp - 0x182c)) = eax;
            if (*((ebp - 0x182c)) < 0) {
                print_warning ("no GIS Manager menu entries created.\n");
                goto label_4;
            }
            *((ebp - 0x1820))++;
        } else {
            eax = *((ebp - 0x182c));
            *((esp + 0xc)) = eax;
            eax = *((ebp - 0x1814));
            eax = ebp - 0x180c;
            eax = ebp - 0x100c;
            eax = new_item (eax, eax, eax);
            *((ebp - 0x182c)) = eax;
            if (*((ebp - 0x182c)) < 0) {
                print_warning ("error creating GIS Manager menu entries.\n");
                goto label_4;
            }
            *((ebp - 0x1820))++;
        }
        eax = *((ebp - 0x1830));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x800;
        eax = ebp - 0x100c;
        eax = nc_fgets_nb (eax);
    }
label_4:
    *((ebp - 0x1820)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x1820));
        eax <<= 2;
        eax += *((ebp - 0x1814));
        eax = *(eax);
        eax = *((ebp - 0x1838));
        fprintf (eax, eax);
        *((ebp - 0x1820))++;
        eax = *((ebp - 0x1820));
        eax <<= 2;
        eax += *((ebp - 0x1814));
        eax = *(eax);
    }
    eax = *((ebp - 0x1838));
    fflush (eax);
    eax = *((ebp - 0x1838));
    rewind (eax);
    *((ebp - 0x1828)) = 0;
    while (eax != 0) {
        *((ebp - 0x1828))++;
        eax = *((ebp - 0x1838));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    if (*((ebp - 0x1828)) != 0) {
        eax = *((ebp - 0x1828));
        if (eax >= *((ebp - 0x1824))) {
            goto label_5;
        }
    }
    print_warning ("file truncation detected. Retaining orginal file 'menu.tcl'.\n");
    eax = 0x8055722;
    memcpy (obj.GISMAN_CMD, eax, 1);
label_5:
    eax = *((ebp - 0x1834));
    fclose (eax);
    eax = *((ebp - 0x1830));
    fclose (eax);
    eax = *((ebp - 0x1838));
    fclose (eax);
    *((ebp - 0x1820)) = 0;
    while (eax > *((ebp - 0x1820))) {
        eax = *((ebp - 0x1820));
        eax <<= 2;
        eax += *((ebp - 0x1814));
        eax = *(eax);
        free (eax);
        *((ebp - 0x1820))++;
        eax = *((ebp - 0x1818));
        eax += eax;
        eax += *((ebp - 0x181c));
        eax += 6;
    }
    eax = *((ebp - 0x1814));
    free (eax);
    goto label_6;
label_0:
    goto label_6;
label_1:
    goto label_6;
label_2:
    goto label_6;
label_3:
label_6:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != *((ebp - 0x1820))) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804f026 */
#include <stdint.h>
 
int32_t dbg_restore_html (char * arg_8h, char * n, char * arg_10h, char * arg_14h, int32_t arg_18h) {
    char * gisbase;
    int32_t revision;
    int32_t minor;
    int32_t major;
    int32_t n_subdirs;
    int32_t num_restored;
    dirent * ep;
    DIR * subdirp;
    DIR * dirp;
    FILE * f_ext;
    FILE * f_out;
    FILE * f_in;
    int32_t i;
    int32_t n_lines;
    int32_t n_entries;
    char ** line;
    char[2048] subdir;
    char[2048] dir;
    char[2048] ext_idx;
    char[2048] idx;
    char[2048] str;
    int32_t canary;
    char * format;
    /* int restore_html(char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x284c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "%s/docs/html/index.html";
    edx = *((ebp - 0x284c));
    eax = ebp - 0x100c;
    sprintf (eax, eax, edx);
    edx = 0x8055c93;
    eax = ebp - 0x100c;
    eax = fopen (eax, edx);
    *((ebp - 0x2820)) = eax;
    if (*((ebp - 0x2820)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            eax = 0;
            goto label_1;
        }
        eax = *((ebp - 0x2820));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x100c;
        *((esp + 8)) = eax;
        print_error (0xffffffe8, "checking for file '%s': %s\n");
    }
    eax = "/tmp/grass.extensions.db.XXXXXX";
    memcpy (obj.TMP_HTML, eax, 0x20);
    mkstemp (obj.TMP_HTML);
    edx = 0x8055cd4;
    eax = TMP_HTML;
    eax = fopen (eax, edx);
    *((ebp - 0x2824)) = eax;
    if (*((ebp - 0x2824)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0x8067ac0;
        print_error (0xffffffe8, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    eax = VERBOSE;
    if (eax != 0) {
        eax = "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;";
        edx = *((ebp - 0x284c));
        *((esp + 0x10)) = edx;
        edx = *((ebp - 0x284c));
        *((esp + 0xc)) = edx;
        eax = ebp - 0x80c;
        sprintf (eax, eax, 0x8067ac0);
    } else {
        eax = "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;";
        *((esp + 0x18)) = 0x80672c0;
        edx = *((ebp - 0x284c));
        *((esp + 0x14)) = edx;
        *((esp + 0x10)) = 0x80672c0;
        edx = *((ebp - 0x284c));
        *((esp + 0xc)) = edx;
        eax = ebp - 0x80c;
        sprintf (eax, eax, 0x8067ac0);
    }
    eax = ebp - 0x80c;
    strcpy (obj.HTML_CMD, eax);
    atexit (dbg.exit_db);
    eax = "%s/docs/extensions";
    edx = *((ebp - 0x284c));
    eax = ebp - 0x200c;
    sprintf (eax, eax, edx);
    eax = ebp - 0x200c;
    *(esp) = eax;
    eax = opendir ();
    *((ebp - 0x282c)) = eax;
    if (*((ebp - 0x282c)) == 0) {
        eax = 0;
        goto label_1;
    }
    *((ebp - 0x2814)) = 0;
    *((ebp - 0x283c)) = 0;
    while (*((ebp - 0x2834)) != 0) {
        eax = *((ebp - 0x2834));
        edx = eax + 0xb;
        eax = "%s/%s";
        *((esp + 0xc)) = edx;
        edx = ebp - 0x200c;
        eax = ebp - 0x280c;
        sprintf (eax, eax, edx);
        eax = *((ebp - 0x2834));
        eax += 0xb;
        eax = strcmp (eax, 0x8055e0a);
        if (eax != 0) {
            eax = *((ebp - 0x2834));
            eax += 0xb;
            eax = strcmp (eax, 0x8055e0c);
            if (eax != 0) {
                eax = ebp - 0x280c;
                *(esp) = eax;
                eax = opendir ();
                *((ebp - 0x2830)) = eax;
                if (*((ebp - 0x2830)) != 0) {
                    *((ebp - 0x283c))++;
                    eax = *((ebp - 0x2830));
                    *(esp) = eax;
                    closedir ();
                } else {
                } else {
                }
            } else {
            }
        }
        eax = *((ebp - 0x282c));
        *(esp) = eax;
        eax = readdir ();
        *((ebp - 0x2834)) = eax;
    }
    eax = *((ebp - 0x282c));
    *(esp) = eax;
    closedir ();
    *((ebp - 0x2818)) = 0;
    while (eax != 0) {
        *((ebp - 0x2818))++;
        eax = *((ebp - 0x2820));
        eax = ebp - 0x80c;
        eax = fgets (eax, 0x800, eax);
    }
    if (*((ebp - 0x2818)) == 0) {
        eax = 0;
        goto label_1;
    }
    eax = *((ebp - 0x2820));
    rewind (eax);
    eax = *((ebp - 0x283c));
    edx = *((ebp - 0x2818));
    eax = edx + eax;
    eax += 0xa;
    eax = calloc (eax, 4);
    *((ebp - 0x2810)) = eax;
    *((ebp - 0x281c)) = 0;
    while (eax > *((ebp - 0x281c))) {
        eax = *((ebp - 0x281c));
        eax <<= 2;
        eax += *((ebp - 0x2810));
        *(eax) = 0;
        *((ebp - 0x281c))++;
        eax = *((ebp - 0x283c));
        edx = *((ebp - 0x2818));
        eax = edx + eax;
        eax += 0xa;
    }
    *((ebp - 0x281c)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x281c));
        eax <<= 2;
        ebx = eax;
        ebx += *((ebp - 0x2810));
        eax = ebp - 0x80c;
        eax = strlen (eax);
        eax++;
        eax = malloc (eax);
        *(ebx) = eax;
        edx = ebp - 0x80c;
        eax = *((ebp - 0x281c));
        eax <<= 2;
        eax += *((ebp - 0x2810));
        eax = *(eax);
        strcpy (eax, edx);
        *((ebp - 0x281c))++;
        eax = *((ebp - 0x2820));
        eax = ebp - 0x80c;
        eax = fgets (eax, 0x800, eax);
    }
    eax = *((ebp - 0x281c));
    eax <<= 2;
    eax += *((ebp - 0x2810));
    *(eax) = 0;
    eax = ebp - 0x200c;
    *(esp) = eax;
    eax = opendir ();
    *((ebp - 0x282c)) = eax;
    *((ebp - 0x2838)) = 0;
    goto label_2;
label_0:
    eax = *((ebp - 0x2834));
    edx = eax + 0xb;
    eax = "%s/%s";
    *((esp + 0xc)) = edx;
    edx = ebp - 0x200c;
    eax = ebp - 0x280c;
    sprintf (eax, eax, edx);
    eax = *((ebp - 0x2834));
    eax += 0xb;
    eax = strcmp (eax, 0x8055e0a);
    if (eax == 0) {
        goto label_3;
    }
    eax = *((ebp - 0x2834));
    eax += 0xb;
    eax = strcmp (eax, 0x8055e0c);
    if (eax == 0) {
        goto label_4;
    }
    eax = ebp - 0x280c;
    *(esp) = eax;
    eax = opendir ();
    *((ebp - 0x2830)) = eax;
    if (*((ebp - 0x2830)) == 0) {
        goto label_5;
    }
    eax = *((ebp - 0x2830));
    *(esp) = eax;
    closedir ();
    eax = "%s/index.html";
    edx = ebp - 0x280c;
    eax = ebp - 0x180c;
    sprintf (eax, eax, edx);
    edx = 0x8055c93;
    eax = ebp - 0x180c;
    eax = fopen (eax, edx);
    *((ebp - 0x2828)) = eax;
    if (*((ebp - 0x2828)) == 0) {
        goto label_6;
    }
    *((ebp - 0x2840)) = 0;
    *((ebp - 0x2844)) = 0;
    *((ebp - 0x2848)) = 0;
    *((ebp - 0x281c)) = 0;
    while (eax != 0) {
        eax = ebp - 0x80c;
        eax = strstr (eax, "<title>");
        if (eax != 0) {
            *((ebp - 0x281c)) = 1;
        } else {
            eax = *((ebp - 0x2828));
            eax = ebp - 0x80c;
            eax = fgets (eax, 0x800, eax);
        }
    }
    if (*((ebp - 0x281c)) != 0) {
        ebx = "%i.%i.%i";
        eax = ebp - 0x80c;
        strchr (eax, 0x28);
        edx = eax + 1;
        eax = ebp - 0x2848;
        eax = ebp - 0x2844;
        eax = ebp - 0x2840;
        isoc99_sscanf (eax, ebx, eax);
        ecx = *((ebp - 0x2848));
        edx = *((ebp - 0x2844));
        eax = *((ebp - 0x2840));
        ebx = *((ebp - 0x2834));
        ebx += 0xb;
        *((esp + 0x14)) = ecx;
        *((esp + 0x10)) = edx;
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x2810));
        eax = *((ebp - 0x284c));
        new_ext_html (ebx, eax, eax);
        *((ebp - 0x2838))++;
        eax = *((ebp - 0x2828));
        fclose (eax);
        goto label_2;
label_3:
        goto label_2;
label_4:
        goto label_2;
label_5:
        goto label_2;
label_6:
    } else {
    }
label_2:
    eax = *((ebp - 0x282c));
    *(esp) = eax;
    eax = readdir ();
    *((ebp - 0x2834)) = eax;
    if (*((ebp - 0x2834)) != 0) {
        goto label_0;
    }
    eax = *((ebp - 0x282c));
    *(esp) = eax;
    closedir ();
    *((ebp - 0x281c)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x281c));
        eax <<= 2;
        eax += *((ebp - 0x2810));
        eax = *(eax);
        eax = *((ebp - 0x2824));
        fprintf (eax, eax);
        *((ebp - 0x281c))++;
        eax = *((ebp - 0x281c));
        eax <<= 2;
        eax += *((ebp - 0x2810));
        eax = *(eax);
    }
    eax = *((ebp - 0x2824));
    fflush (eax);
    eax = *((ebp - 0x2820));
    fclose (eax);
    eax = *((ebp - 0x2824));
    fclose (eax);
    *((ebp - 0x281c)) = 0;
    while (eax > *((ebp - 0x281c))) {
        eax = *((ebp - 0x281c));
        eax <<= 2;
        eax += *((ebp - 0x2810));
        eax = *(eax);
        free (eax);
        *((ebp - 0x281c))++;
        eax = *((ebp - 0x283c));
        edx = *((ebp - 0x2818));
        eax = edx + eax;
        eax += 0xa;
    }
    eax = *((ebp - 0x2810));
    free (eax);
    eax = *((ebp - 0x2838));
label_1:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (eax != *((ebp - 0x281c))) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804c41b */
#include <stdint.h>
 
int32_t dbg_new_item (char * arg_8h, char * arg_ch, size_t arg_10h) {
    char ** tcl_lines;
    char * menu;
    char * item;
    int32_t num_tokens;
    char * token;
    char[2048] tmp;
    char[2048] command;
    char[2048] entry;
    int32_t canary;
    int32_t line_no;
    char * format;
    size_t n;
    int32_t var_sp_ch;
    int32_t var_10h;
    /* int new_item(char * item,char * menu,char ** tcl_lines,int line_no); */
    eax = *((ebp + 8));
    *((ebp - 0x181c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1820)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x1824)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x181c));
    *(esp) = eax;
    chop ();
    eax = 0x8055341;
    eax = *((ebp - 0x181c));
    eax = strtok (eax, eax);
    *((ebp - 0x1810)) = eax;
    if (*((ebp - 0x1810)) == 0) {
        print_warning ("invalid token in 'entries-gisman'.\n");
        eax = 0xffffffff;
        goto label_0;
    }
    eax = *((ebp - 0x1810));
    eax = ebp - 0x80c;
    strcpy (eax, eax);
    *((ebp - 0x1814)) = 0;
    while (*((ebp - 0x1810)) != 0) {
        eax = 0x8055341;
        eax = strtok (0, eax);
        *((ebp - 0x1810)) = eax;
        if (*((ebp - 0x1810)) != 0) {
            eax = *((ebp - 0x1810));
            eax = ebp - 0x100c;
            strcpy (eax, eax);
        }
        *((ebp - 0x1814))++;
    }
    if (*((ebp - 0x1814)) > 2) {
        eax = *((ebp - 0x1814));
        print_warning ("invalid number of tokens (%i) in 'entries-gisman'.\n", eax);
        eax = 0xffffffff;
    } else {
        eax = ebp - 0x80c;
        eax = strcmp (eax, 0x805539c);
        if (eax == 0) {
            eax = ebp - 0x80c;
            eax = strcmp (eax, 0x805539c);
            if (eax == 0) {
                eax = " \t\t\t {separator}\n";
                eax = ebp - 0x180c;
                memcpy (eax, eax, 0x12);
            }
        } else {
            eax = " \t\t\t {command \"%s\" {} \"%s\" {} -command {%s }}\n";
            edx = ebp - 0x100c;
            *((esp + 0x10)) = edx;
            edx = ebp - 0x100c;
            *((esp + 0xc)) = edx;
            edx = ebp - 0x80c;
            eax = ebp - 0x180c;
            sprintf (eax, eax, edx);
        }
        eax = *((ebp - 0x1824));
        *((esp + 8)) = eax;
        eax = *((ebp + 0x14));
        eax = ebp - 0x180c;
        insert_str (eax, eax);
        *((ebp + 0x14))++;
        eax = *((ebp + 0x14));
    }
label_0:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (*((ebp + 0x14)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x80547fc */
#include <stdint.h>
 
void fini (void) {
    /* [14] -r-x section size 28 named .fini */
    void (*0x8054808)(uint32_t) (ebx);
    ebx += 0x47ec;
    _do_global_dtors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804ec17 */
#include <stdint.h>
 
int32_t dbg_deregister_html (size_t arg_8h, size_t arg_ch) {
    char * gisbase;
    char * pkg_short_name;
    FILE * f_out;
    FILE * f_in;
    int32_t i;
    int32_t n_lines;
    char ** line;
    char[2048] str;
    char[2048] file;
    int32_t canary;
    char * format;
    size_t n;
    char * var_sp_ch;
    size_t var_10h;
    size_t var_14h;
    int32_t var_18h;
    /* void deregister_html(char * pkg_short_name,char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x102c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1030)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "%s/docs/html/index.html";
    edx = *((ebp - 0x1030));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    edx = 0x8055c93;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x101c)) = eax;
    if (*((ebp - 0x101c)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            goto label_0;
        }
        eax = *((ebp - 0x101c));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffe8, "checking for file '%s': %s\n");
    }
    eax = "/tmp/grass.extensions.db.XXXXXX";
    memcpy (obj.TMP_HTML, eax, 0x20);
    mkstemp (obj.TMP_HTML);
    edx = 0x8055cd4;
    eax = TMP_HTML;
    eax = fopen (eax, edx);
    *((ebp - 0x1020)) = eax;
    if (*((ebp - 0x1020)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0x8067ac0;
        print_error (0xffffffe8, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit (dbg.exit_db);
    eax = VERBOSE;
    if (eax != 0) {
        eax = "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;";
        edx = *((ebp - 0x1030));
        *((esp + 0x10)) = edx;
        edx = *((ebp - 0x1030));
        *((esp + 0xc)) = edx;
        eax = ebp - 0x100c;
        sprintf (eax, eax, 0x8067ac0);
    } else {
        eax = "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;";
        *((esp + 0x18)) = 0x80672c0;
        edx = *((ebp - 0x1030));
        *((esp + 0x14)) = edx;
        *((esp + 0x10)) = 0x80672c0;
        edx = *((ebp - 0x1030));
        *((esp + 0xc)) = edx;
        eax = ebp - 0x100c;
        sprintf (eax, eax, 0x8067ac0);
    }
    eax = ebp - 0x100c;
    strcpy (obj.HTML_CMD, eax);
    *((ebp - 0x1014)) = 0;
    while (eax != 0) {
        *((ebp - 0x1014))++;
        eax = *((ebp - 0x101c));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    if (*((ebp - 0x1014)) == 0) {
        goto label_1;
    }
    eax = *((ebp - 0x101c));
    rewind (eax);
    eax = *((ebp - 0x1014));
    eax++;
    eax = calloc (eax, 4);
    *((ebp - 0x1010)) = eax;
    *((ebp - 0x1018)) = 0;
    while (eax > *((ebp - 0x1018))) {
        eax = *((ebp - 0x1018));
        eax <<= 2;
        eax += *((ebp - 0x1010));
        *(eax) = 0;
        *((ebp - 0x1018))++;
        eax = *((ebp - 0x1014));
        eax++;
    }
    *((ebp - 0x1018)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x1018));
        eax <<= 2;
        ebx = eax;
        ebx += *((ebp - 0x1010));
        eax = ebp - 0x100c;
        eax = strlen (eax);
        eax++;
        eax = malloc (eax);
        *(ebx) = eax;
        edx = ebp - 0x100c;
        eax = *((ebp - 0x1018));
        eax <<= 2;
        eax += *((ebp - 0x1010));
        eax = *(eax);
        strcpy (eax, edx);
        *((ebp - 0x1018))++;
        eax = *((ebp - 0x101c));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    eax = *((ebp - 0x1010));
    eax = *((ebp - 0x1030));
    eax = *((ebp - 0x102c));
    delete_ext_html (eax, eax, eax);
    *((ebp - 0x1018)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x1018));
        eax <<= 2;
        eax += *((ebp - 0x1010));
        eax = *(eax);
        eax = *((ebp - 0x1020));
        fprintf (eax, eax);
        *((ebp - 0x1018))++;
        eax = *((ebp - 0x1018));
        eax <<= 2;
        eax += *((ebp - 0x1010));
        eax = *(eax);
    }
    eax = *((ebp - 0x1020));
    fflush (eax);
    eax = *((ebp - 0x101c));
    fclose (eax);
    eax = *((ebp - 0x1020));
    fclose (eax);
    *((ebp - 0x1018)) = 0;
    while (eax > *((ebp - 0x1018))) {
        eax = *((ebp - 0x1018));
        eax <<= 2;
        eax += *((ebp - 0x1010));
        eax = *(eax);
        free (eax);
        *((ebp - 0x1018))++;
        eax = *((ebp - 0x1014));
        eax++;
    }
    eax = *((ebp - 0x1010));
    free (eax);
    goto label_2;
label_0:
    goto label_2;
label_1:
label_2:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != *((ebp - 0x1018))) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804949b */
#include <stdint.h>
 
int32_t dbg_print_warning (int32_t arg_8h, char * arg_ch) {
    char * msg;
    va_list ap;
    char[2048] buffer;
    int32_t canary;
    char * format;
    va_list arg;
    /* void print_warning(char * msg,va_args ...); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = ebp + 0xc;
    *((ebp - 0x810)) = eax;
    edx = *((ebp - 0x810));
    eax = *((ebp - 0x81c));
    eax = ebp - 0x80c;
    vsprintf (eax, eax, edx);
    edx = "\e[0;33m\nWARNING:\e[0m %s";
    eax = stderr;
    ecx = ebp - 0x80c;
    *((esp + 8)) = ecx;
    fprintf (eax, edx);
    eax = WARNINGS;
    eax++;
    *(obj.WARNINGS) = eax;
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048b44 */
#include <stdint.h>
 
void vsprintf (void) {
    vsprintf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048fc2 */
#include <stdint.h>
 
int32_t dbg_exit_db (void) {
    int32_t error;
    char[2048] tmp;
    int32_t canary;
    size_t format;
    size_t nitems;
    FILE * stream;
    /* void exit_db(); */
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = TMPDBCLEAN;
    if (eax == 0) {
        *(esp) = obj.CWD;
        chdir ();
        eax = VERBOSE;
        if (eax != 0) {
            eax = stdout;
            edx = stdout;
            eax = "Removing temporary registration files...";
            fwrite (edx, 1, 0x28);
        }
        eax = TMPDB;
        eax = *(eax);
        if (al != 0) {
            eax = "rm -rf %s";
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x8063ac0);
            eax = ebp - 0x80c;
            eax = system (eax);
            *((ebp - 0x810)) = eax;
            if (*((ebp - 0x810)) == 0) {
                goto label_0;
            }
            print_warning ("could not remove temporary file %s.\nPlease remove manually.\n", obj.TMPDB);
        }
label_0:
        eax = TMP_GISMAN;
        eax = *(eax);
        if (al != 0) {
            eax = "rm -f %s";
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x80642c0);
            eax = ebp - 0x80c;
            eax = system (eax);
            *((ebp - 0x810)) = eax;
            if (*((ebp - 0x810)) == 0) {
                goto label_1;
            }
            print_warning ("could not remove temporary file %s.\nPlease remove manually.\n", obj.TMP_GISMAN);
        }
label_1:
        eax = TMP_DESCR;
        eax = *(eax);
        if (al != 0) {
            eax = "rm -f %s";
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x8064ac0);
            eax = ebp - 0x80c;
            eax = system (eax);
            *((ebp - 0x810)) = eax;
            if (*((ebp - 0x810)) == 0) {
                goto label_2;
            }
            print_warning ("could not remove temporary file %s.\nPlease remove manually.\n", obj.TMP_DESCR);
        }
label_2:
        eax = TMP_INFO;
        eax = *(eax);
        if (al != 0) {
            eax = "rm -f %s";
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x80652c0);
            eax = ebp - 0x80c;
            eax = system (eax);
            *((ebp - 0x810)) = eax;
            if (*((ebp - 0x810)) == 0) {
                goto label_3;
            }
            print_warning ("could not remove temporary file %s.\nPlease remove manually.\n", obj.TMP_INFO);
        }
label_3:
        eax = TMP_DEPS;
        eax = *(eax);
        if (al != 0) {
            eax = "rm -f %s";
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x8065ac0);
            eax = ebp - 0x80c;
            eax = system (eax);
            *((ebp - 0x810)) = eax;
            if (*((ebp - 0x810)) == 0) {
                goto label_4;
            }
            print_warning ("could not remove temporary file %s.\nPlease remove manually.\n", obj.TMP_INFO);
        }
label_4:
        eax = TMP_BUGS;
        eax = *(eax);
        if (al != 0) {
            eax = "rm -f %s";
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x80662c0);
            eax = ebp - 0x80c;
            eax = system (eax);
            *((ebp - 0x810)) = eax;
            if (*((ebp - 0x810)) == 0) {
                goto label_5;
            }
            print_warning ("could not remove temporary file %s.\nPlease remove manually.\n", obj.TMP_INFO);
        }
label_5:
        eax = TMP_AUTHORS;
        eax = *(eax);
        if (al != 0) {
            eax = "rm -f %s";
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x8066ac0);
            eax = ebp - 0x80c;
            eax = system (eax);
            *((ebp - 0x810)) = eax;
            if (*((ebp - 0x810)) == 0) {
                goto label_6;
            }
            print_warning ("could not remove temporary file %s.\nPlease remove manually.\n", obj.TMP_INFO);
        }
label_6:
        eax = TMP_HTML;
        eax = *(eax);
        if (al != 0) {
            eax = "rm -f %s";
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x8067ac0);
            eax = ebp - 0x80c;
            eax = system (eax);
            *((ebp - 0x810)) = eax;
            if (*((ebp - 0x810)) == 0) {
                goto label_7;
            }
            print_warning ("could not remove temporary file %s.\nPlease remove manually.\n", obj.TMP_HTML);
        }
label_7:
        eax = VERBOSE;
        if (eax == 0) {
            eax = TMP_NULL;
            eax = *(eax);
            if (al == 0) {
                goto label_8;
            }
            eax = "rm -f %s";
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x80672c0);
            eax = ebp - 0x80c;
            eax = system (eax);
            *((ebp - 0x810)) = eax;
            if (*((ebp - 0x810)) == 0) {
                goto label_8;
            }
            print_warning ("could not remove temporary file %s.\nPlease remove manually.\n", obj.TMP_NULL);
        }
label_8:
        eax = VERBOSE;
        if (eax != 0) {
            print_done ();
        }
        *(obj.TMPDBCLEAN) = 1;
    }
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804ae20 */
#include <stdint.h>
 
int32_t dbg_depstr (int32_t arg_8h, char * arg_ch) {
    char * gisbase;
    char * package;
    FILE * f_deps;
    int32_t error;
    int32_t first;
    char * str;
    char[2048] short_name;
    char[2048] line;
    char[2048] file;
    char * canary;
    char * format;
    size_t n;
    char * var_sp_ch;
    /* char * depstr(char * package,char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x182c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1830)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "../depends";
    eax = ebp - 0x80c;
    memcpy (eax, eax, 0xb);
    edx = 0x8054d13;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x181c)) = eax;
    if (*((ebp - 0x181c)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            eax = 0x8054d15;
            goto label_0;
        }
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffef, "checking for file '%s': %s\n");
    }
    *((ebp - 0x1814)) = 1;
    eax = malloc (0x800);
    *((ebp - 0x1810)) = eax;
    while (eax != 0) {
        eax = ebp - 0x100c;
        eax = *(eax);
        if (al != 0) {
            edx = 0x8054d32;
            eax = ebp - 0x100c;
            ecx = ebp - 0x180c;
            eax = isoc99_sscanf (eax, edx, ecx);
            *((ebp - 0x1818)) = eax;
            if (*((ebp - 0x1818)) <= 0) {
                goto label_1;
            }
            eax = ebp - 0x180c;
            eax = strcmp ("GRASS", eax);
            if (eax == 0) {
                goto label_1;
            }
            if (*((ebp - 0x1814)) != 0) {
                eax = 0x8054d3b;
                eax = *((ebp - 0x1810));
                strcat (eax, eax);
                eax = ebp - 0x180c;
                eax = *((ebp - 0x1810));
                strcat (eax, eax);
                *((ebp - 0x1814)) = 0;
            } else {
                eax = 0x8054d3d;
                eax = *((ebp - 0x1810));
                strcat (eax, eax);
                eax = ebp - 0x180c;
                eax = *((ebp - 0x1810));
                strcat (eax, eax);
            }
        }
label_1:
        eax = *((ebp - 0x181c));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x800;
        eax = ebp - 0x100c;
        eax = nc_fgets_nb (eax);
    }
    eax = *((ebp - 0x181c));
    fclose (eax);
    eax = *((ebp - 0x1810));
label_0:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049e14 */
#include <stdint.h>
 
int32_t dbg_nc_fgets_html (char * arg_10h) {
    int32_t space;
    char * insert;
    char * pos;
    char * tag_content;
    char * tag_insert;
    char * tag_2;
    char * tag;
    char * tmp;
    char * hashmark;
    char * s;
    int32_t size;
    char * format;
    char * stream;
    /* char * nc_fgets_html(char * s,int size,FILE * stream); */
label_1:
    eax = *((ebp + 0x10));
    eax = *((ebp + 0xc));
    eax = *((ebp + 8));
    eax = fgets (eax, eax, eax);
    if (eax == 0) {
        eax = 0;
        goto label_2;
    }
    eax = *((ebp + 8));
    eax = strlen (eax);
    eax++;
    eax = malloc (eax);
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 8));
    eax = strlen (eax);
    eax++;
    eax = malloc (eax);
    *((ebp - 0x20)) = eax;
    eax = *((ebp - 0x10));
    *((ebp - 0x28)) = eax;
    eax = *((ebp + 8));
    *((ebp - 0x24)) = eax;
    goto label_3;
label_0:
    eax = *((ebp - 0x24));
    eax = *(eax);
    if (al != 0x3c) {
        goto label_4;
    }
    eax = *((ebp - 0x24));
    *((ebp - 0x14)) = eax;
    eax = *((ebp - 0x20));
    *((ebp - 0x1c)) = eax;
    *((ebp - 0x24))--;
    eax = *((ebp - 0x24));
    if (eax < *((ebp + 8))) {
        goto label_5;
    }
    eax = *((ebp - 0x24));
    eax = *(eax);
    if (al == 0x20) {
        *((ebp - 0x2c)) = 1;
        goto label_6;
    }
    *((ebp - 0x2c)) = 0;
    while (al != 0) {
        eax = *((ebp - 0x14));
        edx = *(eax);
        eax = *((ebp - 0x1c));
        *(eax) = dl;
        eax = *((ebp - 0x1c));
        eax = *(eax);
        edx = eax + 1;
        eax = *((ebp - 0x1c));
        *(eax) = dl;
        eax = *((ebp - 0x14));
        eax = *(eax);
        if (al == 0x3e) {
            eax = *((ebp - 0x1c));
            *(eax) = 0;
            eax = *((ebp - 0x14));
            *((ebp - 0x18)) = eax;
            *((ebp - 0x18))++;
            eax = *((ebp - 0x18));
            eax = *(eax);
            if (al != 0xa) {
                eax = *((ebp - 0x20));
                eax = strstr (eax, "<br>");
                if (eax != 0) {
                    eax = *((ebp - 0x28));
                    if (eax <= *((ebp - 0x10))) {
                        goto label_7;
                    }
                    eax = *((ebp - 0x28));
                    *(eax) = 0xa;
                    eax = *((ebp - 0x28));
                    eax = *(eax);
                    edx = eax + 1;
                    eax = *((ebp - 0x28));
                    *(eax) = dl;
                }
label_7:
                eax = *((ebp - 0x20));
                eax = strstr (eax, "<BR>");
                if (eax != 0) {
                    eax = *((ebp - 0x28));
                    if (eax <= *((ebp - 0x10))) {
                        goto label_8;
                    }
                    eax = *((ebp - 0x28));
                    *(eax) = 0xa;
                    eax = *((ebp - 0x28));
                    eax = *(eax);
                    edx = eax + 1;
                    eax = *((ebp - 0x28));
                    *(eax) = dl;
                }
label_8:
                eax = *((ebp - 0x20));
                eax = strstr (eax, 0x8054ac0);
                if (eax != 0) {
                    eax = *((ebp - 0x28));
                    if (eax > *((ebp - 0x10))) {
                        eax = *((ebp - 0x28));
                        *(eax) = 0xa;
                        eax = *((ebp - 0x28));
                        eax = *(eax);
                        edx = eax + 1;
                        eax = *((ebp - 0x28));
                        *(eax) = dl;
                    }
                    eax = *((ebp - 0x28));
                    *(eax) = 0xa;
                    eax = *((ebp - 0x28));
                    eax = *(eax);
                    edx = eax + 1;
                    eax = *((ebp - 0x28));
                    *(eax) = dl;
                }
                eax = *((ebp - 0x20));
                eax = strstr (eax, 0x8054ac4);
                if (eax == 0) {
                    goto label_9;
                }
                eax = *((ebp - 0x28));
                if (eax > *((ebp - 0x10))) {
                    eax = *((ebp - 0x28));
                    *(eax) = 0xa;
                    eax = *((ebp - 0x28));
                    eax = *(eax);
                    edx = eax + 1;
                    eax = *((ebp - 0x28));
                    *(eax) = dl;
                }
                eax = *((ebp - 0x28));
                *(eax) = 0xa;
                eax = *((ebp - 0x28));
                eax = *(eax);
                edx = eax + 1;
                eax = *((ebp - 0x28));
                *(eax) = dl;
            }
label_9:
            eax = *((ebp - 0x14));
            *((ebp - 0x24)) = eax;
            eax = *((ebp - 0x24));
            eax = *(eax);
            if (al != 0x20) {
                goto label_10;
            }
            if (*((ebp - 0x2c)) != 1) {
                goto label_11;
            }
            *((ebp - 0x24))++;
            *((ebp - 0x2c)) = 0;
            goto label_4;
        }
        *((ebp - 0x14))++;
        goto label_6;
label_5:
label_6:
        eax = *((ebp - 0x14));
        eax = *(eax);
    }
    goto label_4;
label_10:
    goto label_4;
label_11:
label_4:
    eax = *((ebp - 0x24));
    eax = *(eax);
    if (al != 0x3e) {
        eax = *((ebp - 0x24));
        edx = *(eax);
        eax = *((ebp - 0x28));
        *(eax) = dl;
        *((ebp - 0x28))++;
    }
    *((ebp - 0x24))++;
label_3:
    eax = *((ebp - 0x24));
    eax = *(eax);
    if (al != 0) {
        goto label_0;
    }
    eax = *((ebp - 0x28));
    *(eax) = 0;
    eax = *((ebp - 0x10));
    eax = *((ebp + 8));
    strcpy (eax, eax);
    eax = *((ebp - 0x10));
    free (eax);
    eax = *((ebp - 0x20));
    free (eax);
    eax = *((ebp + 8));
    eax = strchr (eax, 0x23);
    *((ebp - 0xc)) = eax;
    if (*((ebp - 0xc)) != 0) {
        eax = *((ebp + 8));
        if (eax == *((ebp - 0xc))) {
            eax = *((ebp + 0x10));
            *((esp + 8)) = eax;
            eax = *((ebp + 0xc));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            nc_fgets_html (eax);
            goto label_1;
            goto label_2;
        }
        eax = malloc (0x800);
        *((ebp - 0x10)) = eax;
        eax = *((ebp + 8));
        eax = *((ebp - 0x10));
        strcpy (eax, eax);
        eax = 0x8054ab0;
        eax = *((ebp - 0x10));
        eax = strtok (eax, eax);
        *((ebp - 0x10)) = eax;
        eax = 0x8054ab2;
        edx = *((ebp - 0x10));
        eax = *((ebp + 8));
        sprintf (eax, eax, edx);
        eax = *((ebp - 0x10));
        free (eax);
    }
    eax = *((ebp + 8));
label_2:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804cd6c */
#include <stdint.h>
 
int32_t dbg_register_entries_gisman2 (size_t arg_8h, char * arg_ch) {
    char * gisbase;
    char * pkg_short_name;
    FILE * f_gisman2;
    char[2048] str;
    char[2048] file;
    int32_t canary;
    char * format;
    size_t n;
    char * var_sp_ch;
    size_t var_10h;
    /* void register_entries_gisman2(char * pkg_short_name,char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x101c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1020)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "../entries-gisman2";
    eax = ebp - 0x80c;
    memcpy (eax, eax, 0x13);
    edx = 0x80553f1;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x1010)) = eax;
    if (*((ebp - 0x1010)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            goto label_0;
        }
        eax = *((ebp - 0x1010));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffe0, "checking for file '%s': %s\n");
    }
    eax = VERBOSE;
    if (eax != 0) {
        eax = "mkdir --verbose -p %s/etc/gm/Xtns ; cp -fv ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ";
        edx = *((ebp - 0x101c));
        *((esp + 0x10)) = edx;
        edx = *((ebp - 0x1020));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x1020));
        eax = ebp - 0x100c;
        sprintf (eax, eax, edx);
    } else {
        eax = "mkdir -p %s/etc/gm/Xtns ; cp -f ../entries-gisman2 %s/etc/gm/Xtns/%s.gem ; ";
        edx = *((ebp - 0x101c));
        *((esp + 0x10)) = edx;
        edx = *((ebp - 0x1020));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x1020));
        eax = ebp - 0x100c;
        sprintf (eax, eax, edx);
    }
    eax = ebp - 0x100c;
    strcpy (obj.GISMAN2_CMD, eax);
    goto label_1;
label_0:
label_1:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049c27 */
#include <stdint.h>
 
int32_t dbg_get_package_name (char * arg_8h, size_t arg_ch) {
    char * name;
    char * path;
    FILE * f;
    char[2048] tmp;
    char[2048] file;
    int32_t canary;
    char * format;
    char * var_8h;
    char * var_sp_ch;
    /* void get_package_name(char * path,char * name); */
    eax = *((ebp + 8));
    *((ebp - 0x101c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1020)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "%s/%s";
    *((esp + 0xc)) = "name";
    edx = *((ebp - 0x101c));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    edx = 0x8054a6f;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x1010)) = eax;
    if (*((ebp - 0x1010)) == 0) {
        print_error (0xfffffffa, 'name' file not readable.\n");
    }
    eax = *((ebp - 0x1010));
    *((esp + 8)) = eax;
    *((esp + 4)) = 0x800;
    eax = ebp - 0x100c;
    eax = nc_fgets_nb (eax);
    if (eax == 0) {
        eax = *((ebp - 0x1010));
        fclose (eax);
        print_error (0xfffffffa, "invalid or missing extension name.\n");
    }
    eax = ebp - 0x100c;
    *(esp) = eax;
    chop ();
    eax = ebp - 0x100c;
    eax = *((ebp - 0x1020));
    strcpy (eax, eax);
    eax = *((ebp - 0x1010));
    fclose (eax);
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8054790 */
#include <stdint.h>
 
int32_t stat (char * arg_8h, size_t arg_ch) {
    char * var_4h;
    int32_t var_8h;
    eax = *((ebp + 0xc));
    eax = _i686_get_pc_thunk_bx (ebx);
    ebx += 0x4855;
    *(esp) = 3;
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    xstat ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x805474a */
#include <stdint.h>
 
void i686_get_pc_thunk_bx (void) {
    ebx = *(esp);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048b04 */
#include <stdint.h>
 
void xstat (void) {
    xstat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8054750 */
#include <stdint.h>
 
int32_t atexit (int32_t arg_8h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx);
    ebx += 0x489b;
    eax = *((ebx - 4));
    if (eax != 0) {
        eax = *(eax);
    }
    *((esp + 8)) = eax;
    eax = *((ebp + 8));
    *((esp + 4)) = 0;
    *(esp) = eax;
    cxa_atexit ();
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048ae4 */
#include <stdint.h>
 
void cxa_atexit (void) {
    cxa_atexit ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8051cf4 */
#include <stdint.h>
 
int32_t dbg_uninstall (char * arg_8h, size_t arg_ch, size_t arg_10h, char ** arg_14h) {
    char * grass_version;
    char * gisbase;
    char * pkg_short_name;
    char * package;
    stat buf;
    int32_t revision;
    int32_t minor;
    int32_t major;
    char * grass_revision;
    char * grass_minor;
    char * grass_major;
    char * verstr;
    int32_t no_script;
    int32_t error;
    char[2048] script;
    char[2048] tmp;
    int32_t canary;
    size_t format;
    size_t nitems;
    FILE * stream;
    size_t var_10h;
    size_t var_14h;
    size_t var_18h;
    size_t var_1ch;
    int32_t var_20h;
    size_t var_24h;
    size_t var_28h;
    int32_t var_2ch;
    int32_t var_30h;
    size_t var_34h;
    int32_t var_38h;
    size_t var_3ch;
    int32_t var_40h;
    /* void uninstall(char * package,char * pkg_short_name,char * gisbase,char * grass_version); */
    eax = *((ebp + 8));
    *((ebp - 0x108c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1090)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x1094)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x1098)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = stdout;
    edx = stdout;
    eax = "Un-installing...";
    fwrite (edx, 1, 0x10);
    eax = "UNINSTALL_BASE=%s";
    edx = *((ebp - 0x1094));
    sprintf (obj.UNINSTALL_BASE, eax, edx);
    *(esp) = obj.UNINSTALL_BASE;
    putenv ();
    eax = *((ebp - 0x1098));
    eax = strdup (eax);
    *((ebp - 0x1018)) = eax;
    eax = 0x8055edb;
    eax = *((ebp - 0x1018));
    eax = strtok (eax, eax);
    *((ebp - 0x101c)) = eax;
    eax = 0x8055edb;
    eax = strtok (0, eax);
    *((ebp - 0x1020)) = eax;
    eax = 0x8055edb;
    eax = strtok (0, eax);
    *((ebp - 0x1024)) = eax;
    eax = *((ebp - 0x101c));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x1028)) = eax;
    eax = *((ebp - 0x1020));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x102c)) = eax;
    eax = *((ebp - 0x1024));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x1030)) = eax;
    eax = *((ebp - 0x1018));
    free (eax);
    atexit (dbg.exit_tmp);
    eax = *((ebp - 0x1094));
    eax = *((ebp - 0x1090));
    eax = *((ebp - 0x108c));
    deregister_extension (eax, eax, eax);
    if (*((ebp - 0x1028)) == 6) {
        if (*((ebp - 0x102c)) > 0) {
            goto label_0;
        }
        eax = *((ebp - 0x1094));
        eax = *((ebp - 0x1090));
        eax = deregister_entries_gisman (eax, eax);
        *((ebp - 0x1010)) = eax;
        if (*((ebp - 0x1010)) == -1) {
            print_warning ("GIS Manager menu entries could not be removed.\n");
            eax = 0x805698c;
            memcpy (obj.GISMAN_CMD, eax, 1);
        }
        if (*((ebp - 0x1010)) != 0) {
            goto label_0;
        }
        print_warning ("no entries found to remove from GIS Manager.\n");
        eax = 0x805698c;
        memcpy (obj.GISMAN_CMD, eax, 1);
    }
label_0:
    eax = *((ebp - 0x1094));
    eax = *((ebp - 0x1090));
    deregister_entries_gisman2 (eax, eax);
    eax = *((ebp - 0x1094));
    eax = *((ebp - 0x1090));
    deregister_html (eax, eax);
    eax = "%s/etc/uninstall.%s";
    edx = *((ebp - 0x1090));
    *((esp + 0xc)) = edx;
    edx = *((ebp - 0x1094));
    eax = ebp - 0x100c;
    sprintf (eax, eax, edx);
    *((ebp - 0x1014)) = 0;
    eax = ebp - 0x100c;
    edx = ebp - 0x1088;
    eax = _stat (eax, edx);
    *((ebp - 0x1010)) = eax;
    if (*((ebp - 0x1010)) < 0) {
        print_warning ("no uninstall script available for this extension.\n \t\t\tUnneeded files may have been left on your system.\n");
        *((ebp - 0x1014)) = 1;
    }
    if (*((ebp - 0x1014)) != 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        print_warning ("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", eax);
    } else {
        eax = VERBOSE;
        if (eax != 0) {
            eax = "sh %s ; rm -vf %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s ; rm -vf %s/etc/dm/gem-entries/%s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;";
            edx = *((ebp - 0x1094));
            *((esp + 0x28)) = edx;
            edx = *((ebp - 0x1094));
            *((esp + 0x24)) = edx;
            *((esp + 0x20)) = 0x8063ac0;
            edx = *((ebp - 0x1090));
            *((esp + 0x1c)) = edx;
            edx = *((ebp - 0x1094));
            *((esp + 0x18)) = edx;
            edx = *((ebp - 0x1090));
            *((esp + 0x14)) = edx;
            edx = *((ebp - 0x1094));
            *((esp + 0x10)) = edx;
            edx = ebp - 0x100c;
            *((esp + 0xc)) = edx;
            edx = ebp - 0x100c;
            eax = ebp - 0x80c;
            sprintf (eax, eax, edx);
            eax = ebp - 0x80c;
            strcpy (obj.UNINSTALL_CMD, eax);
        } else {
            eax = "sh %s &> %s ; rm -vf %s &> %s ; \t\t\t\t\t \t\trm -vrf %s/docs/extensions/%s &> %s ; rm -vf %s/etc/dm/gem-entries/%s &> %s ; \t\t\t\t\t\t\tcp -vf %s %s/etc/extensions.db &> %s ; chmod -v a+r %s/etc/extensions.db &> %s ;";
            *((esp + 0x40)) = 0x80672c0;
            edx = *((ebp - 0x1094));
            *((esp + 0x3c)) = edx;
            *((esp + 0x38)) = 0x80672c0;
            edx = *((ebp - 0x1094));
            *((esp + 0x34)) = edx;
            *((esp + 0x30)) = 0x8063ac0;
            *((esp + 0x2c)) = 0x80672c0;
            edx = *((ebp - 0x1090));
            *((esp + 0x28)) = edx;
            edx = *((ebp - 0x1094));
            *((esp + 0x24)) = edx;
            *((esp + 0x20)) = 0x80672c0;
            edx = *((ebp - 0x1090));
            *((esp + 0x1c)) = edx;
            edx = *((ebp - 0x1094));
            *((esp + 0x18)) = edx;
            *((esp + 0x14)) = 0x80672c0;
            edx = ebp - 0x100c;
            *((esp + 0x10)) = edx;
            *((esp + 0xc)) = 0x80672c0;
            edx = ebp - 0x100c;
            eax = ebp - 0x80c;
            sprintf (eax, eax, edx);
            eax = ebp - 0x80c;
            strcpy (obj.UNINSTALL_CMD, eax);
        }
    }
    eax = "%s %s %s";
    *((esp + 0x10)) = 0x80692e0;
    *((esp + 0xc)) = 0x80682e0;
    eax = ebp - 0x80c;
    sprintf (eax, eax, 0x806a2e0);
    eax = ebp - 0x80c;
    *((esp + 4)) = eax;
    eax = *((ebp - 0x1094));
    su (eax);
    print_done ();
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804e7f3 */
#include <stdint.h>
 
int32_t dbg_register_html (size_t arg_8h, char * arg_ch) {
    char * gisbase;
    char * pkg_short_name;
    FILE * f_out;
    FILE * f_in;
    int32_t i;
    int32_t n_lines;
    char ** line;
    char[2048] str;
    char[2048] file;
    int32_t canary;
    int32_t major;
    int32_t minor;
    int32_t revision;
    char * format;
    char * n;
    char * var_sp_ch;
    char * var_10h;
    char * var_14h;
    int32_t var_18h;
    /* void register_html(char * pkg_short_name,char * gisbase,int major,int minor,int revision); */
    eax = *((ebp + 8));
    *((ebp - 0x102c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1030)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "%s/docs/html/index.html";
    edx = *((ebp - 0x1030));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    edx = 0x8055c93;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x101c)) = eax;
    if (*((ebp - 0x101c)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            goto label_0;
        }
        eax = *((ebp - 0x101c));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffe8, "checking for file '%s': %s\n");
    }
    eax = "/tmp/grass.extensions.db.XXXXXX";
    memcpy (obj.TMP_HTML, eax, 0x20);
    mkstemp (obj.TMP_HTML);
    edx = 0x8055cd4;
    eax = TMP_HTML;
    eax = fopen (eax, edx);
    *((ebp - 0x1020)) = eax;
    if (*((ebp - 0x1020)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0x8067ac0;
        print_error (0xffffffe8, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit (dbg.exit_db);
    eax = VERBOSE;
    if (eax != 0) {
        eax = "cp -vf %s %s/docs/html/index.html ; chmod -v a+r %s/docs/html/index.html ;";
        edx = *((ebp - 0x1030));
        *((esp + 0x10)) = edx;
        edx = *((ebp - 0x1030));
        *((esp + 0xc)) = edx;
        eax = ebp - 0x100c;
        sprintf (eax, eax, 0x8067ac0);
    } else {
        eax = "cp -f %s %s/docs/html/index.html &>%s ; chmod a+r %s/docs/html/index.html &>%s ;";
        *((esp + 0x18)) = 0x80672c0;
        edx = *((ebp - 0x1030));
        *((esp + 0x14)) = edx;
        *((esp + 0x10)) = 0x80672c0;
        edx = *((ebp - 0x1030));
        *((esp + 0xc)) = edx;
        eax = ebp - 0x100c;
        sprintf (eax, eax, 0x8067ac0);
    }
    eax = ebp - 0x100c;
    strcpy (obj.HTML_CMD, eax);
    *((ebp - 0x1014)) = 0;
    while (eax != 0) {
        *((ebp - 0x1014))++;
        eax = *((ebp - 0x101c));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    if (*((ebp - 0x1014)) == 0) {
        goto label_1;
    }
    eax = *((ebp - 0x101c));
    rewind (eax);
    eax = *((ebp - 0x1014));
    eax += 0xa;
    eax = calloc (eax, 4);
    *((ebp - 0x1010)) = eax;
    *((ebp - 0x1018)) = 0;
    while (eax > *((ebp - 0x1018))) {
        eax = *((ebp - 0x1018));
        eax <<= 2;
        eax += *((ebp - 0x1010));
        *(eax) = 0;
        *((ebp - 0x1018))++;
        eax = *((ebp - 0x1014));
        eax += 0xa;
    }
    *((ebp - 0x1018)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x1018));
        eax <<= 2;
        ebx = eax;
        ebx += *((ebp - 0x1010));
        eax = ebp - 0x100c;
        eax = strlen (eax);
        eax++;
        eax = malloc (eax);
        *(ebx) = eax;
        edx = ebp - 0x100c;
        eax = *((ebp - 0x1018));
        eax <<= 2;
        eax += *((ebp - 0x1010));
        eax = *(eax);
        strcpy (eax, edx);
        *((ebp - 0x1018))++;
        eax = *((ebp - 0x101c));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    eax = *((ebp + 0x18));
    *((esp + 0x14)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x10));
    *((esp + 0xc)) = eax;
    eax = *((ebp - 0x1010));
    eax = *((ebp - 0x1030));
    eax = *((ebp - 0x102c));
    new_ext_html (eax, eax, eax);
    *((ebp - 0x1018)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x1018));
        eax <<= 2;
        eax += *((ebp - 0x1010));
        eax = *(eax);
        eax = *((ebp - 0x1020));
        fprintf (eax, eax);
        *((ebp - 0x1018))++;
        eax = *((ebp - 0x1018));
        eax <<= 2;
        eax += *((ebp - 0x1010));
        eax = *(eax);
    }
    eax = *((ebp - 0x1020));
    fflush (eax);
    eax = *((ebp - 0x101c));
    fclose (eax);
    eax = *((ebp - 0x1020));
    fclose (eax);
    *((ebp - 0x1018)) = 0;
    while (eax > *((ebp - 0x1018))) {
        eax = *((ebp - 0x1018));
        eax <<= 2;
        eax += *((ebp - 0x1010));
        eax = *(eax);
        free (eax);
        *((ebp - 0x1018))++;
        eax = *((ebp - 0x1014));
        eax += 0xa;
    }
    eax = *((ebp - 0x1010));
    free (eax);
    goto label_2;
label_0:
    goto label_2;
label_1:
label_2:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != *((ebp - 0x1018))) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x80521a4 */
#include <stdint.h>
 
int32_t dbg_source_clean (char * arg_8h) {
    char * package;
    int32_t error;
    char[2048] sysstr;
    char[2048] dir;
    int32_t canary;
    char * format;
    char * nitems;
    FILE * stream;
    /* int source_clean(char * package); */
    eax = *((ebp + 8));
    *((ebp - 0x101c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x101c));
    *(esp) = eax;
    eax = basename ();
    edx = "%s/src";
    eax = ebp - 0x80c;
    sprintf (eax, edx, eax);
    eax = ebp - 0x80c;
    *(esp) = eax;
    eax = chdir ();
    *((ebp - 0x1010)) = eax;
    if (*((ebp - 0x1010)) < 0) {
        eax = *((ebp - 0x101c));
        *((esp + 8)) = eax;
        print_error (0xfffffffe, "extension '%s' not accessible: ");
    }
    eax = VERBOSE;
    if (eax != 0) {
        edx = "Running '%s clean':\n";
        eax = stdout;
        *((esp + 8)) = 0x806bae0;
        fprintf (eax, edx);
        eax = "%s -f Makefile clean";
        eax = ebp - 0x100c;
        sprintf (eax, eax, 0x806bae0);
        eax = ebp - 0x100c;
        eax = system (eax);
        *((ebp - 0x1010)) = eax;
    } else {
        eax = stdout;
        edx = stdout;
        eax = "Cleaning up...";
        fwrite (edx, 1, 0xe);
        eax = "%s -f Makefile -s clean &> %s";
        *((esp + 0xc)) = 0x80672c0;
        eax = ebp - 0x100c;
        sprintf (eax, eax, 0x806bae0);
        eax = ebp - 0x100c;
        eax = system (eax);
        *((ebp - 0x1010)) = eax;
    }
    if (*((ebp - 0x1010)) == -1) {
        *((esp + 8)) = obj.MAKE_CMD;
        print_error (0xfffffff7, "could not run '%s clean' do you have make tools installed?\n");
    }
    print_done ();
    system ("sh ../post");
    eax = 0;
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (*((ebp - 0x1010)) != -1) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804faab */
#include <stdint.h>
 
int32_t dbg_unpack_extension (char * arg_8h) {
    char * package;
    int32_t ftype;
    int32_t fd;
    int32_t error;
    char[2048] tmp;
    int32_t canary;
    size_t format;
    size_t nitems;
    FILE * stream;
    int32_t var_10h;
    /* void unpack_extension(char * package); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = stdout;
    edx = stdout;
    eax = "Uncompressing files...";
    fwrite (edx, 1, 0x16);
    eax = "/tmp/grass.extension.XXXXXX";
    memcpy (obj.TMPDIR, eax, 0x1c);
    mkstemp (obj.TMPDIR);
    eax = open (obj.TMPDIR, 0x40, 0x1ff);
    *((ebp - 0x814)) = eax;
    if (*((ebp - 0x814)) == -1) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 8)) = eax;
        print_error (0xfffffff9, "could not create temp directory name: %s");
    }
    eax = VERBOSE;
    if (eax != 0) {
        edx = "\nUncompressing to: %s.\n";
        eax = stdout;
        *((esp + 8)) = 0x80632c0;
        fprintf (eax, edx);
    }
    eax = *((ebp - 0x814));
    close (eax);
    remove (obj.TMPDIR);
    mkdir_s (obj.TMPDIR, "0700");
    atexit (dbg.exit_tmp);
    eax = "cp %s %s";
    *((esp + 0xc)) = 0x80632c0;
    edx = *((ebp - 0x81c));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = ebp - 0x80c;
    eax = system (eax);
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) < 0) {
        print_error (0xfffffff9, "could not copy extension files to temp dir.\n");
    }
    eax = *((ebp - 0x81c));
    *(esp) = eax;
    eax = check_filetype ();
    *((ebp - 0x818)) = eax;
    if (*((ebp - 0x818)) == 0) {
        print_warning ("file name not '.tar.gz', '.tgz', '.tar.bz2', '.tbz' or '.zip'. Assuming '.tgz'.\n");
        *((ebp - 0x818)) = 1;
    }
    if (*((ebp - 0x818)) == 1) {
        eax = VERBOSE;
        if (eax != 0) {
            eax = *((ebp - 0x81c));
            *(esp) = eax;
            eax = basename ();
            edx = "tar -xzvf %s/%s -C %s";
            *((esp + 0x10)) = 0x80632c0;
            *((esp + 0xc)) = eax;
            eax = ebp - 0x80c;
            sprintf (eax, edx, 0x80632c0);
        } else {
            eax = *((ebp - 0x81c));
            *(esp) = eax;
            eax = basename ();
            edx = "tar -xzf %s/%s -C %s";
            *((esp + 0x10)) = 0x80632c0;
            *((esp + 0xc)) = eax;
            eax = ebp - 0x80c;
            sprintf (eax, edx, 0x80632c0);
        }
    }
    if (*((ebp - 0x818)) == 2) {
        eax = VERBOSE;
        if (eax != 0) {
            eax = *((ebp - 0x81c));
            *(esp) = eax;
            eax = basename ();
            edx = "tar -xjvf %s/%s -C %s";
            *((esp + 0x10)) = 0x80632c0;
            *((esp + 0xc)) = eax;
            eax = ebp - 0x80c;
            sprintf (eax, edx, 0x80632c0);
        } else {
            eax = *((ebp - 0x81c));
            *(esp) = eax;
            eax = basename ();
            edx = "tar -xjvf %s/%s -C %s";
            *((esp + 0x10)) = 0x80632c0;
            *((esp + 0xc)) = eax;
            eax = ebp - 0x80c;
            sprintf (eax, edx, 0x80632c0);
        }
    }
    if (*((ebp - 0x818)) == 3) {
        eax = VERBOSE;
        if (eax != 0) {
            eax = *((ebp - 0x81c));
            *(esp) = eax;
            eax = basename ();
            edx = "unzip %s/%s -d %s";
            *((esp + 0x10)) = 0x80632c0;
            *((esp + 0xc)) = eax;
            eax = ebp - 0x80c;
            sprintf (eax, edx, 0x80632c0);
        } else {
            eax = *((ebp - 0x81c));
            *(esp) = eax;
            eax = basename ();
            edx = "unzip -qq %s/%s -d %s";
            *((esp + 0x10)) = 0x80632c0;
            *((esp + 0xc)) = eax;
            eax = ebp - 0x80c;
            sprintf (eax, edx, 0x80632c0);
        }
    }
    if (*((ebp - 0x818)) == 4) {
        eax = VERBOSE;
        if (eax != 0) {
            eax = *((ebp - 0x81c));
            *(esp) = eax;
            eax = basename ();
            edx = "tar -xvf %s/%s -C %s";
            *((esp + 0x10)) = 0x80632c0;
            *((esp + 0xc)) = eax;
            eax = ebp - 0x80c;
            sprintf (eax, edx, 0x80632c0);
        } else {
            eax = *((ebp - 0x81c));
            *(esp) = eax;
            eax = basename ();
            edx = "tar -xf %s/%s -C %s";
            *((esp + 0x10)) = 0x80632c0;
            *((esp + 0xc)) = eax;
            eax = ebp - 0x80c;
            sprintf (eax, edx, 0x80632c0);
        }
    }
    eax = ebp - 0x80c;
    eax = system (eax);
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) < 0) {
        if (*((ebp - 0x818)) == 1) {
            eax = *((ebp - 0x81c));
            *((esp + 8)) = eax;
            print_error (0xfffffff9, "could not extract files using 'tar' and 'gzip'. \n \t\t\t\t\tExtract manually using 'tar -xzvf %s'.\n");
        }
        if (*((ebp - 0x818)) == 2) {
            eax = *((ebp - 0x81c));
            *((esp + 8)) = eax;
            print_error (0xfffffff9, "could not extract files using 'tar' and 'bunzip2'.\n \t\t\t\tExtract manually using 'tar -xjvf %s'.\n");
        }
        if (*((ebp - 0x818)) == 3) {
            eax = *((ebp - 0x81c));
            *((esp + 8)) = eax;
            print_error (0xfffffff9, "could not extract files using 'unzip'.\n \t\t\t\tExtract manually using 'unzip %s'.\n");
        }
        exit (0xfffffff9);
    }
    print_done ();
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x818)) != 3) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048c54 */
#include <stdint.h>
 
void memcpy (void) {
    memcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048c14 */
#include <stdint.h>
 
void mkstemp (void) {
    mkstemp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048ac4 */
#include <stdint.h>
 
void open (void) {
    open ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048a94 */
#include <stdint.h>
 
void errno_location (void) {
    errno_location ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048ad4 */
#include <stdint.h>
 
void strerror (void) {
    strerror ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049420 */
#include <stdint.h>
 
int32_t dbg_print_error (char * arg_ch, size_t arg_10h) {
    char * msg;
    va_list ap;
    char[2048] buffer;
    int32_t var_ch;
    int32_t err_code;
    char * format;
    va_list arg;
    /* void print_error(int err_code,char * msg,va_args ...); */
    eax = *((ebp + 0xc));
    *((ebp - 0x81c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = ebp + 0x10;
    *((ebp - 0x810)) = eax;
    edx = *((ebp - 0x810));
    eax = *((ebp - 0x81c));
    eax = ebp - 0x80c;
    vsprintf (eax, eax, edx);
    edx = "\e[1;31m\nERROR:\e[0m %s";
    eax = stderr;
    ecx = ebp - 0x80c;
    *((esp + 8)) = ecx;
    fprintf (eax, edx);
    eax = *((ebp + 8));
    *(obj.ERROR) = eax;
    eax = *((ebp + 8));
    return exit (eax);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048cc4 */
#include <stdint.h>
 
void close (void) {
    close ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048d14 */
#include <stdint.h>
 
void remove (void) {
    remove ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804aaa8 */
#include <stdint.h>
 
int32_t dbg_check_filetype (void) {
    char * myfile;
    char * s2;
    /* int check_filetype(char * myfile); */
    eax = *((ebp + 8));
    eax = strstr (eax, ".tar.gz");
    if (eax != 0) {
        eax = 1;
    } else {
        eax = *((ebp + 8));
        eax = strstr (eax, ".tgz");
        if (eax != 0) {
            eax = 1;
        } else {
            eax = *((ebp + 8));
            eax = strstr (eax, ".tar.bz2");
            if (eax != 0) {
                eax = 2;
            } else {
                eax = *((ebp + 8));
                eax = strstr (eax, ".tbz");
                if (eax != 0) {
                    eax = 2;
                } else {
                    eax = *((ebp + 8));
                    eax = strstr (eax, ".zip");
                    if (eax != 0) {
                        eax = 3;
                    } else {
                        eax = *((ebp + 8));
                        eax = strstr (eax, ".tar");
                        if (eax != 0) {
                            eax = 4;
                        } else {
                            eax = 0;
                        }
                    }
                }
            }
        }
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049523 */
#include <stdint.h>
 
int32_t dbg_print_done (void) {
    size_t size;
    size_t nitems;
    FILE * stream;
    /* void print_done(); */
    eax = stdout;
    edx = stdout;
    eax = "\e[0;32mDONE.\n\e[0m";
    fwrite (edx, 1, 0x11);
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048e84 */
#include <stdint.h>
 
void dbg_exit_env (void) {
    /* void exit_env(); */
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804b5e3 */
#include <stdint.h>
 
int32_t dbg_deregister_extension (size_t n, char * arg_ch, size_t arg_10h, char * format, int32_t arg_14h, int32_t arg_18h, int32_t arg_1ch) {
    char * gisbase;
    char * pkg_short_name;
    char * package;
    int32_t revision;
    int32_t minor;
    int32_t major;
    int32_t found_ext;
    FILE * f_out;
    FILE * f_in;
    int32_t copy_thru;
    int32_t db_exists;
    int32_t error;
    char[2048] deps;
    char[2048] inst_bins;
    char[2048] short_name;
    char[2048] str;
    char[2048] file;
    int32_t canary;
    /* void deregister_extension(char * package,char * pkg_short_name,char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x283c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x2840)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x2844)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((ebp - 0x2814)) = 0;
    eax = "%s/etc/extensions.db";
    edx = *((ebp - 0x2844));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    edx = 0x8054d13;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x281c)) = eax;
    if (*((ebp - 0x281c)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            eax = FORCE;
            if (eax != 0) {
                goto label_0;
            }
            eax = *((ebp - 0x281c));
            fclose (eax);
            print_error (0xffffffed, "could not deregister: no extensions installed\n");
        }
label_0:
        eax = FORCE;
        if (eax != 0) {
            goto label_1;
        }
        eax = *((ebp - 0x281c));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffed, "checking for file '%s': %s\n");
    }
    *((ebp - 0x2814)) = 1;
    goto label_2;
label_1:
label_2:
    if (*((ebp - 0x2814)) != 0) {
        *((ebp - 0x2814)) = 0;
        eax = "/tmp/grass.extensions.db.XXXXXX";
        memcpy (obj.TMPDB, eax, 0x20);
        mkstemp (obj.TMPDB);
        edx = 0x8054d74;
        eax = TMPDB;
        eax = fopen (eax, edx);
        *((ebp - 0x2820)) = eax;
        if (*((ebp - 0x2820)) == 0) {
            eax = FORCE;
            if (eax != 0) {
                goto label_3;
            }
            eax = errno_location ();
            eax = *(eax);
            eax = strerror (eax);
            *((esp + 0xc)) = eax;
            eax = ebp - 0x80c;
            *((esp + 8)) = eax;
            print_error (0xffffffed, "could not create temp db '%s': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
        }
label_3:
        *((ebp - 0x2814)) = 1;
        atexit (dbg.exit_db);
    }
    if (*((ebp - 0x2814)) == 0) {
        goto label_4;
    }
    *((ebp - 0x2824)) = 0;
    while (eax != 0) {
        edx = "%s\t%i.%i.%i\t%s\t%s";
        eax = ebp - 0x100c;
        ecx = ebp - 0x280c;
        ecx = ebp - 0x200c;
        ecx = ebp - 0x2830;
        ecx = ebp - 0x282c;
        ecx = ebp - 0x2828;
        ecx = ebp - 0x180c;
        eax = isoc99_sscanf (ecx, edx, ecx);
        *((ebp - 0x2810)) = eax;
        if (*((ebp - 0x2810)) > 0) {
            *((ebp - 0x2818)) = 1;
            eax = ebp - 0x180c;
            eax = *((ebp - 0x2840));
            eax = strcmp (eax, eax);
            if (eax == 0) {
                *((ebp - 0x2818)) = 0;
                *((ebp - 0x2824)) = 1;
            }
            if (*((ebp - 0x2818)) == 0) {
                goto label_5;
            }
            eax = *((ebp - 0x2840));
            eax = ebp - 0x280c;
            eax = strstr (eax, eax);
            if (eax != 0) {
                eax = FORCE;
                if (eax != 0) {
                    goto label_6;
                }
                eax = ebp - 0x180c;
                *((esp + 0xc)) = eax;
                eax = *((ebp - 0x2840));
                *((esp + 8)) = eax;
                print_error (0xffffffed, "cannot uninstall extension '%s' it is needed by '%s'.\n");
            }
label_6:
            eax = ebp - 0x100c;
            eax = *((ebp - 0x2820));
            fprintf (eax, eax);
        }
label_5:
        eax = *((ebp - 0x281c));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x800;
        eax = ebp - 0x100c;
        eax = nc_fgets_nb (eax);
    }
    if (*((ebp - 0x2824)) == 0) {
        eax = *((ebp - 0x2844));
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x2840));
        *((esp + 8)) = eax;
        print_error (0xffffffed, "no extension '%s' registered/installed in '%s'.\n");
    }
    eax = *((ebp - 0x281c));
    fclose (eax);
    eax = *((ebp - 0x2820));
    fclose (eax);
label_4:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x2824)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049390 */
#include <stdint.h>
 
int32_t dbg_exit_msg (void) {
    char * format;
    size_t nitems;
    FILE * stream;
    /* void exit_msg(); */
    eax = ERROR;
    if (eax < 0) {
        ecx = ERROR;
        edx = "Program exited with an error (code %i). Operation aborted.\n";
        eax = stdout;
        *((esp + 8)) = ecx;
        fprintf (eax, edx);
    } else {
        eax = WARNINGS;
        if (eax == 1) {
            eax = stdout;
            edx = stdout;
            eax = "Job done but there was one warning. Please check.\n";
            fwrite (edx, 1, 0x32);
        }
        eax = WARNINGS;
        if (eax <= 1) {
            goto label_0;
        }
        ecx = WARNINGS;
        edx = "Job done but there were %i warnings. Please check.\n";
        eax = stdout;
        *((esp + 8)) = ecx;
        fprintf (eax, edx);
    }
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804cec7 */
#include <stdint.h>
 
int32_t dbg_deregister_entries_gisman (size_t arg_8h, size_t arg_ch) {
    char * gisbase;
    char * pkg_short_name;
    int32_t num_removed;
    char * rq;
    char * lq;
    int32_t end_sub;
    int32_t start_sub;
    int32_t end;
    int32_t start;
    int32_t pos;
    FILE * f_out;
    FILE * f_in;
    int32_t n_lines_new;
    int32_t n_lines_org;
    int32_t i;
    int32_t n_lines;
    char ** line;
    char[2048] tmp;
    char[2048] str;
    char[2048] file;
    int32_t canary;
    char * format;
    size_t n;
    char * var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    int32_t var_1ch;
    int32_t var_20h;
    int32_t var_24h;
    /* int deregister_entries_gisman(char * pkg_short_name,char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x184c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1850)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "%s/etc/dm/menu.tcl";
    edx = *((ebp - 0x1850));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    edx = 0x80553f1;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x1824)) = eax;
    if (*((ebp - 0x1824)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            eax = 0;
            goto label_0;
        }
        eax = *((ebp - 0x1824));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffea, "checking for file '%s': %s\n");
    }
    eax = "/tmp/grass.extensions.db.XXXXXX";
    memcpy (obj.TMP_GISMAN, eax, 0x20);
    mkstemp (obj.TMP_GISMAN);
    edx = 0x8055444;
    eax = TMP_GISMAN;
    eax = fopen (eax, edx);
    *((ebp - 0x1828)) = eax;
    if (*((ebp - 0x1828)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0x80642c0;
        print_error (0xffffffeb, "could not create temp file '%s': %s\n \t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit (dbg.exit_db);
    eax = VERBOSE;
    if (eax != 0) {
        eax = "cp -vf %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak ; \t\t\t\t\t\tcp -vf %s %s/etc/dm/menu.tcl ; chmod -v a+r %s/etc/dm/menu.tcl ;";
        edx = *((ebp - 0x1850));
        *((esp + 0x18)) = edx;
        edx = *((ebp - 0x1850));
        *((esp + 0x14)) = edx;
        *((esp + 0x10)) = 0x80642c0;
        edx = *((ebp - 0x1850));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x1850));
        eax = ebp - 0x100c;
        sprintf (eax, eax, edx);
    } else {
        eax = "cp -f %s/etc/dm/menu.tcl %s/etc/dm/menu.tcl.gem.bak &> %s ; \t\t\t\t\t\tcp -f %s %s/etc/dm/menu.tcl &> %s ; chmod a+r %s/etc/dm/menu.tcl &> %s ;";
        *((esp + 0x24)) = 0x80672c0;
        edx = *((ebp - 0x1850));
        *((esp + 0x20)) = edx;
        *((esp + 0x1c)) = 0x80672c0;
        edx = *((ebp - 0x1850));
        *((esp + 0x18)) = edx;
        *((esp + 0x14)) = 0x80642c0;
        *((esp + 0x10)) = 0x80672c0;
        edx = *((ebp - 0x1850));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x1850));
        eax = ebp - 0x100c;
        sprintf (eax, eax, edx);
    }
    eax = ebp - 0x100c;
    strcpy (obj.GISMAN_CMD, eax);
    *((ebp - 0x1814)) = 0;
    while (eax != 0) {
        *((ebp - 0x1814))++;
        eax = *((ebp - 0x1824));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    if (*((ebp - 0x1814)) == 0) {
        eax = 0xffffffff;
        goto label_0;
    }
    eax = *((ebp - 0x1824));
    rewind (eax);
    eax = *((ebp - 0x1814));
    *((ebp - 0x181c)) = eax;
    eax = *((ebp - 0x1814));
    eax++;
    eax = calloc (eax, 4);
    *((ebp - 0x1810)) = eax;
    *((ebp - 0x1818)) = 0;
    while (eax > *((ebp - 0x1818))) {
        eax = *((ebp - 0x1818));
        eax <<= 2;
        eax += *((ebp - 0x1810));
        *(eax) = 0;
        *((ebp - 0x1818))++;
        eax = *((ebp - 0x1814));
        eax++;
    }
    *((ebp - 0x1818)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x1818));
        eax <<= 2;
        ebx = eax;
        ebx += *((ebp - 0x1810));
        eax = ebp - 0x100c;
        eax = strlen (eax);
        eax++;
        eax = malloc (eax);
        *(ebx) = eax;
        edx = ebp - 0x100c;
        eax = *((ebp - 0x1818));
        eax <<= 2;
        eax += *((ebp - 0x1810));
        eax = *(eax);
        strcpy (eax, edx);
        *((ebp - 0x1818))++;
        eax = *((ebp - 0x1824));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    eax = "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> {cascad";
    edx = *((ebp - 0x184c));
    eax = ebp - 0x100c;
    sprintf (eax, eax, edx);
    *((esp + 8)) = 0;
    eax = *((ebp - 0x1810));
    *((esp + 4)) = eax;
    eax = ebp - 0x100c;
    *(esp) = eax;
    eax = find_pos ();
    *((ebp - 0x182c)) = eax;
    if (*((ebp - 0x182c)) == -1) {
        print_warning ("could not find uninstall information in 'menu.tcl'.\n");
        eax = 0xffffffff;
        goto label_0;
    }
    eax = *((ebp - 0x182c));
    eax <<= 2;
    eax += *((ebp - 0x1810));
    eax = *(eax);
    eax = strchr (eax, 0x22);
    *((ebp - 0x1840)) = eax;
    *((ebp - 0x1840))++;
    eax = *((ebp - 0x1840));
    eax = strchr (eax, 0x22);
    *((ebp - 0x1844)) = eax;
    eax = *((ebp - 0x1840));
    eax = ebp - 0x180c;
    strcpy (eax, eax);
    edx = *((ebp - 0x1844));
    eax = *((ebp - 0x1840));
    ecx = edx;
    ecx -= eax;
    eax = ecx;
    *((ebp + eax - 0x180c)) = 0;
    *((esp + 8)) = 0;
    eax = *((ebp - 0x1810));
    *((esp + 4)) = eax;
    *(esp) = "\"&Xtns\" all options 1";
    eax = find_pos ();
    *((ebp - 0x1830)) = eax;
    eax = *((ebp - 0x1830));
    eax++;
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1810));
    *((esp + 4)) = eax;
    *(esp) = "\" all options";
    eax = find_pos ();
    eax--;
    *((ebp - 0x1834)) = eax;
    if (*((ebp - 0x1834)) == -1) {
        *((esp + 8)) = 0;
        eax = *((ebp - 0x1810));
        *((esp + 4)) = eax;
        *(esp) = 0x8055212;
        eax = find_pos ();
        *((ebp - 0x1834)) = eax;
    }
    if (*((ebp - 0x1830)) == -1) {
        print_warning ("menu 'Xtns' does not exist.\n");
        eax = 0xffffffff;
        goto label_0;
    }
    eax = "{cascad \"%s\";
    edx = ebp - 0x180c;
    eax = ebp - 0x100c;
    sprintf (eax, eax, edx);
    eax = *((ebp - 0x1830));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1810));
    *((esp + 4)) = eax;
    eax = ebp - 0x100c;
    *(esp) = eax;
    eax = find_pos ();
    *((ebp - 0x1838)) = eax;
    if (*((ebp - 0x1838)) != -1) {
        eax = *((ebp - 0x1838));
        if (eax <= *((ebp - 0x1834))) {
            goto label_1;
        }
    }
    eax = ebp - 0x180c;
    print_warning ("could not find submenu entry '%s' in 'menu.tcl'.\n", eax);
    eax = 0xffffffff;
    goto label_0;
label_1:
    eax = *((ebp - 0x1838));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1810));
    *((esp + 4)) = eax;
    *(esp) = " \t\t\t}}";
    eax = find_pos ();
    *((ebp - 0x183c)) = eax;
    if (*((ebp - 0x183c)) != -1) {
        eax = *((ebp - 0x183c));
        if (eax <= *((ebp - 0x1834))) {
            goto label_2;
        }
    }
    eax = ebp - 0x180c;
    print_warning ("could not find end of submenu entry '%s' in 'menu.tcl'.\n", eax);
    eax = 0xffffffff;
    goto label_0;
label_2:
    *((ebp - 0x1848)) = 0;
    *((ebp - 0x1818)) = 0;
    while (eax > *((ebp - 0x1818))) {
        eax = *((ebp - 0x1810));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x1838));
        *(esp) = eax;
        delete_str ();
        *((ebp - 0x1848))++;
        *((ebp - 0x1818))++;
        eax = *((ebp - 0x1838));
        edx = *((ebp - 0x183c));
        ecx = *((ebp - 0x183c));
        ecx -= eax;
        eax = ecx;
        eax++;
    }
    eax = "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> {cascad";
    edx = *((ebp - 0x184c));
    eax = ebp - 0x100c;
    sprintf (eax, eax, edx);
    *((esp + 8)) = 0;
    eax = *((ebp - 0x1810));
    *((esp + 4)) = eax;
    eax = ebp - 0x100c;
    *(esp) = eax;
    eax = find_pos ();
    *((ebp - 0x182c)) = eax;
    eax = *((ebp - 0x1810));
    *((esp + 4)) = eax;
    eax = *((ebp - 0x182c));
    *(esp) = eax;
    delete_str ();
    *((ebp - 0x1848))++;
    *((esp + 8)) = 0;
    eax = *((ebp - 0x1810));
    *((esp + 4)) = eax;
    *(esp) = "\"&Xtns\" all options 1";
    eax = find_pos ();
    *((ebp - 0x1830)) = eax;
    eax = *((ebp - 0x1830));
    eax++;
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1810));
    *((esp + 4)) = eax;
    *(esp) = "\" all options";
    eax = find_pos ();
    eax--;
    *((ebp - 0x1834)) = eax;
    eax = *((ebp - 0x1830));
    edx = *((ebp - 0x1834));
    ecx = *((ebp - 0x1834));
    ecx -= eax;
    eax = ecx;
    if (eax > 2) {
        goto label_3;
    }
    *((ebp - 0x1818)) = 0;
    while (eax > *((ebp - 0x1818))) {
        eax = *((ebp - 0x1810));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x1830));
        *(esp) = eax;
        delete_str ();
        *((ebp - 0x1848))++;
        *((ebp - 0x1818))++;
        eax = *((ebp - 0x1830));
        edx = *((ebp - 0x1834));
        ecx = *((ebp - 0x1834));
        ecx -= eax;
        eax = ecx;
        eax++;
    }
label_3:
    *((ebp - 0x1818)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0x1818));
        eax <<= 2;
        eax += *((ebp - 0x1810));
        eax = *(eax);
        eax = *((ebp - 0x1828));
        fprintf (eax, eax);
        *((ebp - 0x1818))++;
        eax = *((ebp - 0x1818));
        eax <<= 2;
        eax += *((ebp - 0x1810));
        eax = *(eax);
    }
    eax = *((ebp - 0x1828));
    fflush (eax);
    eax = *((ebp - 0x1828));
    rewind (eax);
    *((ebp - 0x1820)) = 0;
    while (eax != 0) {
        *((ebp - 0x1820))++;
        eax = *((ebp - 0x1828));
        eax = ebp - 0x100c;
        eax = fgets (eax, 0x800, eax);
    }
    if (*((ebp - 0x1820)) == 0) {
        print_warning ("file truncation detected. Retaining orginal file 'menu.tcl'.\n");
        eax = 0x8055722;
        memcpy (obj.GISMAN_CMD, eax, 1);
    }
    eax = *((ebp - 0x1824));
    fclose (eax);
    eax = *((ebp - 0x1828));
    fclose (eax);
    *((ebp - 0x1818)) = 0;
    while (eax > *((ebp - 0x1818))) {
        eax = *((ebp - 0x1818));
        eax <<= 2;
        eax += *((ebp - 0x1810));
        eax = *(eax);
        free (eax);
        *((ebp - 0x1818))++;
        eax = *((ebp - 0x1814));
        eax++;
    }
    eax = *((ebp - 0x1810));
    free (eax);
    eax = *((ebp - 0x1848));
label_0:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (eax != *((ebp - 0x1818))) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804a6da */
#include <stdint.h>
 
int32_t dbg_list_binaries (char * arg_8h) {
    char * package;
    stat buf;
    int32_t var_860h;
    int32_t n_dirs;
    dirent * dir_entry;
    DIR * dir;
    char[2048] tmp;
    int32_t canary;
    size_t format;
    size_t nitems;
    FILE * stream;
    /* void list_binaries(char * package); */
    eax = *((ebp + 8));
    *((ebp - 0x87c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((ebp - 0x818)) = 0;
    eax = stdout;
    edx = stdout;
    eax = "Binary installation files\n";
    fwrite (edx, 1, 0x1a);
    eax = *((ebp - 0x87c));
    *(esp) = eax;
    eax = opendir ();
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) == 0) {
        eax = stdout;
        edx = stdout;
        eax = "  None.\n\n";
        fwrite (edx, 1, 9);
        goto label_0;
    }
    eax = *((ebp - 0x810));
    *(esp) = eax;
    eax = readdir ();
    *((ebp - 0x814)) = eax;
    while (*((ebp - 0x814)) != 0) {
        eax = *((ebp - 0x814));
        eax += 0xb;
        eax = strcmp (eax, 0x8054bbe);
        if (eax != 0) {
            eax = *((ebp - 0x814));
            eax += 0xb;
            eax = strcmp (eax, 0x8054bc0);
            if (eax == 0) {
                goto label_1;
            }
            eax = *((ebp - 0x814));
            eax += 0xb;
            eax = strcmp (eax, 0x8054bc3);
            if (eax == 0) {
                goto label_1;
            }
            eax = *((ebp - 0x814));
            edx = eax + 0xb;
            eax = "%s/%s";
            *((esp + 0xc)) = edx;
            edx = *((ebp - 0x87c));
            eax = ebp - 0x80c;
            sprintf (eax, eax, edx);
            eax = ebp - 0x80c;
            edx = ebp - 0x870;
            _stat (eax, edx);
            eax = *((ebp - 0x860));
            eax &= 0xf000;
            if (eax != 0x4000) {
                goto label_1;
            }
            if (*((ebp - 0x818)) == 0) {
                eax = *((ebp - 0x814));
                ecx = eax + 0xb;
                edx = "  %s";
                eax = stdout;
                *((esp + 8)) = ecx;
                fprintf (eax, edx);
            } else {
                eax = *((ebp - 0x814));
                ecx = eax + 0xb;
                edx = ", %s";
                eax = stdout;
                *((esp + 8)) = ecx;
                fprintf (eax, edx);
            }
            *((ebp - 0x818))++;
        }
label_1:
        eax = *((ebp - 0x810));
        *(esp) = eax;
        eax = readdir ();
        *((ebp - 0x814)) = eax;
    }
    if (*((ebp - 0x818)) == 0) {
        eax = stdout;
        edx = stdout;
        eax = "  None.";
        fwrite (edx, 1, 7);
    }
    eax = stdout;
    edx = stdout;
    eax = 0x8054bd4;
    fwrite (edx, 1, 2);
label_0:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x818)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804a3db */
#include <stdint.h>
 
int32_t dbg_dump_plain (int32_t arg_8h, char * arg_ch) {
    char * tmpfile;
    char * file;
    FILE * f_out;
    FILE * f_in;
    char[2048] tmp;
    int32_t canary;
    char * format;
    size_t n;
    char * var_sp_ch;
    /* void dump_plain(char * file,char * tmpfile); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x820)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = "/tmp/grass.extensions.db.XXXXXX";
    eax = *((ebp - 0x820));
    memcpy (eax, eax, 0x20);
    eax = *((ebp - 0x820));
    mkstemp (eax);
    edx = 0x8054b0c;
    eax = *((ebp - 0x820));
    eax = fopen (eax, edx);
    *((ebp - 0x814)) = eax;
    if (*((ebp - 0x814)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x820));
        *((esp + 8)) = eax;
        print_error (0xffffffe9, "could not create temp file '%s': %s\n \t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit (dbg.exit_db);
    edx = 0x8054a6f;
    eax = *((ebp - 0x81c));
    eax = fopen (eax, edx);
    *((ebp - 0x810)) = eax;
    while (eax != 0) {
        eax = ebp - 0x80c;
        eax = *((ebp - 0x814));
        fprintf (eax, eax);
        eax = *((ebp - 0x810));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x800;
        eax = ebp - 0x80c;
        eax = nc_fgets (eax);
    }
    eax = *((ebp - 0x810));
    fclose (eax);
    eax = *((ebp - 0x814));
    fclose (eax);
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x80546f0 */
#include <stdint.h>
 
uint32_t libc_csu_init (int32_t arg_8h, int32_t arg_ch, int32_t arg_10h) {
    int32_t var_4h;
    int32_t var_8h;
    _i686_get_pc_thunk_bx (ebx, esi, edi);
    ebx += 0x48f9;
    _init ();
    edi = ebx - 0xe4;
    eax = ebx - 0xe4;
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
        uint32_t (*ebx + esi*4 - 0xe4)(uint32_t, uint32_t, uint32_t) (eax, eax, eax);
        esi++;
    } while (esi < edi);
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048e89 */
#include <stdint.h>
 
int32_t dbg_exit_tmp (void) {
    DIR * dir;
    int32_t error;
    char[2048] tmp;
    int32_t canary;
    char * format;
    size_t nitems;
    FILE * stream;
    /* void exit_tmp(); */
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = TMPDIR;
    eax = *(eax);
    if (al == 0) {
        *(obj.TMPCLEAN) = 1;
    } else {
        eax = TMPCLEAN;
        if (eax != 0) {
            goto label_0;
        }
        *(esp) = obj.CWD;
        chdir ();
        eax = "rm -rf %s/*";
        eax = ebp - 0x80c;
        sprintf (eax, eax, 0x80632c0);
        eax = VERBOSE;
        if (eax != 0) {
            eax = stdout;
            edx = stdout;
            eax = "Removing temporary extension files...";
            fwrite (edx, 1, 0x25);
        }
        eax = ebp - 0x80c;
        eax = system (eax);
        *((ebp - 0x810)) = eax;
        eax = "rmdir %s";
        eax = ebp - 0x80c;
        sprintf (eax, eax, 0x80632c0);
        eax = ebp - 0x80c;
        eax = system (eax);
        *((ebp - 0x810)) = eax;
        *(esp) = obj.TMPDIR;
        eax = opendir ();
        *((ebp - 0x814)) = eax;
        if (*((ebp - 0x814)) != 0) {
            print_warning ("could not remove temporary directory %s.\nPlease remove manually.\n", obj.TMPDIR);
        }
        eax = VERBOSE;
        if (eax != 0) {
            print_done ();
        }
        *(obj.TMPCLEAN) = 1;
    }
label_0:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049d41 */
#include <stdint.h>
 
int32_t dbg_nc_fgets (FILE * arg_10h) {
    char * tmp;
    char * hashmark;
    char * s;
    int32_t size;
    char * format;
    FILE * stream;
    do {
        /* char * nc_fgets(char * s,int size,FILE * stream); */
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        eax = fgets (eax, eax, eax);
        if (eax == 0) {
            eax = 0;
            goto label_0;
        }
        eax = *((ebp + 8));
        eax = strchr (eax, 0x23);
        *((ebp - 0xc)) = eax;
        if (*((ebp - 0xc)) == 0) {
            goto label_1;
        }
        eax = *((ebp + 8));
        if (eax != *((ebp - 0xc))) {
            goto label_2;
        }
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        nc_fgets (eax);
    } while (1);
    goto label_0;
label_2:
    eax = malloc (0x800);
    *((ebp - 0x10)) = eax;
    eax = *((ebp + 8));
    eax = *((ebp - 0x10));
    strcpy (eax, eax);
    eax = 0x8054ab0;
    eax = *((ebp - 0x10));
    eax = strtok (eax, eax);
    *((ebp - 0x10)) = eax;
    eax = 0x8054ab2;
    edx = *((ebp - 0x10));
    eax = *((ebp + 8));
    sprintf (eax, eax, edx);
    eax = *((ebp - 0x10));
    free (eax);
label_1:
    eax = *((ebp + 8));
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8050c67 */
#include <stdint.h>
 
int32_t dbg_bin_install (char * nitems, size_t stream, size_t arg_10h, size_t arg_14h, int32_t arg_24h, char * format) {
    char * grass_version;
    char * pkg_short_name;
    char * bins;
    char * gisbase;
    char * package;
    stat buf;
    int32_t revision;
    int32_t minor;
    int32_t major;
    char * grass_revision;
    char * grass_minor;
    char * grass_major;
    char * verstr;
    FILE * f;
    int32_t error;
    char[2048] post_cmd;
    char[2048] install_cmd;
    char[2048] dir;
    char[2048] tmp;
    int32_t canary;
    int32_t pkg_major;
    int32_t pkg_minor;
    int32_t pkg_revision;
    /* void bin_install(char * package,char * gisbase,char * bins,char * pkg_short_name,int pkg_major,int pkg_minor,int pkg_revision,char * grass_version); */
    eax = *((ebp + 8));
    *((ebp - 0x208c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x2090)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x2094)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x2098)) = eax;
    eax = *((ebp + 0x24));
    *((ebp - 0x209c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x2090));
    edx = ebp - 0x2088;
    eax = _stat (eax, edx);
    *((ebp - 0x2010)) = eax;
    if (*((ebp - 0x2010)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 8)) = eax;
        print_error (0xfffffffb, "installation directory invalid: %s\n");
    }
    eax = "GINSTALL_DST=%s";
    edx = *((ebp - 0x2090));
    sprintf (obj.GINSTALL_DST, eax, edx);
    *(esp) = obj.GINSTALL_DST;
    putenv ();
    eax = "%s/include";
    edx = *((ebp - 0x2090));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GINSTALL_INC=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GINSTALL_INC, eax, edx);
    *(esp) = obj.GINSTALL_INC;
    putenv ();
    eax = "%s/lib";
    edx = *((ebp - 0x2090));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GINSTALL_LIB=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GINSTALL_LIB, eax, edx);
    *(esp) = obj.GINSTALL_LIB;
    putenv ();
    eax = "GEM_GRASS_DIR=%s";
    edx = *((ebp - 0x2090));
    sprintf (obj.GEM_GRASS_DIR, eax, edx);
    *(esp) = obj.GEM_GRASS_DIR;
    putenv ();
    eax = *((ebp - 0x209c));
    eax = strdup (eax);
    *((ebp - 0x2018)) = eax;
    eax = 0x8055edb;
    eax = *((ebp - 0x2018));
    eax = strtok (eax, eax);
    *((ebp - 0x201c)) = eax;
    eax = 0x8055edb;
    eax = strtok (0, eax);
    *((ebp - 0x2020)) = eax;
    eax = 0x8055edb;
    eax = strtok (0, eax);
    *((ebp - 0x2024)) = eax;
    eax = *((ebp - 0x201c));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x2028)) = eax;
    eax = *((ebp - 0x2020));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x202c)) = eax;
    eax = *((ebp - 0x2024));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x2030)) = eax;
    eax = *((ebp - 0x2018));
    free (eax);
    atexit (dbg.exit_tmp);
    eax = *((ebp - 0x208c));
    *(esp) = eax;
    eax = basename ();
    edx = "%s/%s";
    ecx = *((ebp - 0x2094));
    *((esp + 0xc)) = ecx;
    eax = ebp - 0x100c;
    sprintf (eax, edx, eax);
    eax = ebp - 0x100c;
    *(esp) = eax;
    eax = chdir ();
    *((ebp - 0x2010)) = eax;
    if (*((ebp - 0x2010)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x208c));
        *((esp + 8)) = eax;
        print_error (0xfffffffe, "extension file binaries in '%s' not accessible: %s\n");
    }
    eax = "GEM_EXT_NAME=%s";
    edx = *((ebp - 0x2098));
    sprintf (obj.GEM_EXT_NAME, eax, edx);
    *(esp) = obj.GEM_EXT_NAME;
    putenv ();
    eax = "%i.%i.%i";
    edx = *((ebp + 0x20));
    *((esp + 0x10)) = edx;
    edx = *((ebp + 0x1c));
    *((esp + 0xc)) = edx;
    edx = *((ebp + 0x18));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GEM_EXT_VERSION=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GEM_EXT_VERSION, eax, edx);
    *(esp) = obj.GEM_EXT_VERSION;
    putenv ();
    dump_html ("../description", 0x8064ac0);
    dump_html ("../info", 0x80652c0);
    dump_html ("../depends", 0x8065ac0);
    dump_html ("../bugs", 0x80662c0);
    dump_html ("../authors", 0x8066ac0);
    eax = "GEM_EXT_DESCR=%s";
    sprintf (obj.GEM_EXT_DESCR, eax, 0x8064ac0);
    *(esp) = obj.GEM_EXT_DESCR;
    putenv ();
    eax = "GEM_EXT_INFO=%s";
    sprintf (obj.GEM_EXT_INFO, eax, 0x80652c0);
    *(esp) = obj.GEM_EXT_INFO;
    putenv ();
    eax = "GEM_EXT_DEPS=%s";
    sprintf (obj.GEM_EXT_DEPS, eax, 0x8065ac0);
    *(esp) = obj.GEM_EXT_DEPS;
    putenv ();
    eax = "GEM_EXT_BUGS=%s";
    sprintf (obj.GEM_EXT_BUGS, eax, 0x80662c0);
    *(esp) = obj.GEM_EXT_BUGS;
    putenv ();
    eax = "GEM_EXT_AUTHORS=%s";
    sprintf (obj.GEM_EXT_AUTHORS, eax, 0x8066ac0);
    *(esp) = obj.GEM_EXT_AUTHORS;
    putenv ();
    atexit (dbg.exit_tmp);
    eax = *((ebp - 0x209c));
    eax = *((ebp - 0x2090));
    eax = *((ebp - 0x208c));
    check_dependencies (eax, eax, eax);
    eax = stdout;
    edx = stdout;
    eax = "Installing...";
    fwrite (edx, 1, 0xd);
    edx = 0x8055e6b;
    eax = "../uninstall";
    eax = fopen (eax, edx);
    *((ebp - 0x2014)) = eax;
    if (*((ebp - 0x2014)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        print_warning ("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", eax);
    } else {
        eax = VERBOSE;
        if (eax != 0) {
            eax = "cp -vf ../uninstall %s/etc/uninstall.%s ;";
            edx = *((ebp - 0x2098));
            *((esp + 0xc)) = edx;
            edx = *((ebp - 0x2090));
            eax = ebp - 0x80c;
            sprintf (eax, eax, edx);
            eax = ebp - 0x80c;
            strcpy (obj.UNINSTALL_CMD, eax);
        } else {
            eax = "cp -f ../uninstall %s/etc/uninstall.%s &> %s ;";
            *((esp + 0x10)) = 0x80672c0;
            edx = *((ebp - 0x2098));
            *((esp + 0xc)) = edx;
            edx = *((ebp - 0x2090));
            eax = ebp - 0x80c;
            sprintf (eax, eax, edx);
            eax = ebp - 0x80c;
            strcpy (obj.UNINSTALL_CMD, eax);
        }
        eax = *((ebp - 0x2014));
        fclose (eax);
    }
    eax = *((ebp + 0x20));
    eax = *((ebp + 0x1c));
    eax = *((ebp + 0x18));
    eax = *((ebp - 0x2098));
    eax = *((ebp - 0x2094));
    eax = *((ebp - 0x2090));
    register_extension (eax, eax, eax);
    eax = *((ebp - 0x209c));
    eax = *((ebp - 0x2090));
    eax = *((ebp - 0x208c));
    check_dependencies (eax, eax, eax);
    if (*((ebp - 0x2028)) == 6) {
        if (*((ebp - 0x202c)) > 0) {
            goto label_0;
        }
        eax = *((ebp - 0x2090));
        eax = *((ebp - 0x2098));
        register_entries_gisman (eax, eax);
    }
label_0:
    eax = *((ebp - 0x2090));
    eax = *((ebp - 0x2098));
    register_entries_gisman2 (eax, eax);
    eax = *((ebp + 0x20));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x1c));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x18));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x2090));
    eax = *((ebp - 0x2098));
    register_html (eax, eax);
    eax = VERBOSE;
    if (eax != 0) {
        edx = "Running '%s install':\n";
        eax = stdout;
        *((esp + 8)) = 0x806bae0;
        fprintf (eax, edx);
        eax = "bin/%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;";
        edx = *((ebp - 0x2090));
        *((esp + 0x14)) = edx;
        edx = *((ebp - 0x2090));
        *((esp + 0x10)) = edx;
        *((esp + 0xc)) = 0x8063ac0;
        eax = ebp - 0x180c;
        sprintf (eax, eax, 0x806bae0);
    } else {
        eax = "bin/%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;";
        *((esp + 0x20)) = 0x80672c0;
        edx = *((ebp - 0x2090));
        *((esp + 0x1c)) = edx;
        *((esp + 0x18)) = 0x80672c0;
        edx = *((ebp - 0x2090));
        *((esp + 0x14)) = edx;
        *((esp + 0x10)) = 0x8063ac0;
        *((esp + 0xc)) = 0x80672c0;
        eax = ebp - 0x180c;
        sprintf (eax, eax, 0x806bae0);
    }
    eax = VERBOSE;
    if (eax != 0) {
        eax = "sh ../post";
        eax = ebp - 0x200c;
        memcpy (eax, eax, 0xb);
    } else {
        eax = "sh ../post &> %s";
        eax = ebp - 0x200c;
        sprintf (eax, eax, 0x80672c0);
    }
    eax = "%s %s %s %s %s %s";
    edx = ebp - 0x200c;
    *((esp + 0x1c)) = edx;
    *((esp + 0x18)) = 0x80692e0;
    *((esp + 0x14)) = 0x8068ae0;
    *((esp + 0x10)) = 0x80682e0;
    *((esp + 0xc)) = 0x806a2e0;
    edx = ebp - 0x180c;
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = ebp - 0x80c;
    *((esp + 4)) = eax;
    eax = *((ebp - 0x2090));
    su (eax);
    print_done ();
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049bd9 */
#include <stdint.h>
 
int32_t dbg_dump_str (void) {
    int32_t i;
    FILE * f;
    char ** strarr;
    char * format;
    int32_t var_8h;
    int32_t var_sp_ch;
    /* void dump_str(FILE * f,char ** strarr); */
    *((ebp - 0xc)) = 0;
    while (eax != 0) {
        eax = *((ebp - 0xc));
        eax <<= 2;
        eax += *((ebp + 0xc));
        edx = *(eax);
        eax = "%i: %s";
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0xc));
        *((esp + 8)) = edx;
        eax = *((ebp + 8));
        fprintf (eax, eax);
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
        eax <<= 2;
        eax += *((ebp + 0xc));
        eax = *(eax);
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x805014e */
#include <stdint.h>
 
int32_t dbg_print_cfg (void) {
    FILE * fp;
    char[2048] line;
    int32_t canary;
    char * size;
    size_t nitems;
    FILE * stream;
    /* void print_cfg(); */
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    edx = 0x8055e6b;
    eax = "config.msg";
    eax = fopen (eax, edx);
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) == 0) {
        goto label_0;
    }
    eax = stdout;
    edx = stdout;
    eax = "\nResult of configuration: \n";
    fwrite (edx, 1, 0x1b);
    while (eax != 0) {
        eax = stdout;
        eax = ebp - 0x80c;
        fputs (eax, eax);
        eax = *((ebp - 0x810));
        eax = ebp - 0x80c;
        eax = fgets (eax, 0x800, eax);
    }
    eax = stdout;
    fputc (0xa, eax);
label_0:
    remove ("config.msg");
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8052a50 */
#include <stdint.h>
 
int32_t dbg_show_help (void) {
    size_t size;
    size_t nitems;
    FILE * stream;
    /* void show_help(); */
    eax = stdout;
    edx = stdout;
    eax = "Usage: gem64 [OPTION] [ACTION] [FILE|DIR]\n";
    fwrite (edx, 1, 0x2a);
    eax = stdout;
    edx = stdout;
    eax = "Install a GRASS extension from FILE or DIR.\n";
    fwrite (edx, 1, 0x2c);
    eax = stdout;
    edx = stdout;
    eax = "Manage (installed) GRASS extension(s).\n";
    fwrite (edx, 1, 0x27);
    eax = stdout;
    edx = stdout;
    eax = "\nPossible ACTIONs are:\n";
    fwrite (edx, 1, 0x17);
    eax = stdout;
    edx = stdout;
    eax = "  -i, --install=EXT\tinstall a GRASS extension\n";
    fwrite (edx, 1, 0x2e);
    eax = stdout;
    edx = stdout;
    eax = "  -u, --uninstall=EXT\tremove an extension from GRASS\n";
    fwrite (edx, 1, 0x35);
    eax = stdout;
    edx = stdout;
    eax = "  -q, --query=EXT\tdisplay information about extension/list installed\n";
    fwrite (edx, 1, 0x45);
    eax = stdout;
    edx = stdout;
    eax = "  -d, --details=EXT\tdisplay additional details about an extension\n";
    fwrite (edx, 1, 0x42);
    eax = stdout;
    edx = stdout;
    eax = "  -c, --clean=EXT\tclean extension's source code directories\n";
    fwrite (edx, 1, 0x3c);
    eax = stdout;
    edx = stdout;
    eax = "  -t, --test=EXT\tconfigure and compile extension, but don't install\n";
    fwrite (edx, 1, 0x44);
    eax = stdout;
    edx = stdout;
    eax = "  -l, --license=EXT\tshow copyright information for an extension\n";
    fwrite (edx, 1, 0x40);
    eax = stdout;
    edx = stdout;
    eax = "  -r, --restore\t\trecreate HTML links and GIS Manager entries\n";
    fwrite (edx, 1, 0x3d);
    eax = stdout;
    edx = stdout;
    eax = "  -h, --help\t\tdisplay this help and exit\n";
    fwrite (edx, 1, 0x29);
    eax = stdout;
    edx = stdout;
    eax = "  -V, --version\t\toutput version information and exit\n\n";
    fwrite (edx, 1, 0x36);
    eax = stdout;
    edx = stdout;
    eax = "\nPossible OPTIONs are:\n";
    fwrite (edx, 1, 0x17);
    eax = stdout;
    edx = stdout;
    eax = "  -g, --grass=PATH\tpath to GRASS installation dir\n";
    fwrite (edx, 1, 0x32);
    eax = stdout;
    edx = stdout;
    eax = "  -b, --binary=NAME\tno compilation: use binary files for system NAME\n";
    fwrite (edx, 1, 0x45);
    eax = stdout;
    edx = stdout;
    eax = "  -f, --force\t\tforce action, regardless of dependencies\n";
    fwrite (edx, 1, 0x38);
    eax = stdout;
    edx = stdout;
    eax = "  -v, --verbose\t\tdisplay detailed status information\n";
    fwrite (edx, 1, 0x35);
    eax = stdout;
    edx = stdout;
    eax = "  -s, --skip-config\tskip configure script\n";
    fwrite (edx, 1, 0x2a);
    eax = stdout;
    edx = stdout;
    eax = "  -x, --config-opts=OPTS\tpass OPTS to configure script\n";
    fwrite (edx, 1, 0x37);
    eax = stdout;
    edx = stdout;
    eax = "  -o, --options=OPTS\toptions to pass to the C compiler/linker\n";
    fwrite (edx, 1, 0x3e);
    eax = stdout;
    edx = stdout;
    eax = "  -C, --config-cmd=CMD\tDefine custom 'configure' command (default=configure)\n";
    fwrite (edx, 1, 0x4d);
    eax = stdout;
    edx = stdout;
    eax = "  -m, --make-cmd=CMD\tDefine custom 'make' command (default=make)\n";
    fwrite (edx, 1, 0x41);
    eax = stdout;
    edx = stdout;
    eax = "\nWhen run from within a GRASS session, locations of libs, header files\n";
    fwrite (edx, 1, 0x47);
    eax = stdout;
    edx = stdout;
    eax = "and installation target dir will be assumed to match those of the active\n";
    fwrite (edx, 1, 0x49);
    eax = stdout;
    edx = stdout;
    eax = "GRASS version. ";
    fwrite (edx, 1, 0xf);
    eax = stdout;
    edx = stdout;
    eax = "Option -g can be used to override these or install extensions\nfrom outside";
    fwrite (edx, 1, 0x4a);
    eax = stdout;
    edx = stdout;
    eax = "of a GRASS session.\n";
    fwrite (edx, 1, 0x14);
    eax = stdout;
    edx = stdout;
    eax = "Per default, extensions will be compiled from source and then installed.\n";
    fwrite (edx, 1, 0x49);
    eax = stdout;
    edx = stdout;
    eax = "If the exension package contains binaries for the user's platform, they can\n";
    fwrite (edx, 1, 0x4c);
    eax = stdout;
    edx = stdout;
    eax = "be installed instead using the -b option. ";
    fwrite (edx, 1, 0x2a);
    eax = stdout;
    edx = stdout;
    eax = "For installation from source code, a C compiler and make tools are needed.\n";
    fwrite (edx, 1, 0x4b);
    eax = stdout;
    edx = stdout;
    eax = "\nExample:\n";
    fwrite (edx, 1, 0xa);
    eax = stdout;
    edx = stdout;
    eax = "\tgem64 -b macosx --grass=/usr/local/grass-6.4.0 -i myExtension\n";
    fwrite (edx, 1, 0x3f);
    eax = stdout;
    edx = stdout;
    eax = "Installs the MacOS X binaries for 'myExtension' in /usr/local/grass-6.4.0.\n";
    fwrite (edx, 1, 0x4b);
    return exit (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804a2c8 */
#include <stdint.h>
 
int32_t dbg_dump_ascii (char * arg_8h, char * arg_ch) {
    char * heading;
    char * file;
    FILE * f;
    char[2048] tmp;
    int32_t canary;
    char * format;
    char * nitems;
    FILE * stream;
    /* void dump_ascii(char * file,char * heading); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x820)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    edx = 0x8054ab2;
    eax = stdout;
    ecx = *((ebp - 0x820));
    *((esp + 8)) = ecx;
    fprintf (eax, edx);
    edx = 0x8054a6f;
    eax = *((ebp - 0x81c));
    eax = fopen (eax, edx);
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) != 0) {
        goto label_0;
    }
    eax = stdout;
    edx = stdout;
    eax = "  No information available.\n";
    fwrite (edx, 1, 0x1c);
    goto label_1;
    do {
        edx = "  %s";
        eax = stdout;
        ecx = ebp - 0x80c;
        *((esp + 8)) = ecx;
        fprintf (eax, edx);
        goto label_2;
label_0:
label_2:
        eax = *((ebp - 0x810));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x800;
        eax = ebp - 0x80c;
        eax = nc_fgets_html (eax);
    } while (eax != 0);
    eax = stdout;
    fputc (0xa, eax);
    eax = *((ebp - 0x810));
    fclose (eax);
label_1:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804a92c */
#include <stdint.h>
 
int32_t dbg_binaries_exist (char * arg_8h, size_t arg_ch) {
    char * binaries;
    char * package;
    stat buf;
    int32_t var_85ch;
    dirent * dir_entry;
    DIR * dir;
    char[2048] tmp;
    int32_t canary;
    char * format;
    char * var_8h;
    int32_t var_sp_ch;
    /* int binaries_exist(char * package,char * binaries); */
    eax = *((ebp + 8));
    *((ebp - 0x87c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x880)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x87c));
    *(esp) = eax;
    eax = opendir ();
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) == 0) {
        eax = 0;
        goto label_0;
    }
    eax = *((ebp - 0x810));
    *(esp) = eax;
    eax = readdir ();
    *((ebp - 0x814)) = eax;
    while (*((ebp - 0x814)) != 0) {
        eax = *((ebp - 0x814));
        eax += 0xb;
        eax = strcmp (eax, 0x8054bbe);
        if (eax != 0) {
            eax = *((ebp - 0x814));
            eax += 0xb;
            eax = strcmp (eax, 0x8054bc0);
            if (eax == 0) {
                goto label_1;
            }
            eax = *((ebp - 0x814));
            eax += 0xb;
            eax = strcmp (eax, 0x8054bc3);
            if (eax == 0) {
                goto label_1;
            }
            eax = *((ebp - 0x814));
            edx = eax + 0xb;
            eax = "%s/%s";
            *((esp + 0xc)) = edx;
            edx = *((ebp - 0x87c));
            eax = ebp - 0x80c;
            sprintf (eax, eax, edx);
            eax = ebp - 0x80c;
            edx = ebp - 0x86c;
            _stat (eax, edx);
            eax = *((ebp - 0x85c));
            eax &= 0xf000;
            if (eax != 0x4000) {
                goto label_1;
            }
            eax = *((ebp - 0x814));
            edx = eax + 0xb;
            eax = *((ebp - 0x880));
            eax = strcmp (edx, eax);
            if (eax != 0) {
                goto label_1;
            }
            eax = 1;
            goto label_0;
        }
label_1:
        eax = *((ebp - 0x810));
        *(esp) = eax;
        eax = readdir ();
        *((ebp - 0x814)) = eax;
    }
    eax = 0;
label_0:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (*((ebp - 0x814)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049737 */
#include <stdint.h>
 
int32_t dbg_insert_str (char * arg_8h, size_t arg_10h) {
    char ** strarr;
    char * str;
    int32_t len;
    int32_t j;
    int32_t n;
    char[2048] last;
    char[2048] insert;
    char[2048] save;
    char * canary;
    int32_t pos;
    char * src;
    char * var_8h;
    /* int insert_str(char * str,int pos,char ** strarr); */
    eax = *((ebp + 8));
    *((ebp - 0x181c)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x1820)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((ebp - 0x1810)) = 0;
    while (eax != 0) {
        *((ebp - 0x1810))++;
        eax = *((ebp - 0x1810));
        eax <<= 2;
        eax += *((ebp - 0x1820));
        eax = *(eax);
    }
    if (*((ebp + 0xc)) >= 0) {
        eax = *((ebp + 0xc));
        if (eax <= *((ebp - 0x1810))) {
            goto label_0;
        }
    }
    eax = *((ebp + 0xc));
    *((esp + 8)) = eax;
    print_error (0xffffffeb, "insert: invalid line number %i.\n");
label_0:
    eax = *((ebp + 0xc));
    if (eax == *((ebp - 0x1810))) {
        eax = *((ebp - 0x181c));
        eax = strlen (eax);
        eax++;
        *((ebp - 0x1818)) = eax;
        eax = *((ebp - 0x1810));
        eax <<= 2;
        ebx = eax;
        ebx += *((ebp - 0x1820));
        eax = *((ebp - 0x1818));
        eax = malloc (eax);
        *(ebx) = eax;
        edx = *((ebp - 0x181c));
        eax = *((ebp - 0x1810));
        eax <<= 2;
        eax += *((ebp - 0x1820));
        eax = *(eax);
        strcpy (eax, edx);
        *((ebp - 0x1810)) += 2;
        eax = *((ebp - 0x1810));
        eax--;
        eax <<= 2;
        eax += *((ebp - 0x1820));
        *(eax) = 0;
        eax = *((ebp - 0x1810));
        goto label_1;
    }
    eax = *((ebp - 0x1810));
    eax--;
    eax <<= 2;
    eax += *((ebp - 0x1820));
    eax = *(eax);
    eax = ebp - 0x180c;
    strcpy (eax, eax);
    eax = *((ebp + 0xc));
    eax <<= 2;
    eax += *((ebp - 0x1820));
    eax = *(eax);
    eax = ebp - 0x100c;
    strcpy (eax, eax);
    eax = *((ebp + 0xc));
    eax <<= 2;
    eax += *((ebp - 0x1820));
    eax = *(eax);
    free (eax);
    eax = *((ebp + 0xc));
    eax <<= 2;
    ebx = eax;
    ebx += *((ebp - 0x1820));
    eax = *((ebp - 0x181c));
    eax = strlen (eax);
    eax++;
    eax = malloc (eax);
    *(ebx) = eax;
    edx = *((ebp - 0x181c));
    eax = *((ebp + 0xc));
    eax <<= 2;
    eax += *((ebp - 0x1820));
    eax = *(eax);
    strcpy (eax, edx);
    eax = *((ebp + 0xc));
    *((ebp - 0x1814)) = eax;
    while (eax > *((ebp - 0x1814))) {
        eax = *((ebp - 0x1814));
        eax++;
        eax <<= 2;
        eax += *((ebp - 0x1820));
        eax = *(eax);
        eax = ebp - 0x80c;
        strcpy (eax, eax);
        eax = *((ebp - 0x1814));
        eax++;
        eax <<= 2;
        eax += *((ebp - 0x1820));
        eax = *(eax);
        free (eax);
        eax = ebp - 0x100c;
        eax = strlen (eax);
        eax++;
        *((ebp - 0x1818)) = eax;
        eax = *((ebp - 0x1814));
        eax++;
        eax <<= 2;
        ebx = eax;
        ebx += *((ebp - 0x1820));
        eax = *((ebp - 0x1818));
        eax = malloc (eax);
        *(ebx) = eax;
        edx = ebp - 0x100c;
        eax = *((ebp - 0x1814));
        eax++;
        eax <<= 2;
        eax += *((ebp - 0x1820));
        eax = *(eax);
        strcpy (eax, edx);
        eax = ebp - 0x80c;
        eax = ebp - 0x100c;
        strcpy (eax, eax);
        *((ebp - 0x1814))++;
        eax = *((ebp - 0x1810));
        eax--;
    }
    eax = *((ebp - 0x1810));
    eax <<= 2;
    ebx = eax;
    ebx += *((ebp - 0x1820));
    eax = ebp - 0x180c;
    eax = strlen (eax);
    eax++;
    eax = malloc (eax);
    *(ebx) = eax;
    edx = ebp - 0x180c;
    eax = *((ebp - 0x1810));
    eax <<= 2;
    eax += *((ebp - 0x1820));
    eax = *(eax);
    strcpy (eax, edx);
    *((ebp - 0x1810)) += 2;
    eax = *((ebp - 0x1810));
    eax--;
    eax <<= 2;
    eax += *((ebp - 0x1820));
    *(eax) = 0;
    eax = *((ebp - 0x1810));
label_1:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804ac6e */
#include <stdint.h>
 
int32_t dbg_su (char * arg_ch) {
    char * cmd;
    char * gisbase;
    FILE * f;
    int32_t error;
    char[2048] tmpfile;
    int32_t canary;
    long unsigned int next;
    char * format;
    char * var_8h;
    int32_t var_sp_ch;
    /* void su(char * gisbase,char * cmd); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x820)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = next.4089;
    eax *= 0x41c64e6d;
    eax += 0xd431;
    *(obj.next.4089) = eax;
    eax = next.4089;
    eax >>= 0x10;
    eax &= 0x7fff;
    *(obj.next.4089) = eax;
    eax = next.4089;
    srand (eax);
    eax = rand ();
    edx = "%s/gem.test.%i";
    *((esp + 0xc)) = eax;
    eax = *((ebp - 0x81c));
    eax = ebp - 0x80c;
    sprintf (eax, edx, eax);
    edx = 0x8054b0c;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x814)) = eax;
    eax = errno_location ();
    eax = *(eax);
    if (eax == 0xd) {
        print_error (0xfffffffb, "You don't have write access to your local GRASS installation.\nPlease consult your system administrator.\n");
    }
    eax = ebp - 0x80c;
    remove (eax);
    eax = *((ebp - 0x814));
    fclose (eax);
    eax = *((ebp - 0x820));
    eax = system (eax);
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) != 0) {
        eax = *((ebp - 0x820));
        *((esp + 8)) = eax;
        print_error (0xfffffff7, "could not run '%s'.\n");
    }
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x810)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804ad9b */
#include <stdint.h>
 
int32_t dbg_vercmp (void) {
    int32_t major;
    int32_t minor;
    int32_t revision;
    int32_t major2;
    int32_t minor2;
    int32_t revision2;
    /* int vercmp(int major,int minor,int revision,int major2,int minor2,int revision2); */
    eax = *((ebp + 8));
    if (eax == *((ebp + 0x14))) {
        eax = *((ebp + 0xc));
        if (eax == *((ebp + 0x18))) {
            eax = *((ebp + 0x10));
            if (eax != *((ebp + 0x1c))) {
                goto label_0;
            }
            eax = 0;
        }
    } else {
label_0:
        eax = *((ebp + 0x14));
        if (eax > *((ebp + 8))) {
            eax = 0xffffffff;
        } else {
            eax = *((ebp + 0x14));
            if (eax < *((ebp + 8))) {
                eax = 1;
            } else {
                eax = *((ebp + 0x18));
                if (eax > *((ebp + 0xc))) {
                    eax = 0xffffffff;
                } else {
                    eax = *((ebp + 0x18));
                    if (eax < *((ebp + 0xc))) {
                        eax = 1;
                    } else {
                        eax = *((ebp + 0x1c));
                        if (eax > *((ebp + 0x10))) {
                            eax = 0xffffffff;
                        } else {
                            eax = *((ebp + 0x1c));
                            if (eax < *((ebp + 0x10))) {
                                eax = 1;
                            } else {
                                eax = 0;
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
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804e56f */
#include <stdint.h>
 
int32_t dbg_delete_ext_html (size_t arg_8h, char * arg_ch, size_t arg_10h) {
    char ** html;
    char * gisbase;
    char * ext;
    int32_t i;
    int32_t found;
    int32_t end;
    int32_t start;
    int32_t pos3;
    int32_t pos2;
    int32_t pos1;
    char[2048] item;
    int32_t canary;
    char * format;
    uint32_t var_8h;
    /* void delete_ext_html(char * ext,char * gisbase,char ** html); */
    eax = *((ebp + 8));
    *((ebp - 0x82c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x830)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x834)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((esp + 8)) = 0;
    eax = *((ebp - 0x834));
    *((esp + 4)) = eax;
    *(esp) = "<b>Drivers sections:</b>";
    eax = find_pos ();
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) < 0) {
        *((esp + 8)) = 0;
        eax = *((ebp - 0x834));
        *((esp + 4)) = eax;
        *(esp) = "<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->";
        eax = find_pos ();
        *((ebp - 0x810)) = eax;
        if (*((ebp - 0x810)) >= 0) {
            goto label_0;
        }
        print_warning ("Unknown format of index.html. Unable to de-register HTML man pages.\n");
        goto label_1;
    }
label_0:
    eax = *((ebp - 0x810));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x834));
    *((esp + 4)) = eax;
    *(esp) = "<hr>";
    eax = find_pos ();
    *((ebp - 0x814)) = eax;
    eax = *((ebp - 0x810));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x834));
    *((esp + 4)) = eax;
    *(esp) = "<h3>Installed extensions:</h3>";
    eax = find_pos ();
    if (eax == -1) {
        print_warning ("no extensions section found in index.html.\n");
        goto label_1;
    }
    eax = *((ebp - 0x810));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x834));
    *((esp + 4)) = eax;
    *(esp) = "<h3>Installed extensions:</h3>";
    eax = find_pos ();
    *((ebp - 0x81c)) = eax;
    eax = *((ebp - 0x81c));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x834));
    *((esp + 4)) = eax;
    *(esp) = "</ul>";
    eax = find_pos ();
    *((ebp - 0x820)) = eax;
    *((ebp - 0x824)) = 0;
    eax = "\">%s";
    edx = *((ebp - 0x82c));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = *((ebp - 0x81c));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x834));
    *((esp + 4)) = eax;
    eax = ebp - 0x80c;
    *(esp) = eax;
    eax = find_pos ();
    *((ebp - 0x818)) = eax;
    if (*((ebp - 0x818)) == -1) {
        eax = *((ebp - 0x82c));
        print_warning ("extension '%s' not listed in index.html.\n", eax);
        goto label_1;
    }
    eax = *((ebp - 0x818));
    if (eax < *((ebp - 0x820))) {
        eax = *((ebp - 0x834));
        *((esp + 4)) = eax;
        eax = *((ebp - 0x818));
        *(esp) = eax;
        delete_str ();
    }
    *((ebp - 0x820))--;
    eax = *((ebp - 0x81c));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x834));
    *((esp + 4)) = eax;
    *(esp) = "<ul>";
    eax = find_pos ();
    *((ebp - 0x818)) = eax;
    if (*((ebp - 0x818)) == -1) {
        goto label_1;
    }
    eax = *((ebp - 0x820));
    if (eax <= *((ebp - 0x818))) {
        goto label_1;
    }
    eax = *((ebp - 0x818));
    edx = *((ebp - 0x820));
    ecx = *((ebp - 0x820));
    ecx -= eax;
    eax = ecx;
    if (eax > 1) {
        goto label_1;
    }
    *((ebp - 0x828)) = 0;
    while (*((ebp - 0x828)) <= 3) {
        eax = *((ebp - 0x818));
        edx = eax - 1;
        eax = *((ebp - 0x834));
        *((esp + 4)) = eax;
        *(esp) = edx;
        delete_str ();
        *((ebp - 0x828))++;
    }
label_1:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x828)) != 3) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8052748 */
#include <stdint.h>
 
int32_t dbg_run_post (char * arg_8h, size_t arg_10h, char ** arg_14h) {
    char * gisbase;
    char * bins;
    char * package;
    char[2048] tmp2;
    char[2048] tmp;
    int32_t canary;
    int32_t action;
    char * format;
    size_t n;
    char * var_sp_ch;
    /* void run_post(char * package,int action,char * bins,char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x101c)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x1020)) = eax;
    eax = *((ebp + 0x14));
    *((ebp - 0x1024)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp + 0xc));
    eax -= 3;
    if (eax <= 6) {
        eax = *((eax*4 + 0x8056f68));
        /* switch table (7 cases) at 0x8056f68 */
        void (*eax)() ();
        eax = "GEM_ACTION=INSTALL";
        memcpy (obj.GEM_ACTION, eax, 0x13);
        goto label_0;
        eax = "GEM_ACTION=INSTALL";
        memcpy (obj.GEM_ACTION, eax, 0x13);
        goto label_0;
        eax = "GEM_ACTION=QUERY";
        memcpy (obj.GEM_ACTION, eax, 0x11);
        goto label_0;
        eax = "GEM_ACTION=CLEAN";
        memcpy (obj.GEM_ACTION, eax, 0x11);
        goto label_0;
        eax = "GEM_ACTION=LICENSE";
        memcpy (obj.GEM_ACTION, eax, 0x13);
        goto label_0;
        eax = "GEM_ACTION=DETAILS";
        memcpy (obj.GEM_ACTION, eax, 0x13);
    }
label_0:
    *(esp) = obj.GEM_ACTION;
    putenv ();
    if (*((ebp - 0x1024)) != 0) {
        eax = "INSTALL_BASE=%s";
        edx = *((ebp - 0x1024));
        sprintf (obj.INSTALL_BASE, eax, edx);
    } else {
        eax = "INSTALL_BASE=UNDEFINED";
        memcpy (obj.INSTALL_BASE, eax, 0x17);
    }
    *(esp) = obj.INSTALL_BASE;
    putenv ();
    *((esp + 4)) = 0x800;
    eax = ebp - 0x80c;
    *(esp) = eax;
    getcwd ();
    eax = *((ebp - 0x101c));
    *(esp) = eax;
    eax = basename ();
    edx = "%s/%s/src";
    *((esp + 0xc)) = eax;
    eax = ebp - 0x80c;
    eax = ebp - 0x100c;
    sprintf (eax, edx, eax);
    eax = "EXT_BASE=%s";
    edx = ebp - 0x100c;
    sprintf (obj.EXT_BASE, eax, edx);
    *(esp) = obj.EXT_BASE;
    putenv ();
    if (*((ebp - 0x1020)) == 0) {
        eax = "INSTALL_TYPE=src";
        memcpy (obj.INSTALL_TYPE, eax, 0x11);
    } else {
        eax = "INSTALL_TYPE=%s";
        edx = *((ebp - 0x1020));
        sprintf (obj.INSTALL_TYPE, eax, edx);
    }
    *(esp) = obj.INSTALL_TYPE;
    putenv ();
    edx = FORCE;
    eax = 0x8056f3e;
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GEM_FORCE=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GEM_FORCE, eax, edx);
    *(esp) = obj.GEM_FORCE;
    putenv ();
    edx = VERBOSE;
    eax = 0x8056f3e;
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GEM_VERBOSE=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GEM_VERBOSE, eax, edx);
    *(esp) = obj.GEM_VERBOSE;
    putenv ();
    eax = "GEM_GUI=0";
    memcpy (obj.GEM_GUI, eax, 0xa);
    *(esp) = obj.GEM_GUI;
    putenv ();
    atexit (dbg.exit_tmp);
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x1020)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804bf05 */
#include <stdint.h>
 
int32_t dbg_check_ext_menu (void) {
    int32_t idx;
    char ** tcl_lines;
    char * var_4h;
    int32_t var_8h;
    /* int check_ext_menu(char ** tcl_lines); */
    *((esp + 8)) = 0;
    eax = *((ebp + 8));
    *((esp + 4)) = eax;
    *(esp) = "\"&Xtns\" all options 1";
    eax = find_pos ();
    *((ebp - 0xc)) = eax;
    if (*((ebp - 0xc)) == -1) {
        *((esp + 8)) = 0;
        eax = *((ebp + 8));
        *((esp + 4)) = eax;
        *(esp) = "\"&Help\" all options";
        eax = find_pos ();
        *((ebp - 0xc)) = eax;
        if (*((ebp - 0xc)) == -1) {
            *((esp + 8)) = 0;
            eax = *((ebp + 8));
            *((esp + 4)) = eax;
            *(esp) = 0x8055212;
            eax = find_pos ();
            *((ebp - 0xc)) = eax;
            if (*((ebp - 0xc)) == -1) {
                print_error (0xffffffeb, "could not parse 'menu.tcl'.\n");
            }
            eax = *((ebp + 8));
            *((esp + 8)) = eax;
            eax = *((ebp - 0xc));
            insert_str (" \"&Xtns\" all options 1 {\n", eax);
            *((ebp - 0xc))++;
            eax = *((ebp + 8));
            *((esp + 8)) = eax;
            eax = *((ebp - 0xc));
            insert_str (0x805524c, eax);
            eax = *((ebp - 0xc));
            goto label_0;
        }
        eax = *((ebp + 8));
        *((esp + 8)) = eax;
        eax = *((ebp - 0xc));
        insert_str (" \"&Xtns\" all options 1 {\n", eax);
        *((ebp - 0xc))++;
        eax = *((ebp + 8));
        *((esp + 8)) = eax;
        eax = *((ebp - 0xc));
        insert_str (0x805524c, eax);
    }
    eax = *((ebp - 0xc));
label_0:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8053002 */
#include <stdint.h>
 
int32_t dbg_show_details (char * arg_8h) {
    char * package;
    int32_t error;
    char[2048] tmp;
    int32_t var_ch;
    char * src;
    char * var_8h;
    char * var_sp_ch;
    /* void show_details(char * package); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x81c));
    *(esp) = eax;
    eax = basename ();
    eax = ebp - 0x80c;
    strcpy (eax, eax);
    eax = ebp - 0x80c;
    *(esp) = eax;
    eax = chdir ();
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x81c));
        *((esp + 8)) = eax;
        print_error (0xfffffffe, "extension '%s' not accessible: (%s)\n");
    }
    dump_ascii ("info", "Detailed information");
    system ("sh post");
    return exit (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048c84 */
#include <stdint.h>
 
void strcpy (void) {
    strcpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048c94 */
#include <stdint.h>
 
void chdir (void) {
    chdir ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8050220 */
#include <stdint.h>
 
int32_t dbg_source_install (char * nitems, size_t stream, size_t arg_10h, int32_t arg_20h, char * format) {
    char * grass_version;
    char * pkg_short_name;
    char * gisbase;
    char * package;
    stat buf;
    int32_t revision;
    int32_t minor;
    int32_t major;
    char * grass_revision;
    char * grass_minor;
    char * grass_major;
    char * verstr;
    FILE * f;
    int32_t error;
    char[2048] sysstr;
    char[2048] post_cmd;
    char[2048] install_cmd;
    char[2048] dir;
    char[2048] tmp;
    int32_t canary;
    int32_t pkg_major;
    int32_t pkg_minor;
    int32_t pkg_revision;
    /* void source_install(char * package,char * gisbase,char * pkg_short_name,int pkg_major,int pkg_minor,int pkg_revision,char * grass_version); */
    eax = *((ebp + 8));
    *((ebp - 0x288c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x2890)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x2894)) = eax;
    eax = *((ebp + 0x20));
    *((ebp - 0x2898)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x2890));
    edx = ebp - 0x2888;
    eax = _stat (eax, edx);
    *((ebp - 0x2810)) = eax;
    if (*((ebp - 0x2810)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 8)) = eax;
        print_error (0xfffffffb, "installation directory invalid: %s\n");
    }
    eax = "GINSTALL_DST=%s";
    edx = *((ebp - 0x2890));
    sprintf (obj.GINSTALL_DST, eax, edx);
    *(esp) = obj.GINSTALL_DST;
    putenv ();
    eax = "%s/include";
    edx = *((ebp - 0x2890));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GINSTALL_INC=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GINSTALL_INC, eax, edx);
    *(esp) = obj.GINSTALL_INC;
    putenv ();
    eax = "%s/lib";
    edx = *((ebp - 0x2890));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GINSTALL_LIB=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GINSTALL_LIB, eax, edx);
    *(esp) = obj.GINSTALL_LIB;
    putenv ();
    eax = "GEM_GRASS_DIR=%s";
    edx = *((ebp - 0x2890));
    sprintf (obj.GEM_GRASS_DIR, eax, edx);
    *(esp) = obj.GEM_GRASS_DIR;
    putenv ();
    eax = *((ebp - 0x2898));
    eax = strdup (eax);
    *((ebp - 0x2818)) = eax;
    eax = 0x8055edb;
    eax = *((ebp - 0x2818));
    eax = strtok (eax, eax);
    *((ebp - 0x281c)) = eax;
    eax = 0x8055edb;
    eax = strtok (0, eax);
    *((ebp - 0x2820)) = eax;
    eax = 0x8055edb;
    eax = strtok (0, eax);
    *((ebp - 0x2824)) = eax;
    eax = *((ebp - 0x281c));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x2828)) = eax;
    eax = *((ebp - 0x2820));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x282c)) = eax;
    eax = *((ebp - 0x2824));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x2830)) = eax;
    eax = *((ebp - 0x2818));
    free (eax);
    atexit (dbg.exit_tmp);
    eax = *((ebp - 0x288c));
    *(esp) = eax;
    eax = basename ();
    edx = "%s/src";
    eax = ebp - 0x100c;
    sprintf (eax, edx, eax);
    eax = ebp - 0x100c;
    *(esp) = eax;
    eax = chdir ();
    *((ebp - 0x2810)) = eax;
    if (*((ebp - 0x2810)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x288c));
        *((esp + 8)) = eax;
        print_error (0xfffffffe, "extension files in '%s' not accessible: %s\n");
    }
    eax = SKIP_CFG;
    if (eax == 0) {
        eax = VERBOSE;
        if (eax != 0) {
            eax = stdout;
            edx = stdout;
            eax = "Running configure script:\n";
            fwrite (edx, 1, 0x1a);
            eax = "sh %s %s";
            *((esp + 0xc)) = 0x806aae0;
            eax = ebp - 0x280c;
            sprintf (eax, eax, 0x806b2e0);
            eax = ebp - 0x280c;
            eax = system (eax);
            *((ebp - 0x2810)) = eax;
        } else {
            eax = stdout;
            edx = stdout;
            eax = "Configuring...";
            fwrite (edx, 1, 0xe);
            eax = "sh %s %s --quiet &> %s";
            *((esp + 0x10)) = 0x80672c0;
            *((esp + 0xc)) = 0x806aae0;
            eax = ebp - 0x280c;
            sprintf (eax, eax, 0x806b2e0);
            eax = ebp - 0x280c;
            eax = system (eax);
            *((ebp - 0x2810)) = eax;
        }
        if (*((ebp - 0x2810)) == -1) {
            print_error (0xffffffe5, "could not run configure script.\n");
        }
        if (*((ebp - 0x2810)) > 0) {
            print_error (0xfffffffd, "system configuration failed.\n");
        }
        print_done ();
        print_cfg ();
    }
    eax = "GEM_EXT_NAME=%s";
    edx = *((ebp - 0x2894));
    sprintf (obj.GEM_EXT_NAME, eax, edx);
    *(esp) = obj.GEM_EXT_NAME;
    putenv ();
    eax = "%i.%i.%i";
    edx = *((ebp + 0x1c));
    *((esp + 0x10)) = edx;
    edx = *((ebp + 0x18));
    *((esp + 0xc)) = edx;
    edx = *((ebp + 0x14));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = "GEM_EXT_VERSION=%s";
    edx = ebp - 0x80c;
    sprintf (obj.GEM_EXT_VERSION, eax, edx);
    *(esp) = obj.GEM_EXT_VERSION;
    putenv ();
    dump_html ("../description", 0x8064ac0);
    dump_html ("../info", 0x80652c0);
    dump_html ("../depends", 0x8065ac0);
    dump_html ("../bugs", 0x80662c0);
    dump_html ("../authors", 0x8066ac0);
    eax = "GEM_EXT_DESCR=%s";
    sprintf (obj.GEM_EXT_DESCR, eax, 0x8064ac0);
    *(esp) = obj.GEM_EXT_DESCR;
    putenv ();
    eax = "GEM_EXT_INFO=%s";
    sprintf (obj.GEM_EXT_INFO, eax, 0x80652c0);
    *(esp) = obj.GEM_EXT_INFO;
    putenv ();
    eax = "GEM_EXT_DEPS=%s";
    sprintf (obj.GEM_EXT_DEPS, eax, 0x8065ac0);
    *(esp) = obj.GEM_EXT_DEPS;
    putenv ();
    eax = "GEM_EXT_BUGS=%s";
    sprintf (obj.GEM_EXT_BUGS, eax, 0x80662c0);
    *(esp) = obj.GEM_EXT_BUGS;
    putenv ();
    eax = "GEM_EXT_AUTHORS=%s";
    sprintf (obj.GEM_EXT_AUTHORS, eax, 0x8066ac0);
    *(esp) = obj.GEM_EXT_AUTHORS;
    putenv ();
    atexit (dbg.exit_tmp);
    eax = *((ebp - 0x2898));
    eax = *((ebp - 0x2890));
    eax = *((ebp - 0x288c));
    check_dependencies (eax, eax, eax);
    eax = VERBOSE;
    if (eax != 0) {
        edx = "Running '%s':\n";
        eax = stdout;
        *((esp + 8)) = 0x806bae0;
        fprintf (eax, edx);
        eax = "%s -f Makefile";
        eax = ebp - 0x280c;
        sprintf (eax, eax, 0x806bae0);
        eax = ebp - 0x280c;
        eax = system (eax);
        *((ebp - 0x2810)) = eax;
    } else {
        eax = stdout;
        edx = stdout;
        eax = "Compiling...";
        fwrite (edx, 1, 0xc);
        eax = "%s -f Makefile &> %s";
        *((esp + 0xc)) = 0x80672c0;
        eax = ebp - 0x280c;
        sprintf (eax, eax, 0x806bae0);
        eax = ebp - 0x280c;
        eax = system (eax);
        *((ebp - 0x2810)) = eax;
    }
    if (*((ebp - 0x2810)) == -1) {
        eax = VERBOSE;
        if (eax != 0) {
            goto label_0;
        }
        *((esp + 8)) = obj.MAKE_CMD;
        print_error (0xfffffff7, "could not run '%s' do you have make tools installed?\n");
    }
label_0:
    if (*((ebp - 0x2810)) > 0) {
        print_error (0xfffffffc, "source code could not be compiled.\n \t\t\tRun again with option -v to see what is causing trouble.\n");
    }
    print_done ();
    eax = stdout;
    edx = stdout;
    eax = "Installing...";
    fwrite (edx, 1, 0xd);
    edx = 0x8055e6b;
    eax = "../uninstall";
    eax = fopen (eax, edx);
    *((ebp - 0x2814)) = eax;
    if (*((ebp - 0x2814)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        print_warning ("error checking for uninstall script: %s\n \t\t\t\tUninstalling this extension may leave orphaned files on your system", eax);
    } else {
        eax = VERBOSE;
        if (eax != 0) {
            eax = "cp -vf ../uninstall %s/etc/uninstall.%s ;";
            edx = *((ebp - 0x2894));
            *((esp + 0xc)) = edx;
            edx = *((ebp - 0x2890));
            eax = ebp - 0x80c;
            sprintf (eax, eax, edx);
            eax = ebp - 0x80c;
            strcpy (obj.UNINSTALL_CMD, eax);
        } else {
            eax = "cp -f ../uninstall %s/etc/uninstall.%s &> %s ;";
            *((esp + 0x10)) = 0x80672c0;
            edx = *((ebp - 0x2894));
            *((esp + 0xc)) = edx;
            edx = *((ebp - 0x2890));
            eax = ebp - 0x80c;
            sprintf (eax, eax, edx);
            eax = ebp - 0x80c;
            strcpy (obj.UNINSTALL_CMD, eax);
        }
        eax = *((ebp - 0x2814));
        fclose (eax);
    }
    eax = *((ebp + 0x1c));
    eax = *((ebp + 0x18));
    eax = *((ebp + 0x14));
    eax = *((ebp - 0x2894));
    eax = *((ebp - 0x2890));
    register_extension (eax, 0x80566df, eax);
    eax = *((ebp - 0x2898));
    eax = *((ebp - 0x2890));
    eax = *((ebp - 0x288c));
    check_dependencies (eax, eax, eax);
    if (*((ebp - 0x2828)) == 6) {
        if (*((ebp - 0x282c)) > 0) {
            goto label_1;
        }
        eax = *((ebp - 0x2890));
        eax = *((ebp - 0x2894));
        register_entries_gisman (eax, eax);
    }
label_1:
    eax = *((ebp - 0x2890));
    eax = *((ebp - 0x2894));
    register_entries_gisman2 (eax, eax);
    eax = *((ebp + 0x1c));
    *((esp + 0x10)) = eax;
    eax = *((ebp + 0x18));
    *((esp + 0xc)) = eax;
    eax = *((ebp + 0x14));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x2890));
    eax = *((ebp - 0x2894));
    register_html (eax, eax);
    eax = VERBOSE;
    if (eax != 0) {
        edx = "Running '%s install':\n";
        eax = stdout;
        *((esp + 8)) = 0x806bae0;
        fprintf (eax, edx);
        eax = "%s -f Makefile install ; \t\t\t\t\tcp -vf %s %s/etc/extensions.db ; chmod -v a+r %s/etc/extensions.db ;";
        edx = *((ebp - 0x2890));
        *((esp + 0x14)) = edx;
        edx = *((ebp - 0x2890));
        *((esp + 0x10)) = edx;
        *((esp + 0xc)) = 0x8063ac0;
        eax = ebp - 0x180c;
        sprintf (eax, eax, 0x806bae0);
    } else {
        eax = "%s -f Makefile -s install &> %s ; \t\t\t\t\tcp -f %s %s/etc/extensions.db &> %s ; chmod a+r %s/etc/extensions.db &> %s ;";
        *((esp + 0x20)) = 0x80672c0;
        edx = *((ebp - 0x2890));
        *((esp + 0x1c)) = edx;
        *((esp + 0x18)) = 0x80672c0;
        edx = *((ebp - 0x2890));
        *((esp + 0x14)) = edx;
        *((esp + 0x10)) = 0x8063ac0;
        *((esp + 0xc)) = 0x80672c0;
        eax = ebp - 0x180c;
        sprintf (eax, eax, 0x806bae0);
    }
    eax = VERBOSE;
    if (eax != 0) {
        eax = "sh ../post";
        eax = ebp - 0x200c;
        memcpy (eax, eax, 0xb);
    } else {
        eax = "sh ../post &> %s";
        eax = ebp - 0x200c;
        sprintf (eax, eax, 0x80672c0);
    }
    eax = "%s %s %s %s %s %s";
    edx = ebp - 0x200c;
    *((esp + 0x1c)) = edx;
    *((esp + 0x18)) = 0x80692e0;
    *((esp + 0x14)) = 0x8068ae0;
    *((esp + 0x10)) = 0x80682e0;
    *((esp + 0xc)) = 0x806a2e0;
    edx = ebp - 0x180c;
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = ebp - 0x80c;
    *((esp + 4)) = eax;
    eax = *((ebp - 0x2890));
    su (eax);
    print_done ();
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804a1c8 */
#include <stdint.h>
 
int32_t dbg_nc_fgets_nb (size_t arg_10h) {
    char * tmp;
    char * hashmark;
    char * s;
    int32_t size;
    char * format;
    size_t stream;
    do {
        /* char * nc_fgets_nb(char * s,int size,FILE * stream); */
label_0:
        eax = *((ebp + 0x10));
        eax = *((ebp + 0xc));
        eax = *((ebp + 8));
        eax = fgets (eax, eax, eax);
        if (eax == 0) {
            eax = 0;
            goto label_1;
        }
        eax = *((ebp + 8));
        *(esp) = eax;
        eax = is_text ();
        if (eax != 0) {
            goto label_2;
        }
        eax = *((ebp + 0x10));
        *((esp + 8)) = eax;
        eax = *((ebp + 0xc));
        *((esp + 4)) = eax;
        eax = *((ebp + 8));
        nc_fgets_nb (eax);
    } while (1);
    goto label_1;
label_2:
    eax = *((ebp + 8));
    eax = strchr (eax, 0x23);
    *((ebp - 0xc)) = eax;
    if (*((ebp - 0xc)) != 0) {
        eax = *((ebp + 8));
        if (eax == *((ebp - 0xc))) {
            eax = *((ebp + 0x10));
            *((esp + 8)) = eax;
            eax = *((ebp + 0xc));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            nc_fgets_nb (eax);
            goto label_0;
            goto label_1;
        }
        eax = malloc (0x800);
        *((ebp - 0x10)) = eax;
        eax = *((ebp + 8));
        eax = *((ebp - 0x10));
        strcpy (eax, eax);
        eax = 0x8054ab0;
        eax = *((ebp - 0x10));
        eax = strtok (eax, eax);
        *((ebp - 0x10)) = eax;
        eax = 0x8054ab2;
        edx = *((ebp - 0x10));
        eax = *((ebp + 8));
        sprintf (eax, eax, edx);
        eax = *((ebp - 0x10));
        free (eax);
    }
    eax = *((ebp + 8));
label_1:
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804c009 */
#include <stdint.h>
 
int32_t dbg_new_submenu (size_t arg_8h, char * arg_ch, size_t arg_10h) {
    char ** tcl_lines;
    char * menu;
    char * pkg_short_name;
    int32_t terminator;
    int32_t len;
    char * second_quote;
    char * first_quote;
    int32_t last;
    int32_t insert_here;
    int32_t idx2;
    int32_t idx;
    char[2048] searchstr;
    char[2048] tmp2;
    char[2048] tmp;
    int32_t canary;
    char * format;
    size_t var_8h;
    int32_t var_sp_ch;
    /* int new_submenu(char * pkg_short_name,char * menu,char ** tcl_lines); */
    eax = *((ebp + 8));
    *((ebp - 0x183c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x1840)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x1844)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((esp + 8)) = 0;
    eax = *((ebp - 0x1844));
    *((esp + 4)) = eax;
    *(esp) = "\"&Xtns\" all options";
    eax = find_pos ();
    *((ebp - 0x1810)) = eax;
    eax = *((ebp - 0x1810));
    eax++;
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1844));
    *((esp + 4)) = eax;
    *(esp) = "\" all options";
    eax = find_pos ();
    eax--;
    *((ebp - 0x181c)) = eax;
    if (*((ebp - 0x181c)) == -1) {
        *((esp + 8)) = 0;
        eax = *((ebp - 0x1844));
        *((esp + 4)) = eax;
        *(esp) = 0x8055212;
        eax = find_pos ();
        *((ebp - 0x181c)) = eax;
    }
    eax = *((ebp - 0x1840));
    *(esp) = eax;
    eax = is_submenu ();
    if (eax == 0) {
        print_warning ("first line not a submenu specifier in 'entries-gisman'.\n");
        eax = 0xffffffff;
        goto label_0;
    }
    eax = *((ebp - 0x1840));
    eax = strrchr (eax, 0x5d);
    ebx = eax;
    eax = *((ebp - 0x1840));
    eax = strchr (eax, 0x5b);
    edx = ebx;
    edx -= eax;
    eax = edx;
    *((ebp - 0x1828)) = eax;
    ebx = *((ebp - 0x1828));
    eax = *((ebp - 0x1840));
    eax = strchr (eax, 0x5b);
    eax++;
    eax = ebp - 0x80c;
    strncpy (eax, eax, ebx);
    eax = *((ebp - 0x1828));
    eax--;
    *((ebp + eax - 0x80c)) = 0;
    eax = "{cascad \"%s\";
    edx = ebp - 0x80c;
    eax = ebp - 0x180c;
    sprintf (eax, eax, edx);
    eax = *((ebp - 0x1810));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1844));
    *((esp + 4)) = eax;
    eax = ebp - 0x180c;
    *(esp) = eax;
    eax = find_pos ();
    *((ebp - 0x1814)) = eax;
    if (*((ebp - 0x1814)) != -1) {
        eax = *((ebp - 0x1814));
        if (eax >= *((ebp - 0x181c))) {
            goto label_1;
        }
        eax = ebp - 0x80c;
        print_warning ("submenu '%s' exists in GIS Manager's Xtns menu.\n", eax);
        eax = 0xffffffff;
        goto label_0;
    }
label_1:
    eax = *((ebp - 0x1810));
    eax++;
    *((ebp - 0x1818)) = eax;
    eax = *((ebp - 0x1810));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1844));
    *((esp + 4)) = eax;
    *(esp) = "{cascad ";
    eax = find_pos ();
    *((ebp - 0x1814)) = eax;
    while (eax < *((ebp - 0x181c))) {
        eax = *((ebp - 0x1814));
        eax <<= 2;
        eax += *((ebp - 0x1844));
        eax = *(eax);
        eax = strchr (eax, 0x22);
        *((ebp - 0x1820)) = eax;
        eax = *((ebp - 0x1820));
        eax++;
        eax = strchr (eax, 0x22);
        *((ebp - 0x1824)) = eax;
        edx = *((ebp - 0x1824));
        eax = *((ebp - 0x1820));
        ecx = edx;
        ecx -= eax;
        eax = ecx;
        *((ebp - 0x1828)) = eax;
        eax = *((ebp - 0x1828));
        edx = *((ebp - 0x1820));
        edx++;
        eax = ebp - 0x100c;
        strncpy (eax, edx, eax);
        eax = *((ebp - 0x1828));
        eax--;
        *((ebp + eax - 0x100c)) = 0;
        eax = ebp - 0x100c;
        eax = ebp - 0x80c;
        eax = strcmp (eax, eax);
        if (eax < 0) {
            eax = *((ebp - 0x1814));
            *((ebp - 0x1818)) = eax;
        } else {
            *((ebp - 0x1810))++;
            eax = *((ebp - 0x1810));
            *((esp + 8)) = eax;
            eax = *((ebp - 0x1844));
            *((esp + 4)) = eax;
            *(esp) = "{cascad ";
            eax = find_pos ();
            *((ebp - 0x1814)) = eax;
            if (*((ebp - 0x1814)) == -1) {
                goto label_2;
            }
            eax = *((ebp - 0x1814));
        }
    }
label_2:
    eax = " \t\t\t%s {} \"\" 1 {\n";
    edx = ebp - 0x180c;
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = *((ebp - 0x1844));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x1818));
    eax = ebp - 0x80c;
    insert_str (eax, eax);
    eax = *((ebp - 0x1818));
    edx = eax + 1;
    eax = *((ebp - 0x1844));
    *((esp + 8)) = eax;
    insert_str (" \t\t\t}}\n", edx);
    *((esp + 8)) = 0;
    eax = *((ebp - 0x1844));
    *((esp + 4)) = eax;
    *(esp) = 0x8055212;
    eax = find_pos ();
    *((ebp - 0x182c)) = eax;
    eax = "#(DO_NOT_REMOVE_THIS_COMMENT) <%s> %s {} \"\" 1 {\n";
    edx = ebp - 0x180c;
    *((esp + 0xc)) = edx;
    edx = *((ebp - 0x183c));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = *((ebp - 0x182c));
    edx = eax + 1;
    eax = *((ebp - 0x1844));
    *((esp + 8)) = eax;
    eax = ebp - 0x80c;
    insert_str (eax, edx);
    eax = *((ebp - 0x1818));
    eax++;
label_0:
    edx = *((ebp - 0xc));
    edx ^= *(gs:0x14);
    if (eax != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804968f */
#include <stdint.h>
 
int32_t dbg_chop (void) {
    int32_t stop;
    int32_t chopped;
    int32_t i;
    char * string;
    /* int chop(char * string); */
    *((ebp - 0x14)) = 0;
    *((ebp - 0x10)) = 0;
    eax = *((ebp + 8));
    eax = strlen (eax);
    eax--;
    *((ebp - 0xc)) = eax;
    while (*((ebp - 0xc)) >= 0) {
        *((ebp - 0x14)) = 1;
        eax = *((ebp - 0xc));
        eax += *((ebp + 8));
        eax = *(eax);
        if (al != 0xa) {
            eax = *((ebp - 0xc));
            eax += *((ebp + 8));
            eax = *(eax);
            if (al == 9) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            eax += *((ebp + 8));
            eax = *(eax);
            if (al == 0x20) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            eax += *((ebp + 8));
            eax = *(eax);
            if (al == 0xc) {
                goto label_0;
            }
            eax = *((ebp - 0xc));
            eax += *((ebp + 8));
            eax = *(eax);
            if (al != 0xd) {
                goto label_1;
            }
        }
label_0:
        *((ebp - 0x10))++;
        *((ebp - 0x14)) = 0;
label_1:
        if (*((ebp - 0x14)) == 1) {
            goto label_2;
        }
        *((ebp - 0xc))--;
    }
    goto label_3;
label_2:
label_3:
    eax = *((ebp + 8));
    eax = strlen (eax);
    edx = *((ebp - 0x10));
    eax -= edx;
    eax += *((ebp + 8));
    *(eax) = 0;
    eax = *((ebp - 0x10));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8052334 */
#include <stdint.h>
 
int32_t dbg_restore (char * arg_8h, size_t arg_ch) {
    char * grass_version;
    char * gisbase;
    int32_t revision;
    int32_t minor;
    int32_t major;
    char * grass_revision;
    char * grass_minor;
    char * grass_major;
    char * verstr;
    int32_t num_restored;
    char[2048] tmp;
    int32_t canary;
    char * format;
    char * nitems;
    FILE * stream;
    char * var_10h;
    int32_t var_14h;
    char * var_18h;
    char * var_1ch;
    char * var_20h;
    /* void restore(char * gisbase,char * grass_version); */
    eax = *((ebp + 8));
    *((ebp - 0x83c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x840)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x840));
    eax = strdup (eax);
    *((ebp - 0x814)) = eax;
    eax = 0x8055edb;
    eax = *((ebp - 0x814));
    eax = strtok (eax, eax);
    *((ebp - 0x818)) = eax;
    eax = 0x8055edb;
    eax = strtok (0, eax);
    *((ebp - 0x81c)) = eax;
    eax = 0x8055edb;
    eax = strtok (0, eax);
    *((ebp - 0x820)) = eax;
    eax = *((ebp - 0x818));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x824)) = eax;
    eax = *((ebp - 0x81c));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x828)) = eax;
    eax = *((ebp - 0x820));
    eax = strtol (eax, 0, 0xa);
    *((ebp - 0x82c)) = eax;
    eax = *((ebp - 0x814));
    free (eax);
    eax = stdout;
    edx = stdout;
    eax = "Restoring...";
    fwrite (edx, 1, 0xc);
    if (*((ebp - 0x824)) == 6) {
        if (*((ebp - 0x828)) > 0) {
            goto label_0;
        }
        eax = *((ebp - 0x83c));
        eax = restore_entries_gisman (eax);
        *((ebp - 0x810)) = eax;
        eax = VERBOSE;
        if (eax == 0) {
            goto label_0;
        }
        edx = "\nRestored entries for GIS Manager: %i\n";
        eax = stdout;
        ecx = *((ebp - 0x810));
        *((esp + 8)) = ecx;
        fprintf (eax, edx);
    }
label_0:
    eax = *((ebp - 0x83c));
    eax = restore_html (eax);
    *((ebp - 0x810)) = eax;
    eax = VERBOSE;
    if (eax != 0) {
        edx = "\nRestored links in index.hml: %i\n";
        eax = stdout;
        ecx = *((ebp - 0x810));
        *((esp + 8)) = ecx;
        fprintf (eax, edx);
    }
    if (*((ebp - 0x810)) > 0) {
        eax = VERBOSE;
        if (eax != 0) {
            eax = "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html";
            edx = *((ebp - 0x83c));
            *((esp + 0x1c)) = edx;
            edx = *((ebp - 0x83c));
            *((esp + 0x18)) = edx;
            *((esp + 0x14)) = 0x8067ac0;
            edx = *((ebp - 0x83c));
            *((esp + 0x10)) = edx;
            edx = *((ebp - 0x83c));
            *((esp + 0xc)) = edx;
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x80642c0);
        } else {
            eax = "cp -f %s %s/etc/dm/menu.tcl ; chmod a+r %s/etc/dm/menu.tcl &> %s ; \t\t\t\t\t\t\tcp -f %s %s/docs/html/index.html ; chmod a+r %s/docs/html/index.html";
            edx = *((ebp - 0x83c));
            *((esp + 0x20)) = edx;
            edx = *((ebp - 0x83c));
            *((esp + 0x1c)) = edx;
            *((esp + 0x18)) = 0x8067ac0;
            *((esp + 0x14)) = 0x80672c0;
            edx = *((ebp - 0x83c));
            *((esp + 0x10)) = edx;
            edx = *((ebp - 0x83c));
            *((esp + 0xc)) = edx;
            eax = ebp - 0x80c;
            sprintf (eax, eax, 0x80642c0);
        }
        eax = ebp - 0x80c;
        *((esp + 4)) = eax;
        eax = *((ebp - 0x83c));
        su (eax);
    }
    if (*((ebp - 0x810)) == 0) {
        print_error (0xffffffe6, "could not find anything to restore.\n");
    }
    print_done ();
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x810)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804b014 */
#include <stdint.h>
 
int32_t dbg_register_extension (char * arg_8h, char * arg_ch, char * arg_10h, size_t n, int32_t arg_18h, int32_t arg_1ch) {
    char * pkg_short_name;
    char * bins;
    char * gisbase;
    int32_t revision;
    int32_t minor;
    int32_t major;
    FILE * f_out;
    FILE * f_in;
    int32_t ext_exists;
    int32_t copy_thru;
    int32_t must_register;
    int32_t db_exists;
    int32_t error;
    int32_t n_lines;
    char[2048] deps;
    char[2048] inst_bins;
    char[2048] short_name;
    char[2048] str;
    char[2048] file;
    int32_t canary;
    int32_t pkg_major;
    int32_t pkg_minor;
    int32_t pkg_revision;
    char * format;
    /* void register_extension(char * gisbase,char * bins,char * pkg_short_name,int pkg_major,int pkg_minor,int pkg_revision); */
    eax = *((ebp + 8));
    *((ebp - 0x283c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x2840)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x2844)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((ebp - 0x2818)) = 1;
    eax = "%s/etc/extensions.db";
    edx = *((ebp - 0x283c));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    edx = 0x8054d13;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x2828)) = eax;
    if (*((ebp - 0x2828)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            *((ebp - 0x2818)) = 0;
        } else {
            eax = *((ebp - 0x2828));
            fclose (eax);
            eax = errno_location ();
            eax = *(eax);
            eax = strerror (eax);
            *((esp + 0xc)) = eax;
            eax = ebp - 0x80c;
            *((esp + 8)) = eax;
            print_error (0xfffffff1, "checking for file '%s': %s\n");
        }
    }
    if (*((ebp - 0x2818)) == 0) {
        goto label_0;
    }
    eax = "/tmp/grass.extensions.db.XXXXXX";
    memcpy (obj.TMPDB, eax, 0x20);
    mkstemp (obj.TMPDB);
    edx = 0x8054d74;
    eax = TMPDB;
    eax = fopen (eax, edx);
    *((ebp - 0x282c)) = eax;
    if (*((ebp - 0x282c)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        *((esp + 8)) = 0x8063ac0;
        print_error (0xfffffff1, "could not create temp file '%s': %s\n \t\t\t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit (dbg.exit_db);
    *((ebp - 0x2810)) = 0;
    *((ebp - 0x281c)) = 1;
    *((ebp - 0x2824)) = 0;
    while (eax != 0) {
        *((ebp - 0x2810))++;
        *((ebp - 0x2820)) = 1;
        edx = "%s\t%i.%i.%i\t%s\t%s";
        eax = ebp - 0x100c;
        ecx = ebp - 0x280c;
        ecx = ebp - 0x200c;
        ecx = ebp - 0x2838;
        ecx = ebp - 0x2834;
        ecx = ebp - 0x2830;
        ecx = ebp - 0x180c;
        isoc99_sscanf (ecx, edx, ecx);
        eax = *((ebp - 0x2844));
        eax = ebp - 0x180c;
        eax = strcmp (eax, eax);
        if (eax == 0) {
            *((ebp - 0x2824)) = 1;
            ecx = *((ebp - 0x2838));
            edx = *((ebp - 0x2834));
            eax = *((ebp - 0x2830));
            ebx = *((ebp + 0x1c));
            *((esp + 0x14)) = ebx;
            ebx = *((ebp + 0x18));
            *((esp + 0x10)) = ebx;
            ebx = *((ebp + 0x14));
            *((esp + 0xc)) = ebx;
            *((esp + 8)) = ecx;
            *((esp + 4)) = edx;
            *(esp) = eax;
            eax = vercmp ();
            *((ebp - 0x2814)) = eax;
            eax = FORCE;
            if (eax == 0) {
                if (*((ebp - 0x2814)) < 0) {
                    ecx = *((ebp - 0x2838));
                    edx = *((ebp - 0x2834));
                    eax = *((ebp - 0x2830));
                    *((esp + 0x14)) = ecx;
                    *((esp + 0x10)) = edx;
                    *((esp + 0xc)) = eax;
                    eax = *((ebp - 0x2844));
                    *((esp + 8)) = eax;
                    print_error (0xfffffff0, "Extension '%s' with lower version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n");
                }
                ecx = *((ebp - 0x2838));
                edx = *((ebp - 0x2834));
                eax = *((ebp - 0x2830));
                *((esp + 0x14)) = ecx;
                *((esp + 0x10)) = edx;
                *((esp + 0xc)) = eax;
                eax = *((ebp - 0x2844));
                *((esp + 8)) = eax;
                print_error (0xfffffff0, "Extension '%s' with same or higher version (%i.%i.%i) already installed. You can use -f to overwrite this version, if you know what you are doing.\n");
            }
            eax = FORCE;
            if (eax == 0) {
                goto label_1;
            }
            if (*((ebp - 0x2814)) == 0) {
                *((ebp - 0x281c)) = 0;
            } else {
                *((ebp - 0x281c)) = 1;
                *((ebp - 0x2820)) = 0;
            }
        }
label_1:
        if (*((ebp - 0x2820)) != 0) {
            eax = ebp - 0x100c;
            eax = *((ebp - 0x282c));
            fprintf (eax, eax);
            eax = *((ebp - 0x282c));
            fflush (eax);
        }
        eax = *((ebp - 0x2828));
        *((esp + 8)) = eax;
        *((esp + 4)) = 0x800;
        eax = ebp - 0x100c;
        eax = nc_fgets_nb (eax);
    }
    if (*((ebp - 0x281c)) != 0) {
        if (*((ebp - 0x2824)) == 0) {
            eax = *((ebp - 0x283c));
            eax = *((ebp - 0x2844));
            eax = depstr (eax, eax);
            eax = ebp - 0x280c;
            strcpy (eax, eax);
            eax = "%s\t%i.%i.%i\t%s\t%s\n";
            edx = ebp - 0x280c;
            *((esp + 0x1c)) = edx;
            edx = *((ebp - 0x2840));
            *((esp + 0x18)) = edx;
            edx = *((ebp + 0x1c));
            *((esp + 0x14)) = edx;
            edx = *((ebp + 0x18));
            *((esp + 0x10)) = edx;
            edx = *((ebp + 0x14));
            *((esp + 0xc)) = edx;
            edx = *((ebp - 0x2844));
            *((esp + 8)) = edx;
            eax = *((ebp - 0x282c));
            fprintf (eax, eax);
        } else {
            eax = *((ebp - 0x283c));
            eax = *((ebp - 0x2844));
            eax = depstr (eax, eax);
            eax = ebp - 0x280c;
            strcpy (eax, eax);
            eax = "%s\t%i.%i.%i\t%s\t%s\n";
            edx = ebp - 0x280c;
            *((esp + 0x1c)) = edx;
            edx = ebp - 0x200c;
            *((esp + 0x18)) = edx;
            edx = *((ebp + 0x1c));
            *((esp + 0x14)) = edx;
            edx = *((ebp + 0x18));
            *((esp + 0x10)) = edx;
            edx = *((ebp + 0x14));
            *((esp + 0xc)) = edx;
            edx = ebp - 0x180c;
            *((esp + 8)) = edx;
            eax = *((ebp - 0x282c));
            fprintf (eax, eax);
        }
    }
    eax = *((ebp - 0x282c));
    fclose (eax);
    eax = *((ebp - 0x2828));
    fclose (eax);
label_0:
    if (*((ebp - 0x2810)) != 0) {
        if (*((ebp - 0x2818)) != 0) {
            goto label_2;
        }
    }
    eax = "/tmp/grass.extensions.db.XXXXXX";
    memcpy (obj.TMPDB, eax, 0x20);
    mkstemp (obj.TMPDB);
    edx = 0x8054d74;
    eax = TMPDB;
    eax = fopen (eax, edx);
    *((ebp - 0x282c)) = eax;
    if (*((ebp - 0x282c)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xfffffff1, "could not create temp db '%s': %s\n \t\t\t\t\tMake sure that directory /tmp exists on your system and you have write permission.\n");
    }
    atexit (dbg.exit_db);
    eax = *((ebp - 0x283c));
    eax = *((ebp - 0x2844));
    eax = depstr (eax, eax);
    eax = ebp - 0x280c;
    strcpy (eax, eax);
    eax = "%s\t%i.%i.%i\t%s\t%s\n";
    edx = ebp - 0x280c;
    *((esp + 0x1c)) = edx;
    edx = *((ebp - 0x2840));
    *((esp + 0x18)) = edx;
    edx = *((ebp + 0x1c));
    *((esp + 0x14)) = edx;
    edx = *((ebp + 0x18));
    *((esp + 0x10)) = edx;
    edx = *((ebp + 0x14));
    *((esp + 0xc)) = edx;
    edx = *((ebp - 0x2844));
    *((esp + 8)) = edx;
    eax = *((ebp - 0x282c));
    fprintf (eax, eax);
    eax = *((ebp - 0x282c));
    fclose (eax);
label_2:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x282c)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804e100 */
#include <stdint.h>
 
int32_t dbg_new_ext_html (size_t arg_8h, char * arg_ch, char * arg_10h) {
    char ** html;
    char * gisbase;
    char * ext;
    int32_t len;
    char * last_char;
    char * first_char;
    int32_t insert_here;
    int32_t end;
    int32_t start;
    int32_t pos3;
    int32_t pos2;
    int32_t pos1;
    char[2048] item;
    int32_t canary;
    int32_t major;
    int32_t minor;
    int32_t revision;
    char * format;
    size_t var_8h;
    char * var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    int32_t var_18h;
    /* void new_ext_html(char * ext,char * gisbase,char ** html,int major,int minor,int revision); */
    eax = *((ebp + 8));
    *((ebp - 0x83c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x840)) = eax;
    eax = *((ebp + 0x10));
    *((ebp - 0x844)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    *((esp + 8)) = 0;
    eax = *((ebp - 0x844));
    *((esp + 4)) = eax;
    *(esp) = "<b>Drivers sections:</b>";
    eax = find_pos ();
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) < 0) {
        *((esp + 8)) = 0;
        eax = *((ebp - 0x844));
        *((esp + 4)) = eax;
        *(esp) = "<!-- GEM Extensions StartHTML. Do not delete or change this comment! -->";
        eax = find_pos ();
        *((ebp - 0x810)) = eax;
        if (*((ebp - 0x810)) >= 0) {
            goto label_0;
        }
        print_warning ("Unknown format of index.html. Unable to register HTML man pages.\n");
        goto label_1;
    }
label_0:
    eax = *((ebp - 0x810));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x844));
    *((esp + 4)) = eax;
    *(esp) = "<hr>";
    eax = find_pos ();
    *((ebp - 0x814)) = eax;
    eax = *((ebp - 0x810));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x844));
    *((esp + 4)) = eax;
    *(esp) = "<h3>Installed extensions:</h3>";
    eax = find_pos ();
    if (eax == -1) {
        eax = *((ebp - 0x844));
        *((esp + 8)) = eax;
        eax = *((ebp - 0x814));
        insert_str ("<h3>Installed extensions:</h3>\n", eax);
        eax = *((ebp - 0x814));
        edx = eax + 1;
        eax = *((ebp - 0x844));
        *((esp + 8)) = eax;
        insert_str ("<ul>\n", edx);
        eax = *((ebp - 0x814));
        edx = eax + 2;
        eax = *((ebp - 0x844));
        *((esp + 8)) = eax;
        insert_str ("</ul>\n", edx);
        eax = *((ebp - 0x814));
        edx = eax + 3;
        eax = *((ebp - 0x844));
        *((esp + 8)) = eax;
        insert_str ("<p>\n", edx);
    }
    eax = *((ebp - 0x810));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x844));
    *((esp + 4)) = eax;
    *(esp) = "<h3>Installed extensions:</h3>";
    eax = find_pos ();
    *((ebp - 0x81c)) = eax;
    eax = *((ebp - 0x81c));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x844));
    *((esp + 4)) = eax;
    *(esp) = "</ul>";
    eax = find_pos ();
    *((ebp - 0x820)) = eax;
    eax = *((ebp - 0x81c));
    eax += 2;
    *((ebp - 0x824)) = eax;
    eax = "\">%s";
    edx = *((ebp - 0x83c));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = *((ebp - 0x824));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x844));
    *((esp + 4)) = eax;
    eax = ebp - 0x80c;
    *(esp) = eax;
    eax = find_pos ();
    *((ebp - 0x818)) = eax;
    if (*((ebp - 0x818)) != -1) {
        eax = *((ebp - 0x83c));
        print_warning ("list item '%s' exists in index.html.\n", eax);
        eax = FORCE;
        if (eax == 0) {
            goto label_2;
        }
        eax = UPGRADE;
        if (eax == 0) {
            goto label_3;
        }
        eax = "<li><a href=\"../extensions/%s/index.html\">%s (%i.%i.%i)</a>\n";
        edx = *((ebp + 0x1c));
        *((esp + 0x18)) = edx;
        edx = *((ebp + 0x18));
        *((esp + 0x14)) = edx;
        edx = *((ebp + 0x14));
        *((esp + 0x10)) = edx;
        edx = *((ebp - 0x83c));
        *((esp + 0xc)) = edx;
        edx = *((ebp - 0x83c));
        eax = ebp - 0x80c;
        sprintf (eax, eax, edx);
        edx = ebp - 0x80c;
        eax = *((ebp - 0x818));
        eax <<= 2;
        eax += *((ebp - 0x844));
        eax = *(eax);
        strcpy (eax, edx);
        goto label_1;
    }
    eax = *((ebp - 0x81c));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x844));
    *((esp + 4)) = eax;
    *(esp) = "<li><a href=";
    eax = find_pos ();
    *((ebp - 0x818)) = eax;
    while (eax < *((ebp - 0x820))) {
        eax = *((ebp - 0x818));
        eax <<= 2;
        eax += *((ebp - 0x844));
        eax = *(eax);
        eax = strrchr (eax, 0x22);
        *((ebp - 0x828)) = eax;
        eax = *((ebp - 0x818));
        eax <<= 2;
        eax += *((ebp - 0x844));
        eax = *(eax);
        eax = strrchr (eax, 0x3c);
        *((ebp - 0x82c)) = eax;
        edx = *((ebp - 0x82c));
        eax = *((ebp - 0x828));
        ecx = edx;
        ecx -= eax;
        eax = ecx;
        *((ebp - 0x830)) = eax;
        eax = *((ebp - 0x830));
        edx = *((ebp - 0x828));
        edx += 2;
        eax = ebp - 0x80c;
        strncpy (eax, edx, eax);
        eax = *((ebp - 0x830));
        eax--;
        *((ebp + eax - 0x80c)) = 0;
        eax = ebp - 0x80c;
        eax = *((ebp - 0x83c));
        eax = strcmp (eax, eax);
        if (eax < 0) {
            eax = *((ebp - 0x818));
            *((ebp - 0x824)) = eax;
        } else {
            *((ebp - 0x81c))++;
            eax = *((ebp - 0x81c));
            *((esp + 8)) = eax;
            eax = *((ebp - 0x844));
            *((esp + 4)) = eax;
            *(esp) = "<li><a href=";
            eax = find_pos ();
            *((ebp - 0x818)) = eax;
            if (*((ebp - 0x818)) == -1) {
                goto label_4;
            }
            eax = *((ebp - 0x818));
        }
    }
label_4:
    eax = "<li><a href=\"../extensions/%s/index.html\">%s (%i.%i.%i)</a>\n";
    edx = *((ebp + 0x1c));
    *((esp + 0x18)) = edx;
    edx = *((ebp + 0x18));
    *((esp + 0x14)) = edx;
    edx = *((ebp + 0x14));
    *((esp + 0x10)) = edx;
    edx = *((ebp - 0x83c));
    *((esp + 0xc)) = edx;
    edx = *((ebp - 0x83c));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = *((ebp - 0x844));
    *((esp + 8)) = eax;
    eax = *((ebp - 0x824));
    eax = ebp - 0x80c;
    insert_str (eax, eax);
    goto label_1;
label_2:
    goto label_1;
label_3:
label_1:
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != *((ebp - 0x820))) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8049a5e */
#include <stdint.h>
 
int32_t dbg_delete_str (void) {
    int32_t i;
    int32_t pos;
    char ** strarr;
    char * src;
    int32_t var_8h;
    /* int delete_str(int pos,char ** strarr); */
    *((ebp - 0xc)) = 0;
    while (eax != 0) {
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
        eax <<= 2;
        eax += *((ebp + 0xc));
        eax = *(eax);
    }
    if (*((ebp + 8)) >= 0) {
        eax = *((ebp + 8));
        if (eax <= *((ebp - 0xc))) {
            goto label_0;
        }
    }
    eax = *((ebp + 8));
    *((esp + 8)) = eax;
    print_error (0xffffffeb, "delete: invalid line number %i.\n");
label_0:
    eax = *((ebp + 8));
    *((ebp - 0xc)) = eax;
    while (eax != 0) {
        eax = *((ebp - 0xc));
        eax <<= 2;
        eax += *((ebp + 0xc));
        eax = *(eax);
        free (eax);
        eax = *((ebp - 0xc));
        eax++;
        eax <<= 2;
        eax += *((ebp + 0xc));
        eax = *(eax);
        if (eax != 0) {
            eax = *((ebp - 0xc));
            eax <<= 2;
            ebx = eax;
            ebx += *((ebp + 0xc));
            eax = *((ebp - 0xc));
            eax++;
            eax <<= 2;
            eax += *((ebp + 0xc));
            eax = *(eax);
            eax = strlen (eax);
            eax++;
            eax = malloc (eax);
            *(ebx) = eax;
            eax = *((ebp - 0xc));
            eax++;
            eax <<= 2;
            eax += *((ebp + 0xc));
            eax = *(eax);
            edx = *(eax);
            eax = *((ebp - 0xc));
            eax <<= 2;
            eax += *((ebp + 0xc));
            eax = *(eax);
            strcpy (eax, edx);
        }
        *((ebp - 0xc))++;
        eax = *((ebp - 0xc));
        eax <<= 2;
        eax += *((ebp + 0xc));
        eax = *(eax);
    }
    *((ebp - 0xc))--;
    eax = *((ebp - 0xc));
    eax <<= 2;
    eax += *((ebp + 0xc));
    *(eax) = 0;
    eax = *((ebp - 0xc));
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x80530b9 */
#include <stdint.h>
 
int32_t dbg_show_license (char * arg_8h) {
    char * package;
    int32_t error;
    char[2048] tmp;
    int32_t var_ch;
    char * src;
    char * var_8h;
    char * var_sp_ch;
    /* void show_license(char * package); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x81c));
    *(esp) = eax;
    eax = basename ();
    eax = ebp - 0x80c;
    strcpy (eax, eax);
    eax = ebp - 0x80c;
    *(esp) = eax;
    eax = chdir ();
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x81c));
        *((esp + 8)) = eax;
        print_error (0xfffffffe, "extension '%s' not accessible: (%s)\n");
    }
    dump_ascii ("license", "Detailed information");
    system ("sh post");
    return exit (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804ab6c */
#include <stdint.h>
 
int32_t dbg_wget_extension (char * arg_8h) {
    char * url;
    int32_t error;
    char[2048] str;
    int32_t canary;
    size_t format;
    size_t nitems;
    FILE * stream;
    /* void wget_extension(char * url); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = stdout;
    edx = stdout;
    eax = "Downloading...";
    fwrite (edx, 1, 0xe);
    eax = VERBOSE;
    if (eax != 0) {
        eax = "wget -N %s";
        edx = *((ebp - 0x81c));
        eax = ebp - 0x80c;
        sprintf (eax, eax, edx);
    } else {
        eax = "wget -N -q %s";
        edx = *((ebp - 0x81c));
        eax = ebp - 0x80c;
        sprintf (eax, eax, edx);
    }
    eax = ebp - 0x80c;
    eax = system (eax);
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) == -1) {
        print_error (0xffffffec, "could not run 'wget' to download extension. Is it installed?\n");
    }
    if (*((ebp - 0x810)) > 0) {
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffec, "running command '%s'.\n");
    }
    print_done ();
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (*((ebp - 0x810)) != 0) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x804ff43 */
#include <stdint.h>
 
int32_t dbg_query_extension (char * arg_8h, size_t arg_ch, int32_t arg_1ch, int32_t arg_20h, int32_t arg_24h) {
    char * org_name;
    char * invocation;
    char * short_name;
    char * name;
    char * package;
    int32_t error;
    char[2048] tmp;
    int32_t var_ch;
    int32_t major;
    int32_t minor;
    int32_t revision;
    char * format;
    char * var_8h;
    char * var_sp_ch;
    int32_t var_10h;
    int32_t var_14h;
    /* void query_extension(char * package,char * name,int major,int minor,int revision,char * short_name,char * invocation,char * org_name); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *((ebp + 0xc));
    *((ebp - 0x820)) = eax;
    eax = *((ebp + 0x1c));
    *((ebp - 0x824)) = eax;
    eax = *((ebp + 0x20));
    *((ebp - 0x828)) = eax;
    eax = *((ebp + 0x24));
    *((ebp - 0x82c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    eax = *((ebp - 0x81c));
    *(esp) = eax;
    eax = basename ();
    eax = ebp - 0x80c;
    strcpy (eax, eax);
    eax = ebp - 0x80c;
    *(esp) = eax;
    eax = chdir ();
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = *((ebp - 0x81c));
        *((esp + 8)) = eax;
        print_error (0xfffffffe, "extension '%s' not accessible: %s\n");
    }
    edx = "\nExtension '%s', version %i.%i.%i\n\n";
    eax = stdout;
    ecx = *((ebp + 0x18));
    *((esp + 0x14)) = ecx;
    ecx = *((ebp + 0x14));
    *((esp + 0x10)) = ecx;
    ecx = *((ebp + 0x10));
    *((esp + 0xc)) = ecx;
    ecx = *((ebp - 0x820));
    *((esp + 8)) = ecx;
    fprintf (eax, edx);
    dump_ascii ("description", "Description");
    dump_ascii ("commands", "Commands provided");
    dump_ascii ("libs", "Libraries provided");
    dump_ascii ("headers", "Header files provided");
    dump_ascii ("depends", "Dependencies");
    dump_ascii ("bugs", "Bugs");
    eax = "../%s";
    edx = *((ebp - 0x81c));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    eax = ebp - 0x80c;
    list_binaries (eax);
    dump_ascii ("authors", "Author(s)");
    edx = "Type '%s -d %s' to see more detailed information.\n";
    eax = stdout;
    ecx = *((ebp - 0x82c));
    *((esp + 0xc)) = ecx;
    ecx = *((ebp - 0x828));
    *((esp + 8)) = ecx;
    fprintf (eax, edx);
    edx = "Type '%s -l %s' to see copyright information.\n";
    eax = stdout;
    ecx = *((ebp - 0x82c));
    *((esp + 0xc)) = ecx;
    ecx = *((ebp - 0x828));
    *((esp + 8)) = ecx;
    fprintf (eax, edx);
    system ("sh post");
    return exit (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x805331e */
#include <stdint.h>
 
int32_t dbg_main (char ** envp, size_t nitems, char ** stream, int32_t arg_14h, char * arg_18h, char * arg_1ch, int32_t arg_44h, int32_t arg_9ch, int32_t arg_394ch) {
    int32_t argc;
    option[20] long_options;
    size_t format;
    char ** argv;
    stat buf2;
    stat buf;
    int32_t option_index;
    int32_t dir_found;
    dirent * dir_entry;
    DIR * dir;
    int32_t is_directory;
    int32_t error;
    int32_t valid;
    int32_t action;
    int32_t option;
    int32_t revision;
    int32_t minor;
    int32_t major;
    int32_t fd;
    FILE * f;
    int32_t pkg_revision;
    int32_t pkg_minor;
    int32_t pkg_major;
    char * bins;
    char * filepart;
    char * url;
    char * tmp;
    char * grass_revision;
    char * grass_minor;
    char * grass_major;
    char * grass_version;
    char * gisbase;
    char[2048] coptions;
    char[2048] invocation;
    char[2048] pkg_short_name;
    char[2048] pkg_name;
    char[2048] orgname;
    char[2048] package;
    char[2048] version_file;
    /* int main(int argc,char ** argv); */
    eax = *((ebp + 0xc));
    *((esp + 0x2c)) = eax;
    eax = *(gs:0x14);
    *((esp + 0x394c)) = eax;
    eax = 0;
    *((esp + 0xf4)) = 0;
    *((esp + 0xe4)) = 0;
    *(obj.VERBOSE) = 0;
    *(obj.TMPCLEAN) = 0;
    *(obj.TMPDBCLEAN) = 0;
    *(obj.FORCE) = 0;
    *(obj.UPGRADE) = 0;
    *(obj.ERROR) = 0;
    *(obj.WARNINGS) = 0;
    *(obj.SKIP_CFG) = 0;
    eax = 0x8057925;
    memcpy (obj.GISMAN_CMD, eax, 1);
    eax = 0x8057925;
    memcpy (obj.GISMAN2_CMD, eax, 1);
    eax = 0x8057925;
    memcpy (obj.QGIS_CMD, eax, 1);
    eax = 0x8057925;
    memcpy (obj.UNINSTALL_CMD, eax, 1);
    eax = 0x8057925;
    memcpy (obj.HTML_CMD, eax, 1);
    eax = 0x8057925;
    memcpy (obj.TMPDIR, eax, 1);
    eax = 0x8057925;
    memcpy (obj.TMPDB, eax, 1);
    eax = 0x8057925;
    memcpy (obj.TMP_GISMAN, eax, 1);
    eax = 0x8057925;
    memcpy (obj.TMP_DESCR, eax, 1);
    eax = 0x8057925;
    memcpy (obj.TMP_INFO, eax, 1);
    eax = 0x8057925;
    memcpy (obj.TMP_DEPS, eax, 1);
    eax = 0x8057925;
    memcpy (obj.TMP_BUGS, eax, 1);
    eax = 0x8057925;
    memcpy (obj.TMP_AUTHORS, eax, 1);
    eax = 0x8057925;
    memcpy (obj.TMP_HTML, eax, 1);
    eax = 0x8057925;
    memcpy (obj.TMP_NULL, eax, 1);
    eax = 0x8057925;
    memcpy (obj.CONFIG_OPTS, eax, 1);
    eax = "configure";
    memcpy (obj.CONFIG_CMD, eax, 0xa);
    eax = "make";
    memcpy (obj.MAKE_CMD, eax, 5);
    *((esp + 4)) = 0x800;
    *(esp) = obj.CWD;
    getcwd ();
    eax = stdout;
    edx = stdout;
    eax = "\e[0m";
    fwrite (edx, 1, 4);
    eax = malloc (0x800);
    *((esp + 0x134)) = eax;
    eax = *((esp + 0x2c));
    eax = *(eax);
    eax = esp + 0x94c;
    strcpy (eax, eax);
    eax = stdout;
    setvbuf (0, 0, 2);
    if (*((ebp + 8)) == 1) {
        show_help ();
    }
    atexit (dbg.exit_msg);
    *((esp + 0xfc)) = 0;
    *((esp + 0x128)) = 0;
    *((esp + 0x148)) = 0;
    *(obj.opterr) = 0;
    eax = esp + 0xe4;
    *((esp + 0x10)) = eax;
    *((esp + 0xc)) = 0x8059100;
    *((esp + 8)) = ":i:u:q:d:c:C:t:l:m:o:x:rhVg:b:fvs";
    eax = *((esp + 0x2c));
    *((esp + 4)) = eax;
    eax = *((ebp + 8));
    *(esp) = eax;
    eax = getopt_long ();
    *((esp + 0x104)) = eax;
    while (*((esp + 0x104)) != -1) {
        if (*((esp + 0x104)) == 0x3f) {
            print_error (0xffffffff, "unknown option or action specified.\n");
        }
        if (*((esp + 0x104)) == 0x3a) {
            eax = optopt;
            if (eax != 0x69) {
                eax = optopt;
                if (eax == 0x75) {
                    goto label_0;
                }
                eax = optopt;
                if (eax == 0x64) {
                    goto label_0;
                }
                eax = optopt;
                if (eax == 0x63) {
                    goto label_0;
                }
                eax = optopt;
                if (eax == 0x74) {
                    goto label_0;
                }
                eax = optopt;
                if (eax == 0x6c) {
                    goto label_0;
                }
                eax = optopt;
                if (eax != 0x72) {
                    goto label_1;
                }
            }
label_0:
            print_error (0xffffffff, "missing file or directory name.\n");
label_1:
            eax = optopt;
            if (eax == 0x67) {
                print_error (0xffffffff, "missing path to GRASS 6.\n");
            }
            eax = optopt;
            if (eax == 0x62) {
                print_error (0xffffffff, "missing name of binary architecture.\n");
            }
            eax = optopt;
            if (eax == 0x62) {
                print_error (0xffffffff, "missing configure options.\n");
            }
            eax = optopt;
            if (eax == 0x71) {
                *((esp + 0x100)) = 0xc;
            }
        } else {
            if (*((esp + 0x104)) != 0x69) {
                if (*((esp + 0x104)) == 0x75) {
                    goto label_2;
                }
                if (*((esp + 0x104)) == 0x71) {
                    goto label_2;
                }
                if (*((esp + 0x104)) == 0x64) {
                    goto label_2;
                }
                if (*((esp + 0x104)) == 0x63) {
                    goto label_2;
                }
                if (*((esp + 0x104)) == 0x74) {
                    goto label_2;
                }
                if (*((esp + 0x104)) == 0x6c) {
                    goto label_2;
                }
                if (*((esp + 0x104)) == 0x72) {
                    goto label_2;
                }
                if (*((esp + 0x104)) == 0x68) {
                    goto label_2;
                }
                if (*((esp + 0x104)) != 0x56) {
                    goto label_3;
                }
            }
label_2:
            eax = *((esp + 0x104));
            eax -= 0x56;
            if (eax <= 0x1f) {
                eax = *((eax*4 + 0x8057d30));
                /* switch table (32 cases) at 0x8057d30 */
                void (*eax)() ();
                if (*((esp + 0x100)) != 4) {
                    *((esp + 0x100)) = 3;
                    goto label_4;
                    *((esp + 0x100)) = 0xa;
                    goto label_4;
                    *((esp + 0x100)) = 5;
                    goto label_4;
                    *((esp + 0x100)) = 9;
                    goto label_4;
                    *((esp + 0x100)) = 6;
                    goto label_4;
                    *((esp + 0x100)) = 8;
                    goto label_4;
                    *((esp + 0x100)) = 7;
                    goto label_4;
                    *((esp + 0x100)) = 0xb;
                    goto label_4;
                    *((esp + 0x100)) = 1;
                    goto label_4;
                    *((esp + 0x100)) = 2;
                } else {
                }
            }
label_4:
            eax = optarg;
            if (eax != 0) {
                eax = optarg;
                eax = esp + 0x294c;
                strcpy (eax, eax);
                eax = optarg;
                eax = esp + 0x214c;
                strcpy (eax, eax);
            }
label_3:
            if (*((esp + 0x104)) == 0x67) {
                eax = optarg;
                eax = strlen (eax);
                eax++;
                eax = malloc (eax);
                *((esp + 0x148)) = eax;
                eax = optarg;
                eax = *((esp + 0x148));
                strcpy (eax, eax);
            }
            if (*((esp + 0x104)) == 0x62) {
                eax = optarg;
                eax = strlen (eax);
                eax++;
                eax = malloc (eax);
                *((esp + 0x128)) = eax;
                eax = optarg;
                eax = *((esp + 0x128));
                strcpy (eax, eax);
                *((esp + 0x100)) = 4;
            }
            if (*((esp + 0x104)) == 0x78) {
                eax = optarg;
                strcpy (obj.CONFIG_OPTS, eax);
            }
            if (*((esp + 0x104)) == 0x66) {
                *(obj.FORCE) = 1;
            }
            if (*((esp + 0x104)) == 0x76) {
                *(obj.VERBOSE) = 1;
            }
            if (*((esp + 0x104)) == 0x73) {
                *(obj.SKIP_CFG) = 1;
            }
            if (*((esp + 0x104)) == 0x6f) {
                eax = optarg;
                eax = esp + 0x14c;
                strcat (eax, eax);
            }
            if (*((esp + 0x104)) == 0x43) {
                eax = optarg;
                strcpy (obj.CONFIG_CMD, eax);
            }
            if (*((esp + 0x104)) == 0x6d) {
                eax = optarg;
                strcpy (obj.MAKE_CMD, eax);
            }
            eax = esp + 0xe4;
            *((esp + 0x10)) = eax;
            *((esp + 0xc)) = 0x8059100;
            *((esp + 8)) = ":i:u:q:d:c:t:l:o:x:rhVg:b:fvs";
            eax = *((esp + 0x2c));
            *((esp + 4)) = eax;
            eax = *((ebp + 8));
            *(esp) = eax;
            eax = getopt_long ();
            *((esp + 0x104)) = eax;
        }
    }
    if (*((esp + 0xfc)) <= 0) {
        print_error (0xffffffff, "please specify a valid action.\n");
    }
    if (*((esp + 0xfc)) > 1) {
        print_error (0xffffffff, "please specify only one action.\n");
    }
    eax = "GEM_C_OPTS=%s";
    edx = esp + 0x14c;
    sprintf (obj.GEM_C_OPTS, eax, edx);
    *(esp) = obj.GEM_C_OPTS;
    putenv ();
    if (*((esp + 0x100)) == 1) {
        show_help ();
    }
    if (*((esp + 0x100)) == 2) {
        show_version ();
    }
    eax = VERBOSE;
    if (eax == 0) {
        eax = "/tmp/grass.extension.log.XXXXXX";
        memcpy (obj.TMP_NULL, eax, 0x20);
        mkstemp (obj.TMP_NULL);
        eax = open (obj.TMP_NULL, 0x40, 0x1ff);
        *((esp + 0x114)) = eax;
        if (*((esp + 0x114)) != -1) {
            goto label_5;
        }
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 8)) = eax;
        print_error (0xffffffe2, "could not create temp file: %s");
    }
label_5:
    if (*((esp + 0x100)) == 0xb) {
        if (*((esp + 0x148)) == 0) {
            eax = getenv ("GISBASE");
            *((esp + 0x148)) = eax;
            if (*((esp + 0x148)) != 0) {
                goto label_6;
            }
            print_error (0xffffffff, "GISBASE environment variable not set and path to GRASS not given.\n");
        }
label_6:
        eax = VERBOSE;
        if (eax != 0) {
            edx = "Path to GRASS is %s.\n";
            eax = stdout;
            ecx = *((esp + 0x148));
            *((esp + 8)) = ecx;
            fprintf (eax, edx);
        }
        eax = *((esp + 0x144));
        eax = *((esp + 0x148));
        restore (eax, eax);
        exit (0);
    }
    if (*((esp + 0x100)) == 0xc) {
        if (*((esp + 0x148)) == 0) {
            eax = getenv ("GISBASE");
            *((esp + 0x148)) = eax;
            if (*((esp + 0x148)) != 0) {
                goto label_7;
            }
            print_error (0xffffffff, "GISBASE environment variable not set and path to GRASS not given.\n");
        }
label_7:
        eax = VERBOSE;
        if (eax != 0) {
            edx = "Path to GRASS is %s.\n";
            eax = stdout;
            ecx = *((esp + 0x148));
            *((esp + 8)) = ecx;
            fprintf (eax, edx);
        }
        eax = *((esp + 0x148));
        list_extensions (eax);
        exit (0);
    }
    eax = esp + 0x294c;
    eax = strstr (eax, "http://");
    if (eax == 0) {
        eax = esp + 0x294c;
        eax = strstr (eax, "ftp://");
        if (eax == 0) {
            goto label_8;
        }
    }
    eax = esp + 0x294c;
    wget_extension (eax);
    eax = malloc (0x800);
    *((esp + 0x130)) = eax;
    eax = esp + 0x294c;
    eax = *((esp + 0x130));
    strcpy (eax, eax);
    eax = *((esp + 0x130));
    eax = strrchr (eax, 0x2f);
    *((esp + 0x12c)) = eax;
    eax = *((esp + 0x12c));
    eax = esp + 0x294c;
    strcpy (eax, eax);
    eax = *((esp + 0x130));
    free (eax);
label_8:
    eax = VERBOSE;
    if (eax != 0) {
        edx = "Extension location is '%s'.\n";
        eax = stdout;
        ecx = esp + 0x294c;
        *((esp + 8)) = ecx;
        fprintf (eax, edx);
    }
    if (*((esp + 0x100)) == 0xa) {
        goto label_9;
    }
    eax = esp + 0x294c;
    edx = esp + 0x8c;
    eax = _stat (eax, edx);
    *((esp + 0xf8)) = eax;
    if (*((esp + 0xf8)) < 0) {
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = esp + 0x294c;
        *((esp + 8)) = eax;
        print_error (0xfffffffe, "extension FILE or DIR '%s' invalid: %s\n");
    }
    eax = *((esp + 0x9c));
    eax &= 0xf000;
    if (eax == 0x4000) {
        *((esp + 0xf4)) = 1;
        eax = VERBOSE;
        if (eax == 0) {
            goto label_9;
        }
        eax = stdout;
        edx = stdout;
        eax = "Extension files stored in a directory.\n";
        fwrite (edx, 1, 0x27);
        goto label_9;
    }
    eax = VERBOSE;
    if (eax != 0) {
        eax = stdout;
        edx = stdout;
        eax = "Extension files stored in a package file.\n";
        fwrite (edx, 1, 0x2a);
    }
    eax = esp + 0x294c;
    unpack_extension (eax);
    *(esp) = obj.TMPDIR;
    eax = opendir ();
    *((esp + 0xf0)) = eax;
    eax = *((esp + 0xf0));
    *(esp) = eax;
    eax = readdir ();
    *((esp + 0xec)) = eax;
    *((esp + 0xe8)) = 0;
    while (*((esp + 0xec)) != 0) {
        eax = *((esp + 0xec));
        eax += 0xb;
        eax = strcmp (eax, 0x8057bbf);
        if (eax != 0) {
            eax = *((esp + 0xec));
            eax += 0xb;
            eax = strcmp (eax, 0x8057bc1);
            if (eax != 0) {
                eax = *((esp + 0xec));
                edx = eax + 0xb;
                eax = "%s/%s";
                *((esp + 0xc)) = edx;
                eax = *((esp + 0x134));
                sprintf (eax, eax, 0x80632c0);
                eax = *((esp + 0x134));
                edx = esp + 0x34;
                _stat (eax, edx);
                eax = *((esp + 0x44));
                eax &= 0xf000;
                if (eax != 0x4000) {
                    goto label_10;
                }
                *((esp + 0xe8)) = 1;
            }
        } else {
label_10:
            eax = *((esp + 0xf0));
            *(esp) = eax;
            eax = readdir ();
            *((esp + 0xec)) = eax;
        }
    }
    eax = *((esp + 0x134));
    eax = esp + 0x294c;
    strcpy (eax, eax);
    if (*((esp + 0xe8)) == 0) {
        print_error (0xfffffff9, "no top-level directory found in extension package.\n");
    }
label_9:
    if (*((esp + 0x100)) == 0xa) {
        eax = esp + 0x294c;
        eax = esp + 0x114c;
        strcpy (eax, eax);
    } else {
        eax = esp + 0x114c;
        eax = esp + 0x294c;
        get_package_name (eax, eax);
    }
    if (*((esp + 0xfc)) > 0) {
        if (*((esp + 0x148)) == 0) {
            eax = getenv ("GISBASE");
            *((esp + 0x148)) = eax;
        }
        eax = *((esp + 0x148));
        *((esp + 0xc)) = eax;
        eax = *((esp + 0x128));
        eax = *((esp + 0x100));
        eax = esp + 0x294c;
        run_post (eax, eax, eax);
    }
    eax = VERBOSE;
    if (eax != 0) {
        edx = "Extension will be installed from '%s'\n";
        eax = stdout;
        ecx = esp + 0x294c;
        *((esp + 8)) = ecx;
        fprintf (eax, edx);
    }
    if (*((esp + 0x100)) != 0xa) {
        eax = esp + 0x11c;
        eax = esp + 0x120;
        eax = esp + 0x124;
        eax = esp + 0x194c;
        eax = esp + 0x294c;
        check_extension (eax, eax, eax);
    }
    if (*((esp + 0x100)) == 5) {
        ecx = *((esp + 0x11c));
        edx = *((esp + 0x120));
        eax = *((esp + 0x124));
        ebx = esp + 0x214c;
        *((esp + 0x1c)) = ebx;
        ebx = esp + 0x94c;
        *((esp + 0x18)) = ebx;
        ebx = esp + 0x114c;
        *((esp + 0x14)) = ebx;
        eax = esp + 0x194c;
        eax = esp + 0x294c;
        query_extension (ecx, eax, eax);
    }
    if (*((esp + 0x100)) == 9) {
        eax = esp + 0x294c;
        show_details (eax);
    }
    if (*((esp + 0x100)) == 7) {
        eax = esp + 0x294c;
        show_license (eax);
    }
    if (*((esp + 0x100)) == 6) {
        eax = esp + 0x294c;
        source_clean (eax);
        exit (0);
    }
    if (*((esp + 0x148)) == 0) {
        eax = getenv ("GISBASE");
        *((esp + 0x148)) = eax;
        if (*((esp + 0x148)) != 0) {
            goto label_11;
        }
        print_error (0xffffffff, "GISBASE environment variable not set and path to GRASS not given.\n");
    }
label_11:
    eax = VERBOSE;
    if (eax != 0) {
        edx = "Path to GRASS is %s.\n";
        eax = stdout;
        ecx = *((esp + 0x148));
        *((esp + 8)) = ecx;
        fprintf (eax, edx);
    }
    eax = getenv ("GRASS_VERSION");
    *((esp + 0x144)) = eax;
    if (*((esp + 0x144)) == 0) {
        eax = "%s/etc/VERSIONNUMBER";
        edx = *((esp + 0x148));
        eax = esp + 0x314c;
        sprintf (eax, eax, edx);
        edx = 0x80578de;
        eax = esp + 0x314c;
        eax = fopen (eax, edx);
        *((esp + 0x118)) = eax;
        if (*((esp + 0x118)) == 0) {
            print_error (0xfffffff5, "Could not read GRASS version. Did you specify the right path?\n");
        }
        eax = malloc (0x10);
        eax = 0x8057c8b;
        edx = *((esp + 0x144));
        eax = *((esp + 0x118));
        eax = isoc99_fscanf (eax, eax, edx);
        *((esp + 0xf8)) = eax;
        eax = *((esp + 0x118));
        fclose (eax);
        if (*((esp + 0xf8)) > 0) {
            goto label_12;
        }
        print_error (0xfffffff5, "Could not read GRASS version. Did you specify the right path?\n");
    }
label_12:
    if (*((esp + 0x144)) != 0) {
        eax = *((esp + 0x144));
        eax = strdup (eax);
        *((esp + 0x134)) = eax;
        eax = 0x8057bbf;
        eax = *((esp + 0x134));
        eax = strtok (eax, eax);
        *((esp + 0x140)) = eax;
        eax = 0x8057bbf;
        eax = strtok (0, eax);
        *((esp + 0x13c)) = eax;
        eax = 0x8057bbf;
        eax = strtok (0, eax);
        *((esp + 0x138)) = eax;
        eax = *((esp + 0x140));
        eax = strtol (eax, 0, 0xa);
        *((esp + 0x110)) = eax;
        eax = *((esp + 0x13c));
        eax = strtol (eax, 0, 0xa);
        *((esp + 0x10c)) = eax;
        eax = *((esp + 0x138));
        eax = strtol (eax, 0, 0xa);
        *((esp + 0x108)) = eax;
        eax = malloc (0x800);
        *((esp + 0x144)) = eax;
        eax = "%i.%i.%i";
        edx = *((esp + 0x108));
        *((esp + 0x10)) = edx;
        edx = *((esp + 0x10c));
        *((esp + 0xc)) = edx;
        edx = *((esp + 0x110));
        eax = *((esp + 0x144));
        sprintf (eax, eax, edx);
        eax = VERBOSE;
        if (eax != 0) {
            edx = "GRASS version is %s.\n";
            eax = stdout;
            ecx = *((esp + 0x144));
            *((esp + 8)) = ecx;
            fprintf (eax, edx);
        }
        if (*((esp + 0x110)) > 5) {
            goto label_13;
        }
        print_error (0xfffffff5, "extensions only work with GRASS version 6 and above.\n");
    }
label_13:
    eax = "-L%s/lib -I/usr/local/grasslib/include/ ";
    edx = *((esp + 0x148));
    eax = esp + 0x14c;
    sprintf (eax, eax, edx);
    if (*((esp + 0x100)) == 3) {
        ecx = *((esp + 0x11c));
        edx = *((esp + 0x120));
        eax = *((esp + 0x124));
        ebx = *((esp + 0x144));
        *((esp + 0x18)) = ebx;
        *((esp + 0x14)) = ecx;
        eax = esp + 0x114c;
        eax = *((esp + 0x148));
        eax = esp + 0x294c;
        source_install (edx, eax, eax);
        exit (0);
    }
    if (*((esp + 0x100)) == 0xa) {
        eax = *((esp + 0x144));
        eax = *((esp + 0x148));
        eax = esp + 0x114c;
        eax = esp + 0x294c;
        uninstall (eax, eax, eax);
        exit (0);
    }
    if (*((esp + 0x100)) == 8) {
        ecx = *((esp + 0x11c));
        edx = *((esp + 0x120));
        eax = *((esp + 0x124));
        ebx = *((esp + 0x144));
        *((esp + 0x18)) = ebx;
        *((esp + 0x14)) = ecx;
        *((esp + 0x10)) = edx;
        eax = esp + 0x114c;
        eax = *((esp + 0x148));
        eax = esp + 0x294c;
        test_install (eax, eax, eax);
        exit (0);
    }
    if (*((esp + 0x100)) == 4) {
        eax = *((esp + 0x128));
        eax = esp + 0x294c;
        eax = binaries_exist (eax, eax);
        if (eax != 0) {
            ecx = *((esp + 0x11c));
            edx = *((esp + 0x120));
            eax = *((esp + 0x124));
            ebx = *((esp + 0x144));
            *((esp + 0x1c)) = ebx;
            *((esp + 0x18)) = ecx;
            eax = esp + 0x114c;
            eax = *((esp + 0x128));
            eax = *((esp + 0x148));
            eax = esp + 0x294c;
            bin_install (edx, eax, eax);
            exit (0);
        }
        eax = *((esp + 0x128));
        *((esp + 8)) = eax;
        print_error (0xfffffff4, "no binaries for system '%s'\n");
    }
    return exit (0);
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048d74 */
#include <stdint.h>
 
void getcwd (void) {
    getcwd ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048d24 */
#include <stdint.h>
 
void malloc (void) {
    malloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048d04 */
#include <stdint.h>
 
void setvbuf (void) {
    setvbuf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048c34 */
#include <stdint.h>
 
void getopt_long (void) {
    getopt_long ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048c64 */
#include <stdint.h>
 
void strlen (void) {
    strlen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048d64 */
#include <stdint.h>
 
void strcat (void) {
    strcat ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048ca4 */
#include <stdint.h>
 
void putenv (void) {
    putenv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048b64 */
#include <stdint.h>
 
void getenv (void) {
    getenv ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x80525fc */
#include <stdint.h>
 
int32_t dbg_list_extensions (char * arg_8h) {
    char * gisbase;
    FILE * f_in;
    char[2048] file;
    int32_t canary;
    char * format;
    size_t nitems;
    FILE * stream;
    /* void list_extensions(char * gisbase); */
    eax = *((ebp + 8));
    *((ebp - 0x81c)) = eax;
    eax = *(gs:0x14);
    *((ebp - 0xc)) = eax;
    eax = 0;
    edx = "\nExtensions in '%s' (name, version, type, depends):\n";
    eax = stdout;
    ecx = *((ebp - 0x81c));
    *((esp + 8)) = ecx;
    fprintf (eax, edx);
    eax = "%s/etc/extensions.db";
    edx = *((ebp - 0x81c));
    eax = ebp - 0x80c;
    sprintf (eax, eax, edx);
    edx = 0x8055e6b;
    eax = ebp - 0x80c;
    eax = fopen (eax, edx);
    *((ebp - 0x810)) = eax;
    if (*((ebp - 0x810)) == 0) {
        eax = errno_location ();
        eax = *(eax);
        if (eax == 2) {
            eax = stderr;
            edx = stderr;
            eax = "NONE.\n";
            fwrite (edx, 1, 6);
            eax = *((ebp - 0x810));
            fclose (eax);
            exit (0);
        }
        eax = *((ebp - 0x810));
        fclose (eax);
        eax = errno_location ();
        eax = *(eax);
        eax = strerror (eax);
        *((esp + 0xc)) = eax;
        eax = ebp - 0x80c;
        *((esp + 8)) = eax;
        print_error (0xffffffe3, "checking for file '%s': %s\n");
    }
    eax = *((ebp - 0x810));
    fclose (eax);
    eax = ebp - 0x80c;
    dump_ascii (eax, 0x805698c);
    eax = *((ebp - 0xc));
    eax ^= *(gs:0x14);
    if (eax != 2) {
        stack_chk_fail ();
    }
    return eax;
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048c74 */
#include <stdint.h>
 
void fopen (void) {
    fopen ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048c44 */
#include <stdint.h>
 
void fclose (void) {
    fclose ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048cf4 */
#include <stdint.h>
 
void strstr (void) {
    strstr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048bc4 */
#include <stdint.h>
 
void strrchr (void) {
    strrchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048bf4 */
#include <stdint.h>
 
void free (void) {
    free ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048c24 */
#include <stdint.h>
 
void opendir (void) {
    opendir ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048bd4 */
#include <stdint.h>
 
void readdir (void) {
    readdir ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048da4 */
#include <stdint.h>
 
void strcmp (void) {
    strcmp ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048af4 */
#include <stdint.h>
 
void isoc99_fscanf (void) {
    isoc99_fscanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048d94 */
#include <stdint.h>
 
void strdup (void) {
    strdup ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048d54 */
#include <stdint.h>
 
void strtok (void) {
    strtok ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048be4 */
#include <stdint.h>
 
void strtol (void) {
    strtol ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048a44 */
#include <stdint.h>
 
void init (void) {
    /* [11] -r-x section size 48 named .init */
    void (*0x8048a50)(uint32_t) (ebx);
    ebx += 0x105a4;
    edx = *((ebx - 8));
    if (edx != 0) {
        gmon_start_ ();
    }
    frame_dummy ();
    _do_global_ctors_aux ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048b14 */
#include <stdint.h>
 
void loc_imp_gmon_start_ (void) {
    gmon_start_ ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048a84 */
#include <stdint.h>
 
void fputs (void) {
    fputs ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048ab4 */
#include <stdint.h>
 
void srand (void) {
    srand ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048b24 */
#include <stdint.h>
 
void rewind (void) {
    rewind ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048b34 */
#include <stdint.h>
 
void isoc99_sscanf (void) {
    isoc99_sscanf ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048b54 */
#include <stdint.h>
 
void strchr (void) {
    strchr ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048b74 */
#include <stdint.h>
 
void calloc (void) {
    calloc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048b94 */
#include <stdint.h>
 
void strncpy (void) {
    strncpy ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048ba4 */
#include <stdint.h>
 
void fgets (void) {
    fgets ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048c04 */
#include <stdint.h>
 
void fflush (void) {
    fflush ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048cb4 */
#include <stdint.h>
 
void closedir (void) {
    closedir ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048d44 */
#include <stdint.h>
 
void fputc (void) {
    fputc ();
}
/* r2dec pseudo code output */
/* SUBJECTS/from_decompile-it.com/gem64/ia32_elf_from_website/subject.exe @ 0x8048d84 */
#include <stdint.h>
 
void rand (void) {
    rand ();
}
