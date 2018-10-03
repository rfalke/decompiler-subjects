union { int; char[] *; } global_0x08056f68[9999999];
int next.4089;
int VERBOSE;
int FORCE;
int UPGRADE;
int ERROR;
__size32 WARNINGS;// 4 bytes
int main(int argc, char *argv[]);
void show_help();
__size32 atexit();
void print_error(int param1);
void show_version();
void restore(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], char param13[], char param14[], char param15[], unsigned int param16, __size32 param17, __size32 param18, __size32 param19, int param20, union { FILE *; __size32; } param21, int param22, int param23, char param24[], char param25[], char param26[], char param27[], char param28[], char param29[], unsigned int param30, __size8 param31, int param32);
void list_extensions(__size32 param1, union { __size32; void *; } param2, __size32 param3, union { unsigned char *; __size32; } param4, char param5[], union { char[] *; __size32; } param6, __size8 param7, char param8);
void wget_extension(char param1[]);
__size32 __stat(union { char *; __size32; } param1, union { struct stat *; __size32; } param2);
void unpack_extension(char param1[], char param2[], __size32 param3);
void get_package_name(char param1[], char param2[], union { char[] *; __size32; } param3);
__size32 run_post(char param1[], char param2[], unsigned int param3, __size32 param4, __size32 param5);
void check_extension(union { char[] *; __size32; } param1);
void query_extension(__size32 param1, int param2, union { __size32; void *; } param3, __size32 param4, union { unsigned char *; __size32; } param5, char param6[], char param7[], union { char[] *; __size32; } param8, int param9, int param10, int param11, union { char[] *; __size32; } param12, union { char[] *; __size32; } param13, char param14);
void show_details(__size32 param1, union { __size32; void *; } param2, __size32 param3, union { unsigned char *; __size32; } param4, char param5[], char param6);
void show_license(__size32 param1, union { __size32; void *; } param2, __size32 param3, union { unsigned char *; __size32; } param4, char param5[], char param6);
void source_clean(char param1[], char param2[]);
void source_install(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], char param13[], char param14[], char param15[], char param16[], int param17, int param18, char param19[], union { FILE *; __size32; } param20, int param21, char param22[], char param23[], char param24[], char param25[], char param26[], char param27[], char param28[], char param29[], char param30[], char param31[], __size32 param32, int param33, __size32 param34, int param35, __size32 param36, __size32 param37);
void uninstall(__size32 param1, __size32 param2, char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], __size32 param10);
void test_install(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], char param13[], char param14[], char param15[], char param16[], int param17, int param18, char param19[], char param20[], char param21[], char param22[], char param23[], char param24[], char param25[], char param26[], char param27[], __size32 param28, int param29, __size32 param30, int param31, __size32 param32, __size32 param33);
void binaries_exist(__size32 param1, __size32 param2, int param3, char param4[], __size32 param5, union { char[] *; __size32; } param6);
void bin_install(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], char param13[], char param14[], char param15[], char param16[], int param17, int param18, char param19[], union { FILE *; __size32; } param20, int param21, char param22[], char param23[], char param24[], char param25[], char param26[], char param27[], char param28[], char param29[], char param30[], __size32 param31, int param32, __size32 param33, int param34, __size32 param35, __size32 param36);
__size32 __i686.get_pc_thunk.bx();
__size32 restore_entries_gisman(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], union { __size32; FILE *; } param13, int param14, int param15, char param16[], char param17[], char param18[], __size8 param19, int param20);
__size32 restore_html(char param1[], char param2[], char param3[], char param4[], unsigned int param5, __size32 param6, __size32 param7, __size32 param8, int param9, union { __size32; FILE *; } param10, char param11[], char param12[], char param13[], char param14[], unsigned int param15, __size32 param16);
void su(char param1[], union { char *; __size32; } param2);
void print_done();
__size8 dump_ascii(__size32 param1, union { void *; __size32; } param2, __size32 param3, union { __size32; unsigned char *; } param4, char param5[], union { char *; __size32; } param6, union { char[] *; __size32; } param6, __size8 param8, char param8);
void mkdir_s(char param1[]);
__size32 check_filetype(union { char[] *; __size32; } param1);
void print_warning(char param1[]);
__size32 basename();
__size32 nc_fgets_nb(union { char[] *; __size32; } param1, int param2, union { FILE *; __size32; } param3);
__size8 chop(union { char[] *; __size32; } param1);
void list_binaries(int param1, char param2[], __size32 param3);
__size8 dump_html(union { __size32; FILE *; } param1, int param2, char param3[], union { char *; __size32; } param4, union { char *; __size32; } param5, __size8 param6);
__size8 check_dependencies(char param1[], char param2[], char param1[], union { char[] *; __size32; } param4, __size8 param3, __size32 param6, __size32 param7, __size32 param8);
void print_cfg(char param1[]);
void register_extension(char param1[]);
void register_entries_gisman(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], int param13, int param14, char param15[], char param16[], char param17[], int param18, int param19);
void register_entries_gisman2(char param1[], char param2);
void register_html(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], __size32 param7);
void deregister_extension(char param1[]);
__size32 deregister_entries_gisman(char param1[], __size32 param2, char param3[], char param3[], char param4[], __size32 param6);
void deregister_entries_gisman2(char param1[], char param2[]);
void deregister_html(__size32 param1, char param2[], char param3[], char param4[], __size32 param5);
void dump_plain(char param1, union { char *; __size32; } param2, union { char *; __size32; } param3);
void check_ext_menu(char param1[], char param2[], char param3[], __size32 param4, __size32 param5, __size32 param6);
__size32 new_submenu(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], union { char[] *; __size32; } param7, union { void *; int; } param8, __size32 param9, __size32 param10);
__size32 new_item(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], union { char *; __size32; } param7, __size32 param8, int param9);
void new_ext_html(char param1[], char param2[], char param3[], char param4[], union { unsigned int; char[] *; } param5, unsigned int param6, __size32 param7, __size32 param8);
__size32 nc_fgets_html(__size32 param1, union { __size32; void *; } param2, __size32 param3, union { unsigned char *; __size32; } param4, union { unsigned int; char[] *; } param5, int param6, union { FILE *; __size32; } param7, char param8);
__size32 is_text(union { char[] *; __size32; } param1);
__size32 nc_fgets(union { char[] *; __size32; } param1, int param2, union { FILE *; __size32; } param3);
__size32 vercmp(int param1, int param2, int param3, int param4, int param5, int param6);
void depstr(int param1, char param2[], unsigned char param3, char param4);
__size32 find_pos(union { char[] *; __size32; } param1, __size32 param2, int param3, __size32 param4, __size32 param5);
__size32 delete_str(__size32 param1, int param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6);
void delete_ext_html(char param1[], __size32 param2, char param3[], __size32 param4, __size32 param4, __size32 param5, __size32 param6);
__size32 insert_str(char param1[], char param2[], char param3[], union { int; char[] *; } param4, int param5, __size32 param6);
__size32 is_submenu(union { char[] *; __size32; } param1);

/** address: 0x0805331e */
int main(int argc, char *argv[])
{
    __size8 al; 		// r8
    char dl; 		// r10
    __size32 eax; 		// r24
    char *eax_1; 		// r24{0}
    int eax_10; 		// r24{0}
    int eax_11; 		// r24{0}
    int eax_13; 		// r24{0}
    int eax_14; 		// r24{0}
    int eax_15; 		// r24{0}
    int eax_16; 		// r24{0}
    int eax_19; 		// r24{0}
    int eax_20; 		// r24{0}
    char *eax_21; 		// r24{0}
    char *eax_24; 		// r24{0}
    int eax_27; 		// r24{0}
    union { __size32; char[] *; } eax_29; 		// r24{0}
    union { __size32; char[] *; } eax_31; 		// r24{0}
    int eax_33; 		// r24{0}
    int eax_34; 		// r24{0}
    int eax_35; 		// r24{0}
    int eax_38; 		// r24{0}
    int eax_39; 		// r24{0}
    int eax_4; 		// r24{0}
    int eax_40; 		// r24{0}
    int eax_42; 		// r24{0}
    int eax_43; 		// r24{0}
    int eax_44; 		// r24{0}
    int eax_45; 		// r24{0}
    int eax_5; 		// r24{0}
    int eax_6; 		// r24{0}
    char *eax_7; 		// r24{0}
    int ebx; 		// r27
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    union { __size32; int *; FILE **; char[] **; } esp_1; 		// r28{0}
    union { int; char[] **; __size32 *; } esp_10; 		// r28{0}
    __size32 esp_13; 		// r28{0}
    __size32 esp_16; 		// r28{0}
    __size32 esp_18; 		// r28{0}
    union { int *; FILE **; __size32; char[] **; } esp_2; 		// r28{0}
    union { int; char[] **; __size32 *; } esp_20; 		// r28{0}
    unsigned int esp_21; 		// r28{0}
    int esp_7; 		// r28{0}
    int local49; 		// m[esp - 0x3868]
    __size32 local50; 		// m[esp - 0x383c]
    __size32 local51; 		// m[esp - 0x381c]
    int local55; 		// m[esp - 0x3860]
    int local57; 		// m[esp - 0x387c]
    int local58; 		// m[esp - 0x3880]
    int local60; 		// m[esp_21 - 0x3860]{0}
    int local61; 		// m[esp_21 - 0x3860]{0}
    int local63; 		// m[esp_21 - 0x3860]{0}
    int local66; 		// m[esp_21 - 0x3860]{0}
    int local70; 		// local60{0}
    union { __size32 *; char[] **; int; } local71; 		// esp_10{0}
    union { char[] **; FILE **; int *; __size32; } local72; 		// esp_1{0}
    union { char[] **; __size32; int *; FILE **; } local73; 		// esp{0}

    *(__size32*)(global_0x08056f68 + 0xc338) = 0;
    *(__size32*)(global_0x08056f68 + 0x11358) = 0;
    *(__size32*)(global_0x08056f68 + 0x1135c) = 0;
    *(__size32*)(global_0x08056f68 + 0x11360) = 0;
    *(__size32*)(global_0x08056f68 + 0x11364) = 0;
    *(__size32*)(global_0x08056f68 + 0x15b78) = 0;
    *(__size32*)(global_0x08056f68 + 0x15b7c) = 0;
    *(__size32*)(global_0x08056f68 + 0x11368) = 0;
    memcpy(0x80682e0, 0x8057925, 1);
    memcpy(0x8068ae0, 0x8057925, 1);
    memcpy(0x8069ae0, 0x8057925, 1);
    memcpy(0x806a2e0, 0x8057925, 1);
    memcpy(0x80692e0, 0x8057925, 1);
    memcpy(0x80632c0, 0x8057925, 1);
    memcpy(0x8063ac0, 0x8057925, 1);
    memcpy(0x80642c0, 0x8057925, 1);
    memcpy(0x8064ac0, 0x8057925, 1);
    memcpy(0x80652c0, 0x8057925, 1);
    memcpy(0x8065ac0, 0x8057925, 1);
    memcpy(0x80662c0, 0x8057925, 1);
    memcpy(0x8066ac0, 0x8057925, 1);
    memcpy(0x8067ac0, 0x8057925, 1);
    memcpy(0x80672c0, 0x8057925, 1);
    memcpy(0x806aae0, 0x8057925, 1);
    memcpy(0x806b2e0, 0x8057926, 10);
    memcpy(0x806bae0, 0x8057930, 5);
    getcwd();
    eax = *0x8059260;
    fwrite("\1b[0m", 1, 4, eax);
    malloc(0x800);
    eax = *argv;
    strcpy((esp_21 - 0x3018), eax);
    setvbuf();
    if (argc == 1) {
        show_help();
    }
    atexit();
    local49 = 0;
    local50 = 0;
    local51 = 0;
    *(__size32*)(global_0x08056f68 + 0x22fc) = 0;
    eax_38 = getopt_long(argc, argv, ":i:u:q:d:c:C:t:l:m:o:x:rhVg:b:fvs", 0x8059100, &0);
    local55 = eax_38;
    local70 = local66;
bb0x8053a9b:
    local60 = local70;
    if (local60 == -1) {
bb0x8053aa9:
        if (*(esp_21 - 0x3868) <= 0) {
            print_error(-1);
        }
        if (*(esp_21 - 0x3868) > 1) {
            print_error(-1);
        }
        *(int*)(esp_21 - 0x395c) = esp_21 - 0x3818;
        sprintf(0x80622a0, 0x8057a65);
        putenv();
        if (*(esp_21 - 0x3864) == 1) {
            show_help();
        }
        if (*(esp_21 - 0x3864) == 2) {
            show_version();
        }
        eax_35 = *(global_0x08056f68 + 0xc338);
        if (eax_35 == 0) {
            memcpy(0x80672c0, 0x8057a74, 32);
            mkstemp();
            *(int*)(esp_21 - 0x395c) = 511;
            eax_10 = open(0x80672c0, 64);
            if (eax_10 == -1) {
                eax = __errno_location();
                eax_34 = *eax;
                strerror(eax_34);
                print_error(-30);
            }
        }
        if (*(esp_21 - 0x3864) == 11) {
            if (*(esp_21 - 0x381c) == 0) {
                eax = getenv("GISBASE");
                *(union { char *; unsigned int; }*)(esp_21 - 0x381c) = eax;
                if (eax == 0) {
                    print_error(-1);
                }
            }
            eax_19 = *(global_0x08056f68 + 0xc338);
            if (eax_19 != 0) {
                eax = *0x8059260;
                fprintf(eax, "Path to GRASS is %s.\n", *(esp_21 - 0x381c));
            }
            restore(*(esp_21 - 0x9ae8), *(esp_21 - 0x9ad8), *(esp_21 - 0x92e8), *(esp_21 - 0x92d8), *(esp_21 - 0x8ae8), *(esp_21 - 0x8ad8), *(esp_21 - 0x82e8), *(esp_21 - 0x82b8), *(esp_21 - 0x8288), *(esp_21 - 0x7ae8), *(esp_21 - 0x7ab8), *(esp_21 - 0x7a88), *(esp_21 - 0x72b8), *(esp_21 - 0x7288), *(esp_21 - 0x7278), *(esp_21 - 0x6a50), *(esp_21 - 0x6a34), *(esp_21 - 0x6a30), *(esp_21 - 0x6a2c), *(esp_21 - 0x6a1c), *(esp_21 - 0x6a14), *(esp_21 - 0x6a10), *(esp_21 - 0x69fc), *(esp_21 - 0x69f8), *(esp_21 - 0x61f8), *(esp_21 - 0x59f8), *(esp_21 - 0x51f8), *(esp_21 - 0x49f8), *(esp_21 - 0x4178), *(esp_21 - 0x381c), al, ebx);
            exit(0);
        }
        if (*(esp_21 - 0x3864) == 12) {
            if (*(esp_21 - 0x381c) == 0) {
                eax = getenv("GISBASE");
                *(union { char[] *; unsigned int; }*)(esp_21 - 0x381c) = eax;
                if (eax == 0) {
                    print_error(-1);
                }
            }
            eax_27 = *(global_0x08056f68 + 0xc338);
            if (eax_27 != 0) {
                eax = *0x8059260;
                fprintf(eax, "Path to GRASS is %s.\n", *(esp_21 - 0x381c));
            }
            list_extensions(*(esp_21 - 0x4a18), *(esp_21 - 0x4a08), *(esp_21 - 0x4a04), *(esp_21 - 0x4a00), *(esp_21 - 0x4178), *(esp_21 - 0x381c), al, dl);
            exit(0);
        }
        eax = strstr((esp_21 - 0x1018), 0x8057b15);
        if (eax == 0) {
            eax = strstr((esp_21 - 0x1018), 0x8057b1d);
            if (eax != 0) {
                goto bb0x8053d3e;
            }
bb0x8053dc9:
            eax_20 = *(global_0x08056f68 + 0xc338);
            if (eax_20 != 0) {
                eax = *0x8059260;
                *(int*)(esp_21 - 0x395c) = esp_21 - 0x1018;
                fprintf(eax, "Extension location is '%s'.\n", (esp_21 - 0x1018));
            }
            esp_7 = esp_21 - 0x3964;
            local71 = esp_7;
            if (*(esp_21 - 0x3864) != 10) {
                *(union { int; void *; }*)(esp_21 - 0x3960) = (esp_21 - 0x38d8);
                eax_16 = __stat(esp_21 - 0x1018, (esp_21 - 0x38d8)); /* Warning: also results in esp_13 */
                local71 = esp_13;
                if (eax_16 < 0) {
                    eax = __errno_location();
                    eax_15 = *eax;
                    strerror(eax_15);
                    print_error(-2);
                }
                if ((*(esp_21 - 0x38c8) & 0xf000) == 0x4000) {
                    eax_13 = *(global_0x08056f68 + 0xc338);
                    if (eax_13 != 0) {
                        eax = *0x8059260;
                        esp = fwrite("Extension files stored in a directory.\n", 1, 39, eax);
                        local71 = esp;
                    }
                    goto bb0x805402d;
                }
                eax_11 = *(global_0x08056f68 + 0xc338);
                if (eax_11 != 0) {
                    eax = *0x8059260;
                    *(int*)(esp_21 - 0x395c) = 42;
                    *(int*)(esp_21 - 0x3960) = 1;
                    fwrite("Extension files stored in a package file.\n", 1, 42, eax);
                }
                unpack_extension(*(esp_21 - 0x5550), *(esp_21 - 0x4178), esp_21 - 0x1018);
                opendir();
                eax_33 = readdir();
                local57 = eax_33;
                local58 = 0;
                for(;;) {
                    if (*(esp_21 - 0x387c) == 0) {
bb0x8053ff5:
                        esp_20 = strcpy((esp_21 - 0x101c), *(esp_21 - 0x3834));
                        local71 = esp_20;
                        if (*(esp_21 - 0x3880) == 0) {
                            print_error(-7);
                        }
                        goto bb0x805402d;
                    }
                    eax_42 = strcmp(*(esp_21 - 0x387c) + 11, 0x8057bbf);
                    if (eax_42 != 0) {
                        eax_43 = strcmp(*(esp_21 - 0x387c) + 11, 0x8057bc1);
                        if (eax_43 != 0) {
                            *(int*)(esp_21 - 0x395c) = *(esp_21 - 0x387c) + 11;
                            *(int*)(esp_21 - 0x3960) = 0x80632c0;
                            sprintf(*(esp_21 - 0x3834), 0x8057bc4);
                            __stat(*(esp_21 - 0x3834), (esp_21 - 0x3934));
                            if ((*(esp_21 - 0x3924) & 0xf000) == 0x4000) {
                                *(int*)(esp_21 - 0x3880) = 1;
                                goto bb0x8053ff5;
                            }
                        }
                    }
                    eax_44 = readdir();
                    *(int*)(esp_21 - 0x387c) = eax_44;
                }
            }
bb0x805402d:
            esp_10 = local71;
            if (*(esp_10 + 256) == 10) {
                *(__size32*)(esp_10 + 4) = esp_10 + 0x294c;
                *(__size32*)esp_10 = esp_10 + 0x114c;
                esp = strcpy(*esp_10, *(esp_10 + 4));
                local72 = esp;
bb0x805406d:
                esp_1 = local72;
                if (*(esp_1 + 252) > 0) {
                    if (*(esp_1 + 328) == 0) {
                        *(__size32*)esp_1 = 0x8057ab3;
                        eax = getenv(*esp_1);
                        *(union { char *; __size32; }*)(esp_1 + 328) = eax;
                    }
                    eax = *(esp_1 + 328);
                    *(__size32*)(esp_1 + 12) = eax;
                    eax = *(esp_1 + 296);
                    *(__size32*)(esp_1 + 8) = eax;
                    eax = *(esp_1 + 256);
                    *(__size32*)(esp_1 + 4) = eax;
                    *(__size32*)esp_1 = esp_1 + 0x294c;
                    run_post(*(esp_1 - 0x1014), *(esp_1 - 0x814), *(esp_1 + 4), *(esp_1 + 8), *(esp_1 + 12));
                }
                eax_40 = *(global_0x08056f68 + 0xc338);
                if (eax_40 != 0) {
                    eax = *(global_0x08056f68 + 0x22f8);
                    *(__size32*)(esp_1 + 8) = esp_1 + 0x294c;
                    *(__size32*)(esp_1 + 4) = 0x8057c00;
                    *(__size32*)esp_1 = eax;
                    fprintf(*esp_1, *(esp_1 + 4));
                }
                esp_2 = esp_1;
                local73 = esp_2;
                if (*(esp_1 + 256) != 10) {
                    *(__size32*)(esp_1 + 16) = esp_1 + 284;
                    *(__size32*)(esp_1 + 12) = esp_1 + 288;
                    *(__size32*)(esp_1 + 8) = esp_1 + 292;
                    *(__size32*)(esp_1 + 4) = esp_1 + 0x194c;
                    *(__size32*)esp_1 = esp_1 + 0x294c;
                    esp_18 = esp_1 - 4;
                    check_extension(*esp_1);
                    local73 = esp_18;
                }
                esp = local73;
                if (*(esp + 256) == 5) {
                    ecx = *(esp + 284);
                    edx = *(esp + 288);
                    eax = *(esp + 292);
                    *(__size32*)(esp + 28) = esp + 0x214c;
                    *(__size32*)(esp + 24) = esp + 0x94c;
                    *(__size32*)(esp + 20) = esp + 0x114c;
                    *(__size32*)(esp + 16) = ecx;
                    *(__size32*)(esp + 12) = edx;
                    *(__size32*)(esp + 8) = eax;
                    *(__size32*)(esp + 4) = esp + 0x194c;
                    *(__size32*)esp = esp + 0x294c;
                    query_extension(*(esp - 0x10d4), *(esp - 0x10c8), *(esp - 0x10c4), *(esp - 0x10c0), *(esp - 0x10bc), *(esp - 0x1074), *(esp - 0x814), *(esp + 4), *(esp + 8), *(esp + 12), *(esp + 16), *(esp + 24), *(esp + 28), dl);
                }
                if (*(esp + 256) == 9) {
                    *(__size32*)esp = esp + 0x294c;
                    show_details(*(esp - 0x10b4), *(esp - 0x10a4), *(esp - 0x10a0), *(esp - 0x109c), *(esp - 0x814), dl);
                }
                if (*(esp + 256) == 7) {
                    *(__size32*)esp = esp + 0x294c;
                    show_license(*(esp - 0x10b4), *(esp - 0x10a4), *(esp - 0x10a0), *(esp - 0x109c), *(esp - 0x814), dl);
                }
                if (*(esp + 256) == 6) {
                    *(__size32*)esp = esp + 0x294c;
                    source_clean(*(esp - 0x1014), *(esp - 0x814));
                    *(__size32*)(esp - 4) = 0;
                    exit(*(esp - 4));
                }
                if (*(esp + 328) == 0) {
                    *(__size32*)esp = 0x8057ab3;
                    eax = getenv(*esp);
                    *(union { char *; __size32; }*)(esp + 328) = eax;
                    if (*(esp + 328) == 0) {
                        *(__size32*)(esp + 4) = 0x8057abc;
                        *(__size32*)esp = -1;
                        print_error(*esp);
                    }
                }
                eax_45 = *(global_0x08056f68 + 0xc338);
                if (eax_45 != 0) {
                    eax = *(global_0x08056f68 + 0x22f8);
                    ecx = *(esp + 328);
                    *(__size32*)(esp + 8) = ecx;
                    *(__size32*)(esp + 4) = 0x8057aff;
                    *(__size32*)esp = eax;
                    fprintf(*esp, *(esp + 4));
                }
                *(__size32*)esp = 0x8057c27;
                eax = getenv(*esp);
                *(union { char *; __size32; }*)(esp + 324) = eax;
                if (*(esp + 324) == 0) {
                    edx = *(esp + 328);
                    *(__size32*)(esp + 8) = edx;
                    *(__size32*)(esp + 4) = 0x8057c35;
                    *(__size32*)esp = esp + 0x314c;
                    sprintf(*esp, *(esp + 4));
                    *(__size32*)(esp + 4) = 0x80578de;
                    *(__size32*)esp = esp + 0x314c;
                    %eax = fopen(*esp, *(esp + 4));
                    *(union { FILE *; __size32; }*)(esp + 280) = %eax;
                    if (*(esp + 280) == 0) {
                        *(__size32*)(esp + 4) = 0x8057c4c;
                        *(__size32*)esp = -11;
                        print_error(*esp);
                    }
                    *(__size32*)esp = 16;
                    eax = malloc(*esp);
                    *(union { void *; __size32; }*)(esp + 324) = eax;
                    edx = *(esp + 324);
                    *(__size32*)(esp + 8) = edx;
                    *(__size32*)(esp + 4) = 0x8057c8b;
                    eax = *(esp + 280);
                    *(__size32*)esp = eax;
                    eax = __isoc99_fscanf();
                    *(__size32*)(esp + 248) = eax;
                    eax = *(esp + 280);
                    *(__size32*)esp = eax;
                    fclose(*esp);
                    if (*(esp + 248) <= 0) {
                        *(__size32*)(esp + 4) = 0x8057c4c;
                        *(__size32*)esp = -11;
                        print_error(*esp);
                    }
                }
                if ( ~flags) {
                    *(__size32*)%esp = %eax;
                    strdup();
                    *(__size32*)(%esp + 308) = %eax;
                    *(__size32*)(%esp + 4) = %eax;
                    *(__size32*)%esp = %eax;
                    strtok(*(%esp + 4), *(%esp + 8));
                    *(__size32*)(%esp + 320) = %eax;
                    *(__size32*)(%esp + 4) = %eax;
                    *(__size32*)%esp = 0;
                    strtok(*(%esp + 4), *(%esp + 8));
                    *(__size32*)(%esp + 316) = %eax;
                    *(__size32*)(%esp + 4) = %eax;
                    *(__size32*)%esp = 0;
                    strtok(*(%esp + 4), *(%esp + 8));
                    *(__size32*)(%esp + 312) = %eax;
                    *(__size32*)(%esp + 8) = 10;
                    *(__size32*)(%esp + 4) = 0;
                    *(__size32*)%esp = %eax;
                    strtol();
                    *(__size32*)(%esp + 272) = %eax;
                    *(__size32*)(%esp + 8) = 10;
                    *(__size32*)(%esp + 4) = 0;
                    *(__size32*)%esp = %eax;
                    strtol();
                    *(__size32*)(%esp + 268) = %eax;
                    *(__size32*)(%esp + 8) = 10;
                    *(__size32*)(%esp + 4) = 0;
                    *(__size32*)%esp = %eax;
                    strtol();
                    *(__size32*)(%esp + 264) = %eax;
                    *(__size32*)%esp = 0x800;
                    malloc(*(%esp + 4));
                    *(__size32*)(%esp + 324) = %eax;
                    *(__size32*)(%esp + 16) = %edx;
                    *(__size32*)(%esp + 12) = %edx;
                    *(__size32*)(%esp + 8) = %edx;
                    *(__size32*)(%esp + 4) = %eax;
                    *(__size32*)%esp = %eax;
                    sprintf(*(%esp + 4), *(%esp + 8));
                    if ( ~flags) {
                        *(__size32*)(%esp + 8) = %ecx;
                        *(__size32*)(%esp + 4) = %edx;
                        *(__size32*)%esp = %eax;
                        fprintf(*(%esp + 4), *(%esp + 8));
                    }
                    if ( ~flags) {
                        *(__size32*)(%esp + 4) = 0x8057cb0;
                        *(__size32*)%esp = -11;
                        print_error(*(%esp + 4));
                    }
                }
                *(__size32*)(%esp + 8) = %edx;
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                sprintf(*(%esp + 4), *(%esp + 8));
                if ( ~flags) {
                    *(__size32*)(%esp + 24) = %ebx;
                    *(__size32*)(%esp + 20) = %ecx;
                    *(__size32*)(%esp + 16) = %edx;
                    *(__size32*)(%esp + 12) = %eax;
                    *(__size32*)(%esp + 8) = %eax;
                    *(__size32*)(%esp + 4) = %eax;
                    *(__size32*)%esp = %eax;
                    source_install(*(%esp - 0x71d4), *(%esp - 0x71c4), *(%esp - 0x69d4), *(%esp - 0x69c4), *(%esp - 0x61d4), *(%esp - 0x61c4), *(%esp - 0x59b4), *(%esp - 0x59a4), *(%esp - 0x5974), *(%esp - 0x51b4), *(%esp - 0x51a4), *(%esp - 0x5174), *(%esp - 0x49b4), *(%esp - 0x49a4), *(%esp - 0x4974), *(%esp - 0x4144), *(%esp - 0x4104), *(%esp - 0x40e8), *(%esp - 0x40e4), *(%esp - 0x3900), *(%esp - 0x38ec), *(%esp - 0x38e4), *(%esp - 0x30f4), *(%esp - 0x30f0), *(%esp - 0x30e4), *(%esp - 0x30e0), *(%esp - 0x2810), *(%esp - 0x2010), *(%esp - 0x1810), *(%esp - 0x1010), *(%esp - 0x810), *(%esp + 4), *(%esp + 8), *(%esp + 12), %ebx, %esi, %edi);
                    *(__size32*)%esp = 0;
                    exit(*(%esp + 4));
                }
                if ( ~flags) {
                    *(__size32*)(%esp + 12) = %eax;
                    *(__size32*)(%esp + 8) = %eax;
                    *(__size32*)(%esp + 4) = %eax;
                    *(__size32*)%esp = %eax;
                    uninstall(*(%esp - 0x29cc), *(%esp - 0x29ac), *(%esp - 0x2964), *(%esp - 0x2904), *(%esp - 0x2104), *(%esp - 0x1904), *(%esp - 0x1900), *(%esp - 0x1010), *(%esp - 0x810), %ebx);
                    *(__size32*)%esp = 0;
                    exit(*(%esp + 4));
                }
                if ( ~flags) {
                    *(__size32*)(%esp + 24) = %ebx;
                    *(__size32*)(%esp + 20) = %ecx;
                    *(__size32*)(%esp + 16) = %edx;
                    *(__size32*)(%esp + 12) = %eax;
                    *(__size32*)(%esp + 8) = %eax;
                    *(__size32*)(%esp + 4) = %eax;
                    *(__size32*)%esp = %eax;
                    test_install(*(%esp - 0x61c4), *(%esp - 0x61b4), *(%esp - 0x59c4), *(%esp - 0x59b4), *(%esp - 0x51c4), *(%esp - 0x51b4), *(%esp - 0x49a4), *(%esp - 0x4994), *(%esp - 0x4964), *(%esp - 0x41a4), *(%esp - 0x4194), *(%esp - 0x4164), *(%esp - 0x39a4), *(%esp - 0x3994), *(%esp - 0x3964), *(%esp - 0x3134), *(%esp - 0x30f4), *(%esp - 0x30d8), *(%esp - 0x30d4), *(%esp - 0x28d4), *(%esp - 0x20e4), *(%esp - 0x20e0), *(%esp - 0x20d4), *(%esp - 0x20d0), *(%esp - 0x1810), *(%esp - 0x1010), *(%esp - 0x810), *(%esp + 4), *(%esp + 8), *(%esp + 12), %ebx, %esi, %edi);
                    *(__size32*)%esp = 0;
                    exit(*(%esp + 4));
                }
                if ( ~flags) {
                    *(__size32*)(%esp + 4) = %eax;
                    *(__size32*)%esp = %eax;
                    binaries_exist(*(%esp - 0x894), *(%esp - 0x890), *(%esp - 0x860), *(%esp - 0x810), *(%esp + 4), *(%esp + 8));
                    if ( ~flags) {
                        *(__size32*)(%esp + 28) = %ebx;
                        *(__size32*)(%esp + 24) = %ecx;
                        *(__size32*)(%esp + 20) = %edx;
                        *(__size32*)(%esp + 16) = %eax;
                        *(__size32*)(%esp + 12) = %eax;
                        *(__size32*)(%esp + 8) = %eax;
                        *(__size32*)(%esp + 4) = %eax;
                        *(__size32*)%esp = %eax;
                        bin_install(*(%esp - 0x69e4), *(%esp - 0x69d4), *(%esp - 0x61e4), *(%esp - 0x61d4), *(%esp - 0x59e4), *(%esp - 0x59d4), *(%esp - 0x51c4), *(%esp - 0x51b4), *(%esp - 0x5184), *(%esp - 0x49c4), *(%esp - 0x49b4), *(%esp - 0x4984), *(%esp - 0x41c4), *(%esp - 0x41b4), *(%esp - 0x4184), *(%esp - 0x3954), *(%esp - 0x3914), *(%esp - 0x38f8), *(%esp - 0x38f4), *(%esp - 0x3110), *(%esp - 0x30fc), *(%esp - 0x30f4), *(%esp - 0x2904), *(%esp - 0x2900), *(%esp - 0x28f4), *(%esp - 0x28f0), *(%esp - 0x2010), *(%esp - 0x1810), *(%esp - 0x1010), *(%esp - 0x810), *(%esp + 4), *(%esp + 8), *(%esp + 16), %ebx, %esi, %edi);
                        *(__size32*)%esp = 0;
                        exit(*(%esp + 4));
                    }
                    *(__size32*)(%esp + 8) = %eax;
                    *(__size32*)(%esp + 4) = 0x8057d11;
                    *(__size32*)%esp = -12;
                    print_error(*(%esp + 4));
                }
                *(__size32*)%esp = 0;
                exit(*(%esp + 4));
            }
            *(__size32*)(esp_10 + 4) = esp_10 + 0x114c;
            *(__size32*)esp_10 = esp_10 + 0x294c;
            esp_16 = esp_10 - 4;
            get_package_name(*(esp_10 - 0x1014), *(esp_10 - 0x814), *(esp_10 + 4));
            local72 = esp_16;
            goto bb0x805406d;
        }
bb0x8053d3e:
        wget_extension(*(esp_21 - 0x4178));
        eax_24 = malloc(0x800);
        *(union { char[] *; __size32; }*)(esp_21 - 0x3834) = eax_24;
        strcpy(eax_24, (esp_21 - 0x1018));
        eax_21 = strrchr(eax_24, '/');
        strcpy((esp_21 - 0x1018), eax_21 + 1);
        free(eax_24);
        goto bb0x8053dc9;
    }
    if (local60 == 63) {
        print_error(-1);
    }
    if (local60 == 58) {
        eax = *(global_0x08056f68 + 0x22d8);
        if (eax != 105) {
            eax = *(global_0x08056f68 + 0x22d8);
            if (eax != 117) {
                eax = *(global_0x08056f68 + 0x22d8);
                if (eax != 100) {
                    eax = *(global_0x08056f68 + 0x22d8);
                    if (eax != 99) {
                        eax = *(global_0x08056f68 + 0x22d8);
                        if (eax != 116) {
                            eax = *(global_0x08056f68 + 0x22d8);
                            if (eax != 108) {
                                eax = *(global_0x08056f68 + 0x22d8);
                                if (eax == 114) {
                                    goto bb0x8053738;
                                }
                                eax = *(global_0x08056f68 + 0x22d8);
                                if (eax == 103) {
                                    print_error(-1);
                                }
                                eax = *(global_0x08056f68 + 0x22d8);
                                if (eax == 98) {
                                    print_error(-1);
                                }
                                eax = *(global_0x08056f68 + 0x22d8);
                                if (eax == 98) {
                                    print_error(-1);
                                }
                                eax_39 = *(global_0x08056f68 + 0x22d8);
                                if (eax_39 == 113) {
                                    *(int*)(esp_21 - 0x3864) = 12;
                                    *(int*)(esp_21 - 0x3868)++;
                                    goto bb0x8053aa9;
                                }
                                goto bb0x80537c8;
                            }
                        }
                    }
                }
            }
        }
bb0x8053738:
        print_error(-1);
    }
bb0x80537c8:
    if (local60 != 105) {
        if (local60 != 104 && local60 != 86) {
bb0x805391e:
            if (local60 == 103) {
                eax = *0x8059280;
                eax_4 = strlen(eax);
                eax_7 = malloc(eax_4 + 1);
                *(union { char[] *; __size32; }*)(esp_21 - 0x381c) = eax_7;
                eax_31 = *0x8059280;
                strcpy(eax_7, eax_31);
            }
            if (local60 == 98) {
                eax = *0x8059280;
                eax_6 = strlen(eax);
                eax_1 = malloc(eax_6 + 1);
                *(union { char[] *; __size32; }*)(esp_21 - 0x383c) = eax_1;
                eax_29 = *0x8059280;
                strcpy(eax_1, eax_29);
                *(int*)(esp_21 - 0x3864) = 4;
            }
            if (local60 == 120) {
                eax = *0x8059280;
                strcpy(0x806aae0, eax);
            }
            if (local60 == 102) {
                *(__size32*)(global_0x08056f68 + 0x11360) = 1;
            }
            if (local60 == 118) {
                *(__size32*)(global_0x08056f68 + 0xc338) = 1;
            }
            if (local60 == 115) {
                *(__size32*)(global_0x08056f68 + 0x11368) = 1;
            }
            if (local60 == 111) {
                eax = *0x8059280;
                strcat((esp_21 - 0x3818), eax);
            }
            if (local60 == 67) {
                eax = *0x8059280;
                strcpy(0x806b2e0, eax);
            }
            if (local60 == 109) {
                eax = *0x8059280;
                strcpy(0x806bae0, eax);
            }
            eax_5 = getopt_long(argc, argv, ":i:u:q:d:c:t:l:o:x:rhVg:b:fvs", 0x8059100, &0);
            local63 = eax_5;
            local70 = local63;
            goto bb0x8053a9b;
        }
    }
    *(int*)(esp_21 - 0x3868)++;
    if ((unsigned int)(local60 - 86) > 31) {
bb0x80538e5:
        eax_14 = *(global_0x08056f68 + 0x2318);
        if (eax_14 != 0) {
            eax = *0x8059280;
            strcpy((esp_21 - 0x1018), eax);
            eax = *0x8059280;
            strcpy((esp_21 - 0x1818), eax);
            goto bb0x805391e;
        }
        goto bb0x805391e;
    }
    switch(local61) {
    case 86:
    case 87:
        goto bb0x80538e5;
    case 88:
        goto bb0x80538e5;
    case 89:
        goto bb0x80538e5;
    case 90:
        goto bb0x80538e5;
    case 91:
        goto bb0x80538e5;
    case 92:
        goto bb0x80538e5;
    case 93:
        goto bb0x80538e5;
    case 94:
        goto bb0x80538e5;
    case 95:
        goto bb0x80538e5;
    case 96:
        goto bb0x80538e5;
    case 97:
        goto bb0x80538e5;
    case 98:
        goto bb0x80538e5;
    case 99:
        *(int*)(esp_21 - 0x3864) = 6;
        goto bb0x80538e5;
    case 100:
        *(int*)(esp_21 - 0x3864) = 9;
        goto bb0x80538e5;
    case 101:
        goto bb0x80538e5;
    case 102:
        goto bb0x80538e5;
    case 103:
        goto bb0x80538e5;
    case 104:
        *(int*)(esp_21 - 0x3864) = 1;
        goto bb0x80538e5;
    case 105:
        if (*(esp_21 - 0x3864) != 4) {
            *(int*)(esp_21 - 0x3864) = 3;
            goto bb0x80538e5;
        }
        goto bb0x80538e5;
    case 106:
        goto bb0x80538e5;
    case 107:
        goto bb0x80538e5;
    case 108:
        *(int*)(esp_21 - 0x3864) = 7;
        goto bb0x80538e5;
    case 109:
        goto bb0x80538e5;
    case 110:
        goto bb0x80538e5;
    case 111:
        goto bb0x80538e5;
    case 112:
        goto bb0x80538e5;
    case 113:
        *(int*)(esp_21 - 0x3864) = 5;
        goto bb0x80538e5;
    case 114:
        *(int*)(esp_21 - 0x3864) = 11;
        goto bb0x80538e5;
    case 115:
        goto bb0x80538e5;
    case 116:
        *(int*)(esp_21 - 0x3864) = 8;
        goto bb0x80538e5;
    case 117:
        *(int*)(esp_21 - 0x3864) = 10;
        goto bb0x80538e5;
    }
    *(int*)(esp_21 - 0x3864) = 2;
    goto bb0x80538e5;
}

/** address: 0x08052a50 */
void show_help()
{
    __size32 eax; 		// r24

    eax = *0x8059260;
    fwrite("Usage: gem64 [OPTION] [ACTION] [FILE|DIR]\n", 1, 42, eax);
    eax = *0x8059260;
    fwrite("Install a GRASS extension from FILE or DIR.\n", 1, 44, eax);
    eax = *0x8059260;
    fwrite("Manage (installed) GRASS extension(s).\n", 1, 39, eax);
    eax = *0x8059260;
    fwrite("\nPossible ACTIONs are:\n", 1, 23, eax);
    eax = *0x8059260;
    fwrite("  -i, --install=EXT\tinstall a GRASS extension\n", 1, 46, eax);
    eax = *0x8059260;
    fwrite("  -u, --uninstall=EXT\tremove an extension from GRASS\n", 1, 53, eax);
    eax = *0x8059260;
    fwrite("  -q, --query=EXT\tdisplay information about extension/list installed\n", 1, 69, eax);
    eax = *0x8059260;
    fwrite("  -d, --details=EXT\tdisplay additional details about an extension\n", 1, 66, eax);
    eax = *0x8059260;
    fwrite("  -c, --clean=EXT\tclean extension's source code directories\n", 1, 60, eax);
    eax = *0x8059260;
    fwrite("  -t, --test=EXT\tconfigure and compile extension, but don't install\n", 1, 68, eax);
    eax = *0x8059260;
    fwrite("  -l, --license=EXT\tshow copyright information for an extension\n", 1, 64, eax);
    eax = *0x8059260;
    fwrite("  -r, --restore\t\trecreate HTML links and GIS Manager entries\n", 1, 61, eax);
    eax = *0x8059260;
    fwrite("  -h, --help\t\tdisplay this help and exit\n", 1, 41, eax);
    eax = *0x8059260;
    fwrite("  -V, --version\t\toutput version information and exit\n\n", 1, 54, eax);
    eax = *0x8059260;
    fwrite("\nPossible OPTIONs are:\n", 1, 23, eax);
    eax = *0x8059260;
    fwrite("  -g, --grass=PATH\tpath to GRASS installation dir\n", 1, 50, eax);
    eax = *0x8059260;
    fwrite("  -b, --binary=NAME\tno compilation: use binary files for system NAME\n", 1, 69, eax);
    eax = *0x8059260;
    fwrite("  -f, --force\t\tforce action, regardless of dependencies\n", 1, 56, eax);
    eax = *0x8059260;
    fwrite("  -v, --verbose\t\tdisplay detailed status information\n", 1, 53, eax);
    eax = *0x8059260;
    fwrite("  -s, --skip-config\tskip configure script\n", 1, 42, eax);
    eax = *0x8059260;
    fwrite("  -x, --config-opts=OPTS\tpass OPTS to configure script\n", 1, 55, eax);
    eax = *0x8059260;
    fwrite("  -o, --options=OPTS\toptions to pass to the C compiler/linker\n", 1, 62, eax);
    eax = *0x8059260;
    fwrite("  -C, --config-cmd=CMD\tDefine custom 'configure' command (default=configure)\n", 1, 77, eax);
    eax = *0x8059260;
    fwrite("  -m, --make-cmd=CMD\tDefine custom 'make' command (default=make)\n", 1, 65, eax);
    eax = *0x8059260;
    fwrite("\nWhen run from within a GRASS session, locations of libs, header files\n", 1, 71, eax);
    eax = *0x8059260;
    fwrite("and installation target dir will be assumed to match those of the active\n", 1, 73, eax);
    eax = *0x8059260;
    fwrite("GRASS version. ", 1, 15, eax);
    eax = *0x8059260;
    fwrite("Option -g can be used to override these or install extensions\nfrom outside", 1, 74, eax);
    eax = *0x8059260;
    fwrite("of a GRASS session.\n", 1, 20, eax);
    eax = *0x8059260;
    fwrite("Per default, extensions will be compiled from source and then installed.\n", 1, 73, eax);
    eax = *0x8059260;
    fwrite("If the exension package contains binaries for the user's platform, they can\n", 1, 76, eax);
    eax = *0x8059260;
    fwrite("be installed instead using the -b option. ", 1, 42, eax);
    eax = *0x8059260;
    fwrite("For installation from source code, a C compiler and make tools are needed.\n", 1, 75, eax);
    eax = *0x8059260;
    fwrite("\nExample:\n", 1, 10, eax);
    eax = *0x8059260;
    fwrite("\tgem64 -b macosx --grass=/usr/local/grass-6.4.0 -i myExtension\n", 1, 63, eax);
    eax = *0x8059260;
    fwrite("Installs the MacOS X binaries for 'myExtension' in /usr/local/grass-6.4.0.\n", 1, 75, eax);
    exit(0);
    return;
}

/** address: 0x08054750 */
__size32 atexit()
{
    __size32 eax; 		// r24
    int ebx; 		// r27
    int ecx; 		// r25
    int edx; 		// r26

    __i686.get_pc_thunk.bx();
    eax = *(ebx + 0x4897);
    if (eax != 0) {
    }
    ecx = __cxa_atexit(); /* Warning: also results in edx */
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x08049420 */
void print_error(int param1)
{
    __size32 eax; 		// r24
    char local0[]; 		// m[esp - 0x810]

    vsprintf();
    eax = *0x8059244;
    fprintf(eax, "\1b[1;31m\nERROR:\1b[0m %s", &local0);
    ERROR = param1;
    exit(param1);
    return;
}

/** address: 0x08053170 */
void show_version()
{
    __size32 eax; 		// r24

    eax = *0x8059260;
    fprintf(eax, "gem64 (GRASS extensions manager) %.2f\n", 1.03);
    eax = *0x8059260;
    fwrite("Written by Benjamin Ducke\n", 1, 26, eax);
    eax = *0x8059260;
    fwrite("\nCopyright (C) 2005 Benjamin Ducke\n", 1, 35, eax);
    eax = *0x8059260;
    fwrite("This is free software; see the source for copying conditions.  There is NO\n", 1, 75, eax);
    eax = *0x8059260;
    fwrite("warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n", 1, 76, eax);
    exit(0);
    return;
}

/** address: 0x08052334 */
void restore(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], char param13[], char param14[], char param15[], unsigned int param16, __size32 param17, __size32 param18, __size32 param19, int param20, union { FILE *; __size32; } param21, int param22, int param23, char param24[], char param25[], char param26[], char param27[], char param28[], char param29[], unsigned int param30, __size8 param31, int param32)
{
    __size32 eax; 		// r24
    union { __size32; char *; } eax_1; 		// r24{0}
    union { FILE *; unsigned int; } eax_10; 		// r24{0}
    int eax_11; 		// r24{0}
    __size32 eax_4; 		// r24{0}
    __size32 eax_7; 		// r24{0}
    union { FILE *; unsigned int; } eax_8; 		// r24{0}
    int eax_9; 		// r24{0}
    int esp; 		// r28
    __size32 esp_1; 		// r28{0}
    __size32 esp_2; 		// r28{0}
    union { int *; __size32; } local37; 		// esp{0}

    eax_1 = strdup();
    strtok(eax_1, ".");
    strtok(0, ".");
    strtok(0, ".");
    eax_4 = strtol();
    eax_7 = strtol();
    strtol();
    free(eax_1);
    eax_8 = *0x8059260;
    fwrite("Restoring...", 1, 12, eax_8);
    if ( ~(eax_4 != 6 || eax_7 > 0)) {
        eax_9 = restore_entries_gisman(param1, param2, param3, param4, param5, param6, param8, param9, param11, param12, param13, param14, param21, param22, param23, param25, param26, param28, param31, param32);
        if (VERBOSE != 0) {
            eax_10 = *0x8059260;
            fprintf(eax_10, "\nRestored entries for GIS Manager: %i\n", eax_9);
        }
    }
    eax_11 = restore_html(param5, param7, param10, param15, param16, param17, param18, param19, param20, param21, param24, param25, param27, param28, param30, param32);
    if (VERBOSE != 0) {
        eax = *0x8059260;
        fprintf(eax, "\nRestored links in index.hml: %i\n", eax_11);
    }
    esp_2 = esp - 0x87c;
    local37 = esp_2;
    if (eax_11 > 0) {
        if (VERBOSE == 0) {
            sprintf(&param29, 0x8056d60);
        }
        else {
            sprintf(&param29, 0x8056cd4);
        }
        esp_1 = (esp - 0x880);
        su(param28, esp - 0x810);
        local37 = esp_1;
    }
    esp = local37;
    if (eax_11 == 0) {
        *(__size32*)(esp + 4) = 0x8056df0;
        *(__size32*)esp = -26;
        print_error(*esp);
    }
    print_done();
    if ( ~flags) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x080525fc */
void list_extensions(__size32 param1, union { __size32; void *; } param2, __size32 param3, union { unsigned char *; __size32; } param4, char param5[], union { char[] *; __size32; } param6, __size8 param7, char param8)
{
    __size32 eax; 		// r24
    int eax_12; 		// r24{0}
    int *eax_13; 		// r24{0}
    int eax_4; 		// r24{0}
    union { __size32; FILE *; } eax_6; 		// r24{0}
    FILE *eax_7; 		// r24{0}
    int *eax_9; 		// r24{0}
    int esp; 		// r28
    char local0[]; 		// m[esp - 0x1050]

    eax_4 = *20;
    eax_6 = *0x8059260;
    fprintf(eax_6, "\nExtensions in '%s' (name, version, type, depends):\n", param6);
    sprintf(&param5, 0x8056e4d);
    eax_7 = fopen(&param5, "r");
    if (eax_7 == 0) {
        eax_9 = __errno_location();
        eax_12 = *eax_9;
        if (eax_12 == 2) {
            eax = *0x8059244;
            fwrite("NONE.\n", 1, 6, eax);
            fclose(eax_7);
            exit(0);
        }
        fclose(eax_7);
        eax_13 = __errno_location();
        eax = *eax_13;
        strerror(eax);
        print_error(-29);
    }
    fclose(eax_7);
    dump_ascii(param1, param2, param3, param4, esp - 0x810, 0x805698c, param7, param8, local0);
    eax = eax_4 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804ab6c */
void wget_extension(char param1[])
{
    __size32 eax; 		// r24
    int eax_1; 		// r24{0}
    int eax_10; 		// r24{0}
    union { __size32; FILE *; } eax_5; 		// r24{0}

    eax_1 = *20;
    eax_5 = *0x8059260;
    fwrite("Downloading...", 1, 14, eax_5);
    if (VERBOSE == 0) {
        sprintf(&param1, 0x8054c16);
    }
    else {
        sprintf(&param1, 0x8054c0b);
    }
    eax_10 = system(&param1);
    if (eax_10 == -1) {
        print_error(-20);
    }
    if (eax_10 > 0) {
        print_error(-20);
    }
    print_done();
    eax = eax_1 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08054790 */
__size32 __stat(union { char *; __size32; } param1, union { struct stat *; __size32; } param2)
{
    int eax; 		// r24
    int ecx; 		// r25
    int edx; 		// r26

    __i686.get_pc_thunk.bx();
    eax = stat(3, param1, param2); /* Warning: also results in ecx, edx */
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0804faab */
void unpack_extension(char param1[], char param2[], __size32 param3)
{
    __size32 eax; 		// r24
    int *eax_10; 		// r24{0}
    union { __size32; FILE *; } eax_12; 		// r24{0}
    int eax_14; 		// r24{0}
    __size32 eax_15; 		// r24{0}
    int eax_2; 		// r24{0}
    union { __size32; FILE *; } eax_5; 		// r24{0}
    int eax_7; 		// r24{0}
    char local0[]; 		// m[esp - 0x1060]
    __size32 local10; 		// m[esp - 0x81c]

    eax_2 = *20;
    eax_5 = *0x8059260;
    fwrite("Uncompressing files...", 1, 22, eax_5);
    memcpy(0x80632c0, 0x8055f4f, 28);
    mkstemp();
    eax_7 = open(0x80632c0, 64);
    if (eax_7 == -1) {
        eax_10 = __errno_location();
        eax = *eax_10;
        strerror(eax);
        print_error(-7);
    }
    if (VERBOSE != 0) {
        eax_12 = *0x8059260;
        fprintf(eax_12, "\nUncompressing to: %s.\n", 0x80632c0);
    }
    close(eax_7);
    remove(0x80632c0);
    mkdir_s(param1);
    atexit();
    sprintf(&param2, 0x8055fb2);
    eax_14 = system(&param2);
    if (eax_14 < 0) {
        print_error(-7);
    }
    eax_15 = check_filetype(param3);
    local10 = eax_15;
    if (eax_15 == 0) {
        print_warning(local0);
        local10 = 1;
    }
    if (local10 == 1) {
        if (VERBOSE == 0) {
            basename();
            sprintf(&param2, 0x8056053);
        }
        else {
            basename();
            sprintf(&param2, 0x805603d);
        }
    }
    if (local10 == 2) {
        if (VERBOSE == 0) {
            basename();
            sprintf(&param2, 0x8056068);
        }
        else {
            basename();
            sprintf(&param2, 0x8056068);
        }
    }
    if (local10 == 3) {
        if (VERBOSE == 0) {
            basename();
            sprintf(&param2, 0x8056090);
        }
        else {
            basename();
            sprintf(&param2, 0x805607e);
        }
    }
    if (local10 == 4) {
        if (VERBOSE == 0) {
            basename();
            sprintf(&param2, 0x80560bb);
        }
        else {
            basename();
            sprintf(&param2, 0x80560a6);
        }
    }
    %eax = system(&param2);
    if (%eax < 0) {
        if (local10 == 1) {
            print_error(-7);
        }
        if (local10 == 2) {
            print_error(-7);
        }
        if (local10 == 3) {
            print_error(-7);
        }
        exit(-7);
    }
    print_done();
    eax = eax_2 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08049c27 */
void get_package_name(char param1[], char param2[], union { char[] *; __size32; } param3)
{
    FILE *eax_4; 		// r24{0}
    __size32 eax_6; 		// r24{0}
    int esp; 		// r28

    sprintf(&param2, 0x8054a64);
    eax_4 = fopen(&param2, "r");
    if (eax_4 == 0) {
        print_error(-6);
    }
    eax_6 = nc_fgets_nb(esp - 0x1010, 0x800, eax_4);
    if (eax_6 == 0) {
        fclose(eax_4);
        print_error(-6);
    }
    chop(esp - 0x1010);
    strcpy(param3, &param1);
    *(__size32*)%esp = %eax;
    fclose(*(%esp + 4));
    if ( ~flags) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08052748 */
__size32 run_post(char param1[], char param2[], unsigned int param3, __size32 param4, __size32 param5)
{
    __size8 al; 		// r8
    int eax; 		// r24
    int eax_18; 		// r24{0}
    int ecx; 		// r25
    int edx; 		// r26

    eax_18 = *20;
    if ((unsigned int)(param3 - 3) <= 6) {
        switch(param3) {
        case 3:
            memcpy(0x805f2a0, 0x8056e85, 19);
            goto bb0x805284a;
        case 4:
            memcpy(0x805f2a0, 0x8056e85, 19);
            goto bb0x805284a;
        case 5:
            memcpy(0x805f2a0, 0x8056e98, 17);
            goto bb0x805284a;
        case 6:
            memcpy(0x805f2a0, 0x8056ea9, 17);
            goto bb0x805284a;
        case 7:
            memcpy(0x805f2a0, 0x8056eba, 19);
            goto bb0x805284a;
        case 8:
        case 9:
            memcpy(0x805f2a0, 0x8056ecd, 19);
            goto bb0x805284a;
        }
    }
bb0x805284a:
    putenv();
    if (param5 == 0) {
        memcpy(0x805faa0, 0x8056ef0, 23);
    }
    else {
        sprintf(0x805faa0, 0x8056ee0);
    }
    putenv();
    getcwd();
    al = basename();
    sprintf(&param1, 0x8056f07);
    sprintf(0x8062aa0, 0x8056f11);
    putenv();
    if (param4 != 0) {
        sprintf(0x80602a0, 0x8056f2e);
    }
    else {
        memcpy(0x80602a0, 0x8056f1d, 17);
    }
    putenv();
    sprintf(&param2, 0x8056f3e);
    sprintf(0x8060aa0, 0x8056f41);
    putenv();
    sprintf(&param2, 0x8056f3e);
    sprintf(0x80612a0, 0x8056f4e);
    putenv();
    memcpy(0x8061aa0, 0x8056f5d, 10);
    putenv();
    ecx = atexit(); /* Warning: also results in edx */
    eax = eax_18 ^ *20;
    if (eax != 0) {
        eax = __stack_chk_fail(); /* Warning: also results in ecx, edx */
    }
    return eax; /* WARNING: Also returning: al := al, ecx := ecx, edx := edx */
}

/** address: 0x0804f7e8 */
void check_extension(union { char[] *; __size32; } param1)
{
    __size32 eax; 		// r24
    FILE *eax_1; 		// r24{0}

    eax = *0x8059260;
    fwrite("Checking extension ...", 1, 22, eax);
    strcpy(&0, param1);
    eax = chdir();
    if (eax < 0) {
        %eax = __errno_location();
        eax = *%eax;
        strerror(eax);
        print_error(-2);
    }
    eax_1 = fopen("id", "r");
    if (eax_1 == 0) {
        print_error(-6);
    }
    __isoc99_fscanf();
    eax = strcmp(0x8055ea7, &0);
    if (eax != 0) {
        fclose(eax_1);
        print_error(-6);
    }
    *(__size32*)%esp = %eax;
    fclose(*(%esp + 4));
    *(__size32*)(%esp + 4) = %eax;
    *(__size32*)%esp = 0x8055edb;
    get_package_name(*(%esp - 0x1010), *(%esp - 0x810), *(%esp + 8));
    *(__size32*)(%esp + 4) = %edx;
    *(__size32*)%esp = %eax;
    fopen(*(%esp + 4), *(%esp + 8));
    *(__size32*)(%ebp - 0x814) = %eax;
    if ( ~flags) {
        *(__size32*)(%esp + 4) = 0x8055ee5;
        *(__size32*)%esp = -6;
        print_error(*(%esp + 4));
    }
    *(__size32*)(%esp + 8) = %eax;
    *(__size32*)(%esp + 4) = 0x800;
    *(__size32*)%esp = %eax;
    nc_fgets_nb(*(%esp + 4), *(%esp + 8), *(%esp + 12));
    *(__size32*)%eax = 0;
    *(__size32*)%eax = 0;
    *(__size32*)(%esp + 16) = %ecx;
    *(__size32*)(%esp + 12) = %ecx;
    *(__size32*)(%esp + 8) = %ecx;
    *(__size32*)(%esp + 4) = %edx;
    *(__size32*)%esp = %eax;
    __isoc99_sscanf();
    *(__size32*)(%ebp - 0x810) = %eax;
    if ( ~flags) {
        *(__size32*)%esp = %eax;
        fclose(*(%esp + 4));
        *(__size32*)(%esp + 4) = 0x8055f0c;
        *(__size32*)%esp = -6;
        print_error(*(%esp + 4));
    }
    print_done();
    *(__size32*)%esp = 0x8055f35;
    chdir();
    *(__size32*)%esp = %eax;
    fclose(*(%esp + 4));
    if ( ~flags) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804ff43 */
void query_extension(__size32 param1, int param2, union { __size32; void *; } param3, __size32 param4, union { unsigned char *; __size32; } param5, char param6[], char param7[], union { char[] *; __size32; } param8, int param9, int param10, int param11, union { char[] *; __size32; } param12, union { char[] *; __size32; } param13, char param14)
{
    __size8 al; 		// r8
    char dl; 		// r10
    __size32 eax; 		// r24
    int esp; 		// r28

    eax = basename(); /* Warning: also results in al */
    strcpy(&param7, eax);
    %eax = chdir();
    if (%eax < 0) {
        eax = __errno_location();
        %eax = *eax;
        strerror(%eax);
        print_error(-2);
    }
    eax = *0x8059260;
    fprintf(eax, "\nExtension '%s', version %i.%i.%i\n\n", param8, param9, param10, param11);
    al = dump_ascii(param1, param3, param4, param5, 0x8056210, 0x8056204, al, param14, param6); /* Warning: also results in dl */
    al = dump_ascii(param1, param3, param4, param5, 0x805622e, 0x805621c, al, dl, param6); /* Warning: also results in dl */
    al = dump_ascii(param1, param3, param4, param5, 0x805624a, 0x8056237, al, dl, param6); /* Warning: also results in dl */
    al = dump_ascii(param1, param3, param4, param5, 0x8056265, 0x805624f, al, dl, param6); /* Warning: also results in dl */
    al = dump_ascii(param1, param3, param4, param5, 0x805627a, 0x805626d, al, dl, param6); /* Warning: also results in dl */
    al = dump_ascii(param1, param3, param4, param5, 0x8056287, 0x8056282, al, dl, param6); /* Warning: also results in dl */
    sprintf(&param7, 0x805628c);
    list_binaries(param2, param6, esp - 0x810);
    dump_ascii(param1, param3, param4, param5, 0x805629c, 0x8056292, al, dl, param6);
    eax = *0x8059260;
    fprintf(eax, "Type '%s -d %s' to see more detailed information.\n", param12, param13);
    eax = *0x8059260;
    fprintf(eax, "Type '%s -l %s' to see copyright information.\n", param12, param13);
    system("sh post");
    exit(0);
    return;
}

/** address: 0x08053002 */
void show_details(__size32 param1, union { __size32; void *; } param2, __size32 param3, union { unsigned char *; __size32; } param4, char param5[], char param6)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    char local0[]; 		// m[esp - 0x1050]

    eax = basename(); /* Warning: also results in al */
    strcpy(&param5, eax);
    %eax = chdir();
    if (%eax < 0) {
        eax = __errno_location();
        %eax = *eax;
        strerror(%eax);
        print_error(-2);
    }
    dump_ascii(param1, param2, param3, param4, 0x80577b2, 0x805779d, al, param6, local0);
    system("sh post");
    exit(0);
    return;
}

/** address: 0x080530b9 */
void show_license(__size32 param1, union { __size32; void *; } param2, __size32 param3, union { unsigned char *; __size32; } param4, char param5[], char param6)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    char local0[]; 		// m[esp - 0x1050]

    eax = basename(); /* Warning: also results in al */
    strcpy(&param5, eax);
    %eax = chdir();
    if (%eax < 0) {
        eax = __errno_location();
        %eax = *eax;
        strerror(%eax);
        print_error(-2);
    }
    dump_ascii(param1, param2, param3, param4, 0x80577bf, 0x805779d, al, param6, local0);
    system("sh post");
    exit(0);
    return;
}

/** address: 0x080521a4 */
void source_clean(char param1[], char param2[])
{
    __size32 eax; 		// r24
    int local5; 		// m[esp - 0x1014]

    basename();
    sprintf(&param2, 0x80563af);
    eax = chdir();
    if (eax < 0) {
        print_error(-2);
    }
    eax = *(global_0x08056f68 + 0xc338);
    if (eax == 0) {
        eax = *0x8059260;
        fwrite("Cleaning up...", 1, 14, eax);
        sprintf(&param1, 0x8056c1d);
        eax = system(&param1);
        local5 = eax;
    }
    else {
        eax = *0x8059260;
        fprintf(eax, "Running '%s clean':\n", 0x806bae0);
        sprintf(&param1, 0x8056bf9);
        eax = system(&param1);
        local5 = eax;
    }
    if (local5 == -1) {
        print_error(-9);
    }
    print_done();
    *(__size32*)%esp = 0x80567d4;
    system(*(%esp + 4));
    if ( ~flags) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08050220 */
void source_install(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], char param13[], char param14[], char param15[], char param16[], int param17, int param18, char param19[], union { FILE *; __size32; } param20, int param21, char param22[], char param23[], char param24[], char param25[], char param26[], char param27[], char param28[], char param29[], char param30[], char param31[], __size32 param32, int param33, __size32 param34, int param35, __size32 param36, __size32 param37)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    union { __size32; char *; } eax_15; 		// r24{0}
    __size32 eax_21; 		// r24{0}
    __size32 eax_22; 		// r24{0}
    int eax_24; 		// r24{0}
    int *eax_25; 		// r24{0}
    int eax_27; 		// r24{0}
    __size32 eax_28; 		// r24{0}
    union { __size32; FILE *; } eax_29; 		// r24{0}
    int *eax_3; 		// r24{0}
    int eax_31; 		// r24{0}
    int eax_4; 		// r24{0}
    __size32 eax_40; 		// r24{0}
    union { __size32; FILE *; } eax_41; 		// r24{0}
    int eax_43; 		// r24{0}
    union { __size32; FILE *; } eax_44; 		// r24{0}
    int eax_46; 		// r24{0}
    union { __size32; FILE *; } eax_47; 		// r24{0}
    int eax_49; 		// r24{0}
    int eax_50; 		// r24{0}
    union { __size32; FILE *; } eax_51; 		// r24{0}
    FILE *eax_52; 		// r24{0}
    int *eax_54; 		// r24{0}
    int eax_57; 		// r24{0}
    __size32 eax_59; 		// r24{0}
    __size32 eax_62; 		// r24{0}
    union { __size32; FILE *; } eax_63; 		// r24{0}
    int eax_7; 		// r24{0}
    int esp; 		// r28
    char local0[]; 		// m[esp - 0x50f0]
    char local1[]; 		// m[esp - 0x48f0]
    char local2[]; 		// m[esp - 0x50f4]
    char local3[]; 		// m[esp - 0x48f4]
    int local8; 		// m[esp - 0x2814]

    eax_4 = *20;
    eax_7 = __stat(param33, (esp - 0x288c));
    if (eax_7 < 0) {
        eax_3 = __errno_location();
        eax = *eax_3;
        strerror(eax);
        print_error(-5);
    }
    sprintf(0x80592a0, 0x805635c);
    putenv();
    sprintf(&param31, 0x805636c);
    sprintf(0x8059aa0, 0x8056377);
    putenv();
    sprintf(&param31, 0x8056387);
    sprintf(0x805a2a0, 0x805638e);
    putenv();
    sprintf(0x805eaa0, 0x805639e);
    putenv();
    eax_15 = strdup();
    strtok(eax_15, ".");
    strtok(0, ".");
    strtok(0, ".");
    eax_21 = strtol();
    eax_22 = strtol();
    strtol();
    free(eax_15);
    atexit();
    al = basename();
    sprintf(&param30, 0x80563af);
    eax_24 = chdir();
    if (eax_24 < 0) {
        eax_25 = __errno_location();
        eax = *eax_25;
        strerror(eax);
        print_error(-2);
    }
    eax_27 = *(global_0x08056f68 + 0x11368);
    if (eax_27 == 0) {
        eax_28 = *(global_0x08056f68 + 0xc338);
        if (eax_28 == 0) {
            eax_44 = *0x8059260;
            fwrite("Configuring...", 1, 14, eax_44);
            sprintf(&param27, 0x8056417);
            eax_46 = system(&param27);
            local8 = eax_46;
        }
        else {
            eax_29 = *0x8059260;
            fwrite("Running configure script:\n", 1, 26, eax_29);
            sprintf(&param27, 0x80563ff);
            eax_31 = system(&param27);
            local8 = eax_31;
        }
        if (local8 == -1) {
            print_error(-27);
        }
        if (local8 > 0) {
            print_error(-3);
        }
        print_done();
        print_cfg(param26);
    }
    sprintf(0x805b2a0, 0x805646f);
    putenv();
    sprintf(&param31, 0x8055f03);
    sprintf(0x805baa0, 0x805647f);
    putenv();
    al = dump_html(param20, param21, param26, 0x8056492, 0x8064ac0, al);
    al = dump_html(param20, param21, param26, 0x80564a1, 0x80652c0, al);
    al = dump_html(param20, param21, param26, 0x80564a9, 0x8065ac0, al);
    al = dump_html(param20, param21, param26, 0x80564b4, 0x80662c0, al);
    al = dump_html(param20, param21, param26, 0x80564bc, 0x8066ac0, al);
    sprintf(0x805c2a0, 0x80564c7);
    putenv();
    sprintf(0x805caa0, 0x80564d8);
    putenv();
    sprintf(0x805d2a0, 0x80564e8);
    putenv();
    sprintf(0x805daa0, 0x80564f8);
    putenv();
    sprintf(0x805e2a0, 0x8056508);
    putenv();
    atexit();
    al = check_dependencies(param24, param32, al, param35, param36, param37, local0, local1);
    eax_40 = *(global_0x08056f68 + 0xc338);
    if (eax_40 == 0) {
        eax_47 = *0x8059260;
        fwrite("Compiling...", 1, 12, eax_47);
        sprintf(&param27, 0x8056546);
        eax_49 = system(&param27);
        local8 = eax_49;
    }
    else {
        eax_41 = *0x8059260;
        fprintf(eax_41, "Running '%s':\n", 0x806bae0);
        sprintf(&param27, 0x805652a);
        eax_43 = system(&param27);
        local8 = eax_43;
    }
    if (local8 == -1) {
        eax_50 = *(global_0x08056f68 + 0xc338);
        if (eax_50 == 0) {
            print_error(-9);
        }
    }
    if (local8 > 0) {
        print_error(-4);
    }
    print_done();
    eax_51 = *0x8059260;
    fwrite("Installing...", 1, 13, eax_51);
    eax_52 = fopen("../uninstall", "r");
    if (eax_52 != 0) {
        eax_59 = *(global_0x08056f68 + 0xc338);
        if (eax_59 == 0) {
            sprintf(&param31, 0x80566b0);
            strcpy(0x806a2e0, &param31);
        }
        else {
            sprintf(&param31, 0x8056684);
            strcpy(0x806a2e0, &param31);
        }
        fclose(eax_52);
    }
    else {
        eax_54 = __errno_location();
        eax_57 = *eax_54;
        strerror(eax_57);
        print_warning(param26);
    }
    register_extension(param26);
    check_dependencies(param23, param32, al, param35, param36, param37, local2, local3);
    if ( ~(eax_21 != 6 || eax_22 > 0)) {
        register_entries_gisman(param1, param2, param3, param4, param5, param6, param8, param9, param11, param12, param14, param15, param17, param18, param19, param22, param25, param33, param35);
    }
    register_entries_gisman2(param22, param25);
    register_html(param7, param10, param13, param16, param22, param25, param34);
    eax_62 = *(global_0x08056f68 + 0xc338);
    if (eax_62 == 0) {
        sprintf(&param29, 0x8056760);
    }
    else {
        eax_63 = *0x8059260;
        fprintf(eax_63, "Running '%s install':\n", 0x806bae0);
        sprintf(&param29, 0x80566fc);
    }
    eax = *(global_0x08056f68 + 0xc338);
    if (eax == 0) {
        sprintf(&param28, 0x80567df);
    }
    else {
        memcpy(&param28, 0x80567d4, 11);
    }
    sprintf(&param31, 0x80567f0);
    su(param25, esp - 0x810);
    print_done();
    eax = eax_4 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08051cf4 */
void uninstall(__size32 param1, __size32 param2, char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], __size32 param10)
{
    __size32 eax; 		// r24
    int eax_15; 		// r24{0}
    __size32 eax_2; 		// r24{0}
    int eax_21; 		// r24{0}
    int *eax_22; 		// r24{0}
    int eax_25; 		// r24{0}
    __size32 eax_3; 		// r24{0}
    int eax_4; 		// r24{0}
    union { FILE *; unsigned int; } eax_7; 		// r24{0}
    union { __size32; char *; } eax_9; 		// r24{0}
    int esp; 		// r28
    char local0[]; 		// m[esp - 0x3194]
    __size32 local14; 		// m[esp - 0x1018]

    eax_4 = *20;
    eax_7 = *0x8059260;
    fwrite("Un-installing...", 1, 16, eax_7);
    sprintf(0x805aaa0, 0x8056948);
    putenv();
    eax_9 = strdup();
    strtok(eax_9, ".");
    strtok(0, ".");
    strtok(0, ".");
    eax_2 = strtol();
    eax_3 = strtol();
    strtol();
    free(eax_9);
    atexit();
    deregister_extension(param7);
    if ( ~(eax_2 != 6 || eax_3 > 0)) {
        eax_15 = deregister_entries_gisman(param2, param4, param5, param6, param10, local0);
        if (eax_15 == -1) {
            print_warning(param6);
            memcpy(0x80682e0, 0x805698c, 1);
        }
        if (eax_15 == 0) {
            print_warning(param6);
            memcpy(0x80682e0, 0x805698c, 1);
        }
    }
    deregister_entries_gisman2(param5, param6);
    deregister_html(param1, param3, param5, param6, param10);
    sprintf(&param8, 0x80569be);
    local14 = 0;
    eax_21 = __stat(esp - 0x1010, (esp - 0x108c));
    if (eax_21 < 0) {
        print_warning(param6);
        local14 = 1;
    }
    if (local14 == 0) {
        eax = *(global_0x08056f68 + 0xc338);
        if (eax == 0) {
            sprintf(&param9, 0x8056aec);
            strcpy(0x806a2e0, &param9);
        }
        else {
            sprintf(&param9, 0x8056a40);
            strcpy(0x806a2e0, &param9);
        }
    }
    else {
        eax_22 = __errno_location();
        eax_25 = *eax_22;
        strerror(eax_25);
        print_warning(param6);
    }
    sprintf(&param9, 0x8056bba);
    su(param6, esp - 0x810);
    print_done();
    %eax = eax_4 ^ *20;
    if (%eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0805148a */
void test_install(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], char param13[], char param14[], char param15[], char param16[], int param17, int param18, char param19[], char param20[], char param21[], char param22[], char param23[], char param24[], char param25[], char param26[], char param27[], __size32 param28, int param29, __size32 param30, int param31, __size32 param32, __size32 param33)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    union { __size32; char *; } eax_15; 		// r24{0}
    __size32 eax_21; 		// r24{0}
    __size32 eax_22; 		// r24{0}
    int eax_24; 		// r24{0}
    int *eax_25; 		// r24{0}
    int eax_27; 		// r24{0}
    __size32 eax_28; 		// r24{0}
    union { __size32; FILE *; } eax_29; 		// r24{0}
    int eax_3; 		// r24{0}
    int eax_31; 		// r24{0}
    __size32 eax_40; 		// r24{0}
    union { __size32; FILE *; } eax_41; 		// r24{0}
    int eax_43; 		// r24{0}
    union { __size32; FILE *; } eax_44; 		// r24{0}
    int eax_46; 		// r24{0}
    union { __size32; FILE *; } eax_47; 		// r24{0}
    int eax_49; 		// r24{0}
    int eax_50; 		// r24{0}
    union { __size32; FILE *; } eax_51; 		// r24{0}
    FILE *eax_52; 		// r24{0}
    int *eax_54; 		// r24{0}
    int eax_57; 		// r24{0}
    int eax_6; 		// r24{0}
    int *eax_7; 		// r24{0}
    int esp; 		// r28
    char local0[]; 		// m[esp - 0x40e0]
    char local1[]; 		// m[esp - 0x38e0]
    char local2[]; 		// m[esp - 0x40e4]
    char local3[]; 		// m[esp - 0x38e4]
    int local8; 		// m[esp - 0x1814]

    eax_3 = *20;
    eax_6 = __stat(param29, (esp - 0x188c));
    if (eax_6 < 0) {
        eax_7 = __errno_location();
        eax = *eax_7;
        strerror(eax);
        print_error(-5);
    }
    sprintf(0x80592a0, 0x805635c);
    putenv();
    sprintf(&param27, 0x805636c);
    sprintf(0x8059aa0, 0x8056377);
    putenv();
    sprintf(&param27, 0x8056387);
    sprintf(0x805a2a0, 0x805638e);
    putenv();
    sprintf(0x805eaa0, 0x805639e);
    putenv();
    eax_15 = strdup();
    strtok(eax_15, ".");
    strtok(0, ".");
    strtok(0, ".");
    eax_21 = strtol();
    eax_22 = strtol();
    strtol();
    free(eax_15);
    atexit();
    al = basename();
    sprintf(&param26, 0x80563af);
    eax_24 = chdir();
    if (eax_24 < 0) {
        eax_25 = __errno_location();
        eax = *eax_25;
        strerror(eax);
        print_error(-2);
    }
    eax_27 = *(global_0x08056f68 + 0x11368);
    if (eax_27 == 0) {
        eax_28 = *(global_0x08056f68 + 0xc338);
        if (eax_28 == 0) {
            eax_44 = *0x8059260;
            fwrite("Configuring...", 1, 14, eax_44);
            sprintf(&param25, 0x8056417);
            eax_46 = system(&param25);
            local8 = eax_46;
        }
        else {
            eax_29 = *0x8059260;
            fwrite("Running configure script:\n", 1, 26, eax_29);
            sprintf(&param25, 0x80563ff);
            eax_31 = system(&param25);
            local8 = eax_31;
        }
        if (local8 == -1) {
            print_error(-27);
        }
        if (local8 > 0) {
            print_error(-3);
        }
        print_done();
        print_cfg(param24);
    }
    sprintf(0x805b2a0, 0x805646f);
    putenv();
    sprintf(&param27, 0x8055f03);
    sprintf(0x805baa0, 0x805647f);
    putenv();
    dump_plain(param24, 0x8056492, 0x8064ac0);
    dump_plain(param24, 0x80564a1, 0x80652c0);
    dump_plain(param24, 0x80564a9, 0x8065ac0);
    dump_plain(param24, 0x80564b4, 0x80662c0);
    dump_plain(param24, 0x80564bc, 0x8066ac0);
    sprintf(0x805c2a0, 0x80564c7);
    putenv();
    sprintf(0x805caa0, 0x80564d8);
    putenv();
    sprintf(0x805d2a0, 0x80564e8);
    putenv();
    sprintf(0x805daa0, 0x80564f8);
    putenv();
    sprintf(0x805e2a0, 0x8056508);
    putenv();
    atexit();
    al = check_dependencies(param22, param28, al, param31, param32, param33, local0, local1);
    eax_40 = *(global_0x08056f68 + 0xc338);
    if (eax_40 == 0) {
        eax_47 = *0x8059260;
        fwrite("Compiling...", 1, 12, eax_47);
        sprintf(&param25, 0x8056546);
        eax_49 = system(&param25);
        local8 = eax_49;
    }
    else {
        eax_41 = *0x8059260;
        fprintf(eax_41, "Running '%s':\n", 0x806bae0);
        sprintf(&param25, 0x805652a);
        eax_43 = system(&param25);
        local8 = eax_43;
    }
    if (local8 == -1) {
        eax_50 = *(global_0x08056f68 + 0xc338);
        if (eax_50 == 0) {
            print_error(-9);
        }
    }
    if (local8 > 0) {
        print_error(-4);
    }
    print_done();
    eax_51 = *0x8059260;
    fwrite("Installing...", 1, 13, eax_51);
    eax_52 = fopen("../uninstall", "r");
    if (eax_52 != 0) {
        fclose(eax_52);
    }
    else {
        eax_54 = __errno_location();
        eax_57 = *eax_54;
        strerror(eax_57);
        print_warning(param24);
    }
    register_extension(param24);
    check_dependencies(param21, param28, al, param31, param32, param33, local2, local3);
    if ( ~(eax_21 != 6 || eax_22 > 0)) {
        register_entries_gisman(param1, param2, param3, param4, param5, param6, param8, param9, param11, param12, param14, param15, param17, param18, param19, param20, param23, param29, param31);
    }
    register_entries_gisman2(param20, param23);
    register_html(param7, param10, param13, param16, param20, param23, param30);
    eax = *0x8059260;
    fprintf(eax, "(skipping '%s install')...", 0x806bae0);
    print_done();
    eax = eax_3 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804a92c */
void binaries_exist(__size32 param1, __size32 param2, int param3, char param4[], __size32 param5, union { char[] *; __size32; } param6)
{
    int eax_1; 		// r24{0}
    int eax_11; 		// r24{0}
    int eax_14; 		// r24{0}
    int eax_17; 		// r24{0}
    int eax_21; 		// r24{0}
    int eax_24; 		// r24{0}
    int eax_5; 		// r24{0}
    __size32 eax_8; 		// r24{0}
    int edx; 		// r26
    int esp; 		// r28
    int local0; 		// m[esp - 0x818]
    __size32 local10; 		// param2{0}
    __size32 local11; 		// param1{0}
    __size32 local3; 		// m[esp - 0x890]
    __size32 local4; 		// m[esp - 0x894]
    __size32 local8; 		// local3{0}
    __size32 local9; 		// local4{0}

    eax_5 = *20;
    eax_8 = opendir();
    local10 = param2;
    local11 = param1;
    if (eax_8 != 0) {
        eax_1 = readdir();
        local0 = eax_1;
        param2 = local10;
        param1 = local11;
        local8 = param2;
        local8 = param2;
        local8 = param2;
        local9 = param1;
        local9 = param1;
        local9 = param1;
        while (local0 != 0) {
            eax_11 = strcmp(local0 + 11, 0x8054bbe);
            if (eax_11 == 0) {
bb0x804aa6f:
                local3 = local8;
                local4 = local9;
                eax_24 = readdir();
                local10 = local3;
                local11 = local4;
                local0 = eax_24;
            }
            else {
                eax_14 = strcmp(local0 + 11, 0x8054bc0);
                if (eax_14 == 0) {
                    goto bb0x804aa6f;
                }
                else {
                    eax_17 = strcmp(local0 + 11, 0x8054bc3);
                    if (eax_17 == 0) {
                        goto bb0x804aa6f;
                    }
                    else {
                        local3 = local0 + 11;
                        local4 = param5;
                        sprintf(&param4, 0x8054a64);
                        local8 = local3;
                        local8 = local3;
                        local9 = local4;
                        local9 = local4;
                        __stat(esp - 0x810, (esp - 0x870));
                        if ((param3 & 0xf000) != 0x4000) {
                            goto bb0x804aa6f;
                        }
                        else {
                            eax_21 = strcmp(local0 + 11, param6);
                            if (eax_21 != 0) {
                                goto bb0x804aa6f;
                            }
                            else {
                            }
                        }
                    }
                }
            }
            goto bb0x804aa95;
            param2 = local10;
            param1 = local11;
            local8 = param2;
            local8 = param2;
            local8 = param2;
            local9 = param1;
            local9 = param1;
            local9 = param1;
        }
    }
    else {
    }
bb0x804aa95:
    edx = eax_5 ^ *20;
    if (edx != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08050c67 */
void bin_install(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], char param13[], char param14[], char param15[], char param16[], int param17, int param18, char param19[], union { FILE *; __size32; } param20, int param21, char param22[], char param23[], char param24[], char param25[], char param26[], char param27[], char param28[], char param29[], char param30[], __size32 param31, int param32, __size32 param33, int param34, __size32 param35, __size32 param36)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    union { __size32; char *; } eax_15; 		// r24{0}
    __size32 eax_21; 		// r24{0}
    __size32 eax_22; 		// r24{0}
    int eax_24; 		// r24{0}
    int *eax_25; 		// r24{0}
    int eax_3; 		// r24{0}
    union { __size32; FILE *; } eax_35; 		// r24{0}
    FILE *eax_36; 		// r24{0}
    int *eax_38; 		// r24{0}
    int eax_41; 		// r24{0}
    __size32 eax_43; 		// r24{0}
    __size32 eax_46; 		// r24{0}
    union { __size32; FILE *; } eax_47; 		// r24{0}
    int eax_6; 		// r24{0}
    int *eax_7; 		// r24{0}
    int esp; 		// r28
    char local0[]; 		// m[esp - 0x4900]
    char local1[]; 		// m[esp - 0x4100]
    char local2[]; 		// m[esp - 0x4904]
    char local3[]; 		// m[esp - 0x4104]

    eax_3 = *20;
    eax_6 = __stat(param32, (esp - 0x208c));
    if (eax_6 < 0) {
        eax_7 = __errno_location();
        eax = *eax_7;
        strerror(eax);
        print_error(-5);
    }
    sprintf(0x80592a0, 0x805635c);
    putenv();
    sprintf(&param30, 0x805636c);
    sprintf(0x8059aa0, 0x8056377);
    putenv();
    sprintf(&param30, 0x8056387);
    sprintf(0x805a2a0, 0x805638e);
    putenv();
    sprintf(0x805eaa0, 0x805639e);
    putenv();
    eax_15 = strdup();
    strtok(eax_15, ".");
    strtok(0, ".");
    strtok(0, ".");
    eax_21 = strtol();
    eax_22 = strtol();
    strtol();
    free(eax_15);
    atexit();
    al = basename();
    sprintf(&param29, 0x8056802);
    eax_24 = chdir();
    if (eax_24 < 0) {
        eax_25 = __errno_location();
        eax = *eax_25;
        strerror(eax);
        print_error(-2);
    }
    sprintf(0x805b2a0, 0x805646f);
    putenv();
    sprintf(&param30, 0x8055f03);
    sprintf(0x805baa0, 0x805647f);
    putenv();
    al = dump_html(param20, param21, param26, 0x8056492, 0x8064ac0, al);
    al = dump_html(param20, param21, param26, 0x80564a1, 0x80652c0, al);
    al = dump_html(param20, param21, param26, 0x80564a9, 0x8065ac0, al);
    al = dump_html(param20, param21, param26, 0x80564b4, 0x80662c0, al);
    al = dump_html(param20, param21, param26, 0x80564bc, 0x8066ac0, al);
    sprintf(0x805c2a0, 0x80564c7);
    putenv();
    sprintf(0x805caa0, 0x80564d8);
    putenv();
    sprintf(0x805d2a0, 0x80564e8);
    putenv();
    sprintf(0x805daa0, 0x80564f8);
    putenv();
    sprintf(0x805e2a0, 0x8056508);
    putenv();
    atexit();
    al = check_dependencies(param24, param31, al, param34, param35, param36, local0, local1);
    eax_35 = *0x8059260;
    fwrite("Installing...", 1, 13, eax_35);
    eax_36 = fopen("../uninstall", "r");
    if (eax_36 != 0) {
        eax_43 = *(global_0x08056f68 + 0xc338);
        if (eax_43 == 0) {
            sprintf(&param30, 0x80566b0);
            strcpy(0x806a2e0, &param30);
        }
        else {
            sprintf(&param30, 0x8056684);
            strcpy(0x806a2e0, &param30);
        }
        fclose(eax_36);
    }
    else {
        eax_38 = __errno_location();
        eax_41 = *eax_38;
        strerror(eax_41);
        print_warning(param26);
    }
    register_extension(param26);
    check_dependencies(param23, param31, al, param34, param35, param36, local2, local3);
    if ( ~(eax_21 != 6 || eax_22 > 0)) {
        register_entries_gisman(param1, param2, param3, param4, param5, param6, param8, param9, param11, param12, param14, param15, param17, param18, param19, param22, param25, param32, param34);
    }
    register_entries_gisman2(param22, param25);
    register_html(param7, param10, param13, param16, param22, param25, param33);
    eax_46 = *(global_0x08056f68 + 0xc338);
    if (eax_46 == 0) {
        sprintf(&param28, 0x80568a4);
    }
    else {
        eax_47 = *0x8059260;
        fprintf(eax_47, "Running '%s install':\n", 0x806bae0);
        sprintf(&param28, 0x805683c);
    }
    eax = *(global_0x08056f68 + 0xc338);
    if (eax == 0) {
        sprintf(&param27, 0x80567df);
    }
    else {
        memcpy(&param27, 0x80567d4, 11);
    }
    sprintf(&param30, 0x80567f0);
    su(param25, esp - 0x810);
    print_done();
    eax = eax_3 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0805474a */
__size32 __i686.get_pc_thunk.bx()
{
    __size32 local0; 		// m[esp]

    return local0;
}

/** address: 0x0804d896 */
__size32 restore_entries_gisman(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], union { __size32; FILE *; } param13, int param14, int param15, char param16[], char param17[], char param18[], __size8 param19, int param20)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    int eax_10; 		// r24{0}
    union { __size32; void *; } eax_100; 		// r24{0}
    int eax_101; 		// r24{0}
    FILE *eax_14; 		// r24{0}
    FILE *eax_17; 		// r24{0}
    int *eax_20; 		// r24{0}
    int *eax_23; 		// r24{0}
    __size32 eax_28; 		// r24{0}
    __size32 eax_3; 		// r24{0}
    __size32 eax_31; 		// r24{0}
    __size32 eax_32; 		// r24{0}
    FILE *eax_36; 		// r24{0}
    int eax_39; 		// r24{0}
    int eax_42; 		// r24{0}
    char *eax_45; 		// r24{0}
    __size32 eax_48; 		// r24{0}
    void *eax_49; 		// r24{0}
    int *eax_5; 		// r24{0}
    char *eax_52; 		// r24{0}
    char *eax_55; 		// r24{0}
    int eax_58; 		// r24{0}
    void *eax_61; 		// r24{0}
    union { __size32; char[] *; } eax_64; 		// r24{0}
    __size32 eax_68; 		// r24{0}
    int eax_72; 		// r24{0}
    int eax_75; 		// r24{0}
    FILE *eax_78; 		// r24{0}
    int eax_8; 		// r24{0}
    unsigned int eax_80; 		// r24{0}
    int eax_83; 		// r24{0}
    union { __size32; char *; } eax_86; 		// r24{0}
    __size32 eax_87; 		// r24{0}
    char *eax_88; 		// r24{0}
    __size32 eax_9; 		// r24{0}
    char *eax_91; 		// r24{0}
    char *eax_94; 		// r24{0}
    int eax_97; 		// r24{0}
    union { union { void *; __size32; } *; int; } ebx; 		// r27
    int ecx; 		// r25
    int edx; 		// r26
    int esp_4; 		// r28{0}
    int local10; 		// m[esp - 0x2820]
    unsigned int local11; 		// m[esp - 0x2824]
    __size32 local15; 		// m[esp - 0x2840]
    int local16; 		// m[esp - 0x2880]
    int local17; 		// m[esp - 0x2814]
    int local24; 		// m[esp - 0x2828]
    union { __size32; FILE *; } local32; 		// param13{0}
    int local33; 		// param20{0}
    int local34; 		// m[esp_4 - 0x2814]{0}
    int local35; 		// m[esp_4 - 0x2828]{0}
    __size8 local36; 		// param19{0}
    int local37; 		// ebx{0}
    int local38; 		// param15{0}
    int local39; 		// param14{0}
    union { FILE *; __size32; } local40; 		// m[esp_4 - 0x282c]{0}
    __size32 local41; 		// eax_9{0}
    __size32 local42; 		// eax{0}
    __size32 local5; 		// m[esp - 0x281c]
    unsigned int local6; 		// m[esp - 0x2844]
    union { FILE *; __size32; } local7; 		// m[esp - 0x282c]

    eax_10 = *20;
    sprintf(&param17, 0x805540f);
    local32 = param13;
    local33 = param20;
    local36 = param19;
    local38 = param15;
    local39 = param14;
    eax_14 = fopen(&param17, "r");
    if (eax_14 != 0) {
        memcpy(0x80642c0, 0x8055424, 32);
        mkstemp();
        eax_17 = fopen(0x80642c0, "w+");
        if (eax_17 == 0) {
            eax_20 = __errno_location();
            eax = *eax_20;
            strerror(eax);
            print_error(-21);
        }
        atexit();
        if (VERBOSE == 0) {
            sprintf(&param18, 0x805585c);
        }
        else {
            sprintf(&param18, 0x80557dc);
        }
        strcpy(0x80682e0, &param18);
        sprintf(&param16, 0x8055a33);
        eax_28 = opendir();
        if (eax_28 != 0) {
            local5 = 0;
            local6 = 0;
            for(;;) {
bb0x804dbf2:
                param13 = local32;
                eax_32 = readdir();
                local40 = param13;
                if (eax_32 != 0) {
                    sprintf(esp_4 - 0x1810, 0x8055a49);
                    eax_36 = fopen(esp_4 - 0x1810, "r");
                    local7 = eax_36;
                    eax_39 = strcmp(eax_32 + 11, 0x8055a4f);
                    local32 = *(esp_4 - 0x282c);
                    local32 = *(esp_4 - 0x282c);
                    local32 = *(esp_4 - 0x282c);
                    if (eax_39 == 0) {
bb0x804db86:
                        fclose(eax_36);
                    }
                    else {
                        eax_42 = strcmp(eax_32 + 11, 0x8055a51);
                        if (eax_42 != 0) {
                            if (eax_36 != 0) {
                                for(;;) {
                                    eax_52 = fgets(esp_4 - 0x810, 0x800, eax_36);
                                    if (eax_52 == 0) {
                                        break;
                                    }
                                    *(__size32*)(esp_4 - 0x281c)++;
                                }
                                *(unsigned int*)(esp_4 - 0x2844)++;
                                fclose(eax_36);
                                goto bb0x804dbf2;
                            }
                            else {
                                fclose(eax_36);
                                goto bb0x804dbf2;
                            }
                            goto bb0x804dbf2;
                        }
                        else {
                            goto bb0x804db86;
                        }
                        continue;
                    }
                    continue;
                }
            }
            closedir();
            local10 = 0;
            for(;;) {
                eax_45 = fgets(esp_4 - 0x810, 0x800, eax_14);
                if (eax_45 == 0) {
                    break;
                }
                *(int*)(esp_4 - 0x2820)++;
            }
            if (*(esp_4 - 0x2820) != 0) {
                rewind();
                eax_49 = calloc(*(esp_4 - 0x281c) + *(esp_4 - 0x281c) + *(esp_4 - 0x2844) * 5 + *(esp_4 - 0x2820) + 1, 4);
                local11 = 0;
                while (*(esp_4 - 0x281c) + *(esp_4 - 0x281c) + *(esp_4 - 0x2844) * 5 + *(esp_4 - 0x2820) + 1 > *(int*)(esp_4 - 0x2824)) {
                    *(__size32*)(*(esp_4 - 0x2824) * 4 + eax_49) = 0;
                    *(unsigned int*)(esp_4 - 0x2824)++;
                }
                *(unsigned int*)(esp_4 - 0x2824) = 0;
                for(;;) {
                    param20 = local33;
                    eax_55 = fgets(esp_4 - 0x810, 0x800, eax_14); /* Warning: also results in ecx, edx */
                    local37 = param20;
                    if (eax_55 != 0) {
                        ebx = *(esp_4 - 0x2824) * 4 + eax_49;
                        eax_58 = strlen(esp_4 - 0x810);
                        local33 = ebx;
                        eax_61 = malloc(eax_58 + 1);
                        *(union { void *; __size32; }*)ebx = eax_61;
                        eax_64 = *(*(esp_4 - 0x2824) * 4 + eax_49);
                        strcpy(eax_64, esp_4 - 0x810);
                        *(unsigned int*)(esp_4 - 0x2824)++;
                    }
                }
                *(__size32*)(*(esp_4 - 0x2824) * 4 + eax_49) = 0;
                check_ext_menu(param7, param9, param11, eax_49, ecx, edx);
                opendir();
                local15 = 0;
                for(;;) {
bb0x804dfd8:
                    param19 = local36;
                    ebx = local37;
                    param15 = local38;
                    param14 = local39;
                    *(union { __size32; FILE *; }*)(esp_4 - 0x282c) = local40;
                    eax_68 = readdir();
                    local34 = param15;
                    local35 = param14;
                    local36 = param19;
                    local36 = param19;
                    local36 = param19;
                    local37 = ebx;
                    local37 = ebx;
                    local37 = ebx;
                    local38 = param15;
                    local38 = param15;
                    local38 = param15;
                    local39 = param14;
                    local39 = param14;
                    local39 = param14;
                    local40 = *(esp_4 - 0x282c);
                    local40 = *(esp_4 - 0x282c);
                    if (eax_68 != 0) {
                        local16 = eax_68 + 11;
                        sprintf(esp_4 - 0x1810, 0x8055a49);
                        eax_72 = strcmp(eax_68 + 11, 0x8055a4f);
                        if (eax_72 != 0) {
                            eax_75 = strcmp(eax_68 + 11, 0x8055a51);
                            if (eax_75 == 0) {
                                goto bb0x804dfd8;
                            }
                            else {
                                eax_78 = fopen(esp_4 - 0x1810, "r");
                                *(union { FILE *; __size32; }*)(esp_4 - 0x282c) = eax_78;
                                local40 = *(esp_4 - 0x282c);
                                local40 = *(esp_4 - 0x282c);
                                if (eax_78 == 0) {
                                    goto bb0x804dfd8;
                                }
                                else {
                                    *(unsigned int*)(esp_4 - 0x2824) = 1;
                                    for(;;) {
bb0x804df93:
                                        *(int*)(esp_4 - 0x2814) = local34;
                                        *(int*)(esp_4 - 0x2828) = local35;
                                        eax_83 = nc_fgets_nb(esp_4 - 0x810, 0x800, eax_78); /* Warning: also results in al */
                                        local34 = *(esp_4 - 0x2814);
                                        if (eax_83 != 0) {
                                            if (*(esp_4 - 0x2824) != 1) {
                                                *(int*)(esp_4 - 0x2880) = *(esp_4 - 0x2828);
                                                eax_101 = new_item(param2, param4, param6, param8, param10, param12, esp_4 - 0x810, eax_49, *(esp_4 - 0x2828)); /* Warning: also results in al */
                                                *(int*)(esp_4 - 0x2828) = eax_101;
                                                local35 = *(esp_4 - 0x2828);
                                                if (eax_101 < 0) {
                                                    goto bb0x804dfc1;
                                                }
                                                *(unsigned int*)(esp_4 - 0x2824)++;
                                                *(__size32*)(esp_4 - 0x2840)++;
                                            }
                                            else {
                                                eax_88 = strrchr(esp_4 - 0x810, ']');
                                                eax_91 = strchr(esp_4 - 0x810, '[');
                                                local17 = eax_88 - eax_91;
                                                ebx = eax_88 - eax_91;
                                                eax_94 = strchr(esp_4 - 0x810, '[');
                                                local34 = *(esp_4 - 0x2814);
                                                ecx = strncpy((esp_4 - 0x1010), eax_94 + 1, eax_88 - eax_91); /* Warning: also results in edx */
                                                *(__size8*)(esp_4 + eax_88 - eax_91 - 0x1011) = 0;
                                                eax_97 = new_submenu(param1, param3, param5, param8, param10, param12, esp_4 - 0x810, eax_49, ecx, edx);
                                                local24 = eax_97;
                                                local35 = *(esp_4 - 0x2828);
                                                if (eax_97 < 0) {
                                                }
                                                else {
                                                    *(unsigned int*)(esp_4 - 0x2824)++;
                                                    *(__size32*)(esp_4 - 0x2840)++;
                                                    goto bb0x804df93;
                                                }
                                            }
                                        }
                                        else {
                                            goto bb0x804dfbb;
                                        }
bb0x804dfc1:
                                        fclose(eax_78);
                                        local36 = al;
                                        local37 = ebx;
                                        local38 = *(esp_4 - 0x2814);
                                        local39 = *(esp_4 - 0x2828);
                                        goto bb0x804dfd8;
                                    }
bb0x804dfbb:
                                    goto bb0x804dfc1;
                                }
                                goto bb0x804dfd8;
                            }
                            goto bb0x804dfd8;
                        }
                    }
                }
                closedir();
                *(unsigned int*)(esp_4 - 0x2824) = 0;
                eax_80 = *(*(esp_4 - 0x2824) * 4 + eax_49);
                while (eax_80 != 0) {
                    eax_86 = *(*(esp_4 - 0x2824) * 4 + eax_49);
                    fprintf(eax_17, eax_86);
                    *(unsigned int*)(esp_4 - 0x2824)++;
                    eax_80 = *(*(esp_4 - 0x2824) * 4 + eax_49);
                }
                fflush();
                fclose(eax_14);
                fclose(eax_17);
                *(unsigned int*)(esp_4 - 0x2824) = 0;
                while (*(esp_4 - 0x281c) + *(esp_4 - 0x281c) + *(esp_4 - 0x2844) * 5 + *(esp_4 - 0x2820) + 1 > *(int*)(esp_4 - 0x2824)) {
                    eax_100 = *(*(esp_4 - 0x2824) * 4 + eax_49);
                    free(eax_100);
                    *(unsigned int*)(esp_4 - 0x2824)++;
                }
                free(eax_49);
                eax_87 = *(esp_4 - 0x2840);
                local41 = eax_87;
            }
            else {
                eax_48 = 0;
                local41 = eax_48;
            }
        }
        else {
            eax_31 = 0;
            local41 = eax_31;
        }
    }
    else {
        eax_5 = __errno_location();
        eax_8 = *eax_5;
        if (eax_8 != 2) {
            fclose(eax_14);
            eax_23 = __errno_location();
            eax = *eax_23;
            strerror(eax);
            print_error(-21);
        }
        eax_3 = 0;
        local41 = eax_3;
    }
    eax_9 = local41;
    edx = eax_10 ^ *20;
    local42 = eax_9;
    if (edx != 0) {
        eax = __stack_chk_fail();
        local42 = eax;
    }
    eax = local42;
    return eax;
}

/** address: 0x0804f026 */
__size32 restore_html(char param1[], char param2[], char param3[], char param4[], unsigned int param5, __size32 param6, __size32 param7, __size32 param8, int param9, union { __size32; FILE *; } param10, char param11[], char param12[], char param13[], char param14[], unsigned int param15, __size32 param16)
{
    __size32 eax; 		// r24
    FILE *eax_10; 		// r24{0}
    int *eax_13; 		// r24{0}
    int eax_16; 		// r24{0}
    __size32 eax_17; 		// r24{0}
    FILE *eax_19; 		// r24{0}
    int *eax_22; 		// r24{0}
    __size32 eax_28; 		// r24{0}
    __size32 eax_31; 		// r24{0}
    __size32 eax_32; 		// r24{0}
    int eax_36; 		// r24{0}
    int eax_39; 		// r24{0}
    int *eax_4; 		// r24{0}
    int eax_42; 		// r24{0}
    char *eax_45; 		// r24{0}
    __size32 eax_48; 		// r24{0}
    void *eax_49; 		// r24{0}
    __size32 eax_5; 		// r24{0}
    char *eax_52; 		// r24{0}
    int eax_55; 		// r24{0}
    void *eax_58; 		// r24{0}
    int eax_6; 		// r24{0}
    union { char[] *; int; } eax_61; 		// r24{0}
    __size32 eax_65; 		// r24{0}
    int eax_69; 		// r24{0}
    int eax_72; 		// r24{0}
    int eax_75; 		// r24{0}
    FILE *eax_79; 		// r24{0}
    unsigned int eax_81; 		// r24{0}
    char *eax_84; 		// r24{0}
    union { __size32; char *; } eax_88; 		// r24{0}
    __size32 eax_89; 		// r24{0}
    char *eax_90; 		// r24{0}
    union { __size32; union { void *; __size32; } *; } ebx; 		// r27
    int edx; 		// r26
    int esp_4; 		// r28{0}
    unsigned int local12; 		// m[esp - 0x2820]
    __size32 local13; 		// m[esp - 0x283c]
    union { FILE *; __size32; } local14; 		// m[esp - 0x282c]
    __size32 local15; 		// m[esp - 0x2844]
    __size32 local16; 		// m[esp - 0x2848]
    __size32 local17; 		// m[esp - 0x284c]
    unsigned int local27; 		// param5{0}
    int local28; 		// param9{0}
    __size32 local29; 		// param16{0}
    __size32 local30; 		// ebx{0}
    union { __size32; FILE *; } local31; 		// param10{0}
    int local32; 		// m[esp_4 - 0x2834]{0}
    __size32 local33; 		// param8{0}
    __size32 local34; 		// param7{0}
    __size32 local35; 		// param6{0}
    unsigned int local36; 		// m[esp_4 - 0x2868]{0}
    __size32 local37; 		// eax_5{0}
    __size32 local38; 		// eax{0}
    unsigned int local5; 		// m[esp - 0x286c]
    unsigned int local6; 		// m[esp - 0x2868]
    int local7; 		// m[esp - 0x2840]
    int local8; 		// m[esp - 0x2834]
    int local9; 		// m[esp - 0x281c]

    eax_6 = *20;
    sprintf(&param13, 0x8055c7b);
    local27 = param5;
    local28 = param9;
    local29 = param16;
    local31 = param10;
    local33 = param8;
    local34 = param7;
    local35 = param6;
    eax_10 = fopen(&param13, "r");
    if (eax_10 != 0) {
        memcpy(0x8067ac0, 0x8055cb4, 32);
        mkstemp();
        eax_19 = fopen(0x8067ac0, "w+");
        if (eax_19 == 0) {
            eax_22 = __errno_location();
            eax = *eax_22;
            strerror(eax);
            print_error(-24);
        }
        if (VERBOSE == 0) {
            local6 = param15;
            *(unsigned int*)(esp_4 - 0x286c) = 0x80672c0;
            sprintf(&param14, 0x8055da0);
            local27 = *(esp_4 - 0x2868);
        }
        else {
            local5 = param15;
            sprintf(&param14, 0x8055d54);
        }
        param5 = local27;
        strcpy(0x80692e0, &param14);
        local36 = param5;
        atexit();
        sprintf(&param12, 0x8055df1);
        eax_28 = opendir();
        if (eax_28 != 0) {
            local7 = 0;
            for(;;) {
bb0x804f304:
                param9 = local28;
                eax_32 = readdir();
                local28 = param9;
                local28 = param9;
                local32 = param9;
                if (eax_32 != 0) {
                    sprintf(&param11, 0x8055e04);
                    eax_36 = strcmp(eax_32 + 11, 0x8055e0a);
                    if (eax_36 != 0) {
                        eax_39 = strcmp(eax_32 + 11, 0x8055e0c);
                        if (eax_39 == 0) {
                            goto bb0x804f304;
                        }
                        else {
                            eax_42 = opendir();
                            local8 = eax_42;
                            local28 = *(esp_4 - 0x2834);
                            local28 = *(esp_4 - 0x2834);
                            if (eax_42 == 0) {
                                goto bb0x804f304;
                            }
                            else {
                                *(int*)(esp_4 - 0x2840)++;
                                closedir();
                                goto bb0x804f304;
                            }
                            goto bb0x804f304;
                        }
                        goto bb0x804f304;
                    }
                }
            }
            closedir();
            local9 = 0;
            for(;;) {
                eax_45 = fgets(&param14, 0x800, eax_10);
                if (eax_45 == 0) {
                    break;
                }
                *(int*)(esp_4 - 0x281c)++;
            }
            if (*(esp_4 - 0x281c) != 0) {
                rewind();
                eax_49 = calloc(*(esp_4 - 0x281c) + *(esp_4 - 0x2840) + 10, 4);
                local12 = 0;
                while (*(esp_4 - 0x281c) + *(esp_4 - 0x2840) + 10 > *(int*)(esp_4 - 0x2820)) {
                    *(__size32*)(*(esp_4 - 0x2820) * 4 + eax_49) = 0;
                    *(unsigned int*)(esp_4 - 0x2820)++;
                }
                *(unsigned int*)(esp_4 - 0x2820) = 0;
                for(;;) {
                    param16 = local29;
                    eax_52 = fgets(&param14, 0x800, eax_10);
                    local30 = param16;
                    if (eax_52 != 0) {
                        ebx = *(esp_4 - 0x2820) * 4 + eax_49;
                        eax_55 = strlen(&param14);
                        local29 = ebx;
                        eax_58 = malloc(eax_55 + 1);
                        *(union { void *; __size32; }*)ebx = eax_58;
                        eax_61 = *(*(esp_4 - 0x2820) * 4 + eax_49);
                        strcpy(eax_61, &param14);
                        *(unsigned int*)(esp_4 - 0x2820)++;
                    }
                }
                *(__size32*)(*(esp_4 - 0x2820) * 4 + eax_49) = 0;
                opendir();
                local13 = 0;
                for(;;) {
bb0x804f6cd:
                    ebx = local30;
                    param10 = local31;
                    *(int*)(esp_4 - 0x2834) = local32;
                    param8 = local33;
                    param7 = local34;
                    param6 = local35;
                    *(unsigned int*)(esp_4 - 0x2868) = local36;
                    eax_65 = readdir();
                    local30 = ebx;
                    local30 = ebx;
                    local30 = ebx;
                    local30 = ebx;
                    local30 = ebx;
                    local31 = param10;
                    local31 = param10;
                    local31 = param10;
                    local32 = *(esp_4 - 0x2834);
                    local32 = *(esp_4 - 0x2834);
                    local33 = param8;
                    local33 = param8;
                    local33 = param8;
                    local33 = param8;
                    local34 = param7;
                    local34 = param7;
                    local34 = param7;
                    local34 = param7;
                    local35 = param6;
                    local35 = param6;
                    local35 = param6;
                    local35 = param6;
                    local36 = *(esp_4 - 0x2868);
                    local36 = *(esp_4 - 0x2868);
                    local36 = *(esp_4 - 0x2868);
                    local36 = *(esp_4 - 0x2868);
                    local36 = *(esp_4 - 0x2868);
                    if (eax_65 != 0) {
                        sprintf(esp_4 - 0x2810, 0x8055e04);
                        eax_69 = strcmp(eax_65 + 11, 0x8055e0a);
                        if (eax_69 != 0) {
                            eax_72 = strcmp(eax_65 + 11, 0x8055e0c);
                            if (eax_72 == 0) {
                                goto bb0x804f6cd;
                            }
                            else {
                                eax_75 = opendir();
                                *(int*)(esp_4 - 0x2834) = eax_75;
                                local32 = *(esp_4 - 0x2834);
                                local32 = *(esp_4 - 0x2834);
                                local32 = *(esp_4 - 0x2834);
                                local32 = *(esp_4 - 0x2834);
                                if (eax_75 == 0) {
                                    goto bb0x804f6cd;
                                }
                                else {
                                    closedir();
                                    sprintf((esp_4 - 0x1810), 0x8055e0f);
                                    eax_79 = fopen(esp_4 - 0x1810, "r");
                                    local14 = eax_79;
                                    local31 = *(esp_4 - 0x282c);
                                    local31 = *(esp_4 - 0x282c);
                                    local31 = *(esp_4 - 0x282c);
                                    if (eax_79 == 0) {
                                        goto bb0x804f6cd;
                                    }
                                    else {
                                        local15 = 0;
                                        local16 = 0;
                                        local17 = 0;
                                        *(unsigned int*)(esp_4 - 0x2820) = 0;
                                        local33 = *(esp_4 - 0x2844);
                                        local33 = *(esp_4 - 0x2844);
                                        local34 = *(esp_4 - 0x2848);
                                        local34 = *(esp_4 - 0x2848);
                                        local35 = *(esp_4 - 0x284c);
                                        local35 = *(esp_4 - 0x284c);
                                        do {
                                            eax_84 = fgets(esp_4 - 0x810, 0x800, eax_79);
                                            if (eax_84 != 0) {
                                                eax_90 = strstr(esp_4 - 0x810, 0x8055e1d);
                                            }
bb0x804f611:
                                            if (*(esp_4 - 0x2820) == 0) {
                                                goto bb0x804f6cd;
                                            }
                                            else {
                                                strchr(esp_4 - 0x810, '(');
                                                __isoc99_sscanf();
                                                ebx = eax_65 + 11;
                                                *(unsigned int*)(esp_4 - 0x2868) = 0;
                                                *(unsigned int*)(esp_4 - 0x286c) = 0;
                                                new_ext_html(param1, param2, param3, param4, eax_65 + 11, eax_49, 0, 0);
                                                local30 = ebx;
                                                local36 = *(esp_4 - 0x2868);
                                                *(__size32*)(esp_4 - 0x283c)++;
                                                fclose(eax_79);
                                                goto bb0x804f6cd;
                                            }
                                            goto bb0x804f6cd;
                                        } while (eax_90 == 0);
                                        *(unsigned int*)(esp_4 - 0x2820) = 1;
                                        goto bb0x804f611;
                                    }
                                    goto bb0x804f6cd;
                                }
                                goto bb0x804f6cd;
                            }
                            goto bb0x804f6cd;
                        }
                    }
                }
                closedir();
                *(unsigned int*)(esp_4 - 0x2820) = 0;
                eax_81 = *(*(esp_4 - 0x2820) * 4 + eax_49);
                while (eax_81 != 0) {
                    eax_88 = *(*(esp_4 - 0x2820) * 4 + eax_49);
                    fprintf(eax_19, eax_88);
                    *(unsigned int*)(esp_4 - 0x2820)++;
                    eax_81 = *(*(esp_4 - 0x2820) * 4 + eax_49);
                }
                fflush();
                fclose(eax_10);
                fclose(eax_19);
                *(unsigned int*)(esp_4 - 0x2820) = 0;
                while (*(esp_4 - 0x281c) + *(esp_4 - 0x2840) + 10 > *(int*)(esp_4 - 0x2820)) {
                    eax = *(*(esp_4 - 0x2820) * 4 + eax_49);
                    free(eax);
                    *(unsigned int*)(esp_4 - 0x2820)++;
                }
                free(eax_49);
                eax_89 = *(esp_4 - 0x283c);
                local37 = eax_89;
            }
            else {
                eax_48 = 0;
                local37 = eax_48;
            }
        }
        else {
            eax_31 = 0;
            local37 = eax_31;
        }
    }
    else {
        eax_13 = __errno_location();
        eax_16 = *eax_13;
        if (eax_16 != 2) {
            fclose(eax_10);
            eax_4 = __errno_location();
            eax = *eax_4;
            strerror(eax);
            print_error(-24);
        }
        eax_17 = 0;
        local37 = eax_17;
    }
    eax_5 = local37;
    edx = eax_6 ^ *20;
    local38 = eax_5;
    if (edx != 0) {
        eax = __stack_chk_fail();
        local38 = eax;
    }
    eax = local38;
    return eax;
}

/** address: 0x0804ac6e */
void su(char param1[], union { char *; __size32; } param2)
{
    __size32 eax; 		// r24
    FILE *eax_2; 		// r24

    next.4089 = next.4089 * 0x41c64e6d + 0xd431;
    next.4089 = next.4089 >> 16 & 0x7fff;
    srand();
    rand();
    sprintf(&param1, 0x8054c79);
    eax_2 = fopen(&param1, "w+");
    eax = __errno_location();
    %eax = *eax;
    if (%eax == 13) {
        print_error(-5);
    }
    remove(&param1);
    fclose(eax_2);
    %eax = system(param2);
    if (%eax != 0) {
        print_error(-9);
    }
    if ( ~flags) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08049523 */
void print_done()
{
    int eax; 		// r24

    eax = *0x8059260;
    fwrite("\1b[0;32mDONE.\n\1b[0m", 1, 17, eax);
    return;
}

/** address: 0x0804a2c8 */
__size8 dump_ascii(__size32 param1, union { void *; __size32; } param2, __size32 param3, union { __size32; unsigned char *; } param4, char param5[], union { char *; __size32; } param6, union { char[] *; __size32; } param6, __size8 param8, char param8)
{
    __size8 al; 		// r8
    char dl; 		// r10
    __size32 eax; 		// r24
    __size32 eax_10; 		// r24{0}
    union { __size32; FILE *; } eax_13; 		// r24{0}
    int eax_2; 		// r24{0}
    union { __size32; FILE *; } eax_4; 		// r24{0}
    FILE *eax_7; 		// r24{0}
    union { __size32; FILE *; } eax_9; 		// r24{0}
    int esp; 		// r28
    char local12; 		// param8{0}
    __size8 local13; 		// param8{0}
    char local14; 		// param8{0}

    eax_2 = *20;
    eax_4 = *0x8059260;
    fprintf(eax_4, "%s\n", param6);
    local12 = param8;
    local13 = param8;
    local14 = param8;
    eax_7 = fopen(param6, "r");
    if (eax_7 != 0) {
        for(;;) {
            param8 = local12;
            eax_10 = nc_fgets_html(param1, param2, param3, param4, esp - 0x810, 0x800, eax_7, param8); /* Warning: also results in al, dl */
            local12 = dl;
            local13 = al;
            local14 = dl;
            if (eax_10 != 0) {
                eax_13 = *0x8059260;
                fprintf(eax_13, "  %s", &param5);
            }
        }
        fputc();
        fclose(eax_7);
    }
    else {
        eax_9 = *0x8059260;
        fwrite("  No information available.\n", 1, 28, eax_9);
    }
    param8 = local13;
    param8 = local14;
    eax = eax_2 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return param8; /* WARNING: Also returning: dl := param8 */
}

/** address: 0x0804961d */
void mkdir_s(char param1[])
{
    __size32 eax; 		// r24
    int eax_1; 		// r24{0}

    eax_1 = *20;
    sprintf(&param1, 0x8054a02);
    system(&param1);
    eax = eax_1 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804aaa8 */
__size32 check_filetype(union { char[] *; __size32; } param1)
{
    char *eax; 		// r24

    eax = strstr(param1, 0x8054bd7);
    if (eax == 0) {
        eax = strstr(param1, 0x8054bdf);
        if (eax == 0) {
            eax = strstr(param1, 0x8054be4);
            if (eax == 0) {
                eax = strstr(param1, 0x8054bed);
                if (eax == 0) {
                    eax = strstr(param1, 0x8054bf2);
                    if (eax == 0) {
                        eax = strstr(param1, 0x8054bf7);
                        if (eax == 0) {
                            eax = 0;
                        }
                        else {
                            eax = 4;
                        }
                    }
                    else {
                        eax = 3;
                    }
                }
                else {
                    eax = 2;
                }
            }
            else {
                eax = 2;
            }
        }
        else {
            eax = 1;
        }
    }
    else {
        eax = 1;
    }
    return eax;
}

/** address: 0x0804949b */
void print_warning(char param1[])
{
    __size32 eax; 		// r24
    int eax_1; 		// r24{0}

    eax_1 = *20;
    vsprintf();
    eax = *0x8059244;
    fprintf(eax, "\1b[0;33m\nWARNING:\1b[0m %s", &param1);
    WARNINGS++;
    eax = eax_1 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08049554 */
__size32 basename()
{
    char al; 		// r8
    __size32 eax; 		// r24
    union { __size32; char *; } eax_1; 		// r24{0}
    unsigned int eax_11; 		// r24{0}
    char *eax_4; 		// r24{0}
    __size32 eax_7; 		// r24{0}
    union { unsigned char *; __size32; } eax_8; 		// r24{0}
    union { char *; __size32; } local2; 		// m[esp - 20]
    __size32 local3; 		// m[esp - 24]

    eax_1 = strdup();
    eax_4 = strtok(eax_1, "/");
    local2 = eax_4;
    if (eax_4 != 0) {
        eax_7 = strdup();
        local3 = eax_7;
        while (local2 != 0) {
            eax_8 = strtok(0, "/");
            local2 = eax_8;
            if (local3 != 0) {
                free(local3);
            }
            if (eax_8 == 0) {
                continue;
            }
            eax_11 = *(unsigned char*)eax_8;
            tmpb = (unsigned char) eax_11;
            if ((unsigned char) eax_11 == 0) {
                continue;
            }
            eax = strdup();
            local3 = eax;
        }
        if (eax_1 != 0) {
            free(eax_1);
        }
        eax = local3;
        al = (unsigned char) local3;
    }
    else {
        if (eax_1 != 0) {
            free(eax_1);
        }
        eax = 0;
        al = 0;
    }
    return eax; /* WARNING: Also returning: al := al */
}

/** address: 0x0804a1c8 */
__size32 nc_fgets_nb(union { char[] *; __size32; } param1, int param2, union { FILE *; __size32; } param3)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    eax = fgets(param1, param2, param3); /* Warning: also results in ecx, edx */
    if (eax != 0) {
        eax = is_text(param1); /* Warning: also results in al */
        if (eax != 0) {
            eax = strchr(param1, '#'); /* Warning: also results in ecx, edx */
            if (eax == 0) {
bb0x804a2c3:
                eax = param1;
            }
            else {
                if (param1 != eax) {
                    eax = malloc(0x800);
                    strcpy(eax, param1);
                    eax = strtok(eax, "#");
                    sprintf(param1, 0x8054ab2);
                    ecx = free(eax); /* Warning: also results in edx */
                    goto bb0x804a2c3;
                }
                else {
                    eax = nc_fgets_nb(param1, param2, param3, al); /* Warning: also results in al, ecx, edx */
                }
            }
        }
        else {
            eax = nc_fgets_nb(param1, param2, param3, al); /* Warning: also results in al, ecx, edx */
        }
    }
    else {
        eax = 0;
    }
    return eax; /* WARNING: Also returning: al := al, ecx := ecx, edx := edx */
}

/** address: 0x0804968f */
__size8 chop(union { char[] *; __size32; } param1)
{
    int eax; 		// r24
    int local0; 		// m[esp - 20]
    int local2; 		// m[esp - 16]
    int local3; 		// m[esp - 24]

    local0 = 0;
    eax = strlen(param1);
    local2 = eax - 1;
    while (local2 >= 0) {
        local3 = 1;
        eax = *(unsigned char*)(local2 + param1);
        if ((unsigned char) eax == 10) {
bb0x80496fe:
            local0++;
            local3 = 0;
        }
        else {
            eax = *(unsigned char*)(local2 + param1);
            if ((unsigned char) eax == 9) {
                goto bb0x80496fe;
            }
            else {
                eax = *(unsigned char*)(local2 + param1);
                if ((unsigned char) eax == 32) {
                    goto bb0x80496fe;
                }
                else {
                    eax = *(unsigned char*)(local2 + param1);
                    if ((unsigned char) eax == 12) {
                        goto bb0x80496fe;
                    }
                    else {
                        eax = *(unsigned char*)(local2 + param1);
                        if ((unsigned char) eax == 13) {
                            goto bb0x80496fe;
                        }
                    }
                }
            }
        }
        if (local3 == 1) {
            goto bb0x804971c;
        }
        local2--;
    }
bb0x804971c:
    eax = strlen(param1);
    *(__size8*)(eax + param1 - local0) = 0;
    return (unsigned char) local0;
}

/** address: 0x0804a6da */
void list_binaries(int param1, char param2[], __size32 param3)
{
    __size32 eax; 		// r24
    union { __size32; FILE *; } eax_1; 		// r24{0}
    int eax_12; 		// r24{0}
    union { __size32; FILE *; } eax_15; 		// r24{0}
    union { __size32; FILE *; } eax_16; 		// r24{0}
    int eax_17; 		// r24{0}
    int eax_20; 		// r24{0}
    int eax_23; 		// r24{0}
    union { __size32; FILE *; } eax_27; 		// r24{0}
    int eax_3; 		// r24{0}
    int eax_30; 		// r24{0}
    union { __size32; FILE *; } eax_33; 		// r24{0}
    union { __size32; FILE *; } eax_6; 		// r24{0}
    __size32 eax_9; 		// r24{0}
    int esp; 		// r28
    int local0; 		// m[esp - 0x81c]
    __size32 local1; 		// m[esp - 0x890]
    __size32 local2; 		// m[esp - 0x894]
    int local5; 		// m[esp - 0x818]

    eax_3 = *20;
    local0 = 0;
    eax_6 = *0x8059260;
    local1 = eax_6;
    local2 = 26;
    fwrite("Binary installation files\n", 1, 26, eax_6);
    eax_9 = opendir();
    if (eax_9 != 0) {
        eax_12 = readdir();
        local5 = eax_12;
        while (local5 != 0) {
            eax_17 = strcmp(local5 + 11, 0x8054bbe);
            if (eax_17 != 0) {
                eax_20 = strcmp(local5 + 11, 0x8054bc0);
                if (eax_20 != 0) {
                    eax_23 = strcmp(local5 + 11, 0x8054bc3);
                    if (eax_23 != 0) {
                        local1 = local5 + 11;
                        local2 = param3;
                        sprintf(&param2, 0x8054a64);
                        __stat(esp - 0x810, (esp - 0x874));
                        if ((param1 & 0xf000) == 0x4000) {
                            if (local0 != 0) {
                                eax_33 = *0x8059260;
                                fprintf(eax_33, ", %s", local5 + 11);
                                goto bb0x804a898;
                            }
                            else {
                                eax_27 = *0x8059260;
                                fprintf(eax_27, "  %s", local5 + 11);
                            }
bb0x804a898:
                            local2 = local5 + 11;
                            local0++;
                        }
                    }
                }
            }
            eax_30 = readdir();
            local5 = eax_30;
        }
        if (local0 == 0) {
            eax_15 = *0x8059260;
            fwrite("  None.", 1, 7, eax_15);
        }
        eax_16 = *0x8059260;
        fwrite("\n\n", 1, 2, eax_16);
    }
    else {
        eax_1 = *0x8059260;
        fwrite("  None.\n\n", 1, 9, eax_1);
    }
    eax = eax_3 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804a51b */
__size8 dump_html(union { __size32; FILE *; } param1, int param2, char param3[], union { char *; __size32; } param4, union { char *; __size32; } param5, __size8 param6)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    FILE *eax_11; 		// r24{0}
    __size32 eax_13; 		// r24{0}
    __size32 eax_16; 		// r24{0}
    int *eax_3; 		// r24{0}
    int eax_4; 		// r24{0}
    FILE *eax_7; 		// r24{0}
    int esp; 		// r28
    union { __size32; FILE *; } local10; 		// param1{0}
    union { FILE *; __size32; } local4; 		// m[esp - 0x1030]
    __size8 local9; 		// param6{0}

    eax_4 = *20;
    memcpy(param5, 0x8054aec, 32);
    local9 = param6;
    local10 = param1;
    mkstemp();
    eax_7 = fopen(param5, "w+");
    if (eax_7 == 0) {
        eax_3 = __errno_location();
        eax = *eax_3;
        strerror(eax);
        print_error(-23);
    }
    atexit();
    eax_11 = fopen(param4, "r");
    for(;;) {
bb0x804a675:
        param6 = local9;
        param1 = local10;
        eax_13 = nc_fgets(esp - 0x1010, 0x800, eax_11);
        local10 = param1;
        if (eax_13 != 0) {
            chop((esp - 0x1010));
            eax_16 = is_text(esp - 0x1010); /* Warning: also results in al */
            local9 = al;
            local9 = al;
            if (eax_16 != 0) {
                sprintf(&param3, 0x8054b90);
                fprintf(eax_7, &param3);
            }
            else {
                local4 = eax_7;
                fwrite("<p>\n", 1, 4, eax_7);
                local10 = local4;
                goto bb0x804a675;
            }
            continue;
        }
    }
    fclose(eax_11);
    fclose(eax_7);
    close(param2);
    eax = eax_4 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return param6;
}

/** address: 0x0804b961 */
__size8 check_dependencies(char param1[], char param2[], char param1[], union { char[] *; __size32; } param4, __size8 param3, __size32 param6, __size32 param7, __size32 param8)
{
    __size8 al; 		// r8
    __size32 eax; 		// r24
    int *eax_11; 		// r24{0}
    int eax_14; 		// r24{0}
    union { __size32; FILE *; } eax_15; 		// r24{0}
    FILE *eax_17; 		// r24{0}
    int *eax_19; 		// r24{0}
    int eax_22; 		// r24{0}
    int *eax_25; 		// r24{0}
    int *eax_27; 		// r24{0}
    int eax_28; 		// r24{0}
    int eax_3; 		// r24{0}
    int eax_31; 		// r24{0}
    int eax_34; 		// r24{0}
    int eax_37; 		// r24{0}
    int eax_40; 		// r24{0}
    int eax_43; 		// r24{0}
    int eax_46; 		// r24{0}
    int eax_49; 		// r24{0}
    int eax_5; 		// r24{0}
    FILE *eax_8; 		// r24{0}
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 esi; 		// r30
    int esp; 		// r28
    __size32 local17; 		// ebx{0}
    __size32 local18; 		// esi{0}
    __size32 local19; 		// edi{0}
    __size32 local20; 		// param6{0}
    __size32 local21; 		// param7{0}
    __size32 local22; 		// param8{0}
    __size8 local23; 		// param3{0}
    int local5; 		// m[esp - 0x2828]
    __size32 local6; 		// m[esp - 0x282c]

    eax_3 = *20;
    eax_5 = *(global_0x08056f68 + 0x11360);
    local20 = param6;
    local21 = param7;
    local22 = param8;
    local23 = param3;
    local23 = param3;
    if (eax_5 != 0) {
    }
    else {
        eax_8 = fopen("../depends", "r");
        if (eax_8 != 0) {
            local5 = 1;
            sprintf(&param1, 0x8054d3f);
            eax_17 = fopen(&param1, "r");
            if (eax_17 == 0) {
                eax_19 = __errno_location();
                eax_22 = *eax_19;
                if (eax_22 != 2) {
                    fclose(eax_17);
                    eax_27 = __errno_location();
                    eax = *eax_27;
                    strerror(eax);
                    print_error(-17);
                }
                local5 = 0;
            }
            local6 = 0;
            do {
bb0x804be17:
                param6 = local20;
                param7 = local21;
                param8 = local22;
                eax_28 = nc_fgets_nb((esp - 0x1020), 0x800, eax_8); /* Warning: also results in al */
                local17 = param6;
                local18 = param7;
                local19 = param8;
                local20 = param6;
                local20 = param6;
                local21 = param7;
                local21 = param7;
                local22 = param8;
                local22 = param8;
                local23 = al;
bb0x804be37:
                if (eax_28 != 0) {
                    eax_31 = __isoc99_sscanf();
                    if (eax_31 <= 0) {
                        continue;
                    }
                    eax_34 = strcmp(&param1, 0x8054d35);
                    if (eax_34 != 0) {
                        if (local5 == 0) {
                            continue;
                        }
                        local6 = 0;
                        rewind();
bb0x804bdbe:
                        ebx = local17;
                        esi = local18;
                        edi = local19;
                        eax_40 = nc_fgets_nb((esp - 0x1820), 0x800, eax_17);
                        local17 = ebx;
                        local17 = ebx;
                        local18 = esi;
                        local18 = esi;
                        local19 = edi;
                        local19 = edi;
                        local20 = ebx;
                        local21 = esi;
                        local22 = edi;
                        if (eax_40 != 0) {
                            eax_43 = __isoc99_sscanf();
                            if (eax_43 <= 0) {
                                goto bb0x804bdbe;
                            }
                            eax_46 = strcmp(&param2, &param1);
                            if (eax_46 != 0) {
                                goto bb0x804bdbe;
                            }
                            edi = 0;
                            esi = 0;
                            ebx = 0;
                            eax_49 = vercmp(0, 0, 0, 0, 0, 0);
                            local17 = ebx;
                            local18 = esi;
                            local19 = edi;
                            if (eax_49 < 0) {
                                print_error(-18);
                            }
                            local6 = 1;
                            goto bb0x804bdbe;
                        }
                    }
                    else {
                        __isoc99_sscanf();
                        edi = 0;
                        esi = 0;
                        ebx = 0;
                        eax_37 = vercmp(0, 0, 0, 0, 0, 0);
                        local20 = ebx;
                        local21 = esi;
                        local22 = edi;
                        if (eax_37 < 0) {
                            print_error(-18);
                        }
                        local6 = 1;
                        goto bb0x804be17;
                    }
                    goto bb0x804be37;
                }
                if (local5 != 0) {
                    fclose(eax_17);
                }
                fclose(eax_8);
                goto bb0x804be67;
            } while (local6 != 0);
            print_error(-18);
        }
        else {
            eax_11 = __errno_location();
            eax_14 = *eax_11;
            if (eax_14 != 2) {
                fclose(eax_8);
                eax_25 = __errno_location();
                eax = *eax_25;
                strerror(eax);
                print_error(-17);
            }
            eax_15 = *0x8059244;
            fprintf(eax_15, "\n%s/depends ENOENT\n", param4);
        }
    }
bb0x804be67:
    param3 = local23;
    eax = eax_3 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return param3;
}

/** address: 0x0805014e */
void print_cfg(char param1[])
{
    __size32 eax; 		// r24
    char *eax_3; 		// r24{0}
    int eax_5; 		// r24{0}
    FILE *eax_7; 		// r24{0}

    eax_5 = *20;
    eax_7 = fopen("config.msg", "r");
    if (eax_7 != 0) {
        eax = *0x8059260;
        fwrite("\nResult of configuration: \n", 1, 27, eax);
        for(;;) {
            eax_3 = fgets(&param1, 0x800, eax_7);
            if (eax_3 == 0) {
                break;
            }
            fputs();
        }
        fputc();
    }
    remove("config.msg");
    eax = eax_5 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804b014 */
void register_extension(char param1[])
{
    __size32 eax; 		// r24
    FILE *eax_10; 		// r24{0}
    int eax_11; 		// r24{0}
    int eax_13; 		// r24{0}
    char *eax_2; 		// r24
    FILE *eax_4; 		// r24{0}
    int eax_7; 		// r24{0}
    __size32 local0; 		// m[esp - 0x281c]

    local0 = 1;
    sprintf(&param1, 0x8054d3f);
    eax_4 = fopen(&param1, "r");
    if (eax_4 == 0) {
        eax_2 = __errno_location();
        eax_7 = *eax_2;
        if (eax_7 != 2) {
            fclose(eax_4);
            eax_2 = __errno_location();
            eax_13 = *eax_2;
            strerror(eax_13);
            print_error(-15);
        }
        local0 = 0;
    }
    if (local0 != 0) {
        memcpy(0x8063ac0, 0x8054d54, 32);
        mkstemp();
        eax_10 = fopen(0x8063ac0, "w+");
        if (eax_10 == 0) {
            eax = __errno_location();
            eax_11 = *eax;
            strerror(eax_11);
            print_error(-15);
        }
        atexit();
        for(;;) {
            *(__size32*)(%esp + 8) = %eax;
            *(__size32*)(%esp + 4) = 0x800;
            *(__size32*)%esp = %eax;
            nc_fgets_nb(*(%esp + 4), *(%esp + 8), *(%esp + 12));
            if (flags) {
                *(__size32*)(%ebp - 0x2810)++;
                *(__size32*)(%ebp - 0x2820) = 1;
                *(__size32*)(%esp + 28) = %ecx;
                *(__size32*)(%esp + 24) = %ecx;
                *(__size32*)(%esp + 20) = %ecx;
                *(__size32*)(%esp + 16) = %ecx;
                *(__size32*)(%esp + 12) = %ecx;
                *(__size32*)(%esp + 8) = %ecx;
                *(__size32*)(%esp + 4) = %edx;
                *(__size32*)%esp = %eax;
                __isoc99_sscanf();
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                strcmp(*(%esp + 4), *(%esp + 8));
                if ( ~flags) {
                    *(__size32*)(%ebp - 0x2824) = 1;
                    *(__size32*)(%esp + 20) = %ebx;
                    *(__size32*)(%esp + 16) = %ebx;
                    *(__size32*)(%esp + 12) = %ebx;
                    *(__size32*)(%esp + 8) = %ecx;
                    *(__size32*)(%esp + 4) = %edx;
                    *(__size32*)%esp = %eax;
                    vercmp(*(%esp + 4), *(%esp + 8), *(%esp + 12), *(%esp + 16), *(%esp + 20), *(%esp + 24));
                    *(__size32*)(%ebp - 0x2814) = %eax;
                    if ( ~flags) {
                        if ( ~flags) {
                            *(__size32*)(%esp + 20) = %ecx;
                            *(__size32*)(%esp + 16) = %edx;
                            *(__size32*)(%esp + 12) = %eax;
                            *(__size32*)(%esp + 8) = %eax;
                            *(__size32*)(%esp + 4) = 0x8054e0c;
                            *(__size32*)%esp = -16;
                            print_error(*(%esp + 4));
                        }
                        *(__size32*)(%esp + 20) = %ecx;
                        *(__size32*)(%esp + 16) = %edx;
                        *(__size32*)(%esp + 12) = %eax;
                        *(__size32*)(%esp + 8) = %eax;
                        *(__size32*)(%esp + 4) = 0x8054e98;
                        *(__size32*)%esp = -16;
                        print_error(*(%esp + 4));
                    }
                    if ( ~flags) {
                        if (flags) {
                            *(__size32*)(%ebp - 0x281c) = 1;
                            *(__size32*)(%ebp - 0x2820) = 0;
                            goto bb0x804b332;
                        }
                        else {
                            *(__size32*)(%ebp - 0x281c) = 0;
                        }
                    }
                }
bb0x804b332:
                if (flags) {
                    continue;
                }
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                fprintf(*(%esp + 4), *(%esp + 8));
                *(__size32*)%esp = %eax;
                fflush();
            }
        }
        if ( ~flags) {
            if (flags) {
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                depstr(*(%esp - 0x181c), *(%esp - 0x1810), *(%esp - 0x1010), *(%esp - 0x810));
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                strcpy(*(%esp + 4), *(%esp + 8));
                *(__size32*)(%esp + 28) = %edx;
                *(__size32*)(%esp + 24) = %edx;
                *(__size32*)(%esp + 20) = %edx;
                *(__size32*)(%esp + 16) = %edx;
                *(__size32*)(%esp + 12) = %edx;
                *(__size32*)(%esp + 8) = %edx;
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                fprintf(*(%esp + 4), *(%esp + 8));
            }
            else {
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                depstr(*(%esp - 0x181c), *(%esp - 0x1810), *(%esp - 0x1010), *(%esp - 0x810));
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                strcpy(*(%esp + 4), *(%esp + 8));
                *(__size32*)(%esp + 28) = %edx;
                *(__size32*)(%esp + 24) = %edx;
                *(__size32*)(%esp + 20) = %edx;
                *(__size32*)(%esp + 16) = %edx;
                *(__size32*)(%esp + 12) = %edx;
                *(__size32*)(%esp + 8) = %edx;
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                fprintf(*(%esp + 4), *(%esp + 8));
            }
        }
        *(__size32*)%esp = %eax;
        fclose(*(%esp + 4));
        *(__size32*)%esp = %eax;
        fclose(*(%esp + 4));
    }
    if ( ~( ~flags && flags)) {
        *(__size32*)(%esp + 8) = 32;
        *(__size32*)(%esp + 4) = %eax;
        *(__size32*)%esp = 0x8063ac0;
        memcpy(*(%esp + 4), *(%esp + 8), *(%esp + 12));
        *(__size32*)%esp = 0x8063ac0;
        mkstemp();
        *(__size32*)(%esp + 4) = %edx;
        *(__size32*)%esp = %eax;
        fopen(*(%esp + 4), *(%esp + 8));
        *(__size32*)(%ebp - 0x282c) = %eax;
        if ( ~flags) {
            __errno_location();
            *(__size32*)%esp = %eax;
            strerror(*(%esp + 4));
            *(__size32*)(%esp + 12) = %eax;
            *(__size32*)(%esp + 8) = %eax;
            *(__size32*)(%esp + 4) = 0x8054f40;
            *(__size32*)%esp = -15;
            print_error(*(%esp + 4));
        }
        *(__size32*)%esp = 0x8048fc2;
        atexit();
        *(__size32*)(%esp + 4) = %eax;
        *(__size32*)%esp = %eax;
        depstr(*(%esp - 0x181c), *(%esp - 0x1810), *(%esp - 0x1010), *(%esp - 0x810));
        *(__size32*)(%esp + 4) = %eax;
        *(__size32*)%esp = %eax;
        strcpy(*(%esp + 4), *(%esp + 8));
        *(__size32*)(%esp + 28) = %edx;
        *(__size32*)(%esp + 24) = %edx;
        *(__size32*)(%esp + 20) = %edx;
        *(__size32*)(%esp + 16) = %edx;
        *(__size32*)(%esp + 12) = %edx;
        *(__size32*)(%esp + 8) = %edx;
        *(__size32*)(%esp + 4) = %eax;
        *(__size32*)%esp = %eax;
        fprintf(*(%esp + 4), *(%esp + 8));
        *(__size32*)%esp = %eax;
        fclose(*(%esp + 4));
    }
    if ( ~flags) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804c5f0 */
void register_entries_gisman(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], char param7[], char param8[], char param9[], char param10[], char param11[], char param12[], int param13, int param14, char param15[], char param16[], char param17[], int param18, int param19)
{
    __size32 eax; 		// r24
    int eax_12; 		// r24{0}
    int *eax_13; 		// r24{0}
    FILE *eax_16; 		// r24{0}
    int *eax_19; 		// r24{0}
    int eax_22; 		// r24{0}
    int *eax_23; 		// r24{0}
    FILE *eax_26; 		// r24{0}
    int *eax_29; 		// r24{0}
    int eax_3; 		// r24{0}
    int eax_31; 		// r24{0}
    char *eax_37; 		// r24{0}
    char *eax_40; 		// r24{0}
    void *eax_43; 		// r24{0}
    char *eax_46; 		// r24{0}
    int eax_49; 		// r24{0}
    void *eax_52; 		// r24{0}
    union { __size32; char[] *; } eax_55; 		// r24{0}
    int eax_59; 		// r24{0}
    FILE *eax_6; 		// r24{0}
    char *eax_62; 		// r24{0}
    char *eax_65; 		// r24{0}
    char *eax_68; 		// r24{0}
    int eax_72; 		// r24{0}
    int eax_75; 		// r24{0}
    int eax_78; 		// r24{0}
    union { char *; int; } eax_81; 		// r24{0}
    char *eax_82; 		// r24{0}
    int *eax_9; 		// r24{0}
    union { union { void *; __size32; } *; int; } ebx; 		// r27
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    unsigned int local10; 		// m[esp - 0x1824]
    int local14; 		// m[esp - 0x1814]
    int local21; 		// m[esp - 0x1830]
    int local25; 		// m[esp - 0x182c]
    int local29; 		// param19{0}
    int local30; 		// ebx{0}
    int local31; 		// param14{0}
    int local32; 		// param13{0}
    int local5; 		// m[esp - 0x1880]
    int local6; 		// m[esp - 0x181c]
    int local9; 		// m[esp - 0x1820]

    eax_3 = *20;
    memcpy(&param17, 0x80553df, 18);
    local29 = param19;
    local31 = param14;
    local32 = param13;
    eax_6 = fopen(&param17, "r");
    if (eax_6 != 0) {
        sprintf(&param17, 0x805540f);
        eax_16 = fopen(&param17, "r");
        if (eax_16 != 0) {
            memcpy(0x80642c0, 0x8055424, 32);
            mkstemp();
            eax_26 = fopen(0x80642c0, "w+");
            if (eax_26 == 0) {
                eax_29 = __errno_location();
                eax = *eax_29;
                strerror(eax);
                print_error(-21);
            }
            atexit();
            eax_31 = *(global_0x08056f68 + 0xc338);
            if (eax_31 == 0) {
                local5 = 0x80672c0;
                sprintf(&param16, 0x80555a4);
            }
            else {
                local5 = param18;
                sprintf(&param16, 0x80554c4);
            }
            strcpy(0x80682e0, &param16);
            local6 = 0;
            for(;;) {
                eax_37 = fgets(&param16, 0x800, eax_6);
                if (eax_37 == 0) {
                    break;
                }
                local6++;
            }
            if (local6 == 0) {
            }
            else {
                rewind();
                local9 = 0;
                for(;;) {
                    eax_40 = fgets(&param16, 0x800, eax_16);
                    if (eax_40 == 0) {
                        break;
                    }
                    local9++;
                }
                if (local9 == 0) {
                }
                else {
                    rewind();
                    eax_43 = calloc(local6 + local6 + local9 + 6, 4);
                    local10 = 0;
                    while (local6 + local6 + local9 + 6 > (int)local10) {
                        *(__size32*)(local10 * 4 + eax_43) = 0;
                        local10++;
                    }
                    local10 = 0;
                    for(;;) {
                        param19 = local29;
                        eax_46 = fgets(&param16, 0x800, eax_16); /* Warning: also results in ecx, edx */
                        local30 = param19;
                        if (eax_46 != 0) {
                            ebx = local10 * 4 + eax_43;
                            eax_49 = strlen(&param16);
                            local29 = ebx;
                            eax_52 = malloc(eax_49 + 1);
                            *(union { void *; __size32; }*)ebx = eax_52;
                            eax_55 = *(local10 * 4 + eax_43);
                            strcpy(eax_55, &param16);
                            local10++;
                        }
                    }
                    check_ext_menu(param7, param9, param11, eax_43, ecx, edx);
                    local10 = 1;
                    for(;;) {
bb0x804cbc3:
                        ebx = local30;
                        param14 = local31;
                        param13 = local32;
                        eax_59 = nc_fgets_nb(esp - 0x1010, 0x800, eax_6);
                        local30 = ebx;
                        local31 = param14;
                        if (eax_59 != 0) {
                            if (local10 != 1) {
                                local5 = param13;
                                eax_78 = new_item(param2, param4, param6, param8, param10, param12, esp - 0x1010, eax_43, param13);
                                local21 = eax_78;
                                local32 = local21;
                                if (eax_78 < 0) {
                                    print_warning(param12);
                                    goto bb0x804cbeb;
                                }
                                local10++;
                            }
                            else {
                                goto bb0x804caa8;
                            }
                        }
bb0x804cbeb:
                        local10 = 0;
                        eax_75 = *(local10 * 4 + eax_43);
                        while (eax_75 != 0) {
                            eax_81 = *(local10 * 4 + eax_43);
                            fprintf(eax_26, eax_81);
                            local10++;
                            eax_75 = *(local10 * 4 + eax_43);
                        }
                        fflush();
                        rewind();
                        local25 = 0;
                        for(;;) {
                            eax_82 = fgets(&param16, 0x800, eax_26);
                            if (eax_82 == 0) {
                                break;
                            }
                            local25++;
                        }
                        if ( ~(local25 != 0 && local25 >= local9)) {
                            print_warning(param12);
                            memcpy(0x80682e0, 0x8055722, 1);
                        }
                        fclose(eax_16);
                        fclose(eax_6);
                        fclose(eax_26);
                        local10 = 0;
                        while (local6 + local6 + local9 + 6 > (int)local10) {
                            eax = *(local10 * 4 + eax_43);
                            free(eax);
                            local10++;
                        }
                        free(eax_43);
                        goto bb0x804cd52;
                    }
bb0x804caa8:
                    eax_62 = strrchr(&param16, ']');
                    eax_65 = strchr(&param16, '[');
                    local14 = eax_62 - eax_65;
                    ebx = eax_62 - eax_65;
                    eax_68 = strchr(&param16, '[');
                    local30 = ebx;
                    local31 = local14;
                    ecx = strncpy(&param15, eax_68 + 1, eax_62 - eax_65); /* Warning: also results in edx */
                    *(__size8*)(esp + eax_62 - eax_65 - 0x1811) = 0;
                    eax_72 = new_submenu(param1, param3, param5, param8, param10, param12, esp - 0x1010, eax_43, ecx, edx);
                    local21 = eax_72;
                    local32 = local21;
                    if (eax_72 >= 0) {
                        local10++;
                        goto bb0x804cbc3;
                    }
                    else {
                        print_warning(param12);
                        goto bb0x804cbeb;
                    }
                    goto bb0x804cbeb;
                }
            }
        }
        else {
            eax_19 = __errno_location();
            eax_22 = *eax_19;
            if (eax_22 != 2) {
                fclose(eax_16);
                eax_23 = __errno_location();
                eax = *eax_23;
                strerror(eax);
                print_error(-21);
            }
        }
    }
    else {
        eax_9 = __errno_location();
        eax_12 = *eax_9;
        if (eax_12 != 2) {
            fclose(eax_6);
            eax_13 = __errno_location();
            eax = *eax_13;
            strerror(eax);
            print_error(-21);
        }
    }
bb0x804cd52:
    eax = eax_3 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804cd6c */
void register_entries_gisman2(char param1[], char param2)
{
    __size32 eax; 		// r24
    int eax_11; 		// r24{0}
    int *eax_3; 		// r24{0}
    int eax_6; 		// r24{0}
    int *eax_7; 		// r24{0}
    FILE *eax_8; 		// r24{0}

    eax_11 = *20;
    memcpy(&param2, 0x8055723, 19);
    eax_8 = fopen(&param2, "r");
    if (eax_8 != 0) {
        eax = *(global_0x08056f68 + 0xc338);
        if (eax == 0) {
            sprintf(&param1, 0x8055790);
        }
        else {
            sprintf(&param1, 0x8055738);
        }
        strcpy(0x8068ae0, &param1);
    }
    else {
        eax_3 = __errno_location();
        eax_6 = *eax_3;
        if (eax_6 != 2) {
            fclose(eax_8);
            eax_7 = __errno_location();
            eax = *eax_7;
            strerror(eax);
            print_error(-32);
        }
    }
    eax = eax_11 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804e7f3 */
void register_html(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], __size32 param7)
{
    __size32 eax; 		// r24
    int eax_12; 		// r24{0}
    int *eax_13; 		// r24{0}
    FILE *eax_16; 		// r24{0}
    int *eax_19; 		// r24{0}
    unsigned int eax_21; 		// r24{0}
    char *eax_25; 		// r24{0}
    void *eax_28; 		// r24{0}
    int eax_3; 		// r24{0}
    char *eax_31; 		// r24{0}
    int eax_34; 		// r24{0}
    void *eax_35; 		// r24{0}
    union { char[] *; int; } eax_37; 		// r24{0}
    unsigned int eax_38; 		// r24{0}
    union { __size32; char *; } eax_41; 		// r24{0}
    FILE *eax_6; 		// r24{0}
    int *eax_9; 		// r24{0}
    int ecx; 		// r25
    int edx; 		// r26
    unsigned int local5; 		// m[esp - 0x1018]
    unsigned int local8; 		// m[esp - 0x101c]

    eax_3 = *20;
    sprintf(&param6, 0x8055c7b);
    eax_6 = fopen(&param6, "r");
    if (eax_6 != 0) {
        memcpy(0x8067ac0, 0x8055cb4, 32);
        mkstemp();
        eax_16 = fopen(0x8067ac0, "w+");
        if (eax_16 == 0) {
            eax_19 = __errno_location();
            eax = *eax_19;
            strerror(eax);
            print_error(-24);
        }
        atexit();
        eax_21 = *(global_0x08056f68 + 0xc338);
        if (eax_21 == 0) {
            sprintf(&param5, 0x8055da0);
        }
        else {
            sprintf(&param5, 0x8055d54);
        }
        strcpy(0x80692e0, &param5);
        local5 = 0;
        for(;;) {
            eax_25 = fgets(&param5, 0x800, eax_6);
            if (eax_25 == 0) {
                break;
            }
            local5++;
        }
        if (local5 == 0) {
        }
        else {
            rewind();
            eax_28 = calloc(local5 + 10, 4);
            local8 = 0;
            while (local5 + 10 > (int)local8) {
                *(__size32*)(local8 * 4 + eax_28) = 0;
                local8++;
            }
            local8 = 0;
            for(;;) {
                eax_31 = fgets(&param5, 0x800, eax_6); /* Warning: also results in ecx, edx */
                if (eax_31 != 0) {
                    eax_34 = strlen(&param5);
                    eax_35 = malloc(eax_34 + 1);
                    *(union { void *; __size32; }*)(local8 * 4 + eax_28) = eax_35;
                    eax_37 = *(local8 * 4 + eax_28);
                    strcpy(eax_37, &param5);
                    local8++;
                }
            }
            new_ext_html(param1, param2, param3, param4, param7, eax_28, ecx, edx);
            local8 = 0;
            eax_38 = *(local8 * 4 + eax_28);
            while (eax_38 != 0) {
                eax_41 = *(local8 * 4 + eax_28);
                fprintf(eax_16, eax_41);
                local8++;
                eax_38 = *(local8 * 4 + eax_28);
            }
            fflush();
            fclose(eax_6);
            fclose(eax_16);
            local8 = 0;
            while (local5 + 10 > (int)local8) {
                eax = *(local8 * 4 + eax_28);
                free(eax);
                local8++;
            }
            free(eax_28);
        }
    }
    else {
        eax_9 = __errno_location();
        eax_12 = *eax_9;
        if (eax_12 != 2) {
            fclose(eax_6);
            eax_13 = __errno_location();
            eax = *eax_13;
            strerror(eax);
            print_error(-24);
        }
    }
    eax = eax_3 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804b5e3 */
void deregister_extension(char param1[])
{
    int eax_10; 		// r24{0}
    __size32 eax_14; 		// r24{0}
    int eax_16; 		// r24{0}
    char *eax_2; 		// r24
    int *eax_3; 		// r24{0}
    int eax_4; 		// r24{0}
    FILE *eax_7; 		// r24{0}

    sprintf(&param1, 0x8054d3f);
    eax_7 = fopen(&param1, "r");
    if (eax_7 != 0) {
    }
    else {
        eax_3 = __errno_location();
        eax_10 = *eax_3;
        if (eax_10 == 2) {
            eax_4 = *(global_0x08056f68 + 0x11360);
            if (eax_4 == 0) {
                fclose(eax_7);
                print_error(-19);
            }
        }
        eax_14 = *(global_0x08056f68 + 0x11360);
        if (eax_14 == 0) {
            fclose(eax_7);
            eax_2 = __errno_location();
            eax_16 = *eax_2;
            strerror(eax_16);
            print_error(-19);
        }
    }
    if ( ~flags) {
        *(__size32*)(%ebp - 0x2814) = 0;
        *(__size32*)(%esp + 8) = 32;
        *(__size32*)(%esp + 4) = %eax;
        *(__size32*)%esp = 0x8063ac0;
        memcpy(*(%esp + 4), *(%esp + 8), *(%esp + 12));
        *(__size32*)%esp = 0x8063ac0;
        mkstemp();
        *(__size32*)(%esp + 4) = %edx;
        *(__size32*)%esp = %eax;
        fopen(*(%esp + 4), *(%esp + 8));
        *(__size32*)(%ebp - 0x2820) = %eax;
        if ( ~flags) {
            __errno_location();
            *(__size32*)%esp = %eax;
            strerror(*(%esp + 4));
            *(__size32*)(%esp + 12) = %eax;
            *(__size32*)(%esp + 8) = %eax;
            *(__size32*)(%esp + 4) = 0x8054fec;
            *(__size32*)%esp = -19;
            print_error(*(%esp + 4));
        }
        *(__size32*)(%ebp - 0x2814) = 1;
        *(__size32*)%esp = 0x8048fc2;
        atexit();
    }
    if ( ~flags) {
        *(__size32*)(%ebp - 0x2824) = 0;
        for(;;) {
            *(__size32*)(%esp + 8) = %eax;
            *(__size32*)(%esp + 4) = 0x800;
            *(__size32*)%esp = %eax;
            nc_fgets_nb(*(%esp + 4), *(%esp + 8), *(%esp + 12));
            if (flags) {
                *(__size32*)(%esp + 28) = %ecx;
                *(__size32*)(%esp + 24) = %ecx;
                *(__size32*)(%esp + 20) = %ecx;
                *(__size32*)(%esp + 16) = %ecx;
                *(__size32*)(%esp + 12) = %ecx;
                *(__size32*)(%esp + 8) = %ecx;
                *(__size32*)(%esp + 4) = %edx;
                *(__size32*)%esp = %eax;
                __isoc99_sscanf();
                *(__size32*)(%ebp - 0x2810) = %eax;
                if (flags) {
                    continue;
                }
                *(__size32*)(%ebp - 0x2818) = 1;
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                strcmp(*(%esp + 4), *(%esp + 8));
                if ( ~flags) {
                    *(__size32*)(%ebp - 0x2818) = 0;
                    *(__size32*)(%ebp - 0x2824) = 1;
                }
                if (flags) {
                    continue;
                }
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                strstr(*(%esp + 4), *(%esp + 8));
                if ( ~flags) {
                    *(__size32*)(%esp + 12) = %eax;
                    *(__size32*)(%esp + 8) = %eax;
                    *(__size32*)(%esp + 4) = 0x805506c;
                    *(__size32*)%esp = -19;
                    print_error(*(%esp + 4));
                }
                *(__size32*)(%esp + 4) = %eax;
                *(__size32*)%esp = %eax;
                fprintf(*(%esp + 4), *(%esp + 8));
            }
        }
        if ( ~flags) {
            *(__size32*)(%esp + 12) = %eax;
            *(__size32*)(%esp + 8) = %eax;
            *(__size32*)(%esp + 4) = 0x80550a4;
            *(__size32*)%esp = -19;
            print_error(*(%esp + 4));
        }
        *(__size32*)%esp = %eax;
        fclose(*(%esp + 4));
        *(__size32*)%esp = %eax;
        fclose(*(%esp + 4));
    }
    if ( ~flags) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804cec7 */
__size32 deregister_entries_gisman(char param1[], __size32 param2, char param3[], char param3[], char param4[], __size32 param6)
{
    __size32 eax; 		// r24
    int *eax_11; 		// r24{0}
    int eax_14; 		// r24{0}
    __size32 eax_15; 		// r24{0}
    FILE *eax_17; 		// r24{0}
    int *eax_20; 		// r24{0}
    unsigned int eax_22; 		// r24{0}
    int *eax_24; 		// r24{0}
    char *eax_28; 		// r24{0}
    __size32 eax_3; 		// r24{0}
    __size32 eax_31; 		// r24{0}
    void *eax_32; 		// r24{0}
    char *eax_35; 		// r24{0}
    unsigned int eax_39; 		// r24{0}
    int eax_4; 		// r24{0}
    __size32 eax_42; 		// r24{0}
    int eax_43; 		// r24{0}
    void *eax_44; 		// r24{0}
    union { char[] *; int; } eax_47; 		// r24{0}
    union { __size32; char[] *; } eax_49; 		// r24{0}
    char *eax_50; 		// r24{0}
    char *eax_53; 		// r24{0}
    int eax_57; 		// r24{0}
    int eax_60; 		// r24{0}
    int eax_63; 		// r24{0}
    __size32 eax_64; 		// r24{0}
    int eax_66; 		// r24{0}
    __size32 eax_69; 		// r24{0}
    int eax_70; 		// r24{0}
    __size32 eax_73; 		// r24{0}
    int eax_75; 		// r24{0}
    int eax_78; 		// r24{0}
    FILE *eax_8; 		// r24{0}
    int eax_81; 		// r24{0}
    unsigned int eax_84; 		// r24{0}
    union { __size32; char *; } eax_87; 		// r24{0}
    char *eax_88; 		// r24{0}
    __size32 eax_90; 		// r24{0}
    union { __size32; union { void *; __size32; } *; } ebx; 		// r27
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    int local10; 		// m[esp - 0x1838]
    __size32 local11; 		// m[esp - 0x184c]
    unsigned int local13; 		// m[esp - 0x1824]
    __size32 local17; 		// param6{0}
    __size32 local18; 		// eax_3{0}
    __size32 local19; 		// eax{0}
    unsigned int local5; 		// m[esp - 0x1818]
    unsigned int local8; 		// m[esp - 0x181c]

    eax_4 = *20;
    sprintf(&param4, 0x805540f);
    local17 = param6;
    eax_8 = fopen(&param4, "r");
    if (eax_8 != 0) {
        memcpy(0x80642c0, 0x8055424, 32);
        mkstemp();
        eax_17 = fopen(0x80642c0, "w+");
        if (eax_17 == 0) {
            eax_20 = __errno_location();
            eax = *eax_20;
            strerror(eax);
            print_error(-21);
        }
        atexit();
        eax_22 = *(global_0x08056f68 + 0xc338);
        if (eax_22 == 0) {
            sprintf(&param3, 0x805585c);
        }
        else {
            sprintf(&param3, 0x80557dc);
        }
        strcpy(0x80682e0, &param3);
        local5 = 0;
        for(;;) {
            eax_28 = fgets(&param3, 0x800, eax_8);
            if (eax_28 == 0) {
                break;
            }
            local5++;
        }
        if (local5 != 0) {
            rewind();
            eax_32 = calloc(local5 + 1, 4);
            local8 = 0;
            while (local5 + 1 > (int)local8) {
                *(__size32*)(local8 * 4 + eax_32) = 0;
                local8++;
            }
            local8 = 0;
            for(;;) {
                param6 = local17;
                eax_35 = fgets(&param3, 0x800, eax_8);
                if (eax_35 != 0) {
                    ebx = local8 * 4 + eax_32;
                    eax_43 = strlen(&param3);
                    local17 = ebx;
                    eax_44 = malloc(eax_43 + 1);
                    *(union { void *; __size32; }*)ebx = eax_44;
                    eax_47 = *(local8 * 4 + eax_32);
                    strcpy(eax_47, &param3);
                    local8++;
                }
            }
            ecx = sprintf(&param3, 0x80558e8); /* Warning: also results in edx */
            eax_39 = find_pos(esp - 0x1010, eax_32, 0, ecx, edx);
            if (eax_39 != -1) {
                eax_49 = *(eax_39 * 4 + eax_32);
                eax_50 = strchr(eax_49, '\"');
                eax_53 = strchr(eax_50 + 1, '\"');
                strcpy(&param3, eax_50 + 1);
                *(__size8*)(esp + eax_53 - eax_50 - 0x1811) = 0;
                eax_57 = find_pos(0x80551e8, eax_32, 0, eax_53 - eax_50 - 1, eax_53); /* Warning: also results in ecx, edx */
                eax_60 = find_pos(0x8055264, eax_32, eax_57 + 1, ecx, edx); /* Warning: also results in ecx, edx */
                local10 = eax_60 - 1;
                if (eax_60 - 1 == -1) {
                    eax_63 = find_pos(0x8055212, eax_32, 0, ecx, edx);
                    local10 = eax_63;
                }
                if (eax_57 != -1) {
                    ecx = sprintf(&param3, 0x80552ad); /* Warning: also results in edx */
                    eax_66 = find_pos(esp - 0x1010, eax_32, eax_57, ecx, edx); /* Warning: also results in ecx, edx */
                    if (eax_66 != -1 && eax_66 <= local10) {
                        eax_70 = find_pos(0x805599a, eax_32, eax_66, ecx, edx);
                        if (eax_70 != -1 && eax_70 <= local10) {
                            local11 = 0;
                            local8 = 0;
                            while (eax_70 - eax_66 + 1 > local8) {
                                delete_str(param2, eax_66, eax_32, eax_70 - eax_66, eax_70, param6);
                                local11++;
                                local8++;
                            }
                            ecx = sprintf(&param3, 0x80558e8); /* Warning: also results in edx */
                            eax_75 = find_pos(esp - 0x1010, eax_32, 0, ecx, edx); /* Warning: also results in ecx, edx */
                            ecx = delete_str(param2, eax_75, eax_32, ecx, edx, param6); /* Warning: also results in edx */
                            local11++;
                            eax_78 = find_pos(0x80551e8, eax_32, 0, ecx, edx); /* Warning: also results in ecx, edx */
                            eax_81 = find_pos(0x8055264, eax_32, eax_78 + 1, ecx, edx);
                            if (eax_81 - eax_78 - 1 <= 2) {
                                local8 = 0;
                                while (eax_81 - eax_78 > local8) {
                                    delete_str(param2, eax_78, eax_32, eax_81 - eax_78 - 1, eax_81 - 1, param6);
                                    local11++;
                                    local8++;
                                }
                            }
                            local8 = 0;
                            eax_84 = *(local8 * 4 + eax_32);
                            while (eax_84 != 0) {
                                eax_87 = *(local8 * 4 + eax_32);
                                fprintf(eax_17, eax_87);
                                local8++;
                                eax_84 = *(local8 * 4 + eax_32);
                            }
                            fflush();
                            rewind();
                            local13 = 0;
                            for(;;) {
                                eax_88 = fgets(&param3, 0x800, eax_17);
                                if (eax_88 == 0) {
                                    break;
                                }
                                local13++;
                            }
                            if (local13 == 0) {
                                print_warning(param1);
                                memcpy(0x80682e0, 0x8055722, 1);
                            }
                            fclose(eax_8);
                            fclose(eax_17);
                            local8 = 0;
                            while (local5 + 1 > (int)local8) {
                                eax = *(local8 * 4 + eax_32);
                                free(eax);
                                local8++;
                            }
                            free(eax_32);
                            eax_90 = local11;
                            local18 = eax_90;
                        }
                        else {
                            print_warning(param1);
                            eax_73 = -1;
                            local18 = eax_73;
                        }
                    }
                    else {
                        print_warning(param1);
                        eax_69 = -1;
                        local18 = eax_69;
                    }
                }
                else {
                    print_warning(param1);
                    eax_64 = -1;
                    local18 = eax_64;
                }
            }
            else {
                print_warning(param1);
                eax_42 = -1;
                local18 = eax_42;
            }
        }
        else {
            eax_31 = -1;
            local18 = eax_31;
        }
    }
    else {
        eax_11 = __errno_location();
        eax_14 = *eax_11;
        if (eax_14 != 2) {
            fclose(eax_8);
            eax_24 = __errno_location();
            eax = *eax_24;
            strerror(eax);
            print_error(-22);
        }
        eax_15 = 0;
        local18 = eax_15;
    }
    eax_3 = local18;
    edx = eax_4 ^ *20;
    local19 = eax_3;
    if (edx != 0) {
        eax = __stack_chk_fail();
        local19 = eax;
    }
    eax = local19;
    return eax;
}

/** address: 0x0804d743 */
void deregister_entries_gisman2(char param1[], char param2[])
{
    __size32 eax; 		// r24
    FILE *eax_12; 		// r24{0}
    int eax_14; 		// r24{0}
    int *eax_3; 		// r24{0}
    int *eax_5; 		// r24{0}
    int eax_8; 		// r24{0}

    eax_8 = *20;
    sprintf(&param2, 0x80559dd);
    eax_12 = fopen(&param2, "r");
    if (eax_12 != 0) {
        eax = *(global_0x08056f68 + 0xc338);
        if (eax == 0) {
            sprintf(&param1, 0x8055a14);
        }
        else {
            sprintf(&param1, 0x80559f4);
        }
        strcpy(0x80682e0, &param1);
    }
    else {
        eax_5 = __errno_location();
        eax_14 = *eax_5;
        if (eax_14 != 2) {
            fclose(eax_12);
            eax_3 = __errno_location();
            eax = *eax_3;
            strerror(eax);
            print_error(-33);
        }
    }
    eax = eax_8 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804ec17 */
void deregister_html(__size32 param1, char param2[], char param3[], char param4[], __size32 param5)
{
    __size32 eax; 		// r24
    int eax_12; 		// r24{0}
    int *eax_13; 		// r24{0}
    FILE *eax_16; 		// r24{0}
    int *eax_19; 		// r24{0}
    unsigned int eax_21; 		// r24{0}
    char *eax_25; 		// r24{0}
    void *eax_28; 		// r24{0}
    int eax_3; 		// r24{0}
    char *eax_31; 		// r24{0}
    int eax_34; 		// r24{0}
    void *eax_35; 		// r24{0}
    union { char[] *; int; } eax_37; 		// r24{0}
    unsigned int eax_38; 		// r24{0}
    union { __size32; char *; } eax_41; 		// r24{0}
    FILE *eax_6; 		// r24{0}
    int *eax_9; 		// r24{0}
    union { __size32; union { void *; __size32; } *; } ebx; 		// r27
    int ecx; 		// r25
    int edx; 		// r26
    char local0[]; 		// m[esp - 0x20c0]
    __size32 local14; 		// param5{0}
    unsigned int local6; 		// m[esp - 0x1018]
    unsigned int local9; 		// m[esp - 0x101c]

    eax_3 = *20;
    sprintf(&param4, 0x8055c7b);
    local14 = param5;
    eax_6 = fopen(&param4, "r");
    if (eax_6 != 0) {
        memcpy(0x8067ac0, 0x8055cb4, 32);
        mkstemp();
        eax_16 = fopen(0x8067ac0, "w+");
        if (eax_16 == 0) {
            eax_19 = __errno_location();
            eax = *eax_19;
            strerror(eax);
            print_error(-24);
        }
        atexit();
        eax_21 = *(global_0x08056f68 + 0xc338);
        if (eax_21 == 0) {
            sprintf(&param3, 0x8055da0);
        }
        else {
            sprintf(&param3, 0x8055d54);
        }
        strcpy(0x80692e0, &param3);
        local6 = 0;
        for(;;) {
            eax_25 = fgets(&param3, 0x800, eax_6);
            if (eax_25 == 0) {
                break;
            }
            local6++;
        }
        if (local6 == 0) {
        }
        else {
            rewind();
            eax_28 = calloc(local6 + 1, 4);
            local9 = 0;
            while (local6 + 1 > (int)local9) {
                *(__size32*)(local9 * 4 + eax_28) = 0;
                local9++;
            }
            local9 = 0;
            for(;;) {
                param5 = local14;
                eax_31 = fgets(&param3, 0x800, eax_6); /* Warning: also results in ecx, edx */
                if (eax_31 != 0) {
                    ebx = local9 * 4 + eax_28;
                    eax_34 = strlen(&param3);
                    local14 = ebx;
                    eax_35 = malloc(eax_34 + 1);
                    *(union { void *; __size32; }*)ebx = eax_35;
                    eax_37 = *(local9 * 4 + eax_28);
                    strcpy(eax_37, &param3);
                    local9++;
                }
            }
            delete_ext_html(param1, param2, eax_28, ecx, edx, param5, local0);
            local9 = 0;
            eax_38 = *(local9 * 4 + eax_28);
            while (eax_38 != 0) {
                eax_41 = *(local9 * 4 + eax_28);
                fprintf(eax_16, eax_41);
                local9++;
                eax_38 = *(local9 * 4 + eax_28);
            }
            fflush();
            fclose(eax_6);
            fclose(eax_16);
            local9 = 0;
            while (local6 + 1 > (int)local9) {
                eax = *(local9 * 4 + eax_28);
                free(eax);
                local9++;
            }
            free(eax_28);
        }
    }
    else {
        eax_9 = __errno_location();
        eax_12 = *eax_9;
        if (eax_12 != 2) {
            fclose(eax_6);
            eax_13 = __errno_location();
            eax = *eax_13;
            strerror(eax);
            print_error(-24);
        }
    }
    eax = eax_3 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804a3db */
void dump_plain(char param1, union { char *; __size32; } param2, union { char *; __size32; } param3)
{
    __size32 eax; 		// r24
    FILE *eax_10; 		// r24{0}
    __size32 eax_12; 		// r24{0}
    int eax_3; 		// r24{0}
    FILE *eax_6; 		// r24{0}
    int *eax_9; 		// r24{0}
    int esp; 		// r28

    eax_3 = *20;
    memcpy(param3, 0x8054aec, 32);
    mkstemp();
    eax_6 = fopen(param3, "w+");
    if (eax_6 == 0) {
        eax_9 = __errno_location();
        eax = *eax_9;
        strerror(eax);
        print_error(-23);
    }
    atexit();
    eax_10 = fopen(param2, "r");
    for(;;) {
        eax_12 = nc_fgets(esp - 0x810, 0x800, eax_10);
        if (eax_12 == 0) {
            break;
        }
        fprintf(eax_6, &param1);
    }
    fclose(eax_10);
    fclose(eax_6);
    %eax = eax_3 ^ *20;
    if (%eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x0804bf05 */
void check_ext_menu(char param1[], char param2[], char param3[], __size32 param4, __size32 param5, __size32 param6)
{
    __size32 eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    eax = find_pos(0x80551e8, param4, 0, param5, param6); /* Warning: also results in ecx, edx */
    if (eax != -1) {
bb0x804c004:
    }
    else {
        eax = find_pos(0x80551fe, param4, 0, ecx, edx); /* Warning: also results in ecx, edx */
        if (eax != -1) {
            insert_str(param1, param2, param3, 0x8055232, eax, param4);
            insert_str(param1, param2, param3, 0x805524c, eax + 1, param4);
            goto bb0x804c004;
        }
        else {
            eax = find_pos(0x8055212, param4, 0, ecx, edx);
            if (eax == -1) {
                print_error(-21);
            }
            insert_str(param1, param2, param3, 0x8055232, eax, param4);
            insert_str(param1, param2, param3, 0x805524c, eax + 1, param4);
        }
    }
    return;
}

/** address: 0x0804c009 */
__size32 new_submenu(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], union { char[] *; __size32; } param7, union { void *; int; } param8, __size32 param9, __size32 param10)
{
    __size32 eax; 		// r24
    int eax_12; 		// r24{0}
    unsigned int eax_15; 		// r24{0}
    __size32 eax_18; 		// r24{0}
    char *eax_19; 		// r24{0}
    __size32 eax_2; 		// r24{0}
    char *eax_22; 		// r24{0}
    char *eax_25; 		// r24{0}
    int eax_3; 		// r24{0}
    int eax_30; 		// r24{0}
    __size32 eax_33; 		// r24{0}
    unsigned int eax_34; 		// r24{0}
    __size32 eax_38; 		// r24{0}
    __size32 eax_40; 		// r24{0}
    union { __size32; char[] *; } eax_41; 		// r24{0}
    char *eax_42; 		// r24{0}
    char *eax_45; 		// r24{0}
    int eax_48; 		// r24{0}
    unsigned int eax_51; 		// r24{0}
    int eax_6; 		// r24{0}
    int eax_9; 		// r24{0}
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    __size32 local14; 		// eax_2{0}
    __size32 local15; 		// eax{0}
    int local3; 		// m[esp - 0x1814]
    int local4; 		// m[esp - 0x1820]
    unsigned int local7; 		// m[esp - 0x181c]
    unsigned int local8; 		// m[esp - 0x1818]

    eax_3 = *20;
    eax_6 = find_pos(0x8055250, param8, 0, param9, param10); /* Warning: also results in ecx, edx */
    local3 = eax_6;
    eax_9 = find_pos(0x8055264, param8, eax_6 + 1, ecx, edx); /* Warning: also results in ecx, edx */
    local4 = eax_9 - 1;
    if (eax_9 - 1 == -1) {
        eax_12 = find_pos(0x8055212, param8, 0, ecx, edx);
        local4 = eax_12;
    }
    eax_15 = is_submenu(param7);
    if (eax_15 != 0) {
        eax_19 = strrchr(param7, ']');
        eax_22 = strchr(param7, '[');
        eax_25 = strchr(param7, '[');
        strncpy(&param6, eax_25 + 1, eax_19 - eax_22);
        *(__size8*)(esp + eax_19 - eax_22 - 0x811) = 0;
        ecx = sprintf(&param4, 0x80552ad); /* Warning: also results in edx */
        eax_30 = find_pos(esp - 0x1810, param8, eax_6, ecx, edx); /* Warning: also results in ecx, edx */
        if (eax_30 == -1 || eax_30 >= local4) {
            local7 = eax_6 + 1;
            eax_34 = find_pos(0x80552ed, param8, eax_6, ecx, edx);
            local8 = eax_34;
            while (local8 != -1 && (int)local8 < local4) {
                eax_41 = *(local8 * 4 + param8);
                eax_42 = strchr(eax_41, '\"');
                eax_45 = strchr(eax_42 + 1, '\"');
                strncpy(&param5, eax_42 + 1, eax_45 - eax_42);
                *(__size8*)(esp + eax_45 - eax_42 - 0x1011) = 0;
                eax_48 = strcmp(&param6, &param5); /* Warning: also results in ecx, edx */
                if (eax_48 >= 0) {
                    local3++;
                    eax_51 = find_pos(0x80552ed, param8, local3, ecx, edx);
                    local8 = eax_51;
                }
                else {
                    local7 = local8;
                    goto bb0x804c31e;
                }
            }
bb0x804c31e:
            sprintf(&param6, 0x80552f6);
            insert_str(param1, param2, param3, esp - 0x810, local7, param8);
            ecx = insert_str(param1, param2, param3, 0x8055308, local7 + 1, param8); /* Warning: also results in edx */
            eax_38 = find_pos(0x8055212, param8, 0, ecx, edx);
            sprintf(&param6, 0x8055310);
            insert_str(param1, param2, param3, esp - 0x810, eax_38 + 1, param8);
            eax_40 = local7 + 1;
            local14 = eax_40;
        }
        else {
            print_warning(param3);
            eax_33 = -1;
            local14 = eax_33;
        }
    }
    else {
        print_warning(param3);
        eax_18 = -1;
        local14 = eax_18;
    }
    eax_2 = local14;
    edx = eax_3 ^ *20;
    local15 = eax_2;
    if (edx != 0) {
        eax = __stack_chk_fail();
        local15 = eax;
    }
    eax = local15;
    return eax;
}

/** address: 0x0804c41b */
__size32 new_item(char param1[], char param2[], char param3[], char param4[], char param5[], char param6[], union { char *; __size32; } param7, __size32 param8, int param9)
{
    __size8 al; 		// r8
    int eax; 		// r24
    int eax_1; 		// r24{0}
    union { char[] *; int; } eax_12; 		// r24{0}
    int eax_22; 		// r24{0}
    union { char[] *; __size32; } eax_25; 		// r24{0}
    int eax_33; 		// r24{0}
    int eax_35; 		// r24{0}
    int eax_40; 		// r24{0}
    int eax_6; 		// r24{0}
    int edx; 		// r26
    int esp; 		// r28
    int local12; 		// eax_40{0}
    int local13; 		// eax{0}
    union { int; char *; } local2; 		// m[esp - 0x1814]
    int local4; 		// m[esp - 0x1818]

    eax_6 = *20;
    al = chop(param7);
    eax_12 = strtok(param7, ";");
    local2 = eax_12;
    if (eax_12 != 0) {
        strcpy(&param6, eax_12);
        local4 = 0;
        while (local2 != 0) {
            eax_25 = strtok(0, ";");
            local2 = eax_25;
            if (eax_25 != 0) {
                strcpy(&param5, eax_25);
            }
            local4++;
        }
        if (local4 <= 2) {
            eax_33 = strcmp(&param6, 0x805539c);
            if (eax_33 != 0) {
bb0x804c582:
                sprintf(&param4, 0x80553b0);
            }
            else {
                eax_35 = strcmp(&param6, 0x805539c);
                if (eax_35 != 0) {
                    goto bb0x804c582;
                }
                else {
                    memcpy(&param4, 0x805539e, 18);
                }
            }
            insert_str(param1, param2, param3, esp - 0x1810, param9, param8);
            eax = param9 + 1;
            local12 = eax;
        }
        else {
            print_warning(param3);
            eax_22 = -1;
            local12 = eax_22;
        }
    }
    else {
        print_warning(param3);
        eax_1 = -1;
        local12 = eax_1;
    }
    eax_40 = local12;
    edx = eax_6 ^ *20;
    local13 = eax_40;
    if (edx != 0) {
        eax = __stack_chk_fail();
        local13 = eax;
    }
    eax = local13;
    return eax; /* WARNING: Also returning: al := al */
}

/** address: 0x0804e100 */
void new_ext_html(char param1[], char param2[], char param3[], char param4[], union { unsigned int; char[] *; } param5, unsigned int param6, __size32 param7, __size32 param8)
{
    __size32 eax; 		// r24
    int eax_11; 		// r24{0}
    __size32 eax_14; 		// r24{0}
    int eax_17; 		// r24{0}
    int eax_2; 		// r24{0}
    unsigned int eax_20; 		// r24{0}
    unsigned int eax_24; 		// r24{0}
    union { char[] *; int; } eax_28; 		// r24{0}
    unsigned int eax_30; 		// r24{0}
    union { __size32; char[] *; } eax_34; 		// r24{0}
    char *eax_35; 		// r24{0}
    union { __size32; char[] *; } eax_38; 		// r24{0}
    char *eax_39; 		// r24{0}
    int eax_42; 		// r24{0}
    unsigned int eax_45; 		// r24{0}
    int eax_5; 		// r24{0}
    int eax_8; 		// r24{0}
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    unsigned int local10; 		// m[esp - 0x81c]
    int local3; 		// m[esp - 0x814]
    int local7; 		// m[esp - 0x820]
    unsigned int local8; 		// m[esp - 0x828]

    eax_2 = *20;
    eax_5 = find_pos(0x8055a54, param6, 0, param7, param8); /* Warning: also results in ecx, edx */
    local3 = eax_5;
    if (eax_5 >= 0) {
bb0x804e19a:
        eax_11 = find_pos(0x8055afe, param6, local3, ecx, edx); /* Warning: also results in ecx, edx */
        eax_14 = find_pos(0x8055b04, param6, local3, ecx, edx); /* Warning: also results in ecx, edx */
        if (eax_14 == -1) {
            insert_str(param1, param2, param3, 0x8055b24, eax_11, param6);
            insert_str(param1, param2, param3, 0x8055b44, eax_11 + 1, param6);
            insert_str(param1, param2, param3, 0x8055b4a, eax_11 + 2, param6);
            ecx = insert_str(param1, param2, param3, 0x8055b51, eax_11 + 3, param6); /* Warning: also results in edx */
        }
        eax_17 = find_pos(0x8055b04, param6, local3, ecx, edx); /* Warning: also results in ecx, edx */
        local7 = eax_17;
        eax_20 = find_pos(0x8055b56, param6, eax_17, ecx, edx);
        local8 = eax_17 + 2;
        ecx = sprintf(&param4, 0x8055b5c); /* Warning: also results in edx */
        eax_24 = find_pos(esp - 0x810, param6, eax_17 + 2, ecx, edx); /* Warning: also results in ecx, edx */
        if (eax_24 == -1) {
            eax_30 = find_pos(0x8055bc9, param6, eax_17, ecx, edx);
            local10 = eax_30;
            while (local10 != -1 && (int)local10 < (int)eax_20) {
                eax_34 = *(local10 * 4 + param6);
                eax_35 = strrchr(eax_34, '\"');
                eax_38 = *(local10 * 4 + param6);
                eax_39 = strrchr(eax_38, '<');
                strncpy(&param4, eax_35 + 2, eax_39 - eax_35);
                *(__size8*)(esp + eax_39 - eax_35 - 0x811) = 0;
                eax_42 = strcmp(param5, &param4); /* Warning: also results in ecx, edx */
                if (eax_42 >= 0) {
                    local7++;
                    eax_45 = find_pos(0x8055bc9, param6, local7, ecx, edx);
                    local10 = eax_45;
                }
                else {
                    local8 = local10;
                    goto bb0x804e4f4;
                }
            }
bb0x804e4f4:
            sprintf(&param4, 0x8055b8c);
            insert_str(param1, param2, param3, esp - 0x810, local8, param6);
        }
        else {
            print_warning(param3);
            if (FORCE == 0) {
            }
            else {
                if (UPGRADE == 0) {
                }
                else {
                    sprintf(&param4, 0x8055b8c);
                    eax_28 = *(eax_24 * 4 + param6);
                    strcpy(eax_28, &param4);
                }
            }
        }
    }
    else {
        eax_8 = find_pos(0x8055a70, param6, 0, ecx, edx); /* Warning: also results in ecx, edx */
        local3 = eax_8;
        if (eax_8 >= 0) {
            goto bb0x804e19a;
        }
        else {
            print_warning(param3);
        }
    }
    eax = eax_2 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08049e14 */
__size32 nc_fgets_html(__size32 param1, union { __size32; void *; } param2, __size32 param3, union { unsigned char *; __size32; } param4, union { unsigned int; char[] *; } param5, int param6, union { FILE *; __size32; } param7, char param8)
{
    char al; 		// r8
    char dl; 		// r10
    __size32 eax; 		// r24
    char *eax_10; 		// r24{0}
    unsigned int eax_12; 		// r24{0}
    unsigned int eax_15; 		// r24{0}
    unsigned int eax_18; 		// r24{0}
    char *eax_2; 		// r24{0}
    unsigned int eax_21; 		// r24{0}
    unsigned int eax_24; 		// r24{0}
    unsigned int eax_27; 		// r24{0}
    int eax_3; 		// r24{0}
    unsigned int eax_30; 		// r24{0}
    unsigned int eax_33; 		// r24{0}
    char *eax_36; 		// r24{0}
    unsigned int eax_37; 		// r24{0}
    union { char[] *; unsigned int; } eax_4; 		// r24{0}
    char *eax_40; 		// r24{0}
    unsigned int eax_41; 		// r24{0}
    char *eax_44; 		// r24{0}
    unsigned int eax_45; 		// r24{0}
    unsigned int eax_48; 		// r24{0}
    unsigned int eax_51; 		// r24{0}
    unsigned int eax_54; 		// r24{0}
    unsigned int eax_57; 		// r24{0}
    int eax_7; 		// r24{0}
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    int esp_1; 		// r28{0}
    int esp_12; 		// r28{0}
    int esp_14; 		// r28{0}
    int esp_4; 		// r28{0}
    int esp_7; 		// r28{0}
    __size32 esp_8; 		// r28{0}
    union { __size32; unsigned char *; } local21; 		// m[esp_8 - 40]{0}
    __size32 local22; 		// m[esp_8 - 40]{0}
    int local26; 		// esp_12{0}
    char local27; 		// dl{0}
    __size32 local28; 		// m[esp_8 - 48]{0}
    char local29; 		// dl{0}
    union { unsigned char *; __size32; } local30; 		// m[esp_8 - 24]{0}
    __size32 local31; 		// m[esp_8 - 28]{0}
    union { __size32; void *; } local32; 		// m[esp_8 - 32]{0}
    union { __size32; unsigned char *; } local33; 		// m[esp_8 - 40]{0}
    __size32 local34; 		// m[esp_8 - 48]{0}
    int local35; 		// esp_7{0}
    char local36; 		// param8{0}
    union { unsigned char *; __size32; } local37; 		// param4{0}
    __size32 local38; 		// param3{0}
    union { __size32; void *; } local39; 		// param2{0}
    __size32 local40; 		// param1{0}
    int local41; 		// esp_14{0}
    char local42; 		// dl{0}
    char local43; 		// param8{0}

    *(int*)(esp_8 - 72) = param6;
    eax_2 = fgets(param5, param6, param7); /* Warning: also results in ecx, edx */
    local36 = param8;
    local37 = param4;
    local38 = param3;
    local39 = param2;
    local40 = param1;
    local43 = param8;
    if (eax_2 != 0) {
        eax_3 = strlen(param5);
        eax_4 = malloc(eax_3 + 1);
        eax_7 = strlen(param5);
        *(__size32*)(esp_8 - 76) = eax_7 + 1;
        eax_10 = malloc(eax_7 + 1); /* Warning: also results in ecx, edx, esp_1 */
        local41 = esp_1;
        *(union { unsigned int; unsigned char *; }*)(esp_8 - 44) = eax_4;
        *(__size32*)(esp_8 - 40) = param5;
        param8 = local36;
        param4 = local37;
        param3 = local38;
        param2 = local39;
        local21 = *(esp_8 - 40);
        param1 = local40;
        esp_14 = local41;
        eax_12 = *(unsigned char*)local21;
        local26 = esp_14;
        local27 = param8;
        local27 = param8;
        local27 = param8;
        local28 = param1;
        local29 = param8;
        local30 = param4;
        local31 = param3;
        local31 = param3;
        local32 = param2;
        local33 = local21;
        local34 = param1;
        local35 = esp_14;
        local35 = esp_14;
        local42 = param8;
        while ((unsigned char) eax_12 != 0) {
            eax_15 = *(unsigned char*)local21;
            if ((unsigned char) eax_15 == 60) {
                *(__size32*)(esp_8 - 24) = local21;
                *(union { char[] *; __size32; }*)(esp_8 - 32) = eax_10;
                local22 = local21 - 1;
                local32 = *(esp_8 - 32);
                local32 = *(esp_8 - 32);
                local32 = *(esp_8 - 32);
                local32 = *(esp_8 - 32);
                local33 = local22;
                if (local21 - 1 < param5) {
                    goto bb0x804a033;
                }
                else {
                    eax_18 = *(unsigned char*)(local21 - 1);
                    if ((unsigned char) eax_18 != 32) {
                        *(__size32*)(esp_8 - 48) = 0;
                        local28 = *(esp_8 - 48);
                        goto bb0x804a033;
                    }
                    else {
                        *(__size32*)(esp_8 - 48) = 1;
                        local28 = *(esp_8 - 48);
                    }
                }
bb0x804a033:
                dl = local27;
                *(__size32*)(esp_8 - 48) = local28;
                eax_24 = *(unsigned char*)*(esp_8 - 24);
                local28 = *(esp_8 - 48);
                local29 = dl;
                local30 = *(esp_8 - 24);
                local30 = *(esp_8 - 24);
                local30 = *(esp_8 - 24);
                local30 = *(esp_8 - 24);
                local34 = *(esp_8 - 48);
                local34 = *(esp_8 - 48);
                local34 = *(esp_8 - 48);
                if ((unsigned char) eax_24 != 0) {
                    edx = *(unsigned char*)*(esp_8 - 24);
                    *(char[]*)eax_10 = (unsigned char) edx;
                    eax_27 = *(unsigned char*)eax_10;
                    edx = eax_27 + 1;
                    dl = (unsigned char) eax_27 + 1;
                    *(char[]*)eax_10 = (unsigned char) eax_27 + 1;
                    eax_30 = *(unsigned char*)*(esp_8 - 24);
                    local27 = dl;
                    if ((unsigned char) eax_30 == 62) {
                        *(char[]*)eax_10 = 0;
                        *(__size32*)(esp_8 - 28) = *(esp_8 - 24) + 1;
                        eax_33 = *(unsigned char*)(*(esp_8 - 24) + 1);
                        local31 = *(esp_8 - 28);
                        local31 = *(esp_8 - 28);
                        local31 = *(esp_8 - 28);
                        if ((unsigned char) eax_33 != 10) {
                            eax_36 = strstr(eax_10, 0x8054ab6);
                            if ( ~(eax_36 == 0 || *(esp_8 - 44) <= eax_4)) {
                                *(__size8*)*(esp_8 - 44) = 10;
                                eax_37 = *(unsigned char*)*(esp_8 - 44);
                                dl = (unsigned char) eax_37 + 1;
                                *(__size8*)*(esp_8 - 44) = (unsigned char) eax_37 + 1;
                            }
                            eax_40 = strstr(eax_10, 0x8054abb);
                            if ( ~(eax_40 == 0 || *(esp_8 - 44) <= eax_4)) {
                                *(__size8*)*(esp_8 - 44) = 10;
                                eax_41 = *(unsigned char*)*(esp_8 - 44);
                                dl = (unsigned char) eax_41 + 1;
                                *(__size8*)*(esp_8 - 44) = (unsigned char) eax_41 + 1;
                            }
                            eax_44 = strstr(eax_10, 0x8054ac0);
                            if (eax_44 != 0) {
                                if (*(esp_8 - 44) > eax_4) {
                                    *(__size8*)*(esp_8 - 44) = 10;
                                    eax_45 = *(unsigned char*)*(esp_8 - 44);
                                    *(__size8*)*(esp_8 - 44) = (unsigned char) eax_45 + 1;
                                }
                                *(__size8*)*(esp_8 - 44) = 10;
                                eax_48 = *(unsigned char*)*(esp_8 - 44);
                                dl = (unsigned char) eax_48 + 1;
                                *(__size8*)*(esp_8 - 44) = (unsigned char) eax_48 + 1;
                            }
                            *(int*)(esp_8 - 72) = 0x8054ac4;
                            *(union { char[] *; __size32; }*)(esp_8 - 76) = eax_10;
                            eax = strstr(eax_10, 0x8054ac4); /* Warning: also results in ecx, edx, esp_4 */
                            local26 = esp_4;
                            local26 = esp_4;
                            if (eax != 0) {
                                if (*(esp_8 - 44) > eax_4) {
                                    *(__size8*)*(esp_8 - 44) = 10;
                                    eax_51 = *(unsigned char*)*(esp_8 - 44);
                                    *(__size8*)*(esp_8 - 44) = (unsigned char) eax_51 + 1;
                                }
                                *(__size8*)*(esp_8 - 44) = 10;
                                eax_54 = *(unsigned char*)*(esp_8 - 44);
                                edx = eax_54 + 1;
                                dl = (unsigned char) eax_54 + 1;
                                *(__size8*)*(esp_8 - 44) = (unsigned char) eax_54 + 1;
                            }
                        }
                        esp_12 = local26;
                        *(__size32*)(esp_8 - 40) = *(esp_8 - 24);
                        eax_57 = *(unsigned char*)*(esp_8 - 24);
                        local29 = dl;
                        local29 = dl;
                        local29 = dl;
                        local33 = *(esp_8 - 40);
                        local33 = *(esp_8 - 40);
                        local35 = esp_12;
                        local35 = esp_12;
                        local35 = esp_12;
                        if ((unsigned char) eax_57 == 32) {
                            if (*(esp_8 - 48) == 1) {
                                *(__size32*)(esp_8 - 40) = *(esp_8 - 24) + 1;
                                *(__size32*)(esp_8 - 48) = 0;
                                local33 = *(esp_8 - 40);
                                local34 = *(esp_8 - 48);
                                goto bb0x804a047;
                            }
                            goto bb0x804a047;
                        }
                        goto bb0x804a047;
                    }
                    *(__size32*)(esp_8 - 24)++;
                    goto bb0x804a033;
                }
                else {
                }
            }
bb0x804a047:
            dl = local29;
            *(union { __size32; unsigned char *; }*)(esp_8 - 24) = local30;
            *(__size32*)(esp_8 - 28) = local31;
            *(union { void *; __size32; }*)(esp_8 - 32) = local32;
            *(union { unsigned char *; __size32; }*)(esp_8 - 40) = local33;
            *(__size32*)(esp_8 - 48) = local34;
            esp_7 = local35;
            eax_21 = *(unsigned char*)*(esp_8 - 40);
            local37 = *(esp_8 - 24);
            local38 = *(esp_8 - 28);
            local39 = *(esp_8 - 32);
            local40 = *(esp_8 - 48);
            local41 = esp_7;
            if ((unsigned char) eax_21 != 62) {
                edx = *(unsigned char*)*(esp_8 - 40);
                dl = (unsigned char) edx;
                *(__size8*)*(esp_8 - 44) = (unsigned char) edx;
                *(__size32*)(esp_8 - 44)++;
            }
            *(__size32*)(esp_8 - 40)++;
            local36 = dl;
            param8 = local36;
            param4 = local37;
            param3 = local38;
            param2 = local39;
            local21 = *(esp_8 - 40);
            param1 = local40;
            esp_14 = local41;
            eax_12 = *(unsigned char*)local21;
            local26 = esp_14;
            local27 = param8;
            local27 = param8;
            local27 = param8;
            local28 = param1;
            local29 = param8;
            local30 = param4;
            local31 = param3;
            local31 = param3;
            local32 = param2;
            local33 = local21;
            local34 = param1;
            local35 = esp_14;
            local35 = esp_14;
            local42 = param8;
        }
        *(__size8*)*(esp_8 - 44) = 0;
        strcpy(param5, eax_4);
        free(eax_4);
        free(eax_10);
        eax = strchr(param5, '#'); /* Warning: also results in ecx, edx */
        if (eax == 0) {
bb0x804a141:
            dl = local42;
            eax = param5;
            al = (unsigned char) param5;
            local43 = dl;
        }
        else {
            if (param5 != eax) {
                eax = malloc(0x800);
                strcpy(eax, param5);
                eax = strtok(eax, "#");
                dl = (unsigned char) eax;
                sprintf(param5, 0x8054ab2);
                local42 = dl;
                ecx = free(eax); /* Warning: also results in edx */
                goto bb0x804a141;
            }
            else {
                eax = nc_fgets_html(*(esp_8 - 128), *(esp_8 - 112), *(esp_8 - 108), *(esp_8 - 104), param5, param6, param7, param8); /* Warning: also results in al, dl, ecx, edx */
                local43 = dl;
            }
        }
    }
    else {
        eax = 0;
        al = 0;
    }
    param8 = local43;
    return eax; /* WARNING: Also returning: al := al, dl := param8, ecx := ecx, edx := edx */
}

/** address: 0x0804a146 */
__size32 is_text(union { char[] *; __size32; } param1)
{
    int eax; 		// r24
    int local1; 		// m[esp - 16]
    __size32 local2; 		// m[esp - 20]

    eax = strlen(param1);
    local1 = eax - 1;
    local2 = 0;
    while (local1 >= 0) {
        eax = *(unsigned char*)(local1 + param1);
        if ((unsigned char) eax != 32) {
            eax = *(unsigned char*)(local1 + param1);
            if ((unsigned char) eax != 9) {
                eax = *(unsigned char*)(local1 + param1);
                if ((unsigned char) eax != 10) {
                    eax = *(unsigned char*)(local1 + param1);
                    if ((unsigned char) eax != 12) {
                        eax = *(unsigned char*)(local1 + param1);
                        if ((unsigned char) eax != 13) {
                            local2 = 1;
                            return local2; /* WARNING: Also returning: al := (unsigned char) local2 */
                        }
bb0x804a1a7:
                        local1--;
                    }
                    goto bb0x804a1a7;
                }
                goto bb0x804a1a7;
            }
            goto bb0x804a1a7;
        }
        goto bb0x804a1a7;
        local2 = 0;
    }
    return local2; /* WARNING: Also returning: al := (unsigned char) local2 */
}

/** address: 0x08049d41 */
__size32 nc_fgets(union { char[] *; __size32; } param1, int param2, union { FILE *; __size32; } param3)
{
    __size32 eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26

    eax = fgets(param1, param2, param3); /* Warning: also results in ecx, edx */
    if (eax != 0) {
        eax = strchr(param1, '#'); /* Warning: also results in ecx, edx */
        if (eax == 0) {
bb0x8049e0f:
            eax = param1;
        }
        else {
            if (param1 != eax) {
                eax = malloc(0x800);
                strcpy(eax, param1);
                eax = strtok(eax, "#");
                sprintf(param1, 0x8054ab2);
                ecx = free(eax); /* Warning: also results in edx */
                goto bb0x8049e0f;
            }
            else {
                eax = nc_fgets(param1, param2, param3); /* Warning: also results in ecx, edx */
            }
        }
    }
    else {
        eax = 0;
    }
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x0804ad9b */
__size32 vercmp(int param1, int param2, int param3, int param4, int param5, int param6)
{
    __size32 eax; 		// r24

    if (param1 != param4 || param2 != param5 || param3 != param6) {
        if (param4 <= param1) {
            if (param4 >= param1) {
                if (param5 <= param2) {
                    if (param5 >= param2) {
                        if (param6 <= param3) {
                            if (param6 >= param3) {
                                eax = 0;
                            }
                            else {
                                eax = 1;
                            }
                        }
                        else {
                            eax = -1;
                        }
                    }
                    else {
                        eax = 1;
                    }
                }
                else {
                    eax = -1;
                }
            }
            else {
                eax = 1;
            }
        }
        else {
            eax = -1;
        }
    }
    else {
        eax = 0;
    }
    return eax;
}

/** address: 0x0804ae20 */
void depstr(int param1, char param2[], unsigned char param3, char param4)
{
    __size32 eax; 		// r24
    int eax_11; 		// r24{0}
    char *eax_12; 		// r24{0}
    int *eax_15; 		// r24{0}
    int eax_17; 		// r24{0}
    int eax_20; 		// r24{0}
    int eax_23; 		// r24{0}
    int eax_3; 		// r24{0}
    FILE *eax_6; 		// r24{0}
    int *eax_8; 		// r24{0}
    int edx; 		// r26
    int esp; 		// r28
    int local11; 		// param1{0}
    __size32 local4; 		// m[esp - 0x1818]
    int local5; 		// m[esp - 0x181c]

    eax_3 = *20;
    memcpy(&param4, 0x8054d08, 11);
    local11 = param1;
    eax_6 = fopen(&param4, "r");
    if (eax_6 != 0) {
        local4 = 1;
        eax_12 = malloc(0x800);
        for(;;) {
bb0x804afc5:
            param1 = local11;
            eax_17 = nc_fgets_nb(esp - 0x1010, 0x800, eax_6);
            local11 = param1;
            if (eax_17 != 0) {
                if ((unsigned char) (param3) == 0) {
                    continue;
                }
                eax_20 = __isoc99_sscanf();
                local5 = eax_20;
                local11 = local5;
                local11 = local5;
                local11 = local5;
                local11 = local5;
                if (eax_20 <= 0) {
                    continue;
                }
                eax_23 = strcmp(0x8054d35, &param2);
                if (eax_23 == 0) {
                    continue;
                }
                if (local4 == 0) {
                    strcat(eax_12, 0x8054d3d);
                    strcat(eax_12, &param2);
                }
                else {
                    strcat(eax_12, 0x8054d3b);
                    strcat(eax_12, &param2);
                    local4 = 0;
                    goto bb0x804afc5;
                }
                continue;
            }
        }
        fclose(eax_6);
    }
    else {
        eax_8 = __errno_location();
        eax_11 = *eax_8;
        if (eax_11 != 2) {
            eax_15 = __errno_location();
            eax = *eax_15;
            strerror(eax);
            print_error(-17);
        }
    }
    edx = eax_3 ^ *20;
    if (edx != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08049b5f */
__size32 find_pos(union { char[] *; __size32; } param1, __size32 param2, int param3, __size32 param4, __size32 param5)
{
    char *eax; 		// r24
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    unsigned int local0; 		// m[esp - 16]
    int local2; 		// m[esp - 20]
    __size32 local5; 		// param4{0}
    __size32 local6; 		// param5{0}
    __size32 local7; 		// ecx{0}
    __size32 local8; 		// edx{0}

    local0 = 0;
    local5 = param4;
    local6 = param5;
    eax = local0 * 4 + param2;
    eax = *(local0 * 4 + param2);
    while (eax != 0) {
        local0++;
        eax = local0 * 4 + param2;
        eax = *(local0 * 4 + param2);
    }
    if ( ~(param3 >= 0 && param3 <= (int)local0)) {
        exit(-21);
    }
    local2 = param3;
    param4 = local5;
    param5 = local6;
    local7 = param4;
    local8 = param5;
    while (local2 < (int)local0) {
        eax = local2 * 4 + param2;
        eax = *(local2 * 4 + param2);
        eax = strstr(eax, param1); /* Warning: also results in ecx, edx */
        local5 = ecx;
        local6 = edx;
        local7 = ecx;
        local8 = edx;
        if (eax != 0) {
            %eax = local2;
            goto bb0x8049bd7;
        }
        local2++;
        param4 = local5;
        param5 = local6;
        local7 = param4;
        local8 = param5;
    }
    %eax = (unsigned int)-1;
bb0x8049bd7:
    ecx = local7;
    edx = local8;
    return eax; /* WARNING: Also returning: ecx := ecx, edx := edx */
}

/** address: 0x08049a5e */
__size32 delete_str(__size32 param1, int param2, __size32 param3, __size32 param4, __size32 param5, __size32 param6)
{
    int eax; 		// r24
    void *eax_2; 		// r24{0}
    union { __size32; char[] *; } eax_3; 		// r24{0}
    union { __size32; char[] *; } eax_6; 		// r24{0}
    union { __size32; union { __size32; void *; } *; } ebx; 		// r27
    __size32 ecx; 		// r25
    __size32 edx; 		// r26
    unsigned int local0; 		// m[esp - 16]
    __size32 local3; 		// m[esp - 40]
    __size32 local4; 		// ebx{0}
    __size32 local5; 		// local3{0}
    __size32 local6; 		// param4{0}
    __size32 local7; 		// param5{0}
    __size32 local8; 		// param6{0}
    __size32 local9; 		// param1{0}

    local0 = 0;
    local6 = param4;
    local7 = param5;
    local8 = param6;
    local9 = param1;
    eax = *(local0 * 4 + param3);
    while (eax != 0) {
        local0++;
        eax = *(local0 * 4 + param3);
    }
    if ( ~(param2 >= 0 && param2 <= (int)local0)) {
        print_error(-21);
    }
    local0 = param2;
    param4 = local6;
    param5 = local7;
    param6 = local8;
    param1 = local9;
    eax = *(local0 * 4 + param3);
    local4 = param6;
    local5 = param1;
    while (eax != 0) {
        eax = *(local0 * 4 + param3);
        ecx = free(eax); /* Warning: also results in edx */
        eax = *((local0 + 1) * 4 + param3);
        if (eax != 0) {
            ebx = local0 * 4 + param3;
            eax = *((local0 + 1) * 4 + param3);
            eax = strlen(eax);
            local4 = ebx;
            eax_2 = malloc(eax + 1);
            *(union { void *; __size32; }*)ebx = eax_2;
            eax_3 = *((local0 + 1) * 4 + param3);
            eax_6 = *(local0 * 4 + param3);
            local3 = eax_3;
            ecx = strcpy(eax_6, eax_3); /* Warning: also results in edx */
            local5 = local3;
        }
        ebx = local4;
        local3 = local5;
        local0++;
        local6 = ecx;
        local7 = edx;
        local8 = ebx;
        local9 = local3;
        param4 = local6;
        param5 = local7;
        param6 = local8;
        param1 = local9;
        eax = *(local0 * 4 + param3);
        local4 = param6;
        local5 = param1;
    }
    local0--;
    *(__size32*)((local0 - 1) * 4 + param3) = 0;
    return param4; /* WARNING: Also returning: edx := param5 */
}

/** address: 0x0804e56f */
void delete_ext_html(char param1[], __size32 param2, char param3[], __size32 param4, __size32 param4, __size32 param5, __size32 param6)
{
    __size32 eax; 		// r24
    int eax_1; 		// r24{0}
    __size32 eax_10; 		// r24{0}
    int eax_11; 		// r24{0}
    int eax_14; 		// r24{0}
    int eax_18; 		// r24{0}
    int eax_21; 		// r24{0}
    int eax_4; 		// r24{0}
    int eax_7; 		// r24{0}
    int ecx; 		// r25
    int edx; 		// r26
    int esp; 		// r28
    int local3; 		// m[esp - 0x814]
    int local6; 		// m[esp - 0x82c]

    eax_1 = *20;
    eax_4 = find_pos(0x8055a54, param4, 0, param4, param5); /* Warning: also results in ecx, edx */
    local3 = eax_4;
    if (eax_4 >= 0) {
bb0x804e609:
        ecx = find_pos(0x8055afe, param4, local3, ecx, edx); /* Warning: also results in edx */
        eax_10 = find_pos(0x8055b04, param4, local3, ecx, edx); /* Warning: also results in ecx, edx */
        if (eax_10 != -1) {
            eax_11 = find_pos(0x8055b04, param4, local3, ecx, edx); /* Warning: also results in ecx, edx */
            eax_14 = find_pos(0x8055b56, param4, eax_11, ecx, edx);
            ecx = sprintf(&param3, 0x8055b5c); /* Warning: also results in edx */
            eax_18 = find_pos(esp - 0x810, param4, eax_11, ecx, edx); /* Warning: also results in ecx, edx */
            if (eax_18 != -1) {
                if (eax_18 < eax_14) {
                    ecx = delete_str(param2, eax_18, param4, ecx, edx, param6); /* Warning: also results in edx */
                }
                eax_21 = find_pos(0x8055c76, param4, eax_11, ecx, edx);
                if ( ~(eax_21 == -1 || eax_14 - 1 <= eax_21)) {
                    ecx = eax_14 - eax_21 - 1;
                    if (eax_14 - eax_21 - 1 <= 1) {
                        local6 = 0;
                        while (local6 <= 3) {
                            ecx = delete_str(param2, eax_21 - 1, param4, ecx, eax_21 - 1, param6);
                            local6++;
                        }
                    }
                }
            }
            else {
                print_warning(param1);
            }
        }
        else {
            print_warning(param1);
        }
    }
    else {
        eax_7 = find_pos(0x8055a70, param4, 0, ecx, edx); /* Warning: also results in ecx, edx */
        local3 = eax_7;
        if (eax_7 >= 0) {
            goto bb0x804e609;
        }
        else {
            print_warning(param1);
        }
    }
    eax = eax_1 ^ *20;
    if (eax != 0) {
        __stack_chk_fail();
    }
    return;
}

/** address: 0x08049737 */
__size32 insert_str(char param1[], char param2[], char param3[], union { int; char[] *; } param4, int param5, __size32 param6)
{
    __size32 eax; 		// r24
    union { __size32; char[] *; } eax_12; 		// r24{0}
    union { __size32; char[] *; } eax_14; 		// r24{0}
    union { __size32; char[] *; } eax_18; 		// r24{0}
    int eax_2; 		// r24{0}
    union { __size32; void *; } eax_22; 		// r24{0}
    int eax_25; 		// r24{0}
    void *eax_28; 		// r24{0}
    union { char[] *; int; } eax_31; 		// r24{0}
    int eax_35; 		// r24{0}
    void *eax_36; 		// r24{0}
    union { __size32; char[] *; } eax_39; 		// r24{0}
    union { __size32; char[] *; } eax_41; 		// r24{0}
    union { __size32; void *; } eax_43; 		// r24{0}
    int eax_44; 		// r24{0}
    void *eax_45; 		// r24{0}
    int eax_5; 		// r24{0}
    int eax_8; 		// r24{0}
    void *eax_9; 		// r24{0}
    int ecx; 		// r25
    int edx; 		// r26
    unsigned int local0; 		// m[esp - 0x1814]
    int local4; 		// m[esp - 0x1818]

    eax_2 = *20;
    local0 = 0;
    eax_5 = *(local0 * 4 + param6);
    while (eax_5 != 0) {
        local0++;
        eax_5 = *(local0 * 4 + param6);
    }
    if ( ~(param5 >= 0 && param5 <= (int)local0)) {
        print_error(-21);
    }
    if (param5 != local0) {
        eax_14 = *((local0 - 1) * 4 + param6);
        strcpy(&param1, eax_14);
        eax_18 = *(param5 * 4 + param6);
        strcpy(&param2, eax_18);
        eax_22 = *(param5 * 4 + param6);
        free(eax_22);
        eax_25 = strlen(param4);
        eax_28 = malloc(eax_25 + 1);
        *(union { void *; __size32; }*)(param5 * 4 + param6) = eax_28;
        eax_31 = *(param5 * 4 + param6);
        strcpy(eax_31, param4);
        local4 = param5;
        while (local0 - 1 > local4) {
            eax_41 = *((local4 + 1) * 4 + param6);
            strcpy(&param3, eax_41);
            eax_43 = *((local4 + 1) * 4 + param6);
            free(eax_43);
            eax_44 = strlen(&param2);
            eax_45 = malloc(eax_44 + 1);
            *(union { void *; __size32; }*)((local4 + 1) * 4 + param6) = eax_45;
            eax = *((local4 + 1) * 4 + param6);
            strcpy(eax, &param2);
            strcpy(&param2, &param3);
            local4++;
        }
        eax_35 = strlen(&param1);
        eax_36 = malloc(eax_35 + 1);
        *(union { void *; __size32; }*)(local0 * 4 + param6) = eax_36;
        eax_39 = *(local0 * 4 + param6);
        ecx = strcpy(eax_39, &param1);
        *(__size32*)((local0 + 1) * 4 + param6) = 0;
    }
    else {
        eax_8 = strlen(param4);
        eax_9 = malloc(eax_8 + 1);
        *(union { void *; __size32; }*)(local0 * 4 + param6) = eax_9;
        eax_12 = *(local0 * 4 + param6);
        ecx = strcpy(eax_12, param4);
        *(__size32*)((local0 + 1) * 4 + param6) = 0;
    }
    edx = eax_2 ^ *20;
    if (edx != 0) {
        ecx = __stack_chk_fail(); /* Warning: also results in edx */
    }
    return ecx; /* WARNING: Also returning: edx := edx */
}

/** address: 0x0804be84 */
__size32 is_submenu(union { char[] *; __size32; } param1)
{
    char *eax; 		// r24
    char *eax_1; 		// r24{0}

    eax = strchr(param1, '[');
    if (eax != 0) {
        eax = strrchr(param1, ']');
        if (eax != 0) {
            eax_1 = strchr(param1, '[');
            eax = strrchr(param1, ']');
            if (eax_1 <= eax) {
                eax = 1;
            }
            else {
                eax = 0;
            }
        }
        else {
            eax = 0;
        }
    }
    else {
        eax = 0;
    }
    return eax;
}

