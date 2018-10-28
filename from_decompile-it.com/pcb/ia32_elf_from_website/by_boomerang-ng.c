__size32 gui = 0x8168380;// 4 bytes
int stderr;
__size32 bindir;// 4 bytes
__size32 exec_prefix;// 4 bytes
__size32 pcblibdir;// 4 bytes
__size32 pcblibpath;// 4 bytes
__size32 pcbtreedir;// 4 bytes
__size32 pcbtreepath;// 4 bytes
union { char *; unsigned int; } homedir;
__size32 program_name;// 4 bytes
__size32 program_basename;// 4 bytes
__size32 program_directory;// 4 bytes
__size32 hid_action_nodes;// 4 bytes
__size32 all_actions;// 4 bytes
__size32 n_actions;// 4 bytes
__size32 hid_flag_nodes;// 4 bytes
__size32 all_flags;// 4 bytes
__size32 n_flags;// 4 bytes
union { void *; __size32; } hid_list;
unsigned int hid_num_hids;
__size32 exporter;// 4 bytes
__size32 hid_attr_nodes;// 4 bytes
__size32 global_0x081950bc;// 4 bytes
__size32 global_0x081950c0;// 4 bytes
__size32 global_0x081950c4;// 4 bytes
__size32 global_0x081951c8;// 4 bytes
__size32 global_0x081951cc;// 4 bytes
__size32 Progname;// 4 bytes
__size32 Output;// 4 bytes
__size32 global_0x08195844;// 4 bytes
__size32 global_0x08195848;// 4 bytes
__size32 global_0x0819584c;// 4 bytes
int main(int argc, char *argv[]);
void register_action_action_list();
void register_rotate_action_list();
void register_command_action_list();
void register_djopt_flag_list();
void register_djopt_action_list();
void register_flags_flag_list();
void register_fontmode_action_list();
void register_main_attribute_list();
void register_move_action_list();
void register_netlist_action_list();
void register_puller_action_list();
void register_report_action_list();
void register_vendor_action_list();
void register_vendor_flag_list();
void register_toporouter_action_list();
void lrealpath();
void hid_init(int param1, int param2, __size32 param3);
void hid_load_settings(unsigned int param25, unsigned int param26, __size32 param27, __size8 param28, __size8 param29, unsigned int param30, unsigned int param31, unsigned int param32, __size32 param33, __size32 param34, __size32 param35, __size32 param36, __size32 param37, union { unsigned char; char; } param38, union { unsigned char; char; } param39, __size8 param40, unsigned int param41, unsigned int param42, __size32 param43, int param44, __size80 param45, __size80 param46, __size80 param47, __size80 param48, __size80 param49, __size80 param50, __size80 param51, __size80 param52);
void usage(__size32 param1, __size32 param2, __size32 param3);
void hid_find_gui();
void MyStrdup(__size32 param1);
__size32 Concat(union { char *; __size32; } param1, __size32 param2);
void print_version();
void hid_find_printer();
void hid_find_exporter(unsigned int param1, __size32 param2, __size32 param3, __size32 param4, union { char *; __size32; } param5, int param6, __size32 param7);
__size32 hid_enumerate();
void print_defaults_1(union { __size32; __size32 *; } param1, union { unsigned int *; __size32; char *; __size32 *; double *; } param2);
void copyright();
void hid_register_actions();
void hid_register_flags(__size32 param1, __size32 param2);
void hid_register_attributes(__size32 param1, __size32 param2);
void hid_gtk_init();
void hid_lpr_init();
void hid_bom_init();
void hid_gerber_init();
void hid_nelma_init();
void hid_png_init();
void hid_ps_init();
__size32 hid_load_dir(union { __size32; char *; } param1, int param2, __size32 param3, int param4, __size32 param5);
void hid_load_settings_1(unsigned int param4, __size32 param5, __size8 param6, __size32 param7, unsigned int param8, unsigned int param4, __size32 param5, __size32 param11, __size32 param7, __size32 param8, union { char; unsigned char; } param9, __size8 param15, union { __size32; char *; } param10, int param11, __size32 param12, __size80 param19, __size80 param20, __size80 param21, __size80 param22, __size80 param23, __size80 param24, __size80 param19, __size80 param20);
__size32 u();
__size32 hid_register_hid(union { __size32 *; __size32; } param1);
void apply_default_hid();
void register_ghid_main_action_list();
void register_ghid_main_flag_list();
void register_ghid_netlist_action_list();
void register_ghid_attribute_list();
void register_gtk_topwindow_action_list();
void register_pcbmenu_attr();
void hid_eps_init();
void register_ps_attribute_list();

/** address: 0x080a1390 */
int main(int argc, char *argv[])
{
    __size8 bl; 		// r11
    __size32 eax; 		// r24
    __size32 eax_1; 		// r24{0}
    char *eax_12; 		// r24{269}
    size_t eax_15; 		// r24{274}
    size_t eax_18; 		// r24{275}
    char *eax_21; 		// r24{276}
    int eax_24; 		// r24{279}
    char *eax_27; 		// r24{282}
    union { __size32; FILE *; } eax_4; 		// r24{19}
    size_t eax_5; 		// r24{22}
    char *eax_8; 		// r24{266}
    union { __size32; char *; } eax_9; 		// r24{268}
    __size32 ebp; 		// r29
    union { char *; __size32; } ebx_1; 		// r27{270}
    union { char *; __size32; } ebx_2; 		// r27{283}
    union { __size32; char *; } ebx_3; 		// r27{287}
    __size32 ebx_6; 		// r27{0}
    int ecx; 		// r25
    char *edi_1[]; 		// r31{21}
    __size32 edi_4; 		// r31{0}
    int edx; 		// r26
    __size32 esi; 		// r30
    int esp; 		// r28
    struct stat local0; 		// m[esp - 136]
    union { char *; __size32; } local21; 		// ebx_3{287}

    register_action_action_list();
    register_rotate_action_list();
    register_command_action_list();
    register_djopt_flag_list();
    register_djopt_action_list();
    register_flags_flag_list();
    register_fontmode_action_list();
    register_main_attribute_list();
    register_move_action_list();
    register_netlist_action_list();
    register_puller_action_list();
    register_report_action_list();
    register_vendor_action_list();
    register_vendor_flag_list();
    register_toporouter_action_list();
    eax_4 = *0x816b4c0;
    setbuf(eax_4, 0);
    edi_1 = *argv;
    eax_5 = strlen(edi_1);
    if (eax_5 == 0) {
        eax_8 = getenv("PATH");
        if (eax_8 != 0) {
            eax_9 = __strdup();
            eax_12 = strtok(eax_9, ":");
            ebx_1 = eax_12;
            bl = (unsigned char) eax_12;
            local21 = ebx_1;
            if (eax_12 == 0) {
bb0x80a1d6b:
                free(eax_9);
                goto bb0x80a1d77;
            }
            do {
                ebx_3 = local21;
                if (*ebx_3 == 0) {
                    goto bb0x80a1d6b;
                }
                eax_15 = strlen(edi_1);
                eax_18 = strlen(ebx_3);
                eax_21 = calloc(1, eax_15 + eax_18 + 2);
                if (eax_21 != 0) {
                    __sprintf_chk();
                    eax_24 = stat(3, eax_21, &local0); /* Warning: also results in ecx, edx */
                    if (eax_24 != 0) {
                        free(eax_21);
                        eax_27 = strtok(0, ":");
                        ebx_2 = eax_27;
                        bl = (unsigned char) eax_27;
                        local21 = ebx_2;
                    }
                    lrealpath((unsigned char) eax_15 + eax_18 + 2, 0, (unsigned char) esp - 136, bl, eax_24, ecx, edx, ebx_3, esp - 4, eax_21, edi_1, LOGICALFLAGS32(eax_24), LOGICALFLAGS32(eax_24), LOGICALFLAGS32(eax_24), argv, ebp, edi_4, esi, ebx_6, eax_1, local0, argv, eax_9, edi_1, 0x815d1de, ebx_3, 0x814d6ff, esp - 136, eax_21, eax_21, pc, argc);
                }
bb0x80a20dd:
                *(__size32*)(%esp + 8) = 0x8148605;
                *(__size32*)(%esp + 4) = 1;
                *(__size32*)%esp = %eax;
                __fprintf_chk();
                *(__size32*)%esp = 1;
                exit(*(%esp + 4));
            } while (eax_27 == 0);
            goto bb0x80a1d6b;
        }
bb0x80a1d77:
        eax = calloc(1, 9);
        if (eax != 0) {
            *(__size32*)eax = 0x7273752f;
            *(__size32*)(eax + 4) = 0x6e69622f;
            *(__size8*)(eax + 8) = 0;
        }
        *(union { __size32 *; __size32; }*)0x816c740 = eax;
        *(__size32*)%esp = %esi;
        strlen(*(%esp + 4));
        *(__size32*)%esp = 1;
        *(__size32*)(%esp + 4) = %eax;
        calloc(*(%esp + 4), *(%esp + 8));
        exec_prefix = %eax;
        if ( ~flags) {
            *(__size32*)(%esp + 24) = 0x8147345;
            *(__size32*)(%esp + 20) = 0x815d1de;
            *(__size32*)(%esp + 12) = 0x814d6ff;
            *(__size32*)(%esp + 16) = %edx;
            *(__size32*)(%esp + 8) = -1;
            *(__size32*)(%esp + 4) = 1;
            *(__size32*)%esp = %eax;
            __sprintf_chk();
            *(__size32*)%esp = %eax;
            strlen(*(%esp + 4));
            *(__size32*)%esp = 1;
            *(__size32*)(%esp + 4) = %eax;
            calloc(*(%esp + 4), *(%esp + 8));
            pcblibdir = %eax;
            if ( ~flags) {
                *(__size32*)(%esp + 24) = 0x8148622;
                *(__size32*)(%esp + 20) = 0x815d1de;
                *(__size32*)(%esp + 12) = 0x814d6ff;
                *(__size32*)(%esp + 16) = %edx;
                *(__size32*)(%esp + 8) = -1;
                *(__size32*)(%esp + 4) = 1;
                *(__size32*)%esp = %eax;
                __sprintf_chk();
                *(__size32*)%esp = %eax;
                strlen(*(%esp + 4));
                *(__size32*)%esp = 1;
                *(__size32*)(%esp + 4) = %eax;
                calloc(*(%esp + 4), *(%esp + 8));
                pcbtreedir = %eax;
                if ( ~flags) {
                    *(__size32*)(%esp + 24) = 0x814862f;
                    *(__size32*)(%esp + 20) = 0x815d1de;
                    *(__size32*)(%esp + 12) = 0x814d6ff;
                    *(__size32*)(%esp + 16) = %edx;
                    *(__size32*)(%esp + 8) = -1;
                    *(__size32*)(%esp + 4) = 1;
                    *(__size32*)%esp = %eax;
                    __sprintf_chk();
                    *(__size32*)%esp = %eax;
                    strlen(*(%esp + 4));
                    *(__size32*)%esp = 1;
                    *(__size32*)(%esp + 4) = %eax;
                    calloc(*(%esp + 4), *(%esp + 8));
                    pcblibpath = %eax;
                    if ( ~flags) {
                        *(__size32*)(%esp + 16) = 0x814d79c;
                        *(__size32*)(%esp + 12) = 0x8148643;
                        *(__size32*)(%esp + 8) = -1;
                        *(__size32*)(%esp + 20) = %edx;
                        *(__size32*)(%esp + 4) = 1;
                        *(__size32*)%esp = %eax;
                        __sprintf_chk();
                        *(__size32*)%esp = %eax;
                        strlen(*(%esp + 4));
                        *(__size32*)%esp = %eax;
                        strlen(*(%esp + 4));
                        *(__size32*)%esp = 1;
                        *(__size32*)(%esp + 4) = %eax;
                        calloc(*(%esp + 4), *(%esp + 8));
                        pcbtreepath = %eax;
                        if ( ~flags) {
                            *(__size32*)(%esp + 28) = 0x815d1de;
                            *(__size32*)(%esp + 20) = 0x814d79c;
                            *(__size32*)(%esp + 12) = 0x8148649;
                            *(__size32*)(%esp + 24) = %edx;
                            *(__size32*)(%esp + 8) = -1;
                            *(__size32*)(%esp + 4) = 1;
                            *(__size32*)%esp = %eax;
                            *(__size32*)(%esp + 16) = %edx;
                            __sprintf_chk();
                            do {
bb0x80a1724:
                                if ( ~flags) {
                                    if (%ecx != 0) {
                                        do {
                                        } while (ZF);
                                    }
                                    if ( ~flags) {
                                        *(__size32*)(%edx + 0x81664f8) = %ecx;
                                    }
                                    if (%ecx != 0) {
                                        do {
                                        } while (ZF);
                                    }
                                    if ( ~flags) {
bb0x80a176a:
                                        *(__size32*)(%edx + 0x81664f8) = %eax;
                                        if ( ~flags) {
                                            if (flags) {
                                                goto bb0x80a1724;
                                            }
                                            goto bb0x80a178a;
                                        }
bb0x80a170a:
                                        if (%ecx != 0) {
                                            do {
                                            } while (ZF);
                                        }
                                        if ( ~flags) {
                                            *(__size32*)(%edx + 0x81664f8) = %eax;
                                        }
                                        goto bb0x80a1719;
                                    }
                                    if (%ecx != 0) {
                                        do {
                                        } while (ZF);
                                    }
                                    if ( ~flags) {
                                        if (%ecx != 0) {
                                            do {
                                            } while (ZF);
                                        }
                                        if ( ~flags) {
                                            goto bb0x80a170a;
                                        }
                                        goto bb0x80a176a;
                                    }
                                    goto bb0x80a176a;
                                }
bb0x80a1719:
                            } while (flags);
bb0x80a178a:
                            *(__size32*)%esp = 0x814868f;
                            getenv(*(%esp + 4));
                            if ( ~flags) {
bb0x80a179e:
                                *(__size32*)%esp = %eax;
                                __strdup();
                                homedir = %eax;
bb0x80a17ab:
                                *(__size32*)(%esp + 4) = 0x81486a0;
                                *(__size32*)%esp = 0x815492c;
                                bindtextdomain(*(%esp + 4), *(%esp + 8));
                                *(__size32*)(%esp + 4) = 0x81486b2;
                                *(__size32*)%esp = 0x815492c;
                                bind_textdomain_codeset();
                                hid_init();
                                hid_load_settings();
                                *(__size32*)(%esp + 4) = 47;
                                *(__size32*)%esp = %ebx;
                                program_name = %ebx;
                                strrchr(*(%esp + 4), *(%esp + 8));
                                program_basename = %eax;
                                if ( ~flags) {
                                    *(__size32*)%esp = %ebx;
                                    __strdup();
                                    *(__size32*)(%esp + 4) = 47;
                                    *(__size32*)%esp = %eax;
                                    program_directory = %eax;
                                    strrchr(*(%esp + 4), *(%esp + 8));
                                    *(__size8*)%eax = 0;
                                    program_basename = %ebx;
bb0x80a1835:
                                    Progname = %ebx;
                                    if ( ~flags) {
                                        if ( ~flags) {
                                            usage();
                                        }
                                        if ( ~flags) {
bb0x80a188f:
                                            if ( ~flags) {
bb0x80a189e:
                                                if ( ~( ~flags && flags)) {
                                                    goto bb0x80a18b2;
                                                }
                                                if ( ~flags) {
                                                    *(__size32*)%esp = %eax;
                                                    hid_find_exporter(*(%esp - 64), *(%esp - 60), *(%esp - 56), *(%esp - 32), *(%esp + 4), %eax, %ecx);
                                                    *(__size32*)(%ebp + 8) -= 2;
                                                    *(__size32*)(%esp + 44) += 8;
                                                    gui = %eax;
                                                    exporter = %eax;
bb0x80a18bc:
                                                    if ( ~flags) {
                                                        do {
                                                            *(__size32*)(%esp + 16) = %ebx;
                                                            *(__size32*)(%esp + 12) = 0x81486c1;
                                                            *(__size32*)(%esp + 8) = 20;
                                                            *(__size32*)(%esp + 4) = 1;
                                                            *(__size32*)%esp = %esi;
                                                            __sprintf_chk();
                                                            *(__size32*)(%esp + 4) = 0x81486ca;
                                                            *(__size32*)%esp = %esi;
                                                            MyStrdup(*(%esp + 4));
                                                            global_0x08195030[%ebx] = 0x81486dc;
                                                            global_0x08195070[%ebx] = 0x81486e4;
                                                            global_0x08195170[%ebx] = %eax;
                                                        } while (flags);
                                                        *(__size32*)(%esp + 4) = %eax;
                                                        *(__size32*)%esp = %eax;
                                                        (**(%eax + 24))();
                                                        if ( ~(flags ||  ~flags && flags)) {
                                                            if ( ~flags) {
                                                                if ( ~flags) {
                                                                    if ( ~flags) {
                                                                        (**(%eax + 44))();
                                                                        Output = %eax;
                                                                        (**(%eax + 44))();
                                                                        global_0x08195844 = %eax;
                                                                        (**(%eax + 44))();
                                                                        global_0x08195848 = %eax;
                                                                        (**(%eax + 44))();
                                                                        global_0x0819584c = %eax;
                                                                        if ( ~flags) {
                                                                            *(__size32*)(%esp + 8) = %eax;
                                                                            *(__size32*)(%esp + 12) = 0;
                                                                            *(__size32*)(%esp + 4) = 0x815d1de;
                                                                            *(__size32*)%esp = %eax;
                                                                            Concat(*(%esp + 4), *(%esp + 8));
                                                                            global_0x081951c8 = %eax;
                                                                        }
                                                                        if ( ~flags) {
                                                                            *(__size32*)(%esp + 8) = %eax;
                                                                            *(__size32*)(%esp + 12) = 0;
                                                                            *(__size32*)(%esp + 4) = 0x815d1de;
                                                                            *(__size32*)%esp = %eax;
                                                                            Concat(*(%esp + 4), *(%esp + 8));
                                                                            global_0x081951cc = %eax;
                                                                        }
                                                                        if ( ~flags) {
                                                                            global_0x081950c4 = 1000;
                                                                        }
                                                                        if ( ~flags) {
                                                                            if ( ~flags) {
bb0x80a1a69:
                                                                            }
bb0x80a1e60:
                                                                            global_0x081950c0 = %edx;
                                                                            goto bb0x80a1a69;
                                                                        }
                                                                        global_0x081950bc = 0xfa0;
                                                                        if ( ~flags) {
                                                                            goto bb0x80a1e60;
                                                                        }
                                                                        goto bb0x80a1a69;
                                                                    }
                                                                    copyright();
                                                                }
                                                                hid_enumerate();
                                                                if ( ~flags) {
                                                                    *(__size32*)(%esp + 40) = %eax;
                                                                    do {
                                                                        if ( ~flags) {
                                                                            *(__size32*)(%esp + 8) = 0x81486ec;
                                                                            *(__size32*)(%esp + 4) = 1;
                                                                            *(__size32*)%esp = %eax;
                                                                            __fprintf_chk();
                                                                            if ( ~flags) {
                                                                                do {
                                                                                    if ( ~flags) {
                                                                                        do {
                                                                                            print_defaults_1(%eax, %edx);
                                                                                        } while (flags);
                                                                                    }
                                                                                } while (flags);
                                                                            }
bb0x80a1f96:
                                                                            *(__size32*)(%esp + 40) = %ecx;
                                                                        }
                                                                        *(__size32*)(%esp + 8) = 0x81486fc;
                                                                        *(__size32*)(%esp + 4) = 1;
                                                                        *(__size32*)(%esp + 12) = %eax;
                                                                        *(__size32*)%esp = %eax;
                                                                        __fprintf_chk();
                                                                        *(__size32*)%esp = %edx;
                                                                        (**(%ebx + 16))();
                                                                        if ( ~flags) {
                                                                            do {
                                                                                print_defaults_1(%eax, %edx);
                                                                            } while (flags);
                                                                            goto bb0x80a1f96;
                                                                        }
                                                                        goto bb0x80a1f96;
                                                                    } while (flags);
                                                                }
                                                                goto bb0x80a1fa8;
                                                            }
                                                            print_version();
                                                        }
                                                        usage();
                                                    }
bb0x80a1fa8:
                                                    *(__size32*)%esp = 1;
                                                    exit(*(%esp + 4));
                                                }
                                                goto bb0x80a18b2;
                                            }
                                            if ( ~flags) {
                                                hid_find_printer();
                                                *(__size32*)(%ebp + 8)--;
                                                *(__size32*)(%esp + 44) += 4;
                                                gui = %eax;
                                                exporter = %eax;
                                                goto bb0x80a18bc;
                                            }
                                            goto bb0x80a189e;
                                        }
                                        if ( ~flags) {
                                            print_version();
                                        }
                                        goto bb0x80a188f;
                                    }
bb0x80a18b2:
                                    hid_find_gui();
                                    gui = %eax;
                                    goto bb0x80a18bc;
                                }
                                program_directory = 0x815d403;
                                program_basename = %ebx;
                                goto bb0x80a1835;
                            }
                            *(__size32*)%esp = 0x8148694;
                            getenv(*(%esp + 4));
                            if ( ~flags) {
                                homedir = 0;
                                goto bb0x80a17ab;
                            }
                            goto bb0x80a179e;
                        }
                        goto bb0x80a20dd;
                    }
                    goto bb0x80a20dd;
                }
                goto bb0x80a20dd;
            }
            goto bb0x80a20dd;
        }
        goto bb0x80a20dd;
    }
}

/** address: 0x08067930 */
void register_action_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x08075460 */
void register_rotate_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x0807db80 */
void register_command_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x08086d50 */
void register_djopt_flag_list()
{
    hid_register_flags(0x8164420, 1);
    return;
}

/** address: 0x08086d30 */
void register_djopt_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x0809dbd0 */
void register_flags_flag_list()
{
    hid_register_flags(0x8166100, 70);
    return;
}

/** address: 0x0809e310 */
void register_fontmode_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x080a1370 */
void register_main_attribute_list()
{
    hid_register_attributes(0x81664e0, 133);
    return;
}

/** address: 0x080a68a0 */
void register_move_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x080ac9e0 */
void register_netlist_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x080bda50 */
void register_puller_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x080c45d0 */
void register_report_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x080d3d60 */
void register_vendor_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x080d3d40 */
void register_vendor_flag_list()
{
    hid_register_flags(0x8168358, 1);
    return;
}

/** address: 0x080da2c0 */
void register_toporouter_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x080a09b0 */
void lrealpath()
{
    __realpath_chk();
}

/** address: 0x080d75b0 */
void hid_init(int param1, int param2, __size32 param3)
{
    union { char *; __size32; } eax; 		// r24
    __size32 ebp; 		// r29
    int ebx; 		// r27
    __size32 edi; 		// r31
    int esi; 		// r30
    __size32 esp; 		// r28
    int local2; 		// m[esp - 4]

    gui = 0x8168380;
    hid_gtk_init();
    hid_lpr_init();
    hid_bom_init();
    hid_gerber_init();
    hid_nelma_init();
    hid_png_init();
    hid_ps_init();
    eax = Concat(exec_prefix, 0x815d1de);
    ebx = hid_load_dir(eax, param1, (esp - 4), param2, param3); /* Warning: also results in esp, ebp, esi, edi */
    *(__size32*)(esp + 28) = 0;
    *(__size32*)(esp + 24) = 0x8150610;
    *(__size32*)(esp + 20) = 0x815d1de;
    *(__size32*)(esp + 16) = 0x815492c;
    *(__size32*)(esp + 12) = 0x815d1de;
    *(__size32*)(esp + 8) = 0x813a3ba;
    *(__size32*)(esp + 4) = 0x815d1de;
    *(__size32*)esp = exec_prefix;
    eax = Concat(*esp, *(esp + 4));
    ebx = hid_load_dir(eax, ebx, ebp, esi, edi); /* Warning: also results in esp, ebp, esi, edi */
    if (homedir != 0) {
        *(__size32*)(esp + 28) = 0;
        *(__size32*)(esp + 24) = 0x81505fe;
        *(__size32*)(esp + 20) = 0x815d1de;
        *(__size32*)(esp + 16) = 0x8150610;
        *(__size32*)(esp + 12) = 0x815d1de;
        *(__size32*)(esp + 8) = 0x815492b;
        *(__size32*)(esp + 4) = 0x815d1de;
        *(__size32*)esp = homedir;
        eax = Concat(*esp, *(esp + 4));
        ebx = hid_load_dir(eax, ebx, ebp, esi, edi); /* Warning: also results in esp, ebp, esi, edi */
        *(__size32*)(esp + 20) = 0;
        *(__size32*)(esp + 16) = 0x8150610;
        *(__size32*)(esp + 12) = 0x815d1de;
        *(__size32*)(esp + 8) = 0x815492b;
        *(__size32*)(esp + 4) = 0x815d1de;
        *(__size32*)esp = homedir;
        eax = Concat(*esp, *(esp + 4));
        ebx = hid_load_dir(eax, ebx, ebp, esi, edi); /* Warning: also results in esp, ebp, esi, edi */
    }
    *(__size32*)(esp + 12) = 0;
    *(__size32*)(esp + 8) = 0x81505fe;
    *(__size32*)(esp + 4) = 0x815d1de;
    *(__size32*)esp = 0x8150610;
    eax = Concat(*esp, *(esp + 4));
    ebx = hid_load_dir(eax, ebx, ebp, esi, edi); /* Warning: also results in esp, ebp, esi, edi */
    *(__size32*)(esp + 4) = 0;
    *(__size32*)esp = 0x8150610;
    eax = Concat(*esp, *(esp + 4));
    ebp = *ebp;
    hid_load_dir(eax, ebx, ebp, esi, edi);
    return;
}

/** address: 0x080d6a80 */
void hid_load_settings(unsigned int param25, unsigned int param26, __size32 param27, __size8 param28, __size8 param29, unsigned int param30, unsigned int param31, unsigned int param32, __size32 param33, __size32 param34, __size32 param35, __size32 param36, __size32 param37, union { unsigned char; char; } param38, union { unsigned char; char; } param39, __size8 param40, unsigned int param41, unsigned int param42, __size32 param43, int param44, __size80 param45, __size80 param46, __size80 param47, __size80 param48, __size80 param49, __size80 param50, __size80 param51, __size80 param52)
{
    unsigned int eax; 		// r24
    int eax_1; 		// r24{47}
    unsigned int eax_4; 		// r24{50}
    __size32 ebx; 		// r27
    unsigned int ecx; 		// r25
    __size32 edi; 		// r31
    int edx; 		// r26
    int edx_1; 		// r26{46}
    int edx_2; 		// r26{49}
    int esi; 		// r30
    int esi_1; 		// r30{42}
    int esi_2; 		// r30{53}
    __size32 esp; 		// r28
    __size32 esp_1; 		// r28{65}
    __size32 esp_4; 		// r28{69}
    __size32 esp_5; 		// r28{1}
    unsigned int local20; 		// param41{32}
    unsigned int local21; 		// param42{33}
    __size32 local22; 		// param43{34}
    int local23; 		// param44{35}
    int local24; 		// esi_1{42}
    unsigned int local25; 		// eax{45}
    int local26; 		// edx_1{46}
    unsigned int local27; 		// eax{56}
    unsigned int local28; 		// ecx{57}
    __size32 local29; 		// ebx{58}
    int local30; 		// esi{59}
    int local31; 		// param44{62}
    union { __size32 *; __size32; } local32; 		// esp{71}

    edi = hid_attr_nodes;
    local20 = param41;
    local21 = param42;
    local22 = param43;
    local23 = param44;
    local31 = param44;
    if (hid_attr_nodes != 0) {
        do {
            param41 = local20;
            param42 = local21;
            param43 = local22;
            param44 = local23;
            edx = *(edi + 8);
            local27 = param41;
            local28 = param42;
            local29 = param43;
            local30 = param44;
            if (edx > 0) {
                ebx = *(edi + 4);
                esi = 0;
                local24 = esi;
                do {
                    esi_1 = local24;
                    edx = 0;
                    eax = 0;
                    local25 = eax;
                    local26 = edx;
                    do {
                        eax = local25;
                        edx_1 = local26;
                        eax_1 = (int)eax >> 16 ^ eax * 13;
                        ecx = *(unsigned char*)(ebx + edx_1);
                        edx_2 = edx_1 + 1;
                        eax_4 = eax_1 ^ ecx;
                        local25 = eax_4;
                        local26 = edx_2;
                        local27 = eax_4;
                        local28 = ecx;
                    } while (edx_1 + 1 != 44);
                    *(int*)(ebx + 44) = eax_1 ^ ecx;
                    esi_2 = esi_1 + 1;
                    ebx += 48;
                    local24 = esi_2;
                    local29 = ebx;
                    local30 = esi_2;
                } while (*(edi + 8) > esi_1 + 1);
            }
            eax = local27;
            ecx = local28;
            ebx = local29;
            esi = local30;
            edi = *edi;
            local20 = eax;
            local21 = ecx;
            local22 = ebx;
            local23 = esi;
            local31 = esi;
        } while (edi != 0);
    }
    param44 = local31;
    eax = Concat(pcblibdir, 0x815d1de);
    esp_1 = esp_5 - 64;
    hid_load_settings_1(param26, param27, param29, param30, param31, param32, param33, param35, param36, param37, param39, param40, eax, param44, edi, param45, param46, param47, param48, param49, param50, param51, param52);
    local32 = esp_1;
    if (homedir != 0) {
        eax = Concat(homedir, 0x815d1de);
        esp_4 = (esp_5 - 68);
        hid_load_settings_1(param25, param26, param28, param29, param30, param31, param32, param34, param35, param36, param38, param40, eax, param44, edi, param45, param46, param47, param48, param49, param50, param51, param52);
        local32 = esp_4;
    }
    esp = local32;
    *(__size32*)(esp + 4) = 0;
    *(__size32*)esp = 0x815057a;
    eax = Concat(*esp, *(esp + 4));
    esi = *(esp + 48);
    edi = *(esp + 52);
    hid_load_settings_1(*(esp - 1092), *(esp - 1088), *(esp - 1044), *(esp - 1040), *(esp - 1036), *(esp - 1032), *(esp - 1028), *(esp - 1020), *(esp - 1016), *(esp - 1012), *(esp - 996), param40, eax, esi, edi, param45, param46, param47, param48, param49, param50, param51, param52);
    return;
}

/** address: 0x080a1000 */
void usage(__size32 param1, __size32 param2, __size32 param3)
{
    __size32 eax; 		// r24
    union { __size32; __size32 *; } eax_1; 		// r24{5}
    __size32 eax_10; 		// r24{20}
    __size32 eax_13; 		// r24{27}
    __size32 eax_14; 		// r24{29}
    __size32 eax_15; 		// r24{35}
    __size32 eax_17; 		// r24{30}
    __size32 eax_18; 		// r24{12}
    __size32 eax_4; 		// r24{7}
    unsigned int eax_7; 		// r24{17}
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    __size32 esi; 		// r30
    __size32 local0; 		// m[esp - 72]
    __size32 local1; 		// m[esp - 76]
    __size32 local10; 		// param1{48}
    __size32 local2; 		// m[esp - 60]
    __size32 local3; 		// m[esp - 64]
    __size32 local4; 		// m[esp - 68]
    __size32 local5; 		// eax_18{12}
    __size32 local6; 		// eax_17{30}
    __size32 local7; 		// eax{42}
    __size32 local8; 		// param3{46}
    __size32 local9; 		// param2{47}

    eax_1 = hid_enumerate();
    local8 = param3;
    local9 = param2;
    local10 = param1;
    edx = eax_1;
    eax_4 = *eax_1;
    local5 = eax_4;
    if (eax_4 == 0) {
        u();
        u();
        u();
bb0x80a1094:
        eax_14 = 0x814736c;
        local6 = eax_14;
bb0x80a1099:
        eax_17 = local6;
        local0 = eax_17;
        local1 = 0x8148598;
        u();
        edx = eax_1;
        eax_15 = *eax_1;
        local7 = eax_15;
        if (eax_15 == 0) {
bb0x80a10fd:
            u();
        }
        edi = eax_1;
bb0x80a10c2:
        eax = local7;
        param3 = local8;
        param2 = local9;
        param1 = local10;
        tmpb = *(eax + 12) & 0x1;
        local8 = param3;
        local9 = param2;
        local10 = param1;
        if (tmpb == 0) {
            eax = *(edi + 4);
            edi += 4;
            local7 = eax;
            if (eax == 0) {
                goto bb0x80a10fd;
            }
            goto bb0x80a10c2;
        }
        edx = *(eax + 8);
        local2 = edx;
        eax = *(eax + 4);
        local4 = 0x81485ad;
        local0 = 1;
        local3 = eax;
        local1 = stderr;
        edx = __fprintf_chk();
        local8 = local2;
        local9 = local3;
        local10 = local4;
        eax = *(edi + 4);
        edi += 4;
        local7 = eax;
        if (eax != 0) {
            goto bb0x80a10c2;
        }
        goto bb0x80a10fd;
    }
    ebx = 0;
    edi = 0;
    esi = 0;
bb0x80a1028:
    eax_18 = local5;
    eax_7 = *(unsigned char*)(eax_18 + 12);
    edi = edi - ((unsigned char) (eax_7 & 0x1) < 1) + 1;
    esi = esi - ((unsigned char) (eax_7 & 0x2) < 1) + 1;
    eax_10 = *(edx + 4);
    ebx = ebx - ((unsigned char) (eax_7 & 0x4) < 1) + 1;
    edx += 4;
    local5 = eax_10;
    if (eax_10 != 0) {
        goto bb0x80a1028;
    }
    u();
    u();
    u();
    eax_13 = 0x814741b;
    local6 = eax_13;
    if (edi == 1) {
        goto bb0x80a1099;
    }
    goto bb0x80a1094;
}

/** address: 0x080d66c0 */
void hid_find_gui()
{
    __size32 eax; 		// r24
    int ecx; 		// r25
    int edx; 		// r26
    int edx_1; 		// r26{7}
    int edx_2; 		// r26{8}
    int local1; 		// edx_1{7}

    if (hid_num_hids <= 0) {
bb0x80d66fe:
        __fprintf_chk();
        exit(1);
    }
    ecx = *0x818d0d0;
    edx = 0;
    eax = *ecx;
    tmpb = *(eax + 12) & 0x6;
    local1 = edx;
    if (tmpb != 0) {
        do {
            edx_1 = local1;
            edx_2 = edx_1 + 1;
            local1 = edx_2;
            if (hid_num_hids <= edx_1 + 1) {
                goto bb0x80d66fe;
            }
            eax = *(ecx + (edx_1 + 1) * 4);
            tmpb = *(eax + 12) & 0x6;
        } while (tmpb != 0);
    }
    return;
}

/** address: 0x080aa930 */
void MyStrdup(__size32 param1)
{
    __size32 eax; 		// r24

    if (param1 != 0) {
        eax = __strdup();
        if (eax == 0) {
        }
    }
    return;
}

/** address: 0x080a3a70 */
__size32 Concat(union { char *; __size32; } param1, __size32 param2)
{
    size_t eax; 		// r24
    char *eax_2; 		// r24{6}
    char *eax_4; 		// r24{19}
    __size32 ebx; 		// r27
    int ecx; 		// r25
    size_t edi; 		// r31
    int edi_1; 		// r31{16}
    int edx; 		// r26
    union { __size32; __size32 *; } edx_1; 		// r26{13}
    union { char *; __size32; } esi; 		// r30
    int esp; 		// r28

    eax = strlen(param1);
    edi = eax;
    eax_2 = calloc(1, eax + 1);
    esi = eax_2;
    ecx = strcpy(eax_2, param1);
    ebx = param2;
    edx = (esp + 12);
    if (param2 != 0) {
        esi = eax_2;
        do {
            edx_1 = edx;
            edi_1 = edi;
            eax = strlen(ebx);
            edi = edi_1 + eax;
            eax_4 = realloc(esi, edi_1 + eax + 1);
            esi = eax_4;
            ecx = strcat(eax_4, ebx);
            edx = edx_1 + 4;
            ebx = *edx_1;
        } while (ebx != 0);
    }
    return esi; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x080a1300 */
void print_version()
{
    __printf_chk();
    exit(0);
    return;
}

/** address: 0x080d6200 */
void hid_find_printer()
{
    __size32 eax; 		// r24
    union { __size32; __size32 *; } ebx; 		// r27
    int edx; 		// r26
    int edx_1; 		// r26{11}
    int edx_2; 		// r26{12}
    int local0; 		// edx_1{11}

    if (hid_num_hids > 0) {
        ebx = *0x818d0d0;
        edx = 0;
        eax = *ebx;
        tmpb = *(eax + 12) & 0x2;
        local0 = edx;
        if (tmpb == 0) {
            do {
                edx_1 = local0;
                edx_2 = edx_1 + 1;
                local0 = edx_2;
                if (hid_num_hids > edx_1 + 1) {
                    eax = *(ebx + (edx_1 + 1) * 4);
                    tmpb = *(eax + 12) & 0x2;
                }
            } while (tmpb != 0);
        }
    }
    return;
}

/** address: 0x080d65c0 */
void hid_find_exporter(unsigned int param1, __size32 param2, __size32 param3, __size32 param4, union { char *; __size32; } param5, int param6, __size32 param7)
{
    __size32 eax; 		// r24
    unsigned int ebx; 		// r27
    unsigned int ebx_1; 		// r27{15}
    unsigned int ebx_2; 		// r27{37}
    unsigned int ebx_4; 		// r27{49}
    unsigned int ebx_5; 		// r27{56}
    int ecx; 		// r25
    int edx; 		// r26
    __size32 esi; 		// r30
    __size32 local0; 		// m[esp - 32]
    __size32 local1; 		// m[esp - 56]
    __size32 local10; 		// param3{17}
    __size32 local11; 		// param2{18}
    unsigned int local12; 		// param1{19}
    int local13; 		// eax{30}
    __size32 local14; 		// ecx{31}
    __size32 local15; 		// local0{33}
    __size32 local16; 		// local1{34}
    __size32 local17; 		// local2{35}
    unsigned int local18; 		// local3{36}
    unsigned int local19; 		// ebx_4{49}
    __size32 local2; 		// m[esp - 60]
    unsigned int local3; 		// m[esp - 64]
    __size32 local4; 		// m[esp - 52]
    __size32 local5; 		// m[esp - 48]
    int local6; 		// param6{12}
    __size32 local7; 		// param7{13}
    unsigned int local8; 		// ebx_1{15}
    __size32 local9; 		// param4{16}

    local6 = param6;
    local7 = param7;
    local9 = param4;
    local10 = param3;
    local11 = param2;
    local12 = param1;
    if (hid_num_hids <= 0) {
bb0x80d6610:
        local4 = 0x8150618;
        local5 = param5;
        ecx = __fprintf_chk(); /* Warning: also results in edx */
        if (hid_num_hids > 0) {
            ebx = 0;
            local19 = ebx;
            do {
bb0x80d6653:
                ebx_4 = local19;
                eax = *(hid_list + ebx_4 * 4);
                tmpb = *(eax + 12) & 0x4;
                if (tmpb == 0) {
bb0x80d6648:
                    ebx = ebx_4 + 1;
                    local19 = ebx;
                }
                else {
                    eax = *(eax + 4);
                    ebx_5 = ebx_4 + 1;
                    local4 = 0x814736a;
                    local5 = eax;
                    ecx = __fprintf_chk(); /* Warning: also results in edx */
                    local19 = ebx_5;
                    if (hid_num_hids > ebx_4 + 1) {
                        goto bb0x80d6653;
                    }
                    goto bb0x80d6690;
                }
                goto bb0x80d6648;
            } while (hid_num_hids <= ebx_4 + 1);
        }
bb0x80d6690:
        __fprintf_chk();
    }
    else {
        edx = hid_list;
        ebx = 0;
        local8 = ebx;
        do {
            param6 = local6;
            param7 = local7;
            ebx_1 = local8;
            param4 = local9;
            param3 = local10;
            param2 = local11;
            param1 = local12;
            esi = *(edx + ebx_1 * 4);
            tmpb = *(esi + 12) & 0x4;
            local13 = param6;
            local14 = param7;
            local15 = param4;
            local16 = param3;
            local17 = param2;
            local18 = param1;
            if (tmpb == 0) {
bb0x80d6609:
                eax = local13;
                ecx = local14;
                local0 = local15;
                local1 = local16;
                local2 = local17;
                local3 = local18;
                ebx_2 = ebx_1 + 1;
                local6 = eax;
                local7 = ecx;
                local8 = ebx_2;
                local9 = local0;
                local10 = local1;
                local11 = local2;
                local12 = local3;
            }
            else {
                eax = *(esi + 4);
                local0 = edx;
                local1 = eax;
                local2 = param5;
                eax = strcmp(param5, eax); /* Warning: also results in ecx */
                local13 = eax;
                local14 = ecx;
                local15 = local0;
                local16 = local1;
                local17 = local2;
                local18 = local3;
                if (eax != 0) {
                    goto bb0x80d6609;
                }
                return;
            }
            goto bb0x80d6609;
        } while (ebx_1 + 1 < hid_num_hids);
        goto bb0x80d6610;
    }
    return;
}

/** address: 0x080d6240 */
__size32 hid_enumerate()
{
    return hid_list;
}

/** address: 0x080a0a10 */
void print_defaults_1(union { __size32; __size32 *; } param1, union { unsigned int *; __size32; char *; __size32 *; double *; } param2)
{
    if (*(param1 + 8) <= 7) {
        switch(*(param1 + 8)) {
        case 0:
        case 1:
            if (param2 == 0) {
            }
            __fprintf_chk();
            break;
        case 2:
            if (param2 == 0) {
            }
            __fprintf_chk();
            break;
        case 3:
bb0x80a0b20:
            if (param2 == 0) {
            }
            __fprintf_chk();
            break;
        case 4:
            if (param2 != 0) {
bb0x80a0a33:
            }
            goto bb0x80a0a33;
        case 5:
            if (param2 == 0) {
            }
            __fprintf_chk();
            break;
        case 6:
            if (param2 == 0) {
            }
            __fprintf_chk();
            break;
        case 7:
            goto bb0x80a0b20;
        }
    }
    return;
}

/** address: 0x080a1330 */
void copyright()
{
    __printf_chk();
    exit(0);
    return;
}

/** address: 0x080d5cb0 */
void hid_register_actions()
{
    __size32 *eax_1; 		// r24{1}
    union { __size32; void *; } eax_4; 		// r24{9}
    __size32 *eax_5; 		// r24{15}
    union { __size32; __size32 *; } eax_8; 		// r24{29}
    int ecx; 		// r25
    int edx; 		// r26
    __size32 edx_1; 		// r26{16}
    __size32 edx_2; 		// r26{19}
    __size32 edx_3; 		// r26{21}
    __size32 edx_4; 		// r26{23}
    __size32 edx_5; 		// r26{25}
    __size32 local1; 		// m[esp + 4]

    *(__size32*)(%esp - 4) = %ebp;
    *(__size32*)(%ebp + 8) = 0;
    eax_1 = malloc(20);
    *(union { __size32 *; __size32; }*)0x818d098 = eax_1;
    *(__size32*)eax_1 = hid_action_nodes;
    if (local1 != 0) {
        eax_5 = malloc(20);
        edx_1 = *eax_8;
        *(union { __size32 *; __size32; }*)(eax_1 + 4) = eax_5;
        *(__size32*)eax_5 = edx_1;
        edx_2 = *(eax_8 + 4);
        *(__size32*)(eax_5 + 4) = edx_2;
        edx_3 = *(eax_8 + 8);
        *(__size32*)(eax_5 + 8) = edx_3;
        edx_4 = *(eax_8 + 12);
        *(__size32*)(eax_5 + 12) = edx_4;
        edx_5 = *(eax_8 + 16);
        *(__size32*)(eax_5 + 16) = edx_5;
    }
    else {
        *(__size32*)(eax_1 + 4) = eax_8;
    }
    n_actions += edx;
    *(__size32*)(eax_1 + 8) = edx;
    *(__size32*)(eax_1 + 16) = local1;
    eax_4 = *0x818d0a0;
    *(__size32*)(eax_1 + 12) = ecx;
    if (eax_4 != 0) {
        free(eax_4);
        all_actions = 0;
    }
    return;
}

/** address: 0x080d6170 */
void hid_register_flags(__size32 param1, __size32 param2)
{
    __size32 eax; 		// r24

    eax = calloc(1, 12);
    *(__size32*)eax = hid_flag_nodes;
    *(__size32*)(eax + 8) = param2;
    *(union { __size32 *; __size32; }*)0x818d0a8 = eax;
    n_flags += param2;
    *(__size32*)(eax + 4) = param1;
    eax = *0x818d0c8;
    if (eax != 0) {
        free(eax);
        all_flags = 0;
    }
    return;
}

/** address: 0x080d6250 */
void hid_register_attributes(__size32 param1, __size32 param2)
{
    __size32 *eax; 		// r24

    eax = calloc(1, 12);
    *(__size32*)eax = hid_attr_nodes;
    *(union { __size32 *; __size32; }*)0x818d0dc = eax;
    *(__size32*)(eax + 4) = param1;
    *(__size32*)(eax + 8) = param2;
    return;
}

/** address: 0x080ee530 */
void hid_gtk_init()
{
    __size32 eax; 		// r24
    int ebp; 		// r29
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    unsigned int esp; 		// r28

    eax = hid_register_hid(0x81685a0); /* Warning: also results in ecx, edx */
    apply_default_hid(eax, ecx, edx, esp - 4, SUBFLAGS32(esp - 4, 24, esp - 28), esp == 28, (unsigned int)(esp - 4) < 24, ebp, 0x81685a0, 0x8168680, pc);
}

/** address: 0x0810dd30 */
void hid_lpr_init()
{
    int ebp; 		// r29
    unsigned int esp; 		// r28

    apply_default_hid(esp - 4, SUBFLAGS32(esp - 4, 24, esp - 28), esp == 28, (unsigned int)(esp - 4) < 24, ebp, 0x816b100, 0x816a300, pc);
}

/** address: 0x0810ee60 */
void hid_bom_init()
{
    int ebp; 		// r29
    unsigned int esp; 		// r28

    apply_default_hid(esp - 4, SUBFLAGS32(esp - 4, 24, esp - 28), esp == 28, (unsigned int)(esp - 4) < 24, ebp, 0, 0x816a420, pc);
}

/** address: 0x0810ef10 */
void hid_gerber_init()
{
    int ebp; 		// r29
    unsigned int esp; 		// r28

    apply_default_hid(esp - 4, SUBFLAGS32(esp - 4, 24, esp - 28), esp == 28, (unsigned int)(esp - 4) < 24, ebp, 0, 0x816a5a0, pc);
}

/** address: 0x08111fc0 */
void hid_nelma_init()
{
    *(__size32*)(%esp - 4) = %ebp;
    *(__size32*)(%esp + 4) = 0;
    *(__size32*)%esp = 0x816a820;
    apply_default_hid();
}

/** address: 0x081144e0 */
void hid_png_init()
{
    *(__size32*)(%esp - 4) = %ebp;
    *(__size32*)(%esp + 4) = 0;
    *(__size32*)%esp = 0x816ac60;
    apply_default_hid();
}

/** address: 0x08117370 */
void hid_ps_init()
{
    int ebp; 		// r29
    unsigned int esp; 		// r28

    apply_default_hid(esp - 4, SUBFLAGS32(esp - 4, 24, esp - 28), esp == 28, (unsigned int)(esp - 4) < 24, ebp, 0, 0x816b100, pc);
}

/** address: 0x080d73d0 */
__size32 hid_load_dir(union { __size32; char *; } param1, int param2, __size32 param3, int param4, __size32 param5)
{
    __size32 eax; 		// r24
    int eax_12; 		// r24{81}
    int eax_15; 		// r24{88}
    int eax_18; 		// r24{20}
    int eax_19; 		// r24{26}
    int eax_22; 		// r24{32}
    int eax_25; 		// r24{34}
    void *eax_27; 		// r24{121}
    void *eax_28; 		// r24{106}
    __size32 eax_31; 		// r24{113}
    void *eax_34; 		// r24{118}
    void *eax_36; 		// r24{158}
    struct dirent *eax_4; 		// r24{67}
    union { int; void *; } eax_6; 		// r24{71}
    union { unsigned int; void *; } eax_9; 		// r24{75}
    __size32 ebp; 		// r29
    int ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edi; 		// r31
    __size32 edx; 		// r26
    int esi; 		// r30
    int esp; 		// r28
    int *esp_1; 		// r28{15}
    int *esp_11; 		// r28{53}
    __size32 esp_12; 		// r28{128}
    union { void *; int; } *esp_13; 		// r28{144}
    union { void *; int; } *esp_14; 		// r28{153}
    union { __size32 *; void **; __size32; } esp_15; 		// r28{158}
    union { void *; int; } *esp_18; 		// r28{37}
    union { __size32 *; void **; __size32; } esp_21; 		// r28{130}
    __size32 esp_24; 		// r28{1}
    int *esp_4; 		// r28{54}
    int *esp_5; 		// r28{67}
    union { void *; int; } *esp_8; 		// r28{32}
    __size32 local0; 		// m[esp - 4]
    __size32 local1; 		// m[esp - 8]
    int local10; 		// m[esp_24 - 4]{128}
    __size32 local14; 		// m[esp_24 - 4]{133}
    __size32 local15; 		// m[esp_24 - 8]{9}
    __size32 local16; 		// m[esp_24 - 8]{57}
    int local17; 		// m[esp_24 - 8]{128}
    __size32 local19; 		// m[esp_24 - 8]{134}
    int local2; 		// m[esp - 12]
    int local22; 		// m[esp_24 - 12]{10}
    int local23; 		// m[esp_24 - 12]{58}
    int local24; 		// m[esp_24 - 12]{128}
    int local28; 		// m[esp_24 - 12]{135}
    int local29; 		// m[esp_24 - 16]{11}
    int local3; 		// m[esp - 16]
    int local30; 		// m[esp_24 - 16]{59}
    int local31; 		// m[esp_24 - 16]{128}
    int local33; 		// m[esp_24 - 16]{43}
    __size32 local36; 		// m[esp_24 - 128]{13}
    __size32 local37; 		// m[esp_24 - 128]{60}
    int local38; 		// m[esp_24 - 128]{128}
    __size32 local4; 		// m[esp - 156]
    __size32 local42; 		// m[esp_24 - 128]{137}
    union { DIR *; __size32; } local43; 		// m[esp_24 - 132]{16}
    union { __size32; DIR *; } local44; 		// m[esp_24 - 132]{61}
    int local45; 		// m[esp_24 - 132]{128}
    union { __size32; DIR *; } local47; 		// m[esp_24 - 132]{138}
    __size32 local5; 		// m[esp - 128]
    __size32 local50; 		// m[esp_24 - 156]{12}
    __size32 local51; 		// m[esp_24 - 156]{62}
    int local52; 		// m[esp_24 - 156]{128}
    __size32 local56; 		// m[esp_24 - 156]{46}
    unsigned int local57; 		// m[esp_24 - 160]{14}
    unsigned int local58; 		// m[esp_24 - 160]{63}
    int local59; 		// m[esp_24 - 160]{128}
    unsigned int local6; 		// m[esp - 160]
    unsigned int local61; 		// m[esp_24 - 160]{47}
    union { int; void *; } *local64; 		// esp_18{37}
    __size32 local65; 		// m[esp_24 - 4]{40}
    __size32 local66; 		// m[esp_24 - 8]{41}
    int local67; 		// m[esp_24 - 12]{42}
    int local68; 		// local33{43}
    __size32 local69; 		// m[esp_24 - 128]{44}
    union { DIR *; __size32; } local7; 		// m[esp - 132]
    union { DIR *; __size32; } local70; 		// m[esp_24 - 132]{45}
    __size32 local71; 		// local56{46}
    unsigned int local72; 		// local61{47}
    int *local73; 		// esp_4{54}
    __size32 local74; 		// local9{56}
    __size32 local75; 		// local16{57}
    int local76; 		// local23{58}
    int local77; 		// local30{59}
    __size32 local78; 		// local37{60}
    union { DIR *; __size32; } local79; 		// local44{61}
    __size32 local8; 		// m[esp_24 - 4]{7}
    __size32 local80; 		// local51{62}
    unsigned int local81; 		// local58{63}
    int *local82; 		// esp{92}
    void *local83; 		// eax_27{121}
    union { __size32; void **; __size32 *; } local84; 		// esp_21{130}
    __size32 local85; 		// local14{133}
    __size32 local86; 		// local19{134}
    int local87; 		// local28{135}
    int local88; 		// m[esp_24 - 16]{136}
    __size32 local89; 		// local42{137}
    __size32 local9; 		// m[esp_24 - 4]{56}
    union { DIR *; __size32; } local90; 		// local47{138}
    __size32 local91; 		// m[esp_24 - 156]{139}
    unsigned int local92; 		// m[esp_24 - 160]{140}

    local0 = param3;
    ebp = esp_24 - 4;
    local1 = param5;
    local2 = param4;
    local3 = param2;
    local4 = param1;
    local5 = param1;
    eax = opendir(param1); /* Warning: also results in esp_1 */
    local73 = esp_1;
    local74 = local8;
    local75 = local15;
    local76 = local22;
    local77 = local29;
    local78 = local36;
    local80 = local50;
    local81 = local57;
    local82 = esp_1;
    local7 = eax;
    local79 = local43;
    if (eax != 0) {
        for(;;) {
            esp_4 = local73;
            local9 = local74;
            local16 = local75;
            local23 = local76;
            local30 = local77;
            local37 = local78;
            local44 = local79;
            local51 = local80;
            local58 = local81;
            eax = *(ebp - 128);
            *(int*)esp_4 = eax;
            eax_4 = readdir(*esp_4); /* Warning: also results in esp_5 */
            local65 = local9;
            local65 = local9;
            local65 = local9;
            local66 = local16;
            local66 = local16;
            local66 = local16;
            local67 = local23;
            local67 = local23;
            local67 = local23;
            local68 = local30;
            local68 = local30;
            local68 = local30;
            local69 = local37;
            local69 = local37;
            local69 = local37;
            local70 = local44;
            local70 = local44;
            local70 = local44;
            local71 = local51;
            local71 = local51;
            local71 = local51;
            local72 = local58;
            local72 = local58;
            local72 = local58;
            local82 = esp_5;
            local85 = local9;
            local86 = local16;
            local87 = local23;
            local88 = local30;
            local89 = local37;
            local90 = local44;
            local91 = local51;
            local92 = local58;
            if (eax_4 != 0) {
                *(union { int; void *; }*)esp_4 = eax_4 + 11;
                eax_6 = __strdup();
                *(int*)esp_4 = eax_6;
                ebx = eax_6;
                eax_9 = strlen(*esp_4);
                if (eax_9 > 3) {
                    *(int*)esp_4 = eax_6 + eax_9 - 3;
                    *(__size32*)(esp_4 + 4) = 0x81505d2;
                    *(int*)(ebp - 136) = eax_6 + eax_9 - 3;
                    eax_12 = strcasecmp(*esp_4, *(esp_4 + 4));
                    edx = *(ebp - 136);
                    if (eax_12 == 0) {
                        *(__size8*)edx = 0;
                        goto bb0x80d73fb;
                    }
                    else {
                        if (eax_9 != 4) {
                            *(__size32*)(esp_4 + 4) = 0x81505d6;
                            *(int*)esp_4 = eax_6 + eax_9 - 4;
                            eax_15 = strcasecmp(*esp_4, *(esp_4 + 4));
                            if (eax_15 == 0) {
                                *(__size8*)(eax_6 + eax_9 - 4) = 0;
                            }
                        }
                    }
                }
bb0x80d73fb:
                eax_18 = *(ebp - 124);
                *(__size32*)(esp_4 + 12) = 0;
                *(union { void *; __size32; }*)(esp_4 + 8) = eax_4 + 11;
                *(__size32*)(esp_4 + 4) = 0x815d1de;
                *(int*)esp_4 = eax_18;
                eax_19 = Concat(*esp_4, *(esp_4 + 4));
                *(int*)esp_4 = 3;
                esi = eax_19;
                *(__size32*)(esp_4 + 8) = ebp - 112;
                *(int*)(esp_4 + 4) = eax_19;
                eax_22 = stat(*esp_4, *(esp_4 + 4), *(esp_4 + 8)); /* Warning: also results in esp_8 */
                local64 = esp_8;
                local64 = esp_8;
                if (eax_22 == 0) {
                    eax_25 = *(ebp - 96);
                    if (((unsigned char) eax_25 & 0x49) != 0 && (eax_25 & 0xf000) == 0x8000) {
                        *(__size32*)(esp_4 + 4) = 258;
                        *(int*)esp_4 = eax_19;
                        eax_28 = dlopen(*esp_4, *(esp_4 + 4));
                        if (eax_28 != 0) {
                            *(__size32*)(esp_4 + 12) = 0;
                            *(__size32*)(esp_4 + 8) = 0x81505f8;
                            *(int*)(esp_4 + 4) = eax_6;
                            *(int*)esp_4 = 0x81505e9;
                            eax_31 = Concat(*esp_4, *(esp_4 + 4));
                            *(union { int; void *; }*)esp_4 = eax_28;
                            *(__size32*)(ebp - 132) = eax_31;
                            *(__size32*)(esp_4 + 4) = eax_31;
                            eax_34 = dlsym(*esp_4, *(esp_4 + 4)); /* Warning: also results in ecx, edx */
                            local83 = eax_34;
                            flags = LOGICALFLAGS32(eax_34);
                            if (eax_34 == 0) {
                                *(__size32*)(esp_4 + 4) = 0x81505ee;
                                *(union { int; void *; }*)esp_4 = eax_28;
                                eax_36 = dlsym(*esp_4, *(esp_4 + 4)); /* Warning: also results in ecx, edx, esp_15 */
                                local83 = eax_36;
                                local84 = esp_15;
                                flags = LOGICALFLAGS32(eax_36);
                                if (eax_36 != 0) {
bb0x80d754c:
                                    eax_27 = local83;
                                    (*eax_27)((unsigned char) eax_25 & 0xf000, eax_27, ecx, edx, eax_6, ebp, eax_19, eax_28, flags, ZF, CF, local9, local16, local23, local30, local37, local44, local51, local58);
                                    local84 = esp_12;
                                    local85 = local10;
                                    local86 = local17;
                                    local87 = local24;
                                    local88 = local31;
                                    local89 = local38;
                                    local90 = local45;
                                    local91 = local52;
                                    local92 = local59;
                                }
                            }
                            else {
                                goto bb0x80d754c;
                            }
                            esp_21 = local84;
                            local14 = local85;
                            local19 = local86;
                            local28 = local87;
                            *(int*)(esp_24 - 16) = local88;
                            local42 = local89;
                            local47 = local90;
                            *(__size32*)(esp_24 - 156) = local91;
                            *(unsigned int*)(esp_24 - 160) = local92;
                            eax = *(ebp - 132);
                            *(__size32*)esp_21 = eax;
                            esp_13 = free(*esp_21);
                            local64 = esp_13;
                            local65 = local14;
                            local66 = local19;
                            local67 = local28;
                            local68 = *(esp_24 - 16);
                            local69 = local42;
                            local70 = local47;
                            local71 = *(esp_24 - 156);
                            local72 = *(esp_24 - 160);
                            goto bb0x80d744e;
                        }
                        eax = dlerror();
                        *(__size32*)(esp_4 + 8) = 0x81505db;
                        *(__size32*)(esp_4 + 4) = 1;
                        *(union { char *; __size32; }*)(esp_4 + 12) = eax;
                        *(int*)esp_4 = stderr;
                        esp_14 = __fprintf_chk();
                        local64 = esp_14;
                        goto bb0x80d744e;
                    }
                }
bb0x80d744e:
                esp_18 = local64;
                *(__size32*)(esp_24 - 4) = local65;
                *(__size32*)(esp_24 - 8) = local66;
                *(int*)(esp_24 - 12) = local67;
                local33 = local68;
                *(__size32*)(esp_24 - 128) = local69;
                *(union { __size32; DIR *; }*)(esp_24 - 132) = local70;
                local56 = local71;
                local61 = local72;
                *(union { void *; int; }*)esp_18 = ebx;
                free(*esp_18);
                local74 = *(esp_24 - 4);
                local75 = *(esp_24 - 8);
                local76 = *(esp_24 - 12);
                local77 = local33;
                local78 = *(esp_24 - 128);
                local79 = *(esp_24 - 132);
                local80 = local56;
                local81 = local61;
                *(int*)esp_18 = esi;
                esp_11 = free(*esp_18);
                local73 = esp_11;
            }
        }
    }
    esp = local82;
    eax = *(ebp - 124);
    *(int*)esp = eax;
    free(*esp);
    ebx = *(esp + 140);
    esi = *(esp + 144);
    edi = *(esp + 148);
    ebp = *(esp + 152);
    return ebx; /* WARNING: Also returning: ebp := ebp, esi := esi, edi := edi */
}

/** address: 0x080d6730 */
void hid_load_settings_1(unsigned int param4, __size32 param5, __size8 param6, __size32 param7, unsigned int param8, unsigned int param4, __size32 param5, __size32 param11, __size32 param7, __size32 param8, union { char; unsigned char; } param9, __size8 param15, union { __size32; char *; } param10, int param11, __size32 param12, __size80 param19, __size80 param20, __size80 param21, __size80 param22, __size80 param23, __size80 param24, __size80 param19, __size80 param20)
{
    __size8 al; 		// r8
    char dl; 		// r10
    unsigned int eax; 		// r24
    union { __size32; union { void *; int; } *; } eax_10; 		// r24{69}
    int eax_12; 		// r24{32}
    int eax_15; 		// r24{327}
    unsigned int eax_18; 		// r24{330}
    char *eax_20; 		// r24{64}
    __size32 eax_23; 		// r24{89}
    union { unsigned int; char *; } eax_27; 		// r24{101}
    FILE *eax_3; 		// r24{33}
    __size32 eax_31; 		// r24{91}
    size_t eax_35; 		// r24{117}
    union { int; union { char; __size8; } *; } eax_39; 		// r24{118}
    union { unsigned int; char *; } eax_43; 		// r24{107}
    int eax_47; 		// r24{164}
    union { __size32; char *; } eax_50; 		// r24{184}
    int eax_53; 		// r24{188}
    union { __size32; __size8 *; } eax_56; 		// r24{96}
    union { union { char; __size8; } *; unsigned int; } eax_57; 		// r24{122}
    union { union { void *; int; } *; unsigned int *; __size32; } eax_6; 		// r24{85}
    __size32 eax_60; 		// r24{245}
    int eax_63; 		// r24{194}
    int eax_65; 		// r24{276}
    __size32 eax_66; 		// r24{250}
    union { __size32; char *; } eax_69; 		// r24{260}
    int eax_70; 		// r24{264}
    __size32 eax_72; 		// r24{258}
    union { __size8; char; } *eax_76; 		// r24{124}
    __size32 ebx; 		// r27
    union { unsigned char *; char *; unsigned int; } ebx_1; 		// r27{78}
    unsigned int ebx_11; 		// r27{141}
    unsigned int ebx_12; 		// r27{257}
    unsigned int ebx_17; 		// r27{223}
    __size32 ebx_2; 		// r27{73}
    unsigned int ebx_22; 		// r27{199}
    unsigned int ebx_5; 		// r27{261}
    unsigned int ebx_6; 		// r27{183}
    unsigned int ebx_8; 		// r27{254}
    unsigned int ecx; 		// r25
    __size32 edi_1; 		// r31{0}
    __size32 edi_10; 		// r31{38}
    __size32 edi_11; 		// r31{225}
    __size32 edi_12; 		// r31{163}
    __size32 edi_15; 		// r31{169}
    __size32 edi_16; 		// r31{217}
    __size32 edi_2; 		// r31{0}
    __size32 edi_3; 		// r31{87}
    __size32 edi_6; 		// r31{309}
    __size32 edi_7; 		// r31{342}
    union { __size32; __size32 *; } edi_9; 		// r31{316}
    int edx; 		// r26
    int edx_1; 		// r26{326}
    int edx_2; 		// r26{329}
    union { char *; int; } esi_1; 		// r30{111}
    int esi_10; 		// r30{322}
    int esi_11; 		// r30{315}
    union { union { char; __size8; } *; int; } esi_12; 		// r30{37}
    int esi_13; 		// r30{334}
    union { __size8 *; int; } esi_15; 		// r30{100}
    int esi_18; 		// r30{106}
    unsigned int esi_2; 		// r30{168}
    unsigned int esi_21; 		// r30{162}
    union { unsigned int; union { char; __size8; } *; } esi_23; 		// r30{224}
    unsigned int esi_24; 		// r30{218}
    __size32 esi_3; 		// r30{0}
    int esi_5; 		// r30{297}
    int esi_6; 		// r30{0}
    int esi_7; 		// r30{341}
    int esi_8; 		// r30{308}
    int esi_9; 		// r30{320}
    __size32 esp_1; 		// r28{117}
    __size32 esp_11; 		// r28{161}
    __size32 esp_4; 		// r28{244}
    __size32 esp_5; 		// r28{1}
    __size32 esp_9; 		// r28{216}
    __size80 local100; 		// st4_8{43}
    __size80 local101; 		// st5_13{44}
    __size80 local102; 		// st6_4{45}
    __size80 local103; 		// st7_4{46}
    __size32 local104; 		// local86{49}
    __size32 local105; 		// param7{50}
    __size32 local106; 		// param11{51}
    __size32 local107; 		// param5{52}
    unsigned int local108; 		// param4{53}
    unsigned int local109; 		// param8{54}
    __size32 local110; 		// param7{55}
    __size8 local111; 		// param6{56}
    __size8 local112; 		// param15{57}
    __size32 local113; 		// param5{59}
    unsigned int local114; 		// param4{60}
    union { unsigned int; char *; unsigned char *; } local115; 		// ebx_1{78}
    union { __size8 *; __size32; } local116; 		// eax_56{96}
    union { int; char *; } local117; 		// esi_1{111}
    union { char; __size8; } *local118; 		// eax_76{124}
    unsigned int local119; 		// ebx_11{141}
    __size80 local120; 		// st_9{142}
    __size80 local121; 		// st1_8{143}
    __size80 local122; 		// st2_7{144}
    __size80 local123; 		// st3_2{145}
    __size80 local124; 		// st4_11{146}
    __size80 local125; 		// st5_14{147}
    __size80 local126; 		// st6_6{148}
    __size80 local127; 		// st7_6{149}
    union { __size32 *; int; } local128; 		// local81{152}
    __size32 local129; 		// m[esp_5 - 0x434]{153}
    unsigned int local130; 		// m[esp_5 - 0x444]{154}
    unsigned int local131; 		// m[esp_5 - 0x448]{155}
    __size32 local132; 		// m[esp_5 - 0x44c]{156}
    __size32 local133; 		// esp_11{161}
    unsigned int local134; 		// esi_2{168}
    __size32 local135; 		// edi_15{169}
    union { double; __size80; } local136; 		// st_4{170}
    union { double; __size80; } local137; 		// st1_10{171}
    union { double; __size80; } local138; 		// st2_10{172}
    union { double; __size80; } local139; 		// st3_10{173}
    union { double; __size80; } local140; 		// st4_5{174}
    union { double; __size80; } local141; 		// st5_4{175}
    union { double; __size80; } local142; 		// st6_8{176}
    union { double; __size80; } local143; 		// st7_8{177}
    __size80 local144; 		// st_10{200}
    __size80 local145; 		// st1_9{201}
    __size80 local146; 		// st2_16{202}
    __size80 local147; 		// st3_5{203}
    __size80 local148; 		// st4_2{204}
    __size80 local149; 		// st5_1{205}
    __size80 local150; 		// st6_7{206}
    __size80 local151; 		// st7_7{207}
    unsigned int local152; 		// ebx_17{223}
    union { union { char; __size8; } *; unsigned int; } local153; 		// esi_23{224}
    __size32 local154; 		// edi_11{225}
    __size80 local155; 		// st_8{226}
    __size80 local156; 		// st1_7{227}
    __size80 local157; 		// st2_13{228}
    __size80 local158; 		// st3_13{229}
    __size80 local159; 		// st4_16{230}
    __size80 local160; 		// st5_7{231}
    __size80 local161; 		// st6_5{232}
    __size80 local162; 		// st7_5{233}
    __size32 local163; 		// esp_4{244}
    union { char *; __size32; } local164; 		// eax_69{260}
    unsigned int local165; 		// ebx_5{261}
    int local166; 		// esi_5{297}
    int local167; 		// esi_11{315}
    union { __size32 *; __size32; } local168; 		// edi_9{316}
    int local169; 		// esi_10{322}
    unsigned int local170; 		// eax{325}
    int local171; 		// edx_1{326}
    unsigned int local172; 		// eax{338}
    int local173; 		// esi_7{341}
    __size8 local55; 		// m[esp - 0x450]
    union { int; __size32 *; } local81; 		// m[esp_5 - 0x430]{152}
    int local82; 		// m[esp_5 - 0x430]{0}
    __size32 local84; 		// m[esp_5 - 0x430]{134}
    __size32 local86; 		// m[esp_5 - 0x430]{49}
    __size32 local87; 		// m[esp_5 - 0x430]{246}
    __size32 local93; 		// ebx{36}
    union { int; union { char; __size8; } *; } local94; 		// esi_12{37}
    __size32 local95; 		// edi_10{38}
    __size80 local96; 		// st_7{39}
    __size80 local97; 		// st1_6{40}
    __size80 local98; 		// st2_4{41}
    __size80 local99; 		// st3_16{42}
    __size80 st1; 		// r33
    __size80 st1_1; 		// r33{0}
    union { __size80; double; } st1_10; 		// r33{171}
    int st1_4; 		// r33{345}
    __size80 st1_6; 		// r33{40}
    __size80 st1_7; 		// r33{227}
    __size80 st1_8; 		// r33{143}
    __size80 st1_9; 		// r33{201}
    __size80 st2; 		// r34
    __size80 st2_1; 		// r34{0}
    union { __size80; double; } st2_10; 		// r34{172}
    __size80 st2_13; 		// r34{228}
    __size80 st2_16; 		// r34{202}
    int st2_19; 		// r34{345}
    __size80 st2_4; 		// r34{41}
    __size80 st2_7; 		// r34{144}
    __size80 st3; 		// r35
    __size80 st3_1; 		// r35{0}
    union { __size80; double; } st3_10; 		// r35{173}
    __size80 st3_13; 		// r35{229}
    __size80 st3_16; 		// r35{42}
    int st3_19; 		// r35{345}
    __size80 st3_2; 		// r35{145}
    __size80 st3_5; 		// r35{203}
    __size80 st4; 		// r36
    __size80 st4_1; 		// r36{0}
    __size80 st4_11; 		// r36{146}
    __size80 st4_16; 		// r36{230}
    int st4_19; 		// r36{345}
    __size80 st4_2; 		// r36{204}
    union { __size80; double; } st4_5; 		// r36{174}
    __size80 st4_8; 		// r36{43}
    __size80 st5; 		// r37
    __size80 st5_1; 		// r37{205}
    __size80 st5_10; 		// r37{0}
    int st5_11; 		// r37{345}
    __size80 st5_13; 		// r37{44}
    __size80 st5_14; 		// r37{147}
    union { __size80; double; } st5_4; 		// r37{175}
    __size80 st5_7; 		// r37{231}
    __size80 st6; 		// r38
    __size80 st6_1; 		// r38{0}
    int st6_2; 		// r38{345}
    __size80 st6_4; 		// r38{45}
    __size80 st6_5; 		// r38{232}
    __size80 st6_6; 		// r38{148}
    __size80 st6_7; 		// r38{206}
    union { __size80; double; } st6_8; 		// r38{176}
    __size80 st7; 		// r39
    __size80 st7_1; 		// r39{0}
    int st7_2; 		// r39{345}
    __size80 st7_4; 		// r39{46}
    __size80 st7_5; 		// r39{233}
    __size80 st7_6; 		// r39{149}
    __size80 st7_7; 		// r39{207}
    union { __size80; double; } st7_8; 		// r39{177}
    __size80 st_1; 		// r32{0}
    __size80 st_10; 		// r32{200}
    int st_2; 		// r32{345}
    union { __size80; double; } st_4; 		// r32{170}
    double st_5; 		// r32{284}
    __size80 st_7; 		// r32{39}
    __size80 st_8; 		// r32{226}
    __size80 st_9; 		// r32{142}

    ebx = param10;
    eax_12 = *20;
    eax_3 = fopen(param10, "r");
    local93 = ebx;
    local94 = param11;
    local95 = param12;
    local96 = param19;
    local97 = param20;
    local98 = param21;
    local99 = param22;
    local100 = param23;
    local101 = param24;
    local102 = param19;
    local103 = param20;
    local104 = param8;
    local105 = param7;
    local106 = param11;
    local107 = param5;
    local108 = param4;
    local109 = param8;
    local110 = param7;
    local111 = local55;
    local112 = param15;
    local113 = param5;
    local114 = param4;
    local166 = param11;
    if (eax_3 == 0) {
        free(param10);
    }
    else {
        free(param10);
        do {
bb0x80d6770:
            ebx = local93;
            esi_12 = local94;
            edi_10 = local95;
            st_7 = local96;
            st1_6 = local97;
            st2_4 = local98;
            st3_16 = local99;
            st4_8 = local100;
            st5_13 = local101;
            st6_4 = local102;
            st7_4 = local103;
            local86 = local104;
            param7 = local105;
            param11 = local106;
            param5 = local107;
            param4 = local108;
            param8 = local109;
            param7 = local110;
            param6 = local111;
            param15 = local112;
            param5 = local113;
            param4 = local114;
            *(__size32*)(esp_5 - 1144) = 1024;
            *(union { FILE *; __size32; }*)(esp_5 - 1140) = eax_3;
            eax_20 = fgets(&param9, 1024, eax_3);
            local93 = ebx;
            local94 = esi_12;
            local94 = esi_12;
            local94 = esi_12;
            local94 = esi_12;
            local94 = esi_12;
            local95 = edi_10;
            local95 = edi_10;
            local95 = edi_10;
            local95 = edi_10;
            local96 = st_7;
            local96 = st_7;
            local96 = st_7;
            local96 = st_7;
            local96 = st_7;
            local96 = st_7;
            local96 = st_7;
            local96 = st_7;
            local97 = st1_6;
            local97 = st1_6;
            local97 = st1_6;
            local97 = st1_6;
            local97 = st1_6;
            local97 = st1_6;
            local97 = st1_6;
            local97 = st1_6;
            local98 = st2_4;
            local98 = st2_4;
            local98 = st2_4;
            local98 = st2_4;
            local98 = st2_4;
            local98 = st2_4;
            local98 = st2_4;
            local98 = st2_4;
            local99 = st3_16;
            local99 = st3_16;
            local99 = st3_16;
            local99 = st3_16;
            local99 = st3_16;
            local99 = st3_16;
            local99 = st3_16;
            local99 = st3_16;
            local100 = st4_8;
            local100 = st4_8;
            local100 = st4_8;
            local100 = st4_8;
            local100 = st4_8;
            local100 = st4_8;
            local100 = st4_8;
            local100 = st4_8;
            local101 = st5_13;
            local101 = st5_13;
            local101 = st5_13;
            local101 = st5_13;
            local101 = st5_13;
            local101 = st5_13;
            local101 = st5_13;
            local101 = st5_13;
            local102 = st6_4;
            local102 = st6_4;
            local102 = st6_4;
            local102 = st6_4;
            local102 = st6_4;
            local102 = st6_4;
            local102 = st6_4;
            local102 = st6_4;
            local103 = st7_4;
            local103 = st7_4;
            local103 = st7_4;
            local103 = st7_4;
            local103 = st7_4;
            local103 = st7_4;
            local103 = st7_4;
            local103 = st7_4;
            local104 = local86;
            local104 = local86;
            local104 = local86;
            local104 = local86;
            local104 = local86;
            local104 = local86;
            local104 = local86;
            local105 = param7;
            local105 = param7;
            local105 = param7;
            local105 = param7;
            local105 = param7;
            local105 = param7;
            local105 = param7;
            local105 = param7;
            local106 = param11;
            local106 = param11;
            local106 = param11;
            local106 = param11;
            local106 = param11;
            local106 = param11;
            local106 = param11;
            local106 = param11;
            local107 = param5;
            local107 = param5;
            local107 = param5;
            local107 = param5;
            local107 = param5;
            local107 = param5;
            local107 = param5;
            local107 = param5;
            local108 = param4;
            local108 = param4;
            local108 = param4;
            local108 = param4;
            local108 = param4;
            local108 = param4;
            local108 = param4;
            local108 = param4;
            local109 = param8;
            local109 = param8;
            local109 = param8;
            local109 = param8;
            local109 = param8;
            local109 = param8;
            local109 = param8;
            local109 = param8;
            local110 = param7;
            local110 = param7;
            local110 = param7;
            local110 = param7;
            local110 = param7;
            local110 = param7;
            local110 = param7;
            local110 = param7;
            local111 = param6;
            local112 = param15;
            local112 = param15;
            local112 = param15;
            local112 = param15;
            local112 = param15;
            local113 = param5;
            local113 = param5;
            local113 = param5;
            local113 = param5;
            local113 = param5;
            local113 = param5;
            local113 = param5;
            local114 = param4;
            local114 = param4;
            local114 = param4;
            local114 = param4;
            local114 = param4;
            local114 = param4;
            local114 = param4;
            local120 = st_7;
            local121 = st1_6;
            local122 = st2_4;
            local123 = st3_16;
            local124 = st4_8;
            local125 = st5_13;
            local126 = st6_4;
            local127 = st7_4;
            local129 = param7;
            local130 = param4;
            local131 = param8;
            local132 = param7;
            local166 = esi_12;
bb0x80d6790:
            if (eax_20 != 0) {
                if ((unsigned char) (param9) == 0) {
                    continue;
                }
                *(__size8*)(esp_5 - 1104) = (unsigned char) (param9);
                ebx = esp_5 - 1056;
                eax_10 = __ctype_b_loc();
                local111 = local55;
                local111 = local55;
                local111 = local55;
                local115 = ebx;
                dl = (unsigned char) ((unsigned char) (param9));
                ecx = *eax_10;
                break;
            }
            fclose(eax_3);
            goto bb0x80d6a0c;
bb0x80d67c0:
            ebx_2 = ebx_1 + 1;
            edx = *(unsigned char*)(ebx_1 + 1);
            dl = (unsigned char) edx;
            local93 = ebx_2;
            local115 = ebx_2;
        } while ((unsigned char) edx == 0);
        ebx_1 = local115;
        tmpb = *(ecx + (int) dl * 2 + 1) & 0x20;
        local93 = ebx_1;
        local93 = ebx_1;
        local93 = ebx_1;
        local93 = ebx_1;
        local93 = ebx_1;
        local93 = ebx_1;
        local119 = ebx_1;
        if (tmpb != 0) {
            goto bb0x80d67c0;
        }
        else {
            if (dl == 35) {
                goto bb0x80d6770;
            }
            edx = *(unsigned char*)ebx_1;
            if ((unsigned char) edx == 0) {
                goto bb0x80d6770;
            }
            *(__size8*)(esp_5 - 1104) = (unsigned char) edx;
            eax_6 = __ctype_b_loc();
            local111 = local55;
            local111 = local55;
            local111 = local55;
            local111 = local55;
            local111 = local55;
            dl = (unsigned char) ((unsigned char) edx);
            edi_3 = eax_6;
            ecx = *eax_6;
            eax_23 = ebx_1;
            local95 = edi_3;
            local95 = edi_3;
            local95 = edi_3;
            local95 = edi_3;
            local116 = eax_23;
            do {
                eax_56 = local116;
                tmpb = *(ecx + (int) dl * 2 + 1) & 0x20;
                if (tmpb == 0) {
bb0x80d6800:
                    eax_31 = eax_56 + 1;
                    edx = *(unsigned char*)(eax_56 + 1);
                    dl = (unsigned char) edx;
                    local116 = eax_31;
                }
                else {
                    *(__size8*)eax_56 = 0;
                    esi_15 = eax_56 + 1;
                    eax_27 = *(unsigned char*)(eax_56 + 1);
                    al = (unsigned char) eax_27;
                    local94 = esi_15;
                    local112 = al;
                    local117 = esi_15;
                    if ((unsigned char) eax_27 == 0) {
                        goto bb0x80d6770;
                    }
                    ecx = *eax_6;
                    do {
                        esi_1 = local117;
                        dl = (unsigned char) (int) al;
                        tmpb = *(ecx + (int) al * 2 + 1) & 0x20;
                        local94 = esi_1;
                        local112 = al;
                        local112 = al;
                        if (tmpb != 0 || al == 61) {
bb0x80d6830:
                            esi_18 = esi_1 + 1;
                            eax_43 = *(unsigned char*)(esi_1 + 1);
                            al = (unsigned char) eax_43;
                            local94 = esi_18;
                            local112 = al;
                            local117 = esi_18;
                        }
                        else {
                            *(__size32*)(esp_5 - 1148) = esi_1;
                            eax_35 = strlen(esi_1); /* Warning: also results in ecx, edx, esp_1 */
                            local113 = *(esp_5 - 1148);
                            local114 = *(esp_5 - 1152);
                            local133 = esp_1;
                            eax_39 = esi_1 + eax_35 - 1;
                            local118 = eax_39;
                            if (esi_1 + eax_35 - 1 >= esi_1) {
                                do {
                                    eax_76 = local118;
                                    ecx = (int) *eax_76;
                                    edx = *eax_6;
                                    dl = (unsigned char) edx;
                                    tmpb = *(edx + ecx * 2 + 1) & 0x20;
                                    if (tmpb != 0) {
                                        *(__size8*)eax_76 = 0;
                                        eax_57 = eax_76 - 1;
                                        local118 = eax_57;
                                    }
                                } while (eax_76 - 1 < esi_1);
                            }
                            local84 = hid_attr_nodes;
                            local104 = local84;
                            local128 = local84;
                            if (hid_attr_nodes == 0) {
                                goto bb0x80d6770;
                            }
                            *(__size32*)(esp_5 - 1088) = esi_1;
                            *(__size32*)(esp_5 - 1080) = ebx_1;
                            local106 = *(esp_5 - 1080);
                            local107 = *(esp_5 - 1088);
                            do {
                                ebx_11 = local119;
                                st_9 = local120;
                                st1_8 = local121;
                                st2_7 = local122;
                                st3_2 = local123;
                                st4_11 = local124;
                                st5_14 = local125;
                                st6_6 = local126;
                                st7_6 = local127;
                                local81 = local128;
                                *(__size32*)(esp_5 - 1076) = local129;
                                *(unsigned int*)(esp_5 - 1092) = local130;
                                *(unsigned int*)(esp_5 - 1096) = local131;
                                *(__size32*)(esp_5 - 1100) = local132;
                                esp_11 = local133;
                                esi_21 = 0;
                                edi_12 = 0;
                                eax_47 = *(local81 + 8);
                                local134 = esi_21;
                                local135 = edi_12;
                                local136 = st_9;
                                local137 = st1_8;
                                local138 = st2_7;
                                local139 = st3_2;
                                local140 = st4_11;
                                local141 = st5_14;
                                local142 = st6_6;
                                local143 = st7_6;
                                local152 = ebx_11;
                                local153 = esi_21;
                                local154 = edi_12;
                                local155 = st_9;
                                local156 = st1_8;
                                local157 = st2_7;
                                local158 = st3_2;
                                local159 = st4_11;
                                local160 = st5_14;
                                local161 = st6_6;
                                local162 = st7_6;
                                local163 = esp_11;
                                if (eax_47 > 0) {
                                    tmph = eax_47;
                                    do {
                                        esi_2 = local134;
                                        edi_15 = local135;
                                        st_4 = local136;
                                        st1_10 = local137;
                                        st2_10 = local138;
                                        st3_10 = local139;
                                        st4_5 = local140;
                                        st5_4 = local141;
                                        st6_8 = local142;
                                        st7_8 = local143;
                                        ebx_6 = *(local81 + 4);
                                        eax_50 = *(ebx_6 + esi_2 * 48);
                                        *(__size32*)(esp_5 - 1076) = eax_50;
                                        *(__size32*)(esp_5 - 1144) = eax_50;
                                        *(__size32*)(esp_5 - 1148) = ebx_1;
                                        eax_53 = strcmp(ebx_1, eax_50); /* Warning: also results in ecx, edx */
                                        local144 = st_4;
                                        local144 = st_4;
                                        local144 = st_4;
                                        local144 = st_4;
                                        local144 = st_4;
                                        local144 = st_4;
                                        local144 = st_4;
                                        local145 = st1_10;
                                        local145 = st1_10;
                                        local145 = st1_10;
                                        local145 = st1_10;
                                        local145 = st1_10;
                                        local145 = st1_10;
                                        local145 = st1_10;
                                        local146 = st2_10;
                                        local146 = st2_10;
                                        local146 = st2_10;
                                        local146 = st2_10;
                                        local146 = st2_10;
                                        local146 = st2_10;
                                        local146 = st2_10;
                                        local147 = st3_10;
                                        local147 = st3_10;
                                        local147 = st3_10;
                                        local147 = st3_10;
                                        local147 = st3_10;
                                        local147 = st3_10;
                                        local147 = st3_10;
                                        local148 = st4_5;
                                        local148 = st4_5;
                                        local148 = st4_5;
                                        local148 = st4_5;
                                        local148 = st4_5;
                                        local148 = st4_5;
                                        local148 = st4_5;
                                        local149 = st5_4;
                                        local149 = st5_4;
                                        local149 = st5_4;
                                        local149 = st5_4;
                                        local149 = st5_4;
                                        local149 = st5_4;
                                        local149 = st5_4;
                                        local150 = st6_8;
                                        local150 = st6_8;
                                        local150 = st6_8;
                                        local150 = st6_8;
                                        local150 = st6_8;
                                        local150 = st6_8;
                                        local150 = st6_8;
                                        local151 = st7_8;
                                        local151 = st7_8;
                                        local151 = st7_8;
                                        local151 = st7_8;
                                        local151 = st7_8;
                                        local151 = st7_8;
                                        local151 = st7_8;
                                        if ( ~(eax_53 != 0 || *(ebx_6 + esi_2 * 48 + 8) > 7)) {
                                            switch(*(*(local82 + 4) + esi_3 * 48 + 8)) {
                                            case 0:
                                            case 1:
                                                *(__size32*)(esp_5 - 1140) = 0;
                                                *(__size32*)(esp_5 - 1144) = 0;
                                                *(__size32*)(esp_5 - 1148) = esi_1;
                                                eax_63 = strtol(esi_1, 0, 0); /* Warning: also results in ecx, edx */
                                                *(int*)(ebx_6 + esi_2 * 48 + 20) = eax_63;
                                                goto bb0x80d6908;
                                            case 2:
                                                *(__size32*)(esp_5 - 1144) = 0;
                                                *(__size32*)(esp_5 - 1148) = esi_1;
                                                ecx = strtod(esi_1, 0); /* Warning: also results in edx */
                                                *(union { double; __size64; }*)(ebx_6 + esi_2 * 48 + 28) = st_4;
                                                tmpD9 = st_4;
                                                st_5 = st1_10;
                                                st1 = st2_10;
                                                st2 = st3_10;
                                                st3 = st4_5;
                                                st4 = st5_4;
                                                st5 = st6_8;
                                                st6 = st7_8;
                                                st7 = st_4;
                                                local144 = st_5;
                                                local145 = st1;
                                                local146 = st2;
                                                local147 = st3;
                                                local148 = st4;
                                                local149 = st5;
                                                local150 = st6;
                                                local151 = st7;
                                                goto bb0x80d6908;
                                            case 3:
                                                *(__size32*)(esp_5 - 1148) = esi_1;
                                                eax_65 = __strdup(); /* Warning: also results in ecx, edx */
                                                *(int*)(ebx_6 + esi_2 * 48 + 24) = eax_65;
                                                goto bb0x80d6908;
                                            case 4:
                                                *(__size32*)(ebx_6 + esi_2 * 48 + 20) = 1;
                                                goto bb0x80d6908;
                                            case 5:
                                                ecx = *(ebx_6 + esi_2 * 48 + 36);
                                                eax_66 = *ecx;
                                                local164 = eax_66;
                                                if (eax_66 == 0) {
bb0x80d6a29:
                                                    __fprintf_chk();
                                                    exit(1);
                                                }
                                                *(unsigned int*)(esp_5 - 1092) = esi_2 * 48;
                                                *(unsigned int*)(esp_5 - 1096) = ebx_6 + esi_2 * 48;
                                                ebx_8 = 0;
                                                *(__size32*)(esp_5 - 1100) = edi_15;
                                                local165 = ebx_8;
                                                do {
                                                    eax_69 = local164;
                                                    ebx_5 = local165;
                                                    *(__size32*)(esp_5 - 1144) = esi_1;
                                                    *(__size32*)(esp_5 - 1148) = eax_69;
                                                    eax_70 = strcmp(eax_69, esi_1); /* Warning: also results in ecx */
                                                    if (eax_70 == 0) {
                                                        edx = ebx_5;
                                                        dl = (unsigned char) ebx_5;
                                                        *(unsigned int*)(ebx_6 + esi_2 * 48 + 20) = ebx_5;
                                                        *(__size32*)(ebx_6 + esi_2 * 48 + 24) = esi_1;
                                                        goto bb0x80d6908;
                                                    }
                                                    ebx_12 = ebx_5 + 1;
                                                    eax_72 = *(ecx + (ebx_5 + 1) * 4);
                                                    local164 = eax_72;
                                                    local165 = ebx_12;
                                                } while (eax_72 == 0);
                                                goto bb0x80d6a29;
                                            case 6:
                                                abort();
                                            case 7:
                                                *(__size32*)(ebx_6 + esi_2 * 48 + 24) = esi_1;
                                                break;
                                            }
                                        }
bb0x80d6908:
                                        ebx_22 = ebx_6 + esi_2 * 48;
                                        st_10 = local144;
                                        st1_9 = local145;
                                        st2_16 = local146;
                                        st3_5 = local147;
                                        st4_2 = local148;
                                        st5_1 = local149;
                                        st6_7 = local150;
                                        st7_7 = local151;
                                        esp_9 = esp_5 - 1148;
                                        edi_16 = edi_15 + 1;
                                        esi_24 = esi_2 + 1;
                                        local134 = esi_24;
                                        local135 = edi_16;
                                        local136 = st_10;
                                        local137 = st1_9;
                                        local138 = st2_16;
                                        local139 = st3_5;
                                        local140 = st4_2;
                                        local141 = st5_1;
                                        local142 = st6_7;
                                        local143 = st7_7;
                                        local152 = ebx_22;
                                        local153 = esi_24;
                                        local154 = edi_16;
                                        local155 = st_10;
                                        local156 = st1_9;
                                        local157 = st2_16;
                                        local158 = st3_5;
                                        local159 = st4_2;
                                        local160 = st5_1;
                                        local161 = st6_7;
                                        local162 = st7_7;
                                        local163 = esp_9;
                                    } while (edi_15 + 1 < *(local81 + 8));
                                }
                                ebx_17 = local152;
                                esi_23 = local153;
                                edi_11 = local154;
                                st_8 = local155;
                                st1_7 = local156;
                                st2_13 = local157;
                                st3_13 = local158;
                                st4_16 = local159;
                                st5_7 = local160;
                                st6_5 = local161;
                                st7_5 = local162;
                                esp_4 = local163;
                                eax_60 = *local81;
                                local87 = eax_60;
                                local93 = ebx_17;
                                local94 = esi_23;
                                local95 = edi_11;
                                local96 = st_8;
                                local97 = st1_7;
                                local98 = st2_13;
                                local99 = st3_13;
                                local100 = st4_16;
                                local101 = st5_7;
                                local102 = st6_5;
                                local103 = st7_5;
                                local104 = local87;
                                local105 = *(esp_5 - 1076);
                                local108 = *(esp_5 - 1092);
                                local109 = *(esp_5 - 1096);
                                local110 = *(esp_5 - 1100);
                                local113 = *(esp_5 - 1148);
                                local114 = *(esp_5 - 1152);
                                local119 = ebx_17;
                                local120 = st_8;
                                local121 = st1_7;
                                local122 = st2_13;
                                local123 = st3_13;
                                local124 = st4_16;
                                local125 = st5_7;
                                local126 = st6_5;
                                local127 = st7_5;
                                local128 = local87;
                                local129 = *(esp_5 - 1076);
                                local130 = *(esp_5 - 1092);
                                local131 = *(esp_5 - 1096);
                                local132 = *(esp_5 - 1100);
                                local133 = esp_4;
                            } while (eax_60 != 0);
                            goto bb0x80d6770;
                        }
                        goto bb0x80d6830;
                    } while ((unsigned char) eax_43 == 0);
                    goto bb0x80d6770;
                }
                goto bb0x80d6800;
            } while ((unsigned char) edx == 0);
            goto bb0x80d6770;
        }
        goto bb0x80d6790;
    }
bb0x80d6a0c:
    esi_5 = local166;
    eax = eax_12 ^ *20;
    al = (unsigned char) eax;
    if (eax != 0) {
        eax = __stack_chk_fail(); /* Warning: also results in ecx */
        esi_8 = esi_5;
        edi_6 = hid_attr_nodes;
        local167 = esi_8;
        local168 = edi_6;
        if (hid_attr_nodes != 0) {
            do {
                esi_11 = local167;
                edi_9 = local168;
                edx = *(edi_9 + 8);
                local172 = eax;
                local173 = esi_11;
                if (edx > 0) {
                    ebx = *(edi_9 + 4);
                    esi_9 = 0;
                    local169 = esi_9;
                    do {
                        esi_10 = local169;
                        edx = 0;
                        eax = 0;
                        local170 = eax;
                        local171 = edx;
                        do {
                            eax = local170;
                            edx_1 = local171;
                            eax_15 = (int)eax >> 16 ^ eax * 13;
                            ecx = *(unsigned char*)(ebx + edx_1);
                            edx_2 = edx_1 + 1;
                            eax_18 = eax_15 ^ ecx;
                            al = (unsigned char) eax_15 ^ ecx;
                            local170 = eax_18;
                            local171 = edx_2;
                            local172 = eax_18;
                        } while (edx_1 + 1 != 44);
                        *(int*)(ebx + 44) = eax_15 ^ ecx;
                        esi_13 = esi_10 + 1;
                        ebx += 48;
                        local169 = esi_13;
                        local173 = esi_13;
                    } while (*(edi_9 + 8) > esi_10 + 1);
                }
                eax = local172;
                esi_7 = local173;
                edi_7 = *edi_9;
                local167 = esi_7;
                local168 = edi_7;
            } while (edi_7 != 0);
        }
        eax = Concat(pcblibdir, 0x815d1de);
        hid_load_settings_1(*(esp_5 - 0x90c), *(esp_5 - 0x908), *(esp_5 - 0x904), param4, param5, *(esp_5 - 0x8f4), param7, param8, param9, eax, esi_6, edi_2, st_1, st1_1, st2_1, st3_1, st4_1, st5_10, st6_1, st7_1, *(esp_5 - 0x93c), *(esp_5 - 0x938), (unsigned char) pcblibdir, *(esp_5 - 0xdf8), *(esp_5 - 0xdf4), *(esp_5 - 0xdb4));
        if (homedir != 0) {
            eax = Concat(homedir, 0x815d1de);
            hid_load_settings_1(*(esp_5 - 0x90c), *(esp_5 - 0x908), *(esp_5 - 0x904), param4, param5, *(esp_5 - 0x8f4), param7, param8, param9, eax, esi_6, edi_2, st_2, st1_4, st2_19, st3_19, st4_19, st5_11, st6_2, st7_2, *(esp_5 - 0x93c), *(esp_5 - 0x938), (unsigned char) homedir, *(esp_5 - 0xdf8), *(esp_5 - 0xdf4), *(esp_5 - 0xdb4));
        }
        eax = Concat(0x815057a, 0);
        hid_load_settings_1(*(esp_5 - 0x8cc), param11, param12, param13, *(esp_5 - 0x8bc), *(esp_5 - 0x8b4), param16, param17, *(esp_5 - 0x89c), eax, esi_5, edi_1, st_1, st1_1, st2_1, st3_1, st4_1, st5_10, st6_1, st7_1, param5, *(esp_5 - 0x8f8), (unsigned char) homedir, *(esp_5 - 0xdb8), *(esp_5 - 0xdb4), *(esp_5 - 0xd74));
        return;
    }
    return;
}

/** address: 0x080a0bc0 */
__size32 u()
{
    int eax; 		// r24
    int ecx; 		// r25

    __vfprintf_chk();
    eax = *0x816b4a0;
    ecx = fputc(10, eax);
    return ecx;
}

/** address: 0x080d7300 */
__size32 hid_register_hid(union { __size32 *; __size32; } param1)
{
    void *eax; 		// r24
    void *eax_1; 		// r24
    int eax_2; 		// r24{9}
    int eax_5; 		// r24{10}
    void *eax_7; 		// r24{15}
    __size32 ecx; 		// r25
    int edx; 		// r26
    int local3; 		// eax_2{9}
    union { __size32; void *; } local4; 		// eax{17}
    __size32 local5; 		// eax{21}

    if (*param1 != 208) {
        eax = __fprintf_chk(); /* Warning: also results in ecx, edx */
    }
    else {
        if (hid_num_hids <= 0) {
bb0x80d733c:
            ecx = *0x818d0d0;
            hid_num_hids++;
            if (ecx == 0) {
                eax = calloc(1, hid_num_hids * 4 + 8); /* Warning: also results in ecx */
                local4 = eax_1;
                *(union { void *; __size32; }*)0x818d0d0 = eax;
            }
            else {
                eax_7 = realloc(ecx, hid_num_hids * 4 + 8); /* Warning: also results in ecx */
                local4 = eax_7;
                *(union { void *; __size32; }*)0x818d0d0 = eax_7;
            }
            eax = local4;
            *(__size32*)(eax + hid_num_hids * 4 - 4) = param1;
            *(__size32*)(eax + hid_num_hids * 4) = 0;
            local5 = eax;
        }
        else {
            ecx = *0x818d0d0;
            eax = 0;
            local3 = eax;
            local5 = eax;
            if (*ecx != param1) {
                do {
                    eax_2 = local3;
                    eax_5 = eax_2 + 1;
                    local3 = eax_5;
                    local5 = eax_5;
                    if (hid_num_hids > eax_2 + 1) {
bb0x80d7330:
                    }
                    else {
                        goto bb0x80d733c;
                    }
                    goto bb0x80d7330;
                } while (*(ecx + (eax_2 + 1) * 4) == param1);
            }
        }
        eax = local5;
        edx = hid_num_hids;
    }
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x080d77b0 */
void apply_default_hid()
{
}

/** address: 0x080ee510 */
void register_ghid_main_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x080ee4f0 */
void register_ghid_main_flag_list()
{
    hid_register_flags(0x8168940, 2);
    return;
}

/** address: 0x080fec50 */
void register_ghid_netlist_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x08103f60 */
void register_ghid_attribute_list()
{
    hid_register_attributes(0x81695a0, 2);
    return;
}

/** address: 0x08103f20 */
void register_gtk_topwindow_action_list()
{
    hid_register_actions();
    return;
}

/** address: 0x08103f40 */
void register_pcbmenu_attr()
{
    hid_register_attributes(0x8169680, 1);
    return;
}

/** address: 0x08117f90 */
void hid_eps_init()
{
    int ebp; 		// r29
    unsigned int esp; 		// r28

    apply_default_hid(esp - 4, SUBFLAGS32(esp - 4, 24, esp - 28), esp == 28, (unsigned int)(esp - 4) < 24, ebp, 0, 0x816b2c0, pc);
}

/** address: 0x081172c0 */
void register_ps_attribute_list()
{
    hid_register_attributes(0x816ad60, 18);
    return;
}

